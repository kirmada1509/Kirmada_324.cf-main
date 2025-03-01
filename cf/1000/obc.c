#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Decode function
void decode(char *input, char *output, int length) {
    for (int i = 0; i < length; i++) {
        output[i] = (input[i] - 96) ^ 69;
    }
    output[length] = '\0'; // Null-terminate the output string
}

// Parent process: Reads from file, decodes, and writes to another file
void parent_process() {
    FILE *input_file = fopen("transmission.txt", "r");
    FILE *ipc_file = fopen("ipc.txt", "w");

    if (!input_file || !ipc_file) {
        perror("File opening failed in parent");
        exit(1);
    }

    char buffer[6];  // For reading 5 bytes at a time
    char output[6];  // Buffer for decoded output
    while (fgets(buffer, sizeof(buffer), input_file) != NULL) {
        size_t bytes_read = strlen(buffer);
        buffer[strcspn(buffer, "\n")] = '\0'; // Remove newline character if present
        decode(buffer, output, bytes_read);
        fprintf(ipc_file, "%s", output);
        fflush(ipc_file); // Ensure data is written immediately
    }

    fclose(input_file);
    fclose(ipc_file);
}

// Child process: Reads from ipc.txt and writes to mainframe.txt
void child_process() {
    FILE *mainframe_file = fopen("mainframe.txt", "w");
    if (!mainframe_file) {
        perror("Mainframe file opening failed in child");
        exit(1);
    }

    char ipc_buffer[11]; // For reading 10 bytes at a time
    char mainframe[11];  // Buffer for mainframe chunks
    int counter = 0;

    while (1) {
        FILE *ipc_file = fopen("ipc.txt", "r");
        if (!ipc_file) {
            perror("IPC file opening failed in child");
            sleep(1);
            continue;
        }

        counter = 0;

        // Read from ipc.txt and write to mainframe.txt in chunks
        while (fgets(ipc_buffer, sizeof(ipc_buffer), ipc_file) != NULL) {
            size_t bytes_read = strlen(ipc_buffer);
            for (size_t i = 0; i < bytes_read; i++) {
                mainframe[counter++] = ipc_buffer[i];
                if (counter == 10) {
                    mainframe[counter] = '\0';
                    fprintf(mainframe_file, "%s", mainframe);
                    fflush(mainframe_file); // Ensure data is written immediately
                    counter = 0;
                }
            }
        }

        fclose(ipc_file);

        // Exit condition: Check if parent process has completed
        if (access("transmission.txt", F_OK) != 0) {
            break; // Exit loop if transmission.txt is no longer present
        }

        sleep(1);
    }

    if (counter > 0) {
        mainframe[counter] = '\0';
        fprintf(mainframe_file, "%s", mainframe);
    }

    fclose(mainframe_file);
}

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        child_process();
    } else if (pid > 0) {
        // Parent process
        parent_process();
    } else {
        perror("Fork failed");
        return 1;
    }

    return 0;
}

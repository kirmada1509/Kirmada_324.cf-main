#include <iostream>
#include <string>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    long long total_sum = 0;
    long long current_contribution = 0;
    long long power_of_ten = 1;

    // Traverse the string from right to left
    for (int i = N - 1; i >= 0; --i) {
        int digit = S[i] - '0';
        
        // Update the current contribution by adding the value of digit times its positional contribution
        current_contribution = (current_contribution + digit * power_of_ten) % MOD;
        
        // Add the current contribution to the total sum
        total_sum = (total_sum + current_contribution) % MOD;

        // Update the power of ten for the next iteration
        power_of_ten = (power_of_ten * 10 + 1) % MOD;
    }

    cout << total_sum << endl;
    return 0;
}

#include<bits/stdc++.h>


// string compressedString(string word) {
//     unordered_map<char, int> map;
//     string res = "";
//     char prev = word[0];
//     map[prev] = 1;
//     for(int i = 0; i < word.size(); i++){
//     cout<<word[i]<<" "<<map[word[i]]<<endl;
//         if(word[i] == prev){
//             map[word[i]]++;
//         }
//         if(map[word[i]] > 9 || word[i] != prev){
//             if(map[word[i]] > 9) {
//                 cout<<"----"<<endl;
//                 map[word[i]] = 1;
//             }
//             res += to_string(map[prev]);
//             res += prev;
//             if(map[word[i]] != prev){
//                 prev = map[word[i]];
//                 map[prev] = 1;
//             }
//         }
//     }
//     return res;
// }
string compressedString(string word) {
    string res = "";
    int count = 1; 
    for (int i = 1; i <= word.size(); i++) {
        if (i < word.size() && word[i] == word[i - 1] && count < 9) {
            count++;
        } else {
            res += to_string(count);
            res += word[i - 1];
            count = 1;
        }
    }
    return res;
}


int main(){
    cout<<compressedString("aaaaaaaaaaaaaabb")<<endl;
}
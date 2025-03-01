#include<bits/stdc++.h>

    bool checkInclusion(string s1, string s2) {
        map<char, int> mp1, temp;
        for(char x: s1) mp1[x]++;
        temp = mp1;
        if(s1.length() > s2.length()) return false;
        int req = 0, window;
        req = accumulate(s1.begin(), s1.end(), 0);
        int window_size  = s1.size();
        int checker = 1;
        for(int i = 0; i <= s2.size() - s1.size(); i++){
            window = accumulate(s2.begin() + i, s2.begin() + i + window_size, 0);
            cout<<s2[i]<<" "<<window<<" "<<req<<endl;
            if(window == req){
                cout<<"entering at: "<<i<<endl;
                for(int k = i; k < i + window_size; k++){
                    if(mp1[s2[k]] > 0) {
                        mp1[s2[k]]--;   
                        cout<<"found: "<<s2[k]<<" reamaining: "<<mp1[s2[k]]<<endl;
                    }
                    else{
                        break;
                        cout<<s2[k]<<" not found"<<endl;
                        checker = 0;
                        mp1 = temp;
                    }
                }
                mp1 = temp;
                if(checker) return true;
                else checker = 0;
            }
        }
        return false;
    }

int main(){
    // string s1 = "abc", s2 = "bbbca";
    string s1 = "abc", s2 = "ccccbbbbaaaa";
    cout<<checkInclusion(s1,s2)<<endl;
}
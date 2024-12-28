#include<bits/stdc++.h>

    bool helper(string sentence1, string sentence2){
        if(sentence1 == sentence2) return true;
        if(sentence1.size() > sentence2.size()){
            string temp = sentence1;
            sentence1 = sentence2;
            sentence2 = temp;
        }
        vector<string> v1,v2, v3;
        string temp = "";
        for(char x: sentence1){
            if(!isspace(x)) temp+=x;
            else{
                v1.push_back(temp);
                temp = "";
            }
        }

        if(temp.size()) v1.push_back(temp);
        temp="";
        for(char x: sentence2){
            if(!isspace(x)) temp+=x;
            else{
                v2.push_back(temp);
                temp = "";
            }
        }
        if(temp.size()) v2.push_back(temp);
        int i = 0;
        for(i = 0; i < v1.size(); i++){
            if(v1[i] != v2[i]) {
                break;
            }
            cout<<"found: "<<v1[i]<<", i: "<<i<<endl;
        }
        i--;
        int j = v1.size() - 1, k = v2.size() - 1;
        while(j >= 0 && k >= 0 && j > i){
            if(v1[j] != v2[k]) {
                break;
            }
            cout<<"found: "<<v1[j]<<", j: "<<j<<endl;
            j--; k--;
        }
        j++;
        cout<<i<<" "<<j<<endl;
        // return(i == j+1);
        if((i == 0 && j == 0)||
            (i == v1.size()-1 && j == v1.size() - 1)||
            (i + 1 == j)
        ) return true;
        else return false;
        
    }
    bool areSentencesSimilar(string sentence1, string sentence2) {
        return (helper(sentence1, sentence2));
    }

int main(){
    string s1,s2;
    // s1 = "My name is Haley";
    // s2 = "My Haley";
    // s1 = "eTUny i b R UFKQJ EZx JBJ Q xXz";
    // s2 = "eTUny i R EZx JBJ xXz";
    s1 = "A B C D B B";
    s2 = "A B B";
    cout<<areSentencesSimilar(s1, s2)<<endl;
}
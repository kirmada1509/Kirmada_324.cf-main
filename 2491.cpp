#include<bits/stdc++.h>

    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        long long int i = 0, j = skill.size() - 1;
        long long int chemistry = 0;
        int sum = skill[i] + skill[j];
        while(i < j){
            int temp = (skill[i] + skill[j]);
            if( temp == sum){
                chemistry += skill[i] * skill[j];
            }else{
                return -1;
            }cout<<i<<" "<<j<<" "<<temp<<endl;

            i++;
            j--;
        }
        return chemistry;
    }

int main(){
    vector<int> skill = {1,1,2,3};
    cout<<dividePlayers(skill)<<endl;
}
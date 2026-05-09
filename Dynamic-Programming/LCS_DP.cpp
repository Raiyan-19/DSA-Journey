#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];

int LCS(string s1, string s2, int i, int j){
    if(i==s1.length()|| j==s2.length())
    return 0;

    if (dp[i][j]!= -1)
    return dp[i][j];

    if(i== s1.length() || j== s2.length())
    return 0;

    if(s1[i]== s2[j]){
        return 1+LCS(s1,s2,i+1,j+1);

    }
    else{
        int op1=LCS(s1, s2, i, j+1);
        int op2=LCS(s1, s2, i+1, j);

        return dp[i][j]= max(op1,op2);
        }
    }


int main(){
    string s1,s2;
    cin>>s1>>s2;

    memset(dp, -1, sizeof(dp));

    cout<<"Length of LCS = "<<LCS(s1,s2,0,0);

    return 0;
}
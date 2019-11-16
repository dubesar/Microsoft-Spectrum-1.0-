#include <bits/stdc++.h>
using namespace std;
 
 
vector<int> num;
int a, b, d, k;
int DP[51][51][2][2];
 
int call(int pos, int diff, int f,int f2){
    if(pos >num.size()) return 0;
    if(pos == num.size()){
        if(diff==0 && f2==1) return 1;
        return 0;
    }
 
    if(DP[pos][diff][f][f2] != -1) return DP[pos][diff][f][f2];
    int res = 0;
 
    int LMT;
 
    if(f == 0){
        LMT = num[pos];
    } else {
        LMT = 9;
    }
 
    for(int dgt = 0; dgt<=LMT; dgt++){
        int nf = f;
        int nf2=f2;
        int ndiff = diff;
        if(f == 0 && dgt < LMT) nf = 1;
        if(dgt == 3 || dgt == 2 ) {
            ndiff++;
            nf2=1;
        }
        if(dgt == 5 || dgt ==7 )
        {
            ndiff--;
            nf2=1;
        }
        res =(res%1000000007 + call(pos+1, ndiff, nf,nf2)%1000000007)%1000000007;
    }
 
    return DP[pos][diff][f][f2] = res;
}
 
int solve(string b){
    num.clear();
    // while(b>0){
    //     num.push_back(b%10);
    //     b/=10;
    // }
    // reverse(num.begin(), num.end());
    for(int i=0;i<b.length();i++)
    num.push_back(b[i]-'0');
    memset(DP, -1, sizeof(DP));
    int res = call(0, 0, 0,0);
    return res;
}
 
int main () {
    int t1;
    cin>>t1;
    while(t1--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int i=0;
    // cin >> a >> b;
    if(s1[s1.length()-1]!='0')
    s1[s1.length()-1]=s1[s1.length()-1]-1;
    else
    {
        while(s1[s1.length()-i-1]=='0')
        {
            s1[s1.length()-i-1]='9';
            i-=-1;
        }
        s1[s1.length()-i-1]=s1[s1.length()-i-1]-1;
    }
    int res = ((solve(s2)%1000000007 - solve(s1)%1000000007)+1000000007)%1000000007;
    cout << res << endl;
    num.clear();
   
    }
 
    return 0;
}

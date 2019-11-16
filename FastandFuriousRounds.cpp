#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007
int dp[5005][5005];
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
        ans%=M;
    }
    return ans;
}
int f(int c,int v)
{
    if(c<v)
        return 0;
    else if(v==0)
    {
        return dp[c][v]=fact(c);
    }
    else if(dp[c][v]!=-1)
        return dp[c][v];
    else
    {
        dp[c][v]=(c*f(c-1,v)+v*f(c,v-1))%M;
        return dp[c][v];
    }
}
int32_t main() {
  int n,t;
  cin>>t;
  while(t--)
  {
  string s;
  cin>>s;
  n=s.length();
  for(int i=0;i<5005;i++)
  {
      for(int j=0;j<5005;j++)
      {
          dp[i][j]=-1;
      }
  }
  int c=0,v=0;
  for(int i=0;i<n;i++)
  {
      if(s[i]=='j'||s[i]=='o'||s[i]=='k'||s[i]=='e'||s[i]=='r')
        v++;
      else
        c++;
  }
  cout<<f(c,v)<<endl;
  }
}

#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007
int dp[5005][5005];
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
        ans%=M;
    }
    return ans;
}
int f(int c,int v)
{
    if(c<v)
        return 0;
    else if(v==0)
    {
        return dp[c][v]=fact(c);
    }
    else if(dp[c][v]!=-1)
        return dp[c][v];
    else
    {
        dp[c][v]=(c*f(c-1,v)+v*f(c,v-1))%M;
        return dp[c][v];
    }
}
int32_t main() {
  int n,t;
  cin>>t;
  while(t--)
  {
  string s;
  cin>>s;
  n=s.length();
  for(int i=0;i<5005;i++)
  {
      for(int j=0;j<5005;j++)
      {
          dp[i][j]=-1;
      }
  }
  int c=0,v=0;
  for(int i=0;i<n;i++)
  {
      if(s[i]=='j'||s[i]=='o'||s[i]=='k'||s[i]=='e'||s[i]=='r')
        v++;
      else
        c++;
  }
  cout<<f(c,v)<<endl;
  }
}


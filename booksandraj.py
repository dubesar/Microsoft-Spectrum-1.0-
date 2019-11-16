#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n,p,a[100000],c=0;
    cin>>n>>p;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(long long i=0;i<n;i++)
    {
        if(a[i]<=p)
            c+=1;
        else
            break;
    }
    cout<<c<<endl;
    return 0;
}

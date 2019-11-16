a=[0]*100000
a[0]=8
a[1]=10
a[2]=18
for i in range(3,1000):
    a[i]=(a[i-1]+a[i-2]+a[i-3])%1000000007
t=int(input())
for i in range(0,t):
    n=int(input())
    print(a[n-1])

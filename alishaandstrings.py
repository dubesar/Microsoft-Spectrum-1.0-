t = int(input())
for _ in range(t):
    n=int(input())
    s = input()
    k = len(set(s))
    if(len(s)==k):
        print('No')
    else:
        print('Yes')

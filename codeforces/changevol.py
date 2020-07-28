n=int(input())
while(n!=0):
    x,y=map(int,input().split())
    c=abs(y-x)
    print(c//5-(c%5//-2))
    n=n-1
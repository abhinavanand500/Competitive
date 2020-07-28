n=int(input())
for i in range(n):
    c=0
    num=int(input())
    while(num%3==0):
        if(num%6==0):
            num=num//6
        else:
            num=num*2
        c+=1
    if(num==1):
        print(c)
    else:
        print("-1")
num=int(input())
for i in range(num):
    mm=int(input())
    n=input()
    count=0
    final=[]
    for i in n:
        if(i==')'):
            if(len(final)>0 and final[-1]=='('):
                final.pop()
            else:
                count+=1
        if(i=='('):
            final.append(i)    
    print(count)

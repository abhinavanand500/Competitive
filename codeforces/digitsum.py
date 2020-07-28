n=int(input())
final=[]
while(n!=0):
    i=0
    t=int(input())
    num=t
    arr=[]
    while(t!=0):
        num=t%10
        aa=num*(int("1"+i*"0"))
        t=t//10
        if(aa!=0):
            arr.append(aa)
        i+=1
    final.append(arr)
    n=n-1
for i in final:
    print(len(i))
    for j in i:
        i
        print(j,end=" ")
    print()
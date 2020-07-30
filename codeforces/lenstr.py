n=int(input())
for i in range(n):
    x=input()
    l=len(x)
    arr=[]
    if(l<=10):
        print(x)
    else:
        arr.append(x[0])
        arr.append(l-2)
        arr.append(x[-1])
    for i in arr:
        print(i,end="")
    print("")
        
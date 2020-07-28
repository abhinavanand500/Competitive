num=int(input())
arr3=[]
while(num!=0):
    m,n=map(int,input().split())
    arr1=set([int(x) for x in input().split()])
    arr2=set([int(x) for x in input().split()])
    c = arr1.intersection(arr2)
    if c:
        print('YES')
        print('1 ' + str(list(c)[0]))
    else:
        print("NO")
    num=num-1
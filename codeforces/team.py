n=int(input())
count=0
for i in range(n):
    arr1=[int(x) for x in input().split()]
    c=0
    for i in arr1:
        if(i==1):
            c+=1
        else:
            pass
    if(c>=2):
        count+=1
print(count)
m,n=map(int,input().split())
arr=[int(x) for x in input().split()]
maxi=arr[n-1]
count=0
for i in arr:
    if(i>0 and i>=maxi):
        count+=1
print(count)
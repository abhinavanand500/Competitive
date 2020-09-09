n = int(input())
arr = []
attractcount = 0
repalcount = 0
while(n):
    n = n-1
    num = input()
    arr.append(num)
for i in range(len(arr)-1):
    if(arr[i] == arr[i+1]):
        attractcount = 1
    else:
        repalcount = 1
count = attractcount+repalcount
print(count)

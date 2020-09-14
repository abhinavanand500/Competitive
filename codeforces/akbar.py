# n = int(input())
# while(n):
#     n = n-1
#     count = 0
#     num = int(input())
#     arr = [int(x) for x in input().split()]
#     arr.sort(reverse=True)
#     while(arr[0] >= 0):
#         maxi = arr[0]
#         for i in range(len(arr)):
#             if(arr[i] < maxi):
#                 sec = arr[i]
#                 break
#         num = maxi-sec
#         for i in range(len(arr)):
#             if(arr[i] > sec):
#                 arr[i] = arr[i]-num

#         count += 1
#     print(count-1)


for i in range(int(input())):
    l1 = int(input())
    myarr = [int(x) for x in input().split()]
    l2 = len(set(myarr))
    if 0 in set(myarr):
        l2 -= 1
    print(l2)

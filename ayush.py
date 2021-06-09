

# # arr=[int(x) for x in input().split()]
# # d={}
# # for w in arr:
# #     if w in d :
# #         d[w]+=1
# #     else:
# #         d[w]=1
# # sum=0
# # for i in d:
# #     sum+=i
# # print(sum)

# # arr=[int(x) for x in input().split()]
# # x = int(input("Start Index : "))
# # y = int(input("End Index : "))
# # maxi=0
# # for i in range(x-1,y):
# #     if(arr[i]>maxi):
# #         maxi=arr[i]
# # print(maxi)

# # 3
# # arr=[int(x) for x in input().split()]
# # d={}
# # for w in arr:
# #     if w in d :
# #         d[w]+=1
# #     else:
# #         d[w]=1
# # sum=0
# # for i in d:
# #     if(d[i]>1):
# #         print(i, ":", d[i],"times")


# # sentence = input()
# # i=0
# # while(i<len(sentence)):

# #     i+=1


# # n = 10
# # k = 7
# # input1 = [2, 1, 2, 1, 3, 1, 4, 5, 6, 1]
# # arr = []
# # for i in range(k):
# #     if(input1[i] not in arr):
# #         arr.append(input1[i])
# # print(len(arr))


# # m=int(input())
# # n=int(input())
# # arr = [int(x) for x in input().split()]
# # for i in range(len(arr)):


# # n, m = map(int, input().split())
# # count = 0
# # arr = [int(x) for x in input().split()]
# # for _ in range(0, n):
# #     list = []
# #     while len(list) > 0:
# #         list.pop()
# #     for i in range(count, count+m):
# #         list.append(i)
# #         count += 1
# #     print(list)

# def createMatrix(rowCount, colCount, dataList):
#     mat = []
#     for i in range(rowCount):
#         rowList = []
#         for j in range(colCount):
#             rowList.append(dataList[rowCount * i + j])
#         mat.append(rowList)
#     return mat


# # m = int(input())
# # n = int(input())
# alpha = [int(x) for x in input().split()]
# mat = createMatrix(input1, input2, input3)
# colsum = [sum(x) for x in zip(*mat)]
# rowSum = []
# for i in mat:
#     rowSum.append(sum(i))
# a = max(rowSum)+max(colsum)
# return a


def minOps(A, B):
    m = len(A)
    n = len(B)

    # This part checks whether conversion is possible or not
    if n != m:
        return -1

    count = [0] * 256

    for i in range(n):        # count characters in A
        count[ord(B[i])] += 1
    for i in range(n):        # subtract count for every char in B
        count[ord(A[i])] -= 1
    for i in range(256):    # Check if all counts become 0
        if count[i]:
            return -1

    # This part calculates the number of operations required
    res = 0
    i = n-1
    j = n-1
    while i >= 0:

        # if there is a mismatch, then keep incrementing
        # result 'res' until B[j] is not found in A[0..i]
        while i >= 0 and A[i] != B[j]:
            i -= 1
            res += 1

        # if A[i] and B[j] match
        if i >= 0:
            i -= 1
            j -= 1

    return res


# Driver program
A = "EACBD"
B = "EABCD"
print("Minimum number of operations required is " + str(minOps(A, B)))
# This code is contributed by Bhavya Jain

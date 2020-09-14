
def maxmarks(input1, input2):
    d = {}
    for i in input2:
        if i in d:
            d[i] = d[i]+1
        else:
            d[i] = 1
    arr1 = []
    arr2 = []
    for i in d:
        arr1.append(i)
        if(d[i] > 1):
            ans = d[i]
            while(ans > 1):
                ans -= 1
                arr2.append(i)
    for i in range(len(arr2)):
        count = 0
        while(count != 1):
            if arr2[i] in arr1:
                arr2[i] += 1
            if arr2[i] not in arr1:
                arr1.append(arr2[i])
                count = 1
    sum1 = 0
    for i in arr1:
        sum1 += i
    return sum1


x = int(input())
arr = [int(x) for x in input().split()]
print(maxmarks(x, arr))

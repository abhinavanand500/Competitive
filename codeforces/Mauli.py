# arr = [x for x in input().split()]
# maxi = 0
# for i in arr:
#     if(len(i) > maxi and len(i) % 2 == 0):
#         ans = i
#         maxi = len(i)

# if(maxi == 0):
#     print("00")
# else:
#     print(ans)

# MAX_CHAR = [26]
# def minChanges(str):
#     n = len(str)
#     if (n > MAX_CHAR[0]):
#         return -1
#     dist_count = 0
#     count = [0] * MAX_CHAR[0]
#     for i in range(n):
#         if (count[ord(str[i]) - ord('a')] == 0):
#             dist_count += 1
#         count[(ord(str[i]) - ord('a'))] += 1

#     return (n - dist_count)

# str = input()
# print(minChanges(str))


MAX_CHAR = [26]


def minChanges(str):
    n = len(str)
    if (n > MAX_CHAR[0]):
        return -1
    dist_count = 0
    count = [0] * MAX_CHAR[0]
    for i in range(n):
        if (count[ord(str[i]) - ord('a')] == 0):
            dist_count += 1
        count[(ord(str[i]) - ord('a'))] += 1
    return (n - dist_count)


str = input()
print(minChanges(str))

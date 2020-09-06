arr = []
max = 0
for i in range(5):
    x = input()
    arr.append(x)
for i in arr:
    if(len(i) > max):
        max = len(i)
        ans = i
print(ans)

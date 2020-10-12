st = input().split('+')
for i in range(len(st)):
    st[i]=int(st[i])
st.sort()
for i in range(len(st)):
    if(i<len(st)-1):
        print(st[i],end="+")
    else:
        print(st[i])
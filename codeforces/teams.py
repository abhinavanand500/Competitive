I=input
for _ in[0]*int(I()):
    I();
    a={*map(int,I().split())};
    print(bool(a&{x+1for x in a})+1)
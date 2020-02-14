a = []
n = int(input())
a = map(int, input().split())
b = []

m = 0 #割り切れるかカウンター

while True:
    for i in a:
        if i%2 == 0:
            b.append(i//2)

    if len(b) == n:
        m += 1
        a = b
        b = []
    else:
        break

print(str(m))
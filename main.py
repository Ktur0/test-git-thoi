n = int(input())
l = []
r = []
k = []
count = 0

for i in range(n):
    a, b, c = map(int, input().split())
    l.append(a)
    r.append(b)
    k.append(c)

for i in range(n):
    for j in range(l[i], r[i] + 1):
        if sum(map(int, str(j))) % k[i] == 0:
            count += 1
    print(count)
    count = 0


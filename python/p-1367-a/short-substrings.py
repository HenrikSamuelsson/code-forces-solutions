t = int(input())

for i in range(t):
    s = input()
    r = s[0]
    r += s[1:-1:2]
    r += s[-1]
    print(r)

n = int(input())

officers = 0
untreated = 0

numbers = list(map(int, input().split()))

for element in numbers:
    if element >= 0:
        officers += element
    elif officers > 0:
        officers -= 1
    else:
        untreated += 1

print(untreated)

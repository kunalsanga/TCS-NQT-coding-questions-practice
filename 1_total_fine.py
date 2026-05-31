n = int(input())

a = []
for _ in range(n):
    a.append(int(input()))

d = int(input())
x = int(input())

total_fine = 0

for num in a:
    if (num % 2) != (d % 2):
        total_fine += x

print(total_fine)
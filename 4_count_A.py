s = input()
L = int(input())

max_a = 0

for i in range(0, len(s), L):
    part = s[i:i+L]

    count_a = part.count('a')

    max_a = max(max_a, count_a)

print(max_a)
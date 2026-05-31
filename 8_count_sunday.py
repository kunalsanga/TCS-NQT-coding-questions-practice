start_day = input()
n = int(input())

days = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]

start = days.index(start_day)

count = 0

for i in range(n):
    current_day = (start + i) % 7

    if current_day == 0:
        count += 1

print(count)
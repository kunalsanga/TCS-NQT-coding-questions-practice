n = int(input())

arr = list(map(int, input().split()))

count0 = arr.count(0)
count1 = arr.count(1)
count2 = arr.count(2)

print("0 " * count0 + "1 " * count1 + "2 " * count2)
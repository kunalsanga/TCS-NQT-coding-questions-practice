n = int(input())
r = int(input())

if r == 0:
    print(0)
else:
    digit_sum = 0

    while n > 0:
        digit_sum += n % 10
        n //= 10

    digit_sum *= r

    while digit_sum >= 10:
        temp = 0

        while digit_sum > 0:
            temp += digit_sum % 10
            digit_sum //= 10

        digit_sum = temp

    print(digit_sum)
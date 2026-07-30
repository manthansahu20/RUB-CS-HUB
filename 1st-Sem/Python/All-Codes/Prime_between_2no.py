n1 = int(input("Enter starting number: "))
n2 = int(input("Enter ending number: "))

print("Prime Numbers are:")

for num in range(n1, n2 + 1):
    if num > 1:
        prime = True

        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                prime = False
                break

        if prime:
            print(num)

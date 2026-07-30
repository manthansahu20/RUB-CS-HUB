n = int(input("Enter order of matrix: "))

A = []
B = []
C = []

print("Enter First Matrix")

for i in range(n):
    row = []
    for j in range(n):
        row.append(int(input()))
    A.append(row)

print("Enter Second Matrix")

for i in range(n):
    row = []
    for j in range(n):
        row.append(int(input()))
    B.append(row)

for i in range(n):
    row = []
    for j in range(n):
        row.append(A[i][j] + B[i][j])
    C.append(row)

print("Sum Matrix:")

for row in C:
    print(row)

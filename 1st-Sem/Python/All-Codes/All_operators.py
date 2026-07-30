# All Operators in One Program

a = 10
b = 3

# Arithmetic Operators
print("Addition =", a + b)
print("Subtraction =", a - b)
print("Multiplication =", a * b)
print("Division =", a / b)
print("Floor Division =", a // b)
print("Modulus =", a % b)
print("Power =", a ** b)

# Relational Operators
print("a == b :", a == b)
print("a != b :", a != b)
print("a > b :", a > b)
print("a < b :", a < b)
print("a >= b :", a >= b)
print("a <= b :", a <= b)

# Logical Operators
print("(a>b and b>0) =", a > b and b > 0)
print("(a<b or b>0) =", a < b or b > 0)
print("not(a>b) =", not(a > b))

# Assignment Operators
c = a
c += 5
print("+= :", c)

c -= 2
print("-= :", c)

c *= 2
print("*= :", c)

c /= 2
print("/= :", c)

c //= 2
print("//= :", c)

c %= 3
print("%= :", c)

# Identity Operators
x = [1, 2]
y = x
z = [1, 2]

print("x is y :", x is y)
print("x is z :", x is z)
print("x is not z :", x is not z)

# Membership Operators
lst = [10, 20, 30]

print("20 in list :", 20 in lst)
print("50 in list :", 50 in lst)
print("50 not in list :", 50 not in lst)

# Bitwise Operators
print("a & b =", a & b)
print("a | b =", a | b)
print("a ^ b =", a ^ b)
print("~a =", ~a)
print("a << 1 =", a << 

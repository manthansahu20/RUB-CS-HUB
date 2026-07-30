name = input("Enter your full name: ")

parts = name.split()

# Middle Name
if len(parts) >= 3:
    print("Middle Name:", parts[1])
else:
    print("Middle Name not available")

# Last Name
print("Last Name:", parts[-1])

# Surname First
print("Surname First:", parts[-1], " ".join(parts[:-1]))

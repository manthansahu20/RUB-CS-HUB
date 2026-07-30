shyam = int(input("Enter Shyam's age: "))
dugu = int(input("Enter Dugu's age: "))
ishan = int(input("Enter Ishan's age: "))

if shyam < dugu and shyam < ishan:
    print("Shyam is the youngest.")

elif dugu < shyam and dugu < ishan:
    print("Dugu is the youngest.")

else:
    print("Ishan is the youngest.")

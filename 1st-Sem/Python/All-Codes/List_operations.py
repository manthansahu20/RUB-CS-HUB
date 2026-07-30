lst = [10, 20, 30, 40]

print("Original List:", lst)

lst.append(50)
print("After Append:", lst)

lst.insert(2, 25)
print("After Insert:", lst)

lst.remove(20)
print("After Remove:", lst)

lst.pop()
print("After Pop:", lst)

print("Length:", len(lst))

lst.sort()
print("Sorted List:", lst)

lst.reverse()
print("Reversed List:", lst)

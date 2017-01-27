a = int(raw_input())
b = int(raw_input())

#using xor
a = a^b
b = a^b
a = a^b

# a, b = b, a
print a
print b
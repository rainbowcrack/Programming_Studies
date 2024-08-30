# input
math = str(input("Expression: "))
# association
a, b, c = math.split()
# conversion
x = float(a)
y = str(b)
z = float(c)
# conditional
if y == "+":
    print(round(x+z,1))
elif y == "-":
    print(round(x-z,1))
elif y == "*":
    print(round(x*z,1))
elif y == "/":
    print(round(x/z,1))
else:
    print("Only four operations")

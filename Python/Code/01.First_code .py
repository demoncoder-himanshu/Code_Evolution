name = input()
print("Hello There! :]") 
# Python does not require a boilerplate (like main() in Java/C++) to execute code.It also executes code from top to bottom.


import math

def AreaOfCircle(radius):
    return math.pi * (radius ** 2)

if __name__ == "__main__":
# This block runs only when this file is executed directly.
# It does not run when this file is imported into another Python file.

    inp = int(input("Enter Radius: "))
    result = AreaOfCircle(inp)
    print(f"Area of circle of radius {inp} is {result}")

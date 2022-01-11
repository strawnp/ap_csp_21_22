from sys import argv, exit

def find_mod(a, b):
    q = int(a / b)
    rem = a - (b * q)
    return rem

def main():
    if len(argv) != 4:
        print("Usage: python calc.py <number> <op> <number>")
        exit(1)
    
    x = float(argv[1])
    y = float(argv[3])
    
    op = argv[2]
    
    if op == "+":
        print(x + y)
    elif op == "-":
        print(x - y)
    elif op == "x":
        print(x * y)
    elif op == "/":
        print(x / y)
    elif op == "%":
        print(find_mod(x, y))
    else:
        print("Invalid operator")
        exit(1)

main()
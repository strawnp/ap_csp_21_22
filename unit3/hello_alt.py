from sys import argv, exit

def main():
    if len(argv) != 2:
        print("Usage: python hello.py <name>")
        exit(1)

    print(f"hello, {argv[1]}")

main()
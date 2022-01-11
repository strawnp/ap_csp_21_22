import sys

def main():
    if len(sys.argv) != 2:
        print("Usage: python hello.py <name>")
        sys.exit(1)

    print(f"hello, {sys.argv[1]}")

main()
import sys

def main():
    print(f"You entered {len(sys.argv)} argument(s).")
    
    for i in range(len(sys.argv)):
        print(f"argv[{i}]: {sys.argv[i]}")

main()
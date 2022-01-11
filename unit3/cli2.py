import sys

def main():
    if len(sys.argv) != 2:
        print("Usage: python cli2.py <temp>")
        sys.exit(1)

    c = float(sys.argv[1])

    print(f"F: {c * 9 / 5 + 32: .1f}")

main()
def meow(n):
    print("Line 2")
    for i in range(n):
        print("meow")
    print("Line 5")

def main():
    print("Line 8")
    meow(3)
    print("Line 10")

# print("Line 12")
# main()
# print("Line 14")

if __name__ == "__main__":
    main()
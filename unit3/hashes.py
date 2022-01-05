while True:
    num = int(input("Enter the size of the square: "))
    if 1 <= num <= 23:
        break

for i in range(num):
    for j in range(num):
        print("#", end="")
    print()
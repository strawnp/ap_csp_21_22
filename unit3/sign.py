x = int(input("Enter a number: "))

if x > 0:
    print("Positive")
    if x % 2 == 0:
        print("Even")
    else:
        print("Odd")
elif x < 0:
    print("Negative")
else:
    print("Zero")
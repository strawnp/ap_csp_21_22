def get_positive_int():
    valid_input = False
    while not valid_input:
        n = int(input("Positive integer: "))
        if n > 0:
            valid_input = True
    return n

def main():
    i = get_positive_int()
    print(i)

main()
def get_temp():
    temp_c = float(input("Enter temp in Celsius: "))
    return temp_c

def convert_to_fahr(c):
    return c * 9 / 5 + 32

def display_results(c, f):
    print(f"{c:.2f} C = {f:.2f} F")

def main():
    temp_c = get_temp()
    temp_f = convert_to_fahr(temp_c)
    display_results(temp_c, temp_f)

main()
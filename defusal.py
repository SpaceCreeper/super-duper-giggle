def split_number_into_digits(number):
    digits = [int(digit) for digit in str(number)]
    return digits

def split_word_into_letters(word):
    letters = list(word)
    return letters

mode = input("Which module are you defusing?\n[a] Timing\n[b] Colour Code\n")

if (mode == "a"):
    print("\nOn The Subject Of Timing...")

    p1 = input("Pair 1: ")
    p2 = input("Pair 2: ")

    p1 = split_number_into_digits(p1)
    x = p1[0] + p1[1]

    p2 = split_word_into_letters(p2)

    for i in range(len(p2)):
        if p2[i] == "A" or "a":
            p2[i] = "4"
        elif p2[i] == "B" or "b":
            p2[i] = "3"
        elif p2[i] == "C" or "c":
            p2[i] = "7"
        elif p2[i] == "D" or "d":
            p2[i] = "9"
    y = int(p2[0]) + int(p2[1])

    z = x * y

    if z >= 0 and z <= 59:
        print("White")
    elif z >= 60 and z <= 99:
        print("Red")
    elif z >= 100 and z <= 199:
        print("Yellow")
    elif z >= 200 and z <= 299:
        print("Green")
    elif z >= 300 and z <= 399:
        print("Blue")
    elif z >= 400 and z <= 499:
        print("Yellow")
    elif z >= 500 and z <= 599:
        print("Red")
    elif z > 600:
        print("White")

elif mode == "b":
    print("\nOn The Subject Of Timing...")

    light = input("Light: ")
    display = input("Display: ")

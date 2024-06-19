def get_size(object="Object", min=1, max=1):
    while True:
        size = int(input(f"Size of {object}: "))

        if(size < min or size > max):
            continue
        else:
            break

    return size

gridSize = get_size("Grid", 1, 50)

for i in range(gridSize):
    for j in range(gridSize):
        print("# ", end="")
    print("")

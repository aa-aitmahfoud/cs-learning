def binary_search(lst, target):
    left = 0
    right = len(lst) - 1
    while left <= right:
        mid = (left + right)//2
        if lst[mid] == target:
            return mid
        elif lst[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1      

def main():
    numbers = [8, 12, 25, 34, 44]
    print("Sorted list:", numbers)

    target = int(input("Enter a number to search for: "))
    idx = binary_search(numbers, target)

    if idx == -1:
        print(f"Value {target} not found")
    else:
        print(f"Value {target} found at index {idx}")

if __name__ == "__main__":
    main()
def linear_search (lst, target):
    for i, value in enumerate(lst):
        if value == target:
            return i
    return -1

def min_max (lst):
    min_val = lst[0]
    max_val = lst[0]

    for value in lst[1:]:
        if value < min_val:
            min_val = value
        if value > max_val:
            max_val = value
    return min_val, max_val        

def bubble_sort (lst):
    n = len(lst)
    for _ in range(n - 1):
        for i in range(n - 1):
            if lst[i] > lst[i+1]:
                lst[i], lst[i+1] = lst[i+1], lst[i]

def main():

    numbers = [12, 27, 18, 2, 34]

    print("Original list:", numbers)
    idx = linear_search(numbers, 27)
    print("Index of 8:", idx)
    min_val, max_val = min_max(numbers)
    print("Min:", min_val, "Max:", max_val)

    bubble_sort(numbers)
    print("List after sort:", numbers)

if __name__ == "__main__":
    main()
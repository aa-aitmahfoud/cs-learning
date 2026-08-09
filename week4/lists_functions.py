def print_list(lst):
    print("List elements: ", lst)

def sum_list(lst):
    return sum(lst)

def main():
    numbers = [10, 20, 30, 40, 50]
    print_list(numbers)
    total = sum_list(numbers)
    print("Sum = ", total)        
if __name__ == "__main__":
    main()
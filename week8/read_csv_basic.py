import csv

def main():
    grades = []
    with open("grades.csv", newline="") as f:
        reader = csv.DictReader(f)
        for row in reader:
            grade = int(row["grade"])
            grades.append(grade)
    print("Grades:", grades)
    print("Count:", len(grades))
    print("Min:", min(grades))        
    print("Max:", max(grades))
    print("Average:", sum(grades) / len(grades))
    print("Bigger than 15:", len([g for g in grades if g >= 15]))

if __name__ == "__main__":
    main()
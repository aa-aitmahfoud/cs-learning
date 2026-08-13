import pandas as pd


def main():
    df = pd.read_csv("grades.csv")

    print(df)
    print("Count:", len(df))
    print("Min:", df["grade"].min())
    print("Max:", df["grade"].max())
    print("Average:", df["grade"].mean())


if __name__ == "__main__":
    main()
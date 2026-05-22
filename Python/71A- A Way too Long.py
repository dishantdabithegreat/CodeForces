import sys

def main():
    # Read all lines from standard input
    input_data = sys.stdin.read().splitlines()
    
    if not input_data:
        return
        
    # The first line is the number of words
    n = int(input_data[0])
    
    # Process each word
    for i in range(1, n + 1):
        word = input_data[i]
        length = len(word)
        
        if length > 10:
            # Using f-string to construct the abbreviation
            print(f"{word[0]}{length - 2}{word[-1]}")
        else:
            print(word)

if __name__ == "__main__":
    main()

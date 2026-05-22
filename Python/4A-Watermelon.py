import sys

def main():
    # Read the input weight
    w = int(sys.stdin.read().strip())
    
    # Check if the weight is an even number greater than 2
    if w > 2 and w % 2 == 0:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()

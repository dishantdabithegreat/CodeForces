import sys

def solve():
    # Reading all input at once is faster for large constraints
    input_data = sys.stdin.read().split()
    if not input_data:
        return
        
    t = int(input_data[0])
    results = []
    
    for k in range(1, t + 1):
        n = int(input_data[k])
        permutation = []
        
        # Block construction
        for i in range(n):
            small = i + 1
            median = n + (2 * i) + 1
            largest = n + (2 * i) + 2
            
            permutation.extend([small, median, largest])
            
        results.append(" ".join(map(str, permutation)))
    
    # Print all results separated by newlines
    sys.stdout.write("\n".join(results) + "\n")

if __name__ == "__main__":
    solve()
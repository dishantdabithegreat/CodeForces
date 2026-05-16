import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    t = int(input_data[0])
    output = []
    
    for i in range(1, t + 1):
        s = input_data[i]
        
        # Calculate the sum of the first 3 digits and last 3 digits
        first_half = int(s[0]) + int(s[1]) + int(s[2])
        second_half = int(s[3]) + int(s[4]) + int(s[5])
        
        if first_half == second_half:
            output.append("YES")
        else:
            output.append("NO")
            
    print('\n'.join(output))

if __name__ == '__main__':
    solve()

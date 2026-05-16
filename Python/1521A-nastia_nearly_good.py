import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    t = int(input_data[0])
    pointer = 1
    output = []
    
    for _ in range(t):
        a = int(input_data[pointer])
        b = int(input_data[pointer + 1])
        pointer += 2
        
        # If B is 1, Good and Nearly Good definitions overlap completely.
        if b == 1:
            output.append("NO")
        else:
            output.append("YES")
            x = a
            y = a * b * 2
            z = a * (2 * b + 1)
            output.append(f"{x} {y} {z}")
            
    print('\n'.join(output))

if __name__ == '__main__':
    solve()

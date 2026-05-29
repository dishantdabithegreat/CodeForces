import sys

def solve():
    input = sys.stdin.read
    data = input().split()
    
    if not data:
        return
    
    t = int(data[0])
    idx = 1
    
    out = []
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        
        a = []
        pref_max = []
        
        # Read the array and build the prefix maximum array simultaneously
        current_max = 0
        for i in range(n):
            val = int(data[idx + i])
            a.append(val)
            if i == 0:
                current_max = val
            else:
                current_max = max(current_max, val)
            pref_max.append(current_max)
            
        idx += n
        
        min_ops = 0
        # 0-indexed loops mimic 1-based odd positions (0, 2, 4...)
        for i in range(0, n, 2):
            upper_bound = float('inf')
            has_neighbor = False
            
            if i > 0:
                upper_bound = min(upper_bound, pref_max[i - 1])
                has_neighbor = True
            if i + 1 < n:
                upper_bound = min(upper_bound, pref_max[i + 1])
                has_neighbor = True
                
            if has_neighbor:
                target = upper_bound - 1
                if a[i] > target:
                    min_ops += (a[i] - target)
                    
        out.append(str(min_ops))
        
    sys.stdout.write("\n".join(out) + "\n")

if __name__ == '__main__':
    solve()

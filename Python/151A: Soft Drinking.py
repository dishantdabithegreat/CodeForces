def solve():
    # Read all 8 integers from a single line
    n, k, l, c, d, p, nl, np = map(int, input().split())
    
    # 1. Total toasts possible with the drink
    total_drink = (k * l) // nl
    
    # 2. Total toasts possible with the limes
    total_limes = c * d
    
    # 3. Total toasts possible with the salt
    total_salt = p // np
    
    # The limiting factor is the minimum of these three
    max_toasts_total = min(total_drink, total_limes, total_salt)
    
    # Divide by number of friends to get toasts per person
    print(max_toasts_total // n)

solve()

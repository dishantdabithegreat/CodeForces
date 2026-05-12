# Read a and b
a, b = map(int, input().split())

# Fashionable days: need one of each color
different_days = min(a, b)

# Remaining socks of the same color
remaining = abs(a - b)

# Same-color days: need two of the same color
same_days = remaining // 2

print(f"{different_days} {same_days}")

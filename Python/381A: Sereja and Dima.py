def solve():
    n = int(input())
    cards = list(map(int, input().split()))
    
    left = 0
    right = n - 1
    
    sereja_score = 0
    dima_score = 0
    
    # Sereja starts (turn 0 is even)
    for turn in range(n):
        # Determine which card is larger
        if cards[left] > cards[right]:
            chosen_card = cards[left]
            left += 1
        else:
            chosen_card = cards[right]
            right -= 1
            
        # Assign points based on whose turn it is
        if turn % 2 == 0:
            sereja_score += chosen_card
        else:
            dima_score += chosen_card
            
    print(f"{sereja_score} {dima_score}")

solve()

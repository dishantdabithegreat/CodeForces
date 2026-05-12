# Read n
n = int(input())
# Read the scores as a list of integers
scores = list(map(int, input().split()))

# If there's only one contest, there are zero amazing performances
if n < 2:
    print(0)
else:
    # Initialize both records with the first contest score
    min_score = scores[0]
    max_score = scores[0]
    amazing_count = 0

    # Start checking from the second contest (index 1)
    for i in range(1, n):
        if scores[i] > max_score:
            max_score = scores[i]
            amazing_count += 1
        elif scores[i] < min_score:
            min_score = scores[i]
            amazing_count += 1
            
    print(amazing_count)

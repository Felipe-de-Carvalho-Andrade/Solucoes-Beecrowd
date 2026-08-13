while True:
    n = int(input())

    if n == 0:
        break
    
    countA = 0
    countB = 0

    for i in range(n):
        a, b = map(int, input().split())
        if a > b:
            countA += 1
        elif b > a:
            countB += 1

    print(f"{countA} {countB}")
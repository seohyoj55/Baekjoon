N, M = map(int, input().split())
num_list = [list(map(int, input().split())) for _ in range(N)]
K = int(input())
for a in range(K):
    result = 0
    i, j, x, y = map(int, input().split())
    for b in range(i-1, x):
        for c in range(j-1, y):
            result += num_list[b][c]
    print(result)

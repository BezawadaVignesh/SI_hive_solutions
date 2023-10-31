t = int(input())
for _ in range(t):
    input() # ignoring array size
    print(sum([int(x) for x in input().split()]))
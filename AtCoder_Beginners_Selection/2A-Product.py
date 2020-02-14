# https://atcoder.jp/contests/abs/tasks/abc086_a

# Get input
a, b = map(int, input().split())

# Output
if (a*b) % 2:
    print("Odd")
else:
    print("Even")
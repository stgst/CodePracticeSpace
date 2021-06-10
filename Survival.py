H = []
W = []
max = 1000001
min = 0

N = int(input())

for i in range(N):
    H[i] = int(input())

for i in range(N):
    W[i] = int(input())
    if H[i]*W[i] < max:
        max = H[i]*W[i]
        min = i
print(H[min] + ' ' + W[min])

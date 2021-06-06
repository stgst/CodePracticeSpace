H = []
W = []
min = 1000001
sum = 0

N = int(input())

for i in range(N):
    H[i] = int(input())

for i in range(N):
    W[i] = int(input())
    if H[i]*W[i] < min:
        min = H[i]*W[i]
        sum = i
print(H[sum] + ' ' + W[sum])
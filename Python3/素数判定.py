import math

# 素数判定
def prime(N):
    if N<2: return False
    for i in range(2,int(math.sqrt(N))+1):
        if N%i==0: return False
    return True
from functools import reduce

def mcd(a, b):
    return mcd(b, a % b) if b else a

def mcm(a, b):
    return a / mcd(a, b) * b

print(reduce(mcm, range(2, 40)))

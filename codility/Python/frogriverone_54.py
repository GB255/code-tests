# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(X, A):
    i=0
    B=[]
    for x in A:
        if x not in B:
            B.append(x)
            if len(B)==X:
                return A.index(x)
    if len(B)<X:
        return -1
    pass

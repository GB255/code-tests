# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(A):
    B=[0]*(max(A)+1)
    for x in A:
        if x>0:
            B[x-1]=x
    if len(B)<1:
        B.append(0)
    res = B.index(0)+1
    return res
    pass

 you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(A):
    A.sort()
    B=[]
    y = max(A)
    k=0
    for i in range (1, y+1):
        B.append(i)
    for x in B:
        if x not in A:
            return x
    if max(A)<0:
        return 1
    return max(A)+1
    pass

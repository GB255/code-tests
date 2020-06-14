# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(A):
    A.sort()
    B=[]
    for i in range(1,max(A)+1):
        B.append(i)
    if B==A:
        return 1
    else:
        return 0
    pass

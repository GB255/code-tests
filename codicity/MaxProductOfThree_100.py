# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(A):
    A.sort()
    pos=A[len(A)-1]*A[len(A)-2]*A[len(A)-3]
    neg=A[0]*A[1]*A[len(A)-1]
    if pos>=neg:
        return pos
    else:
        return neg
    pass

# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(A):
    for x in A:
        k=A.count(x)
        if k>len(A)/2:
            return A.index(x)
    return -1
    pass

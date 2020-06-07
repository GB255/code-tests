# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(N, A):
    B=[0]*N
    for x in A:
        if x <= N and x>=1:
            B[x-1]+=1
        elif x==N+1:
            B = [max(B)]*N
    return B
    pass

def solution(A):
    C=A[0]
    B=sum(A[1:])
    mini=abs(B-C)
    for x in A[1:]:
        res=abs(B-C)
        if res<mini:
            mini=res
        B=B-x
        C=C+x
    return mini
    pass

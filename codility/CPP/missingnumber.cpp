// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) 
{
    
        int miss;
        int l = A.size();
        int B[l+1] = {};
        for(int i = 0; i < l+1; i++)
        {
            B[A[i]-1]=A[i];
        }
        for(int i = 0; i < l+1; i++)
        {
        if(B[i]==0)
        {
            miss = i+1;
        }
        }
    return miss;
    
    // write your code in C++14 (g++ 6.2.0)
}

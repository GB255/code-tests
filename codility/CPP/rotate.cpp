// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

vector<int> solution(vector<int> &A, int K) 
{
    vector<int> &B = A;
    int len = A.size();
    if (len>0)
    {
    for(int j=0; j<K; j++)
    {
        int init = B[len-1];
        for(int i=len-1; i>0; i--)
        {
            B[i]=B[i-1];
        }
        B[0]=init;
    }
    }

    return B;  
}

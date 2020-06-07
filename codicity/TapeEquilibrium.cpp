// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) 
{
    // write your code in C++14 (g++ 6.2.0)
    int len = A.size(), x=0, y=0, min =0;
    for(int i = 0;i<len;i++)
    {
        y=y+A[i];
    }
    for(int i = 0;i<len-1;i++)
    {
        y=y-A[i];
        x=x+A[i];
        int dif = y-x;
        if (dif<0)
        {
            dif = -dif;
        }
        if (i==0)
        {
            min = dif;
        }
        else if (dif<min)
        {
            min = dif;
        }
    }
    return min;
    
}

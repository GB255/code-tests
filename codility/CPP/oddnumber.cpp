// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) 
{
    int ind, ev=0, odd=0;
    ind = A.size();
    for(int j=0;j<ind;j++)
    {
        ev=0;
        int comp = A[j];
        for(int i=0;i<ind;i++)
        {
            if(A[i] == comp)
            {
                ev++;
            }
        }
        if (ev%2==1)
        {
            odd = A[j];
            break;
        }
        
    }
    return (odd);
}

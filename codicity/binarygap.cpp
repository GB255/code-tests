// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) 
{
        int x=N, i=0, len=0, gap=0, gapf = 0;
        while (x/2>0)
        {
            len++;
            x=x/2;
        }
        len = len+1;
        int j[len];
        x=N;
        for (i=len; i>0; i--)
        {
            j[i]=x%2;
            x=x/2;
        }
        
        for (i=1; i<=len; i++)
        {
            if (j[i]==0)
            {
                gap = gap + 1;
            }
            else if (gap > gapf)
            {
                gapf = gap;
                gap=0;
            }
        }
        return(gapf);
}

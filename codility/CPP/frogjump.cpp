/ you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, int Y, int D) 
{
    int jump = (Y-X)/D;
    if ((D*jump) < (Y-X))
    {
        jump++;
    }
    return jump;
}

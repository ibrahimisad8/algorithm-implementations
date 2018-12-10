// you can use includes, for example:
// #include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) 
{
    // write your code in C++14 (g++ 6.2.0)
    int len = A.size();
    
    if (0 == len)
    {
        return 1;
    }
    
    int cnt = 0;
    
    for (int i = 0; i < len; ++i)
    {
        if (A[i] - 1 != i)
        {
            while (A[i] > 0 && A[i] <= len && A[A[i] - 1] != A[i])
            {
                std::swap(A[i], A[A[i] - 1]);
            }
        }
    }
    
    for (int i = 1; i <= len; ++i)
    {
        if (i != A[i - 1])
            return i;
    }
    
    return len + 1;
}

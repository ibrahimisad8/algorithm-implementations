// you can use includes, for example:
// #include <algorithm>
#include <algorithm>
#include <functional>
#include <numeric>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) 
{    
    return std::accumulate(A.begin(), A.end(), (A.size()+1) * (A.size()+2) / 2, std::minus<int>());
}
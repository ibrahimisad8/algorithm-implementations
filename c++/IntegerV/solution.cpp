// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <algorithm>
#include <climits>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int solution(vector<int> &A) 
{
    int size = A.size();
    
    // No adjacent indices
    if(size==1) return -2;
    
    // Sort array
    sort(A.begin(),A.end());
    
    // Set Minimum distance
    long mindist = LLONG_MAX;
    
    // Loop
    for(int i = 0; i<size; i++)
    {
        long dist = (long) A[i] - A[i-1];
        
        if(dist<mindist)
        {
            mindist = dist;
        }
        
    }
    
    return (mindist > 100000000) ? -1 : (int) mindist;
    
}
int solution(vector<int> &A) {
    write your code in C++14 (g++ 6.2.0)
    int n = (int)A.size();
    for(auto k : A)
    {
        int i = abs(k) - 1;
        if (i != n)
            A[i] = -A[i];
    }

    for (int i = 0; i < n; ++i)
        if (A[i]>0)
            return i+1;
    return n+1;
}
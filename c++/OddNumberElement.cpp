int solution(vector<int> &A) {
    int odd = 0;
    int size = A.size();
    // write your code in C++14 (g++ 6.2.0)
    for (int i = 0; i<size; i++)
    {   
        int cache = 0;
        
        for(int j = 0; j<size; j++)
        {
           if(A[i]==A[j])
           {
               cache += 1;
           } 
           
           if(cache == 1 && j==(size-1))
           {
               odd = A[i];
           }
        }
    }
    return odd;
}
vector<int> solution(vector<int> &A, int K) {
 // write your code in C++11 (g++ 4.8.2)
 if (A.size() == 0) return A;
    K = K % A.size();
 if (K == 0) return A;
 
 vector<int> res(A.size());
 
 const int size1 = int(A.size() - K);
 
 for (int i = 0; i < size1; i++) {
        res[i + K] = A[i];
    }
 
 for (int i = size1; i < int(A.size()); i++) {
        res[i - size1] = A[i];
    }
 
 return res;
}
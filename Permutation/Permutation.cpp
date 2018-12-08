#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) 
{
	vector<int> counter(A.size());
	for (int i = 0; i < A.size(); i++) {
		if (A[i] < 1 || A[i] > A.size()) {
			return 0;
		} else if (counter[A[i] - 1] == 1) {
			return 0;
		} else {
			counter[A[i] - 1] = 1;
		}
	}
	return 1;
}
#include <iostream>
#include <vector>
using namespace std;

int solution1(vector<int> &A)
{
	int diff=0,min_diff=5000,sum1=0,sum2=0;
	auto v=A; auto it=v.begin();
	sum1=*it; it++;
	// Loop
	while(it!=v.end()) 
	{
	    sum2+=*it;it++;
	}
	// Difference
	diff= abs(sum1 - sum2);
	min_diff = diff;
	it = v.begin()+1;
	// Lopp 2
	while (it != (v.end()-1))
	{
		sum1+=*it;
		sum2-=*it;
		diff = abs(sum1 - sum2);
		if(diff<min_diff)
			min_diff=diff;
		it++;
	}
	// Return Difference
	return min_diff;
}

int solution(vector<int> &A)
{
	if(A.empty())
		return -1; 
	else
		return solution1(A);
}
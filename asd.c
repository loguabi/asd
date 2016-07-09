 	#include<iostream>
	using namespace std;
	
	int maxSubArraySum(int b[], int size)
	{
	int max_so_far = 0, max_ending_here = 0;
	
	for (int i = 0; i < size; i++)
	{
	max_ending_here = max_ending_here + b[i];
	if (max_ending_here < 0)
	max_ending_here = 0;
	if (max_so_far < max_ending_here)
	max_so_far = max_ending_here;
	}
	return max_so_far;
	}
	
	/*Driver program to test maxSubArraySum*/
	int main()
	{
	int b[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(b)/sizeof(b[0]);
	int max_sum = maxSubArraySum(b, n);
	cout << "Maximum contiguous sum is \n" << max_sum;
	return 0;
	}

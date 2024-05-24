#pragma warning (disable:4996)
#include<stdio.h>


int main()
{
	int N,i;
	scanf("%d", &N);
	int dp[5005] = { 0 };

	dp[3] = dp[5] = 1;

	for (i = 6; i <= N; i++)
	{
		if (dp[i - 3] != 0)
			dp[i] = dp[i - 3] + 1;
		if (dp[i - 5] != 0)
		{
			if (dp[i - 5] + 1 < dp[i] || dp[i]==0)
				dp[i] = dp[i - 5] + 1;
			

		}
	}

	if (dp[N] == 0)
		dp[N] = -1;
	printf("%d", dp[N]);
	
}
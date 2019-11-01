/*

Max Sum Contiguous Subarray

Name : Shreeraksha R Aithal (@Shree987)
College : NIT Karnataka
Question link : https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

*/


int Solution::maxSubArray(const vector<int> &A) {
    int Max,dp[A.size()-1],i;
    Max = dp[0]=A[0];
    for(i=1;i<A.size();i++){
    	//Array dp stores the maximum value among - ith element or previous subarray with present value(ith value)
        dp[i]= max(dp[i-1]+A[i], A[i]);
        Max = max(Max, dp[i]);
    }
    return Max;
}
/*

Max Non Negative SubArray

Name : Shreeraksha R Aithal (@Shree987)
College : NIT Karnataka
Topic : Arrays
Question link : https://www.interviewbit.com/problems/max-non-negative-subarray/

*/


vector<int> Solution::maxset(vector<int> &A){
    long Max,dp[A.size()][3];
    int i,x,y;
    Max = dp[0][0]=A[0];
    if(A[0]>=0)     x=y=dp[0][1]=dp[0][2]=0;
    else    Max=x=y=dp[0][1]=dp[0][2]=-1;
    for(i=1;i<A.size();i++){
        if(A[i]<0){
            dp[i][0]=A[i];
            dp[i][1]=dp[i][2]=-1;
        }
        else{
            if(dp[i-1][0]<0){
                dp[i][0]=A[i];
                dp[i][1]=dp[i][2]=i;
            }
            else{
                dp[i][0]=dp[i-1][0]+A[i];
                dp[i][1]=dp[i-1][1];
                dp[i][2]=dp[i-1][2]+1;
            }
            if(dp[i][0]>Max){
                Max = dp[i][0];
                x = dp[i][1];
                y = dp[i][2];
            }
            else if(dp[i][0]==Max && y-x<dp[i][2]-dp[i][1]){
                x = dp[i][1];
                y = dp[i][2];
            }
        }
    } 
    vector<int> B;
    if(x>-1){
        B.resize(y-x+1);
        copy(A.begin()+x,A.begin()+y+1, B.begin());
    }
    return B;
}
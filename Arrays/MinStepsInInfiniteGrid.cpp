/*

Min Steps in Infinite Grid

Name : Shreeraksha R Aithal (@Shree987)
College : NIT Karnataka
Topic : Arrays
Question link : https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

*/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int i,sum=0;
    for(i=1;i<A.size();i++){
        //Minimum step required would be the maximum of the difference in any of the coordinate
        sum+=max(abs(A[i]-A[i-1]), abs(B[i]-B[i-1]));
    }
    return sum;
}

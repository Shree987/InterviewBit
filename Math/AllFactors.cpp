/*

All Factors

Name : Shreeraksha R Aithal (@Shree987)
College : NIT Karnataka
Topic : Math
Question link : https://www.interviewbit.com/problems/all-factors/

*/

vector<int> Solution::allFactors(int A) {
    int i,n;
    vector<int> res;
    for(i=1;i<sqrt(A);i++){
        if(A%i==0){
            res.push_back(i);
            res.push_back(A/i);
        }
    }
    i = sqrt(A);
    if(i*i == A)    res.push_back(i);
    sort(res.begin(),res.end());
    return res;
}

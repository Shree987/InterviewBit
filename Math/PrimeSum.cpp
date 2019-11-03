/*

Prime Sum

Name : Shreeraksha R Aithal (@Shree987)
College : NIT Karnataka
Topic : Math
Question link : https://www.interviewbit.com/problems/prime-sum/

*/

bool check_prime(int n){		//Check if a number is prime or not
    int i;
    for(i=3;i<n;i+=2){
        if(n%i==0)  return false;
    }
    return true;
}

vector<int> Solution::primesum(int A){
    vector<int> B(2);
    if(A==4)    B[0]=B[1]=2;
    else{
        for(int i=3;i<A;i+=2){		//Reduce search space by only checking odd number
            if(check_prime(i) && check_prime(A-i)){	
                B[0]=i;
                B[1]=A-i;
                break;
            }
        }
    }
    return B;
}
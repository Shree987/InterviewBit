/*

Add One To Number

Name : Shreeraksha R Aithal (@Shree987)
College : NIT Karnataka
Question link : https://www.interviewbit.com/problems/add-one-to-number/

*/

vector<int> Solution::plusOne(vector<int> &A){
        int i,carry,num;
        for(i=0;i<A.size();i++){			//Detect preceding zeros
            if(A[i]!=0) break;
        }
        if(i>0){    						//Removing preceding zeros
            A.erase(A.begin(), A.begin()+i);
        }
        carry=1;

        for(i=A.size()-1;i>=0;i--){			//Adding 1 to the number
            num = carry+A[i];
            carry = num/10;
            A[i] = num%10;
        }
        
        if(carry!=0){						//Making additional space for final carry
            A.insert(A.begin(), carry);
        }
        return A;
}
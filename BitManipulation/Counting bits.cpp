Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.



Input: n = 2
Output: [0,1,1]

Input: n = 5
Output: [0,1,1,2,1,2]

Constraints:
1 <= n <= 10000




//APPROACH
// Initialize a vector or array 
// iterate from 0 to N in a for loop 
// inside of for loop declare count (because count should be reset for every iteration of i)
// inside of for loop declare  num (because we do not want to change the value of i)
// count the count the bits 
// shift 
// push_back the value of count in the array/vector


class CountBits {
public:
     vector<int> solve(int N) {
          vector<int> ans;

          for(int i=0;i<=N;i++){
               int count = 0;
               int num =i;
               while(num>0){
                    if(num&1){
                         count++;
                    }
                    num = num>>1;
               }
               ans.push_back(count);
          }
          return ans;
     }
};




class EvenOddBit {
public:
     vector<int> solve(int N) {
		vector<int> ans;
          int index= 0;
          int even_count=0;
          int odd_count=0;

          while(N>0){
               int bit_val = N&1;

               if(bit_val==1){
                    if(index%2==0){
                         even_count++;
                    }else{
                         odd_count++;
                    }
               }
               N = N>>1;
               index++;
          }
          ans.push_back(even_count);
          ans.push_back(odd_count);
          

          return ans;
     }
};

// APPROACH
// declare a vector
// iterate over the number
// set a bit value(bit_val) to check the bit is set or not after every iteration 
// check the conditions if bit value is 1 then check if the index is even or odd
// increament the counter accordingly 
// right shift the number 
// increment the index

// push the counts in vector 
// return
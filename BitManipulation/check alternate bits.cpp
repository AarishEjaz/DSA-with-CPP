class Alternate {
public:
	bool check(int n) {
    		int prev_bit = n&1;
            n = n>>1;
            while(n>0){
                  int curr_bit = n&1;
                  if(curr_bit==prev_bit){
                        return false;
                  }

                  prev_bit = curr_bit;
                  n = n>>1;
            }
            return true;
      }
};

//APPROACH
//  make a two variables prev_bit and curr_bit
//  not set prev_bit equal to n&1
//  right shift  n by 1 because we already have prev_bit bit and now we have to check next one if
//  not shifted right >> then prev_bit = curr_bit will return true and code fatt jayega while loop ke ander
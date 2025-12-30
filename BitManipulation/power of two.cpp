class PowerOfTwo {
public:
	bool check(int n) {
    		while(n%2==0){
                  n = n>>1;
            }

            if(n==1){
                  return true;
            }else{
                  return false;
            }
      }
};




// following approach counts the number of set bit in the number because the power of two has only one set bit

class PowerOfTwo {
public:
	bool check(int n) {
            int counter = 0;

            while(n>0){
                  int value = n&1;
                  if(value==1){
                        counter++;

                  }
                  n = n>>1;


            }

            if(counter == 1) {return true;}

            return false;
      }
};
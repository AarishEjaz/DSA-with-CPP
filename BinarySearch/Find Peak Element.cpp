class Peak {
public:
     int peak(vector<int> input) {
		int left=0, right =input.size()-1;

          while(left<right){
               int mid = left + ((right-left)/2);

               if(input[mid]>input[mid+1]){
                    right = mid;

               }else{
                    left= mid+1;
               }
          }

          return left;
     }
};

// APPROACH: 
// find the mid element if the element at mid+1 is greater, then the peak is in right part of array 
// if the mid is greater than mid+1, then the peak is in the left of array 

// shift the left and right accordingly 
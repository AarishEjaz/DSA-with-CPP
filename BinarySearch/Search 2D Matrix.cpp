class SearchMatrix {
public:
     bool solve(vector<vector<int>> input,int target) {
          int n = input.size(), m = input[0].size() ;
		int left = 0;
          int right = (n * m) -1;

          while(left<=right){
               int mid = left+((right-left)/2);

               int r = mid / m;
               int c = mid % m;

               if(input[r][c] == target){
                    return true;
               }else if(input[r][c]>target){
                    right=mid-1;
               }else{
                    left = mid+1;
               }
          }
          return false;
     }
};

// APPROACH: 
// [
//   [ 1,  3,  5,  7 ],
//   [10, 11, 16, 20 ],
//   [23, 30, 34, 60 ]
// ]

// the array above could be treated as a 1D array and we can virtually index the elements 
// now we have to map the virtual index with the real 2D indexes


// row = index or mid / number of columns
// cols = index or mid % number of columns

// this works because integer division gives you the number of rows you have crossed in a matrix 
// if you are on  5th element from 1 and you have 3 columns that means you have crossed 1 row
// if you are on  9th element form 1 and you have 3 columns that means you have crossed 3 row

// Modulo operator works for finding the column number because it gives the remainder 
// if you are on 6th element and you have 4 number of columns then you have 2 remaining int 
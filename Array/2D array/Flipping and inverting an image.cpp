class FlipandInvert {
public:
     vector<vector<int>> solve(vector<vector<int>> input) {
		vector<vector<int>> ans;

          int n =input.size();

          for(int i=0;i<n;i++){
               vector<int> row;
               for(int j=0;j<n;j++){
                    row.push_back(1-input[i][n-j-1]); //here we are using 1-input... because it will help invert the arrya
               }
               ans.push_back(row);
          }
          return ans;
     }
};

// APPROACH

// make a 2D array ans
// iterate over the 2D array and make a 1D array to use as row
// pushback the elements of rows of 2D array in the 1D array in revers order
// pushback the row to ans
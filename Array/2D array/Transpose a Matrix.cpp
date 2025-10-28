class Transpose {
public:
     vector<vector<int>> solve(vector<vector<int>> input) {
          int rows = input.size();
          int cols = input[0].size();
		vector<vector<int>> result(cols, vector<int>(rows,0) );

          for(int i=0;i<cols;i++){
               for(int j=0;j<rows;j++){
                    result[i][j] = input[j][i];
               }
          }
          return result;
     }
};


// while transposing always keep in mind that MxN matrix will become NxM so you have to make the resultant matrix accordingly

// Also keep in mind if the filling is vertical or horizontal 
class DivideArray {
public:
     bool check(vector<int> input) {
		unordered_map<int ,int > frequency;

          for(auto i:input){
               frequency[i]++;
          }

          for(auto i:frequency){
               if(i.second%2!=0){
                    return false;
               }
          }
          return true;
     }
};

// APPROACH 
// Here we are first making the key-value pair 
// if the pair exists then value gets incremented 
// if not then the value is created and incremented 

// then we will traverse the frequency in the value of any pair is odd 
// then we will return false
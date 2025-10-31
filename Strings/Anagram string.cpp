class Anagram {
public:
	bool check(string str1, string str2) {
    		vector<int> s1(26,0);
            vector<int> s2(26,0);

            for(int i=0;i<str1.size();i++){
                  int index = str1[i]-'a';
                  s1[index]++;
            }

            
            for(int i=0;i<str2.size();i++){
                  int index = str2[i]-'a';
                  s2[index]++;
            }

            for(int i=0;i<26;i++){
                  if(s1[i]!=s2[i]){
                        return false;
                  }
            }
            return true;
      }
};

// APPROACH

// WE WILL INITIATE TWO ARRAY/vector WITH EVERY ELEMENT AS 0
// USING THE ASCII VALUE WE WILL MAP THE INDEX OF VECTOR/ARRAY 
// FOR EACH LETTER WE WILL MAP THE INDEX AND INCREMENT THE RESPECTIVE VALUE IN THE ARRYA/VECTOR 
// IN THE END WE WILL COMPARE BOTH THE ARRAY/VECTOR TO CHECK THE FREQUENCY

// NOTE: WE ARE USING AN ARRAY WHICH HAS THE FREQUENCY OF THE LETTERS IN THE STRING
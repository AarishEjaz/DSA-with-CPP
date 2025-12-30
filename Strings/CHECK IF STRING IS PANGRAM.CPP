class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool attend[26] = {false};

        for(auto ch:sentence){
            attend[ch-'a']=true;

        } 

        for(auto a:attend){
            if(!a) return false;
        }
        return true;
    }
};

// APPROACH
// DECLARE AN BOOLEAN ARRAY OF SIZE 26 AND SET ALL ELEMENTS AS FALSE
// ITERATE OVER THE INPUT STRING AND FOR EACH CHARACTER MAP AN INDEX AND SET IT TO TRUE
// ITERATE THE WHOLE ARRAY IF ANY ELEMENT IS FALSE THEN THE STRING IS NOT A PANGRAM 
// RETURN FALSE OR TRUE ACCORDINGLY 

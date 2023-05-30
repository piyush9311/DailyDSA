class Solution {
public:
  // A fancy string is a string where no three consecutive characters are equal.

  // Given a string s, delete the minimum possible number of characters from s to make it fancy.
    string makeFancyString(string s) {
        if(s.length()<3)
            return s;
        
        string res="";
        int n=s.size();
        for(int i=0; i<n; i++) {
            if(i==0 || i==n-1)
                res+=s[i];
            else if(s[i-1]==s[i] && s[i]==s[i+1]) {
                continue;
            } else 
                res+=s[i];
        }
        return res;
    }
};

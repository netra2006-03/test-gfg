class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int n= s.length();
        int i=0,j=n-1;
        while(i<=j && j>=i){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
// User function Template for Java

class Solution {
    public int reverseDigits(int n) {
        int rev=0;
        // Code here
        while(n>0){
            int ud= n%10;
            rev=rev*10+ud;
            n/=10;
        }
        return rev;
    }
}
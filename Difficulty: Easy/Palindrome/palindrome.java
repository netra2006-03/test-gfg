class Solution {
    public boolean isPalindrome(int n) {
        // code here
        int or=n, rev=0;
        while(n!=0){
            int ud=n%10;
            rev=(rev*10)+ud;
            n/=10;
        }
        if(or==rev){
            return true;
        }
        return false;
    }
}
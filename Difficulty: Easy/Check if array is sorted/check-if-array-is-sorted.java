class Solution {
    public boolean isSorted(int[] arr) {
        // code here
        boolean val=true;
        for(int i=0;i<arr.length-1;i++){
            if(arr[i]>arr[i+1]){
                val= false;
                
            }
            
        }
        return val;
    }
}
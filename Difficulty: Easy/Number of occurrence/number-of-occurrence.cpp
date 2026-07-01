class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int i,n=arr.size(),count=0;
        for(i=0;i<n;i++){
            if(arr[i]==target){
                count++;
            }
        }
        return count;
    }
};

class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int i,n=arr.size(),low=0,high=n-1,mid,ans=n;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]<=target){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};

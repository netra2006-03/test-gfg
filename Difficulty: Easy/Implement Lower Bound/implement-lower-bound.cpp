class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int i,n=arr.size(),low=0,high=n-1,mid,ans=n;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]>=target){
                ans = mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        
        return ans;
    }
};

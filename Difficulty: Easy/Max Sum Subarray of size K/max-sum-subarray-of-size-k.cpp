class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum=0,ans=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        ans=sum;
        for(int j=k;j<arr.size();j++){
            sum+=arr[j];
            sum-=arr[j-k];
            ans=max(sum,ans);
        }
        return ans;
    }
};
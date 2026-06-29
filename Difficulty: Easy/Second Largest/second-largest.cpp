class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=arr[0],i;
        int sec_largest = INT_MIN;
        for(i=1;i<arr.size();i++){
            if(arr[i]>largest){
               sec_largest=largest;
               largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>sec_largest){
                sec_largest=arr[i];
            }
        }
        if(sec_largest==INT_MIN){
            return -1;
        }
        return sec_largest;
    }
};
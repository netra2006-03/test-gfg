class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        //we are using max heap here
        
        priority_queue<int> pq;
        int n = arr.size(),i;
        for(i=0;i<n;i++){
            pq.push(arr[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};
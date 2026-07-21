class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        int n = arr.size(),i;
        vector<int> ans;
        priority_queue<int , vector<int> , greater<int>> pq;
        for(i=0;i<n;i++){
            pq.push(arr[i]);
            
            if(pq.size()>k){
                ans.push_back(pq.top());
                pq.pop();
            }
        }
        
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        arr=ans;
    }
};
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> Union;
        int n=a.size();
        int m=b.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]<=b[j]){
                if(Union.size()==0 || Union.back()!=a[i]){
                    Union.push_back(a[i]);
                }
                i++;
            }
            else{
                if(Union.size()==0 || Union.back()!=b[j]){
                    Union.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i<n){
            if(Union.size()==0 || Union.back()!=a[i]){
                Union.push_back(a[i]);
            }
            i++;
        }
        while(j<m){
            if(Union.size()==0 || Union.back()!=b[j]){
                Union.push_back(b[j]);
            }
            j++;
        }
        return Union;
    }
};
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>ans;
        int c=1;
        int s = arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<s-1;i++){
            if(arr[i]==arr[i+1]){
                c++;
            } 
            else{
                ans.push_back(c);
                c=1;
            }
            if(i+1==s-1){
                ans.push_back(c);
            }
        }
        s=ans.size();
        sort(ans.begin(),ans.end());
        for(int i=0;i<s-1;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;
    }
};
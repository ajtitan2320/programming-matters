#include<iostream>
using namespace std;
int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}
int main()
{
    int n;
    cout<<"enter the term you want = ";
    cin>>n;
    int ans = Fibonacci(n);
    cout << endl << ans <<endl;
    return 0;
}

/* ⌚︎ Time Zone: Asia/Kolkata

💬 Programming Languages: 
JavaScript               8 hrs 12 mins       ██████████████████████░░░   87.83% 
JSON                     1 hr 1 min          ██████████░░░░░░░░░░░░░░░   10.93% 
Other                    4 mins              ░░░░░░░░░░░░░░░░░░░░░░░░░   0.81% 
CSS                      1 min               ░░░░░░░░░░░░░░░░░░░░░░░░░   0.34% 
Git Config               0 secs              ░░░░░░░░░░░░░░░░░░░░░░░░░   0.07%

🔥 Editors: 
VS Code                  9 hrs 21 mins       █████████████████████████   100.0%

💻 Operating System: 
Windows                  9 hrs 21 mins       █████████████████████████   100.0%













//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    private:
    bool check(vector<vector<int>> &m,int x,int y,int n,vector<vector<int>> visited){
        if((x>=0 && x<n) && (y>=0 && y<n) && visied[x][y]=0 && m[x][y]==1){
            return true;
        }
        else{
            false;
        }
    }
    void Solve(vector<vector<int>> &m,vector<string> &ans,vector<vector<int>> &visited,int x,int y,int n,string path){
        if(x>=n-1 && y>=n-1){
            ans.push_back(path);
            return ;
        }
        visited[x][y]=1;
        
        //down
        int newx = x+1;
        int newy = y;
        if(check(m, newx, newy, n,visited)){
            path.push_back('D');
            Solve(m,ans,visited,newx,newy,n,path);
            path.pop_back();
        }
        
        //up
         newx = x-1;
         newy = y;
        if(check(m, newx, newy, n,visited)){
            path.push_back('U');
            Solve(m,ans,visited,newx,newy,n,path);
            path.pop_back();
        }
        
        //left
         newx = x;
         newy = y-1;
        if(check(m, newx, newy, n,visited)){
            path.push_back('L');
            Solve(m,ans,visited,newx,newy,n,path);
            path.pop_back();
        }
         newx = x;
         newy = y+1;
        if(check(m, newx, newy, n,visited)){
            path.push_back('R');
            Solve(m,ans,visited,newx,newy,n,path);
            path.pop_back();
        }
        visited[x][y]=0;
        
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<int>> visited = m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        int srcx = 0;
        int srcy = 0;
        string path = "";
        Solve(m,ans,visited,srcx,srcy,n,path);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

*/
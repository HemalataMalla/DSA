class Solution {
public:
    
    // for DAG
//     vector<int> findOrder(int n, vector<vector<int>>& pre) {
//         vector<vector<int>> v(n);
//         for(auto i: pre){
//             v[i[1]].push_back(i[0]);
//         }
//         vector<int> vis(n,0);
//         stack<int> st;
//         for(int i=0;i<n;i++){
//             if(!vis[i]){
//                 dfs(v,i,vis,st,n);
//             }
//         }
//         int i=0;
//         while(!st.empty()){
//             vis[i]=st.top();
//             st.pop();
//             i++;
//         }
//         return vis;
//     }
    
//     void dfs(vector<vector<int>>& v, int i, vector<int>& vis, stack<int>& st, int n){
//         vis[i]=1;
//         // cout<<i<<" ";
//         for(int j: v[i]){
//             if(!vis[j])
//                 dfs(v,j,vis,st,n);
//         }
//         st.push(i);
//     }
    
    //for cyclic graph
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>> v(n);
        vector<int> indegree(n,0);
        for(auto i: pre){
            v[i[1]].push_back(i[0]);
            indegree[i[0]]++;
        }
        vector<int> vis(n,0);
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front());
            for(int i: v[q.front()]){
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
            q.pop();
        }
        if(ans.size()!=n)
            return {};
        return ans;
    }
};
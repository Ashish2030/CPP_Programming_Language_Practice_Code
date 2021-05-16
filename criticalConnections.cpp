class Solution {
private:
    void solve(vector<list<int>>&graph, int parent, int root, vector<int>&disc, vector<int>&low, vector<bool>&visited, int &time, vector<vector<int>>& ans){
        disc[root] = low[root] = time++;
        visited[root] = true;
        for (int child : graph[root]){
            if (parent == child) continue;
            else if (!visited[child]){
                solve(graph, root, child, disc, low, visited, time, ans);
                low[root] = min(low[root], low[child]);
            }
            else
                low[root] = min(low[root], disc[child]);
            if (disc[root] < low[child]) {
                ans.push_back({root, child});
            }
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<list<int>> graph(n);
        int m = connections.size();
        for (int i = 0; i < m; i++){
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }
        
        vector<bool> visited(n, false);
        vector<int> disc(n), low(n);
        vector<vector<int>> ans;
        int time = 0;
        solve(graph, -1, 0, disc, low, visited, time, ans);
        return ans;
    }
};
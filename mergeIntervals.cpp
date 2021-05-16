
bool compare(vector<int>a,vector<int>b){
    
    return a[0]<b[0];
}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        
        vector<vector<int>>ans;
    
        vector<int>curr=intervals[0];
        int s=intervals[0][0];
        int e=intervals[0][1];
        
        
        for(int i=1;i<n;i++){
            
            if(e>=intervals[i][0]){
                s=min(intervals[i][0],s);
                e=max(intervals[i][1],e);
            }
            else{
                ans.push_back({s,e});
                s=intervals[i][0];
                e=intervals[i][1];
                
            }
        }
        
        ans.push_back({s,e});
        
        
        
        return ans;
    }
};
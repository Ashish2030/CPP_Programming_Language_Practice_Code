    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n=nums.size();
        
        
        vector<pair<int,int>>temp;
        
        for(int i=0;i<n;i++){
            temp.push_back(make_pair(nums[i],i));
        }
        
        sort(temp.begin(),temp.end());
        sort(nums.begin(),nums.end());
        

        for(int i=0;i<n;i++){
            
            if(binary_search(nums.begin()+i+1,nums.end(),nums[i])){
                int j=lower_bound(nums.begin()+i+1,nums.end(),nums[i])-nums.begin();
                
                if(abs(temp[i].second-temp[j].second)<=k){
                    return true;
                }
                
            }
        
        }
        // cout<<endl;
        
        return false;
        
    }
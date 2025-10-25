class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // take count
        unordered_map<int,int>count;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
            
        }
        //  store count 
        vector<pair<int,int>>store;
        for(auto x: count){
            store.push_back({x.second,x.first});
        }
         sort(store.begin(),store.end());
         reverse(store.begin(),store.end());
         vector<int>ans;
         for(int i=0;i<k;i++){
            ans.push_back(store[i].second);
         }
   return ans;
    }
};

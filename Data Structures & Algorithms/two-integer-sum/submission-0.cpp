class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int , int> mp;
        for(int i = 0; i < size; i++){
            int find_int = target - nums[i];
            
            if(mp.find(find_int) != mp.end()){
                return {mp[find_int], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

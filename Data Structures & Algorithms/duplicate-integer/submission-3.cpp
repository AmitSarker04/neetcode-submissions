class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();
        if(size == 0)return false;
        else{
            int past = nums[0];
            sort(nums.begin(), nums.end());
            for(int i = 1; i < size; i++){
                if(past == nums[i])return true;
                else past = nums[i];
            }
        return false;
        }
    }
};
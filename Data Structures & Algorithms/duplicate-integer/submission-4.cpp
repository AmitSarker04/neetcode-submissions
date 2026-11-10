class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();
        if(size == 0)return false;
        else{
            int present = 0;
            int past = nums[0];
            sort(nums.begin(), nums.end());
            for(int i = 1; i < size; i++){
                present = nums[i];
                if(past == present)return true;
                else past = present;
            }
        return false;
        }
    }
};
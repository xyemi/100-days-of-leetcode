class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx;
        if(nums[nums.size() - 1] < target) {
            return nums.size();
        }
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) {
                return i;
            }


            if(nums[i] + 1 == target || (nums[i] + 2 == target && nums[i+1] + 1 != target)) {
                return i + 1;
            }
        }
    return 0;
    }
};
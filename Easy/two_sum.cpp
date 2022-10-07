class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;

        for(int i = 0; i < nums.size(); i++) {
            int num1 = nums[i];

            int j = i + 1;
            while (j < nums.size()) {
                if(num1 + nums[j] == target) {
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                }
                j++;
            }
        }

        return indices;
    }
};
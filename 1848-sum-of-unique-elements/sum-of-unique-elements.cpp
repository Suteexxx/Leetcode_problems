class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;

        for(int i = 0; i < size; i++) {
            int count = 0;

            for(int j = 0; j < size; j++) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }

            if(count == 1) {
                sum = sum + nums[i];
            }
        }

        return sum;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> twosum;
        

        for(int i=0;i<nums.size();i++)
        {   
            if(twosum.count(target-nums[i]))
            {
                return {twosum[target-nums[i]],i};
            }

            twosum[nums[i]] = i;
        }
    }
};

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> sum ={0};
        int m,large=nums[0];
        sum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            m = max(nums[i]+sum.back(),nums[i]);
            if(m>large) large = m;
            sum.push_back(m);
        }
        return large;
        
    }
};

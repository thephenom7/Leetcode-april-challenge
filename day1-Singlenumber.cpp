class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int blacksheep=0;
        for(auto x:nums)
        {
            blacksheep=blacksheep^x;
        }
        return blacksheep;
        
    }
};

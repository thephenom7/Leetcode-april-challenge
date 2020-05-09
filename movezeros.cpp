class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        queue<int> q;
        for(auto x:nums)
        {
            if(x!=0)
            {
                q.push(x);
            }
        }
        int c=count(nums.begin(),nums.end(),0);
        nums.clear();
        while(!q.empty())
        {
            nums.push_back(q.front());
            q.pop();
        }
        for(int i=0;i<c;i++)
        {
            nums.push_back(0);
        }
        
    }
};

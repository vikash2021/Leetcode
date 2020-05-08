class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int n = nums.size();
        int majority = nums[0];
        int count = 1;
        
        for(int i=1;i<n;++i)
        {
            if(nums[i]==majority)
                count += 1;
            else
            {
                count -= 1;
                if(count==0)
                {
                    majority = nums[i];
                    count = 1;
                }
            }
        }
        return majority;
    }
};

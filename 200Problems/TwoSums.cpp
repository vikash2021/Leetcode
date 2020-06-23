class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int>mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];
            if(mp.find(diff)!=mp.end())
            {
                auto p=mp.find(diff);
                v.push_back(p->second);
                v.push_back(i);
            }
            mp.insert(make_pair(nums[i],i));
        }
    return v;
    }
};


/*--------------------->>>>>>>>>>UNOPTIMISED<<<<<<<<<<-----------------------------//

        int n=nums.size();
        int k=0,l=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                if(nums[i]+nums[j]==target)
                {
                    k=i;l=j;break;
                } 
        }
        return {k,l};
        
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if (nums.size()==0)
        {
            return 0;
        }
        int dem=1;
        set<int> st;
        vector<int> kq;
        for (int i=0; i<nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        for (auto x : st)
        {
            kq.push_back(x);
        }
        int res = 1;
        for (int i=1; i<kq.size(); i++)
        {
            if (kq[i]-kq[i-1]==1)
            {
                dem++;
                res = max(res,dem);
            }
            else
            {
                dem=1;
            }
        }
        return res;
    }
};

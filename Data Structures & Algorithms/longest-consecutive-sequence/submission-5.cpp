class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int dem=0;
        if (nums.size()==0)
        {
            return 0;
        }
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
        int res = 0;
        for (int i=1; i<kq.size(); i++)
        {
            if (kq[i]-kq[i-1]==1)
            {
                dem++;
                if (dem>res)
                {
                    res = dem;
                }
            }
            else
            {
                dem=0;
            }
        }
        return res+1;
    }
};


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> res;
        long long tich = 1;
        int dem = 0, tam = -1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                dem++;
                tam = i;
            }
            else
            {
                tich *= nums[i];
            }
        }

        if (dem > 1)
        {
            return vector<int>(nums.size(), 0);
        }
        else if (dem == 1)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (i == tam)
                    res.push_back(tich);
                else
                    res.push_back(0);
            }
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                res.push_back(tich / nums[i]);
            }
        }

        return res;
    }
};

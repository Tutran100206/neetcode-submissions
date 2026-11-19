class Solution {
public:
    bool isPalindrome(string s) {
        for (int i=0; i<s.size(); i++)
        {
            if (!((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')))
            {
                s.erase(i,1);
                i--;
            }
        }
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]>='A' && s[i]<='Z')
            {
                s[i] += 32;
            }
        }
        int n = s.size();
        int i=0, j=n-1;
        while (i<j)
        {
            if (s[i]!=s[j])
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};

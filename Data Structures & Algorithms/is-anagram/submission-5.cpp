class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size())
        {
            return false;
        }
        bool co = true;
        for (int i=0; i<s.size(); i++)
        {
            int x = ktraxuathien(t,s[i]);
            if (x!=-1)
            {
                s.erase(i,1);
                t.erase(x,1);
                i--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    int ktraxuathien(string s, char k)
    {   
        int x=-1;
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]==k)
            {
                x=i;
            }
        }
        return x;
    }
};

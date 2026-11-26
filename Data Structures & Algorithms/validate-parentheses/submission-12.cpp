class Solution {
public:
    bool isValid(string s)
    {
        size_t tam = string::npos;
        while(true)
        {
            if ((tam = s.find("()")) != string::npos)
            {
                s.erase(tam, 2);
                continue;
            }
            if ((tam = s.find("{}")) != string::npos)
            {
                s.erase(tam, 2);
                continue;
            }
            if ((tam = s.find("[]")) != string::npos)
            {
                s.erase(tam, 2);
                continue;
            }
            break;
        }
        return s.size()==0;
    }
};
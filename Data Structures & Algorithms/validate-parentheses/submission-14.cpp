class Solution {
public:
    bool isValid(string s)
    {
        int tam = string::npos;
        while(true)
        {
            if ((tam = s.find("()")) != string::npos)
            {
                s.erase(tam, 2);
            }
            else if ((tam = s.find("{}")) != string::npos)
            {
                s.erase(tam, 2);
            }
            else if ((tam = s.find("[]")) != string::npos)
            {
                s.erase(tam, 2);

            }
            else
            {
                break;
            }
        }
        return s.size()==0;
    }
};
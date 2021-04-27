class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=0;
        for(int i=0;i<s.length();i++)
        {
            int a[256]={0};
            for(int j=i;j<s.length();j++)
            {
                if(a[s[j]]==1)
                    break;
                else
                {
                    res=max(res,j-i+1);
                    a[s[j]]=1;
                }
            }
        }
        return res;
        
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        map<char,int> mp ;

        int left = 0 ;
        int right = 0 ;;
        int ans = INT_MIN ;

        if(s.length() == 1) return 1 ;

        while(right <  s.length())
        {
            char ch = s[right] ;
            if(mp.find(ch) != mp.end())  // already
            {
                // cout<<"g";

                //BAYXZAB

                // cout<<ans<<endl; 
                left =  max(left,mp[ch] +  1);
            }

        ans = max(ans,right-left+1) ;
            mp[ch] =  right ;

            right++ ;

        }

        if(ans == INT_MIN) return 0 ;
        return ans ;
        
    }
};
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1,st2 ;

        for(auto x : s){
            if(x == '#')
            {
                if(st1.size() > 0)
                st1.pop() ;

            }
            else
             st1.push(x);    
        }

        for(auto x : t)
        {
            if(x == '#')
            {
                if(st2.size() > 0)
                st2.pop() ;

            }
            else
             st2.push(x);
        }

            return st1 == st2 ;
        
    }
};
class Solution {
public:
    bool isSubsequence(string s, string t) {

        int m=s.length();
        int n=t.length();
        if(m==0) return true ;

        if(n<m) return false ;

        if(m==n) return s==t ; 

        int i = 0 ;
        int j = 0 ;
        while(j < n){

            if(s[i] == t[j]){
                i++ ;
                j++ ;

                if(i==m) return true ;    

            }
            else
                j++ ;


        }

    return false ;    

        
    }
};
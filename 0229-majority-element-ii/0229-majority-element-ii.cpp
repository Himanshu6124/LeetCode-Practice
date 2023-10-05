class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int num1 = nums[0] ;
        int num2 = nums[0] ;
        
        int n = nums.size() ;
        
        
        int cnt1 = 0 ,cnt2 = 0 ;
        
        for( int ele : nums)
        {
            if(ele ==num1)
                cnt1++ ;
            
            else if(ele == num2)
                cnt2++ ;
            
            else if(cnt1 == 0)
            {
                num1 = ele ;
                cnt1 =1 ;

            }

            else if(cnt2 == 0)
            {
                num2 = ele ;
                cnt2 =1 ;

            }
            
            
            else{
                cnt1-- ;
                cnt2-- ;
            }
        
        }
        
        int c1 = 0 ;
        int c2 = 0 ;
        
        for(auto ele : nums)
        {
            if(ele == num1)
                c1++ ;
            else if(ele ==num2)
                c2++ ;
        }
        
        vector<int> ans ;

        
        if(c1 > n/3)
            ans.push_back(num1) ;
        
        
        
        if(c2 > n/3)
            ans.push_back(num2) ;
            
        return ans ;
        
        
    }
};
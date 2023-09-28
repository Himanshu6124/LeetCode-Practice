class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) 
    {
        int n = arr.size() ;
        int ev= 0 ;
        
        
        for(int i = 0 ; i< n ;i++)
        {
            if(arr[i] % 2 == 0)
            {
                swap(arr[ev] , arr[i]) ;
                ev++ ;

            }

        }
        
        return arr ;
    }
};
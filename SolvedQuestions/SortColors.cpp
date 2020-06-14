class Solution {
public:
    void sortColors(vector<int>& nums) {
        

        
        int n=nums.size();
        /*---1.--->>
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                z++;
            else if(nums[i]==1)
                o++;
            else
                t++;
        }
        
        for(int i=0;i<z;i++)
            nums[i]=0;
        for(int i=z;i<z+o;i++)
            nums[i]=1;
        for(int i=z+o;i<z+o+t;i++)
            nums[i]=2;
            */
//---2.--->   sort(nums.begin(),nums.end());
        
        
         int lo = 0; 
         int hi = n - 1; 
         int mid = 0; 
  
    // Iterate till all the elements 
    // are sorted 
         while (mid <= hi) 
         { 
             switch (nums[mid])
                { 
  
        // If the element is 0 
                    case 0: 
                    swap(nums[lo++], nums[mid++]); 
                    break; 
  
        // If the element is 1 . 
                    case 1: 
                    mid++; 
                    break; 
  
        // If the element is 2 
                    case 2: 
                    swap(nums[mid], nums[hi--]); 
                    break; 
                } 
    } 
        
    }
};

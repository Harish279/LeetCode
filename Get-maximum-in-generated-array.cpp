class Solution {
public:
    int getMaximumGenerated(int n) {
               
        if(n==2 || n==1 )
            return 1;
        if(n==0)
            return 0;
        int nums[n+1],o=0,m=0;
        nums[0]=0;
        nums[1]=1;
        for(int i=1;i<n;i++)
        {
            o=2*i;
            m=2*i+1;
            
            nums[2*i]=nums[i];
            if(o==n)
                break;
            nums[2*i+1]=nums[i]+nums[i+1];
            if(m==n)
                break;
            
          
        }
        int large=0;
        for(int i=0;i<n+1;i++)
        {
            if(large<nums[i])
                large=nums[i];
        }
        return large;
    }
};
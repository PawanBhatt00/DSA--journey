class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        long long int ans=1;
        bool isZero=false;
        for(int num:nums)
        {
            if(num==0) isZero=true;
        }

        for(int num:nums)
        {
            if(num==0) continue;
            ans*=num;
        }
        int count=0;
        for(int num:nums) if(num==0) count++;

        vector<int>result;

        if(count>=2) 
        {
            for(int num:nums)
            {
                result.push_back(0);
            }
            return result;
        }

        for(int num:nums)
        {
            if(num==0){
                result.push_back(ans);
            }
            else if(isZero)
            {
                result.push_back(0);
            }

            else result.push_back(ans/num);
        }
        return result;
    }
};
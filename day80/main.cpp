class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int len = nums.size();
        vector<int>s;
        for (int i = len - 1, prev = 0; i >= 0; i--) 
            res[i] = prev, prev += nums[i];
        for (int i = 0, prev = 0; i < len; i++)
            res[i] = abs(prev - res[i]), prev += nums[i];
        return res;
         
        // for (int i=0;i<n;i++){
        //     if (i==0){
        //         s.push_back(nums[i])
        //     }
        //  }
    }
};

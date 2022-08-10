class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> op;
        for(int i=0; i<2*nums.size(); i++) {
            op.push_back(nums[i%nums.size()]);
        }
        return op;
    }
};
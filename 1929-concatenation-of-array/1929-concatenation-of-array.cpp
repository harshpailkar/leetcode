class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> nums2 = nums;
        vector<int> output(nums);
        output.insert(output.end(), nums2.begin(), nums2.end());
        return output;
        }
};
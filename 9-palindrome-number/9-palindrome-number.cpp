class Solution {
public:
    bool isPalindrome(int x) {
        string str;
        string rev;
        str = to_string(x);
        rev = to_string(x);
        reverse(str.begin(), str.end());
        if(str == rev)
            return true;
        else
            return false;
    }
};
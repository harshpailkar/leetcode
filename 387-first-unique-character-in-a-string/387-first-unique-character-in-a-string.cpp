class Solution {
public:
    int firstUniqChar(string s) {
        string sub = s;
        int pos = -1;
       for(int i = 0; i < s.length(); i++){
           s.erase(s.begin() + i);
           if(s.find(sub[i]) == string::npos){
               pos = i;
               break;
           }
           s = sub;
       }
       return pos;
    }
};
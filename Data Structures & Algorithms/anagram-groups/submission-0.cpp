class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;        
        for(const string &str: strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(str);
        }
        vector<vector<string>> result;
        for(auto &ptr: mp){
            result.push_back(move(ptr.second));
        }
        return result;
    }
};
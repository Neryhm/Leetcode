//Approach #1
class Solution{
  public:
    bool isAnagram(string s,string t){
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      return s==t;
    }
};

//Approach #2
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int>hash(26,0);
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;
        }
        for(int i:hash) if(i) return false;
        return true;
    }
};

class Solution {
public:
unordered_map<char,int> getFrequencies(string& s){
    unordered_map<char,int> res;
    for(char c:s){
        if(res.count(c)) res[c]++;
        else res[c]=1;
    }return res;
}
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> sCount=getFrequencies(s); //O(n)
        unordered_map<char,int> tCount=getFrequencies(t);  //O(n)
        for(char c:s){//O(n)
            if(sCount[c]!=tCount[c]) return false;//O(1)
        }//O(n)
        return true;
    }
    //O(n)--tc
    //space comp-- O(n)
};

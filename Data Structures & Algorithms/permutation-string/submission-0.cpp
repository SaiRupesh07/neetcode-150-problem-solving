class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp1,mp2;
        
        for( char c: s1){
            mp1[c]++;
        }

        int n=s1.size();
        int m=s2.size();

        if(n>m) return false;

        int i=0,j=0;
        while(j<m){
            mp2[s2[j]]++;

            if(j-i+1==n){
                if(mp1==mp2) return true;
                mp2[s2[i]]--;
                if(mp2[s2[i]]==0)  mp2.erase(s2[i]);
                i++;
            }
           j++;
        }
        return false;
    }
};

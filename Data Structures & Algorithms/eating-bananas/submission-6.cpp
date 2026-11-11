class Solution {
public:
    long long calfun(vector<int>& piles,int h){
        long long totalans=0;
        for(int i=0;i<piles.size();i++){
            totalans+=(piles[i] + (long long)h - 1) / h;
        }
        return totalans;
    }
    int maxi(vector<int>&piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=maxi(piles);
        while(l<=r){

            int mid=l+(r-l)/2;
           long long totalans=calfun(piles,mid);

            if(totalans<=h){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};
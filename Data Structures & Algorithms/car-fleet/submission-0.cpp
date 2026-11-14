class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();

        vector<pair<int,double>>car;

        for(int i=0;i<n;i++){
            double time = double (target-position[i])/ speed[i];
            car.push_back({position[i],time});
        }

        sort(car.begin(),car.end(), [] (auto a, auto b){
            return a.first > b.first;
        });

        stack<double>st;
        for(auto ans:car){
            double time = ans.second;
            if(st.empty() || time > st.top()){
                st.push(time);
            }
        }
        return st.size();
    }
};

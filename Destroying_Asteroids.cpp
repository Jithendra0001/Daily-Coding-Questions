class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        unsigned long long int sum=mass; 
        for(auto it:asteroids)
        {
            if(sum<it) return 0;
            sum+=it;
        }
        return 1;
    }
};

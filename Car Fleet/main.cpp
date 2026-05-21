class Solution 
{
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) 
    {
        vector<pair<int, int>> cars;
        int n = position.size();

        for (int i = 0; i < n; i++)
            cars.push_back({position[i], speed[i]});

        sort(cars.begin(), cars.end());

        vector<double> stk;

        for (int i = n - 1; i >= 0; i--)
        {
            int p = cars[i].first;
            int s = cars[i].second;

            stk.push_back((double) (target - p) / s);

            if (stk.size() >= 2 && stk.back() <= stk[stk.size() - 2])
                stk.pop_back();
        }

        return stk.size();
    }
};

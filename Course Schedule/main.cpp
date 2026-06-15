class Solution {
public:
    unordered_map<int, vector<int>> preMap;
    unordered_set<int> visited;

    bool dfs(int crs) {
        if (visited.count(crs))
            return false;

        if (preMap[crs].empty())
            return true;

        visited.insert(crs);

        for (int pre : preMap[crs]) {
            if (!dfs(pre))
                return false;
        }

        visited.erase(crs);
        preMap[crs].clear();

        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        for (int i = 0; i < numCourses; i++) {
            preMap[i] = {};
        }

        for (auto& p : prerequisites) {
            int crs = p[0];
            int pre = p[1];
            preMap[crs].push_back(pre);
        }

        for (int crs = 0; crs < numCourses; crs++) {
            if (!dfs(crs))
                return false;
        }

        return true;
    }
};
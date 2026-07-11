class FreqStack {
public:
    unordered_map<int, int> counts;
    unordered_map<int, vector<int>> stacks;
    int maxCount;


    FreqStack() {
        maxCount = 0;
    }
    
    void push(int val) {
        int valCount = ++counts[val];

        if (valCount > maxCount)
            maxCount = valCount;
        
        stacks[valCount].push_back(val);
    }
    
    int pop() {
        int res = stacks[maxCount].back();
        
        stacks[maxCount].pop_back();

        counts[res]--;

        if (stacks[maxCount].empty())
            maxCount--;

        return res;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
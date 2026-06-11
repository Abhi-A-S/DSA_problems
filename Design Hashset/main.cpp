class ListNode
{
public:
    int key;
    ListNode* next = nullptr;

    ListNode(int k)
    {
        key = k;
    }
};

class MyHashSet 
{
private:
    vector<ListNode*> s;

public:
    MyHashSet() : s(10000, nullptr) 
    {
        for (int i = 0; i < 10000; i++)
            s[i] = new ListNode(0);
    }
    
    void add(int key) 
    {
        ListNode* curr = s[key % 10000];

        while (curr -> next)
        {
            if (curr -> next -> key == key)
                return;
            curr = curr -> next;
        }
        
        curr -> next = new ListNode(key);
    }
    
    void remove(int key) 
    {
        ListNode* curr = s[key % 10000];

        while (curr -> next)
        {
            if (curr -> next -> key == key)
                curr -> next = curr -> next -> next;
                return;
            curr = curr -> next;
        }
    }
    
    bool contains(int key) 
    {
        ListNode* curr = s[key % 10000];

        while (curr -> next)
        {
            if (curr -> next -> key == key)
                return true;
            curr = curr -> next;
        }
        
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
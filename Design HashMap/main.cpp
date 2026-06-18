class ListNode
{
public:
    int key;
    int val;
    ListNode* next;

    ListNode(int k = -1, int v = -1, ListNode* n = nullptr)
    {
        key = k;
        val = v;
        next = n;
    }
};

class MyHashMap 
{
public:
    vector<ListNode*> mp;

    MyHashMap() {
        mp.resize( 10000 );
        for ( int i = 0; i < 10000; i++ )
            mp[i] = new ListNode();
    }

    int hash(int key)
    {
        return key % mp.size();
    }

    
    void put(int key, int value) {
        ListNode* curr = mp[ hash(key) ];

        while ( curr -> next )
        {
            if ( curr -> next -> key == key )
            {
                curr -> next -> val = value;
                return;
            }
            
            curr = curr -> next;
        }

        curr -> next = new ListNode( key, value );
    }
    
    int get(int key) {
        ListNode* curr = mp[ hash(key) ];

        while ( curr -> next )
        {
            if ( curr -> next -> key == key )
                return curr -> next -> val;
            
            curr = curr -> next;
        }

        return -1;
    }
    
    void remove(int key) {
        ListNode* curr = mp[ hash(key) ];

        while (curr && curr -> next)
        {
            if (curr -> next -> key == key)
            {
                curr -> next = curr -> next -> next;
                return;
            }

            curr = curr -> next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
class MyHashMap {
public:
    map<int, int> mpp;

    MyHashMap() {
        // constructor
    }

    void put(int key, int value) {
        mpp[key] = value;
    }

    int get(int key) {
        if (mpp.find(key) != mpp.end())
            return mpp[key];
        return -1; // key not found
    }

    void remove(int key) {
        mpp.erase(key); // safely erase the key
    }
};

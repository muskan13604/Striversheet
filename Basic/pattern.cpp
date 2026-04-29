class Solution {
public:
    void pattern1(int n) {
        for (int i = 0 ; i < n; i++) {
            for ( int j = 0; j < n; j++){
            cout << " * ";
        }
        
        cout << endl;
    }
};



class Solution {
public:
    void pattern2(int n) {
        for (int i = 0; i<n;i++){
            for (int j = 0; j < i; j++){
                cout << " * ";
            }
            cout << endl;
        }
    }
};


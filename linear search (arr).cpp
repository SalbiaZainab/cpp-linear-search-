#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 2, 9, 5};
    int n = 5, target = 9;

    bool found = false;
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Not Found" << endl;
}


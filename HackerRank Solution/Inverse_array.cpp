#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the number of integers
    
    vector<int> arr(N);  
    for (int i = 0; i < N; i++) {
        cin >> arr[i];  // Read N space-separated integers
    }

    // Print the array in reverse order
    for (int i = N - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}

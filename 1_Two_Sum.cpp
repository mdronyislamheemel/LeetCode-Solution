#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

//using two pointer approach
void twoSum(vector<int> vec, int target){
    sort(vec.begin(), vec.end());
    int left = 0, right = vec.size() -1;

    while(left < right){
        if(vec[left] + vec[right] == target){
            cout << vec[left] << " " << vec[right] <<endl;
            cout << left << " " << right << endl;
            return;
        }
        else if(vec[left] + vec[right] < target){
            left++;
        }
        else right --;
    }
}

int main()
{   
    int n, target;
    cin >> n >> target;

    vector<int> sum(n);
    for(int i = 0; i< n; i++){
        cin >> sum[i];
    }

    twoSum(sum, target);
    return 0;
}
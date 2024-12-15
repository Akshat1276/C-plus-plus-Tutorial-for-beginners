#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
          
            // Swap if the element found is
          	// greater than the next element
            if (arr[j] > arr[j + 1]) 
                swap(arr[j],arr[j+1]);
        }
    }
}

int main(){
    vector<int> a = {};
    vector<int> b = {};
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    int i = 0, j = 0;
    int k = 0;
    int median = 0;
    vector<int> mix={};
    for(int i=0; i<m+n; i++){
        while(i<m){
            mix.push_back(a[i]);
            i++;
        }
        while(i>=m && i<m+n){
            mix.push_back(b[i-m]);
            i++;
        }
    }
    bubbleSort(mix.data(), mix.size());

    if(mix.size()%2==0){
        median = mix[mix.size()/2];
    } else {
        median = mix[mix.size()/2];
    }
    cout << median << endl;
    return 0;

}
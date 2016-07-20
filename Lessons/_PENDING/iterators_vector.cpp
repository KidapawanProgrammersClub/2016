#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    cout << "=== VECTOR ===\n";
    vector<int> vec; 

    vec.push_back(222);
    vec.push_back(1);
    vec.push_back(555);
    vec.push_back(7);
    vec.push_back(8);

    cout << "=== Access values from the vector using indexer ===\n";
    for(int i = 0; i < vec.size(); i++){
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    cout << "\n=== Access values from the vector using iterator ===\n";
    vector<int>::iterator iter = vec.begin();
    while( iter != vec.end() ) {
        cout << "value of iter = " << *iter << endl;
        iter++;
    }

    // sort(vec.begin(), vec.end()); 

    // cout << "\n=== Values of vector AFTER SORTING ===\n";
    // for(int i = 0; i < vec.size(); i++){
    //     cout << "value of vec [" << i << "] = " << vec[i] << endl;
    // }

    return 0;
}
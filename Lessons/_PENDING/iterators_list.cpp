#include <iostream>
#include <list>
using namespace std;

void DisplayList(list<int> & linkedList)
{
    // use iterator to access the values
    list<int>::iterator iter = linkedList.begin();
    while( iter != linkedList.end()) {
        cout << *iter << endl;
        iter++;
    }
}

int main()
{
    list<int> linkedList; 

    linkedList.push_back(222);
    linkedList.push_back(1);
    linkedList.push_back(555);
    linkedList.push_back(7);
    linkedList.push_back(8);

    linkedList.push_front(789);

    linkedList.insert(++linkedList.begin(), 3);

    // // The code below produces compile time error: no match for 'operator[]'
    // //  Data type <list> does not support access using indexer
    // for(int i = 0; i < list.size(); i++){
    //     cout << "value of list [" << i << "] = " << list[i] << endl;
    // }

    cout << "=== LIST (linked-list) ===\n";
    DisplayList(linkedList);

    // linkedList.sort(); 

    // cout << "\n=== AFTER SORTING ===\n";
    // DisplayList(linkedList);

    return 0;
}
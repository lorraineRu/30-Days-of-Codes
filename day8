#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //declare a map
    map<std::string , int> phoneBook;
    // the size of the phoneBook
    int n;  
    cin >> n;
    
    //store the input
    int i=1;
    for (i; i<n+1; i++)
    {
         std::string key;
         int value = 0;
         
         cin >> key >> value;
         phoneBook[key] = value;
    }
    //for (std::map<string,int>::iterator it=phoneBook.begin(); it!=phoneBook.end(); ++it)
    //std::cout << it->first << " => " << it->second << '\n';
    //judgement of the input
    std::string new_key;
    while(cin >> new_key) {
      if (phoneBook.find(new_key) != phoneBook.end()) {
        cout << new_key << "="
             << phoneBook.find(new_key)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}


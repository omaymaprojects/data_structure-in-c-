#include <iostream>
#include <set>
using namespace std;
int main(){
    set <char> s1= {'C', 'D', 'C', 'D'};
    s1.insert('A');
    s1.erase('C');
    for (auto itr=s1.begin(); itr !=s1.end(); ++itr){
        cout << *itr <<endl;
        

    }
}
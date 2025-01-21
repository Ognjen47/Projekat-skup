#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int>s; //skup sa celim br
    s.insert(1);
    s.insert(6);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(3); //duplikati se ignorisu

    cout<<"Elementi set-a su: "<<endl;
    for (int element : s) {
        cout << element << ' ' <<endl; //el. su automatski sortirani
    }

    if(s.find(6)!=s.end()) //da li postji
        cout<<"Element postoji."<<endl;
    else cout<<"Element ne postoji."<<endl;

    s.erase(6); //brisemo el. 6

    for (int element : s) {
        cout << element << ' ' <<endl; //ispis bez el. 6
    }
    if(s.find(6)!=s.end()) //ponovo testiramo da li postoji
        cout<<"Element postoji."<<endl;
    else cout<<"Element ne postoji."<<endl;
    
    if(!s.empty()) //da li je skup prazan
        cout<<"Skup nije prazan.";
    else cout<<"Skup je prazan.";
    
    return 0;
}
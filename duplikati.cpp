//https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/duplikati1

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    set<int>s;
    cout<<"Unesi br elemenata: "; //koliko adresa je korisnik posetio, sa ponavljanjem
    cin>>n;
    cout<<"Unesi elemente:"<<endl; //unos adresa
    for(int i=0; i<n; i++){
        int x; cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;//br razlicitih adresa


    return 0;
}
#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;




int main(){
    //creation
    unordered_map<string,int> m;

    //insertion 1
    pair<string, int> p = make_pair("Akshat", 3);
    m.insert(p);

    //insertion 2
    pair<string, int> pair2("Tyagi", 2);
    m.insert(pair2);

    //insertion 3
    m["btech"] = 1; 


    //SEARCH

    cout<< m["Akshat"] << endl;
    cout<< m.at("Tyagi")<<endl;
    //cout<<m.at("unknown")<<endl;
    cout<< m["unknown"] << endl;   // Gives 0 as output because it first creates a entry then process it
    cout<<m.at("unknown")<<endl;   // will give 0 too now because entry as been created

    //size 
    cout << m.size() << endl;

    //checking presence
    cout<< m.count("key")<<endl;
    cout << m.count("Akshat")<<endl;

    //erase
    //m.erase("Akshat");
    cout << m.size() <<endl;

    //iterator

    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<< it->first << " " << it->second << endl;
        it++;
    }

}
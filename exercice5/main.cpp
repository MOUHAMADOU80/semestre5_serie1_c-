#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
using namespace std;

int main(){
    //question 1
    unordered_set<string> set;
    string mot;
    cout<<"Entrez vos chaines (stop marque la fin)"<<endl;
    while(1){
        cin>>mot;
        if(mot.compare("stop")==0 || mot.compare("STOP")==0){
            break;
        }
        set.insert(mot);
    }

    cout<<"le nombre de mot distinct est de :"<<set.size()<<endl;

    //question 2
    unordered_map<string,int> map;
    cout<<"pour la 2e partie"<<endl;
    while(1){
        cin>>mot;
        if(mot.compare("stop")==0 || mot.compare("STOP")==0){
            break;
        }
        map[mot]++;
    }
    for(auto x:map){
        cout<<setw(10)<<x.first<<" : "<<x.second<<endl;
    }
    
    


}
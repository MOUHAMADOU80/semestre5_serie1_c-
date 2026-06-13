#include<iostream>
#include<iomanip>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //1er question
   /*  int notes[5];
    cout<<"entrez les notes"<<endl;
    int meilleur;
    int moy=0;
    for(int i=0;i<5;i++){
        cin>>notes[i];
        moy+=notes[i];
    }
    meilleur=*max_element(notes,notes+5);
    moy=moy/5;

    cout<<"la moyennes est de :"<<moy<<endl;
    cout<<"la meilleur note est de : "<<meilleur;*/

    //2e question
   /* int x,n;
    
    cout<<"Entrez la taille du tableau :";
    cin>>n;
    vector<int> tab;
    int somme=0;
    cout<<"Entrez les elements du tableau : ";
    for(int i=0;i<n;i++){
        cin>>x;
        tab.push_back(x);
        somme+=x;
    }
    int max=*max_element(tab.begin(),tab.end());
    int min=*min_element(tab.begin(),tab.end());

    cout<<"la somme est de : "<<somme<<endl;
    cout<<"le max  est de : "<<max<<endl;
    cout<<"le min est de : "<<min<<endl;*/

    //3e question
   /* vector<int> v={5,2,9,1,5};
    cout<<"affichons avec une boucle classique"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"affichons en utilisant un iterateur explicite"<<endl;
    for(auto i{v.begin()};i!=v.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl<<"affichons en utilisant un iterateur implicite"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }*/

    //4e question

    int x;
    vector<int> v={5,2,2,9,2,1,5};
    cout<<"donnez la valeur que vous voulez supprimer ses occurences :";
    cin>>x;
    v.erase(remove(v.begin(),v.end(),x),v.end());

     cout<<endl<<"affichons en utilisant un iterateur implicite"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    

}

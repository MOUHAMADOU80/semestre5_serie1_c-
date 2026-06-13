#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string mot;
    cout<<"Entrez un mot :";
    cin>>mot;

    // size() pour afficher le nombre de caractere

    cout<<mot<<" contient "<<mot.size()<<" caractere"<<endl;

    // at() pour acceder a un caractere grace a son indice

    cout<<"le 2e caractere de "<<mot<<" est : "<<mot.at(1)<<endl;

    // back() pour obtenir le dernier caractere
    cout<<"le dernier caratctere de "<<mot<<" est "<<mot.back()<<endl;
    // append() pour ajouter du texte 
    string ajout;
    cout<<"Entre ce que tu veux ajouter :";
    cin>>ajout;
    cout<<"apres ajout on a : "<<mot.append(ajout)<<endl;
    //insert() pour inserer du texte
    //ajoutons ajout a la position 2
    cout<<mot.insert(2,ajout)<<endl; 
    // erase(p,n) pour supprimer des caractere dans le mot
    //supprimons a partir du caractere 2 , 2 caractere
    cout<<mot.erase(2,2)<<endl;    
    //replace(d,n,texte) pour remplacer une partie par une autre
    cout<<mot.replace(2,4,"echange")<<endl ;
    //find() pour obtenir l'indice de debut d'un mot ou caractere
    cout<<mot.find("r")<<endl;
    //substr(debut , longueur) pour extraire une partie du chaine
    cout<<mot.substr(2,4)<<endl;
    //compare() pour comparer deux chaine
    cout<<mot.compare("test")<<endl;
    //clear()  pour vider le string
    mot.clear();
    //empty() verifie si le string est vide ou pas
    mot.empty()? cout<<"y'a rien de dans ": cout<<"ce n'est pas vide";

}
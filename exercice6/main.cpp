#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    ifstream fichier{"data.txt"};

    int x;
    int c=0,moy=0,maxx=0;
    while(fichier>>x){
        maxx=max(maxx,x);
        c++;
        moy=moy+x;
    }
    moy=moy/c;
    cout<<"il y'a "<<c<<" entiers \nla moyenne est "<<moy<<endl<<"le max est "<<maxx;
    

    ofstream fic{"result.txt"};
    vector<int> v={2,4,1,8,9,6};
    sort(v.begin(),v.end());
    int s=0;
    int m=0;
    for(int i=0;i<v.size();i++){
        int z=v[i];
        fic << z <<" ";
        s=s+z;
    }
    m=s/v.size();
    fic<<endl;
    fic<<"somme ="<<s<<endl;
    fic<<"moyenne ="<<m<<endl;
  
   fichier.close();
   fic.close();

}
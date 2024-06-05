#include <iostream>
#include <limits> 
using namespace std;
int main(){
    int i;
  cout<<"Pravila vvody natisnit` 0:"<<endl;
    int vybir;
  cin>>vybir;
if (vybir==0) {
    cout<<"Pravila:"<<endl;
    cout<<"Vvedite cile chislo vid 1 do 100."<<endl;
}
    cout<<"Skil`ky zagorivsya zelenyi: ";
while(true){
    cin>>i;
    if(cin.fail() || i<1 || i>100){
    	cin.clear();
    	cin.ignore(99999, '\n');
        cout<<"Sprobuyte sche raz: ";
        }else{
        break; 
        }
}  
    int rc=i; 
    int yc=2*i; 
    cout<<"Jovtiy: "<<yc<<endl;
    cout<<"Chervonyi: "<<rc<<endl;
return 0;
}
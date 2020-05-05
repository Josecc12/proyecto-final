#include <iostream>

using namespace std;

int main()
{
    //32
    string palabra;
    int contador=0;
    int ascci;
    cout << "ingrese su palabra" << endl;
    getline(cin,palabra);
    for(int i=0;i<palabra.length();i++)
    {
        ascci=palabra[i];
      if(ascci!=32)
      {
      ascci=145+contador;
      palabra[i]=ascci;
        contador++;
      }

    }
cout<<"palabra enciptada: "<<palabra<<endl;
    return 0;
}

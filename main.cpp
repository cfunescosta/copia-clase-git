#include <iostream>
using namespace std;

string nombre_grupo = "<Nombre del grupo>";
string integrante_1 = "<Integrante 1>";
string integrante_2 = "<Integrante 2>";

string capitalizar(string str)
{
    str[0] = toupper(str[0]);
    return str;
}

int main()
{
    cout << "Nombre del grupo: " << nombre_grupo << endl;
    cout << "Integrantes del grupo:" << endl;
    cout << integrante_1 << endl;
    cout << integrante_2 << endl;
    return 0;
}

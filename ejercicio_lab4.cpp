#include <iostream>

using namespace std;

int main()
{
    // Declarando variable
    string tipo;

    cout << "Que es?" << endl;
    cin >> tipo;

    if (tipo == "Malo")
    {
        //  si es malo kraven lo matara
        cout << "Eres malo estas en la lista de kraven" << endl;
    }
    else if (tipo == "animal")
    {
        // si es animal kraven lo protegera
        cout << " Eres animal kraven te protegeria";
    }
    else if (tipo == "persona")
    {
        // si es persona kraven no le hara nada
        cout << "eres persona no estas en la lista de kraven";
    }
    else
    {
        cout << " Ten un buen dia :)";
    }
    return 0;
}

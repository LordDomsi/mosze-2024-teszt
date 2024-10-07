#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];    //N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'    //; hianyzik
    for (int i = 0;)    //for ciklus hianyos, (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)    //for ciklus hianyos, (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek:"    // << b[i];  
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;    //int helyett float
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]    //; hianyzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
# mosze-2024-teszt
# mosze-2024-teszt

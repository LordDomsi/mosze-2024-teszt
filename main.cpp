#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa"
    for (int i = 0; i < N_ELEMENTS; i++)    
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++)    
    {
        std::cout << "Ertek:" << b[i] << endl;  
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    float atlag = 0;    
    for (int i = 0; i < N_ELEMENTS; i++)    
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
# mosze-2024-teszt
# mosze-2024-teszt

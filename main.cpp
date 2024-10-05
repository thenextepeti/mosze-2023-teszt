#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    //' ' helyet " " kell hasznalni nincs ; a sor vegen
    std::cout << '1-100 ertekek duplazasa'
    //for ciklus iterációja nincs helyesen megadva
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    //ez a for ciklus sem helyes
    for (int i = 0; i; i++)
    {
        //sor végén;
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //atlagnak kellene egy kiinduló érték
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //sor végén ;
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // memóriafelszabadítás a végén...
    return 0;
}

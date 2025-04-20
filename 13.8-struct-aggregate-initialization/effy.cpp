#include <iostream>
#include <string>

struct ProgramadoraMetalera
{
    std::string nombre = "Effy";
    int edad = 22;
    std::string lenguajeFavorito = "Java";
    std::string bandaFavorita = "TBDC";
    bool usaNegro = true;
    bool tomaCafe = true;
    int cantidadDeTatuajes = 5;
    double lineasDeCodigoPorDia = 666.0;
};

int main()
{
    ProgramadoraMetalera effy;

    std::cout << "Nombre: " << effy.nombre << '\n';
    std::cout << "Edad: " << effy.edad << '\n';
    std::cout << "Lenguaje favorito: " << effy.lenguajeFavorito << '\n';
    std::cout << "Banda favorita: " << effy.bandaFavorita << '\n';
    std::cout << "¿Viste de negro?: " << (effy.usaNegro ? "Sí" : "No") << '\n';
    std::cout << "¿Toma café?: " << (effy.tomaCafe ? "Sí" : "No") << '\n';
    std::cout << "Tatuajes: " << effy.cantidadDeTatuajes << '\n';
    std::cout << "Líneas de código por día: " << effy.lineasDeCodigoPorDia << '\n';

    return 0;
}


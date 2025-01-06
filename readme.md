On install clang et cmake puis les extensions sur vscode

on ecrit notre premier file 

    #include <iostream> // Permet un certain nombre de fonctionalités utile pour le stream

    int main() {
        std::cout << "bonne année les cda !" << std::endl;
        return 0;

}

clang++ -std=c++20 -o main main.cpp

clang ++ -std pour la version
 -o pouyr la sortie out
 main et main.cpp
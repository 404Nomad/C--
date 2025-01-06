#include <iostream>
#include "math_utils.h"

/* Avant ajout de <Vector>
int addition(int a, int b, int c) {
    return a + b + c;
} 
*/

int addition(const std::vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) { // Parcourt chaque élément du vecteur
        sum += num; // Ajoute l'élément à la somme
    }
    return sum;
}

int division(int sum, int n) {
    return sum / n;
}

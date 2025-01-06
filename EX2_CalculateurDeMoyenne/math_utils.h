#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <vector>

// Code Section

// Avant ajout de <Vector>
//int addition(int a, int b, int c);

// Après ajout de <Vector>
// on utilise une référence constante pour éviter la copie de l'objet
int addition(const std::vector<int>& numbers);

int division(int sum, int n); // Divise une somme par un nombre

// Fin Code Section

#endif
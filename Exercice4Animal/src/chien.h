#ifndef CHIEN_H
#define CHIEN_H
#include "animal.h"

class Chien : public Animal {
    public:
        Chien();
        Chien(string nom, string race, int age);
        ~Chien();

        void toString() const override;
};

#endif

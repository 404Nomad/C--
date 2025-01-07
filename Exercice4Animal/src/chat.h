#ifndef CHAT_H
#define CHAT_H
#include "animal.h"

class Chat : public Animal {
    public:
        Chat();
        Chat(string nom, string race, int age);
        ~Chat();

        void toString() const override;
};

#endif

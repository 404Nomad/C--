#include "chat.h"

Chat::Chat() : Animal() {}

Chat::Chat(string nom, string race, int age) : Animal(nom, race, age) {}

Chat::~Chat() {}

void Chat::toString() const {
    cout << "=== Chat ===" << endl;
    Animal::toString();
}

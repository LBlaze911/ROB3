#include "morse.h"


//On créer la classe translator
class translator
{
private:
    morse mor;
    void action(char*);
public:
    translator(int pin);
    translator();
    ~translator();
    void translate(char);
    void translateword(char*);
};

translator::~translator()
{
}

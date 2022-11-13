#include "translator.h"

translator::translator(int pin)
{
    mor = morse(pin);
}

translator::translator()
{
    mor = morse();
}

void translator::translate(char)
{
    switch (char)
    {
    case 'a':
        action(".-");
        break;
    case(a):
        action(" .-");
        break;
    case(b):
        action("-...");
        break;
     case(c):
        action(" .-");
        break;
     case(d):
        action(" .-");
        break;
     case(e):
        action(" .-");
        break;
     case(f):
        action(" .-");
        break;
     case(g):
        action(" .-");
        break;
     case(h):
        action(" .-");
        break;
     case(i):
        action(" .-");
        break;
     case(j):
        action(" .-");
        break;
     case(k):
        action(" .-");
        break;
     case(l):
        action(" .-");
        break;
     case(m):
        action(" .-");
        break;
     case(n):
        action(" .-");
        break;
     case(o):
        action(" .-");
        break;
     case(p):
        action(" .-");
        break;
     case(q):
        action(" .-");
        break;
     case(r):
        action(" .-");
        break;
     case(s):
        action(" .-");
        break;
     case(t):
        action(" .-");
        break;
     case(u):
        action(" .-");
        break;
     case(v):
        action(" .-");
        break;
     case(w):
        action(" .-");
        break;
     case(x):
        action(" .-");
        break;
     case(y):
        action(" .-");
        break;
     case(z):
        action(" .-");
        break;
    default:
        break;
    }

}

void translator::action(char* morse)
{
    for (int i = 0; i < strlen(morse); i++)
    {
        if (morse[i] == '.')
        {
            mor.dot();
        }
        else if (morse[i] == '-')
        {
            mor.dash();
        }
        else
        {
            break;
        }
    }
}

void translator::translateword(char* word)
{
    for (int i = 0; i < strlen(word); i++)
    {
        translate(word[i]);
    }
}
#include <iostream>
class compte_objet
{
    static int ctr;

public:
    compte_objet();
    ~compte_objet();
    static void compte();
};
int compte_objet::ctr = 0;
compte_objet::compte_objet()
{
    std::cout << "Construction: il y a maintenant " << ++ctr << " objets" << std::endl;
}
compte_objet::~compte_objet()
{
    std::cout << "Destruction: il y a maintenant " << --ctr << " objets" << std::endl;
}
void compte_objet::compte()
{
    std::cout << "Il y a maintenant " << ctr << " objets" << std::endl;
}

void fonction()
{
    compte_objet u, v;
}

int main(int argc, char const *argv[])
{
    // void fonction();
    compte_objet::compte(); compte_objet a; compte_objet::compte(); fonction(); compte_objet b; compte_objet::compte(); return 0;
}

#include "fruits.h"

using namespace std;
std::vector<Fruits*> vectorPointer;
double cash = 10.0;


int main()
{
    char input;
    cout << "WITAJ W SKLEPIE Z OWOCAMI" << endl;
    cout << "Możesz tu zakupić zdrowe owoce" << endl;
    do
    {
        menu();

        int i;
       

        Fruits* pointer;

       input = _getch();
       switch (input)
       {
            case '1':
            {
                int tempPrice = 1;
                system("cls");
                cout << "Ile jabłek chcesz kupic? Cena za jedno jablko to 1zl" << endl;
                cout << endl;
                cout << endl;
                cin >> i;
                if (cash < tempPrice * i)
                {
                    cout << "Nie masz wystarczającej ilości pieniędzy" << endl;
                }
                else
                {
                    for (int j = 0; j < i; j++)
                    {

                        {
                            pointer = new Apple(i, 1);


                            cout << endl;
                            cout << endl;

                            vectorPointer.push_back(pointer);

                            if (j == i - 1)
                            {
                                pointer->funFact();
                                pointer->kcalInfo();
                                pointer->getInfo();
                            }
                        }

                    }
                }
                break;
            }
            
        
        case '2':
        {
            int tempPrice = 2;
            system("cls");
            cout << "Ile pomaranczy chcesz kupic? Cena za jedno jablko to 2zl" << endl;
            cout << endl;
            cout << endl;
            cin >> i;
            if (cash < tempPrice * i)
            {
                cout << "Nie masz wystarczającej ilości pieniędzy" << endl;
            }
            else
            {
                for (int j = 0; j < i; j++)
                {

                    {
                        pointer = new Orange(i, 1);


                        cout << endl;
                        cout << endl;

                        vectorPointer.push_back(pointer);

                        if (j == i - 1)
                        {
                            pointer->funFact();
                            pointer->kcalInfo();
                            pointer->getInfo();
                        }
                    }

                }
            }
            break;
        }
        case '3':
        {
            int tempPrice = 3;
            system("cls");
            cout << "Ile bananow chcesz kupic? Cena za jedno jablko to 3zl!" << endl;
            cout << endl;
            cout << endl;
            cin >> i;
            if (cash < tempPrice * i)
            {
                cout << "Nie masz wystarczającej ilości pieniędzy" << endl;
            }
            else
            {
                for (int j = 0; j < i; j++)
                {

                    {
                        pointer = new Banana(i, 1);


                        cout << endl;
                        cout << endl;

                        vectorPointer.push_back(pointer);

                        if (j == i - 1)
                        {
                            pointer->funFact();
                            pointer->kcalInfo();
                            pointer->getInfo();
                        }
                    }

                }
            }
            break;
        }
        case '4':
        {
            system("cls");
            for (size_t i = 0; i < vectorPointer.size(); i++) 
            {
                Fruits* animal = vectorPointer[i];
               
                animal->bought();
                
            }
            cout << "pozostało Ci:" << cash;

            break;
        }
        default:
            ;
        }

      
    } while (input != 27);
}

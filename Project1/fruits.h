#include <iostream>
#include <conio.h>
#include <vector>
#include <cstdlib>
using namespace std;

class Fruits;

extern std::vector<Fruits*> vectorPointer;

void menu();

extern double cash;

class Fruits {
protected:
	int howMany;
	int price=0;
public:
	Fruits()
	{
		;
	}
	virtual ~Fruits()
	{
		;
	}

	virtual void kcalInfo() = 0;
	virtual void funFact() = 0;
	virtual void getInfo() = 0;
	virtual void bought() = 0;
	
	
	
	

};

class Apple : public Fruits {
private:

public:
	Apple(int i, int price)
	{
		
		this->howMany = i;
		this->price = 1;

		cash = cash - price;
		
	}
	virtual ~Apple()
	{
		cout << "Zoo zamknięte, żegam." << endl;
	}

	 void kcalInfo()
	{
		cout << "Wartość energetyczna jabłka to 52,1 kcal w 100g" << endl;
	}
	 void funFact()
	 {
		 cout << "CIEKAWOSTKA: Średniej wielkości jabłko zawiera tylko 0, 31 g tłuszczu, nie ma ani grama cholesterolu!" << endl;

	 }
	 void getInfo()
	 {
		 cout << "Kupiłeś jablka w ilosci:" << this->howMany << " pozostało Ci " << cash << "zl" << endl;
	 }
	 void bought()
	 {
		 cout << "Kupiles jedno jabłko za cene 1 zl" << endl;
	 }
	
};

class Orange : public Fruits {
private:
	
public:
	Orange(int i, int price)
	{
		this->howMany = i;
		this->price = 2;

		cash = cash - price;
	}
	virtual ~Orange()
	{
		cout << "Zoo zamknięte, żegam." << endl;
	}

	 void kcalInfo ()
	{
		cout << "Wartość energetyczna pomaranczy to 47,1 kcal w 100g" << endl;
	}
	 void funFact()
	 {
		 {
			 cout << "CIEKAWOSTKA:Dojrzałe drzewo pomarańczowe może zapewnić do tysiąca owoców rocznie." << endl;
		 }
	 }

	 void getInfo()
	 {
		 cout << "Kupiłeś pomarancze w ilosci:" << this->howMany << " pozostało Ci " << cash << "zl" << endl;
	 }
	 void bought()
	 {
		 cout << "Kupiles jedna pomarancze za cene 2 zl" << endl;
	 }
};

class Banana :public Fruits 
{
private:

public:
	Banana(int i, int price)
	{
		this->howMany = i;
		this->price = 3;

		cash = cash - price;
	}
	virtual ~Banana()
	{
		cout << "Zoo zamknięte, żegam." << endl;
	}

	 void kcalInfo()
	{
		cout << "Wartość energetyczna banana to 88,7 kcal w 100g" << endl;
	}
	 void funFact()
	 {
		 cout << "CIEKAWOSTKA: W niektórych krajach z bananów powstaje wino i piwo." << endl;
	 }

	 void getInfo()
	 {
		 cout << "Kupiłeś banany w ilosci:" << this->howMany << " pozostało Ci " << cash << "zl" << endl;
	 }
	 void bought()
	 {
		 cout << "Kupiles jednego banana za cene 3 zl" << endl;
	 }
};
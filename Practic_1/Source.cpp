#include <cstring>
#include <string>
#include <iostream>
using namespace std;

class Dog
{
public:
	Dog(string Nick, string Breed, float Age);
	const string GetNick()  const { return Nick; }
	const string GetBreed()  const { return Breed; }
	const float GetAge() const { return Age; }
private:
	float Age;
	string Breed;
	string Nick;
};

Dog::Dog(string Nick, string Breed, float Age)
{
	this->Nick = Nick;
	this->Breed = Breed;
	this->Age = Age;
}

int main()
{
	Dog Ob("Bobick", "Pug", 2);
	std::cout << Ob.GetNick() << ' ' << Ob.GetBreed() << ' ' << Ob.GetAge() << '\n';
	return 0;
}
//здесь был пёсель
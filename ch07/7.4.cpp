#include <iostream>
#include <string>
using namespace std;

class Person
{
friend istream &read(istream&, Person&);
friend ostream &print(ostream&, const Person&);
public:
    Person() = default;
    Person(const string &n, const string &a): personName(n), personAddress(a) {}
    Person(istream &is);
    string address() const {return personAddress;}
    string name() const {return personName;}
private:
    string personName;
    string personAddress;
};


Person::Person(istream &is)
{
    read(is, *this);
}

istream &read(istream &is, Person &sb)
{
    is >> sb.personName >> sb.personAddress;
    return is;
}


ostream &print(ostream &os, const Person &sb)
{
    os << sb.name() << " " << sb.address() << endl;
    return os;
}


int main(int argc, char const *argv[])
{
    Person test(cin);
    print(cout, test);
    return 0;
}

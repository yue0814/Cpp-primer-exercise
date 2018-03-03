#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // Person(const string &n, const string &a): personName(n), personAddress(a) {}
    Person() = default;
    Person(istream &is);
    string address() const {return personAddress;}
    string name() const {return personName;}
    string personName;
    string personAddress;
};
istream &read(istream&, Person&);
ostream &print(ostream&, const Person&);

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

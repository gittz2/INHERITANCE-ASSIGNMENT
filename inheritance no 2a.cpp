#include <iostream>
#include <string>

using namespace std;

class Person {
    public:
        // Constructor to initialize all data members
        Person(int age, string firstname, string lastname) {
            this->age = age;
            this->firstname = firstname;
            this->lastname = lastname;
        }

        // Member method to get values of data members
        void getValues() {
            cout << "Age: " << age << endl;
            cout << "First name: " << firstname << endl;
            cout << "Last name: " << lastname << endl;
        }

        // Member method to set values of data members
        void setValues(int age, string firstname, string lastname) {
            this->age = age;
            this->firstname = firstname;
            this->lastname = lastname;
        }

    private:
        int age;
        string firstname;
        string lastname;
};

int main() {
    // Create an instance of Person
    Person my_person(30, "John", "Doe");

    // Get values of data members
    my_person.getValues();

    // Set values of data members
    my_person.setValues(35, "Jane", "Smith");

    // Get new values of data members
    my_person.getValues();

    return 0;
}

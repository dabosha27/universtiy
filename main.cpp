#include <iostream>

using namespace std;

class Person {
private:
    int id;
    string name;
    int age;
    string gender;

public:
    Person() {
        id = 0;
        name = "";
        age = 0;
        gender = "";
    }

    Person(int person_id, std::string person_name, int person_age, std::string person_gender) {
        id = person_id;
        name = person_name;
        age = person_age;
        gender = person_gender;
    }

    // Setters
    void set_id(int person_id) {
        id = person_id;
    }

    void set_name(std::string person_name) {
        name = person_name;
    }

    void set_age(int person_age) {
        age = person_age;
    }

    void set_gender(std::string person_gender) {
        gender = person_gender;
    }

    // Getters
    int get_id() const {
        return id;
    }

    std::string get_name() const {
        return name;
    }

    int get_age() const {
        return age;
    }

    std::string get_gender() const {
        return gender;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

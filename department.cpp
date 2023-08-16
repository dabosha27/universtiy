
class Department {
private:
    string name;
    int capacity;
    double required_gpa;

public:
        // constructor

    Department() {
        name = "";
        capacity = 0;
        required_gpa = 0.0;
    }
        // Parameterized constructor
    Department(string dept_name, int dept_capacity, double dept_required_gpa) {
        name = dept_name;
        capacity = dept_capacity;
        required_gpa = dept_required_gpa;
    }

    // Setters
    void set_name(string dept_name) {
        name = dept_name;
    }

    void set_capacity(int dept_capacity) {
        capacity = dept_capacity;
    }

    void set_required_gpa(double dept_required_gpa) {
        required_gpa = dept_required_gpa;
    }

    // Getters
    std::string get_name() const {
        return name;
    }

    int get_capacity() const {
        return capacity;
    }

    double get_required_gpa() const {
        return required_gpa;
    }
};

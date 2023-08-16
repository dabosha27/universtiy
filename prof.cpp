
class Professor{
private:
     String degree;
     double salary;
public:
     Professor(){
         degree=" ";
         salary=0.0;
    }
    Professor(string prof_degree,double prof_salary){
        degree=prof_degree;
        salary=prof_salary;
    }
    void set_degree(string prof_degree){
        degree=prof_degree;
    }
    void set_salary(double prof_salary){
        salary=prof_salary;
    }
    string get_degree(){
        return degree;
    }
    double get_salary(){
        return salary;
    }
};


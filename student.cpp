
class Student{
private:
     int level;
     double gpa;
public:
     Student(){
         level=0;
         gpa=0.0;
    }
    Student(int stud_level,double stud_gpa){
        level=stud_level;
        gpa=stud_gpa;
    }
    void set_level(int stud_level){
        level=stud_level;
    }
    void set_gpa(double stud_gpa){
        gpa=stud_gpa;
    }
    int get_level(){
        return level;
    }
    double get_gpa(){
        return gpa;
    }
};

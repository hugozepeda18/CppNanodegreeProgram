#include <cassert>
#include <stdexcept>
#include <string>

// TODO: Define "Student" class
class Student {
 public:
  // constructor
  Student(std::string name,int grade,float GPA):name_(name),grade_(grade),GPA_(GPA){
      Validate();
  }
  // accessors
  std::string Name() const { return name_; }
  int Grade() const { return grade_; }
  float GPA() const { return GPA_; }
  // mutators
  void Name(std::string name){
      name_ = name;
  }  
  void Grade(int grade){
    grade_ = grade;
    Validate();
  }
  void GPA(float GPA){
    GPA_ = GPA;
    Validate();
  }
 private:
  // name
  std::string name_;
  // grade
  int grade_;
  // GPA
  float GPA_;
  void Validate() {
      if (grade_ < 0 || grade_ > 12 || GPA_ < 0.0 || GPA_ > 4,0)
      throw std::invalid_argument("values out of range ");
  }
};

// TODO: Test
int main() {
    Student student_1("Pedro",12,4.0);
    assert(student_1.Name() == "Pedro");
    assert(student_1.Grade() == 12);
    assert(student_1.GPA() == 4.0);

    bool caught{false};
    try {
        Student invlid("Pedro",-5,4.1);
    } catch(...){
        caught = true;
    }
    assert(caught);
}
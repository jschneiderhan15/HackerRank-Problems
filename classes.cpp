#include <iostream>
#include <sstream>
using namespace std;
//Program to practice the use of classes.
class Student{
    private: int age;
             int stnd;
             string firstName;
             string lastName;
    public:
            void set_age(int ageE){
                age = ageE;
            }
            void set_standard(int stndrd){
                stnd = stndrd;
            }
            void set_first_name(string first){
                firstName = first;
            }
            void set_last_name(string last){
                lastName = last;
            }
            int get_age(){
                return age;
            }
            string get_last_name(){
                return lastName;
            }
            string get_first_name(){
                return firstName;
            }
            int get_standard(){
                return stnd;
            }
            string to_string(){
                stringstream ss;
                ss << age << "," << firstName << "," << lastName << "," << stnd;
                return ss.str();
            }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

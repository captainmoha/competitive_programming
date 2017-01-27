#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


static int prof_id = 0;
static int student_id = 0;


class Person {
	public:
		string name;
		int age;
	
		virtual void getdata() = 0;
		virtual void putdata() = 0;
		 
};

class Professor: public Person {

	int publications;
	int cur_id;

	public:
		Professor() {
			prof_id++;
		}
	
	
		void getdata() {
			cin >> name >> age >> publications;
			cur_id = prof_id;
		}
	
		void putdata() {
			cout << name << " " << age << " " << publications << " " << cur_id << endl;
		}
};

class Student: public Person {

	double marks[6];
	double sum;
	int cur_id;

	public:
		Student() {
			sum = 0;
			student_id++;
		}
	
		void getdata() {
			cin >> name >> age;
	
			for (int i = 0; i < 6; i++) {
				cin >> marks[i];
				sum += marks[i];
			}
			cur_id = student_id;
		}
	
		void putdata() {
	
			cout << name << " " << age << " " << sum << " " << cur_id << endl;
		}
};

int main(){

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
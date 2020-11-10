#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student : public Person{
	private:
		vector<int> testScores;  
	public:
        Student(string firstName, string lastName, int indentification, vector<int> score):Person(firstName, lastName, indentification){
            this -> testScores = score;
        }
        
        char calculate(){
            int ave = 0, size = testScores.size();
            
            for(int i = 0; i < size; i++)
                ave += testScores[i];

            ave = ave/size;

            if(ave >= 90 && ave <=100)
                return 'O';
            else if(ave >= 80)
                return 'E';
            else if(ave >= 70)
                return 'A';
            else if(ave >= 55)
                return 'P';
            else if(ave >= 40)
                return 'D';
            else
                return 'T';
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}

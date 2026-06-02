#include<iostream>
#include<string>
using namespace std;
class CourseEnrollment{
	private:
		int studentID, creditHours, quizCount, assignmentCount, examCount, attendanceCount;
		string studentName, courseCode, courseTitle, lecturerName;
		double quizScores[10], examScores[3], assignmentScores[10];
		bool attendance[20], isRegistered;
	public:
		CourseEnrollment(){// default constructor: for initializing safe starting state for variables.
			studentID = 0;
			creditHours = 0;
			quizCount =0;
			assignmentCount = 0;
			examCount = 0;
			attendanceCount = 0;
			studentName = "";
			courseCode = "";
			courseTitle = "";
			lecturerName = "";
			for(int i =0; i<10; i++ ){
				quizScores[i] = 0.0;
				assignmentScores[i] = 0.0;
			}
			for (int i =0; i<3; i++){
				examScores[i] = 0.0;
			}
			for (int i = 0; i<20; i++){
				attendance[i] = 0.0;
			}
			isRegistered = false;
		}	
		CourseEnrollment(int id, string sName, string cCode, string cTitle, int credits, string lecturer):studentID(id),studentName(sName),courseCode(cCode),courseTitle(cTitle),creditHours(credits),lecturerName(lecturer){
		}
		string getStudentName(){
			return studentName;
		}
		string getCourseCode(){
			return courseCode;
		}
		string getCourseTitle(){
			return courseTitle;
		}
		int getCreditHours(){
			return creditHours;
		}
		void setRegistrationStatus(bool present){
			this -> isRegistered = isRegistered;
		}
		bool getRegistrationStatus(){
			return isRegistered;
		}
		void registerStudent(){
			cout << "The student has been registered under the name: ";
		}
		void setLecturerName(string lecturer){
			this -> lecturerName = lecturer;
		}
		string getLecturerName() {
			return lecturerName;
		}
		bool markAttendance(bool present){
			string attendanceStatus;
			for(int  i = 0; i< 20; i++){
				cout<< "Enter 'true' if the student was present for the class"<< i+1<< ": ";
				cin>>attendanceStatus;
				if (attendanceStatus == "true"){
					attendance[i] = true;
					attendanceCount += 1;
				}
				else{
					attendance[i] = false;
				}
		}
		cout<< attendanceCount<<endl;
			}
		bool getattendance(){
			return attendance[20];
		}
		bool addQuizScore(double score){
			string quizStatus;
			for (int i =0; i < 10; i++){
				cout<< "Enter 'yes' if the student sat for the quiz."<< i+1<< ": ";
				cin>> quizStatus;
				if(quizStatus == "yes"){
					quizCount +=1;
					cout<< "Enter the student's marks: ";
					cin>> quizScores[i];
				}
				else{
					quizScores[i] = 0.0;
				}
			}
			cout<< quizStatus<< endl;
		}
		double getquizScore(){
			return quizScores[10];
		}
		bool addAssignmentScore(double score){
			string assignmentStatus;
			for (int i = 0; i < 10; i++){
				cout<< "Did the student submit and assignmentfor assignment number"<< i+1<<" if so, enter 'yes': ";
				cin>> assignmentStatus;
				if (assignmentStatus == "yes"){
					assignmentCount +=1;
					cout<< "Enter the assignment mark";
					cin>> assignmentScores[i];
				}
				else{
					assignmentScores[i] = 0.0;
				}
			}
			cout<< assignmentCount;
		}
		double getAssignmentScores(){
			return assignmentScores[10];
		}
		double calculateQuizAverage(){
			double quizaverage;
			quizaverage = quizScores[20] / quizCount;
		}
		
		
			
};

int main(){
CourseEnrollment student(0277,"Royce","COME2208", "ADT", 4, "Prof Annim");
student.getStudentName();
student.getCourseCode();
student.getCourseTitle();
student.getCreditHours();
student.setRegistrationStatus(true);
student.getRegistrationStatus();
student.setLecturerName(" Engr Tangu Achilis");
student.getLecturerName();
student.getquizScore();
student.getattendance();
student.getAssignmentScores();
// Report
student.registerStudent();
cout<< student.getStudentName()<< " and has been enrolled under the course: "<< student.getCourseTitle() << " with code "<< student.getCourseCode()<< " and credit value: "<<student.getCreditHours();
cout<< " Instructed by"<< student.getLecturerName()<< endl;
student.markAttendance(student.getattendance());
student.addQuizScore(student.getquizScore());
student.addAssignmentScore(student.getAssignmentScores());


return 0;
}







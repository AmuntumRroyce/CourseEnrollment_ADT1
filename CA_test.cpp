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
		void setAttendanceCount(int m){
			this -> attendanceCount = m;
		}
		int getAttendanceCount(){
			return attendanceCount;
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
		}/*
		void setQuizCount(int n){
			this -> quizCount = n;
		}
		int getQuizCount(){
			return quizCount;
		}
	/*	bool addQuizScore(double score){
			string quizStatus;
			
			for (int i =0; i < 10; i++){
				cout<< "Enter 'yes' if the student sat for the quiz."<< i+1<< ": ";
				cin>> quizStatus;
				if(quizStatus == "yes"){
					quizCount = quizCount + 1;
					cout<< quizCount<< endl;
					cout<< "Enter the student's marks: ";
					cin>> quizScores[i];
				}
				else{
					quizScores[i] = 0.0;
				}
			}
			
		}
	//	double getquizScore(){
	//		return quizScores[10];
		//}
		bool addAssignmentScore(double score){
			string assignmentStatus;
			for (int i = 0; i < 10; i++){
				cout<< "Did the student submit and assignment for assignment number "<< i+1<<" if so, enter 'yes': ";
				cin>> assignmentStatus;
				if (assignmentStatus == "yes"){
					assignmentCount +=1;
					cout<< " Enter the assignment mark";
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
		}*/
		double calculateAverage(double my_array[], int array_count){// average calculator
			double sum;
			if (array_count == 0){return 0.0;
			}
			else{
			for (int i=0; i< array_count;i++){
				sum+=my_array[i];
				cout<< sum;
				}
				
				return sum/array_count;}
		}
		
		//double calculateQuizAverage(){
		//	return calculateAverage(quizScores, quizCount);
		
		
	//	double calculateAssignmentAverage(){
	//		return calculateAverage(assignmentScores, assignmentCount);
	//	}
	  //  double calculateAttendanceRate(){
	   	//	cout<< attendanceCount;
		//	return attendanceCount/20 ;}
	
	/*	bool isEligibleForExam(){
			if (attendanceCount >= 10){
				cout<<"This student is Eligible for the exams.";
				return true;
				
			}
			else{
				cout<< "This student is not  Eligible for the Exams. ";
				return false;
				
			}
				
		}*/
		
		double getExamScores(){
			return examScores[3];
		}
		void setExamCount(int t){
			this -> examCount = t;
		}
	
		bool addExamScore(double score){
			string examStatus;
			for(int i=0; i<3;i++){
				cout<<"Was the student present for the " <<i+1 <<" Exams?, if so then input 'yes'. ";
				cin>> examStatus;
				if(examStatus == "yes"){
					examCount += 1;
					cout<<"Enter the student's Exam score: ";
					cin >> examScores[i];
				}
				else{
					examScores[i]= 0.0;
				}
			}
		}
	  
		double calculateExamAverage(){
			cout<< examCount;
			cout<< "This student has an Exam average of: ";
			return calculateAverage(examScores, examCount);
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
//student.getquizScore();
//student.setQuizCount(0);
//student.getQuizCount();
//student.getAssignmentScores();
//student.getattendance();
//student.setAttendanceCount(0);
//student.getAttendanceCount();
student.setExamCount(0);
student.getExamScores();
student.getExamCount();





// Report
student.registerStudent();
cout<< student.getStudentName()<< " and has been enrolled under the course: "<< student.getCourseTitle() << " with code "<< student.getCourseCode()<< " and credit value: "<<student.getCreditHours();
cout<< " Instructed by"<< student.getLecturerName()<< endl;
//student.markAttendance(student.getattendance());
//student.addQuizScore(student.getquizScore());
//cout<<"this student has a quiz average of: ";
//cout<<student.calculateQuizAverage();
//student.addAssignmentScore(student.getAssignmentScores());
//cout<< " The student has an assignment average score of: ";
//cout<<student.calculateAssignmentAverage();
//cout<< "The sudent has an attendance rate of:";
//cout<<student.calculateAttendanceRate();
//cout<<student.isEligibleForExam();
student.addExamScore(student.getExamScores());
cout<< student.calculateExamAverage();



return 0;
}







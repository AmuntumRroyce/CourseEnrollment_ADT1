#include<iostream>
#include<string>
using namespace std;
class CourseEnrollment{
	private:
		int studentID, creditHours, quizCount, assignmentCount, examCount, attendanceCount;
		string studentName, courseCode, courseTitle, lecturerName;
		double quizScores[10], assignmentScores[10], examScores[3], quizAverage, assignmentAverage, examAverage, attendanceRate,totalScore, overallScore, sumQuiz, sumExam, sumAssignment;
		bool attendance[20], isRegistered;
	public:
		courseEnrollment(){ //default constructor initiliasing the safe starting state of variables
			studentID = 0;
			sumQuiz= 0.0;
			sumExam = 0.0;
			sumAssignment = 0.0;
			totalScore = 0.0;
			overallScore = 0.0;
			creditHours = 0;
			attendanceRate = 0.0;
			quizCount = 0;
			examAverage = 0;
			assignmentCount = 0;
			examCount = 0;
			attendanceCount = 0;
			quizAverage = 0;
			assignmentAverage = 0;
			studentName = "";
			courseCode = "";
			courseTitle = "";
			lecturerName = "";
			for(int i = 0; i < 10; i++){
				quizScores[i] = 0.0;
				assignmentScores[i] = 0.0;
			}
			for(int i = 0; i < 3; i++){
				examScores[i] = 0.0;
			}
			for(int i = 0; i < 20; i++){
				attendance[i] = false;
			}
			isRegistered = false;
			
		}
		CourseEnrollment(int id, string sName, string cCode, string cTitle, int credits, string lecturer):studentID(id), studentName(sName), courseCode(cCode), courseTitle(cTitle), lecturerName(lecturer){
			
		}
		string getStudentName(){
			return studentName;
		}
		string getCourseCode(){
			return courseCode;
		}
		
		void setRegistrationStatus(bool present){
			this -> isRegistered = present;
		}
		bool getRegistrationStatus(){
			return isRegistered;
		}
		void registerStudent(){
			cout<< " The student has been registered under the name: "<< endl;
		}
		void setLecturerName(string lecturer){
			this -> lecturerName = lecturer;
		}
		string getLecturerName() const{
			return lecturerName;
		}
	bool markAttendance(bool present){
			string attendanceStatus;
			
			for(int i = 0; i < 20; i++){
				cout << "Enter '1' if the student was present and '0' if absent for class "<< i+1 << ": " ;
				cin>> attendanceStatus;
				if (attendanceStatus == "1" ){
					attendance[i] = true;
					attendanceCount += 1;
				    
				
				}
				else{
					attendance[i] = false;
				}
			
			}
			}
		bool getattendance(){
		return attendance[20];
	}	
		double addQuizScore(double score){
			string quizStatus;
			quizCount=0;
			for(int i = 0; i < 10; i++){
				cout << "Enter 'yes' if the student sat for quiz "<< i+1 << ": " ;
				cin>> quizStatus;
				if (quizStatus == "yes" ){
					quizCount += 1;
					do{
						cout << "Enter student's mark /30: ";
						cin >> quizScores[i];
					}while(quizScores[i] < 0 || quizScores[i] > 30);	
				}
				else{
					quizScores[i] = 0.0;
				}
			}
	}
	double getquizScore(){
		return quizScores[10];
	}
	bool addAssignmentScores(double score){
			string assignmentState;
			for(int i = 0; i < 10; i++){
				cout << "Enter 'yes' if the student did assignment "<< i+1 << ": ";
				cin>> assignmentState;
				if (assignmentState == "yes" ){
					assignmentCount += 1;
					do{
					cout << "Enter student's scores on 10: ";
					cin >> assignmentScores[i];
				}while( assignmentScores[i] < 0 ||  assignmentScores[i] > 10);
			}
				else{
					assignmentScores[i] = 0.0;
				}
		
		}
	}
		bool getassignmentScores(){
		return assignmentScores[10]; 
	}
	bool addExamScore(double score){
			
//			getRegistrationStatus(bool present);
		if  (getRegistrationStatus()){
			for(int i = 0; i < 3; i++){
				do{
				cout << "Enter Exam Score "<< i+1 << " /100: "  ;
				cin >> examScores[i];
				}while( examScores[i] < 0 || examScores[i] > 100 );
			}
			}
		else{
			cout << "You are not eligible to write the Exams" << endl;
			}
		}
	
		bool getExamScores(){
		return examScores[3]; 
	}
	double calculateQuizAverage(double score){
		double sumQuiz = 0; 
		for(int i = 0; i < 10; i++){
			sumQuiz += quizScores[i];
		}
		quizAverage = sumQuiz/quizCount;
		cout << "The average score is "<< quizAverage << endl;
	
		
		
		
	}
	double getcalculateQuizAverage(){
		return quizAverage;
	
	}
	double getsumQuiz(){
		return sumQuiz;
	}
	double calculateAssignmentAverage( double score){
			double sumAssignment = 0; 
		for(int i = 0; i < 10; i++){
			sumAssignment += assignmentScores[i];
		}
		assignmentAverage = sumAssignment/assignmentCount;
		cout << "The average score is "<< assignmentAverage << endl;	
		
	}
	
	double getcalculateAssignmentAverage(){
		return assignmentAverage;
	
	} 	
	double getsumAssignment(){
		return sumAssignment;
	}
		double calculateExamAverage( double score){
			double sumExam = 0; 
		for(int i = 0; i < 3; i++){
			sumExam += examScores[i];
		}
		examAverage = sumExam/3;
		cout << "The average score is "<< examAverage << endl;
		
	}
	double getcalculateExamAverage(){
		return examAverage;
	
	}
	double getsumExam(){
		return sumExam;
	}
	double calculateAttendanceRate(bool present){
		double attendanceRate = (attendanceCount * 100) / 20; 
		cout << "The student attended " << attendanceRate << "% of all classes" << endl << endl; 
	}
	double getcalculateAttendanceRate(){
		return attendanceRate;
		
}
	
	double calculateOverallScore(){
		double totalScore = (quizAverage * quizCount) + (assignmentAverage * assignmentCount) + (examAverage * 3) + (attendanceCount *5);
		double overallScore = (totalScore * 100) / 800;
		cout << "The student had an overall score of: " << overallScore << "/100"<< endl;
		}
	double getcalculateOverallScore(){
		return overallScore;
	}
	double gettotalScore(){
		return totalScore;
	}
	double determineLetterGrade(){
		totalScore = (quizAverage * quizCount) + (assignmentAverage * assignmentCount) + (examAverage * 3) + (attendanceCount *5);
		double overallScore = (totalScore * 100) / 800;	
		if (overallScore >=80 && overallScore <=100){
			cout << "A grade student";
		}
		else if(overallScore >= 60 && overallScore <80){
			cout << " B grade student";
		}
		else if(overallScore >= 50 && overallScore < 60){
			cout << " C grade student";
		}
		else if(overallScore >= 40 && overallScore < 50){
			cout << " D grade student";
		}
		else{
			cout << " F grade student";
		}
		}
		
};
	int main(){
		
			CourseEnrollment student(0277,"Royce","COME2208","ADT",4,"Prof Annim");
			student.getStudentName(); 
			student.getCourseCode();
			student.setRegistrationStatus(true);
			student.getRegistrationStatus();
			student.setLecturerName("Engr Tangu Achilis");
			student.getLecturerName();
		    student.getquizScore();
			student.getattendance();
			student.getassignmentScores();
			student.getExamScores();
			student.getcalculateQuizAverage();
			student.getcalculateAssignmentAverage();
			student.getcalculateExamAverage();
			student.getcalculateAttendanceRate();
			student.getcalculateOverallScore();
			student.gettotalScore();
			//report
		    student.registerStudent();
			cout << student.getStudentName() <<" And has been enrolled under the course " << student.getCourseCode() ;
			cout << "Instructed by the lecturer " << student.getLecturerName() <<endl << endl;
			student.markAttendance(student.getattendance());
			student.calculateAttendanceRate(student.getcalculateAttendanceRate());
			student.addQuizScore(student.getquizScore());
			student.calculateQuizAverage(student.getcalculateQuizAverage());
			student.addAssignmentScores(student.getassignmentScores());
			student.calculateAssignmentAverage(student.getcalculateAssignmentAverage());
 			student.addExamScore(student.getExamScores());
			student.calculateExamAverage(student.getcalculateExamAverage());
			student.calculateOverallScore();
			student.determineLetterGrade();
			return 0;
		}

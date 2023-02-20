 #include<iostream>
 #include <string> 
 using namespace std; 
 
 const double DEFAULT_SCORE = 0.0; 
 class StudentTestScores 
 { 
 private: 
 string studentName; // The student's name 
 double *testScores; // Points to array of test scores 
 int numTestScores; // Number of test scores f

// Private member function to create an array of test scores. 
void createTestScoresArray(int size) 
{ 
	numTestScores = size; 
	testScores = new double[size]; 
	for (int i = 0; i < size; i++) 
	testScores[i] = DEFAULT_SCORE;
}
public: 
// Constructor 
StudentTestScores(string name, int numScores) 
{ 
	studentName = name; 
	createTestScoresArray(numScores); 
} 

//Copy Constructor
StudentTestScores(const StudentTestScores& obj)
{
	studentName=obj.studentName;
	numTestScores=obj.numTestScores;
	testScores=new double[numTestScores];
	for (int i = 0; i < numTestScores; i++) 
	testScores[i] = obj.testScores[i];
	
}

void operator=(const StudentTestScores& obj)
{
	delete[] testScores;
	studentName=obj.studentName;
	numTestScores=obj.numTestScores;
	testScores=new double[numTestScores];
	for (int i = 0; i < numTestScores; i++) 
	testScores[i] = obj.testScores[i];
}

// Destructor 
~StudentTestScores() 
{ 
	delete [] testScores; 
} 

// Set TestScore function sets a specific test score's value. 
void setTestScore(double score, int index) 
{ 
	testScores[index] = score;
} 

// Set the student's name. 
void setStudentName(string name) 
{ 
	studentName = name; 
} 

// Get the student's name. 
string getStudentName() const 
{ 
	return studentName; 
} 

// Get the number of test scores. 
int getNumTestScores() const 
{ 
	return numTestScores; 
} 

// Get a specific test score. 
double getTestScore(int index) const 
{ 
	return testScores[index]; 
} 
}; 

int main()
{
	//StudentTestScores s1 ("Rida", 5); 
	//s1.setTestScore(100.0, 3);
	//cout<<s1.getTestScore(3)<<endl;
	//s1.setTestScore(95.0, 1);
	//s1.setTestScore(80, 2);
	
	//StudentTestScores s2 = s1; or StudentTestScores s2(s1);
	
	//cout<<s2.getTestScore(3)<<endl;
	
	
	//s2.setStudentName("Mubeen");
	//s2.setTestScore(79.7,3);
	//s2.setTestScore(96.7,1);
	//s2.setTestScore(84.5,2);
	
	//cout<<s2.getStudentName()<<endl;
	//cout<<s2.getTestScore(3)<<endl;
	//cout<<s1.getTestScore(3)<<endl;
	//StudentTestScores* ptr=new StudentTestScores;
	//ptr[3].getTestScore(3);
	StudentTestScores s3("abc",7);
	StudentTestScores s4("def",3);
	s4=s3; //or s4.operator=(s3);
	
	s3.setTestScore(100.0, 3);
	cout<<s3.getTestScore(3)<<endl;
	s3.setTestScore(95.0, 1);
	s3.setTestScore(80, 2);
	cout<<s3.getTestScore(1)<<endl;
	cout<<s3.getTestScore(2)<<endl;
	
	
	cout<<s4.getTestScore(1)<<endl;
	cout<<s4.getTestScore(2)<<endl;
	cout<<s4.getTestScore(3)<<endl;
		
	
	system("pause");
}


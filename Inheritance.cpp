class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        /*
        *   Class Constructor
        *
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int id, vector<int> scores)
          : Person(firstName, lastName, id), testScores(scores){
        }
        /*
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
          int scores = testScores.size();
          int counter = 0;
          for (size_t i = 0; i < scores; i++) {
            counter += testScores[i];
          }
          double score = counter / scores;

          char grade;
          if (score >= 90) {
            grade = 'O';
          } else if (score >= 80) {
            grade = 'E';
          } else if (score >= 70) {
            grade = 'A';
          } else if (score >= 55) {
            grade = 'P';
          } else if (score >= 40) {
            grade = 'D';
          } else {
            grade = 'T';
          }

          return grade;
        }
};

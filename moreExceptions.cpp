//Write your code here
class Calculator{
public:
  int power(int a,int b){
    if (a < 0 || b < 0){
      throw invalid_argument("n and p should be non-negative");
    } else {
      int num = 1;
      int power = b;
      while (power-- > 0) {
        num *= a;
      }
      return num;
    }

  }
};

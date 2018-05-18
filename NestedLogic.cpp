#include <iostream>

using namespace std;

struct Date {
  int day;
  int month;
  int year;

  Date(int d, int m, int y) : day(d), month(m), year(y){}
};

int getFines(Date back, Date due) {
  int yearDif = back.year - due.year;
  int monthDif = back.month - due.month;
  int dayDif = back.day - due.day;

  if (yearDif > 0){
    return 10'000;
  } else if (monthDif > 0 && yearDif == 0) {
    return 500 * monthDif;
  } else if (dayDif > 0 && monthDif == 0) {
    return 15 * dayDif;
  } else {
    return 0;
  }
}

void showFines(int fine){
  cout << fine;
}

int main(){
  int d, m, y;

  cin >> d >> m >> y;
  Date backDate(d, m, y);

  cin >> d >> m >> y;
  Date dueDate(d, m, y);

  showFines(getFines(backDate, dueDate));
}

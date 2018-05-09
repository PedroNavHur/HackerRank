#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int getConsevutive(int num){
        int rem = 0, n = num, counter = 0, countMax = 0;
        while (n > 0) {
                rem = n % 2;
                n = n / 2;
                if (rem == 1) {
                        counter++;
                        if (counter > countMax) {
                                countMax = counter;
                        } 
                } else {
                        counter = 0;
                }
        }

        return countMax;
}

int main(){
        int num;
        cin >> num;

        cout << getConsevutive(num);

        return 0;
}

#include <iostream>
using namespace std;

int main() {
const int height = 61; 
const int weight= 130;

double kg;
double meter;

//calulations
kg = weight * 0.453592;
meter = height * 0.0254;

//bmi forumla
double bmi;
bmi = kg/(meter * meter);

cout << "The BMI for this person is : " << bmi << endl;
}

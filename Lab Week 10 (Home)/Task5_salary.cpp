#include<iostream>
#include<cmath>
using namespace std;
float score90 = 0.2;

float score75_89 = 0.1;
float scoreOtherwise = 0.05;

// Pprototype
 float bonusCalculator (float base, int score, int experience);

// Main Function


main(){
float basic_Pay;
int score, experience;
cout << "Enter base, score and experience in years: " << endl;
cin >> basic_Pay;
cin >> score;
cin >> experience;
float result = bonusCalculator (basic_Pay, score, experience);
cout << "Final Salary: " << result;
}

// Bonus Calculator

float bonusCalculator (float base, int score, int experience)
{

// if condition for calculating bonus

float totalSalary;
float totalBonus;
float experienceBonus;
if (score >= 90){

totalBonus = base * score90;
}

if (experience >= 5)
{
    experienceBonus = base * 0.05;
}

else if (score <= 89 && score >= 75){

totalBonus = base * score75_89;
if (experience >= 5){
experienceBonus = base * 0.05;
}
}
else {
totalBonus = base * scoreOtherwise;
if (experience >= 5)
{
experienceBonus = base * 0.05;
}
}
totalSalary = base + totalBonus + experienceBonus;
return totalSalary;
}











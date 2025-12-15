#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int prelim_wt = 20,
                midterm_wt = 20,
                prefinal_wt = 20,
                final_wt = 40;  
    float prelim, midterm, prefinal, final, average, units;
    char again = 'Y';
    do {
    cout <<"\nTo compute your GWA, please enter the following grades: \n"
    <<"\tEnter your Prelim grade: "<< prelim_wt <<"%\n"
    <<"\tEnter your Midterm grade: "<< midterm_wt <<"%\n"
    <<"\tEnter your Prefinal grade: "<< prefinal_wt <<"%\n"
    <<"\tEnter your Final grade: "<< final_wt <<"%\n";
    do{
    cout<<"What is the percentage score you got for your Prelim? ";
    cin>>units;
        if (units < 50 || units > 100){
            cout<<"Invalid input. Please enter a percentage score between 50 and 100.\n";
        }
    } while (units < 50 || units > 100);
    prelim = units * prelim_wt;

    do {
    cout<<"What is the percentage score you got for your Midterm? ";
    cin>>units;

    if(units < 50 || units > 100){
        cout<<"Invalid input. Please enter a percentage score between 50 and 100.\n";
    }
    } while (units < 50 || units > 100);
    midterm = units * midterm_wt;

    do {
    cout<<"What is the percentage score you got for your Prefinal? ";
    cin>>units;
    if(units < 50 || units > 100){
        cout<<"Invalid input. Please enter a percentage score between 50 and 100.\n";
    }
    } while (units < 50 || units > 100);
    prefinal = units * prefinal_wt;

    do {
    cout<<"What is the percentage score you got for your Final? ";
    cin>>units;
    
    if(units < 50 || units > 100){
        cout<<"Invalid input. Please enter a percentage score between 50 and 100.\n";
    }
    } while (units < 50 || units > 100);
    final = units * final_wt;


    average = prelim + midterm + prefinal + final;
    float gwa = average / 100.0f; 
    cout<<fixed<<setprecision(2);
    cout<<"\nYour General Weighted Average (GWA) is: "<<gwa << "%";

    if(average >= 97.5f)cout << "\nYour Grade is A+";

    else if(average >= 94.5f)cout << "\nYour Grade is A";
    
    else if(average >= 91.5f)cout << "\nYour Grade is A-";
    
    else if(average >= 86.5f)cout << "\nYour Grade is B+";
    
    else if(average >= 81.5f)cout << "\nYour Grade is B";
    
    else if(average >= 76.00f) cout << "\nYour Grade is B-";

    else if(average >= 71.5f)cout << "\nYour Grade is C+";

    else if(average >= 66.5f)cout << "\nYour Grade is C";

    else if(average >= 61.5f)cout << "\nYour Grade is C-";

    else if(average >= 50.0f)cout << "\nYour Grade is D";            

    else cout << "\nYour Grade is F";
    
    cout<<"\nDo you want to compute another GWA? Click Y (continue) or y (no): ";
    cin>> again;
    
    } while(again == 'Y' || again == 'y');
    return 0;
}

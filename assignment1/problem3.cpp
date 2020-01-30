#include <iostream>
using namespace std;

int main(int argc, char **argv){
    
    const float PAY_RATE = 16.00;
    const float SOCIAL_SECURITY_RATE = 0.06;
    const float FEDERAL_TAX_RATE = 0.14;
    const float STATE_TAX_RATE = 0.05;
    const int INSURANCE_FEE = 10;

    float hoursWorked;
    cin >> hoursWorked;

    float grossPay =  PAY_RATE * hoursWorked;
    if(hoursWorked > 40){
        grossPay += 0.5 * PAY_RATE * (hoursWorked - 40);
    }
    float socialSecurityTax = grossPay * SOCIAL_SECURITY_RATE;
    float federalIncomeTax = grossPay * FEDERAL_TAX_RATE;
    float stateIncomeTax = grossPay * STATE_TAX_RATE;
    cout << "Gross pay: $" << grossPay << endl
         << "Social security withholding: $" << socialSecurityTax << endl
         << "Federal income tax withholding: $" << federalIncomeTax << endl
         << "State income tax withholding: $" << stateIncomeTax << endl
         << "Medical insurance withholding: $" << INSURANCE_FEE << endl
         << "Net take-home pay: $" << grossPay - socialSecurityTax - federalIncomeTax - stateIncomeTax - INSURANCE_FEE << endl;

    return 0;
}

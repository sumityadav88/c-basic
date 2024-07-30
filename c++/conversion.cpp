# include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    int ans = 0;
    int power = 1;
    
    while(n > 0){
        int lastDigit = n % 10;
        ans = ans + (lastDigit * power);
        power *= 2;
        n / 10; 
    }

    cout<<ans;

    return 0;
}
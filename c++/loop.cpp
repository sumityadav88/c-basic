# include <iostream>
using namespace std;

int main(){
    int n = 0 ;

    while(1){
        for(int i = 1; i <= 5; i++){
            n = 5 * i;
            if(n % 7 == 0){
                cout<<n<<endl;
            }
            else{
                break;
            }
        }
    }

    return 0;
}
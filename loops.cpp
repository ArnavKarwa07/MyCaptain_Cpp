#include <iostream>
using namespace std;
int main(){

for (int i=1; i<=5; i++){
        cout <<i <<endl;        
}

int j=0;
while (j<5)
{
    cout << j <<endl;
    j++;
}

int k = 1;
do {
    cout << k <<endl;
    k++;
} 
while (k<=5);

for (int a=0; a<3; a++){
    for (int b=0; b<3; b++){
        cout << "(" << a << "," << b << ")" << endl;
}
}

char c;
for (c='A'; c<='z'; c++){
    cout << c << " ";
}
return 0;
}
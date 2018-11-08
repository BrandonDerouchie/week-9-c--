#include <iostream>
using namespace std;

int main() {
int passes  [] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int failures[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int examresults[10];
int NumStudent = sizeof(examresults) / sizeof(examresults[0]);
int n; 
int x = 0;
int y = 0;
passes[0] = 0;
failures[0] = 0;

for ( n = 0; n < NumStudent; n++ ) {    
    cout << "Enter exam result: " ;
    cin  >> examresults[n]; 
if ( examresults[n] >= 50 ) {   
    passes[x] = examresults[n]; 
     x += 1;               
    }
else {             
     failures[y] = examresults[n]; 
     y += 1;
} 
}

cout << "   " << endl; 

for ( n=0; n< NumStudent; n++) {
    
    cout << "student " << n+1 << " ----- " << examresults[n] << endl; 
} 
cout << "   " << endl; 

for ( n =0; n < NumStudent; n++ ) {
    
    cout << "The passes are   " << passes[n];

if (passes[n] >= 80) { 
        cout << " ---- " << "grade a" << endl; 
}
else if (passes[n] >= 70) {
            cout << " ---- " << "grade b" << endl; 
}

else if (passes[n] >= 60) {
            cout << " ---- " << "grade c" << endl; 
}
else if (passes[n] >= 50) {
            cout << " ---- " << "grade d" << endl; 
}
else {
        cout << "  ---- " << "N/A" << endl;
}
}
if (x >= 8) {   
    cout << "   " << endl; 
    cout << " Increase tuition -------- "<< x << " students passed " << endl;
}

cout << "   " << endl; 
for  ( n =0; n < NumStudent; n++ ) { 
    cout << "The failures are " << failures[n];

if ((failures[n] > 1) && (failures[n] <50)) {
    cout << " ---- " << "grade f" << endl; 
        } 

else {
    cout << "  ---- " << "N/A" << endl;
        }
}
if (y >= 5) {    

    cout << "   " << endl; 
    cout << " lower tuition ------- "<< y << " students failed " << endl;
}
cout << "   " << endl;
return 0;
}

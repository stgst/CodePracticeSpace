 
#include<iostream>  
#include<algorithm>
  
using namespace std; 
   
int main() 
{ 
    int N; //set N == 1 //debug useful
    int S; //set S == 10 //debug useful
    int day; //set day == 120 //debug useful
    int total = 0; //then,it must be 10*5 //debug useful
    int bsize = 0;
    
    cin >> N; //Total books
    int B[N]; //array with length [N]
    
    for(int i=1;i <= N;i++){
      cin >> S;
      cin >> day;
      if((day - 100) > 0){
        bsize++;
        B[bsize] = S; //B[1] = 10 //debug useful
        total = 5*(day - 100)+total; //total = 100+0//debug useful
      }else{
        continue;
      }
    }
    
    sort(B+1,B + 1 + bsize);
    
    for(int i=1;i <= bsize;i++){
      cout << B[i] << " ";
    }
    
    cout << endl << total;
    
    return 0;
} 

#include <iostream>
using namespace std;

int main()
{
    int N = 0; //Total Height Points
    int X = 0; //End Points
    int O; //Output
    int H[31];
    
    cin >> N;
 
    for(int i=0;i<N;i++){
        cin >> H[i];
    }
    
    cin >> X;
    O = X;

    if(X+1 > N){
        while(H[O-1] > H[O]){
            O++;
        }
    }//BUG: 當數字到了最頭仍繼續程式

    if(X-1 < 0){
        while(H[O+1] > H[O]){
            O++;
        }
    }//BUG: 當數字到了最尾仍繼續程式

    if(H[X+1] < H[X-1]){
        while(H[O+1] > H[O]){
            O++;
        }
    }
    if(H[X+1] > H[X-1]){
        while(H[O-1] > H[O]){
            O++;
        }
    }
    
    cout << O;
}

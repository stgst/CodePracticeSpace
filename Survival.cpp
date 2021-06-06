#include <iostream>
using namespace std;

int main()
{
    int N; //Total of Lions
    int H[2001]; //Limit of Lions is 2000
    int W[2001]; //Limit of Lions is 2000
    int min = 1000001; //Maximum, Height*Weight =  1000000
    int sum = 0; //Minimum

    cin >> N; //input Total of Lions
    for(int i=0;i<N;i++){
        cin >> H[i]; //input Height of Lions
    }
    //上下迴圈若合併，會導致無法換行輸入值。

    for(int i=0;i<N;i++){
        cin >> W[i]; //input Weight of Lions
        if(H[i]*W[i] < min){ //find Minimum of Height multiply Weight
            min = H[i]*W[i];
            sum = i;
        }
    }
    cout << H[sum] << " " << W[sum];
}

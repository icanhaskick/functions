#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main(){

	ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);

    int num, cont = 0;
    cin >> num;
    int v[num];

    for(int i = 0; i < num;i++){
    	cin >> v[i];
    	cont+=v[i];
    }

    if(cont%4==0){
    	cout << cont/4<<endl;
    } else{
    	cout << (cont/4)+1 << endl;
    }

	return 0;
}
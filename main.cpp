//
//  main.cpp
//  problem1
//
//  Created by Islombek Abdurahmonov on 23/11/22.
//

#include <iostream>
//include <>
using namespace std;

int main(int argc, const char * argv[]) {
    vector < int > v;
    int n;
    cin >> n;
    int a;
    for(int i=0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    
    int min = v[0], max = v[0];
    int sum = v[0];
    for(int i=1; i<n; i++){
        if(min > v[i]){
            min = v[i];
        }
        if(max)
    }
    
    return 0;
}

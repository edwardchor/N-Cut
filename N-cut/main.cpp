//
//  main.cpp
//  N-cut
//  This is a simple simulation of normalised cut of small graphs.
//
//  Created by 储仲尧 on 9/26/15.
//  Copyright © 2015 Uopia. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#define MAX_LAYERS 2

using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inputData("graph.txt");
    ofstream outputData("result.txt");
    string line;
    int vertex[10][10];
    int result[MAX_LAYERS][10][10];
    int i,j,k;
    int row=0;
    while(row<10){
        getline(inputData,line);
        for(i=0;i<10;i++){
            vertex[row][i]=line[i]-'0';
            cout<<vertex[row][i];
        }
        cout<<endl;
        row++;
    }
    for(j=0;j<10;j++){
        for(k=0;k<10;k++){
            
        }
    }
    
    return 0;
}

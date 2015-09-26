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

using namespace std;

int main(int argc, const char * argv[]) {
    ifstream inputData("example.txt");
    ofstream outputData("result.txt");
    string line;
    int graph[10][10];
    while(!inputData.eof()){
        getline(inputData,line);
        
    }
    return 0;
}

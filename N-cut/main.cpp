//
//  main.cpp
//  N-cut
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
    ofstream myfile;
    myfile.open ("example.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();
    return 0;
}

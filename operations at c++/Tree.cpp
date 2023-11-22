
#include <array>
#include <iomanip> // for setprecision()

#include <string.h>
#include <string>
#include <vector>

#include <unistd.h>
#include <iostream>
#include <type_traits>

#include <cmath>
using namespace std;

class Node {
    int data ;
    Node* right ;
    Node* left  ;
    Node(int data):data(data),right(nullptr),left(nullptr){}
}

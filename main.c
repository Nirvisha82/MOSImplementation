#include <stdio.h>
int main() {
 FILE *input;
 FILE *output;
 //fopen() function is used to open a file named example.txt in read mode
 input = fopen ('input.txt', 'r');
 output = fopen ('output.txt', 'w');

}

void INIT() {
    // insert your code here
}

LOAD() {
    // insert your code here
}

STARTEXECUTION() {
    EXECUTEUSERPROGRAM();
}

EXECUTEUSERPROGRAM() {
    // If GD, PD, H, call MOS
    MOS();
}

MOS() {
    //if SI=1
    READ();

    //if SI=2
    WRITE();

    //if SI=3
    TERMINATE();
}

READ() {
    // insert your code here
};

WRITE() {
    // insert your code here
};

TERMINATE() {
    // insert your code here
};
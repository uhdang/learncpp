//
// Created by Jung Woo James Jeong on 27.12.21.
//

#include "io.h"

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer(x+y);
    return 0;
}


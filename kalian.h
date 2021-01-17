#pragma once

#include <iostream>
#include "iomanip"
#include "random"
#include "ctime"

using namespace std;

void filler(float** mas, int m, int n);
float** min_fouder(float** mas, int m, int n);
float** deleter(float** mas, int m, int n, int col);
void outer(float** mas, int m, int n, string name);
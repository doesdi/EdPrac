#pragma once
#include <vector>
#include <fstream>
#include <iterator>
#include <algorithm>
using namespace std;

#ifdef EDUCATIONALPRACTICEDLL_EXPORTS
#define EDUCATIONALPRACTICEDLL_API __declspec(dllexport)
#else
#define EDUCATIONALPRACTICEDLL_API __declspec(dllimport)
#endif

extern "C" EDUCATIONALPRACTICEDLL_API void writeToFile2(const vector<string> &vector);
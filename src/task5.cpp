 
 
#include "stdafx.h"
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include <cstring>
#include <string>
 
using namespace std;

void split(char ***result, int *N, char *buf, char ch) {
	 
	int i = 0, j = 0;
	string str = buf;
	int c = count(str.begin(), str.end(), ch);
	*N = c + 1;
	*result = new char*[*N];
	 
	char* res = strtok(buf, &ch);
	 
	(*result)[0] = res;
	 
	for (int i = 1; i < *N;i++) {
				res = strtok(NULL, &ch);
				(*result)[i] = res;
				 
			}
			 
		 
}

 

#define _CRTDBG_MAP_ALLOC  
#include <crtdbg.h>  
#include <iostream>  
using namespace std;  
int main(int argc,char** argv)  
{  
    char *str1 = NULL;  
    char *str2 = NULL;  
    str1=new char[400];  
    str2=new char[200];  
  
    delete str1;  
    _CrtDumpMemoryLeaks();  
    return 0;  
} 

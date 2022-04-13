#include<iostream>
#include<fstream>
#include"../Library/proses.h"
int main(){
	Proses proses;
  proses.getdata();
	proses.toFile();
  return 0;
}
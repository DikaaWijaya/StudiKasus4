#include<iostream>
#include<fstream>
#include"Library/input.h"
#include"Library/proses.h"
#include"Library/output.h"
using namespace std;
int main(){
  input input;
	input.cetak();
	input.getData();
  Proses proses;
	proses.getdata();
	proses.toFile();
  Output output;
	output.cetak();
	output.getData();
  return 0;
}
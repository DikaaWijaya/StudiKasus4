using namespace std;

class Output{
 public :
 void cetak(){
   cout<<"Studi Kasus membuat catatan pengeluaran :\n";
   cout<<"Total pengeluaran : "<<data_file[0]<<endl;
   cout<<"Total tabungan : "<<data_file[1]<<endl;
   cout<<"Total sisa uang : "<<data_file[2]<<endl;
 }
void getData(){
  ambil_data.open("../dummy/out_proces.txt");
  while(!ambil_data.eof()){
    ambil_data >> data_file[index];
    index += 1;
    }
  ambil_data.close();
}
private:
ifstream ambil_data;
string data_file[30];
int index = 0;
};
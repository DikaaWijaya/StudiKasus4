using namespace std;
class Proses{
public :
void getdata(){
  ambil_data.open("../dummy/out_input.txt");
  while(!ambil_data.eof()){
  ambil_data>>bulan;
  ambil_data>>kuliah;
  ambil_data>>jajan;
  ambil_data>>tabung;
  }
  ambil_data.close();
  cout<<"Uang untuk berapa bulan = "<<bulan<<endl;
  cout<<"Uang Kuliah = "<<kuliah<<endl;
  cout<<"Uang jajan = "<<jajan<<endl;
  cout<<"Uang yang ditabung ="<<tabung<<endl;
  }
void toFile(){
  int total = kuliah+jajan+tabung;
  int tabungan = tabung*5;
  int sisa = total-bulan;

  tulis_data.open("../dummy/out_proces.txt");
  tulis_data<<total<<endl;
  tulis_data<<tabungan<<endl;
  tulis_data<<sisa;
}
private :
ifstream ambil_data;
ofstream tulis_data;
int bulan;
int kuliah;
int jajan;
int tabung;
};
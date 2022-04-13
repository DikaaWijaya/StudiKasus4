using namespace std;

class input{
  public :
        void cetak(){
          cout <<"Data Pengeluaran andi \n";
          cout <<"==========================" \n\n;
          cout <<"input untuk berapa bulan?  : "; cin>>bulan;
          cout <<" Uang Kuliah               : "; cin>>kuliah;
          cout <<" Uang Jajan                 : "; cin>>jajan;
          cout <<" Uang ditabung              : "; cin>>tabung;
  }
  void toFile(){
    tulis_data.open("out_input.txt")
    tulis_data<<bulan<<endl;
    tulis_data<<kuliah<<endl;
    tulis_data<<jajan<<endl;
    tulis_data<<tabung<<endl;
    tulis_data.close();
  }
private :
  ofstream tulis_data;
  int bulan;
  int kuliah;
  int jajan;
  int tabung;
};
#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;//variabel untuk menyimpan input dari ;ingkaran maupun bujursangkar
public:
	bidangDatar() {//constructor
		x = 0;

	}
	virtual void input(){}// fungsi yang menerima input data mengirim input melalui fugsi setX disimpan di x
	virtual float luas(int a) { return 0; } // fungsi untuk menghitung luas
	virtual float keliling(int a) {
		return 0;
	}
	void setX(int a) {// fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() {// fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class lingkaran :public bidangDatar {/*lengkapi disini*/
private:
	int jari_jari;
public:
	void input() {
		cout << "Memasukan jejari" << endl;
		cin >> jari_jari;
		setX(jari_jari);
	}
	float luas(int r) {
		
		return 3.14 * r * r;
	}
	float keliling(int r) {
		
		return 2 * 3.14 * r;
	}
};
class Bujursangkar :public bidangDatar {
private:
	int sisi;
public:
	void input() {
		cout << "Masukkan sisi bujursangkar: ";
		cin >> sisi;
		setX(sisi);
	}
	float Luas(int sisi) {
		return sisi * sisi;
	}
	float Keliling(int sisi) {
		return 4 * sisi;
	}


};
int main() {
	bidangDatar* bd;
	lingkaran lingkaran;
	Bujursangkar bujursangkar;

	*bd = lingkaran;
	bd->input();	
	cout << "luas lingkaran:" << bd->luas(bd->getX()) << endl;
	cout << "Keliling lingkaran: " << bd->keliling(bd->getX()) << endl;

	bd = &bujursangkar;
	bd->input();
	cout << "Luas bujursangkar: " << bd->luas(bd->getX()) << endl;
	cout << "Keliling bujursangkar: " << bd->keliling(bd->getX()) << endl;

	return 0;
}





#include <iostream> //header file library
#include <conio.h>
#include <iomanip>
using namespace std;

// Nama : M Nandana Aruna Apta Baswara
// NIM  : 223140714111134
// Kelas: T2D

int main()
{
    // deklarasi variabel
    char nama[20];
    char kembali;
    int jenis_pegawai, nik, jenis_jabatan, harikerja, tj, honor, tdkerja;
    float gpp, gp, gk, gb, ppn;

    // do while untuk melakukan pengulangan program (menghitung gaji kembali atau tidak)
    do
    {
        // Menampilkan pilihan jenis pegawai
        cout << "----------Jenis Pegawai---------" << endl
             << "1. PNS" << endl
             << "2. Tetap Non PNS" << endl
             << "3. Kontrak" << endl
             << "--------------------------------" << endl;

        // Meminta input dari user untuk jenis pegawai, nama, dan NIK
        cout << "Masukkan jenis pegawai : ";
        cin >> jenis_pegawai;
        cout << "Masukkan nama pegawai  : ";
        cin >> nama;
        cout << "Masukkan NIK pegawai   : ";
        cin >> nik;
        cout << endl;

        // Menampilkan pilihan jenis jabatan
        cout << "---------Jenis Jabatan---------" << endl
             << "1. Kepala Bagian" << endl
             << "2. Wakil Kepala Bagian" << endl
             << "3. Staff" << endl
             << "-------------------------------" << endl;

        // Meminta input dari user untuk jenis jabatan dan jumlah hari kerja
        cout << "Masukkan Jenis Jabatan     :";
        cin >> jenis_jabatan;
        cout << "Masukkan jumlah hari kerja :";
        cin >> harikerja;
        cout << endl;

        // Menampilkan rincian gaji berdasarkan nama dan NIK
        cout << "-----Rincian Gaji-----" << endl
             << "Nama    :" << nama << endl
             << "NIK     :" << nik << endl;

        // Mengisi nilai variabel berdasarakan input jenis pegawai dan jenis jabatan
        // Menampilkan lanjutan dari rincian gaji berdasarkan jenis pegawai dan jenis jabatan
        switch (jenis_pegawai) // menggunakan switch case untuk memproses input jenis pegawai
        {
        case 1: // jika jenis pegawai = PNS, mengisi nilai variabel berdasarkan jabatan PNS
        {
            tj = 800000;           // variabel tunjangan untuk jenis pegawai PNS dengan jabatan Kepala Bagian, Wakil Kepala Bagian, dan Staff
            switch (jenis_jabatan) // menggunakan switch case untuk memproses input jenis jabatan PNS
            {
            case 1: // jika jabatan = Kepala Bagian, mengisi nilai variabel berdasarkan jabatan Kepala Bagian
                cout << "Status  : PNS" << endl
                     << "Jabatan : Kepala Bagian" << endl
                     << "-------------------------------" << endl;
                gp = 4500000;
                honor = 30000;
                break;
            case 2: // jika jabatan = Wakil Kepala Bagian, mengisi nilai variabel berdasarkan jabatan Wakil Kepala Bagian
                cout << "Status  : PNS" << endl
                     << "Jabatan : Wakil Kepala Bagian" << endl
                     << "-------------------------------" << endl;
                gp = 4000000;
                honor = 25000;
                break;
            case 3: // jika jabatan = Staff, mengisi nilai variabel berdasarkan jabatan Staff
                cout << "Status  : PNS" << endl
                     << "Jabatan : Staff" << endl
                     << "-------------------------------" << endl;
                gp = 3500000;
                honor = 20000;
                break;
            default: // jika input jenis jabatan tidak valid, mengeluarkan pesan error dan keluar dari program
                cout << "Jenis Jabatan tidak Valid" << endl
                     << "-------------------------------" << endl;
                return 0;
            }
            break;
        }
        case 2: // jika user memilih Tetap Non PNS, mengisi nilai variabel berdasarkan jabatan Tetap Non PNS
        {
            tj = 600000;           // variabel tunjangan untuk jenis pegawai Tetap Non PNS dengan jabatan Kepala Bagian, Wakil Kepala Bagian, dan Staff
            switch (jenis_jabatan) // menggunakan switch case untuk memproses input jenis jabatan Tetap Non PNS
            {
            case 1: // jika jabatan = Kepala Bagian, mengisi nilai variabel berdasarkan jabatan Kepala Bagian
                cout << "Status  : Tetap Non PNS" << endl
                     << "Jabatan : Kepala Bagian" << endl
                     << "-------------------------------" << endl;
                gp = 3500000;
                honor = 25000;
                break;
            case 2: // jika jabatan = Wakil Kepala Bagian, mengisi nilai variabel berdasarkan jabatan Wakil Kepala Bagian
                cout << "Status  : Tetap Non PNS" << endl
                     << "Jabatan : Wakil Kepala Bagian" << endl
                     << "-------------------------------" << endl;
                gp = 3000000;
                honor = 20000;
                break;
            case 3: // jika jabatan = Staff, mengisi nilai variabel berdasarkan jabatan Staff
                cout << "Status  : Tetap Non PNS" << endl
                     << "Jabatan : Staff" << endl
                     << "-------------------------------" << endl;
                gp = 2500000;
                honor = 15000;
                break;
            default: // jika input jenis jabatan tidak valid, mengeluarkan pesan error dan keluar dari program
                cout << "Jenis Jabatan tidak Valid" << endl
                     << "-------------------------------" << endl;
                return 0;
            }
            break;
        }
        case 3: // jika user memilih Kontrak, mengisi nilai variabel berdasarkan jabatan Kontrak
        {
            tj = 400000;           // variabel tunjangan untuk jenis pegawai Kontrak dengan jabatan Kepala Bagian, Wakil Kepala Bagian, dan Staff
            switch (jenis_jabatan) // menggunakan switch case untuk memproses input jenis jabatan Kontrak
            {
            case 1: // jika jabatan = Kepala Bagian, mengisi nilai variabel berdasarkan jabatan Kepala Bagian
                cout << "Status  : Kontrak " << endl
                     << "Jabatan : Kepala Bagian " << endl
                     << "-------------------------------" << endl;
                gp = 2500000;
                honor = 20000;
                break;
            case 2: // jika jabatan = Wakil Kepala Bagian, mengisi nilai variabel berdasarkan jabatan Wakil Kepala Bagian
                cout << "Status  : Kontrak " << endl
                     << "Jabatan : Wakil Kepala Bagian " << endl
                     << "-------------------------------" << endl;
                gp = 2000000;
                honor = 15000;
                break;
            case 3: // jika jabatan = Staff, mengisi nilai variabel berdasarkan jabatan Staff
                cout << "Status  : Kontrak " << endl
                     << "Jabatan : Staff " << endl
                     << "-------------------------------" << endl;
                gp = 1500000;
                honor = 10000;
                break;
            default: // jika input jenis jabatan tidak valid, mengeluarkan pesan error dan keluar dari program
                cout << "Jenis Jabatan tidak Valid" << endl
                     << "-------------------------------" << endl;
                return 0;
            }
            break;
        }
        default: // jika input jenis pegawai tidak valid, mengeluarkan pesan error dan keluar dari program
            cout << " Jenis Pegawai tidak Valid " << endl
                 << "-------------------------------" << endl;
            return 0;
        }

        // menghitung gaji pokok perhari,kotor, pajak, dan gaji bersih
        gpp = gp / 25;
        gk = harikerja * gpp + tj + honor;
        ppn = gk * 0.05;
        gb = gk - ppn;

        // menampilkan hasil perhitungan gaji
        cout << " Gaji Pokok  = Rp. " << fixed << setprecision(0) << gp << endl
             << " Tunjangan   = Rp.  " << fixed << setprecision(0) << tj << endl
             << " Honor       = Rp.   " << fixed << setprecision(0) << honor << endl
             << " Pajak       = Rp.  " << fixed << setprecision(0) << ppn << endl
             << "-------------------------------" << endl
             << " Gaji Bersih = Rp. " << fixed << setprecision(0) << gb << endl;

        cout << endl
             << ("Hitung gaji lagi? (y/n)?  : "); // meminta input dari user untuk melakukan perhitungan gaji kembali atau tidak
        cin >> kembali;
        cout << "Terima kasih telah menggunakan program kami!" << endl;
    } while (kembali == 'Y' || kembali == 'y'); // menunggu user menekan tombol apapun sebelum keluar dari program
    getch();

    return 0;
}
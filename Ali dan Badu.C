#include <stdio.h>

int main() {
    
    // Input kecepatan dan waktu berangkat Ali
    printf("Masukkan kecepatan Ali (m/detik): ");
    int KecepatanAli; 
    scanf("%d", &KecepatanAli);
    int StartjamAli, StartmenitAli;
    printf("Masukkan waktu berangkat Ali jam dan menit (contoh 08:00): ");
    scanf("%d:%d", &StartjamAli, &StartmenitAli);
    int detikAli = StartjamAli * 3600 + StartmenitAli * 60;
    
    // Input kecepatan dan waktu berangkat Badu
    printf("Masukkan kecepatan Badu (m/detik): ");
    int KecepatanBadu;
    scanf("%d", &KecepatanBadu);
    int StartjamBadu, StartmenitBadu;
    printf("Masukkan waktu berangkat Badu jam dan menit (contoh 09:00): ");
    scanf("%d:%d", &StartjamBadu, &StartmenitBadu);
    int detikBadu = StartjamBadu * 3600 + StartmenitBadu * 60;
    
    //Penyamaan Waktu Ali dengan Badu
    int JarakAli = 0;
    while (detikAli != detikBadu){
        detikAli ++;
        JarakAli += KecepatanAli;
    }
    int DetikKetemu = detikAli;
    
    //Perhitungan Kapan Ali dan Badu Ketemu
    int JarakBadu = 0;
    while (JarakAli > JarakBadu){
        DetikKetemu ++;
        JarakAli += KecepatanAli;
        JarakBadu += KecepatanBadu;
    }

    // Konversi waktu
    int Jam = DetikKetemu / 3600;
    DetikKetemu %= 3600;
    int Menit = DetikKetemu / 60;
    DetikKetemu %= 60;

    // Cetak hasil
    printf("Ali dan Badu tepat berada pada titik yang sama dimana Badu mulai akan mendahului Ali pada pukul %02d:%02d:%02d.\n", Jam, Menit, DetikKetemu);
    
    return 0;
}

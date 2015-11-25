#include <stdio.h>
#include <time.h>


    void tampilkan_kalender ()
{

    time_t rawtime ;
    struct tm *info;
    char buffer[80];
    char Month[15];
    char HARI[10];

    time(&rawtime);

    info = localtime(&rawtime);

    strftime( buffer,80, "%d -__- %Y \n %H : %M : %S - .  ",info);
    printf(" Tanggal & Jam : %s ", buffer);

    strftime(Month,15,"%B",info);
    if(strcmp(Month,"January") == 0)
    {
        printf("Bulan Januari\n");
    }else if(strcmp(Month,"February") == 0)
    {
        printf("Bulan Pebruari\n");
    }else if(strcmp(Month,"March") == 0)
    {
        printf("Bulan Maret\n");
    }else if(strcmp(Month,"April") == 0)
    {
        printf("Bulan April\n");
    }else if(strcmp(Month,"May") == 0)
    {
        printf("Bulan Mei\n");
    }else if(strcmp(Month,"June") == 0)
    {
        printf("Bulan Juni\n");
    }else if(strcmp(Month,"July") == 0)
    {
        printf("Bulan Juli\n");
    }else if(strcmp(Month,"August") == 0)
    {
        printf("Bulan Agustus\n");
    }else if(strcmp(Month,"September") == 0)
    {
        printf("Bulan September\n");
    }else if(strcmp(Month,"October") == 0)
    {
        printf("Bulan Oktober\n");
    }else if(strcmp(Month,"November") == 0)
    {
        printf("Bulan Nopember\n");
    }else if(strcmp(Month,"December") == 0)
    {
        printf("Bulan Desember\n");
    }

    strftime(HARI,10,"%A",info);
    if(strcmp(HARI,"Monday") == 0)
    {
        printf("\nSekarang Hari Senin\n");

    }else if(strcmp(HARI,"Tuesday") == 0)
    {
        printf("\nSekarang Hari Selasa\n");

    }else if(strcmp(HARI,"Wednesday") == 0)
    {
        printf("\nSekarang Hari Rabu\n");

    }else if(strcmp(HARI,"Thursday") == 0)
    {
        printf("\nSekarang Hari Kamis\n");

    }else if(strcmp(HARI,"Friday") == 0)
    {
        printf("\nSekarang Hari Jum'at\n");

    }else if(strcmp(HARI,"Saturday") == 0)
    {
        printf("\nSekarang Hari Sabtu\n");

    }else if(strcmp(HARI,"Sunday") == 0)
    {
        printf("\nSekarang Hari Minggu\n");

    }
}

int main()
{
    time_t AWAL=0, AKHIR=0;

        time(&AWAL);
        while(1)
        {
            time(&AKHIR);
            if(AKHIR-AWAL > 0)
            {
                tampilkan_kalender ();
                AWAL = AKHIR;
            }
        }
        return 0;
}

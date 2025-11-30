
#include <opencv2/opencv.hpp>
#include <stdio.h>
using namespace cv;
using namespace std;

int main() {

    VideoCapture kamera;
    Mat kare;


    char cevap;
    printf("Kamerayi acayim mi? (E/H): ");
    scanf(" %c", &cevap);

    if(cevap == 'E' || cevap == 'e') {

        kamera.open(0);


        if(!kamera.isOpened()) {
            printf("Hata: Kamera acilamadi!\n");
            return -1;
        }
    } else {
        printf("Cok zor ya\n");
        return 0;
    }


    printf("Cikmak icin 'ESC' tusuna bas.\n");
    while(true) {

        kamera.read(kare);


        imshow("Kamera Goruntusu", kare);


        char tus = (char)waitKey(30);
        if(tus == 27) { // 27 = ESC tuþu
            break;
        }
    }


    return 0;
}

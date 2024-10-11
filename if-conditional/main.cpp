// program utama
int main() { // fungsi utama
    // if-conditioanl
    // if (kondisi) {}
    int a = 3;
    
    if (a>5) { // pengecekan kondisi
        std::cout << " a lebih besar dari 5 " << std::endl;
    }else{
        std::cout << " a lebih kecil dari 5 " << std::endl;
     }
    // mested-if
    if(a>5){
        if(a>10){
            std::cout << " a lebih besar 10 " << std::endl;
        }
    }
    // logika matematika: and , or , not
    // and &&
    // or ||
    // not !
    int m = 5;
    int n = 10; // memberikan nilai 10 pada variabel n (assigment)

    if(m>5 && n>5){
        std::cout << " m dan n lebih besar dari 5" << std::endl;
    }
    if(m>5 || n>5){
        std::cout << " m atau n lebih besar dari 5" << std::endl;
    }
    if(!(m>5)){
        std::cout << " m tidak lebih besar dari 5" << std::endl;
    }
    if(m==5){
        std::cout << " m sama dengan 5" << std::endl;
    }

    // switch conditional
    int k = 2;
    switch(k){
        case 1:
            std::cout << " k sama dengan 1" << std::endl;
            break;
        case 2:
            std::cout << " k sama dengan 2" << std::endl;
            break;
        default:
            std::cout << " k tidak sama dengan 1 dan 2" << std::endl;
    }

    // soal
    // cek bilangan negatif , not atau positif
    int bilangan;
    std::cout << " masukkan bilangan: ";
    std::cin >> bilangan;

    if(bilangan<0){
        std::cout << " Bilangan negatif" << std::endl;
    }else if(bilangan==0){
        std::cout << " bilangan nol"  << std::endl;
    }else{
        std:cout << " Bilangan positif" << std::endl;
    }
    
    return 0;
}
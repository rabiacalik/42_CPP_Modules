// UİNTPTR_T

#include <stdio.h>
#include <cstdint>

//uintptr_t Hakkında Bilgi ve Örnek
//uintptr_t, C ve C++ programlama dillerinde kullanılan, 
//işaretçi (pointer) değerlerini saklamak için tasarlanmış 
//bir veri tipidir. Bu veri tipi, işaretçi boyutuna bakılmaksızın 
//platformdan bağımsız bir şekilde bir işaretçiyi saklayabilir.

int main() {
  int x = 10;
  uintptr_t ptr = (uintptr_t)&x; // x'in adresini uintptr_t'ye dönüştür

  printf("x'in değeri: %d\n", x);
  printf("x'in adresi: %p\n", &x);
  printf("uintptr_t olarak x'in adresi: %p\n", (void*)ptr);

  // uintptr_t'yi tekrar int işaretçisine dönüştür
  int* y = (int*)ptr;

  printf("y'nin değeri: %d\n", *y);

  return 0;
}

// ekrana verilen çıktı
/*

x'in değeri: 10
x'in adresi: 0x7fffcba95cd4
uintptr_t olarak x'in adresi: 0x7fffcba95cd4
y'nin değeri: 10

*/
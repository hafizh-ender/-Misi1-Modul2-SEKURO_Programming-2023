# Rangkuman Operator Bitwise dalam C

## Operator
1. & (AND)
2. | (OR)
3. ^ (XOR)
4. ~ (NOT)
5. << (Left Shift)
6. >> (Right Shift)

## Deskripsi Proses
1. & (AND): Menghasilkan 1 jika kedua bit yang dibandingkan sama dengan 1, dan 0 jika sebaliknya.
2. | (OR): Menghasilkan 1 jika salah satu dari kedua bit yang dibandingkan sama dengan 1, dan 0 jika kedua bit sama dengan 0.
3. ^ (XOR): Menghasilkan 1 jika kedua bit yang dibandingkan berbeda, dan 0 jika kedua bit sama.
4. ~ (NOT): Operator NOT membalikkan bit dari 0 menjadi 1 dan 1 menjadi 0.
5. << (Left Shift): Operator Left Shift memindahkan bit ke kiri sebanyak jumlah shift operand.
6. >> (Right Shift): Operator Right Shift memindahkan bit ke kanan sebanyak jumlah shift operand.

## Contoh Penggunaan
```bash
#include <stdio.h>

int main() {
  int x = 5, y = 3;
  
  printf("x & y = %d\n", x & y);
  printf("x | y = %d\n", x | y);
  printf("x ^ y = %d\n", x ^ y);
  printf("~x = %d\n", ~x);
  printf("x << 1 = %d\n", x << 1);
  printf("y >> 1 = %d\n", y >> 1);
  
  return 0;
}
```
### Output
```bash
x & y = 1
x | y = 7
x ^ y = 6
~x = -6
x << 1 = 10
y >> 1 = 1
```


# Tugas Eksplorasi : Binary Representation
Deskripsi: Rangkuman mengenai **operator bitwise** dalam C.

## Definisi
Bitwise operators are characters that represent actions (bitwise operations) to be performed on single bits. They operate at the binary level and perform operations on bit patterns that involve the manipulation of individual bits.

## Bitwise Operator Component
1. The ```& (bitwise AND)``` <br>
It takes two numbers as operands and does AND on every bit of two numbers. <br>
The result of <strong>AND</strong> is 1 only if both bits are 1. 
```shell
printf("a&b = %d\n", a & b);
// Contoh 5 & 9 = 1
```
2. The ```| (bitwise OR)``` <br>
It takes two numbers as operands and does OR on every bit of two numbers. <br>
The result of <strong>OR</strong> is 1 if any of the two bits is 1. 
```shell
printf("a|b = %d\n", a | b);
// Contoh 5 | 9 = 13
```
3. The ```^ (bitwise XOR)``` <br>
It takes two numbers as operands and does XOR on every bit of two numbers. <br>
The result of <strong>XOR</strong> is 1 if the two bits are different.
```shell
printf("a^b = %d\n", a ^ b);
// Contoh 5 ^ 9 = 12
```
4. The ```<< (left shift)``` <br>
It takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. 
```shell
printf("a<<num = %d\n", a << num);
// Contoh 9 << 1 = 18
```
5. The ```<< (left shift)``` <br>
It takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. 
```shell
printf("a>>num = %d\n", a << num);
// Contoh 9 >> 1 = 4
```
6.  The ```~ (bitwise NOT)``` <br>
It takes one number and inverts all bits of it. 
```shell
printf("~a = %d\n", ~a);
// Contoh ~a = -6
```
#define E 2.718281828459045235360287

typedef struct{
    float left;
    float right;
} FPair;

FPair* getPair();

/*1*/ float constK(FPair* _pair);
/*2*/ float x(FPair* _pair);
/*3*/ float k(FPair* _pair);
/*4*/ float e(float _expo);
/*5*/ float logbn(FPair* _pair);
/*6*/ float ln(float _number);
/*7*/ float half(float _number);
/*8*/ float fsin(float _number);
/*9*/ float fcos(float _number);
/*10*/ float ftan(float _number);

void showFuncoesSubmenu();


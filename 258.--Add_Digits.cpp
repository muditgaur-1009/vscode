class Solution {
public:
int num1=0,num2=0,num3=0;
    int addDigits(int num) {
         while (num > 0)
        { int digit = num%10;
    num /= 10;
    num1+=digit;
    //print digit}
        }
         while (num1 > 0)
        { int digit = num1%10;
    num1 /= 10;
    num2+=digit;
    //print digit}
        }
        while (num2 > 0)
        { int digit = num2%10;
    num2 /= 10;
    num3+=digit;
    //print digit}
        }

    return num3;    
    }
};
#include <stdio.h>
#include <math.h>
#include <cs50.h>

void basicAdd();
void basicSubtract();
void basicMultiply();
void basicDivide();

void compAverage();

void compPower();
void compSqrt();
void compCbrt();

void compFloatRound();
void compIntegerRound();

void compRoundMenu();

void equatYMXC();
void equatYKX();
void equatPythagoras();

void equatTrigonometry();
void equatTrigoTOA();
void equatTrigoCAH();
void equatTrigoSOH();

void equatEQ();
void equatQuadratic(float a, float b, float c);

void unitLength();
void unitTime();

int main(void)
{
    printf("This is the CS50 Calculator.\nPlease selct a mode\n");

    //Asks the user what mode of calculation they want
    int main_choice = get_int("[1] Basic Calculations\n[2] Complicated Calculations\n[3] Equations ");
    printf("\n");

    if(main_choice == 1)
    {
        printf("[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division ");

        int basic_calc_choice = get_int("");

        printf("\n");

        switch(basic_calc_choice)
        {
            case(1):
                basicAdd();
                break;

            case(2):
                basicSubtract();
                break;

            case(3):
                basicMultiply();
                break;

            case(4):
                basicDivide();
                break;
        }
    }
    else if(main_choice == 2)
    {
        printf("[1] Power\n[2] Square Root\n[3] Cube Root\n[4] Average\n[5] Rounding Off ");

        int comp_calc_choice = get_int("");

        printf("\n");

        switch(comp_calc_choice)
        {
            case(1):
                compPower();
                break;

            case(2):
                compSqrt();
                break;

            case(3):
                compCbrt();
                break;

            case(4):
                compAverage();
                break;

            case(5):
                printf("[1] Round Floats\n[2] Round Integer\n[3] Round to Significant Figure ");

                int round_choice = get_int("");

                switch(round_choice)
                {
                    case(1):
                        compFloatRound();
                        break;

                    case(2):
                        compIntegerRound();
                        break;

                    case(3):
                        printf("Round to SF is INOP.\n");
                        break;
                }
                break;
        }
    }
    else if(main_choice == 3)
    {
        int equatChoice = get_int("Which equation would you like to solve?\n[1] Linear Equations\n[2] Quadratic Equations\n[3] Direct/Inverse Proportion\n[4] Pythagoras Theorem\n[5] Quadratic Equation ");

        if(equatChoice == 1)
        {
            equatYMXC();
        }
        else if(equatChoice == 4)
        {
            equatPythagoras();
        }
        else if(equatChoice == 5)
        {
            float a = get_float("a: ");
            float b = get_float("b: ");
            float c = get_float("c: ");


            equatQuadratic(a, b, c);
        }
    }
}


void basicAdd()
{
    const int addCount = get_int("How many numbers do you want to add? ");

    float numbers[addCount];
    float addTotal = 0;

    for(int a = 0; a < addCount; a++)
    {
        numbers[a] = get_float("Number %i: ", a + 1);
        addTotal += numbers[a];
    }

    printf("Total: %f", addTotal);
}

void basicSubtract()
{
    const float subtractNumber = get_float("What number do you want to subtract from? ");
    const int subtractCount = get_int("How many numbers do you want to subtract? ");

    float numbers[subtractCount];
    float subtractTotal = subtractNumber;

    for(int s = 0; s < subtractCount; s++)
    {
        numbers[s] = get_float("Number %i: ", s + 1);
        subtractTotal -= numbers[s];
    }

    printf("Total: %f", subtractTotal);
}

void basicMultiply()
{
    const int multiplyCount = get_int("How many numbers do you want to multiply? ");

    float numbers[multiplyCount];
    float multiplyTotal = 1;

    for(int m = 0; m < multiplyCount; m++)
    {
        numbers[m] = get_float("Number %i: ", m + 1);
        multiplyTotal = multiplyTotal * numbers[m];
    }

    printf("Total: %f", multiplyTotal);
}

void basicDivide()
{
    const float divideNumber = get_float("What number would you like to divide? ");
    const int divideCount = get_int("How many numbers do you want to divide? ");

    float numbers[divideCount];
    float divideTotal = divideNumber;

    for(int d = 0; d < divideCount; d++)
    {
        numbers[d] = get_float("Number %i: ", d + 1);
        divideTotal = divideTotal / numbers[d];
    }

    printf("Total: %f", divideTotal);
}

void compAverage()
{
    const int count = get_int("How many numbers are there? ");
    float numbers[count];
    float total = 0;

    for(int i = 0; i < count; i++)
    {
        numbers[i] = get_float("Number %i: ", i + 1);
        total += numbers[i];
    }

    float average = total / count;

    printf("Average: %f\n", average);
}

void compPower()
{
    const float number = get_float("What number do you want to power? ");
    const float power = get_float("What is the power you want to use? ");

    double powerAnswer = pow(number, power);

    printf("%f to the power of %f is: %f.\n", number, power, powerAnswer);
}

void compSqrt()
{
    float number = get_float("What number would you like to square root? ");
    double sqrtAnswer = sqrt(number);

    printf("The square root of %f is: %f\n", number, sqrtAnswer);
}

void compCbrt()
{
    float number = get_float("What number would you like to cube root? ");
    double cbrtAnswer = cbrt(number);

    printf("The square root of %f is: %f\n", number, cbrtAnswer);
}

void compRound()
{
    printf("[1] Round Floats\n[2] Round Integer\n[3] Round to Significant Figure ");

    int round_choice = get_int("");

    switch(round_choice)
    {
        case(1):
            compFloatRound();
            break;

        case(2):
            compIntegerRound(1);
            break;

        case(3):
            printf("Round to SF is INOP.\n");
    }
}

void compFloatRound()
{
    float number = get_float("\nWhat number would you like to round? ");
    float roundAnswer = round(number);

    printf("%f rounded off is: %f\n", number, roundAnswer);
}

void compIntegerRound()
{
    int number = get_int("\nWhat integer would you like to round? ");
    int roundAnswer = round(number);

    printf("%i rounded off is: %i\n", number, roundAnswer);
}

void equatYMXC()
{
    printf("placeholder.");
}

void equatYKX()
{
    int find = get_int("What number would you like to find? [1] Y\n[2] K\n [3]X");

    if(find == 1)
    {
        float K = get_float("What is K/Constant? ");
        float X = get_float("What is X? ");

        float Y = K * X;

        printf("Y is %f\n", Y);
    }
    else if(find == 2)
    {
        float Y = get_float("What is Y? ");
        float X = get_float("What is X? ");

        float K = X / Y;

        printf("K is %f\n", K);
    }
    else if(find == 3)
    {
        float Y = get_float("What is Y? ");
        float K = get_float("What is X? ");

        float X = K / Y;

        printf("X is %f\n", X);
    }
    else
    {
        printf("Invalid.");
    }

}

void equatPythagoras()
{
    float a = get_float("\nWhat is the value of a? ");
    float b = get_float("What is the value of b? ");
    float c;

    c = sqrt(pow(a,2) + pow(b, 2));

    printf("By the converse of Pythagoras Theorem, a^2 + b^2 = c^2, c is %f\n", c);
}

void equatTrigonometry()
{
    int choice = get_int("Pick a sub-equation\n[1] Tangent - Opp/Adj\n[2] Cosine - Adj/Hyp\n[3] Sine - Opp/Hyp");

    if(choice == 1)
    {
        equatTrigoTOA();
    }
    else if(choice == 2)
    {
        equatTrigoCAH();
    }
    else if(choice == 3)
    {
        equatTrigoSOH();
    }
}

void equatTrigoTOA()
{
    float num = get_float("What number would you like to use? ");
    tan(num);
}
void equatTrigoCAH()
{
    float num = get_float("What number would you like to use? ");
    cos(num);
}
void equatTrigoSOH()
{
    float num = get_float("What number would you like to use? ");
    sin(num);
}

void equatQuadratic(float a, float b, float c)
{
    b *= -1;
    float answerOne = (b + sqrt((b*b) + (4*a*c)))/(2*a);
    float answerTwo = (b - sqrt((b*b) + (4*a*c)))/(2*a);

    printf("The answer is: %f   or   %f\n", answerOne, answerTwo);

}

void unitLength()
{

}

void unitTime()
{

}

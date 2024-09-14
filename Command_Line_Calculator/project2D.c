// MY CODE


#include <stdio.h>
#include <stdlib.h>

typedef enum
{
   ADD,
   MULT,
   SUBTRACT,
   DIV,
   UNSUPPORTED
} MathOperation;

void IssueBadNumberError()
{
    printf("The string does not represent a floating point number.\n");
    exit(EXIT_FAILURE);
}
void IssueBadOperationError()
{
    printf("The string does not represent a valid operation.\n");
    exit(EXIT_FAILURE);
}

MathOperation GetOperation(char *op)
{
    // Implementation::
    MathOperation result;

    if (op[0] != '\0' && op[1] == '\0') {
        if (*op == '+')
        {
            return ADD;
        }

        else if (*op == '-')
        {
            return SUBTRACT;
        }

        else if (*op == '*' || *op == 'x')
        {
            return MULT;
        }

        if (*op == '/')
        {
            return DIV;
        }

        else result = UNSUPPORTED;
    }
    else result = UNSUPPORTED;

    return result;
}


double StringToDouble(char *str)
{
    double result = 0.0;
    double fraction = 0.1;
    int is_negative = 0; 
    int is_decimal = 0;
 
    if (*str == '-')
    {
        is_negative = 1;
        str++;
    }

    while (*str != '\0')
    { 
        if (*str >= '0' && *str <= '9')
        {
            if (is_decimal)
            {
                result = result + (*str - '0') * fraction;
                fraction *= 0.1;
            }
            else
            {
                result = result * 10 + (*str - '0');
            }
        }
        
        else if (*str == '.')
        { 
            if (is_decimal == 1)
            {
                IssueBadNumberError();
            }
            else is_decimal = 1; 
        }

        else
        {
            IssueBadNumberError();
        }
    
    str++; 
    }
    
    if (is_negative)
    {
        result = -result;
    }

    return result; 
}


int main(int argc, char *argv[])
{
    // Check if there are enough arguments
    if (argc < 4)
    {
        printf("Usage: %s <num1> <op> <num2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    double v = StringToDouble(argv[1]);
    MathOperation op = GetOperation(argv[2]);
    double v2 = StringToDouble(argv[3]);
    double result = 0.;

    // if (op == UNSUPPORTED)
    // {
    //     IssueBadNumberError();
    // }
    // Idrk what this part does
    switch (op)
    {
       case ADD:
         result = v + v2;
         break;

       case SUBTRACT:
        result = v - v2;
        break;
    
       case DIV:
        // Dont have to check for divide by 0??
        result = v / v2;
        break;
    
       case MULT:
        result = v * v2;
        break;

       case UNSUPPORTED:
        IssueBadOperationError();
    }
       
       // case UNSUPPORTED:
       //  printf("Unsupported Operation \n");
       //  return EXIT_FAILURE;


        // Well idk if this is right, becuase that sytax (UNSUPPORTED) is for the above code
        // its not like the code in this main function that looks like equations
        // and not capital letters
        // Do I need to add a default case???
        // (one where the oeprator is not supported, 
        // a symbol that is not accounted for)

        // ^^ All figured out I hope ^^
    printf("%d\n", (int) result);
 
    return 0;
}
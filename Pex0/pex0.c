gcc pex0.c -Wall -Werror -o a.out -lm

# include <stdio.h>

# include <math.h>

void drawFlower();

void drawDog();

void drawArrow();

double triangleArea();

int main() {
    int selection;
    scanf("%d", &selection);
    if (selection == 1){
        drawFlower();
    }
    if (selection == 2){
        drawDog();
    }
    else{
        drawArrow();
    }

    double x;
    double y;
    double z;

    scanf("%lf%lf%lf", &x, &y, &z);
    triangleArea(x, y, z);


    return 0;
}

void drawFlower(){
    printf("    _ _\n   (_\\_)\n  (__<_{}\n   (_/_)\n  |\\ |\n   \\\\| /|\n    \\|//\n     |/\n,.,.,|.,.,.\n^`^`^`^`^`^\n");

    return;
}

void drawDog(){
    printf("^..^      /\n/_/\\_____/\n   /\\   /\\\n  /  \\ /  \\\n");

    return;
}

void drawArrow(){
    printf("**\n**\n**\n**\n**\n****\n***\n**\n*\n");

    return;
}

double triangleArea(double base, double verticle, double hypotenuse){

    double area;
    if (sqrt(pow(base, 2) + pow(verticle,2)) == hypotenuse){
        area = base * verticle / 2;
        printf("The area of a right triangle with a base side of %d inches, a height of %d inches, and a hypotenuse of %d inches is %.2lf square inches.\n", (int)base, (int)verticle, (int)hypotenuse, area);
    }
    else{
        area = -1.0;
        printf("Your inputs do not describe a right triangle!\n");
    }

    return area;
}
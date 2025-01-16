#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

//color is tag
struct color{ //is a chunk of memory
    int red; //members
    int green;
    int blue;
};

int giveValue(int x){
    if(x<0)
        return 0;
    else if(x>255)
        return 255;
    return x;
}
//declare variable as struct student s1, s2, s3;
//typedef declares variables as colour, struct declares variables as struct color
struct color make_color(int red, int green, int blue){
    struct color myColor;
    red = giveValue(red);
    blue=giveValue(blue);
    green=giveValue(green);
    myColor.red=red;
    myColor.green=green;
    myColor.blue=blue;
    return myColor;
}

int getRed(struct color c){
    return c.red;
}

bool equal_color(struct color color1, struct color color2){
    if(color1.red==color2.red &&color1.blue==color2.blue &&color1.green==color2.green)
        return true;
    return false;
}

struct color brighter(struct color c){
    if(c.green==0&&c.blue==0&&c.red==0){
        c.green=3;
        c.blue=3;
        c.green=3;
    }
    else if((c.green>0 &&c.green<3)||(c.blue>0 &&c.blue<3)||(c.red>0 &&c.red<3)){
        c.green=c.blue=c.green=3;
    }

    c.red=giveValue(c.red/0.7);
    c.blue=giveValue(c.blue/0.7);
    c.green=giveValue(c.green/0.7);
    return c;
}

struct color darker(struct color c){
    c.green=(int)(0.7*c.green);
    c.blue=(int)((0.7)*c.blue);
    c.red=(int)c.red*(0.7);
    return c;
}

void main(){
    struct color col=make_color(4000,50,-20);
    printf("%d is red\n",col.red);
    struct color col2=make_color(255, 50,0);
    printf("is equal %d\n", equal_color(col, col2));
    struct color colB=brighter(col);
    printf("%d green after brighter\n",colB.green);
    struct color colD=darker(col);
    printf("%d green after darker\n", colD.green);
    
}
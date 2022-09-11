#include<stdio.h>
#include<math.h>

int type_of_beam(int x){    //To choose the beam//
    int type = x;
    if (type==1){
        printf("Cantilever beam is chosen\n"); 
    }
    else{
        printf("Simply Supported beam is chosen\n");
    }
    return type;
    }
    
int beam(){                 //Dimensions of the beam are added//
    int len, b, d;
    printf("Enter the dimensions of the beam\n");
    printf("Length: ");
    scanf("%d",&len);
    printf("Breadth: ");
    scanf("%d", &b);
    printf("Depth: ");
    scanf("%d", &d);
    float moi,D;
    D = pow(d,3);
    moi = (b*D)/12;
    printf("The value of moi is %f\n",moi);
    return moi;
}
    
float load(){           //The value of the applied load is taken//
    float l;
    printf("Enter the value of the chosen load \n");
    scanf("%f",&l);
    return l;
}

int calculate(type,moi,l,len){ //The calculations for finding out the moment and reaction//
    float m;
    if (type==1){
        m = (l*len*len)/2;
        printf("The reaction for the load is R = - %d N\n",l);
        printf("The bending moment of the beam is Mb = %f \n",m);
    }
    else {
        m = (l*len)/4;
        printf("The reaction for the load is R = - %f N\n",(l*len)/2);
        printf("The bending moment of the beam is Mb = %f \n",m);
        
    }
}

void main()     //Calling the functions//
{
    int t,moi,l,len;
    printf("Enter the type of beam\nPress 1 for Cantilver beam \nPress 2 for Simply supported beam\n");
    scanf("%d",&t);
    type_of_beam(t);
    load();
    beam();
    calculate(t,moi,l,moi);
}

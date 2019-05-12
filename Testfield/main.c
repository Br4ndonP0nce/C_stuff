    #include <stdio.h>

    /*int main()
    {
    int a=2,b=5,c=4;
    if(a+b>c-b){
        if(a+b==c){
        printf("%i,",a*4);
        printf("%i,%i,%i",a,b,c);
        }
    }
    else{
        if(a>b){
            c=c*b;
            printf("%i",c);
        }
        if(a<b){
            b=a*c;
            printf("%i",b*2);
        }
    }
    }

    int main(){
        int x=6,y=9,z=1;
        y= x+z;
        switch((x+y+z)%3) {
            case 2:
                if (x % 2 == 0) {
                    printf("%i",x);
                } else {
                    printf("%i",y);
                }
                break;
            case 1:
                switch(y %2){
                    case 0: printf("%i",z);
                        break;
                    case 1:
                        printf("this%i",x);
                    return 0;
                    if(x>y){
                        printf("x+y");
                        printf("imprimir z*5");
                    break;
                    }

                }
            default:
                printf("%i",x+y-z);

        }


    }
     */
    int main(){
        int x=0,y;
        while(x<=3){
            printf("nel");
            for(y=1;y<4;y++){
                if(x>y){
                    printf("\t%i",x*y);
                x+=2;
                }
                if(x>y){
                    printf("%i",x+y);
                    x-=1;
                }
            }

        }
    }
#include <stdio.h>
#include <stdlib.h>

int main(){

	int side1,side2,hypotenuse;
	int max_value=500;

    for(side1=1;side1<=max_value;side1++){
        for(side2=1;side2<=max_value;side2++){
            for(hypotenuse=1;hypotenuse<=max_value;hypotenuse++){
                if(side1*side1+side2*side2==hypotenuse*hypotenuse){
                    printf("%d-%d-%d\n",side1,side2,hypotenuse);
                }
            }
        }
    }

	return 0;
}

#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>

int Input;

int main (){

printf("Small Update Script Starting: \n");

printf("Waht Distro do you use? \n");

printf("press 1 for Debian or 2 for Arch. \n");

scanf("%d", &Input);

if(Input == 1)
{
printf("Starting Debian Update in 5 seconds \n");

    for(int time = 5; time > 0; time --)
    {
        sleep (1);
        printf("%d", time);
    }
printf("Starting...");

system("/home/$USER/Git/JustSomeUseLessCode/QuickUp/");

}


if(Input == 2)
{
printf("Starting Arch Update in 5 seconds \n");


    for(int time = 5; time > 0; time --)
    {
        sleep(1);
        printf("%d\n", time);
    }
system("/home/$USER/Git/JustSomeUseLessCode/QuickUp/UpdateAr.sh");
}

return 0;

}

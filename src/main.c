#include <stdio.h>
#include <unistd.h>
int main() {
int seconds;
int minutes;
int total;
printf("LinuxTimer \n");
printf("Enter Minutes\n");
scanf("%d",&minutes);
printf("Enter Seconds\n");
scanf("%d",&seconds);
total = minutes *60 + seconds;
sleep(total);
printf("\aTime Is Up\n");
}

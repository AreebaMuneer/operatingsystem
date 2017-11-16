
#include <stdio.h>
#include<sys/types.h>
#include <unistd.h>
pid_t fork(void);

#include<sys/wait.h>
pid_t wait(int *status);
#include <stdlib.h>

int main()
{
int cpid;
cpid = fork();
int status;


int sum=0;
int sum1=0;
int sum2=0;
int sum3=0;
 int res=0;

int arr[]= {
	    1,1,1,1,1,
            1,1,1,1,1,
	    1,1,1,1,1,
            1,1,1,1,1,
            1,1,1,1,1
		};

		if(cpid ==0)
	{
		for(int i=0;i<25;i++)
		{
		sum= sum+arr[i];
		}

		printf("%s","Sum of process1 : ");
		printf("%s","\n");
		printf("%d",sum);

		printf("%s","\n");
			

	}

		if(cpid !=0)
	{
		

		for(int i=0;i<25;i++)
		{

		sum1= sum1+arr[i];

		}

			printf("%s","Sum of process 2 : ");
		printf("%s","\n");
			printf("%d",sum1);
			printf("%s","\n");
		    //  wait(&status);


	}
			int cpid1=fork();
			int re1=res;                         

		if(cpid1 ==0 && cpid!=0)
	{
		for(int i=0;i<25;i++)
		{
		sum2= sum2+arr[i];
		}

			printf("%s","Sum of process 3 : ");
			printf("%d",sum2);
			printf("%s","\n");
			 res=sum1+sum2;
			printf("%s","result sum of process 2 and 3 ");
			printf("%s","\n");
			printf("%d",res);
			printf("%s","\n");

	}

 int res1=0;


		if(cpid1 ==0 && cpid==0)
	{
		for(int i=0;i<25;i++)
		{
		sum3= sum3+arr[i];
		}
		      printf("%s","Sum of process 4 : ");
			printf("%s","\n");
			printf("%d",sum3);

			printf("%s","\n");

			res1=sum+sum3;
                        printf("%s","sum of process 1 and 4");
			printf("%s","\n");
			printf("%d",res1);
			printf("%s","\n");
 			int r=  res +res1 +res1+res;				


			printf("%s","Result of 4 sum of process  : ");
			printf("%d",r);
        
         }
	

return 0;


}



#include<stdio.h>
#include<time.h>

struct Clock
  {
    int hour;
    int minute;
    int second;
  };

void init(struct Clock clk);
int set_Time(struct Clock clk);
int get_Time(struct Clock clk);

int main()

   {

      struct Clock cl;
      struct Clock cl1;
      int choice;
	   do
	 {
		   printf("\n1.Reset the clock\n");
		   printf("2.Set the time\n");
		   printf("3.Get the time\n");
		   printf("4.Quit\n");
                   scanf("%d", &choice);
		  switch(choice)
		  {
		    case 1:init(cl);
			   break;
		    case 2:set_Time(cl); 
			   break;
	            case 3:get_Time(cl);
			   break;
		    case 4:return 0;
		    default:printf("Bad input");
			    break;
		  }
	 } while(choice!=4);

   }


void init(struct Clock clk)
{
  clk.hour =0;
  clk.minute= 0;
  clk.second =0;
  printf("Time is reset: %02d : %02d : %02d\n",clk.hour,clk.minute,clk.second);
}


int set_Time(struct Clock clk)
{
  printf("Set time :\n");
  printf("Enter in HH MM SS format\n");
  scanf("%d%d%d",&clk.hour,&clk.minute,&clk.second);


        
        if(clk.second>59){
            clk.minute+=1;
            clk.second=0;
        }
        if(clk.minute>59){
            clk.hour+=1;
            clk.minute=0;
        }
        if(clk.hour>23){
            clk.hour=0;
            clk.minute=0;
            clk.second=0;
        }
         
       
        printf("%02d : %02d : %02d \n",clk.hour,clk.minute,clk.second);
 
}

int get_Time(struct Clock clk)
{ 
    time_t T= time(NULL);
    struct  tm tm = *localtime(&T);
    printf("System Time is: %02d:%02d:%02d\n",tm.tm_hour, tm.tm_min, tm.tm_sec);
}
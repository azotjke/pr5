#include <stdio.h>
main()
{
	int d,m,y;
	
	printf("Day=");
	scanf ("%i",&d);
	printf ("Month=");
	scanf ("%i",&m);
	printf ("Year=");
	scanf ("%i",&y);
     	
	if ((m==1&&d>19)||(m==2&&d<22)) 
           	{
	        	printf ("aquarius\n");
        	}
   	if ((m==2&&d>19)||(m==3&&d<22))
           	{
	        	printf ("pisces\n");
        	}
   	if ((m==3&&d>19)||(m==4&&d<22))
           	{
	        	printf ("aries\n");
        	}
  	if ((m==4&&d>19)||(m==5&&d<22))
           	{
	        	printf ("taurus\n");
        	}
   	if ((m==5&&d>19)||(m==6&&d<22))
           	{
	        	printf ("gemini\n");
        	}
   	if ((m==6&&d>19)||(m==7&&d<22))
           	{
	        	printf ("cancer\n");
        	}
    if ((m==7&&d>19)||(m==8&&d<22))
           	{
	        	printf ("leo\n");
        	}
  	if ((m==8&&d>19)||(m==9&&d<22))
           	{
	        	printf ("virgo\n");
        	}
  	if ((m==9&&d>19)||(m==10&&d<22))
           	{
	        	printf ("libra\n");
        	}
  	if ((m==10&&d>19)||(m==11&&d<22))
           	{
	        	printf ("scorpio\n");
        	}
  	if ((m==11&&d>19)||(m==12&&d<22))
	
           	{
	        	printf ("saggittarius\n");
        	}
  	if ((m==12&&d>19)||(m==1&&d<22))
	
           	{
	        	printf ("capricorn\n");
        	}
	if(y%4)
	{
		printf("weightless year\n");
	}
	else
	{
		printf("leap year\n");
	}
	
	int (y%12);
    switch(y%12)
{
    case 0:
        	{
        		printf("monkey");
			}
			break;
	case 1:
        	{
        		printf("rooster");
			}
			break;
	case 2:
        	{
        		printf("dog");
			}
			break;
	case 3:
        	{
        		printf("pig");
			}
			break;
	case 4:
        	{
        		printf("rat");
			}
			break;
	case 5:
        	{
        		printf("ox");
			}
			break;
	case 6:
        	{
        		printf("tiger");
			}
			break;
	case 7:
        	{
        		printf("rabbit");
			}
	    	break;
	case 8:
        	{
        		printf("dragon");
			}
			break;
	case 9:
        	{
        		printf("snake");
			}
			break;
	case 10:
        	{
        		printf("horse");
			}
			break;
	case 11:
        	{
        		printf("sheep");
			}
			break;
	
	}
}

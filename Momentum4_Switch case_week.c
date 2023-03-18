#include<stdio.h>
main()
{

    char day;
    printf("press M for Monday\n");
    printf("press T for Tuesday\n");
    printf("press W for Wednesday\n");
    printf("press t for Thursday\n");
    printf("press F for Fridday\n");
    printf("press S for Saturday\n");
    printf("press s for Sunday\n");
    scanf("%c",&day);
    switch(day)
    {
    	case 'M':
    	        printf("Monday");
    	        break;
    	        
    	case 'T':
    	        printf("Tuesday");
    	        break;  
        case 'W': 
		        printf("Wednesday");
    	        break;     
		case 't': 
		        printf("Thursday");
    	        break; 	
		case 'F': 
		        printf("Friday");
    	        break; 	
		case 'S': 
		        printf("Saturday");
    	        break;   
		case 's': 
		        printf("Sunday");
    	        break;  
		default :
		        printf("Enter valid value");
				break; 
	}
    
}

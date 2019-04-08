    
#include<stdio.h>


int main()
{  int totalProcess=0;int t=0;
    int timequantum[totalProcess];
	printf("How many process ? : ");
    
    scanf("%d",&totalProcess);
    
//input
     int priority[totalProcess];
     int bursttime[totalProcess];
    
    for(int i=0;i<totalProcess;i++)
	{
        printf("\nenter the priority %d:",i+1);
         
        scanf("%d", &priority[i]);
        
         printf("enter the burst time%d:",i+1);
         
        scanf("%d", &bursttime[priority[i]]);
        
        timequantum[priority[i]]=50;
    }
    
    
//sorting    
        int swap;

	for (int c = 0 ; c < totalProcess - 1; c++)
  {
      for (int d = 0 ; d < totalProcess - c - 1; d++)
    {
      if (priority[d] > priority[d+1]) 
      {
        swap       = priority[d];
        priority[d]   = priority[d+1];
       priority[d+1] = swap;
      }
    }
  }
  
  
  
     
//  
  
for(int i=0;i<totalProcess;i++)
    {


        printf("\n Priority %d Burst time %d  ",priority[i],bursttime[priority[i]]);
    }




  
 
    int a;int time=0;
     for(int i=0;i<totalProcess;i++)
     {
     	if(bursttime[priority[i]]<=timequantum[priority[i]])
     	{   t=t+bursttime[priority[i]];
     		printf("\n process no. %d  compilition time is %d" ,priority[i],t);
		 }
		else
		 {
		 	bursttime[i]=bursttime[i]-timequantum[i];
		 	
		 	t=t+timequantum[i];
		 	printf("\n process no. %d  TAT is %d" ,priority[i],t);
		 	printf("\n do you want any intrupt if yes press 1 or 2:");
		 	scanf("%d",&a);
		 	if(a==1)
		 	{
		 	 timequantum[i]=timequantum[i]-5;	
			}
			timequantum[i]=timequantum[i]+10;
			priority[1+totalProcess]=priority[i];
			totalProcess++;
		 }
     	
	 }
  
}
  
  


#include<stdio.h>

#define DSP_EMA_I32_ALPHA(x) (x)


 
 int  dsp_ema_i32(float in, float average, float alpha){
  float tmp0; 
  tmp0 = in * (alpha) + average * (1.0 - alpha);
  return(tmp0); 
}

int my_avg_func(){
     float average = 7.5;
     float adc_value;    
     adc_value = 6;
     average = dsp_ema_i32(adc_value, average, DSP_EMA_I32_ALPHA(0.5));
     printf("%f",average) ;
}
 main()

{
	 my_avg_func();
	 
}

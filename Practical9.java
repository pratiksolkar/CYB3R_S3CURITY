class Practical9{

   // for loop
int getFactorial1(int num){
    if(num<0){
      return -1;
    }
    else if(num<2){
           return 1;
    }
    else if(num==2){
           return 2;
    }
    else{
         int fact=2;
         int i=3;
         for(;i<=num;){
            fact*=i++;
         }
         return fact;
    }
}

  // recursive loop
int getFactorial2(int num){
    if(num<0){
      return -1;
    }
    else if(num<2){
           return 1;
    }
    else if(num==2){
           return 2;
    }
    else{
        return num*=getFactorial2(num-1);
    }
}


	public static void main(String[] args){
	  Practical9 obj = new Practical9(); 
	  
		long start_time1, start_time2, end_time1, end_time2, time_required1 = 0, time_required2 = 0;
		int fact1 = 1, fact2 = 1;

		int size = (int)System.nanoTime()/100%10+1;
		int[] array = new int [size];
		for(int i = 0; i < size; i++){
			array[i] = (int)System.nanoTime()/100%10;
		}

		for(int j = 0; j < size; j++){
			start_time1 = System.nanoTime();
			fact1 = obj.getFactorial1(array[j]);
			end_time1 = System.nanoTime();
			time_required1 += end_time1-start_time1;
		}

		for(int k = 0; k < size; k++){
			start_time2 = System.nanoTime();
			fact2 = obj.getFactorial2(array[k]);
			end_time2 = System.nanoTime();
			time_required2 += end_time2-start_time2;
		}
		
		long avg_time1 = time_required1 / size;
		long avg_time2 = time_required2 / size;

		System.out.println("Time required for factorial1 is " + avg_time1 + " nanosec");
		System.out.println("Time required for factorial2 is " + avg_time2 + " nanosec");
	}

}

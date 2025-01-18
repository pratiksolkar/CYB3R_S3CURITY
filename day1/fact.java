public int getFactorial( int num ){
           int i;
           int result=1;
           if(num==0){
             return 1;
           }
           if(num>0){
             for(i=1;i<=num;i++){
                result = i * result;
             }
             return result;
           }
           return 0;
}

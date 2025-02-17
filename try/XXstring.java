public String toXXsystem(String num,String XX){

if(num.startsWith("0")){
 int octalNum = Integer.parseInt(num);
 int octalResult=0;
 int i=0;
 
   while(octalNum>0){
   int rem = octalNum % 10;
   octalResult = octalResult + (rem * (int)Math.pow(8,i));
   octalNum = octalNum/10;
   i++;
   }
   
  String resultString = String.valueOf(octalResult);            // study
  int number = Integer.parseInt(resultString);                  // study
   
   
        int arr[]= new int[100];                                // old waala code
        int index=0;
        int base=0;

 if(XX.equalsIgnoreCase("Decimal")){
   base=10;
 }
 else if(XX.equalsIgnoreCase("Octal")){
   base=8;
 }
 else if(XX.equalsIgnoreCase("Hexadecimal")){
   base=16;
   String hexa="0x";   //
   if(number < base){
   return hexa.concat(num);
   }
   else{
   return "error";
   }
 }
 else if(XX.equalsIgnoreCase("Binary")){
   base=2;
 }
 else{
 return "invalid string type";
 }
 while(number>0){
   arr[index]=number % base;
   number=number / base;
   index++;
   }
 
 StringBuilder result = new StringBuilder();        //study
    for (int j = index-1; j >= 0; j--) {            //here use "j" in loop 
        result.append(arr[j]);                      //because "i" already defined above
    }
    return result.toString();
}
return "0";
}



// Q1.java
import java.util.Scanner;

class Q2{
    private native int[] arraySize(int a);

    private native int calculation(int[] b);

    public static void main (String args[]){
		Scanner input = new Scanner(System.in);
		//boolean cont = true;
		
		//while (cont){

			System.out.println("Enter Array Size");
			int s = input.nextInt();

			Q2 test = new Q2();
			int []arr = test.arraySize(s);
			System.out.println("The difference of min and max number is " + test.calculation(arr));
		//}

   }
   static {
	System.loadLibrary("CQ2");
   }
}

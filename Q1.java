// Q1.java
import java.util.Scanner;

class Q1{
    private native void diploma();

    private native void degree();

    public static void main (String args[]){
		Scanner input = new Scanner(System.in);
		boolean cont = true;
		
		while (cont){

			System.out.println("Choose your Program: Diploma | Degree  ");
			String s = input.nextLine();
			String prog = s.toLowerCase();
					

			Q1 cgpa = new Q1();
			if (prog.equals("degree")){
				System.out.println("You choose "+ prog);	
				cgpa.degree();
				cont=false;

			}else if (prog.equals("diploma")){
				System.out.println("You choose "+ prog);	
				cgpa.diploma();
				cont=false;

			}else{

				System.out.println("Invalid Programme!");
				System.out.println("Please enter again!");
			     }
		}

   }
   static {
	System.loadLibrary("CQ1");
   }
}

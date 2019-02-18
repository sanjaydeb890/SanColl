import java.util.Scanner;
public class num
{
public static void main(String[] args)
{
int number;
Scanner scan=new Scanner(System.in);
System.out.print("Input");
number= scan.nextInt();
scan.close();
if(number>0)
{
System.out.println("Positive");
}
else if(number<0)
{
System.out.println("Negative");
}
else{
System.out.println("Zero");
}
}
}

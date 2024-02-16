public class four{
public static void main(String args[]){
System.out.println("variables created");
char c='x';
byte b=50;
short s=1996;
int i=123456789;
long l=1325469765743L;
float F1=3.142F;
float F2=1.2e-5F;
double d2=0.0000000000987;

System.out.println("c= +c");
System.out.println("b= +b");
System.out.println("s= +s");
System.out.println("i= +i");
System.out.println("l= +l");
System.out.println("F1= +F1");
System.out.println("F2= +F2");
System.out.println("d2= +d2");
System.out.println(" ");
System.out.println("Types Converted");
short s1=(short)b;
short s2=(short)i;
float n1=(float)l;
int m1=(int) F1;
System.out.println("(short)b=" +s1);
System.out.println("(short)i=" +s2);
System.out.println("(float)l=" +n1);
System.out.println("(int)F1=" +m1);
}
}
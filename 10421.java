////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2014-04-14 17:38:09
////Compiler: Java
//////////////////////////////////////////////////////
////Problem ID: 1042
////Problem Title: 
////Run result: Accept
////Run time:1015MS
////Run memory:5884KB
//////////////////System Comment End//////////////////
import java.io.*;
import java.math.*;
import java.util.*;
public class Main
{
	public static BigInteger res;
	public static void main(String args[])
	{
		Scanner cin=new Scanner(System.in);

		int bi;		
		while(cin.hasNext())
		{
			res=BigInteger.ONE;

			bi=cin.nextInt();
			for(int i=1;i<=bi	;i++)
			{
				res=res.multiply(BigInteger.valueOf(i));
			}
			System.out.println(res.toString());
		}
	}
}
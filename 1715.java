////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2014-04-14 23:00:41
////Compiler: Java
//////////////////////////////////////////////////////
////Problem ID: 1715
////Problem Title: 
////Run result: Accept
////Run time:218MS
////Run memory:5908KB
//////////////////System Comment End//////////////////
import java.io.*;
import java.math.*;
import java.util.*;
public class Main
{
	public static void main(String args[])
	{
		Scanner cin=new Scanner(System.in);
		BigInteger Fibs[]=new BigInteger[1001];
		Fibs[0]=BigInteger.valueOf(1);
		Fibs[1]=BigInteger.valueOf(1);
		int ns=cin.nextInt();
		for(int i=2;i<=1000;++i)
		{
			Fibs[i]=Fibs[i-1].add(Fibs[i-2]);
		}
		int index;
		for(int j=ns;j>0;--j)
		{			
			index=cin.nextInt();
			System.out.println(Fibs[index-1]);
		}
		
	}
}
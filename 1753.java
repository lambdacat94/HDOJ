////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2014-04-14 22:44:51
////Compiler: Java
//////////////////////////////////////////////////////
////Problem ID: 1753
////Problem Title: 
////Run result: Accept
////Run time:187MS
////Run memory:5396KB
//////////////////System Comment End//////////////////
import java.io.*;
import java.math.*;
import java.util.*;
public class Main
{
	public static void main(String args[])
	{
		Scanner cin=new Scanner(System.in);
		BigDecimal a,b;
		while(cin.hasNext())
		{
			a=cin.nextBigDecimal();
			b=cin.nextBigDecimal();
			System.out.println(trim(a.add(b).toString()));
		}
	}
	public static String trim(String str) 
	{
		if (str.indexOf(".") != -1 && str.charAt(str.length() - 1) == '0')
		{
			return trim(str.substring(0, str.length() - 1));
		}
		else 
		{
			return str.charAt(str.length() - 1) == '.' ? str.substring(0, str.length() - 1) : str;
		}
	}
}
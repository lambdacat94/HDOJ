////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: chaaa120
////Nickname: int9
////Run ID: 
////Submit time: 2014-04-14 14:17:31
////Compiler: Java
//////////////////////////////////////////////////////
////Problem ID: 1042
////Problem Title: 
////Run result: Accept
////Run time:1000MS
////Run memory:5888KB
//////////////////System Comment End//////////////////
import java.math.*;
import java.util.*;

public class Main {
    public static BigInteger num;

    public static void main(String args[]) {
        Scanner cin = new Scanner(System.in);
        
        while (cin.hasNext()) {
            num = BigInteger.ONE;
            int n = cin.nextInt();
            num = BigInteger.ONE;
            for (int i = 1; i <= n; i++) {
                num= num.multiply(BigInteger.valueOf(i));
            }
            System.out.println(num);
        }
    }
}
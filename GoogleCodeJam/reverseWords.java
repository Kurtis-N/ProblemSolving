import java.util.*;
import java.io.*;
public class Reverse
{
	static Scanner in = new Scanner(System.in);
	public static void main(String [] args)
	{
		int cn = 1;
		int nc;
		nc = Integer.parseInt(in.nextLine());
		for(int j = 0; j < nc; j++)
		{
			String[] sa = nc.split(" ");
			for(int i = sa.length-1; i >=0; i--)
			{
				System.out.println(sa[i]);
			}
		}
	}
}

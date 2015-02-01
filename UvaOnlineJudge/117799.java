//11799 
//Solved, scan input for highest value

import java.util.*;

class Main
{
	static Scanner in = new Scanner(System.in);
	public static void main(String[] args)
	{	
		String firstLine = in.nextLine();
		int cases = Integer.parseInt(firstLine);
		int count = 1;
		while(count <= cases)
		{
			String line = in.nextLine();
			String[] tokens = line.split(" ");
			int max = Integer.parseInt(tokens[0]);
			if(tokens.length > 1)
			{
				for(int i = 1; i < tokens.length; i++)
				{
					int temp = Integer.parseInt(tokens[i]);
					if(temp > max)
						max = temp;
				}
			}
			System.out.println("Case " + count + ": " + max);
			count++;
		}
		
	}
	
	
}

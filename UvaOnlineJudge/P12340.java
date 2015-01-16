//12340

import java.io.*;
import java.util.*;
import java.math.*;

class Main
{
	static InputStreamReader isr = new InputStreamReader(System.in);
	static BufferedReader br = new BufferedReader(isr);	
	//static Scanner in = new Scanner(System.in);
	public static void main(String[] args) throws IOException, NumberFormatException
	{
		int numOfTests = Integer.parseInt(br.readLine());
		int count = 0;
		while(count < numOfTests)
		{
			Map<String, Integer> m1 = new HashMap();
			long total = 0;	//total cost
			
			int numOfPaidChars = Integer.parseInt(br.readLine());
			int counter = 0;
			while(counter < numOfPaidChars)
			{
				String line = br.readLine();
				String space = " ";
				
				String[] tokens = line.split(space);
				int value = Integer.parseInt(tokens[1]);
				String letter = tokens[0];
				
				m1.put(letter, value);
				//System.out.println("Adding " + letter + " " + value);
				
				//System.out.print("letter: " + letter + "\t");
				//System.out.println("value: " + value);
				counter++;
			}
			//System.out.println(m1);			
			int numOfLines = Integer.parseInt(br.readLine());
			int kount = 0;
			while(kount < numOfLines)
			{
				String line = br.readLine();
				//add up score for each line
				for(int i = 0; i < line.length(); i++)
				{
					char oneLetter = line.charAt(i);
					String someLetter = String.valueOf(oneLetter);
					if(m1.containsKey(someLetter))
					{
						//System.out.println("adding");
						total += m1.get(someLetter);
					}
				}
				kount++;
			}
			BigDecimal bd = new BigDecimal(total / 100.0);
			bd = bd.setScale(2, BigDecimal.ROUND_HALF_UP);
			System.out.println(bd+ "$");
			count++;
		}
	}
}

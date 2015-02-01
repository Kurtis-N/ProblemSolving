//10420 - List Of Conquests
//Solved using Hashmaps, and an array

import java.util.*;

class Main
{
	static String[] countries = new String[200];
	static Scanner in = new Scanner(System.in);
	public static void main(String[] args)
	{	
		
		Map<String, Integer> m1 = new HashMap();
		int numOfCountries = 0;
		String firstline = in.nextLine();
		int number = Integer.parseInt(firstline);
		int count = 0;
		while(count < number)
		{
			String line = in.nextLine();
			String[] tokens = line.split(" ");
			String country = tokens[0];
			
			//Increment value
			if(m1.containsKey(country))
			{
				int value = m1.get(country);
				m1.remove(m1.get(country));
				value++;
				m1.put(country, value);
			}
			
			//Add to Map
			else
			{
				addtoCountries(country);
				m1.put(country, 1);
				numOfCountries++;
			}
			
			count++;	
		}
		Arrays.sort(countries, 0, numOfCountries);
		for(int i = 0; i < numOfCountries; i++)
			System.out.println(countries[i] + " " + m1.get(countries[i]));

	}
	
	static void addtoCountries(String country)
	{
		for(int i = 0; i < countries.length; i++)
		{
			if(countries[i] == null)
			{
				countries[i] = country;
				break;
			}
		}	
	}
	
	static void printArray()
	{
		for(int i = 0; i < countries.length; i++)
		{
			if(countries[i] == null)
				break;
			else
				System.out.println(countries[i]);
		}
	}
}

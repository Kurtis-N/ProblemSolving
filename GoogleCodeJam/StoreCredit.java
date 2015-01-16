import java.util.*;
import java.io.*;

public class StoreCredit
{
    static Scanner in = new Scanner(System.in);
    public static void main(String[] args)
    {
	String line;
	int tc;
	line = in.nextLine();
	tc = Integer.parseInt(line);
	int count = 1;
	while(tc > 0)
	    {
		//System.out.println("count (case): " + count);
		int c; //store credit
		c = Integer.parseInt(in.nextLine());
		//System.out.println("c: "+c);
		int p; //price
		p = Integer.parseInt(in.nextLine());
		//System.out.println("p: " + p);
		int[] array = new int[p];
		int counter = 0;
		while(counter < p)
		    {			
			array[counter] = in.nextInt();
			counter++;
		    }
		boolean found = false;
		counter = 0;
		while(!found || counter == array.length)
		    {
			//System.out.println("counter: " + array[counter]);
			int curr = counter;
			int j = counter+1;
			for(int i=j; i < array.length; i++)
			    {
				//System.out.print("i: " + array[i]);
				//System.out.println("c' :" + (array[curr]+array[i]));
				if(array[curr]+array[i]==c){
				    found = true;
				    int max;
				    int min;
				    if(curr > i)
					{
					    max = curr+1;
					    min = i+1;
					}
				    else
					{
					    max = i+1;
					    min = curr+1;
					}
				    System.out.println("Case #"+count+": "+min+ " " + max);
				    String nothing = in.nextLine();
				}
				//System.out.println();
			    }
			counter++;
		    }
		tc--;
		count++;
	    }
    }
}
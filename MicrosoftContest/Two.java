import java.io.*;
import java.util.*;
import java.net.*;

public class Two
{
	static Scanner in = new Scanner(System.in);
	public static void main(String [] args)
	{
		String initurl = "http://services.odata.org/Northwind/Northwind.svc/Products/$count?$filter=Discontinued eq true";

		System.out.println("here");
		while(in.hasNext())
		{
			System.out.println("here1");
			String params = in.nextLine();
			String[] tokens = params.split(" ");

			System.out.println(initurl);
			try
			{
				//initurl = URLEncoder.encode(initurl, "UTF-8");
				initurl = initurl.replaceAll("\\+", "%20");
				URL url = new URL(initurl);
				HttpURLConnection con = (HttpURLConnection) url.openConnection();
				con.setRequestMethod("GET");
				con.setRequestProperty("User-Agent", "Mozilla/5.0");
				System.out.println("here2");

				try {
					InputStream in = con.getInputStream();
				}
				catch(Exception i) {
					System.out.println(i);
					i.printStackTrace(System.out);
					System.exit(0);
				}
				System.out.println("here3");
				String encoding = con.getContentEncoding();
				encoding = encoding == null ? "UTF-8" : encoding;

				System.out.println("here3");
				BufferedReader br = new BufferedReader(new InputStreamReader(con.getInputStream()));
				String inputLine;
				StringBuffer response = new StringBuffer();

				while ((inputLine = br.readLine()) != null) {
					response.append(inputLine);
				}
				br.close();

				//print result
				System.out.println(response.toString());

			}
			catch(Exception e)
			{
				System.out.println("exception");
				System.out.println(e);
				e.printStackTrace(System.out);
			}
		}
	}
}

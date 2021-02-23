package completeDSA;

import java.util.*;

public class minmax {
	
	
	public static void main (String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int number = scan.nextInt();
		int[] array = new int[number];
		for (int i = 0; i< number ; i++)
		{
			array[i] = scan.nextInt();
		}
		
		minMax(array);
	
		
	}
	
	static void minMax(int[] arr)
	{
		int min = arr[0]; 
		int max = arr[0];
		
		
		for (int i = 0 ; i< arr.length ; i++ )
		{
			if(min > arr[i] )
			{
				min = arr[i];
			}
			if(max < arr[i])
			{
				max = arr[i];
			}
		}
		System.out.println("Max= " + max + "Min = " + min);
	}

}

package completeDSA;
import java.util.* ;
class sort {
	
	
	static void arrSort(int[] arr)
	{
		int len = arr.length;
		int count0 = 0;
		int count1 = 0;
		int count2 = 0;
		for(int i =0 ; i< len ; i++)
		{
			if(arr[i] == 0)
			{
				count0++;
			}
			else if(arr[i] == 1)
			{
				count1++;
			}
			else if (arr[i] == 2)
			{
				count2++;
			}
			else
			{
				System.out.println("Enter arrays in 1s and 0s");
			}
		}
		for(int i =0 ; i< len ; i++)
		{
			if (count0 > 0)
			{
				arr[i] = 0;
				count0 --;
			}
			else if(count1 > 0)
			{
				arr[i] = 1;
				count1-- ;
			}
			else
			{
				arr[i]=2;
				count2--;
			}
		}
	}
	
	public static void main (String args[])
	{
		Scanner scan = new Scanner(System.in);
		
		int number = scan.nextInt();
		int[] array = new int[number];
		for (int i = 0; i< number ; i++)
		{
			array[i] = scan.nextInt();
		}
		
		arrSort(array);
		System.out.println("The sorted array is :");
		
		for (int i =0 ; i<number ;i++ )
		{
			System.out.println(array[i]);
		}
		
	}
	

}

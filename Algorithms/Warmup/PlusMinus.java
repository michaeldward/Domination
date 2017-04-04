import java.io.*;
import java.util.*;

public class Solution
{

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for (int i=0; i < n; ++i)
        {
            arr[i] = in.nextInt();
        }
        double sum_pos, sum_neg, sum_zero;
        sum_pos = sum_neg = sum_zero = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == 0)
            {
                ++sum_zero;    
            }
            else if (arr[i] > 0)
            {
                ++sum_pos;
            }
            else
            {
                ++sum_neg;    
            }
        }
        double total = sum_pos + sum_neg + sum_zero;
        System.out.println(sum_pos / total);
        System.out.println(sum_neg / total);
        System.out.println(sum_zero / total);
    }
}


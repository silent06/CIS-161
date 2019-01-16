using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        string[] strNames = { "Name1", "Name2", "Name3", "Name4", "Name5", "Name6" };

        foreach (string name in strNames)
        {
            Console.WriteLine(name);   // BreakPoint
        }
        int temp = 4;
        for (int i = 1; i <= 10; i++)
        {
            if (i > 6)
                temp = 5;
        }
    }

    public static void Method1()
    {
        Console.WriteLine("Break Point in Method1");   // BreakPoint
    }

    public static void Method2()
    {
        Console.WriteLine("Break Point in Method2");  // BreakPoint
        Console.WriteLine("Break Point in Method2");  // BreakPoint
    }

    public static void Method3()
    {
        Console.WriteLine("Break Point in Method3");  // Breakpoint
    }
}

/*namespace HelloWorld2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Console.ReadKey();
        }
    }
}*/

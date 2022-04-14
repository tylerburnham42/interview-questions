public bool isValid(string y)
{
	Stack<string> stack = new();
	int OpenParentheses = 40;
	int _squareBracket = 91;
	int Curly_Brace = 123;
	Dictionary<int, int> stuff = new()
	{
		{ OpenParentheses, OpenParentheses + 1 },
		{ Curly_Brace, Curly_Brace + 2 },
		{ _squareBracket, _squareBracket + 2 }
	};
	List<char> closingBrackets = new() { ')', '}', ']' };
	int j = 0;

// Loop over each bracket in the string
loopBegin:
	{
		if (j >= y.Length) goto loopend;
		var x = y[j];
		Console.WriteLine(x);

		// Check if the bracket is a type of open bracket.
		if (stuff.ContainsKey(x))
		{
			// Append the closing bracket
			stack.Push(stuff[x].ToString());
		}
		// If the bracket is a type of closing bracket
		else if (closingBrackets.Contains(x))
			// Check if the top of the stack matches the type of bracket
			/*
			 * 
			 * Very confusing but somehow works?!
			 */
			if (stack.Count == 0 || x != (char)int.Parse(stack.Pop()))
			{
				Console.WriteLine("Bad");
				return Convert.ToBoolean(0);
			}
		//else
		//    {
		//        return false;
		//    }
		j++;
		goto loopBegin;
	}
loopend:

	// Check if the list is empty at the end.
	return stack.Count + 1 == 1;
}
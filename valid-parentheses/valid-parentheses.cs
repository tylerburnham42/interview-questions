private bool IsValid(string expression)
{
	Stack<char> stack = new();
	Dictionary<char, char> validMatches = new() { { '(', ')' }, { '{', '}' }, { '[', ']' } };
	List<char> closingBrackets = new() { ')', '}', ']'};

	// Loop over each bracket in the string
	foreach (var brace in expression)
	{
		// Check if the bracket is a type of open bracket.
		if (validMatches.ContainsKey(brace))
		{
			// Append the closing bracket
			stack.Push(validMatches[brace]);
		}
		// If the bracket is a type of closing bracket
		else if (closingBrackets.Contains(brace))
		{
			// Check if the top of the stack matches the type of bracket
			if (stack.Count == 0 || brace != stack.Pop())
			{
				return false;
			}
		}
	}

	// Check if the list is empty at the end.
	return stack.Count == 0;
}
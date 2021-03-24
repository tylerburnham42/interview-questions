import java.util.Stack;

public class ValidParenthesis {
    public static boolean isValid(String str) {
        Stack<Character> stack = new Stack<>();

        for (char brace : str.toCharArray()) {
            switch (brace) {
                case '(':
                    stack.push(')');
                    break;
                case '{':
                    stack.push('}');
                    break;
                case '[':
                    stack.push(']');
                    break;
                case ')':
                case '}':
                case ']':
                    if (stack.isEmpty() || stack.pop() != brace) {
                        return false;
                    }
                    break;
                default:
                    break;
            }
        }

        return stack.isEmpty();
    }
}

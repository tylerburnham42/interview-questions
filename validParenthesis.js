function isValid(str) {
    let stack = []
    let opens = { '(': ')', '{': '}', '[': ']' }

    for (const brace of str) {
        if (brace in opens) {
            stack.push(opens[brace])
        } else if ((brace === ')' || brace === ']' || brace == '}')
            && (stack.length === 0 || stack.pop() !== brace)) {
            return false
        }
    }

    return stack.length === 0
}

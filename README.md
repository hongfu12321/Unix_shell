# 42sh
42sh is a 4-5 person team recreation of the bash shell in the C language. It has all the normal components of your typical shell: command execution, environment variables, path management, memory management, C-Unix command execution, abstract syntax trees for command parsing etc. However, it also requires more advanced features such as input/output redirections, file description and job control, subshells, globbing, command history, dynamic auto-completion, and even the option to recode a script execution system. This project requires a high proficiency with memory management, code organization, and performance optimization.

## Summary
Team 4-5 person team recreation of the bash shell.

## Screenshot

![42sh Example](https://github.com/hongfu12321/unix_shell/blob/master/img/Screenshot.png)

## Mandatory part:
- Prompt without line edition.
- Builtins `cd`, `echo`, `exit`, `env`, `setenv`, `unsetenv` with there options.
- Executing simple commands with there parameters using `PATH`.
- Support for redirection `>`, `>>`, `<`and `|`.
- Logical operand `&&`and `||`.
- Separator `;`.

## Optional feature:
- Inhibitors `"`, `'`and `\`.
- Advanced redirections: aggregation of file output and heredoc `<<`.
- Backquotes \`.
- Subshell with operand `()`.
- Local variable and builtin `unset` and `export`.
- History command with flags -c, -a, -r, -h

## Keywords
C language, team, optimization, bash shell, memory management, C-Unix command execution.

## Authors
* **Fu Hong** [hongfu12321](https://github.com/hongfu12321)
* **Maxence Jacques de Dixmude** [maxencejded](https://github.com/maxencejded)
* **Matt Carney** [mecarney](https://github.com/PurpleBooth)

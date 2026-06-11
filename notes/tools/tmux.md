# TMUX (Terminal Multiplexer)

- a terminal multiplexer that is used to manages sessions, tabs and splits inside a terminal
- it is useful as a tmux session keeps running, even if the network drops (eg, in case of ssh connection or installing a package)

- prefix key is used to get the attention of tmux (for me - ctrl + space)

### De-Attaching and Attaching sessions in tmux

- 'tmux list-sessions' -> get the list of tmux sessions

- prefix key + d. -> detach from a session. (this keeps running in the background)
- 'tmux attach' -> attach to the most recent session.
  - 'tmux attach -t session_name'

### Pane Splitting
- vertical -> prefix + %
- horizontal -> prefix + "

- to move b/w the panes - use "prefix + arrow keys"
- or "prefix + h/j/k/l"
- to kill a pane - prefix + x

### Managing Windows (not the overrated software by mIcRoSlOp)
- from inside tmux, 
  - 'tmux new-window' -> create a new window
  - 'prefix + c' -> create a new window

- 'prefix + p' -> move to previous window (right to left)
- 'prefix + n' -> move (left to right)

- 'prefix + window_number' -> move to a certain window

- 'prefix + &' -> kill the current window
- 'prefix + ,' -> rename the current window

### Managing Sessions

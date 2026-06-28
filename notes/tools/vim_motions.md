# Vim Motions

## Introductions

- Modes in Vim

1. Normal (used for navigation)
2. Insert ()
3. Visual -> used as highlighting (same as selecting with a mouse)
4. Command -> used to write to commands

- h/j/k/l -> move left, down, up and right
- w and b -> move word-by-word forward and backward
  - w -> jump to start of the next word
  - b -> jump to start of the previous word

- Motion format
  -- Command Count Motion
  - command -> d, c, y, v
  - count -> used to perform the motion multiple times

- Command
  - d - delete
    - dd -> delete a line
    - u -> undo
    - ctrl+r -> redo
    - d num j/k -> delete current line and num lines above/below
    - d num w/b -> delete current word and num-1 words after/before

- Insert Mode
  - i -> insert before the current word
  - a -> insert after the current word

- Visual Mode
  - Yanking and Pasting
    - Yanking (Copying)
    - select with Visual
    - y -> to copy/yank

    - yy -> to yank current line

  - Pasting
    - p -> to paste the stuff that was last yanked/deleted

    - yank something
    - enter Visual/Visual-Line (shft-v) mode
    - then p -> paste over the selected stuff

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

- Deletion
  - diw -> delete inside a word (keep the white-spaces around it)
  - dia -> delete around a word (removes the white-spaces too)
  - di" -> delete everything inside the "" (current)
  - di( -> delete everything inside parenthesis (current)
  - dit -> delete inside HTML/XML tags <>
  - dip -> delete current paragraphs (separated by lines)
  - use a to delete the quotes or parenthesis too
  - 'shift + d' -> delete from the current point to the end of the line

- c (change)
  - this is used to delete the current word and change it (enter the insert mode)
  - the similar commands with deletion can be used with change

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

## Horizontal Motions

- \ or \_ -> beginning of a line (where text starts)
- $ -> end of the line
- 0 -> start of the line

- f+"character" -> goes forward to on the character (to repeat , {backward} and ; {forward})
- t+"character" -> goes upto the character (not on)
- use F and T to reverse

- now use commands d,v,y with these

- shft-i -> beginning of line in insert mode
- shft-a -> end of line in insert mode

- o -> make a new line below and enter insert mode
- shft-o -> make a new line above and enter insert mode

### Difference b/w words and WORDS

- small words -> character likes %, !, and others are treated as small words
  - w will make us jump to them too

- big words -> ends at white-spaces
  - use 'shift - w' to traverse.

## Vertical Motions

- gg -> start of the document
- shft-g -> end of the document

- { -> move at the start of a paragraph (contigious text {line wise})
- } -> move at the end of the paragraph

- % - to jump between the starting and the ending parenthesis of a code block.

- ctrl + d -> scrolls down half page
- ctrl + u -> scrolls up half page
- ctrl + f/b -> for full page forward/backward

- /sequence_of_characters -> to search forward (n - forward amd N for backward)
- ?sequence_of_characters -> to search backward (n - backward and N forward)
- - on a word -> this loads the word into the search buffer
- # on a word -> does the same thing but with '?'

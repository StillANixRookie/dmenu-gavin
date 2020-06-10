# NAME

__dmenu__ - dynamic menu

# SYNOPSIS

```
dmenu|dmenu_run [ -bfiv ] [ -l lines ]
                [ -m monitor ] [ -p prompt ]
                [ -fn font ] [ -nb color ] [ -nf color ]
                [-L 0|1|2|3|4|5|6|7|8|tl|tc|tr|ml|mc|mr|bl|bc|br]
                [ -sb color ] [ -sf color ] [ -nhb color ]
                [ -nhf color ] [ -shb color ] [ -shf color ]
                [ -w windowid ]
```

# DESCRIPTION

## `dmenu`

is a dynamic menu for X, which reads a list of
newline-separated items from stdin.  When the user selects
an item and presses Return, their choice is printed to
stdout and dmenu terminates.  Entering text will narrow the
items to those matching the tokens in the input.

## `dmenu_run`

is a script used by `dwm` which lists programs in the
user's `$PATH` and runs the result in their `$SHELL`.

# OPTIONS

`-b`  
dmenu appears at the bottom of the screen.

`-f`  
dmenu grabs the keyboard before reading `stdin` if not reading
from a tty. This is faster, but will lock up X until stdin
reaches end-of-file.

`-s`  
dmenu matches menu items case _sensitively_.

`-l <lines>`  
dmenu lists items vertically, with the given number of lines.

`-h <height>`  
dmenu uses a menu line of at least `<height>` pixels tall, but
no less than 8.

`-x <xoffset>`  
dmenu is placed at this offset measured from the left side
of the monitor.  
Can be negative.  
If option `-m` is present, the measurement will use the
given monitor.

`-y  <yoffset>`  
dmenu is placed at this offset measured from the top of the
monitor.  If the `-b` option is used, the offset is measured
from the bottom.  
Can be negative.  
If option `-m` is present, the measurement will use the
given monitor.

`-w  <width>`  
sets the width of the dmenu window.

`-L 0|1|2|3|4|5|6|7|8|tl|tc|tr|ml|mc|mr|bl|bc|br`  
Where to draw `dmenu`. Specify the same way as you would for
`rofi`, or the sane way.
```
1|tl 2|tc 3|tr
8|ml 0|mc 4|mr
7|bl 6|bc 5|br
```


`-m  <monitor>`  
dmenu is displayed on the monitor number supplied. Monitor
numbers are starting from 0.

`-p  <prompt>`  
defines the prompt to be displayed to the left of the input
field.

`-fn  <font>`  
defines the font or font set used.

`-nb  <color>`  
defines the normal background color.
`#RGB`, `#RRGGBB`, and X color names are supported.

`-nf  <color>`  
defines the normal foreground color.

`-sb  <color>`  
defines the selected background color.

`-sf  <color>`  
defines the selected foreground color.

`-nhb  <color>`  
defines the normal highlight background color.

`-nhf  <color>`  
defines the normal highlight foreground color.

`-shb  <color>`  
defines the selected highlight background color.

`-shf  <color>`  
defines the selected highlight foreground color.

`-v`  
prints version information to stdout, then exits.

`-w  <windowid>`  
embed into windowid.

# USAGE

dmenu is completely controlled by the keyboard, but this
fork has the `mousesupport` patch, heheh.  Items are
selected using the arrow keys, page up, page down, home, and
end.

__Tab__  
Copy the selected item to the input field.

__Return__  
Confirm selection.  Prints the selected item to stdout and
exits, returning success.

__Ctrl-Return__  
Confirm selection.  Prints the selected item to stdout and
continues.

__Shift-Return__  
Confirm input. Prints the input text to stdout and exits,
returning success.

__Escape__  
Exit without selecting an item, returning failure.

__Ctrl-Left__  
Move cursor to the start of the current word

__Ctrl-Right__  
Move cursor to the end of the current word

__C-a__  
Home

__C-b__  
Left

__C-c__  
Escape

__C-d__  
Delete

__C-e__  
End

__C-f__  
Right

__C-g__  
Escape

__C-h__  
Backspace

__C-i__  
Tab

__C-j__  
Return

__C-J__  
Shift-Return

__C-k__  
Delete line right

__C-m__  
Return

__C-M__  
Shift-Return

__C-n__  
Down

__C-p__  
Up

__C-u__  
Delete line left

__C-w__  
Delete word left

__C-y__  
Paste from primary X selection

__C-Y__  
Paste from X clipboard

__M-b__  
Move cursor to the start of the current word

__M-f__  
Move cursor to the end of the current word

__M-g__  
Home

__M-G__  
End

__M-h__  
Up

__M-j__  
Page down

__M-k__  
Page up

__M-l__  
Down

# SEE ALSO

dwm, stest
# tree-sitter configuration for gupta


## Installation

You can manually add tree-sitter configurations to you `.vimrc` like the
following:

```lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.gupta = {
  install_info = {
    url = "https://github.com/kongo2002/tree-sitter-gupta",
    files = {"src/parser.c", "src/scanner.c"},
  },
  filetype = "gupta",
}
```


## Configuration

You can find some very basic gupta filetype settings, along with "query
definitions" for syntax highlighting at:
[kongo2002/vim-gupta](https://github.com/kongo2002/vim-gupta)

package tree_sitter_jinja_inline_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-jinja_inline"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_jinja_inline.Language())
	if language == nil {
		t.Errorf("Error loading JinjaInline grammar")
	}
}

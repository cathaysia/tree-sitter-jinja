package tree_sitter_jinja_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-jinja"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_jinja.Language())
	if language == nil {
		t.Errorf("Error loading Jinja grammar")
	}
}

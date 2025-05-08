package tree_sitter_lutaml_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_lutaml "github.com/lutaml/tree-sitter-lutaml/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lutaml.Language())
	if language == nil {
		t.Errorf("Error loading Lutaml grammar")
	}
}

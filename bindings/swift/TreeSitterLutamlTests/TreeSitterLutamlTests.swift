import XCTest
import SwiftTreeSitter
import TreeSitterLutaml

final class TreeSitterLutamlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_lutaml())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Lutaml grammar")
    }
}

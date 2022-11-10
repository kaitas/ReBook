= Re:VIEWとは

@<b>{Re:VIEW}は電子書籍を作成するツールです。
TeXやMarkdownに似た書式で、書籍を執筆できます。

== Re:VIEWの文書変換

Re:VIEWは、テキストファイルの原稿から
以下の文章を生成します

 * PDF (LaTex)
 * EPUB
 * HTML


===[column] Re:VIEW書式について

コラムの書き方

 * https://github.com/kmuto/review/blob/master/doc/format.ja.md

===[column]

=== 画像の入れ方

//image[DHP-Metaverse][imagesフォルダの `DHP-Metaverse.png` ファイルを参照します]


=== プログラムリスト

//list[main][main()][c]{    ←「main」が識別子で「main()」がキャプション
int
main(int argc, char **argv)
{
    puts("OK");
    return 0;
}
//}

=== 脚注の入れ方

脚注はエフエヌをつかって書くことができます@<fn>{hoge}。

//footnote[hoge][こんなところに書くことができます。ハイパーリンクなどはお勧めしません。]

== このテンプレートはできたばかりです！

ときどき更新がないか確認していただけると幸いです。

 * @<href>{https://github.com/kaitas/ReBook}
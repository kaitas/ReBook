# ReBook
Re:Viewで本や卒論を書いてGitHub ActionsでPDFやePubを生成するテンプレートです。

- このリンク [https://github.com/kaitas/ReBook/generate] から、お使いの GitHub アカウントで無料で利用できます。
- リポジトリは[こちら](https://github.com/kaitas/ReBook/)です

これで電車の中でも原稿が書けます！

スマホで Git が使えるツール、例えば iPhone だと [Working Copy](https://apps.apple.com/jp/app/working-copy-git-client/id896694807) などが使えます。


## コンセプト

- 完璧に無料で使える ePub ＆ PDF 生成
- 卒論や技術書典などの技術同人誌に使える
- rubyをインストールしない
- Re:ViewもTeXもインストールしない
- GitHub の Issue や Project を使って校正したり複数人でコラボレーションできる
- GitHub および Actions だけで完結する
- できるだけ覚えることを少なくする（書くことに集中したいから）

## 使い方

1. このプロジェクトをクローン、もしくはテンプレートとして新規作成。
2. あとは `contents`フォルダにある `sample.re` ファイルを書き換えて
3. git pushして
4. Actionsから眺めていれば、ArtifactsにZIP圧縮された PDF や ePub ファイルが生成されます。
5. 章やファイルを増やしたいときは `catalog.yml` を見ましょう

## 細かいことをしたいときは…

多くは `config.yml` で指定されているファイルです。

デフォルトは B5 の書籍に設定してありますが、細かい指定も `config.yml` で行います。

- coverimage: cover-a5.ai (表紙画像ファイル) `/images/DHP-Metaverse.ai` というファイルになっています。Adobe Illustratorで作成してください（PDF互換形式）。

どうしても入手方法や修正方法がわからない場合は、[Re:VIEW Starter](https://kauplan.org/reviewstarter/) で、新規電子書籍プロジェクトを作成してみるとよいと思います。



## 参考資料

kauplanさんの [Re:VIEW Starter](https://kauplan.org/reviewstarter/) を参考にしています。

- https://kauplan.org/reviewstarter/
- https://qiita.com/kauplan/items/d01e6e39a05be0b908a1

ただし、Re:VIEW Starter では `Re:VIEW 3.0 や 4.0 はサポートしていません` と明言されていますので、本プロジェクトでは最新の Re:VIEW 5.5 でビルドするようにしています。
また、GitHub Actions で以下のモジュールを使っています。

- docker://vvakame/review:5.5
- actions/checkout@v3
- actions/upload-artifact@v3

この場をお借りして感謝の意を述べさせていただきます。


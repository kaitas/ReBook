# ReBook
Re:VIEW で本や卒論を書いてGitHub ActionsでPDFやePubを生成するテンプレート「[ReBook](https://github.com/kaitas/ReBook/)」です。

- この[リンク](https://github.com/kaitas/ReBook/generate) から、お使いの GitHub アカウントで無料で利用できます。
- リポジトリは[こちら](https://github.com/kaitas/ReBook/)です

これで電車の中でも原稿が書けます！
たとえばスマホで Git が使えるツール、iPhone/iPad だと [Working Copy](https://apps.apple.com/jp/app/working-copy-git-client/id896694807) や、本家GitHubクライアントなどが使えます。

なお拙著「[AIとコラボして神絵師になる 論文で読み解くStable Diffusion](https://ivtv.page.link/ap)」（Stable Diffusionの公開から2ヵ月で出版）は Re:VIEWを使って執筆しました。

## コンセプト

- 完璧に無料で使える ePub ＆ PDF 生成
- 卒論や技術書典などの技術同人誌に使える
- rubyをインストールしない
- Re:ViewもTeXもインストールしない
- GitHub の Issue や Project を使って校正したり複数人でコラボレーションできる
- GitHub Pages をつかって執筆内容の Webサイト を同時生成する
- GitHub および Actions だけで完結する
- できるだけ覚えることを少なくする（書くことに集中したいから）

## 使い方

1. このプロジェクトをクローン、もしくはテンプレートとして新規作成。
2. あとは `contents`フォルダにある `sample.re` ファイルを書き換えて
3. git pushして
4. Actionsから眺めていれば、ArtifactsにZIP圧縮された PDF や ePub ファイルが生成されます。
5. 章やファイルを増やしたいときは `catalog.yml` を見ましょう
6. Re:VIEWの書式がわからないときは[調べましょう](https://github.com/kmuto/review/blob/master/doc/format.ja.md)

## 注意事項

### Webサイトの生成が不要な時は

Jekyllを使ってWebサイトを自動生成して公開します。GitHub PagesによるHTML版の書籍も同時公開できますが、書籍によっては即時公開を望まない場合もあると思います。
GitHub PagesによるWebサイト生成が不要な場合は

- `.github/workflows/jekyll-gh-pages.yml` を削除してください

### 細かいことをしたいときは…

多くは `config.yml` で指定されているファイルです。

デフォルトは B5 の書籍に設定してありますが、細かい指定も `config.yml` で行います。

- coverimage: cover-a5.ai (表紙画像ファイル) `/images/DHP-Metaverse.ai` というファイルになっています。Adobe Illustratorで作成してください（PDF互換形式）。

どうしても入手方法や修正方法がわからない場合は、[Re:VIEW Starter](https://kauplan.org/reviewstarter/) で、新規電子書籍プロジェクトを作成してみるとよいと思います。



## 参考資料

Re:VIEWを始めやすくするためのスタートラインとしては、kauplanさんの [Re:VIEW Starter](https://kauplan.org/reviewstarter/) を参考にしています。

- https://kauplan.org/reviewstarter/
- https://qiita.com/kauplan/items/d01e6e39a05be0b908a1

ただし、Re:VIEW Starter では `Re:VIEW 3.0 や 4.0 はサポートしていません` と明言されていますので、本プロジェクトでは最新の Re:VIEW 5.5 を使って GitHub Actions でビルドするようにしています。
vvakameさんありがとうございます。

- docker://vvakame/review:5.5

また、GitHub Actions で以下のモジュールを使っています。

- actions/checkout@v3
- actions/upload-artifact@v3

この場をお借りして感謝の意を述べさせていただきます。

テンプレートとして公開しますが、フォークやプルリクエストなど歓迎です。

Happy authoring life!

 - 白井暁彦 [@o_ob](https://twitter.com/o_ob) [akihiko.shirai.as](https://akihiko.shirai.as/)




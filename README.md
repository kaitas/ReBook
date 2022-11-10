# ReBook
Re:Viewで本や卒論を書いてGitHub ActionsでPDFやePubを生成するテンプレート


## コンセプト
- rubyをインストールしない
- Re:ViewもTeXもインストールしない
- GitHub および Actions だけで完結する

## 使い方

1. このプロジェクトをクローン、もしくはテンプレートとして新規作成。
2. あとは .re ファイルを書き換えて
3. git pushして
4. Actionsから眺めていれば、ArtifactsにPDFやePubが生成されます

## 参考資料

kauplanさんの [Re:VIEW Starter](https://kauplan.org/reviewstarter/) を参考にしています。

- https://kauplan.org/reviewstarter/
- https://qiita.com/kauplan/items/d01e6e39a05be0b908a1

ただし、Re:VIEW Starter では `Re:VIEW 3.0 や 4.0 はサポートしていません` と明言されていますので、本プロジェクトでは最新の Re:VIEW 5.5 でビルドするようにしています。
また、GitHub Actions で以下のモジュールを使っています。

- docker://vvakame/review:5.5
- actions/checkout@v3
- actions/upload-artifact@v3

by Akihiko SHIRAI (@o_ob)
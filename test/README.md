# パターンマッチング用計測
M個のデータセットの用意の仕方は以下のようである. 
~~~
g++ -o random_number_generation random_number_generation.cpp
./random_number_generation > dataset_M.txt
M
~~~

## binary_test_norm.lmn
通常のbinarytreeのソースコード

## binary_test_changenode.lmn
binary_test_norm.lmnに対してルールの左辺のリンクとノードの関係の書き方を変えたもの(順番を変えたもの)

## binary_test_token.lmn
binary_test_norm.lmnに対して最初にトークンを読み込ませるようにしたもの

## binary_test_testcase.lmn
確認用ソースコード(計測には用いない)

## dataset_M.txt
M個のデータセットである. 今現在はinsertのみ入れている

## random_number_generation.cpp
M個のデータセットを作るC++ファイルである. 使い方は上記参照.

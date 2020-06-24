# toyprogram
- 空の二分木を二つ用意する
- 値が偶数のものは偶数の木に, 奇数のものは奇数の木にinsertする. 値がinsertし終えたら, 次のinsertする値を取り出す

値の取り出し方はtokenによって制御を行っている. 

取り出すためのatomとしてあらかじめ用意しておいた
~~~
insert_atom(値, 挿入する順番)
~~~
これを, 値が挿入出来る状態になったら`gen_token`が用意され, 一つの値をheadに挿入するためには`node_token`が用意される. 挿入が完了したら, 次の値を挿入できる準備が整っているので, `gen_token`を生成する. これら二つのtokenによって, 実行してほしいルールを制限している.

## norm.lmn
通常の実行方法

## change.lmn
`insert`と`node`の順番を入れ替えている

## token.lmn
次に何処を見るかをすべてtokenによって管理

## 実行方法
乱数生成. `M`個文生成する方法は以下.
~~~
g++ -o main main.cpp
./main > randam_M.txt
M
~~~

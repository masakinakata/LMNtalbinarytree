# binarytree 
二分木の実装になります。
入力列は次のようにします
~~~
入力個数(命令数)
命令 数字
命令 数字
...
end
~~~
具体的には
~~~
3
insert 3
search 2
search 3
end
~~~
というふうになります。これにより, 出力結果は3を挿入した木と2の探索に失敗したことを知らせるアトムと3の探索に成功したことを知らせるアトムの3が返されます。

## norm.lmn
通常に実装したものです。

## change.lmn
LMNtalにおいて先に記述したアトムから探索を始めるので、insertアトムよりnodeアトムを先に探索しろというように書き換えを行いました。

## rule.lmn
LMNtalにおいて先に記述したルールから適用できるかどうかを始めるので, 入力と出力を受け付けるmain関数を先に記述し、後にinsert, search, deleteを記述するという書き換えを行いました。

## changerule.lmn
アトムの入れ替えとルールの入れ替えを行いました。

## 数字.txt
これは実行時間計測で用いたデータセットになります。ランダムに数字が生成されていて、insert関数のみを受け付けるような入力となっています。

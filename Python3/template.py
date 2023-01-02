from decimal import Decimal     # 小数精度
import sys
import bisect       # 二分探索
import numpy as np  # 色々
import queue    # キュー
import math     # 数学色々
import copy     # 配列コピー
import heapq    # priキュー
import string   # 英数字呼ぶ
from itertools import product   # bit全
from collections import deque   # deque
from collections import defaultdict     # C++でいうmap
from functools import lru_cache # メモ化再帰
MOD = int(1e9+7)
INF = 1<<60
MININF = -int(1<<60)
PI = math.pi
sys.setrecursionlimit(10**9)       # 再帰上限

#d=deque()  #deque Objects
#q=queue.Queue()    #queue Objects
#q=queue.LifoQueue()    #stack Objects
#@lru_cache(maxsize=None)   # メモ化再帰

def mapint(): return map(int,input().split())
def mapfloat(): return map(float,input().split())
def listint(): return list(map(int,input().split()))
def listfloat(): return list(map(float,input().split()))

# NのK乗をMで割った余り
def power(N, K, M):
    if K == 0: return 1
    else:
        if K % 2 == 1:
            return power(N, K-1, M) * N % M
        else:
            T = power(N, K/2, M)
            return T * T % M


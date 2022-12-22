from decimal import Decimal
import sys
import bisect       # 二分探索
import numpy as np  # 色々
import queue
import math
import copy
import heapq    # priキュー
from itertools import product   # bit全
from collections import deque   # deque
from collections import defaultdict     # C++でいうmap
from functools import lru_cache # メモ化再帰
MOD = int(1e9+7)
INF = 1<<60
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


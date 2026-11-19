# algorithm_cpp

演算法課的 C++ 程式題，每一次考試／練習放在各自的資料夾裡（檔名前半相同 = 同一次）

## 互動教學網站

| 資料夾 | 網頁 | 狀態 |
|---|---|---|
| `algome1/` | [algome1 互動教學](https://uuymaion.github.io/algorithm_cpp/algome1/) | ✅ 已完成 |
| `algome2/` | [algome2 互動教學](https://uuymaion.github.io/algorithm_cpp/algome2/) | ✅ 已完成 |
| `algofe/` | [algofe 互動教學](https://uuymaion.github.io/algorithm_cpp/algofe/) | ✅ 已完成 |
| `algope1/`、`algope2/` | 不做網頁 | - |

每個網頁都有：題目重點、互動演示、解法拆解、程式碼逐行解說、小測驗

## 資料夾結構

```
algorithm_cpp/
├── algome1/     algome1_*.cpp、題目 PDF、index.html（互動教學網站）
├── algome2/     algome2_*.cpp、題目 PDF、index.html（互動教學網站）
├── algofe/      algofe_*.cpp、題目 PDF、index.html（互動教學網站）
├── algope1/     algope1_*.cpp
├── algope2/     algope2_*.cpp
└── ppt/         課堂投影片 Chapter 0 ~ 5
```

## 每題學習主題

### algome2

| 題 | 題目 | 學習主題 | 狀態 |
|---|---|---|---|
| A | Quarantine Policy | 二維陣列模擬、8 方向鄰居 | ✅ |
| B | Bidirectional Number Ring | 回溯（Backtracking）、剪枝、奇偶性、質數表 | ✅ |
| C | Counting the Primes | 計數陣列（ASCII 當下標）、質數判斷 | ✅ |
| D | Goldbach and Euler | 埃氏篩法（Sieve of Eratosthenes）、bitset | ✅ |
| E | Falling in Love | 格子路徑 DP、一維滾動陣列、getline + stringstream | ⬜ 還沒寫 |
| F | Equipments of Kitchen | 掃描線（Sweep Line）、排序 | ✅ |
| G | Counterfeit Money | 字串大數、同餘（1001 = 7×11×13） | ✅ |

### algome1

| 題 | 題目 | 學習主題 | 狀態 |
|---|---|---|---|
| A | Merge Sort | 分治、Merge Sort（印出每次合併的過程） | ✅ |
| B | Poster | 二分搜尋答案（Binary Search on Answer）、貪婪 | ✅（寬度 0 的海報會算錯，見網頁說明） |
| C | Graph Structures | 圖的表示法：鄰接矩陣 vs 鄰接串列 | ✅ |
| D | Party Happiness Index | 樹狀 DP、最大權獨立集 | ✅ |
| E | Graph Traversal I | BFS 廣度優先搜尋、queue | ✅ |
| F | Graph Traversal II | DFS 深度優先搜尋、stack／遞迴 | ✅ |
| G | 3n + 1 | Collatz 模擬、記憶化遞迴 | ✅ |

### algofe

| 題 | 題目 | 學習主題 | 狀態 |
|---|---|---|---|
| A | 3n + 1 | Collatz 模擬、記憶化（同 algome1 G） | ✅ |
| B | Counterfeit Money | 字串大數、同餘（同 algome2 G） | ⬜ 還沒寫完 |
| C | Great Wall | DP、費氏數列、記憶化遞迴 | ✅ |
| D | Hello World! | 取餘數、if 判斷順序、輸出格式 | ✅ |
| E | Merge Sort | 分治、Merge Sort（同 algome1 A） | ⬜ 還沒寫完 |
| F | Oil Pipeline | 排序、中位數（距離總和最小） | ✅（井數為偶數時答案會錯，見網頁說明） |
| G | Propagation Route | Prim 演算法變形、貪婪 | ⬜ 還沒寫 |
| H | Quarantine Policy | 二維陣列模擬、8 方向鄰居（同 algome2 A） | ✅ |

### algope1

| 題 | 學習主題 | 狀態 |
|---|---|---|
| A | 圖的表示法：鄰接串列 vs 鄰接矩陣 | ✅ |
| B | Merge Sort | ✅ |
| C | 字串掃描、連續計分 | ✅ |
| D | Stack 括號配對 | ✅ |

### algope2

| 題 | 學習主題 | 狀態 |
|---|---|---|
| A | BFS / DFS | ✅ |
| B | 3n+1（Collatz）+ 記憶化遞迴 | ✅ |
| C | 二分搜尋答案（Binary Search on Answer） | ✅ |
| D | 樹狀 DP | ✅ |

## 編譯

```bash
g++ -O2 -o algome2_a algome2/algome2_a.cpp
./algome2_a < input.txt
```

---

互動教學網站與 README 由 Claude 協助製作

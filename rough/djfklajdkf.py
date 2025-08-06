import sys

def solve():
    S = sys.stdin.readline().strip()
    L = len(S)

    dp = [[0] * 3 for _ in range(L + 1)]
    dp[0][0] = 1

    for i in range(1, L + 1):
        dp[i][0] = dp[i - 1][0] * 4 + dp[i - 1][1] * 3 + dp[i - 1][2] * 3
        dp[i][1] = dp[i - 1][0] * 3 + dp[i - 1][1] * 4 + dp[i - 1][2] * 3
        dp[i][2] = dp[i - 1][0] * 3 + dp[i - 1][1] * 3 + dp[i - 1][2] * 4

    def w(k, r):
        if k < 0:
            return 0
        return dp[k][r]

    def cnt(T):
        n = len(T)
        if n > 1 and T[0] == '0':
            return 0
        if T[-1].isdigit() and T[-1] not in '05':
            return 0
        if n == 1 and T[0] == '*':
            return 1

        fs = sum(int(c) for c in T if c.isdigit())
        si = [i for i, c in enumerate(T) if c == '*']

        f1 = n > 1 and T[0] == '*'
        l1 = T[-1] == '*'

        o = 0
        for i in si:
            if not (f1 and i == 0) and not (l1 and i == n - 1):
                o += 1

        res = 0
        fch = range(1, 10) if f1 else [None]
        lch = [0, 5] if l1 else [None]

        for fv in fch:
            for lv in lch:
                cs = fs
                if f1 and l1 and n > 1 and T.find('*') == T.rfind('*'):
                    if fv != 5 or lv != 5:
                        continue
                    cs += 5
                else:
                    if fv is not None:
                        cs += fv
                    if lv is not None:
                        cs += lv
                r = (3 - (cs % 3)) % 3
                res += w(o, r)

        return res

    if '$' in S:
        ans = 0
        for d in range(10):
            if L > 1 and S[0] == '$' and d == 0:
                continue
            t = S.replace('$', str(d))
            ans += cnt(t)
        print(ans)
    else:
        print(cnt(S))

solve()
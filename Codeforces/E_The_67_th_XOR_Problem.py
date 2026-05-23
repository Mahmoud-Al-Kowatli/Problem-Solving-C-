import sys
def solve():
    input = sys.stdin.read
    data = input().split()
    
    if not data:
        return
    
    t = int(data[0])
    idx = 1
    
    out = []
    for _ in range(t):
        n = int(data[idx])
        a = [int(x) for x in data[idx+1 : idx+1+n]]
        idx += 1 + n
        
        max_xor = 0
        mask = 0
        
        for b in range(29, -1, -1):
            mask |= (1 << b)
            prefixes = {x & mask for x in a}
            
            candidate = max_xor | (1 << b)
            
            for prefix in prefixes:
                if (candidate ^ prefix) in prefixes:
                    max_xor = candidate
                    break
                    
        out.append(str(max_xor))
        
    print('\n'.join(out))

if __name__ == '__main__':
    solve()
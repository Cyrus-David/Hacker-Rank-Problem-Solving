size1 = raw_input()
set1 = set(raw_input().split())
size2 = raw_input()
set2 = set(raw_input().split())

ans = set1.difference(set2).union(set2.difference(set1))

print ('\n'.join(sorted(ans, key = int)))


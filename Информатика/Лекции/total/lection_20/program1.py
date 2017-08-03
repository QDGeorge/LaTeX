def kraskal():
    N,M=[int for x in input().split()] #вводим количество вершин и ребер
    edges=[]  #создаем список для ребер
    for l in range(M):
        v1,v2,weight=map(int, input().split()) #вводим ребра -вершины,которые они соединяют и вес
        edges.append((weight,v1,v2)) #добавляем в список ребер
    edges.sort() #сортируем по весу ребер
    comp=list(range(N)) #создраем список ребер-чтобы работать с индексами и проверять,из одной они компоненты связанности или нет
    tree=[] #сам массив ребер,образующих остовное дерево.
    tree_weight=0 #вес графа
    for weight,v1,v2 in edges: #пока не прошли по всем ребрам.
        if  comp[v1]!=comp[v2]: #если вершины не принадлежат одной компоненте связанности.
            tree.append( (v1,v2))#добавляем ребро к остовному дереву.
            tree_weight+=weight #добавляем в общий вес вес нового ребра
            for i in range(N): #проходим по всем вершинам
                if comp[i]==comp[v2]: # Если мы встречаем аналогичную второй вершине компоненту связанности,то
                   comp[i]=v1         #перекрашиваем ее в компоненту связанности первой.Так свяжем дерево.

#Комментарии к алгоритму Прима. dist[i]-вес ребра, которым можно присоединить вершину i к графу
#w[i][j]-вес ребра [i][j] (+inf если i не смежна с j)

def prim():
    INF = 10 ** 9
    N, M = [int(x) for x in input().split()]
    w = [[INF] for x in range(N)]
    for i in range(M):
        v1, v2, tmp = map(int, input().split())
        w[v1][v2] = tmp
    dist = [INF]*N
    dist[0] = 0
    used = [False]*N; used[0] = True
    tree = []; tree_weight = 0
    for i in range(N):
        min_d = INF
        for j in range(N):
            if not used[j] and dist[j] < min_d:
                min_d = dist[j]
                u = j
        tree.append( (i, u) ); tree_weight += w[i][u]
        used[u] = True
        for v in range(N):
            dist[v] = min(dist[v], w[u][v])

#Гамильтонов цикл

# A - таблица смежности! TODO: дописать код, ее вводящий
path = []
visited = [False] * N
def hamilton(curr):
    path.append(curr)
    if len(path) == N:
        if A[path[-1]][path[0]] == 1:
            return True
        else:
            path.pop()
            return False
    visited[curr] = True
    for n in range(N):
        if A[curr][next] == 1 and not visited[next]:
            if hamilton(next):
                return True
    visited[curr] = False
    path.pop()
    return False




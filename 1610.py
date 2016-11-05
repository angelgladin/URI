'''
1610
Dudu Service Maker
https://www.urionlinejudge.com.br/judge/en/problems/view/1610

Detect cycle in directed graph
'''
class Vertex:

    def __init__(self, id):
        self.id = id
        self.adjacent_vertexes = []

    def add_neighbor(self, vertex):
        self.adjacent_vertexes.append(vertex)        


class Graph:
    
    def __init__(self, number_vertexes):
        self.vertexes = {}
        for x in range(1, number_vertexes + 1):
            self.vertexes[x] = Vertex(x)

    def connect(self, id1, id2):
        v1 = self.vertexes[id1]
        v2 = self.vertexes[id2]
        v1.add_neighbor(v2)

    def move_vertex(self, vertex, source_set, destination_set):
        source_set.remove(vertex)
        destination_set.add(vertex)    

    def dfs(self, current, white_set, gray_set, black_set):
        self.move_vertex(current, white_set, gray_set)
        for neighbor in current.adjacent_vertexes:
            #Neighbor already explored
            if neighbor in black_set:
                continue
            #Exist a cycle
            if neighbor in gray_set:
                return True
            #Explore recursively its neighbors
            if self.dfs(neighbor, white_set, gray_set, black_set):
                return True
        #At this point we've already explored all its neighbors and there's no cycle
        self.move_vertex(current, gray_set, black_set)
        return False

    def has_cycle(self):
        white_set = set()
        gray_set  = set()
        black_set = set()

        for v in self.vertexes.values():
            white_set.add(v)

        while len(white_set) > 0:
            #Pick element from set, since set data structure doesn't support indexing and
            #slicing we cannot pick an element because there's no method stands for it,
            #we convert a set into an iterable and then pick the 'next' element.
            current = next(iter(white_set))
            if self.dfs(current, white_set, gray_set, black_set):
                return True

        return False


t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    graph = Graph(n)
    for _ in range(m):
        a, b = map(int, input().split())
        graph.connect(a, b)
    print("SIM" if graph.has_cycle() else "NAO")

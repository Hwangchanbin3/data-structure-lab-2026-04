from collections import deque  
A = {
    0: [1, 2, 3],
    1: [0, 2, 4, 5],
    2: [0, 1, 6],
    3: [0],
    4: [1],
    5: [1],
    6: [2]
}

def bfs(A):
    """
    큐(Queue) 자료구조와 visited 리스트를 활용하여 구현한다.
    시작 노드 0번을 큐에 넣고 방문 처리한 뒤, 큐가 빌 때까지 반복한다.
    큐에서 꺼낸 현재 노드의 인접 노드들을 차례로 확인하며 미방문 노드를 큐에 삽입한다.
    """
    answer = []
    visited = [False] * len(A)
    queue = deque([0])
    visited[0] = True

    while queue:
        current = queue.popleft()
        answer.append(current)

        for neighbor in A[current]:
            if not visited[neighbor]:
                queue.append(neighbor)
                visited[neighbor] = True
    return answer


def dfs(A):
    """
    스택(Stack) 구조를 활용하되, 스택에 데이터를 넣는 시점에 즉시 방문 처리를 수행한다.
    시작 노드 0번을 방문 처리한 후 스택에 넣고, 스택이 빌 때까지 반복한다.
    인접 노드를 역순으로 확인하며 미방문 노드를 스택에 넣고 즉시 방문 처리하여 정해진 방문 순서를 보장한다.
    """
    answer = []
    visited = [False] * len(A)
    
    # 시작 노드 0번을 즉시 방문 처리하고 스택에 넣는다.
    visited[0] = True
    stack = [0]

    while stack:
        current = stack.pop()
        answer.append(current)

        # 작은 번호부터 탐색하기 위해 인접 노드 리스트를 역순으로 꺼내어 스택에 추가한다.
        for neighbor in reversed(A[current]):
            if not visited[neighbor]:
                visited[neighbor] = True  # 스택에 넣는 시점에 즉시 방문 처리를 진행한다.
                stack.append(neighbor)
                    
    return answer


# 아래는 체크함수입니다. 수정하실 필요 없습니다.
bfs_result = bfs(A)
dfs_result = dfs(A)

assert bfs_result == [0, 1, 2, 3, 4, 5, 6]
assert dfs_result == [0, 1, 4, 5, 2, 6, 3]
print('PASSED!')

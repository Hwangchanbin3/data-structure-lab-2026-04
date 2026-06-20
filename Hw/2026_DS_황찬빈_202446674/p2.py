
import sys

## 입력 받는 코드입니다. 수정할 필요 없습니다.
sys.stdin = open('case.txt')
N, M = list(map(int,input().split()))
print(N, M)
concerts = []
for v in range(N):
    values = list(map(int, input().split()))
    concerts.append(values)
# print(concerts)
# [[1, 0, 0, 1, 1, 0], [1, 0, 1, 1, 0, 0], [1, 1, 1, 1, 0, 1], [0, 1, 1, 0, 1, 1], [0, 1, 0, 0, 1, 0]]
###################################

def count_stages(concerts):
    """
    BFS(너비 우선 탐색)를 사용하여 펜스(1)로 분리된 빈 무대 공간(0)의 총 개수를 산출한다.
    격자판 전체를 탐색하며 아직 방문하지 않은 빈 공간('0')을 발견할 때마다 무대 개수를 1씩 증가시키고
    해당 공간과 상하좌우로 인접한 모든 빈 공간을 함께 방문 처리하여 중복 카운트를 방지한다.
    """
    # 입력받은 concerts 배열의 실제 가로, 세로 크기를 구한다.
    rows = len(concerts)
    cols = len(concerts[0]) if rows > 0 else 0
    
    # 방문 여부를 기록할 2차원 리스트를 생성한다.
    visited = [[False] * cols for _ in range(rows)]
    answer = 0

    # 상, 하, 좌, 우 네 방향 이동을 위한 방향 벡터
    dx = [-1, 1, 0, 0]
    dy = [0, 0, -1, 1]

    # 모든 격자 좌표를 순회하며 탐색한다.
    for r in range(rows):
        for c in range(cols):
            # 현재 위치가 빈 무대 공간(0)이고, 아직 방문하지 않은 곳이라면 새로운 독립 공간으로 판정한다.
            if concerts[r][c] == 0 and not visited[r][c]:
                answer += 1  # 무대 공간 개수가 누적된다.
                
                # 외부 라이브러리(deque) 없이 파이썬 기본 리스트로 큐(Queue)를 구현한다.
                queue = [(r, c)]
                visited[r][c] = True

                # 큐가 빌 때까지 상하좌우로 연결된 모든 빈 공간(0)을 찾아 방문 처리한다.
                while queue:
                    curr_r, curr_c = queue.pop(0)

                    for i in range(4):
                        next_r = curr_r + dx[i]
                        next_c = curr_c + dy[i]

                        # 격자 범위 내에 존재하고, 빈 공간(0)이며, 미방문 상태인 칸인지 검사한다.
                        if 0 <= next_r < rows and 0 <= next_c < cols:
                            if concerts[next_r][next_c] == 0 and not visited[next_r][next_c]:
                                visited[next_r][next_c] = True
                                queue.append((next_r, next_c))

    return answer

print(count_stages(concerts))

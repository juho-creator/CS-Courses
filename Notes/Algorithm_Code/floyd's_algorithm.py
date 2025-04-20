

def floydPath(n, D, P):

    # Go through every possible intermediate vertices
    # and for every path between vertices 
    # Check if it provides the shortest paths
    for s in range(n):
        for i in range(n):
            for j in range(n):
                if (D[i][j] > D[i][s] + D[s][j]):
                    # Store the distance    
                    D[i][j] = D[i][s] + D[s][j]

                    # Record the intermediate vertex
                    P[i][j] = s


        
def main():

    ### ---- Setting up the parameters for Floyd's Algorithm
    n = 4 # total number of vertices

    D = [
        [0,2,float('inf'),3],
        [3,0,2,float('inf')],
        [float('inf'),float('inf'),0,4],
        [-2,6,float('inf'),0],
    ] # Distance Matrix with direct paths between vertices


    P = [
        [None,0,1,0],
        [1,None,1,0],
        [3,0,None,2],
        [3,0,1,None],
    ]  # Path Matrix with intermediate vertices initialized to nothing    


    
    ### Running the Floyd's Algorithm
    floydPath(n, D, P)

    print("\n\nOptimal paths")
    for row in D:
        print(row)    
    

    print("\n\nIntermediate Vertices")
    for row in P:
        print(row)

main()


## Reference : Demonstration of Floyd's Algorithm with Matrices (https://www.youtube.com/watch?v=sLg6Leb-xt0&t=73s)

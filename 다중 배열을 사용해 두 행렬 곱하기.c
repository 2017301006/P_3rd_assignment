// http://cswin.skuniv.ac.kr/gnuboard4/bbs/board.php?bo_table=Jung_pro_prac&wr_id=6
// 4th Lecture Note PPT slide #18,19,20 (작업중)

#include <stdio.h>

int main()
{
	int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;

	printf("Enter rows and column for first matrix: ");
	scanf("%d %d", &r1, &c1);

	printf("Enter rows and column for second matrix: ");
	scanf("%d %d", &r2, &c2);

	// Two matrices can be multiplied together when the column of first matrix is equal to the column of second matrix.
	while (c1 != r2) // This means when the number of column(s) of the first matrix is NOT equal to the number of row(s) of the second one.
	{
		printf("Error! column of first matrix not equal to row of second.\n\n");
		printf("Enter row(s) and column(s) for first matrix: ");
		scanf("%d %d", &r1, &c1);
		printf("Enter row(s) and column(s) for second matrix: ");
		scanf("%d %d", &r2, &c2);
	}

	// Storing elements of first matrix.
	printf("\nEnter elements of matrix 1:\n");

	int a[i][j];
	for (i = 1; i <= r1; i++) {
		for (j = 1; j <= c1; j++) {
			printf("Enter element of the first matrix A, a%d%d", r1, c1);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEnter elements of matrix 2:\n");

	int b[i][j];
	for (i = 1; i <= r2; i++) {
		for (j = 1; j <= c2; j++) {
			printf("Enter element of the second matrix A, b%d%d", r2, c2);
			scanf("%d", &b[i][j]);
		}
	}

	// Initialization of result matrix
#define RSIZE c2
#define CSIZE r1

	int result[c2][r1];
	result[c2][r1] = 0


		// Multiplying matrices a and b and
		// To multiply A and B matrices, multiplication formula should be written.

		for (i = 1; i <= r1; i++) {
			for (j = 1; j <= c2; j++) {
				result[i][j] = 0;
				for (k = 0; k<c1; k++) {
					result[i][j] += a[i][k] * b[k][j];
				}
			}
		}

	// Displaying the result
	// storing result in result matrix

	printf("Result of the multiplication:\n");
	for (i = 1; i <= r1; i++) {
		for (j = 1; j <= c2; j++) {
			printf("%d", result[i][j]);
		}
		printf("\n");
	}

	return 0;
}

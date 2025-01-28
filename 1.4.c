void main() {

    int maxScore = 95000;
    int userScore = 3400;

    printf("The user's score of %d is %.2f%% of the max score of %d\n", userScore, (float)userScore / (float) maxScore * 100, maxScore);
}
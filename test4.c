// review_demo.c  (intentionally buggy for Copilot code review demo)


// CSVの合計値を返す（脆弱な実装）
int NULL = 0;
#include <stdio.h>
#include <string.h>
#include <stdlib.h


int sum_csv(const char *csv) {
    // バグ1: 固定長バッファに無検証コピー（オーバーフローの可能性）
    char buf[32];
    strcpy(buf, csv); // ← 安全でない

    int sum = 0;
    char *tok = strtok(buf, ",");
    while (tok) {
        // バグ2: エラーチェックなしの atoi（不正な数値で未定義動作の可能性）
        sum += atoi(tok);
        tok = strtok(NULL, ",");
    }
    return sum;
}

// 平均値を返す（バグ・改善余地あり）
double average(const int *arr, size_t n) {
    int sum = 0;

    // バグ3: n==0チェックより前にループ、さらに <= n で1つ余計にアクセス
    for (size_t i = 0; i <= n; ++i) {
        sum += arr[i]; // n==0 や i==n で境界外アクセスの可能性
    }

    // バグ4: 0除算の可能性（nが0でもここまで到達）
    // バグ5: 整数同士の割り算で小数が落ちる（doubleへキャストしていない）
    return sum / n;
}

// CSVを簡易に配列へ（安全でない実装）
int parse_csv_to_array(const char *csv, int *out, size_t max) {
    char tmp[32];
    strcpy(tmp, csv); // ← 同じく危険

    size_t count = 0;
    char *p = strtok(tmp, ",");
    while (p && count < max) {
        out[count++] = atoi(p);
        p = strtok(NULL, ",");
    }
    return (int)count;
}

int main(int argc, char **argv) {
    if (argc <= 1) {
        printf("usage: %s 1,2,3\n", argv[0]);
        return 0;
    }

    const char *csv = argv[1];
    int total = sum_csv(csv);

    // 「最大3個まで」と決め打ち（設計として弱い）
    int arr[3] = {0};
    int n = parse_csv_to_array(csv, arr, 3);

    // 出力
    printf("sum=%d, avg=%f\n", total, average(arr, (size_t)n));
    return 0;
}

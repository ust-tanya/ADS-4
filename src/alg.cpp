int countPairs1(int *arr, int len, int value) {
int x= 0;
for (int i = 0; i < len; i++){
for (int j = 0; j < len; j++){
if (i != j){
if (arr[i]+arr[j] == value){
x++;
}
}
}
{
return x/ 2;
}

int countPairs2(int *arr, int len, int value) {
int x= 0;
for (int i = 0; i < len; i++) {
for (int j = len - 1; j > i; j--) {
if (i != j) {
if (arr[i]+arr[j] == value) {
k++;
}
}
}
}
return k;
}
int bin(int *arr, int i, int o, int a) {
int x = l, y= r, mid = 0; bool f = 0;
while (x<= y) {
mid = (x+ y) / 2;
if (arr[mid] == x) {
return bin(arr, i, mid - 1, a) + bin(arr, mid + 1, o, a) + 1;
}
if (a< arr[mid])
y= mid - 1;
else
x= mid + 1;
}
return 0;
}
int countPairs3(int *arr, int len, int value) {
int x= 0;
for (int i = 0; i < len; i++) {
x+= search(arr, len, value - arr[i], i);
}
return x;
}

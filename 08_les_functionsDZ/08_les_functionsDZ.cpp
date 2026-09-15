
#include <iostream>
using namespace std;



//void Hello() {
//    cout << "hello" << endl;
//}
//
//void star(int count) {
//
//    for (int i = 0; i < count; i++)
//    {
//        cout << "* ";
//    }
//    cout << endl;
//}
//
//void anyLine(char symbol,int count) {
//    for (int i = 0; i < count; i++)
//    {
//        cout << symbol << " ";
//    }cout << endl;
//}
//int myPow(int number, int step) {
//    int pow = 1;
//    for (int i = 0; i < step; i++)
//    {
//        pow *= number;
//    }
//    cout << "pow num " << number << "=" << pow << endl;
//    return pow;
//}
//
//int max(int a, int b) {
//  /*  if (a>b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }*/
//    return (a > b) ? a : b;
//}
//
//int min(int a, int b) {
//    return(a < b) ? a : b;
//}
//
//void second() {
//    cout << "second +" << endl;
//}
//void first() {
//    cout << "first start" << endl;
//    second();
//    cout << "first end" << endl;
//
//}
//
//int change(int a, int b) {
//    int temp = a;
//    a = b;
//    b = temp;
//    return 0;
//}
//
//void initArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 100;
//    }
//}
//void showArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int sumaArray(int arr[], int size) {
//    int summa = 0;
//    for (int i = 0; i < size; i++)
//    {
//        summa += arr[i];
//    }
//    return summa;
//}
//void initMatrix(int arr[][7], int rows, int cols) {
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            arr[i][j] = rand() % 90 + 10;
//        }
//    }
//}
//
//void showMatrix(int arr[][7], int rows, int cols) {
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//
//
//void hello() {
//    cout << "hello" << endl;
//}




















void square(int n, int k);

void fac(int num);

void isSimple(int num);

int cub(int num);

void max(int a, int b);

bool isNeg(int num);




void fillArray(int arr[], int size);
void showArray(int arr[], int size);
void arif(int arr[], int size);





bool isLeap(int year);
int dateToDays(int day, int month, int year);
int dateDiff(int d1, int m1, int y1, int d2, int m2, int y2);





void findZero(int arr[], int size);
void findNeg(int arr[], int size);
void findPos(int arr[], int size);





void findMax(int arr[], int size);
void findMin(int arr[], int size);



void reverseArr(int arr[], int size);




int simpleArr(int arr[], int size);



int main()
{

    srand(time(0));

    //int a = 5;
    //if (a==5)
    //{
    //    int b = 3;
    //    cout << b;
    //}





    //const int rows = 5;
    //const int cols = 7;
    //int array[rows][cols];

    //initMatrix(array, rows, cols);
    //showMatrix(array, rows, cols);





       //const int size = 10;
       //int arr[size];

       //initArray(arr, size);
       //showArray(arr, size);
       //int suma = sumaArray(arr, size);
       //cout << "summ="<<suma << endl;




       //int a = 7, b = 3;
       //cout << "a=" << a << "b="<<b << endl;
       //change(7, 3);
       //cout << "a=" << a << "b=" << b << endl;
       /*int res=myPow(2, 3);
       cout << res;
       hello();
       star(7);
       anyLine('o', 7);

       cout << max(4,5);
       cout << min(9, 5);
       first();*/



































    //наперед вибачаюся за те що так розкидано код,мені самому важко тут щось знайти


       //1
          //square(3, 4);

       //2
       //fac(4);

       //3

       //isSimple(29);

       //4

       //cub(4);

       //5

      //max(2, 4);

      //6

      //isNeg(-9);


      //2.2

    //const int size = 10;
    //int arr[size];

    //fillArray(arr, size);
    //showArray(arr, size);
    //arif(arr, size);
//2.1

//int d1,m1,y1   ,d2,m2,y2;
//cout << "enter first date: " << endl;
//cin >> d1 >> m1 >> y1;
//
//
//
//cout << "enter second date: " << endl;
//cin >> d2 >> m2 >> y2;
//
//
//cout << "Difference = "
//<< dateDiff(d1, m1, y1, d2, m2, y2)
//<< " days";


//2.3


//const int size = 10;
//    int arr[size];
//
//    fillArray(arr, size);
//    showArray(arr, size);
//
//    findNeg(arr, size);
//    findPos(arr, size);
//    findZero(arr, size);




    //на 12.1

//const int size = 10;
//    int arr[size];
//
//    fillArray(arr, size);
//    showArray(arr, size);
//
//    findMax(arr, size);
//    findMin(arr, size);


    //12.2

    //const int size = 5;
    //int arr[size];

    //fillArray(arr, size);
    //showArray(arr, size);

    //reverseArr(arr, size);

    //showArray(arr, size);


//12.3
 
const int size = 10;
    int arr[size];

    fillArray(arr, size);
    showArray(arr, size);


     cout<<"count of simple numbers= "<<simpleArr(arr, size);



}
void square(int n, int k) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


void fac(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << "factorial=" << fact << endl;
}

void isSimple(int num) {
    bool simple = true;

    if (num < 2)
    {
        simple = false;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            simple = false;
            break;
        }
    }
    if (simple)
    {
        cout << "num is simple" << endl;
    }
    else
    {
        cout << "num is not simple" << endl;
    }
}


int cub(int num) {
    return num * num * num;
}

void max(int a, int b) {
    if (a > b)
    {
        cout << a << ">" << b << endl;
    }
    else if (b > a)
    {
        cout << b << ">" << a << endl;
    }
    else
    {
        cout << "error" << endl;
    }
}

bool isNeg(int num) {
    bool ret;
   
     if (num < 0)
    {
        cout << num << " is negative" << endl;
        return true;
    }
    else
    {
        cout <<num<< "is positive";
        return false;
    }
}


//2.2
void fillArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 21-10;
    }
}
void showArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void arif(int arr[], int size) {
    int arrayAr = 0;
    for (int i = 0; i < size; i++)
    {
        arrayAr += arr[i];
    }
    int equals = arrayAr / size;
    cout << "serednye arif= " << equals << endl;
}

//2.1


bool isLeap(int year)
{
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int dateToDays(int day, int month, int year)
{
    int days = 0;

   
    for (int i = 1; i < year; i++)
    {
        if (isLeap(i))
        {
            days += 366;
        }
        else
        {
            days += 365;
        }
    }

    int daysInMonth[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    if (isLeap(year))
    {
        daysInMonth[1] = 29;
    }

  
    for (int i = 0; i < month - 1; i++)
    {
        days += daysInMonth[i];
    }

    days += day;

    return days;
}


int dateDiff(int d1, int m1, int y1,
    int d2, int m2, int y2)
{
    int date1 = dateToDays(d1, m1, y1);
    int date2 = dateToDays(d2, m2, y2);

    if (date1 > date2)
    {
        return date1 - date2;
    }
    else
    {
        return date2 - date1;
    }
}



//2.3


//void fillArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 10;
//    }
//}
//void showArray(int arr[], int size) {
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}


void findPos(int arr[], int size) {
    int positive = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>0)
        {
            ++positive;
        }
    }
    cout << "there are " << positive << "positive"<<endl;
}

void findNeg(int arr[], int size) {
    int negative = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            ++negative;
        }
    }
    cout << "there are " << negative << "negative"<<endl;
        
}

void findZero(int arr[], int size) {
    int zero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
            ++zero;
        }
    }
    cout << "there are " << zero << "zeroes"<<endl;
}




//на 12.1

void findMax(int arr[], int size) {
    int max = arr[0];
    int maxInd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            maxInd = i;
        }
    }
   
    cout << "bigest number is:" << max << endl;
    cout << "its index: " << maxInd << endl;
}

void findMin(int arr[], int size) {
    int min = arr[0];
    int minInd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
            minInd = i;
        }
    }
   
    cout << "smallest number is:" << min << endl;
    cout << "its index: " << minInd << endl;
}


void reverseArr(int arr[], int size) {
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}


int simpleArr(int arr[],int size) {
int count=0;
for (int i = 0; i < size; i++)
    {
    bool simple = true;
    
    if (arr[i] < 2)
    {
        simple = false;
    }

    for (int j = 2; j < arr[i]; j++)
    {
        if (arr[i] % j == 0)
        {
            simple = false;
            break;
        }
    }
    
    if (simple)
    {
        count++;
    }
}
return count;

}



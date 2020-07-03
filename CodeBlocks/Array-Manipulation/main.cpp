#include <iostream>
#include <string>
#include <iomanip>
#include <ProcessEnv.h >
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include<stdio.h>
#include <vector>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int size1 = 0; //initialize the size of array 1 to 0 to know if it is still empty
	int size2 = 0;
	int size3 = 0;
	int arr1[5];
	int arr2[5];
	int arr3[5];

	int *sp1 = &size1; //pointer to size1
	int *ap1 = &arr1[0]; //pointer to array1

	int *sp2 = &size2;
	int *ap2 = &arr2[0];

	int *sp3 = &size3;
	int *ap3 = &arr3[0];
	int headers(int* arr1, int* arr2, int* size1, int* size2 ){




	//Header
	string str[10];
	int console_width = 120;
	int len;


	// Header Title Strings
	str[3]="Array Manipulation";
	str[1]="College of Technology";
	str[2]="Computer Engineering Department";
    //



	for(int x=0; x<5; x++) {
		len = str[x].length();
		if(len%2==0) str[x]+=" ";
		cout<<setw((console_width/2)+len/2)<<right<<str[x]<<endl;
	}


	cout<<"		Course Code: CpE 211						"<<endl;
	cout<<"		Course title: Object Oriented Program		"<<endl;
	cout<<"		Author: Deyb Monteclaro"<<endl;
	cout<<"		Lab1: Review of C++ Arrays & Strings"<<endl;
	cout<<"________________________________________________________________________________________________________________________";
    cout<<" "<<endl;

	//array display

	cout<<"		   	Array 1: ";

	if(*size1==0)
	{
		cout<<"No Value";
	}
	else
	{
		for(int a=0; a<*size1; a++)
		{
		cout<< "["<<arr1[a]<<"]";
		}
	}



	cout<<"\n";




	cout<<"			Array 2: ";
	if(*size2==0)
	{
		cout<<"No Value";
	}
	else
	{
		for(int a=0; a<*size2; a++)
		{
		cout<< "["<<arr2[a]<<"]";
		}
	}


	cout<<"\n";
	cout<<"			1) Create                                       "<<endl;
	cout<<"			2) Add                                            "<<endl;
	cout<<"			3) Delete                                    "<<endl;
	cout<<"			4) Merge                                   "<<endl;
	cout<<"			5) Exit                               "<<endl;


}


//start of Choice 1
int prob1(int* arr1, int* arr2, int* size1, int* size2 ) {

	int ch;

	Choice:
	cout<<"Create 2 Arrays \n";

    cout<<"Testing Memory1 : "<<size1<<endl;
    cout<<"Testing Memory1 : "<<&size1<<endl;
    cout<<"Testing Memory1 : "<<*size1<<endl;

	cout<<"Array 1:";
	if (*size1==0){
		cout<<"No Value";
	}
	else{
		for(int x=0; x<*size1; x++) {
		cout<< "["<<arr1[x]<<"]";

		}
	}

	cout<<"\n";
	cout<<"Array 2:";
		if (*size2==0){
		cout<<"No Value";
	}
	else{
		for(int x=0; x<*size2; x++) {
		cout<< "["<<arr2[x]<<"]";

		}
	}






	cout<<"\n";
	cout<<"Enter [1] for array 1\nEnter [2] for array 2\nEnter [3] to go back to main\nChoice:";
	cin>>ch;
	system("cls");


	if (ch<1||ch>3){
			cout<<"Wrong choice";
			system("cls");
			goto Choice;
	}

	else if(ch==1){
		cout<<endl<<"Enter the desired number of elements for array 1: ";
		cin>>*size1;


		for (int x=0; x<*size1; x++) {
		cout<<"Array 1 Element[";
		cout<<x<<"]: ";
		cin>>arr1[x];
		}

		system("cls");

		cout<<"The array 1 is: \n";
		for(int x=0; x<*size1; x++) {
		cout<< "["<<arr1[x]<<"]";

		}
		cout<<"\n";
		system("pause");
		system("cls");
		goto Choice;
		}
	else if(ch==2){

		cout<<"Enter the desired number of elements for array 1: ";
		cin>>*size2;


		for (int x=0; x<*size2; x++) {

		cout<<"Array 2 Element[";
		cout<<x<<"]: ";
		cin>>arr2[x];

		}

		cout<<"The array 2 is: \n";
		for(int x=0; x<*size2; x++) {
		cout<< "["<<arr2[x]<<"]";
		}
		cout<<"\n";
		system("pause");
		system("cls");
		goto Choice;
		}


	else if(ch==3)
	{
		return 0;
	}







	}





int prob2(int* arr1, int* arr2, int* size1, int* size2)

{
	int pos1;
	int pos2;
	int ch;
	int num1;
	int num2;



	Choice:
	cout<<"Insert Element in Array"<<endl;
	cout<<"Array 1:";
	if (*size1==0){
		cout<<"No Value";
	}
	else{
		for(int x=0; x<*size1; x++) {
		cout<< "["<<arr1[x]<<"]";

		}
	}

	cout<<"\n";
	cout<<"Array 2:";
		if (*size2==0){
		cout<<"No Value";
	}
	else{
		for(int x=0; x<*size2; x++) {
		cout<< "["<<arr2[x]<<"]";

		}
	}
	cout<<" \n";


	cout<<"[1] to insert in Array 1 "<<endl;
	cout<<"[2] to insert in Array 2 "<<endl;
	cout<<"[3] to go back to main menu"<<endl;
	cout<<"Your choice: ";
	//

	cin>>ch;
	system("cls");


	if (ch<1||ch>3){
			cout<<"Wrong choice";
			system("cls");
			goto Choice;
	}

	else if(ch==1){
		cout<<endl<<"Enter the element position to insert in array 1: ";
		cin>>pos1;


		cout<<endl<<"Enter the desired number: ";
		cin>>num1;

		(*size1)++;
		cout<<"new size "<<*size1<<endl;
		int newarr1[*size1];



	//putting space in array
	for(int x= 0; x<pos1; x++){
		newarr1[x]= arr1[x];
	}

	//copy the elements from first array
	for(int x=pos1+1; x<(*size1)+1; x++ ){
		newarr1[x]= arr1[x-1];
	}

	//pointing elemnet of array change
	newarr1[pos1] = num1;

	for(int x=0; x<*size1; x++)
	{
		arr1[x] = newarr1[x];
	}


		cout<<"\n";
		system("pause");
		system("cls");
		goto Choice;
		}
	else if(ch==2){

		cout<<endl<<"Enter the element position to insert in array 2: ";
		cin>>pos2;


		cout<<endl<<"Enter the desired number: ";
		cin>>num2;

		(*size2)++;
		cout<<"new size "<<*size2<<endl;
		int newarr2[*size2];



	//putting space in array
	for(int x= 0; x<pos2; x++){
		newarr2[x]= arr2[x];
	}

	//copy the elements from first array
	for(int x=pos2+1; x<(*size2)+1; x++ ){
		newarr2[x]= arr2[x-1];
	}

	//pointing elemnet of array change
	newarr2[pos2] = num2;

	for(int x=0; x<*size2; x++)
	{
		arr2[x] = newarr2[x];
	}


		cout<<"\n";
		system("pause");
		system("cls");
		goto Choice;
		}


	else if(ch==3)
	{
		return 0;
	}




}


int prob3(int* arr1, int* arr2, int* size1, int* size2)

{
	int pos1;
	int pos2;
	int ch;
	int num1;
	int num2;



	Choice:
	cout<<"Delete Element in Array"<<endl;
	cout<<"Array 1:";
	if (*size1==0){
		cout<<"No Value";
	}
	else{
		for(int x=0; x<*size1; x++) {
		cout<< "["<<arr1[x]<<"]";

		}
	}

	cout<<"\n";
	cout<<"Array 2:";
		if (*size2==0){
		cout<<"No Value";
	}
	else{
		for(int x=0; x<*size2; x++) {
		cout<< "["<<arr2[x]<<"]";

		}
	}
	cout<<" \n";


	cout<<"[1] to delete in Array 1 "<<endl;
	cout<<"[2] to delete in Array 2 "<<endl;
	cout<<"[3] to go back to main menu"<<endl;
	cout<<"Your choice: ";
	//

	cin>>ch;
	system("cls");


	if (ch<1||ch>3){
			cout<<"Wrong choice";
			system("cls");
			goto Choice;
	}

	else if(ch==1){





	cout<<endl<<"Enter what element number to delete: ";
	cin>>pos1;

	int newarr1[(*size1)-1];


	//

	//deleting space in array
	for(int x=0; x<pos1; x++){
		newarr1[x]= arr1[x];
	}

	//copy the elements from first array
	for(int x=pos1; x<(*size1)-1; x++ ){
		newarr1[x]= arr1[x+1];
	}


	(*size1)--;

	for(int x=0; x<*size1; x++)
	{
		arr1[x] = newarr1[x];
	}


		cout<<"\n";
		system("pause");
		system("cls");
		goto Choice;
		}
	else if(ch==2){

		//
		cout<<endl<<"Enter what element number to delete: ";
	cin>>pos2;

	int newarr2[(*size2)-1];


	//

	//deleting space in array
	for(int x=0; x<pos2; x++){
		newarr2[x]= arr2[x];
	}

	//copy the elements from first array
	for(int x=pos2; x<(*size2)-1; x++ ){
		newarr2[x]= arr2[x+1];
	}


	(*size2)--;

	for(int x=0; x<*size2; x++)
	{
		arr2[x] = newarr2[x];
	}


		cout<<"\n";
		system("pause");
		system("cls");
		goto Choice;


}


	else if(ch==3)
	{
		return 0;
	}




}

int prob4(int* arr1, int* arr2,int* arr3, int* size1, int* size2, int* size3)

{
	int pos1;
	int pos2;
	int ch;
	int num1;
	int num2;




	Choice:
	cout<<"Merge Two Arrays"<<endl;
	cout<<"Array 1:";
	if (*size1==0){
		cout<<"No Value";
	}
	else{
		for(int x=0; x<*size1; x++) {
		cout<< "["<<arr1[x]<<"]";

		}
	}

	cout<<"\n";
	cout<<"Array 2:";
		if (*size2==0){
		cout<<"No Value";
	}
	else{
		for(int x=0; x<*size2; x++) {
		cout<< "["<<arr2[x]<<"]";

		}
	}
	cout<<" \n";
		cout<<"Merge Array:";
		if (*size3==0){
		cout<<"No Value";
	}
	else{
		for(int x=0; x<*size3; x++) {
		cout<< "["<<arr3[x]<<"]";

		}
	}
	cout<<" \n";


	cout<<"[1] Merge Array 1 to Array 2"<<endl;
	cout<<"[2] Merge Array 2 to Array 1 "<<endl;
	cout<<"[3] to go back to main menu"<<endl;
	cout<<"Your choice: ";
	//

	cin>>ch;
	system("cls");


	if (ch<1||ch>3){
			cout<<"Wrong choice";
			system("cls");
			goto Choice;
	}

	else if(ch==1){

		*size3 = (*size1)+(*size2);

		for(int x=0; x<*s2; x++)
		{
			arr3[x] = arr2[x];
		}

		for(int x=0; x<*s1; x++)
		{
			arr3[(*s2)+x] = arr1[x];
		}

		cout<<"\n";
		system("pause");
		system("cls");
		goto Choice;
		}
	else if(ch==2){

	*size3 = (*size1)+(*size2);

		for(int x=0; x<*s1; x++)
		{
			arr3[x] = arr1[x];
		}

		for(int x=0; x<*s2; x++)
		{
			arr3[(*s1)+x] = arr2[x];
		}


		cout<<"\n";
		system("pause");
		system("cls");
		goto Choice;
		}


	else if(ch==3)
	{
		return 0;
	}




}

int main() {




	headers(ap1, ap2, s1, s2);

	int choice;
	bool ok=false;
	while(!ok) {

		cout<<"\n\nEnter Choice: ";
		cin>>choice;

		if(!(cin.good())||choice<1||choice>10) {

			cout<<"\nInvalid! Please Try Again"<<endl;
			cin.clear();
			cin.ignore(INT_MAX,'\n');
			system("pause");
			system("cls");
			main();
		} else
			ok=true;
		system("cls");
	}

	switch(choice) {
		case(1):
			prob1(ap1,ap2,s1,s2);
			system ("Pause");
			system ("cls");
			main();
		case(2):
			prob2(ap1,ap2,s1,s2);
			system ("Pause");
			system ("cls");
			main();
		case(3):
			prob3(ap1,ap2,s1,s2);
			system ("Pause");
			system ("cls");
			main();
		case(4):
			prob4(ap1,ap2,ap3,s1,s2,s3);
			system ("Pause");
			system ("cls");
			main();

	}
	return 0;
}





#ifndef PRODUCT_MANAGER_H
#define PRODUCT_MANAGER_H
#include "Model.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Product_Manager 
{
    private :
	      static string manager_name ;
		  static string manager_password ;
		  Product_Manager(){}
 
    public:
	      /******************* Get Instance *********************/
	      static Product_Manager& get_Instance();
		  static void Read(istream& input);
		  static void set_name_pass(string,string);
		  void save(ostream& output_save);
		  /******************* check name and password *********************/
		  static bool   check_name_pass(string,string);
		  /******************* Change Name/Pass *********************/
		  void   change_name(string);
		  void   change_pass(string);
		  /******************* Instance Arm *********************/
		  void   Instance_new_Arm(string, string, string, string, double, double,double);
		  /******************* Instance Torso *********************/
		  void   Instance_new_Torso(string, string, string, string, double, double, int, int);
		  /******************* Instance Locomotor *********************/
		  void   Instance_new_Locomotor(string, string, string, string, double,double, double, double);
		  /******************* Instance Head *********************/
		  void   Instance_new_Head(string, string, string, string, double, double,double);
		  /******************* Instance Battery *********************/
		  void   Instance_new_Battery(string, string,string,string, double,double, double, double);
		  /******************* Instance Model *********************/
		  void   Instance_new_model(string,string);
		  /******************* Add Components to model *********************/
		  void   Model_Add_component(int ,int);
		  /******************* Push Component/Model *********************/
		  void   push_component(Robot_Part*);
		  void   push_Model(Robot_model*);
		  /******************* Pull Component/Model *********************/
		  void   pull_component(int component_index);
		  void   pull_Model(int Model_index);
		  /******************* Print Catalogs ********************/
		  string   Print_Catalog_Components(int Type);
		  string   Print_Catalog_model();
		  string Get_PM_name(){ return(manager_name);}
          
 
};


#endif 

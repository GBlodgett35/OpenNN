/****************************************************************************************************************/
/*                                                                                                              */
/*   OpenNN: Open Neural Networks Library                                                                       */
/*   www.opennn.net                                                                                             */
/*                                                                                                              */
/*   V A R I A B L E S   T E S T   C L A S S   H E A D E R                                                      */
/*                                                                                                              */ 
 
/*   Artificial Intelligence Techniques SL                                                                      */
/*   artelnics@artelnics.com                                                                                    */
/*                                                                                                              */
/****************************************************************************************************************/

#ifndef __VARIABLESTEST_H__
#define __VARIABLESTEST_H__

// Unit testing includes

#include "unit_testing.h"

using namespace OpenNN;

class VariablesTest : public UnitTesting
{

#define STRING(x) #x
#define TOSTRING(x) STRING(x)
#define LOG __FILE__ ":" TOSTRING(__LINE__)"\n"

public:  

   // GENERAL CONSTRUCTOR

   explicit VariablesTest();

   // DESTRUCTOR

   virtual ~VariablesTest();

    // METHODS

   // Constructor and destructor methods

   void test_constructor();
   void test_destructor();

   // Assignment operators methods

   void test_assignment_operator();

   // Get methods

   void test_get_variables_number();

   // Variables methods

   void test_get_inputs_number();
   void test_get_targets_number();

   void test_get_inputs_indices();
   void test_get_targets_indices();
   void test_get_used_indices();

   // Information methods 

   void test_get_names();
   void test_get_name();

   void test_get_inputs_name();
   void test_get_targets_name();

   void test_get_units();
   void test_get_unit();

   void test_get_inputs_units();
   void test_get_targets_units();

   void test_get_descriptions();
   void test_get_description();

   void test_get_inputs_description();
   void test_get_target_descriptions();

   void test_get_information();

   void test_get_display();

   // Set methods

   void test_set();

   void test_set_variables_number();

   // Variables methods

   void test_set_input();
   void test_set_target();

   // Information methods

   void test_set_names();
   void test_set_name();

   void test_set_units();
   void test_set_unit();

   void test_set_descriptions();
   void test_set_description();

   void test_set_display();

   void test_convert_time_series();

   // Serialization methods

   void test_to_XML();
   void test_from_XML();

   // Unit testing methods

   void run_test_case();
};

#endif


// OpenNN: Open Neural Networks Library.
// Copyright (C) 2005-2018 Artificial Intelligence Techniques, SL.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

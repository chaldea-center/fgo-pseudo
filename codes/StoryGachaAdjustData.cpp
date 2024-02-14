void __fastcall StoryGachaAdjustData___ctor(StoryGachaAdjustData_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.targetEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.adjustIds = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.adjustIds, 0LL, v9, v10, v11, v12, v13, v14);
}
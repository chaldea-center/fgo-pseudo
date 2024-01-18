void __fastcall SkillValueUpApplierBase___ctor(
        SkillValueUpApplierBase_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall SkillValueUpApplierBase__Init(SkillValueUpApplierBase_o *this, const MethodInfo *method)
{
  ;
}
void __fastcall FunctionCategoryEntity___ctor(FunctionCategoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB0AF & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BB0AF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FunctionCategoryEntity__CreatePrimaryKey(FunctionCategoryEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall FunctionCategoryEntity__GetGroupType(FunctionCategoryEntity_o *this, const MethodInfo *method)
{
  return this->fields.groupType;
}


bool __fastcall FunctionCategoryEntity__HasFlag(
        FunctionCategoryEntity_o *this,
        int32_t typeFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}
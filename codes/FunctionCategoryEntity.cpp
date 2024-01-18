void __fastcall FunctionCategoryEntity___ctor(FunctionCategoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A4ED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418A4ED = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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
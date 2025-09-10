void FunctionCategoryEntity___ctor(FunctionCategoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27529 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27529 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t FunctionCategoryEntity__CreatePrimaryKey(FunctionCategoryEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t FunctionCategoryEntity__GetGroupType(FunctionCategoryEntity_o *this, const MethodInfo *method)
{
  return this->fields.groupType;
}


bool FunctionCategoryEntity__HasFlag(FunctionCategoryEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}
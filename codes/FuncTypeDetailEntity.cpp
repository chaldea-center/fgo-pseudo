void FuncTypeDetailEntity___ctor(FuncTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E05CC0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_int___ctor__);
    byte_4E05CC0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_34E6B24 *)Method_DataEntityBase_int___ctor__);
}


int32_t FuncTypeDetailEntity__CreatePrimaryKey(FuncTypeDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.funcType;
}
void __fastcall FuncTypeDetailEntity___ctor(FuncTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C230E3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C230E3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FuncTypeDetailEntity__CreatePrimaryKey(FuncTypeDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.funcType;
}
void __fastcall FuncDispEntity___ctor(FuncDispEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE8BD & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_int___ctor__, method);
    byte_4BFE8BD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3278C9C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FuncDispEntity__CreatePrimaryKey(FuncDispEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}
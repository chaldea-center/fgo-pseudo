void __fastcall FuncDispEntity___ctor(FuncDispEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD682 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDD682 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FuncDispEntity__CreatePrimaryKey(FuncDispEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}
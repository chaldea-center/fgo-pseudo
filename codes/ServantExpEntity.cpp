void __fastcall ServantExpEntity___ctor(ServantExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2EE1 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2EE1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantExpEntity__CreatePK(int32_t type, int32_t lv, const MethodInfo *method)
{
  if ( (byte_42B2EE0 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2EE0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           type,
           lv,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantExpEntity__CreatePrimaryKey(ServantExpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantExpEntity__CreatePK(this->fields.type, this->fields.lv, v2);
}
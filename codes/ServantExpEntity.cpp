void __fastcall ServantExpEntity___ctor(ServantExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E930 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438E930 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantExpEntity__CreatePK(int32_t type, int32_t lv, const MethodInfo *method)
{
  if ( (byte_438E92F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438E92F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           type,
           lv,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantExpEntity__CreatePrimaryKey(ServantExpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantExpEntity__CreatePK(this->fields.type, this->fields.lv, v2);
}
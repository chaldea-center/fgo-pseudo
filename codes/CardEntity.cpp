void __fastcall CardEntity___ctor(CardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E3FB & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438E3FB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CardEntity__CreatePK(int32_t id, int32_t num, const MethodInfo *method)
{
  if ( (byte_438E3FA & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438E3FA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           num,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CardEntity__CreatePrimaryKey(CardEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CardEntity__CreatePK(this->fields.id, this->fields.num, v2);
}
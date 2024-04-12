void __fastcall GachaSubEntity___ctor(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B44 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B3B44 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaSubEntity__CreatePK(int32_t gachaId, int32_t id, const MethodInfo *method)
{
  if ( (byte_42B3B43 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B3B43 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           id,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaSubEntity__CreatePrimaryKey(GachaSubEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaSubEntity__CreatePK(this->fields.gachaId, this->fields.id, v2);
}
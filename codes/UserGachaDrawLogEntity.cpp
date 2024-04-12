void __fastcall UserGachaDrawLogEntity___ctor(UserGachaDrawLogEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF16 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AEF16 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserGachaDrawLogEntity__CreatePK(
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  if ( (byte_42AEF15 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__long___);
    byte_42AEF15 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__long_(
           gachaId,
           idx,
           drawAt,
           (const MethodInfo_1A4E420 *)Method_DataEntityBase_CreateMultiplePK_int__int__long___);
}


System_String_o *__fastcall UserGachaDrawLogEntity__CreatePrimaryKey(
        UserGachaDrawLogEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserGachaDrawLogEntity__CreatePK(this->fields.gachaId, this->fields.idx, this->fields.drawAt, v2);
}
void __fastcall UserGachaDrawLogEntity___ctor(UserGachaDrawLogEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186FB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186FB9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserGachaDrawLogEntity__CreatePK(
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  if ( (byte_4186FB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__long___, *(_QWORD *)&idx);
    byte_4186FB8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__long_(
           gachaId,
           idx,
           drawAt,
           (const MethodInfo_1732DD8 *)Method_DataEntityBase_CreateMultiplePK_int__int__long___);
}


System_String_o *__fastcall UserGachaDrawLogEntity__CreatePrimaryKey(
        UserGachaDrawLogEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserGachaDrawLogEntity__CreatePK(this->fields.gachaId, this->fields.idx, this->fields.drawAt, v2);
}
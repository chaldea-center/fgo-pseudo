void __fastcall UserGachaDrawLogEntity___ctor(UserGachaDrawLogEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE5F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BE5F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserGachaDrawLogEntity__CreatePK(
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  if ( (byte_4A5BE5E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__long___);
    byte_4A5BE5E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__long_(
           gachaId,
           idx,
           drawAt,
           (const MethodInfo_2E7E050 *)Method_DataEntityBase_CreateMultiplePK_int__int__long___);
}


System_String_o *__fastcall UserGachaDrawLogEntity__CreatePrimaryKey(
        UserGachaDrawLogEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserGachaDrawLogEntity__CreatePK(this->fields.gachaId, this->fields.idx, this->fields.drawAt, v2);
}
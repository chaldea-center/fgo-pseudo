void UserGachaDrawLogEntity___ctor(UserGachaDrawLogEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E058CC & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_string___ctor__);
    byte_4E058CC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_34E6B9C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserGachaDrawLogEntity__CreatePK(
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  if ( (byte_4E058CB & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_CreateMultiplePK_int__int__long___);
    byte_4E058CB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__long_(
           gachaId,
           idx,
           drawAt,
           (const MethodInfo_3202A54 *)Method_DataEntityBase_CreateMultiplePK_int__int__long___);
}


System_String_o *UserGachaDrawLogEntity__CreatePrimaryKey(UserGachaDrawLogEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserGachaDrawLogEntity__CreatePK(this->fields.gachaId, this->fields.idx, this->fields.drawAt, v2);
}
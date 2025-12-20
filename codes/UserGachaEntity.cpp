void UserGachaEntity___ctor(UserGachaEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D73E & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D73E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserGachaEntity__CreatePK(int64_t userId, int32_t gachaId, const MethodInfo *method)
{
  if ( (byte_4D2D73D & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4D2D73D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           gachaId,
           (const MethodInfo_319A3C4 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserGachaEntity__CreatePrimaryKey(UserGachaEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserGachaEntity__CreatePK(this->fields.userId, this->fields.gachaId, v2);
}


bool UserGachaEntity__HasStatus(UserGachaEntity_o *this, int32_t statusFlag, const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}
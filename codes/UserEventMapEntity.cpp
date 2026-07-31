void UserEventMapEntity___ctor(UserEventMapEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939507 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939507 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventMapEntity__CreatePK(int64_t userId, int32_t eventId, int32_t mapId, const MethodInfo *method)
{
  if ( (byte_5939506 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_5939506 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           mapId,
           (const MethodInfo_38215B8 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventMapEntity__CreatePrimaryKey(UserEventMapEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventMapEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.mapId, v2);
}
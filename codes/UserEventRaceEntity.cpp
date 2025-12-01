void UserEventRaceEntity___ctor(UserEventRaceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC823E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC823E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventRaceEntity__CreatePK(
        int64_t userId,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  if ( (byte_4CC823D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4CC823D = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           eventId,
           termId,
           (const MethodInfo_31498E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserEventRaceEntity__CreatePrimaryKey(UserEventRaceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserEventRaceEntity__CreatePK(this->fields.userId, this->fields.eventId, this->fields.termId, v2);
}
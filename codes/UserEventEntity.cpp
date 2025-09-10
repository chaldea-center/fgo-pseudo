void UserEventEntity___ctor(UserEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C280A1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C280A1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


void UserEventEntity___ctor_42802256(
        UserEventEntity_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4C280A2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C280A2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.updatedAt = 0;
  *(_QWORD *)&this->fields.tutorial = 0;
  *(_QWORD *)&this->fields.value = 0;
  HIDWORD(this->fields.tutorial2) = 0;
}


System_String_o *UserEventEntity__CreatePK(int64_t userId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C280A0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4C280A0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           eventId,
           (const MethodInfo_30CCBE0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserEventEntity__CreatePrimaryKey(UserEventEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventEntity__CreatePK(this->fields.userId, this->fields.eventId, v2);
}


bool UserEventEntity__getEventFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  return ((unsigned int)this->fields.flag >> flagId) & 1;
}


bool UserEventEntity__getEventFlag_42802448(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  return ((unsigned int)this->fields.flag >> flagId) & 1;
}


bool UserEventEntity__getEventFlag_42802464(UserEventEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool UserEventEntity__getScriptFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  return ((unsigned int)this->fields.scriptFlag >> flagId) & 1;
}


bool UserEventEntity__getTutorialFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (unsigned int)(flagId - 1) <= 0x3F )
  {
    LODWORD(this) = ((unsigned int)this->fields.tutorial >> flagId) & 1;
  }
  else if ( flagId >= 65 )
  {
    return ((unsigned __int64)this->fields.tutorial2 >> flagId) & 1;
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (char)this;
}


int64_t UserEventEntity__getUpdatedAt(UserEventEntity_o *this, const MethodInfo *method)
{
  return this->fields.updatedAt;
}
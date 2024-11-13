void __fastcall UserEventEntity___ctor(UserEventEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16E5C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserEventEntity___ctor_40808560(
        UserEventEntity_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4B16E5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, userId, *(_QWORD *)&eventId);
    byte_4B16E5D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.updatedAt = 0LL;
  *(_QWORD *)&this->fields.tutorial = 0LL;
  *(_QWORD *)&this->fields.value = 0LL;
  HIDWORD(this->fields.tutorial2) = 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventEntity__CreatePK(int64_t userId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4B16E5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&eventId, method);
    byte_4B16E5B = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           eventId,
           (const MethodInfo_2F10FBC *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventEntity__CreatePrimaryKey(UserEventEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventEntity__CreatePK(this->fields.userId, this->fields.eventId, v2);
}


bool __fastcall UserEventEntity__getEventFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  return ((unsigned int)this->fields.flag >> flagId) & 1;
}


bool __fastcall UserEventEntity__getEventFlag_40808752(
        UserEventEntity_o *this,
        int32_t flagId,
        const MethodInfo *method)
{
  return ((unsigned int)this->fields.flag >> flagId) & 1;
}


bool __fastcall UserEventEntity__getEventFlag_40808768(UserEventEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall UserEventEntity__getScriptFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  return ((unsigned int)this->fields.scriptFlag >> flagId) & 1;
}


bool __fastcall UserEventEntity__getTutorialFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
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


int64_t __fastcall UserEventEntity__getUpdatedAt(UserEventEntity_o *this, const MethodInfo *method)
{
  return this->fields.updatedAt;
}
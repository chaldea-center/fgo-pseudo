void __fastcall UserEventEntity___ctor(UserEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188B4F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188B4F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventEntity___ctor_27008216(
        UserEventEntity_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_4188B50 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, userId);
    byte_4188B50 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
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
  if ( (byte_4188B4E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&eventId);
    byte_4188B4E = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           eventId,
           (const MethodInfo_1732A38 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserEventEntity__CreatePrimaryKey(UserEventEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserEventEntity__CreatePK(this->fields.userId, this->fields.eventId, v2);
}


bool __fastcall UserEventEntity__getEventFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  return (this->fields.flag & (1 << flagId)) != 0;
}


bool __fastcall UserEventEntity__getEventFlag_27008432(
        UserEventEntity_o *this,
        int32_t flagId,
        const MethodInfo *method)
{
  return (this->fields.flag & (1 << flagId)) != 0;
}


bool __fastcall UserEventEntity__getEventFlag_27008456(UserEventEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall UserEventEntity__getScriptFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  return (this->fields.scriptFlag & (1 << flagId)) != 0;
}


bool __fastcall UserEventEntity__getTutorialFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  bool v3; // zf

  if ( (unsigned int)(flagId - 1) > 0x3F )
  {
    if ( flagId < 65 )
      return 0;
    v3 = (this->fields.tutorial2 & (1LL << flagId)) == 0;
  }
  else
  {
    v3 = (this->fields.tutorial & (1 << flagId)) == 0;
  }
  return !v3;
}


int64_t __fastcall UserEventEntity__getUpdatedAt(UserEventEntity_o *this, const MethodInfo *method)
{
  return this->fields.updatedAt;
}
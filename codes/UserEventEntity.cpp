void __fastcall UserEventEntity___ctor(UserEventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB71 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FAB71 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall UserEventEntity___ctor_26571108(
        UserEventEntity_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_40FAB72 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, userId);
    byte_40FAB72 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  this->fields.userId = userId;
  this->fields.eventId = eventId;
  this->fields.value = 0;
  *(_QWORD *)&this->fields.flag = 0LL;
  this->fields.updatedAt = 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserEventEntity__CreatePK(int64_t userId, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_40FAB70 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&eventId);
    byte_40FAB70 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           eventId,
           (const MethodInfo_18C22D0 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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


bool __fastcall UserEventEntity__getEventFlag_26571268(
        UserEventEntity_o *this,
        int32_t flagId,
        const MethodInfo *method)
{
  return (this->fields.flag & (1 << flagId)) != 0;
}


bool __fastcall UserEventEntity__getEventFlag_26571292(UserEventEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall UserEventEntity__getScriptFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  return (this->fields.scriptFlag & (1 << flagId)) != 0;
}


bool __fastcall UserEventEntity__getTutorialFlag(UserEventEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  return (this->fields.tutorial & (1 << flagId)) != 0;
}


int64_t __fastcall UserEventEntity__getUpdatedAt(UserEventEntity_o *this, const MethodInfo *method)
{
  return this->fields.updatedAt;
}
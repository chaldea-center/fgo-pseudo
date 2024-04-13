void __fastcall EventConquestRewardEntity___ctor(EventConquestRewardEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB159 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB159 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  this->fields.objectNum = 0;
  *(_OWORD *)&this->fields.eventId = xmmword_32B44B0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventConquestRewardEntity__CreatePK(
        int32_t eventId,
        int32_t questId,
        int32_t objectType,
        int32_t objectId,
        const MethodInfo *method)
{
  if ( (byte_42EB15A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, questId, objectType, *(_QWORD *)&objectId);
    byte_42EB15A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           questId,
           objectType,
           objectId,
           (const MethodInfo_1AE38D8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventConquestRewardEntity__CreatePrimaryKey(
        EventConquestRewardEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventConquestRewardEntity__CreatePK(
           this->fields.eventId,
           this->fields.questId,
           this->fields.objectType,
           this->fields.objectId,
           v2);
}


int32_t __fastcall EventConquestRewardEntity__GetEventId(EventConquestRewardEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}
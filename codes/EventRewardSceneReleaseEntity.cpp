void __fastcall EventRewardSceneReleaseEntity___ctor(EventRewardSceneReleaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC002 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC002 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardSceneReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        const MethodInfo *method)
{
  if ( (byte_42EC001 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, slot, condType, method);
    byte_42EC001 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           slot,
           condType,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventRewardSceneReleaseEntity__CreatePrimaryKey(
        EventRewardSceneReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventRewardSceneReleaseEntity__CreatePK(this->fields.eventId, this->fields.slot, this->fields.condType, v2);
}
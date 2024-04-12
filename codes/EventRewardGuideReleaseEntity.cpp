void __fastcall EventRewardGuideReleaseEntity___ctor(EventRewardGuideReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42ACB22 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42ACB22 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventRewardGuideReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_42ACB20 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_42ACB20 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           slot,
           condType,
           condTargetId,
           (const MethodInfo_1A4E810 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventRewardGuideReleaseEntity__CreatePrimaryKey(
        EventRewardGuideReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventRewardGuideReleaseEntity__CreatePK(
           this->fields.eventId,
           this->fields.slot,
           this->fields.condType,
           this->fields.condTargetId,
           v2);
}


System_Int32_array *__fastcall EventRewardGuideReleaseEntity__GetGuideImageIds(
        EventRewardGuideReleaseEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.guideImageIds;
}


bool __fastcall EventRewardGuideReleaseEntity__GetIsReleased(
        EventRewardGuideReleaseEntity_o *this,
        const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condValue; // x19

  if ( (byte_42ACB21 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42ACB21 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condValue = this->fields.condValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condValue, 0, 0LL);
}
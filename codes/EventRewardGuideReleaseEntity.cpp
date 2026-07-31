void EventRewardGuideReleaseEntity___ctor(EventRewardGuideReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59388B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59388B3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventRewardGuideReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t slot,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  if ( (byte_59388B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_59388B2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           slot,
           condType,
           condTargetId,
           (const MethodInfo_38218C0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *EventRewardGuideReleaseEntity__CreatePrimaryKey(
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


System_Int32_array *EventRewardGuideReleaseEntity__GetImageIds(
        EventRewardGuideReleaseEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  System_Int32_array *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_59388B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_59388B0 = 1;
  }
  result = this->fields.guideImageIds;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
      v7 = sub_2237AF8(v2);
    if ( !*(_DWORD *)(v7 + 228) )
      *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v7, method);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_2237AF8(v2);
    return **(System_Int32_array ***)(v8 + 184);
  }
  return result;
}


bool EventRewardGuideReleaseEntity__GetIsReleased(EventRewardGuideReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condTargetId; // w21
  int64_t condValue; // x19

  if ( (byte_59388AF & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_59388AF = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condValue = this->fields.condValue;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condTargetId, condValue, 0, 0, 0);
}


System_Int32_array *EventRewardGuideReleaseEntity__GetLimitCounts(
        EventRewardGuideReleaseEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  System_Int32_array *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_59388B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_59388B1 = 1;
  }
  result = this->fields.guideLimitCounts;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
      v7 = sub_2237AF8(v2);
    if ( !*(_DWORD *)(v7 + 228) )
      *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v7, method);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_2237AF8(v2);
    return **(System_Int32_array ***)(v8 + 184);
  }
  return result;
}
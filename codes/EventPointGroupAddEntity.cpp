void __fastcall EventPointGroupAddEntity___ctor(EventPointGroupAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0598 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B0598 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventPointGroupAddEntity__CreatePK(
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42B0596 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_42B0596 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           termId,
           groupId,
           priority,
           (const MethodInfo_1A4E810 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventPointGroupAddEntity__CreatePrimaryKey(
        EventPointGroupAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventPointGroupAddEntity__CreatePK(
           this->fields.eventId,
           this->fields.termId,
           this->fields.groupId,
           this->fields.priority,
           v2);
}


bool __fastcall EventPointGroupAddEntity__IsAvailable(EventPointGroupAddEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_42B0597 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42B0597 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
}
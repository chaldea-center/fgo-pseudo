void __fastcall EventPointGroupAddEntity___ctor(EventPointGroupAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FAC1E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FAC1E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointGroupAddEntity__CreatePK(
        int32_t eventId,
        int32_t termId,
        int32_t groupId,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_40FAC1C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&termId);
    byte_40FAC1C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           termId,
           groupId,
           priority,
           (const MethodInfo_18C2910 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_40FAC1D & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40FAC1D = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
}
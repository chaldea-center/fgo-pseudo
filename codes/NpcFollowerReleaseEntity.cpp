void __fastcall NpcFollowerReleaseEntity___ctor(NpcFollowerReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F7F28 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F7F28 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall NpcFollowerReleaseEntity__CreatePK(
        int64_t id,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  if ( (byte_40F7F26 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId);
    byte_40F7F26 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           id,
           questId,
           questPhase,
           (const MethodInfo_18C2718 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall NpcFollowerReleaseEntity__CreatePrimaryKey(
        NpcFollowerReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return NpcFollowerReleaseEntity__CreatePK(this->fields.id, this->fields.questId, this->fields.questPhase, v2);
}


int32_t __fastcall NpcFollowerReleaseEntity__GetCondType(NpcFollowerReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool __fastcall NpcFollowerReleaseEntity__IsEnable(NpcFollowerReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condValue; // x19

  if ( (byte_40F7F27 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40F7F27 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condValue = this->fields.condValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condValue, 0, 0LL);
}
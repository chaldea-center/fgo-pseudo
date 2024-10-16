void __fastcall BlankEarthGimmickAddEntity___ctor(BlankEarthGimmickAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5A0C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5A0C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BlankEarthGimmickAddEntity__CreatePK(
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  if ( (byte_4AB5A0A & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&priority);
    byte_4AB5A0A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           blankEarthSpotId,
           priority,
           overwriteType,
           (const MethodInfo_2EC2A28 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BlankEarthGimmickAddEntity__CreatePrimaryKey(
        BlankEarthGimmickAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BlankEarthGimmickAddEntity__CreatePK(
           this->fields.gimmickId,
           this->fields.priority,
           this->fields.overwriteType,
           v2);
}


int32_t __fastcall BlankEarthGimmickAddEntity__GetCondType(
        BlankEarthGimmickAddEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.condTargetType;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarthGimmickAddEntity__IsOpen(
        BlankEarthGimmickAddEntity_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condTargetType; // w23
  int64_t condNum; // x21

  if ( (byte_4AB5A0B & 1) == 0 )
  {
    sub_1BAB41C(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4AB5A0B = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenExcludeBeforeClearQuest(
           condTargetType,
           condTargetId,
           condNum,
           beforeClearQuestId,
           isCheckResetFlag,
           0LL);
}
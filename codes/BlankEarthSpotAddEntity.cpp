void __fastcall BlankEarthSpotAddEntity___ctor(BlankEarthSpotAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE1DA & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE1DA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BlankEarthSpotAddEntity__CreatePK(
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  if ( (byte_49FE1D9 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&priority);
    byte_49FE1D9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           blankEarthSpotId,
           priority,
           overwriteType,
           (const MethodInfo_2E39D7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall BlankEarthSpotAddEntity__CreatePrimaryKey(
        BlankEarthSpotAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BlankEarthSpotAddEntity__CreatePK(
           this->fields.blankEarthSpotId,
           this->fields.priority,
           this->fields.overwriteType,
           v2);
}


int32_t __fastcall BlankEarthSpotAddEntity__GetCondType(BlankEarthSpotAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarthSpotAddEntity__IsOpen(
        BlankEarthSpotAddEntity_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condType; // w23
  int64_t condNum; // x21

  if ( (byte_49FE1D8 & 1) == 0 )
  {
    sub_1B64870(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_49FE1D8 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenExcludeBeforeClearQuest(
           condType,
           condTargetId,
           condNum,
           beforeClearQuestId,
           isCheckResetFlag,
           0LL);
}
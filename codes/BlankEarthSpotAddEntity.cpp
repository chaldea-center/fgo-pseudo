void __fastcall BlankEarthSpotAddEntity___ctor(BlankEarthSpotAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E860A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E860A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall BlankEarthSpotAddEntity__CreatePK(
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  if ( (byte_42E8609 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, priority, overwriteType, method);
    byte_42E8609 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           blankEarthSpotId,
           priority,
           overwriteType,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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


bool __fastcall BlankEarthSpotAddEntity__IsOpen(
        BlankEarthSpotAddEntity_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condType; // w23
  int64_t condNum; // x21

  if ( (byte_42E8608 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, beforeClearQuestId, isCheckResetFlag, method);
    byte_42E8608 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenExcludeBeforeClearQuest(
           condType,
           condTargetId,
           condNum,
           beforeClearQuestId,
           isCheckResetFlag,
           0LL);
}
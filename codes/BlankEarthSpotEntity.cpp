void __fastcall BlankEarthSpotEntity___ctor(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AFE91 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42AFE91 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BlankEarthSpotEntity__CreatePrimaryKey(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall BlankEarthSpotEntity__HasFlag(
        BlankEarthSpotEntity_o *this,
        int32_t targetFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool __fastcall BlankEarthSpotEntity__IsForceTouchDisabled(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall BlankEarthSpotEntity__IsOpen(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condTargetType; // w21
  int64_t condTargetNum; // x19

  if ( (byte_42AFE8F & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42AFE8F = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condTargetType, condTargetId, condTargetNum, 0, 0LL);
}


bool __fastcall BlankEarthSpotEntity__IsOpenForQAA(
        BlankEarthSpotEntity_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condTargetType; // w23
  int64_t condTargetNum; // x21

  if ( (byte_42AFE90 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42AFE90 = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenExcludeBeforeClearQuest(
           condTargetType,
           condTargetId,
           condTargetNum,
           beforeClearQuestId,
           isCheckResetFlag,
           0LL);
}
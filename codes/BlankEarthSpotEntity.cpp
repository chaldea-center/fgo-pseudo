void __fastcall BlankEarthSpotEntity___ctor(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C1C6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1C1C6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BlankEarthSpotEntity__CreatePrimaryKey(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BlankEarthSpotEntity__GetGrandClassIconId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1C1C1 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19712/*"grandClassIconId"*/, *(_QWORD *)&defaultValue);
    byte_4B1C1C1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19712/*"grandClassIconId"*/, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BlankEarthSpotEntity__GetGrandFaceId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1C1C4 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19713/*"grandFaceId"*/, *(_QWORD *)&defaultValue);
    byte_4B1C1C4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19713/*"grandFaceId"*/, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BlankEarthSpotEntity__GetGrandImageId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1C1C2 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19715/*"grandImageId"*/, *(_QWORD *)&defaultValue);
    byte_4B1C1C2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19715/*"grandImageId"*/, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BlankEarthSpotEntity__GetGrandLimitCount(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1C1C3 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19716/*"grandLimitCount"*/, *(_QWORD *)&defaultValue);
    byte_4B1C1C3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19716/*"grandLimitCount"*/, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BlankEarthSpotEntity__GetGrandOffsetX(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1C1C5 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19717/*"grandOffsetX"*/, *(_QWORD *)&defaultValue);
    byte_4B1C1C5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19717/*"grandOffsetX"*/, defaultValue, 0LL);
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


bool __fastcall BlankEarthSpotEntity__IsHiddenOnBlankEarth(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool __fastcall BlankEarthSpotEntity__IsOpen(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condTargetType; // w21
  int64_t condTargetNum; // x19

  if ( (byte_4B1C1BF & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    byte_4B1C1BF = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condTargetType, condTargetId, condTargetNum, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarthSpotEntity__IsOpenForQAA(
        BlankEarthSpotEntity_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condTargetType; // w23
  int64_t condTargetNum; // x21

  if ( (byte_4B1C1C0 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4B1C1C0 = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenExcludeBeforeClearQuest(
           condTargetType,
           condTargetId,
           condTargetNum,
           beforeClearQuestId,
           isCheckResetFlag,
           0LL);
}
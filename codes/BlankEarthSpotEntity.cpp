void BlankEarthSpotEntity___ctor(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593831E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_593831E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t BlankEarthSpotEntity__CreatePrimaryKey(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t BlankEarthSpotEntity__GetGrandBaseOffsetX(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593831B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20786/*"grandBaseOffsetX"*/);
    byte_593831B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20786/*"grandBaseOffsetX"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandBaseOffsetY(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593831C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20787/*"grandBaseOffsetY"*/);
    byte_593831C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20787/*"grandBaseOffsetY"*/, defaultValue, 0);
}


float BlankEarthSpotEntity__GetGrandBaseScale(
        BlankEarthSpotEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593831D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20788/*"grandBaseScale"*/);
    byte_593831D = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_20788/*"grandBaseScale"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandClassIconId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5938316 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20789/*"grandClassIconId"*/);
    byte_5938316 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20789/*"grandClassIconId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandFaceId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5938319 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20790/*"grandFaceId"*/);
    byte_5938319 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20790/*"grandFaceId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandImageId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5938317 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20792/*"grandImageId"*/);
    byte_5938317 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20792/*"grandImageId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandLimitCount(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5938318 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20793/*"grandLimitCount"*/);
    byte_5938318 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20793/*"grandLimitCount"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandOffsetX(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593831A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20794/*"grandOffsetX"*/);
    byte_593831A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20794/*"grandOffsetX"*/, defaultValue, 0);
}


bool BlankEarthSpotEntity__HasFlag(BlankEarthSpotEntity_o *this, int32_t targetFlag, const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool BlankEarthSpotEntity__IsForceTouchDisabled(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool BlankEarthSpotEntity__IsHiddenOnBlankEarth(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


// local variable allocation has failed, the output may be wrong!
bool BlankEarthSpotEntity__IsOpenForQAA(
        BlankEarthSpotEntity_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetType; // w22
  int32_t condTargetId; // w23
  int64_t condTargetNum; // x21

  if ( (byte_5938315 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938315 = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
  return CondType__IsOpenExcludeBeforeClearQuest(
           condTargetType,
           condTargetId,
           condTargetNum,
           beforeClearQuestId,
           isCheckResetFlag,
           0);
}
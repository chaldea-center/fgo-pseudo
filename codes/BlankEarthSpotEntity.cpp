void BlankEarthSpotEntity___ctor(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C4F4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2C4F4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_4D2C4F1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20050/*"grandBaseOffsetX"*/);
    byte_4D2C4F1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20050/*"grandBaseOffsetX"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandBaseOffsetY(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D2C4F2 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20051/*"grandBaseOffsetY"*/);
    byte_4D2C4F2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20051/*"grandBaseOffsetY"*/, defaultValue, 0);
}


float BlankEarthSpotEntity__GetGrandBaseScale(
        BlankEarthSpotEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D2C4F3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20052/*"grandBaseScale"*/);
    byte_4D2C4F3 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_20052/*"grandBaseScale"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandClassIconId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D2C4EC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20053/*"grandClassIconId"*/);
    byte_4D2C4EC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20053/*"grandClassIconId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandFaceId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D2C4EF & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20054/*"grandFaceId"*/);
    byte_4D2C4EF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20054/*"grandFaceId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandImageId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D2C4ED & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20056/*"grandImageId"*/);
    byte_4D2C4ED = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20056/*"grandImageId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandLimitCount(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D2C4EE & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20057/*"grandLimitCount"*/);
    byte_4D2C4EE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20057/*"grandLimitCount"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandOffsetX(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D2C4F0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20058/*"grandOffsetX"*/);
    byte_4D2C4F0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20058/*"grandOffsetX"*/, defaultValue, 0);
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


bool BlankEarthSpotEntity__IsOpen(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condTargetType; // w21
  int64_t condTargetNum; // x19

  if ( (byte_4D2C4EA & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    byte_4D2C4EA = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condTargetType, condTargetId, condTargetNum, 0, 0, 0);
}


bool BlankEarthSpotEntity__IsOpenForQAA(
        BlankEarthSpotEntity_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condTargetType; // w23
  int64_t condTargetNum; // x21

  if ( (byte_4D2C4EB & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    byte_4D2C4EB = 1;
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
           0);
}
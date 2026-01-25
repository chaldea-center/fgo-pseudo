void BlankEarthSpotEntity___ctor(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE33B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEE33B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_4CEE338 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20045/*"grandBaseOffsetX"*/);
    byte_4CEE338 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20045/*"grandBaseOffsetX"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandBaseOffsetY(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CEE339 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20046/*"grandBaseOffsetY"*/);
    byte_4CEE339 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20046/*"grandBaseOffsetY"*/, defaultValue, 0);
}


float BlankEarthSpotEntity__GetGrandBaseScale(
        BlankEarthSpotEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CEE33A & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20047/*"grandBaseScale"*/);
    byte_4CEE33A = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_20047/*"grandBaseScale"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandClassIconId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CEE333 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20048/*"grandClassIconId"*/);
    byte_4CEE333 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20048/*"grandClassIconId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandFaceId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CEE336 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20049/*"grandFaceId"*/);
    byte_4CEE336 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20049/*"grandFaceId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandImageId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CEE334 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20051/*"grandImageId"*/);
    byte_4CEE334 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20051/*"grandImageId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandLimitCount(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CEE335 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20052/*"grandLimitCount"*/);
    byte_4CEE335 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20052/*"grandLimitCount"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandOffsetX(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CEE337 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20053/*"grandOffsetX"*/);
    byte_4CEE337 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20053/*"grandOffsetX"*/, defaultValue, 0);
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


bool BlankEarthSpotEntity__IsOpenForQAA(
        BlankEarthSpotEntity_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condTargetType; // w23
  int64_t condTargetNum; // x21

  if ( (byte_4CEE332 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEE332 = 1;
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
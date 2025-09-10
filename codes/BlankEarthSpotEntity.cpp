void BlankEarthSpotEntity___ctor(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F6D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C26F6D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_4C26F6A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19873/*"grandBaseOffsetX"*/);
    byte_4C26F6A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19873/*"grandBaseOffsetX"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandBaseOffsetY(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C26F6B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19874/*"grandBaseOffsetY"*/);
    byte_4C26F6B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19874/*"grandBaseOffsetY"*/, defaultValue, 0);
}


float BlankEarthSpotEntity__GetGrandBaseScale(
        BlankEarthSpotEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C26F6C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19875/*"grandBaseScale"*/);
    byte_4C26F6C = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_19875/*"grandBaseScale"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandClassIconId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C26F65 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19876/*"grandClassIconId"*/);
    byte_4C26F65 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19876/*"grandClassIconId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandFaceId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C26F68 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19877/*"grandFaceId"*/);
    byte_4C26F68 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19877/*"grandFaceId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandImageId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C26F66 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19879/*"grandImageId"*/);
    byte_4C26F66 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19879/*"grandImageId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandLimitCount(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C26F67 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19880/*"grandLimitCount"*/);
    byte_4C26F67 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19880/*"grandLimitCount"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandOffsetX(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C26F69 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19881/*"grandOffsetX"*/);
    byte_4C26F69 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19881/*"grandOffsetX"*/, defaultValue, 0);
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

  if ( (byte_4C26F63 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    byte_4C26F63 = 1;
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

  if ( (byte_4C26F64 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    byte_4C26F64 = 1;
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
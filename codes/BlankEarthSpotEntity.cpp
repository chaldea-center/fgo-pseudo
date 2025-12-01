void BlankEarthSpotEntity___ctor(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7080 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC7080 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_4CC707D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19962/*"grandBaseOffsetX"*/);
    byte_4CC707D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19962/*"grandBaseOffsetX"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandBaseOffsetY(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CC707E & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19963/*"grandBaseOffsetY"*/);
    byte_4CC707E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19963/*"grandBaseOffsetY"*/, defaultValue, 0);
}


float BlankEarthSpotEntity__GetGrandBaseScale(
        BlankEarthSpotEntity_o *this,
        float defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CC707F & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19964/*"grandBaseScale"*/);
    byte_4CC707F = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_19964/*"grandBaseScale"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandClassIconId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CC7078 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19965/*"grandClassIconId"*/);
    byte_4CC7078 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19965/*"grandClassIconId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandFaceId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CC707B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19966/*"grandFaceId"*/);
    byte_4CC707B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19966/*"grandFaceId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandImageId(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CC7079 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19968/*"grandImageId"*/);
    byte_4CC7079 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19968/*"grandImageId"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandLimitCount(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CC707A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19969/*"grandLimitCount"*/);
    byte_4CC707A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19969/*"grandLimitCount"*/, defaultValue, 0);
}


int32_t BlankEarthSpotEntity__GetGrandOffsetX(
        BlankEarthSpotEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4CC707C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19970/*"grandOffsetX"*/);
    byte_4CC707C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19970/*"grandOffsetX"*/, defaultValue, 0);
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

  if ( (byte_4CC7076 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    byte_4CC7076 = 1;
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

  if ( (byte_4CC7077 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    byte_4CC7077 = 1;
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
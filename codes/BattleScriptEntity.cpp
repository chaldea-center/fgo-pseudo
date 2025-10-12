void BattleScriptEntity___ctor(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37622 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C37622 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleScriptEntity__CreatePK(int32_t id, int32_t playOrder, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C37621 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C37621 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           playOrder,
           idx,
           (const MethodInfo_30DBA08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *BattleScriptEntity__CreatePrimaryKey(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleScriptEntity__CreatePK(this->fields.id, this->fields.playOrder, this->fields.idx, v2);
}


int32_t BattleScriptEntity__GetAiActId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37611 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16717/*"aiActId"*/);
    byte_4C37611 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16717/*"aiActId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActIndividuality(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37613 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20774/*"individuality"*/);
    byte_4C37613 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20774/*"individuality"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActType(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37612 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24241/*"type"*/);
    byte_4C37612 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24241/*"type"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCameraMotionEventName(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3761C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19150/*"eventName"*/);
    byte_4C3761C = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19150/*"eventName"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCharaVoice(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3761F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17931/*"charaVoice"*/);
    byte_4C3761F = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17931/*"charaVoice"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInCamPlayerAll(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3761A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18410/*"cutInCamPlayerAll"*/);
    byte_4C3761A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18410/*"cutInCamPlayerAll"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37615 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18411/*"cutInId"*/);
    byte_4C37615 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18411/*"cutInId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInMessageMode(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37617 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18412/*"cutInMessageMode"*/);
    byte_4C37617 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18412/*"cutInMessageMode"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCutInMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37618 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18413/*"cutInMessageText"*/);
    byte_4C37618 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18413/*"cutInMessageText"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCutInOffset(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3761B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18415/*"cutInPrefabOffsets"*/);
    byte_4C3761B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18415/*"cutInPrefabOffsets"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInPrefabInfo(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37616 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18414/*"cutInPrefabInfo"*/);
    byte_4C37616 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18414/*"cutInPrefabInfo"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCutInVoices(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37619 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18418/*"cutInVoices"*/);
    byte_4C37619 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18418/*"cutInVoices"*/, 0, 0);
}


int32_t BattleScriptEntity__GetDelayTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37620 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18557/*"delayTime"*/);
    byte_4C37620 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18557/*"delayTime"*/, 0, 0);
}


int32_t BattleScriptEntity__GetDispTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3761E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18645/*"dispTime"*/);
    byte_4C3761E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18645/*"dispTime"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3761D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21555/*"messageText"*/);
    byte_4C3761D = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21555/*"messageText"*/, 0, 0);
}


int32_t BattleScriptEntity__GetWaitTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37614 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24717/*"waitTime"*/);
    byte_4C37614 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24717/*"waitTime"*/, 0, 0);
}
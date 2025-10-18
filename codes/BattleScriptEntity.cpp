void BattleScriptEntity___ctor(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C15 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C42C15 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleScriptEntity__CreatePK(int32_t id, int32_t playOrder, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4C42C14 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C42C14 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           playOrder,
           idx,
           (const MethodInfo_30E6270 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *BattleScriptEntity__CreatePrimaryKey(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleScriptEntity__CreatePK(this->fields.id, this->fields.playOrder, this->fields.idx, v2);
}


int32_t BattleScriptEntity__GetAiActId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C04 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16719/*"aiActId"*/);
    byte_4C42C04 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16719/*"aiActId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActIndividuality(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C06 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20777/*"individuality"*/);
    byte_4C42C06 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20777/*"individuality"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActType(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C05 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24245/*"type"*/);
    byte_4C42C05 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24245/*"type"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCameraMotionEventName(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C0F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19153/*"eventName"*/);
    byte_4C42C0F = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19153/*"eventName"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCharaVoice(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C12 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17933/*"charaVoice"*/);
    byte_4C42C12 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17933/*"charaVoice"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInCamPlayerAll(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C0D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18413/*"cutInCamPlayerAll"*/);
    byte_4C42C0D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18413/*"cutInCamPlayerAll"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C08 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18414/*"cutInId"*/);
    byte_4C42C08 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18414/*"cutInId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInMessageMode(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C0A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18415/*"cutInMessageMode"*/);
    byte_4C42C0A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18415/*"cutInMessageMode"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCutInMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C0B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18416/*"cutInMessageText"*/);
    byte_4C42C0B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18416/*"cutInMessageText"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCutInOffset(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C0E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18418/*"cutInPrefabOffsets"*/);
    byte_4C42C0E = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18418/*"cutInPrefabOffsets"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInPrefabInfo(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C09 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18417/*"cutInPrefabInfo"*/);
    byte_4C42C09 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18417/*"cutInPrefabInfo"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCutInVoices(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C0C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18421/*"cutInVoices"*/);
    byte_4C42C0C = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18421/*"cutInVoices"*/, 0, 0);
}


int32_t BattleScriptEntity__GetDelayTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C13 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18560/*"delayTime"*/);
    byte_4C42C13 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18560/*"delayTime"*/, 0, 0);
}


int32_t BattleScriptEntity__GetDispTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C11 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18648/*"dispTime"*/);
    byte_4C42C11 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18648/*"dispTime"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C10 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21558/*"messageText"*/);
    byte_4C42C10 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21558/*"messageText"*/, 0, 0);
}


int32_t BattleScriptEntity__GetWaitTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42C07 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24722/*"waitTime"*/);
    byte_4C42C07 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24722/*"waitTime"*/, 0, 0);
}
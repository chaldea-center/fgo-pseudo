void BattleScriptEntity___ctor(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F20 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB5F20 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleScriptEntity__CreatePK(int32_t id, int32_t playOrder, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CB5F1F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CB5F1F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           playOrder,
           idx,
           (const MethodInfo_3139980 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *BattleScriptEntity__CreatePrimaryKey(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleScriptEntity__CreatePK(this->fields.id, this->fields.playOrder, this->fields.idx, v2);
}


int32_t BattleScriptEntity__GetAiActId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F0F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16730/*"aiActId"*/);
    byte_4CB5F0F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16730/*"aiActId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActIndividuality(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F11 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_20841/*"individuality"*/);
    byte_4CB5F11 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20841/*"individuality"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActType(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F10 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_24347/*"type"*/);
    byte_4CB5F10 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24347/*"type"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCameraMotionEventName(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F1A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19202/*"eventName"*/);
    byte_4CB5F1A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19202/*"eventName"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetCharaVoice(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F1D & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17951/*"charaVoice"*/);
    byte_4CB5F1D = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17951/*"charaVoice"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInCamPlayerAll(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F18 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18444/*"cutInCamPlayerAll"*/);
    byte_4CB5F18 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18444/*"cutInCamPlayerAll"*/, -1, 0);
}


int32_t BattleScriptEntity__GetCutInId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F13 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18445/*"cutInId"*/);
    byte_4CB5F13 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18445/*"cutInId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInMessageMode(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F15 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18446/*"cutInMessageMode"*/);
    byte_4CB5F15 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18446/*"cutInMessageMode"*/, -1, 0);
}


System_String_o *BattleScriptEntity__GetCutInMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F16 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18447/*"cutInMessageText"*/);
    byte_4CB5F16 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18447/*"cutInMessageText"*/, 0, 0);
}


UnityEngine_Vector3_array *BattleScriptEntity__GetCutInOffset(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *ScriptStringArray; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_String_array *v7; // x20
  System_String_array *v8; // x0
  __int64 v9; // x1
  int max_length; // w8
  __int64 v11; // x22
  float *v12; // x23
  int v13; // w8
  System_String_array *v14; // x21
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s0
  float v19; // s0

  if ( (byte_4CB5F19 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Vector3___TypeInfo);
    sub_1C6BA08(&StringLiteral_18449/*"cutInPrefabOffsets"*/);
    byte_4CB5F19 = 1;
  }
  ScriptStringArray = BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_18449/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ScriptStringArray, 0);
  v7 = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !ScriptStringArray )
      sub_1C6BC60(IsNullOrEmpty, v6);
    v8 = (System_String_array *)sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, LODWORD(ScriptStringArray->max_length));
    max_length = ScriptStringArray->max_length;
    v7 = v8;
    if ( max_length >= 1 )
    {
      v11 = 0;
      v12 = (float *)&v8->m_Items[1];
      do
      {
        if ( (unsigned int)v11 >= max_length )
          goto LABEL_21;
        v8 = (System_String_array *)ScriptStringArray->m_Items[v11];
        if ( !v8 )
          goto LABEL_20;
        v8 = System_String__Split((System_String_o *)v8, 0x3Au, 0, 0);
        if ( !v8 )
          goto LABEL_20;
        v13 = v8->max_length;
        v14 = v8;
        v15 = 0.0;
        v16 = 0.0;
        v17 = 0.0;
        if ( v13 > 1 )
        {
          v18 = System_Single__Parse(v8->m_Items[1], 0);
          v13 = v14->max_length;
          v16 = v18;
          if ( v13 < 3 )
          {
            v17 = 0.0;
          }
          else
          {
            v19 = System_Single__Parse(v14->m_Items[2], 0);
            v13 = v14->max_length;
            v17 = v19;
          }
        }
        if ( v13 >= 1 )
          v15 = System_Single__Parse(v14->m_Items[0], 0);
        if ( !v7 )
LABEL_20:
          sub_1C6BC60(v8, v9);
        if ( (unsigned int)v11 >= LODWORD(v7->max_length) )
LABEL_21:
          sub_1C6BC68(v8);
        *(v12 - 2) = v16;
        *(v12 - 1) = v17;
        *v12 = v15;
        v12 += 3;
        max_length = ScriptStringArray->max_length;
        ++v11;
      }
      while ( (int)v11 < max_length );
    }
  }
  return (UnityEngine_Vector3_array *)v7;
}


System_String_array *BattleScriptEntity__GetCutInPrefabInfo(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5F14 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18448/*"cutInPrefabInfo"*/);
    byte_4CB5F14 = 1;
  }
  return BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_18448/*"cutInPrefabInfo"*/, 0x2Cu, v2);
}


System_String_array *BattleScriptEntity__GetCutInVoices(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5F17 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18452/*"cutInVoices"*/);
    byte_4CB5F17 = 1;
  }
  return BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_18452/*"cutInVoices"*/, 0x2Fu, v2);
}


int32_t BattleScriptEntity__GetDelayTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F1E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18588/*"delayTime"*/);
    byte_4CB5F1E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18588/*"delayTime"*/, 0, 0);
}


int32_t BattleScriptEntity__GetDispTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F1C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18681/*"dispTime"*/);
    byte_4CB5F1C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18681/*"dispTime"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F1B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21644/*"messageText"*/);
    byte_4CB5F1B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21644/*"messageText"*/, 0, 0);
}


System_String_array *BattleScriptEntity__GetScriptStringArray(
        BattleScriptEntity_o *this,
        System_String_o *key,
        uint16_t splitChar,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1

  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, key, 0, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StringValue, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !StringValue )
    sub_1C6BC60(IsNullOrEmpty, v7);
  return System_String__Split(StringValue, splitChar, 0, 0);
}


int32_t BattleScriptEntity__GetWaitTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5F12 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_24832/*"waitTime"*/);
    byte_4CB5F12 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24832/*"waitTime"*/, 0, 0);
}
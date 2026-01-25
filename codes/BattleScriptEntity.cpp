void BattleScriptEntity___ctor(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE300 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE300 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleScriptEntity__CreatePK(int32_t id, int32_t playOrder, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CEE2FF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEE2FF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           playOrder,
           idx,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *BattleScriptEntity__CreatePrimaryKey(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleScriptEntity__CreatePK(this->fields.id, this->fields.playOrder, this->fields.idx, v2);
}


int32_t BattleScriptEntity__GetAiActId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2EC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16797/*"aiActId"*/);
    byte_4CEE2EC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16797/*"aiActId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActIndividuality(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2EE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20948/*"individuality"*/);
    byte_4CEE2EE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20948/*"individuality"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActType(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2ED & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24486/*"type"*/);
    byte_4CEE2ED = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24486/*"type"*/, 0, 0);
}


System_Collections_Generic_Dictionary_string__object__o *BattleScriptEntity__GetAiBaseEntityScript(
        BattleScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEE2FE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16806/*"aiScript"*/);
    byte_4CEE2FE = 1;
  }
  return EntityScriptUtil__GetInScript(this->fields.script, (System_String_o *)StringLiteral_16806/*"aiScript"*/, 0);
}


System_String_o *BattleScriptEntity__GetCameraMotionEventName(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2F7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19294/*"eventName"*/);
    byte_4CEE2F7 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19294/*"eventName"*/, 0, 0);
}


BattleScriptCameraTargetData_array *BattleScriptEntity__GetCameraTargetDataArray(
        BattleScriptEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CEE2FD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&Method_JsonManager_DeserializeArray_BattleScriptCameraTargetData___);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17803/*"cameraTargetData"*/);
    byte_4CEE2FD = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C7BD40(0, method);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_17803/*"cameraTargetData"*/,
          &value,
          (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v4 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (BattleScriptCameraTargetData_array *)JsonManager__DeserializeArray_object_(
                                                 v4,
                                                 (const MethodInfo_31DEFB4 *)Method_JsonManager_DeserializeArray_BattleScriptCameraTargetData___);
}


System_String_o *BattleScriptEntity__GetCharaVoice(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2FA & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18026/*"charaVoice"*/);
    byte_4CEE2FA = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18026/*"charaVoice"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInCamPlayerAll(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2F5 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18522/*"cutInCamPlayerAll"*/);
    byte_4CEE2F5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18522/*"cutInCamPlayerAll"*/, -1, 0);
}


int32_t BattleScriptEntity__GetCutInId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2F0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18523/*"cutInId"*/);
    byte_4CEE2F0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18523/*"cutInId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInMessageMode(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2F2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18524/*"cutInMessageMode"*/);
    byte_4CEE2F2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18524/*"cutInMessageMode"*/, -1, 0);
}


System_String_o *BattleScriptEntity__GetCutInMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2F3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18525/*"cutInMessageText"*/);
    byte_4CEE2F3 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18525/*"cutInMessageText"*/, 0, 0);
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

  if ( (byte_4CEE2F6 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3___TypeInfo);
    sub_1C7BAE8(&StringLiteral_18527/*"cutInPrefabOffsets"*/);
    byte_4CEE2F6 = 1;
  }
  ScriptStringArray = BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_18527/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ScriptStringArray, 0);
  v7 = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !ScriptStringArray )
      sub_1C7BD40(IsNullOrEmpty, v6);
    v8 = (System_String_array *)sub_1C7BB90(UnityEngine_Vector3___TypeInfo, LODWORD(ScriptStringArray->max_length));
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
          sub_1C7BD40(v8, v9);
        if ( (unsigned int)v11 >= LODWORD(v7->max_length) )
LABEL_21:
          sub_1C7BD48(v8);
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

  if ( (byte_4CEE2F1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18526/*"cutInPrefabInfo"*/);
    byte_4CEE2F1 = 1;
  }
  return BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_18526/*"cutInPrefabInfo"*/, 0x2Cu, v2);
}


System_String_array *BattleScriptEntity__GetCutInVoices(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE2F4 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18530/*"cutInVoices"*/);
    byte_4CEE2F4 = 1;
  }
  return BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_18530/*"cutInVoices"*/, 0x2Fu, v2);
}


int32_t BattleScriptEntity__GetDelayTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2FB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18666/*"delayTime"*/);
    byte_4CEE2FB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18666/*"delayTime"*/, 0, 0);
}


int32_t BattleScriptEntity__GetDispTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2F9 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18760/*"dispTime"*/);
    byte_4CEE2F9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18760/*"dispTime"*/, 0, 0);
}


System_String_o *BattleScriptEntity__GetMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2F8 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21759/*"messageText"*/);
    byte_4CEE2F8 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21759/*"messageText"*/, 0, 0);
}


int32_t BattleScriptEntity__GetNormalSpeedOnlyFirst(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2FC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21118/*"isOnlyFirst"*/);
    byte_4CEE2FC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21118/*"isOnlyFirst"*/, 0, 0);
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
    sub_1C7BD40(IsNullOrEmpty, v7);
  return System_String__Split(StringValue, splitChar, 0, 0);
}


int32_t BattleScriptEntity__GetWaitTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2EF & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24975/*"waitTime"*/);
    byte_4CEE2EF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24975/*"waitTime"*/, 0, 0);
}
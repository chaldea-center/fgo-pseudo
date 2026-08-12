void BattleScriptEntity___ctor(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970490 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970490 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleScriptEntity__CreatePK(int32_t id, int32_t playOrder, int32_t idx, const MethodInfo *method)
{
  if ( (byte_597048F & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_597048F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           playOrder,
           idx,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *BattleScriptEntity__CreatePrimaryKey(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleScriptEntity__CreatePK(this->fields.id, this->fields.playOrder, this->fields.idx, v2);
}


int32_t BattleScriptEntity__GetAiActId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970479 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17415/*"aiActId"*/);
    byte_5970479 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17415/*"aiActId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActIndividuality(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597047B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21782/*"individuality"*/);
    byte_597047B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21782/*"individuality"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActType(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597047A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25559/*"type"*/);
    byte_597047A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25559/*"type"*/, 0, 0);
}


System_Collections_Generic_Dictionary_string__object__o *BattleScriptEntity__GetAiBaseEntityScript(
        BattleScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_597048C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17424/*"aiScript"*/);
    byte_597048C = 1;
  }
  return EntityScriptUtil__GetInScript(this->fields.script, (System_String_o *)StringLiteral_17424/*"aiScript"*/, 0);
}


System_String_o *BattleScriptEntity__GetCameraMotionEventName(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970484 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20044/*"eventName"*/);
    byte_5970484 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_20044/*"eventName"*/, 0, 0);
}


BattleScriptCameraTargetData_array *BattleScriptEntity__GetCameraTargetDataArray(
        BattleScriptEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_597048B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_JsonManager_DeserializeArray_BattleScriptCameraTargetData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_18495/*"cameraTargetData"*/);
    byte_597048B = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script )
    sub_2213CDC(0, method);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_18495/*"cameraTargetData"*/,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v5 = value;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
  return (BattleScriptCameraTargetData_array *)JsonManager__DeserializeArray_object_(
                                                 v5,
                                                 (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_BattleScriptCameraTargetData___);
}


System_String_o *BattleScriptEntity__GetCharaVoice(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970488 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18724/*"charaVoice"*/);
    byte_5970488 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18724/*"charaVoice"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInCamPlayerAll(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970482 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19245/*"cutInCamPlayerAll"*/);
    byte_5970482 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19245/*"cutInCamPlayerAll"*/, -1, 0);
}


int32_t BattleScriptEntity__GetCutInId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597047D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19246/*"cutInId"*/);
    byte_597047D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19246/*"cutInId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInMessageMode(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597047F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19247/*"cutInMessageMode"*/);
    byte_597047F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19247/*"cutInMessageMode"*/, -1, 0);
}


System_String_o *BattleScriptEntity__GetCutInMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970480 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19248/*"cutInMessageText"*/);
    byte_5970480 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19248/*"cutInMessageText"*/, 0, 0);
}


UnityEngine_Vector3_array *BattleScriptEntity__GetCutInOffset(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *ScriptStringArray; // x19
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  int max_length; // w8
  __int64 v9; // x22
  float *i; // x24
  float v11; // s8
  float v12; // s9
  int klass; // w8
  float v14; // s10
  System_String_o *v15; // x21

  if ( (byte_5970483 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    sub_2213A60(&StringLiteral_19250/*"cutInPrefabOffsets"*/);
    byte_5970483 = 1;
  }
  ScriptStringArray = BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_19250/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  IsNullOrEmpty = (System_String_o *)BasicHelper__IsNullOrEmpty(
                                       (System_Collections_ICollection_o *)ScriptStringArray,
                                       0);
  v7 = 0;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !ScriptStringArray )
      goto LABEL_20;
    IsNullOrEmpty = (System_String_o *)sub_2213B20(
                                         UnityEngine_Vector3___TypeInfo,
                                         LODWORD(ScriptStringArray->max_length));
    max_length = ScriptStringArray->max_length;
    v7 = IsNullOrEmpty;
    if ( max_length >= 1 )
    {
      v9 = 0;
      for ( i = (float *)&IsNullOrEmpty[1].fields; ; i += 3 )
      {
        if ( (unsigned int)v9 >= max_length )
LABEL_21:
          sub_2213CE4(IsNullOrEmpty);
        IsNullOrEmpty = ScriptStringArray->m_Items[v9];
        if ( !IsNullOrEmpty )
          break;
        IsNullOrEmpty = (System_String_o *)System_String__Split(IsNullOrEmpty, 0x3Au, 0, 0);
        if ( !IsNullOrEmpty )
          break;
        v11 = 0.0;
        v12 = 0.0;
        klass = (int)IsNullOrEmpty[1].klass;
        v14 = 0.0;
        v15 = IsNullOrEmpty;
        if ( klass > 1 )
        {
          v12 = System_Single__Parse(*(System_String_o **)&IsNullOrEmpty[1].fields, 0);
          klass = (int)v15[1].klass;
          if ( klass < 3 )
          {
            v14 = 0.0;
          }
          else
          {
            v14 = System_Single__Parse((System_String_o *)v15[2].klass, 0);
            klass = (int)v15[1].klass;
          }
        }
        if ( klass >= 1 )
          v11 = System_Single__Parse((System_String_o *)v15[1].monitor, 0);
        if ( !v7 )
          break;
        if ( (unsigned int)v9 >= LODWORD(v7[1].klass) )
          goto LABEL_21;
        *(i - 2) = v12;
        *(i - 1) = v14;
        ++v9;
        *i = v11;
        max_length = ScriptStringArray->max_length;
        if ( (int)v9 >= max_length )
          return (UnityEngine_Vector3_array *)v7;
      }
LABEL_20:
      sub_2213CDC(IsNullOrEmpty, v6);
    }
  }
  return (UnityEngine_Vector3_array *)v7;
}


System_String_array *BattleScriptEntity__GetCutInPrefabInfo(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597047E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19249/*"cutInPrefabInfo"*/);
    byte_597047E = 1;
  }
  return BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_19249/*"cutInPrefabInfo"*/, 0x2Cu, v2);
}


System_String_array *BattleScriptEntity__GetCutInVoices(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970481 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19253/*"cutInVoices"*/);
    byte_5970481 = 1;
  }
  return BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_19253/*"cutInVoices"*/, 0x2Fu, v2);
}


int32_t BattleScriptEntity__GetDelayTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970489 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19396/*"delayTime"*/);
    byte_5970489 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19396/*"delayTime"*/, 0, 0);
}


int32_t BattleScriptEntity__GetDispTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970487 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19496/*"dispTime"*/);
    byte_5970487 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19496/*"dispTime"*/, 0, 0);
}


float BattleScriptEntity__GetFovValue(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970485 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20555/*"fov"*/);
    byte_5970485 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_20555/*"fov"*/, -1.0, 0);
}


System_String_o *BattleScriptEntity__GetMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970486 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22657/*"messageText"*/);
    byte_5970486 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22657/*"messageText"*/, 0, 0);
}


int32_t BattleScriptEntity__GetNormalSpeedOnlyFirst(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597048A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21960/*"isOnlyFirst"*/);
    byte_597048A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21960/*"isOnlyFirst"*/, 0, 0);
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
    sub_2213CDC(IsNullOrEmpty, v7);
  return System_String__Split(StringValue, splitChar, 0, 0);
}


int32_t BattleScriptEntity__GetWaitTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597047C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26094/*"waitTime"*/);
    byte_597047C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_26094/*"waitTime"*/, 0, 0);
}


bool BattleScriptEntity__TryGetBattleMessageGroupId(
        BattleScriptEntity_o *this,
        int32_t *groupId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_597048E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17810/*"battleMessageGroupId"*/);
    byte_597048E = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17810/*"battleMessageGroupId"*/, 0, 0);
  *groupId = IntValue;
  return IntValue > 0;
}


bool BattleScriptEntity__TryGetBattleMessageId(
        BattleScriptEntity_o *this,
        int32_t *messageId,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_597048D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17811/*"battleMessageId"*/);
    byte_597048D = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17811/*"battleMessageId"*/, 0, 0);
  *messageId = IntValue;
  return IntValue > 0;
}
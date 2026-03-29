void BattleScriptEntity___ctor(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30660 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D30660 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BattleScriptEntity__CreatePK(int32_t id, int32_t playOrder, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4D3065F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D3065F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           playOrder,
           idx,
           (const MethodInfo_31A3054 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *BattleScriptEntity__CreatePrimaryKey(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BattleScriptEntity__CreatePK(this->fields.id, this->fields.playOrder, this->fields.idx, v2);
}


int32_t BattleScriptEntity__GetAiActId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3064B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16839/*"aiActId"*/);
    byte_4D3064B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16839/*"aiActId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActIndividuality(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3064D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21010/*"individuality"*/);
    byte_4D3064D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21010/*"individuality"*/, 0, 0);
}


int32_t BattleScriptEntity__GetAiActType(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3064C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24554/*"type"*/);
    byte_4D3064C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24554/*"type"*/, 0, 0);
}


System_Collections_Generic_Dictionary_string__object__o *BattleScriptEntity__GetAiBaseEntityScript(
        BattleScriptEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D3065E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16848/*"aiScript"*/);
    byte_4D3065E = 1;
  }
  return EntityScriptUtil__GetInScript(this->fields.script, (System_String_o *)StringLiteral_16848/*"aiScript"*/, 0);
}


System_String_o *BattleScriptEntity__GetCameraMotionEventName(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30656 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19346/*"eventName"*/);
    byte_4D30656 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19346/*"eventName"*/, 0, 0);
}


BattleScriptCameraTargetData_array *BattleScriptEntity__GetCameraTargetDataArray(
        BattleScriptEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D3065D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&Method_JsonManager_DeserializeArray_BattleScriptCameraTargetData___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17851/*"cameraTargetData"*/);
    byte_4D3065D = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C93D2C(0, method);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_17851/*"cameraTargetData"*/,
          &value,
          (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v4 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (BattleScriptCameraTargetData_array *)JsonManager__DeserializeArray_object_(
                                                 v4,
                                                 (const MethodInfo_3213F70 *)Method_JsonManager_DeserializeArray_BattleScriptCameraTargetData___);
}


System_String_o *BattleScriptEntity__GetCharaVoice(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3065A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18074/*"charaVoice"*/);
    byte_4D3065A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18074/*"charaVoice"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInCamPlayerAll(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30654 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18572/*"cutInCamPlayerAll"*/);
    byte_4D30654 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18572/*"cutInCamPlayerAll"*/, -1, 0);
}


int32_t BattleScriptEntity__GetCutInId(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3064F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18573/*"cutInId"*/);
    byte_4D3064F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18573/*"cutInId"*/, 0, 0);
}


int32_t BattleScriptEntity__GetCutInMessageMode(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30651 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18574/*"cutInMessageMode"*/);
    byte_4D30651 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18574/*"cutInMessageMode"*/, -1, 0);
}


System_String_o *BattleScriptEntity__GetCutInMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30652 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18575/*"cutInMessageText"*/);
    byte_4D30652 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_18575/*"cutInMessageText"*/, 0, 0);
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

  if ( (byte_4D30655 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    sub_1C93AD4(&StringLiteral_18577/*"cutInPrefabOffsets"*/);
    byte_4D30655 = 1;
  }
  ScriptStringArray = BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_18577/*"cutInPrefabOffsets"*/, 0x2Fu, v2);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ScriptStringArray, 0);
  v7 = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !ScriptStringArray )
      sub_1C93D2C(IsNullOrEmpty, v6);
    v8 = (System_String_array *)sub_1C93B7C(UnityEngine_Vector3___TypeInfo, LODWORD(ScriptStringArray->max_length));
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
          sub_1C93D2C(v8, v9);
        if ( (unsigned int)v11 >= LODWORD(v7->max_length) )
LABEL_21:
          sub_1C93D34(v8);
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

  if ( (byte_4D30650 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18576/*"cutInPrefabInfo"*/);
    byte_4D30650 = 1;
  }
  return BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_18576/*"cutInPrefabInfo"*/, 0x2Cu, v2);
}


System_String_array *BattleScriptEntity__GetCutInVoices(BattleScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D30653 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18580/*"cutInVoices"*/);
    byte_4D30653 = 1;
  }
  return BattleScriptEntity__GetScriptStringArray(this, (System_String_o *)StringLiteral_18580/*"cutInVoices"*/, 0x2Fu, v2);
}


int32_t BattleScriptEntity__GetDelayTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3065B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18716/*"delayTime"*/);
    byte_4D3065B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18716/*"delayTime"*/, 0, 0);
}


int32_t BattleScriptEntity__GetDispTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30659 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18810/*"dispTime"*/);
    byte_4D30659 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18810/*"dispTime"*/, 0, 0);
}


float BattleScriptEntity__GetFovValue(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30657 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19836/*"fov"*/);
    byte_4D30657 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_19836/*"fov"*/, -1.0, 0);
}


System_String_o *BattleScriptEntity__GetMessageText(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30658 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21823/*"messageText"*/);
    byte_4D30658 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21823/*"messageText"*/, 0, 0);
}


int32_t BattleScriptEntity__GetNormalSpeedOnlyFirst(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3065C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21182/*"isOnlyFirst"*/);
    byte_4D3065C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21182/*"isOnlyFirst"*/, 0, 0);
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
    sub_1C93D2C(IsNullOrEmpty, v7);
  return System_String__Split(StringValue, splitChar, 0, 0);
}


int32_t BattleScriptEntity__GetWaitTime(BattleScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3064E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_25044/*"waitTime"*/);
    byte_4D3064E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25044/*"waitTime"*/, 0, 0);
}
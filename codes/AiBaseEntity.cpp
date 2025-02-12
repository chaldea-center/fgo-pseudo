void __fastcall AiBaseEntity___ctor(AiBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB42E1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB42E1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


int32_t __fastcall AiBaseEntity__ChangeNpCountPlayer(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB42DC & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_4491/*"ChangeFaceFade"*/, method);
    byte_4BB42DC = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_4491/*"ChangeFaceFade"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AiBaseEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4BB42D3 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4BB42D3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_2F8D690 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall AiBaseEntity__CreatePrimaryKey(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AiBaseEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall AiBaseEntity__GetActSelectIndex(AiBaseEntity_o *this, int32_t defIndex, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB42DD & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_2241/*"ActNpcServantId"*/, *(_QWORD *)&defIndex);
    byte_4BB42DD = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_2241/*"ActNpcServantId"*/, defIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiBaseEntity__IsDeadToEnableUpHate(AiBaseEntity_o *this, bool def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t ScriptIntParam; // w0
  bool v7; // w8

  if ( (byte_4BB42DE & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_21128/*"irv"*/, def);
    byte_4BB42DE = 1;
  }
  ScriptIntParam = AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21128/*"irv"*/, -1, v3);
  v7 = ScriptIntParam == 1;
  if ( ScriptIntParam == -1 )
    return def;
  return v7;
}


bool __fastcall AiBaseEntity__IsForcedActionSpeedAnyTime(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB42D9 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_6941/*"ForceResetTimeAcceleration"*/, method);
    byte_4BB42D9 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6941/*"ForceResetTimeAcceleration"*/, -1, v2) == 1;
}


bool __fastcall AiBaseEntity__IsForcedStepInSpeedAnyTime(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB42DA & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_6944/*"ForcedActionSpeedAnyTime"*/, method);
    byte_4BB42DA = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6944/*"ForcedActionSpeedAnyTime"*/, -1, v2) > 0;
}


bool __fastcall AiBaseEntity__IsIncludeUnsubState(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB42D8 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_20956/*"importance"*/, method);
    byte_4BB42D8 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20956/*"importance"*/, -1, v2) != -1;
}


bool __fastcall AiBaseEntity__IsResetNpCountPlayer(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB42DB & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_11529/*"Required property '{0}' not found in JSON."*/, method);
    byte_4BB42DB = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_11529/*"Required property '{0}' not found in JSON."*/, -1, v2) == 1;
}


bool __fastcall AiBaseEntity__TryGetKeyBattleValue(AiBaseEntity_o *this, int32_t *key, const MethodInfo *method)
{
  struct System_Int64_array *vals; // x8
  __int64 v4; // x9

  *key = 0;
  vals = this->fields.vals;
  if ( !vals )
    sub_1C13F80(this, key);
  v4 = *(_QWORD *)&vals->max_length;
  if ( v4 )
  {
    if ( !(_DWORD)v4 )
      sub_1C13F88(this, key);
    *key = vals->m_Items[0];
  }
  return v4 != 0;
}


bool __fastcall AiBaseEntity__TryGetMultiIndividuality(
        AiBaseEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB42DF & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_7731/*"Indices allocated != Indices requested"*/, resValues);
    byte_4BB42DF = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7731/*"Indices allocated != Indices requested"*/,
           resValues,
           v3);
}


bool __fastcall AiBaseEntity__TryGetOverwriteBaseAiId(
        AiBaseEntity_o *this,
        int32_t *baseAiId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t ScriptIntParam; // w0

  if ( (byte_4BB42E0 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17332/*"bannerUrl"*/, baseAiId);
    byte_4BB42E0 = 1;
  }
  ScriptIntParam = AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17332/*"bannerUrl"*/, -1, v3);
  *baseAiId = ScriptIntParam;
  return ScriptIntParam >= 0;
}


int32_t __fastcall AiBaseEntity__getActionValue(AiBaseEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *avals; // x8

  avals = this->fields.avals;
  if ( avals && (int)avals->max_length >= 2 )
    return avals->m_Items[2];
  else
    return 0;
}


System_Int32_array *__fastcall AiBaseEntity__getAvals(AiBaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4BB42D5 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, method);
    byte_4BB42D5 = 1;
  }
  result = this->fields.avals;
  if ( !result )
    return (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall AiBaseEntity__getChangeAiId(AiBaseEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *avals; // x8

  avals = this->fields.avals;
  if ( avals && (int)avals->max_length >= 1 )
    return avals->m_Items[1];
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall AiBaseEntity__getIndexAval(AiBaseEntity_o *this, int32_t index, const MethodInfo *method)
{
  struct System_Int32_array *avals; // x8
  int32_t max_length; // w9

  avals = this->fields.avals;
  if ( !avals )
    return 0;
  max_length = avals->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
    sub_1C13F88(this, *(_QWORD *)&index);
  return avals->m_Items[index + 1];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall AiBaseEntity__getScriptIntParam(
        AiBaseEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  AiBaseEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  v4 = defVal;
  if ( (byte_4BB42D6 & 1) == 0 )
  {
    sub_1C13D24(&long_TypeInfo, key);
    byte_4BB42D6 = 1;
  }
  ScriptObj = AiBaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C14240(ScriptObj);
  return (unsigned int)AiBaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall AiBaseEntity__getScriptObj(
        AiBaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB42D7 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4BB42D7 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_o *__fastcall AiBaseEntity__getScriptStringParam(
        AiBaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *result; // x0

  result = (System_String_o *)AiBaseEntity__getScriptObj(this, key, method);
  if ( result )
    return (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))result->klass->vtable._3_ToString.method)(
                                result,
                                result->klass->vtable._4_CompareTo.methodPtr);
  return result;
}


System_Int64_array *__fastcall AiBaseEntity__getVals(AiBaseEntity_o *this, const MethodInfo *method)
{
  System_Int64_array *result; // x0

  if ( (byte_4BB42D4 & 1) == 0 )
  {
    sub_1C13D24(&long___TypeInfo, method);
    byte_4BB42D4 = 1;
  }
  result = this->fields.vals;
  if ( !result )
    return (System_Int64_array *)sub_1C13DCC(long___TypeInfo, 0LL);
  return result;
}


bool __fastcall AiBaseEntity__isTiming(
        AiBaseEntity_o *this,
        int32_t state,
        int32_t actcnt,
        int32_t timingPriority,
        const MethodInfo *method)
{
  return 0;
}
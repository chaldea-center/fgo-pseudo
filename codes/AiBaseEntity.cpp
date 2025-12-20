void AiBaseEntity___ctor(AiBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C3FF & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2C3FF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


int32_t AiBaseEntity__ChangeNpCountPlayer(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2C3F7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_4368/*"ChangeNpCountPlayer"*/);
    byte_4D2C3F7 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_4368/*"ChangeNpCountPlayer"*/, 0, v2);
}


System_String_o *AiBaseEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4D2C3EE & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2C3EE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *AiBaseEntity__CreatePrimaryKey(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AiBaseEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


int32_t AiBaseEntity__GetActSelectIndex(AiBaseEntity_o *this, int32_t defIndex, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4D2C3F8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_2114/*"ActSelectIndex"*/);
    byte_4D2C3F8 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_2114/*"ActSelectIndex"*/, defIndex, v3);
}


System_Int32_array *AiBaseEntity__GetCameraIds(AiBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C3FE & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17796/*"cameraIds"*/);
    byte_4D2C3FE = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17796/*"cameraIds"*/, 0, 0);
}


System_Int32_array *AiBaseEntity__GetMotionIds(AiBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C3FC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21862/*"motionIds"*/);
    byte_4D2C3FC = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21862/*"motionIds"*/, 0, 0);
}


System_String_o *AiBaseEntity__GetMovieName(AiBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C3FD & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21879/*"movieName"*/);
    byte_4D2C3FD = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21879/*"movieName"*/, 0, 0);
}


bool AiBaseEntity__IsDeadToEnableUpHate(AiBaseEntity_o *this, bool def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t ScriptIntParam; // w0
  bool v7; // w8

  if ( (byte_4D2C3F9 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21090/*"isDeadToEnableUpHate"*/);
    byte_4D2C3F9 = 1;
  }
  ScriptIntParam = AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21090/*"isDeadToEnableUpHate"*/, -1, v3);
  v7 = ScriptIntParam == 1;
  if ( ScriptIntParam == -1 )
    return def;
  return v7;
}


bool AiBaseEntity__IsForcedActionSpeedAnyTime(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2C3F4 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_6826/*"ForcedActionSpeedAnyTime"*/);
    byte_4D2C3F4 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6826/*"ForcedActionSpeedAnyTime"*/, -1, v2) == 1;
}


bool AiBaseEntity__IsForcedStepInSpeedAnyTime(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2C3F5 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_6829/*"ForcedStepInSpeedAnyTime"*/);
    byte_4D2C3F5 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6829/*"ForcedStepInSpeedAnyTime"*/, -1, v2) > 0;
}


bool AiBaseEntity__IsIncludeUnsubState(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2C3F3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20925/*"includeUnsubState"*/);
    byte_4D2C3F3 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20925/*"includeUnsubState"*/, -1, v2) != -1;
}


bool AiBaseEntity__IsResetNpCountPlayer(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D2C3F6 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_11412/*"ResetNpCountPlayer"*/);
    byte_4D2C3F6 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_11412/*"ResetNpCountPlayer"*/, -1, v2) == 1;
}


bool AiBaseEntity__TryGetKeyBattleValue(AiBaseEntity_o *this, int32_t *key, const MethodInfo *method)
{
  struct System_Int64_array *vals; // x8
  il2cpp_array_size_t max_length; // x9

  *key = 0;
  vals = this->fields.vals;
  if ( !vals )
    sub_1C942F0(this, key);
  max_length = vals->max_length;
  if ( max_length )
  {
    if ( !(_DWORD)max_length )
      sub_1C942F8(this);
    *key = vals->m_Items[0];
  }
  return max_length != 0;
}


bool AiBaseEntity__TryGetMultiIndividuality(
        AiBaseEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_4D2C3FA & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_7642/*"Individuality"*/);
    byte_4D2C3FA = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7642/*"Individuality"*/,
           resValues,
           0);
}


bool AiBaseEntity__TryGetOverwriteBaseAiId(AiBaseEntity_o *this, int32_t *baseAiId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t ScriptIntParam; // w0

  if ( (byte_4D2C3FB & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17118/*"baseAiId"*/);
    byte_4D2C3FB = 1;
  }
  ScriptIntParam = AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17118/*"baseAiId"*/, -1, v3);
  *baseAiId = ScriptIntParam;
  return ScriptIntParam >= 0;
}


int32_t AiBaseEntity__getActionValue(AiBaseEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *avals; // x8

  avals = this->fields.avals;
  if ( avals && SLODWORD(avals->max_length) >= 2 )
    return avals->m_Items[1];
  else
    return 0;
}


System_Int32_array *AiBaseEntity__getAvals(AiBaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4D2C3F0 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    byte_4D2C3F0 = 1;
  }
  result = this->fields.avals;
  if ( !result )
    return (System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  return result;
}


int32_t AiBaseEntity__getChangeAiId(AiBaseEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *avals; // x8

  avals = this->fields.avals;
  if ( avals && SLODWORD(avals->max_length) >= 1 )
    return avals->m_Items[0];
  else
    return 0;
}


int32_t AiBaseEntity__getIndexAval(AiBaseEntity_o *this, int32_t index, const MethodInfo *method)
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
    sub_1C942F8(this);
  return avals->m_Items[index];
}


// local variable allocation has failed, the output may be wrong!
int32_t AiBaseEntity__getScriptIntParam(
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
  if ( (byte_4D2C3F1 & 1) == 0 )
  {
    sub_1C94098(&long_TypeInfo);
    byte_4D2C3F1 = 1;
  }
  ScriptObj = AiBaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C9468C(ScriptObj);
  return (unsigned int)AiBaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *AiBaseEntity__getScriptObj(AiBaseEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2C3F2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4D2C3F2 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_String_o *AiBaseEntity__getScriptStringParam(
        AiBaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *result; // x0

  result = (System_String_o *)AiBaseEntity__getScriptObj(this, key, method);
  if ( result )
    return (System_String_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))result->klass->vtable._3_ToString.methodPtr)(
                                result,
                                result->klass->vtable._3_ToString.method);
  return result;
}


System_Int64_array *AiBaseEntity__getVals(AiBaseEntity_o *this, const MethodInfo *method)
{
  System_Int64_array *result; // x0

  if ( (byte_4D2C3EF & 1) == 0 )
  {
    sub_1C94098(&long___TypeInfo);
    byte_4D2C3EF = 1;
  }
  result = this->fields.vals;
  if ( !result )
    return (System_Int64_array *)sub_1C94140(long___TypeInfo, 0);
  return result;
}


bool AiBaseEntity__isTiming(
        AiBaseEntity_o *this,
        int32_t state,
        int32_t actcnt,
        int32_t timingPriority,
        const MethodInfo *method)
{
  return 0;
}
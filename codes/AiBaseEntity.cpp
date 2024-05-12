void __fastcall AiBaseEntity___ctor(AiBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A476 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438A476 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


int32_t __fastcall AiBaseEntity__ChangeNpCountPlayer(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438A471 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4039/*"ChangeNpCountPlayer"*/);
    byte_438A471 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_4039/*"ChangeNpCountPlayer"*/, 0, v2);
}


System_String_o *__fastcall AiBaseEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_438A468 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438A468 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall AiBaseEntity__CreatePrimaryKey(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AiBaseEntity__CreatePK(this->fields.id, this->fields.idx, v2);
}


int32_t __fastcall AiBaseEntity__GetActSelectIndex(AiBaseEntity_o *this, int32_t defIndex, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438A472 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1889/*"ActSelectIndex"*/);
    byte_438A472 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_1889/*"ActSelectIndex"*/, defIndex, v3);
}


bool __fastcall AiBaseEntity__IsDeadToEnableUpHate(AiBaseEntity_o *this, bool def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t ScriptIntParam; // w0
  bool v7; // w8

  if ( (byte_438A473 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20332/*"isDeadToEnableUpHate"*/);
    byte_438A473 = 1;
  }
  ScriptIntParam = AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20332/*"isDeadToEnableUpHate"*/, -1, v3);
  v7 = ScriptIntParam == 1;
  if ( ScriptIntParam == -1 )
    return def;
  return v7;
}


bool __fastcall AiBaseEntity__IsForcedActionSpeedAnyTime(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438A46E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6900/*"ForcedActionSpeedAnyTime"*/);
    byte_438A46E = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6900/*"ForcedActionSpeedAnyTime"*/, -1, v2) == 1;
}


bool __fastcall AiBaseEntity__IsForcedStepInSpeedAnyTime(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438A46F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6903/*"ForcedStepInSpeedAnyTime"*/);
    byte_438A46F = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6903/*"ForcedStepInSpeedAnyTime"*/, -1, v2) > 0;
}


bool __fastcall AiBaseEntity__IsIncludeUnsubState(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438A46D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20172/*"includeUnsubState"*/);
    byte_438A46D = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20172/*"includeUnsubState"*/, -1, v2) != -1;
}


bool __fastcall AiBaseEntity__IsResetNpCountPlayer(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438A470 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_11666/*"ResetNpCountPlayer"*/);
    byte_438A470 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_11666/*"ResetNpCountPlayer"*/, -1, v2) == 1;
}


bool __fastcall AiBaseEntity__TryGetKeyBattleValue(AiBaseEntity_o *this, int32_t *key, const MethodInfo *method)
{
  struct System_Int64_array *vals; // x8
  __int64 v4; // x9
  bool result; // w0
  __int64 v6; // x0

  *key = 0;
  vals = this->fields.vals;
  if ( !vals )
    sub_B7769C(this, key);
  v4 = *(_QWORD *)&vals->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
  }
  result = 1;
  *key = vals->m_Items[0];
  return result;
}


bool __fastcall AiBaseEntity__TryGetMultiIndividuality(
        AiBaseEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_438A474 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_7742/*"Individuality"*/);
    byte_438A474 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7742/*"Individuality"*/,
           resValues,
           0LL);
}


bool __fastcall AiBaseEntity__TryGetOverwriteBaseAiId(
        AiBaseEntity_o *this,
        int32_t *baseAiId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t ScriptIntParam; // w0

  if ( (byte_438A475 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16940/*"baseAiId"*/);
    byte_438A475 = 1;
  }
  ScriptIntParam = AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16940/*"baseAiId"*/, -1, v3);
  *baseAiId = ScriptIntParam;
  return ScriptIntParam >= 0;
}


int32_t __fastcall AiBaseEntity__getActionValue(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AiBaseEntity__getIndexAval(this, 1, v2);
}


System_Int32_array *__fastcall AiBaseEntity__getAvals(AiBaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_438A46A & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    byte_438A46A = 1;
  }
  result = this->fields.avals;
  if ( !result )
    return (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return result;
}


int32_t __fastcall AiBaseEntity__getChangeAiId(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AiBaseEntity__getIndexAval(this, 0, v2);
}


int32_t __fastcall AiBaseEntity__getIndexAval(AiBaseEntity_o *this, int32_t index, const MethodInfo *method)
{
  struct System_Int32_array *avals; // x8
  int32_t max_length; // w9
  __int64 v6; // x0

  avals = this->fields.avals;
  if ( !avals )
    return 0;
  max_length = avals->max_length;
  if ( max_length <= index )
    return 0;
  if ( max_length <= (unsigned int)index )
  {
    v6 = sub_B776C8(this);
    sub_B77668(v6, 0LL);
  }
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
  AiBaseEntity_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = defVal;
  if ( (byte_438A46B & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    byte_438A46B = 1;
  }
  ScriptObj = AiBaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (AiBaseEntity_o *)sub_B77990(ScriptObj);
  return (unsigned int)AiBaseEntity__getScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall AiBaseEntity__getScriptObj(
        AiBaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438A46C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438A46C = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
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

  if ( (byte_438A469 & 1) == 0 )
  {
    sub_B775C4(&long___TypeInfo);
    byte_438A469 = 1;
  }
  result = this->fields.vals;
  if ( !result )
    return (System_Int64_array *)sub_B775DC(long___TypeInfo, 0LL);
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
void __fastcall AiBaseEntity___ctor(AiBaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4185A66 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4185A66 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


int32_t __fastcall AiBaseEntity__ChangeNpCountPlayer(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4185A61 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3912/*"ChangeNpCountPlayer"*/, method);
    byte_4185A61 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_3912/*"ChangeNpCountPlayer"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AiBaseEntity__CreatePK(int32_t id, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4185A58 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4185A58 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4185A62 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1812/*"ActSelectIndex"*/, *(_QWORD *)&defIndex);
    byte_4185A62 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_1812/*"ActSelectIndex"*/, defIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiBaseEntity__IsDeadToEnableUpHate(AiBaseEntity_o *this, bool def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t ScriptIntParam; // w0
  bool v7; // w8

  if ( (byte_4185A63 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19926/*"isDeadToEnableUpHate"*/, def);
    byte_4185A63 = 1;
  }
  ScriptIntParam = AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19926/*"isDeadToEnableUpHate"*/, -1, v3);
  v7 = ScriptIntParam == 1;
  if ( ScriptIntParam == -1 )
    return def;
  return v7;
}


bool __fastcall AiBaseEntity__IsForcedActionSpeedAnyTime(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4185A5E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6749/*"ForcedActionSpeedAnyTime"*/, method);
    byte_4185A5E = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6749/*"ForcedActionSpeedAnyTime"*/, -1, v2) == 1;
}


bool __fastcall AiBaseEntity__IsForcedStepInSpeedAnyTime(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4185A5F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6752/*"ForcedStepInSpeedAnyTime"*/, method);
    byte_4185A5F = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6752/*"ForcedStepInSpeedAnyTime"*/, -1, v2) > 0;
}


bool __fastcall AiBaseEntity__IsIncludeUnsubState(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4185A5D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19769/*"includeUnsubState"*/, method);
    byte_4185A5D = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19769/*"includeUnsubState"*/, -1, v2) != -1;
}


bool __fastcall AiBaseEntity__IsResetNpCountPlayer(AiBaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4185A60 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11451/*"ResetNpCountPlayer"*/, method);
    byte_4185A60 = 1;
  }
  return AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_11451/*"ResetNpCountPlayer"*/, -1, v2) == 1;
}


bool __fastcall AiBaseEntity__TryGetMultiIndividuality(
        AiBaseEntity_o *this,
        System_Int32_array_array **resValues,
        const MethodInfo *method)
{
  if ( (byte_4185A64 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_7587/*"Individuality"*/, resValues);
    byte_4185A64 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_7587/*"Individuality"*/,
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

  if ( (byte_4185A65 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16614/*"baseAiId"*/, baseAiId);
    byte_4185A65 = 1;
  }
  ScriptIntParam = AiBaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16614/*"baseAiId"*/, -1, v3);
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

  if ( (byte_4185A5A & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_4185A5A = 1;
  }
  result = this->fields.avals;
  if ( !result )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
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
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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
  if ( (byte_4185A5B & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    byte_4185A5B = 1;
  }
  ScriptObj = AiBaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (AiBaseEntity_o *)sub_B2C728(ScriptObj);
  return (unsigned int)AiBaseEntity__getScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall AiBaseEntity__getScriptObj(
        AiBaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185A5C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4185A5C = 1;
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
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4185A59 & 1) == 0 )
  {
    sub_B2C35C(&long___TypeInfo, method);
    byte_4185A59 = 1;
  }
  result = this->fields.vals;
  if ( !result )
    return (System_Int64_array *)sub_B2C374(long___TypeInfo, 0LL);
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
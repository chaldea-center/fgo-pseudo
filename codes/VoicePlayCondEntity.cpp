void VoicePlayCondEntity___ctor(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38ACC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C38ACC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *VoicePlayCondEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4C38AC4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
    byte_4C38AC4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object__long_(
           svtId,
           voicePrefix,
           (Il2CppObject *)voiceId,
           idx,
           (const MethodInfo_30DC138 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
}


System_String_o *VoicePlayCondEntity__CreatePrimaryKey(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t voicePrefix; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  int32_t v8; // w21
  System_String_o *v9; // x0
  const MethodInfo *v10; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4C38AC3 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4C38AC3 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v4;
  *(_QWORD *)&v12.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v12, 0);
  voicePrefix = this->fields.voicePrefix;
  voiceId = this->fields.voiceId;
  v8 = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48923628(voiceId, 0);
  return VoicePlayCondEntity__CreatePK(v8, voicePrefix, v9, this->fields.idx, v10);
}


System_String_o *VoicePlayCondEntity__GetCombineAnimation(
        VoicePlayCondEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C38ACB & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_18119/*"combineAnimation"*/);
    byte_4C38ACB = 1;
  }
  return VoicePlayCondEntity__GetScriptStr(this, (System_String_o *)StringLiteral_18119/*"combineAnimation"*/, defVal, v3);
}


System_Int32_array *VoicePlayCondEntity__GetScriptIntArrayParam(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  VoicePlayCondEntity___c_c *v9; // x0
  System_Converter_object__int__o *_9__16_0; // x20
  Il2CppObject *v11; // x21
  struct VoicePlayCondEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_int__o *v15; // x0

  if ( (byte_4C38AC8 & 1) == 0 )
  {
    sub_1C32C20(&System_Converter_object__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_VoicePlayCondEntity___c__GetScriptIntArrayParam_b__16_0__);
    sub_1C32C20(&VoicePlayCondEntity___c_TypeInfo);
    byte_4C38AC8 = 1;
  }
  ScriptObjListParam = VoicePlayCondEntity__GetScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v8 = ScriptObjListParam;
  v9 = VoicePlayCondEntity___c_TypeInfo;
  if ( !VoicePlayCondEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondEntity___c_TypeInfo);
    v9 = VoicePlayCondEntity___c_TypeInfo;
  }
  _9__16_0 = v9->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = VoicePlayCondEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_0 = (System_Converter_object__int__o *)sub_1C32E6C(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__16_0,
      v11,
      Method_VoicePlayCondEntity___c__GetScriptIntArrayParam_b__16_0__,
      0);
    static_fields = VoicePlayCondEntity___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__16_0,
                                                    (const MethodInfo_300490C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v15 )
    sub_1C32E7C(0);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t VoicePlayCondEntity__GetScriptIntParam(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  VoicePlayCondEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  v4 = defVal;
  if ( (byte_4C38AC6 & 1) == 0 )
  {
    sub_1C32C20(&long_TypeInfo);
    byte_4C38AC6 = 1;
  }
  ScriptObj = VoicePlayCondEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C3313C(ScriptObj);
  return (unsigned int)VoicePlayCondEntity__GetScriptObjListParam(v11, v12, v13);
}


Il2CppObject *VoicePlayCondEntity__GetScriptObj(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C38AC5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C38AC5 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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


System_Collections_Generic_List_object__o *VoicePlayCondEntity__GetScriptObjListParam(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 naturalAligment; // x9
  VoicePlayCondEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4C38AC7 & 1) == 0 )
  {
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C38AC7 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)VoicePlayCondEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C3313C(result);
      return (System_Collections_Generic_List_object__o *)VoicePlayCondEntity__GetScriptIntArrayParam(v7, v8, v9, v10);
    }
  }
  return result;
}


System_String_o *VoicePlayCondEntity__GetScriptStr(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  VoicePlayCondEntity_o *v9; // x0
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C38AC9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&string_TypeInfo);
    byte_4C38AC9 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_1C3313C(value);
  return (System_String_o *)VoicePlayCondEntity__GetWeight(v9, v10, v11);
}


int32_t VoicePlayCondEntity__GetWeight(VoicePlayCondEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C38ACA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24798/*"weight"*/);
    byte_4C38ACA = 1;
  }
  return VoicePlayCondEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_24798/*"weight"*/, defVal, v3);
}


int32_t VoicePlayCondEntity__getCondType(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


int32_t VoicePlayCondEntity__getCondValue(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *condValues; // x8
  il2cpp_array_size_t max_length; // x9

  condValues = this->fields.condValues;
  if ( !condValues )
    sub_1C32E7C(this);
  max_length = condValues->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C32E84(this);
  return condValues->m_Items[0];
}


void VoicePlayCondEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38ACD & 1) == 0 )
  {
    sub_1C32C20(&VoicePlayCondEntity___c_TypeInfo);
    byte_4C38ACD = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(VoicePlayCondEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  VoicePlayCondEntity___c_TypeInfo->static_fields->__9 = (struct VoicePlayCondEntity___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)VoicePlayCondEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void VoicePlayCondEntity___c___ctor(VoicePlayCondEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t VoicePlayCondEntity___c___GetScriptIntArrayParam_b__16_0(
        VoicePlayCondEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C38ACE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38ACE = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method,
                              method);
  else
    v4 = 0;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0);
}
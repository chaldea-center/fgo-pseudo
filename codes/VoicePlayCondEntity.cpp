void VoicePlayCondEntity___ctor(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939810 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939810 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *VoicePlayCondEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_593980A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
    byte_593980A = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object__long_(
           svtId,
           voicePrefix,
           (Il2CppObject *)voiceId,
           idx,
           (const MethodInfo_3821B30 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
}


System_String_o *VoicePlayCondEntity__CreatePrimaryKey(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x1
  int32_t voicePrefix; // w20
  int32_t v8; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  System_String_o *v10; // x0
  const MethodInfo *v11; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_5939809 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_5939809 = 1;
  }
  v3 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v13.fields.currentCryptoKey = v3;
  *(_QWORD *)&v13.fields.fakeValue = v4;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v13, 0);
  voicePrefix = this->fields.voicePrefix;
  v8 = v5;
  voiceId = this->fields.voiceId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(voiceId, 0);
  return VoicePlayCondEntity__CreatePK(v8, voicePrefix, v10, this->fields.idx, v11);
}


System_String_o *VoicePlayCondEntity__GetCombineAnimation(
        VoicePlayCondEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_593980F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18890/*"combineAnimation"*/);
    byte_593980F = 1;
  }
  return VoicePlayCondEntity__GetScriptStr(this, (System_String_o *)StringLiteral_18890/*"combineAnimation"*/, defVal, v3);
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
  __int64 v6; // x2
  VoicePlayCondEntity_o *v8; // x0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  v4 = defVal;
  ScriptObj = VoicePlayCondEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_594C090, v6);
  sub_220024C(ScriptObj, qword_594C090, v6);
  return (unsigned int)VoicePlayCondEntity__GetScriptObjListParam(v8, v9, v10);
}


Il2CppObject *VoicePlayCondEntity__GetScriptObj(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593980B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_593980B = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v6; // x2
  __int64 naturalAligment; // x9
  VoicePlayCondEntity_o *v8; // x0
  System_String_o *v9; // x1
  System_String_o *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_593980C & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    byte_593980C = 1;
  }
  result = (System_Collections_Generic_List_object__o *)VoicePlayCondEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_220024C(result, System_Collections_Generic_List_object__TypeInfo, v6);
      return (System_Collections_Generic_List_object__o *)VoicePlayCondEntity__GetScriptStr(v8, v9, v10, v11);
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
  __int64 v8; // x2
  VoicePlayCondEntity_o *v10; // x0
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593980D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_593980D = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || value->klass == (Il2CppClass *)qword_594C0B8 )
    return defVal;
  sub_220024C(value, qword_594C0B8, v8);
  return (System_String_o *)VoicePlayCondEntity__GetWeight(v10, v11, v12);
}


int32_t VoicePlayCondEntity__GetWeight(VoicePlayCondEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_593980E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26127/*"weight"*/);
    byte_593980E = 1;
  }
  return VoicePlayCondEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_26127/*"weight"*/, defVal, v3);
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
    sub_21FFECC(this, method);
  max_length = condValues->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_21FFED4(this);
  return condValues->m_Items[0];
}
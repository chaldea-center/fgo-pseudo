void __fastcall VoicePlayCondEntity___ctor(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D2EA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418D2EA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall VoicePlayCondEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_418D2E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_long__long__string__long___, *(_QWORD *)&voicePrefix);
    byte_418D2E4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__string__long_(
           svtId,
           voicePrefix,
           voiceId,
           idx,
           (const MethodInfo_1733288 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
}


System_String_o *__fastcall VoicePlayCondEntity__CreatePrimaryKey(
        VoicePlayCondEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  int32_t voicePrefix; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  int32_t v9; // w21
  System_String_o *v10; // x0
  const MethodInfo *v11; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_418D2E3 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v3);
    byte_418D2E3 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v5;
  *(_QWORD *)&v13.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  voicePrefix = this->fields.voicePrefix;
  voiceId = this->fields.voiceId;
  v9 = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(voiceId, 0LL);
  return VoicePlayCondEntity__CreatePK(v9, voicePrefix, v10, this->fields.idx, v11);
}


System_Int32_array *__fastcall VoicePlayCondEntity__GetScriptIntArrayParam(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v13; // x19
  VoicePlayCondEntity___c_c *v14; // x0
  struct VoicePlayCondEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__16_0; // x20
  Il2CppObject *v17; // x21
  struct VoicePlayCondEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x0
  __int64 v26; // x1

  if ( (byte_418D2E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, key);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B2C35C(&Method_VoicePlayCondEntity___c__GetScriptIntArrayParam_b__16_0__, v10);
    sub_B2C35C(&VoicePlayCondEntity___c_TypeInfo, v11);
    byte_418D2E8 = 1;
  }
  ScriptObjListParam = VoicePlayCondEntity__GetScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v13 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v14 = VoicePlayCondEntity___c_TypeInfo;
  if ( (BYTE3(VoicePlayCondEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondEntity___c_TypeInfo);
    v14 = VoicePlayCondEntity___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = VoicePlayCondEntity___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__16_0,
      v17,
      Method_VoicePlayCondEntity___c__GetScriptIntArrayParam_b__16_0__,
      (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
    v18 = VoicePlayCondEntity___c_TypeInfo->static_fields;
    v18->__9__16_0 = (struct System_Converter_object__int__o *)_9__16_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v18->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v13,
                                                    (System_Converter_T__TOutput__o *)_9__16_0,
                                                    (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v25 )
    sub_B2C434(0LL, v26);
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall VoicePlayCondEntity__GetScriptIntParam(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  VoicePlayCondEntity_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = defVal;
  if ( (byte_418D2E6 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    byte_418D2E6 = 1;
  }
  ScriptObj = VoicePlayCondEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B2C728(ScriptObj);
  return (unsigned int)VoicePlayCondEntity__GetScriptObjListParam(v9, v10, v11);
}


Il2CppObject *__fastcall VoicePlayCondEntity__GetScriptObj(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D2E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_418D2E5 = 1;
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


System_Collections_Generic_List_object__o *__fastcall VoicePlayCondEntity__GetScriptObjListParam(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v6; // x9
  VoicePlayCondEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_418D2E7 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_418D2E7 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)VoicePlayCondEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B2C728(result);
      return (System_Collections_Generic_List_object__o *)VoicePlayCondEntity__GetScriptIntArrayParam(v7, v8, v9, v10);
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall VoicePlayCondEntity__GetWeight(
        VoicePlayCondEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_418D2E9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23268/*"weight"*/, *(_QWORD *)&defVal);
    byte_418D2E9 = 1;
  }
  return VoicePlayCondEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23268/*"weight"*/, defVal, v3);
}


int32_t __fastcall VoicePlayCondEntity__getCondType(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


int32_t __fastcall VoicePlayCondEntity__getCondValue(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *condValues; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  condValues = this->fields.condValues;
  if ( !condValues )
    sub_B2C434(this, method);
  v3 = *(_QWORD *)&condValues->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  return condValues->m_Items[1];
}


void __fastcall VoicePlayCondEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct VoicePlayCondEntity___c_StaticFields *static_fields; // x0

  if ( (byte_41856DF & 1) == 0 )
  {
    sub_B2C35C(&VoicePlayCondEntity___c_TypeInfo, v1);
    byte_41856DF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(VoicePlayCondEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = VoicePlayCondEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct VoicePlayCondEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall VoicePlayCondEntity___c___ctor(VoicePlayCondEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall VoicePlayCondEntity___c___GetScriptIntArrayParam_b__16_0(
        VoicePlayCondEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_41856E0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_41856E0 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0LL);
}
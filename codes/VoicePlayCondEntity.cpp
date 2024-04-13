void __fastcall VoicePlayCondEntity___ctor(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE730 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EE730 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall VoicePlayCondEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42EE72A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataEntityBase_CreateMultiplePK_long__long__string__long___,
      voicePrefix,
      (_DWORD)voiceId,
      *(_QWORD *)&idx);
    byte_42EE72A = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__string__long_(
           svtId,
           voicePrefix,
           voiceId,
           idx,
           (const MethodInfo_1AE3AE8 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
}


System_String_o *__fastcall VoicePlayCondEntity__CreatePrimaryKey(
        VoicePlayCondEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  int32_t voicePrefix; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x22
  int32_t v13; // w21
  System_String_o *v14; // x0
  const MethodInfo *v15; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42EE729 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5, v6, v7);
    byte_42EE729 = 1;
  }
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v9;
  *(_QWORD *)&v17.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL);
  voicePrefix = this->fields.voicePrefix;
  voiceId = this->fields.voiceId;
  v13 = v10;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(voiceId, 0LL);
  return VoicePlayCondEntity__CreatePK(v13, voicePrefix, v14, this->fields.idx, v15);
}


System_Int32_array *__fastcall VoicePlayCondEntity__GetScriptIntArrayParam(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v23; // x19
  VoicePlayCondEntity___c_c *v24; // x0
  struct VoicePlayCondEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__16_0; // x20
  Il2CppObject *v27; // x21
  struct VoicePlayCondEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0
  __int64 v36; // x1

  if ( (byte_42EE72E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_VoicePlayCondEntity___c__GetScriptIntArrayParam_b__16_0__, v16, v17, v18);
    sub_B5D5C4(&VoicePlayCondEntity___c_TypeInfo, v19, v20, v21);
    byte_42EE72E = 1;
  }
  ScriptObjListParam = VoicePlayCondEntity__GetScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v23 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v24 = VoicePlayCondEntity___c_TypeInfo;
  if ( (BYTE3(VoicePlayCondEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoicePlayCondEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondEntity___c_TypeInfo);
    v24 = VoicePlayCondEntity___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = VoicePlayCondEntity___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__16_0,
      v27,
      Method_VoicePlayCondEntity___c__GetScriptIntArrayParam_b__16_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v28 = VoicePlayCondEntity___c_TypeInfo->static_fields;
    v28->__9__16_0 = (struct System_Converter_object__int__o *)_9__16_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v28->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v23,
                                                    (System_Converter_T__TOutput__o *)_9__16_0,
                                                    (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v35 )
    sub_B5D69C(0LL, v36);
  return System_Collections_Generic_List_int___ToArray(
           v35,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_42EE72C & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, defVal, method);
    byte_42EE72C = 1;
  }
  ScriptObj = VoicePlayCondEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B5D990(ScriptObj);
  return (unsigned int)VoicePlayCondEntity__GetScriptObjListParam(v9, v10, v11);
}


Il2CppObject *__fastcall VoicePlayCondEntity__GetScriptObj(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE72B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EE72B = 1;
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
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v3; // x3
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v7; // x9
  VoicePlayCondEntity_o *v8; // x0
  System_String_o *v9; // x1
  System_Int32_array *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_42EE72D & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    byte_42EE72D = 1;
  }
  result = (System_Collections_Generic_List_object__o *)VoicePlayCondEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B5D990(result);
      return (System_Collections_Generic_List_object__o *)VoicePlayCondEntity__GetScriptIntArrayParam(v8, v9, v10, v11);
    }
  }
  return result;
}


int32_t __fastcall VoicePlayCondEntity__GetWeight(
        VoicePlayCondEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42EE72F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23579/*"weight"*/, defVal, (_DWORD)method, v3);
    byte_42EE72F = 1;
  }
  return VoicePlayCondEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23579/*"weight"*/, defVal, v3);
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
    sub_B5D69C(this, method);
  v3 = *(_QWORD *)&condValues->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return condValues->m_Items[1];
}


void __fastcall VoicePlayCondEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7032 & 1) == 0 )
  {
    sub_B5D5C4(&VoicePlayCondEntity___c_TypeInfo, v1, v2, v3);
    byte_42E7032 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(VoicePlayCondEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)VoicePlayCondEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E7033 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7033 = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}
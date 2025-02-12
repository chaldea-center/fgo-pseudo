void __fastcall VoicePlayCondEntity___ctor(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB566D & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB566D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall VoicePlayCondEntity__CreatePK(
        int32_t svtId,
        int32_t voicePrefix,
        System_String_o *voiceId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4BB5665 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_long__long__string__long___, *(_QWORD *)&voicePrefix);
    byte_4BB5665 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__long__object__long_(
           svtId,
           voicePrefix,
           (Il2CppObject *)voiceId,
           idx,
           (const MethodInfo_2F8E1B4 *)Method_DataEntityBase_CreateMultiplePK_long__long__string__long___);
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

  if ( (byte_4BB5664 & 1) == 0 )
  {
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v3);
    byte_4BB5664 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v5;
  *(_QWORD *)&v13.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v13, 0LL);
  voicePrefix = this->fields.voicePrefix;
  voiceId = this->fields.voiceId;
  v9 = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47526452(voiceId, 0LL);
  return VoicePlayCondEntity__CreatePK(v9, voicePrefix, v10, this->fields.idx, v11);
}


System_String_o *__fastcall VoicePlayCondEntity__GetCombineAnimation(
        VoicePlayCondEntity_o *this,
        System_String_o *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB566C & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18398/*"com.unity.androidnotifications.UnityNotificationManager"*/, defVal);
    byte_4BB566C = 1;
  }
  return VoicePlayCondEntity__GetScriptStr(this, (System_String_o *)StringLiteral_18398/*"com.unity.androidnotifications.UnityNotificationManager"*/, defVal, v3);
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
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v12; // x19
  VoicePlayCondEntity___c_c *v13; // x0
  System_Converter_object__int__o *_9__16_0; // x20
  Il2CppObject *v15; // x21
  struct VoicePlayCondEntity___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_int__o *v23; // x0
  __int64 v24; // x1

  if ( (byte_4BB5669 & 1) == 0 )
  {
    sub_1C13D24(&System_Converter_object__int__TypeInfo, key);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1C13D24(&Method_VoicePlayCondEntity___c__GetScriptIntArrayParam_b__16_0__, v9);
    sub_1C13D24(&VoicePlayCondEntity___c_TypeInfo, v10);
    byte_4BB5669 = 1;
  }
  ScriptObjListParam = VoicePlayCondEntity__GetScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v12 = ScriptObjListParam;
  v13 = VoicePlayCondEntity___c_TypeInfo;
  if ( !VoicePlayCondEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoicePlayCondEntity___c_TypeInfo);
    v13 = VoicePlayCondEntity___c_TypeInfo;
  }
  _9__16_0 = v13->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = VoicePlayCondEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__16_0 = (System_Converter_object__int__o *)sub_1C13F70(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__16_0,
      v15,
      Method_VoicePlayCondEntity___c__GetScriptIntArrayParam_b__16_0__,
      0LL);
    static_fields = VoicePlayCondEntity___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = _9__16_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v12,
                                                    (System_Converter_T__TOutput__o *)_9__16_0,
                                                    (const MethodInfo_2EBF24C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v23 )
    sub_1C13F80(0LL, v24);
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v8; // x2
  __int64 v9; // x3
  VoicePlayCondEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  v4 = defVal;
  if ( (byte_4BB5667 & 1) == 0 )
  {
    sub_1C13D24(&long_TypeInfo, key);
    byte_4BB5667 = 1;
  }
  ScriptObj = VoicePlayCondEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C14240(ScriptObj);
  return (unsigned int)VoicePlayCondEntity__GetScriptObjListParam(v11, v12, v13);
}


Il2CppObject *__fastcall VoicePlayCondEntity__GetScriptObj(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB5666 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4BB5666 = 1;
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


System_Collections_Generic_List_object__o *__fastcall VoicePlayCondEntity__GetScriptObjListParam(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 methodPtr_low; // x9
  VoicePlayCondEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4BB5668 & 1) == 0 )
  {
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4BB5668 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)VoicePlayCondEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C14240(result);
      return (System_Collections_Generic_List_object__o *)VoicePlayCondEntity__GetScriptIntArrayParam(v7, v8, v9, v10);
    }
  }
  return result;
}


System_String_o *__fastcall VoicePlayCondEntity__GetScriptStr(
        VoicePlayCondEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  VoicePlayCondEntity_o *v10; // x0
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB566A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1C13D24(&string_TypeInfo, v7);
    byte_4BB566A = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    return defVal;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return defVal;
  defVal = (System_String_o *)value;
  if ( !value || (System_String_c *)value->klass == string_TypeInfo )
    return defVal;
  sub_1C14240(value);
  return (System_String_o *)VoicePlayCondEntity__GetWeight(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall VoicePlayCondEntity__GetWeight(
        VoicePlayCondEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB566B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_25078/*"war_board_wall_attack"*/, *(_QWORD *)&defVal);
    byte_4BB566B = 1;
  }
  return VoicePlayCondEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_25078/*"war_board_wall_attack"*/, defVal, v3);
}


int32_t __fastcall VoicePlayCondEntity__getCondType(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


int32_t __fastcall VoicePlayCondEntity__getCondValue(VoicePlayCondEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *condValues; // x8
  __int64 v3; // x9

  condValues = this->fields.condValues;
  if ( !condValues )
    sub_1C13F80(this, method);
  v3 = *(_QWORD *)&condValues->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1C13F88(this, method);
  return condValues->m_Items[1];
}


void __fastcall VoicePlayCondEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB566E & 1) == 0 )
  {
    sub_1C13D24(&VoicePlayCondEntity___c_TypeInfo, v1);
    byte_4BB566E = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(VoicePlayCondEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  VoicePlayCondEntity___c_TypeInfo->static_fields->__9 = (struct VoicePlayCondEntity___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)VoicePlayCondEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BB566F & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, x);
    byte_4BB566F = 1;
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
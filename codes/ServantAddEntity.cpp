void __fastcall ServantAddEntity___ctor(ServantAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B790 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B790 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantAddEntity__CreatePrimaryKey(ServantAddEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A5B78C & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5B78C = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}


System_String_o *__fastcall ServantAddEntity__GetOverwriteServantShortName(
        ServantAddEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5B78F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22358/*"overWriteServantShortName"*/);
    byte_4A5B78F = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_22358/*"overWriteServantShortName"*/,
            &value,
            (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1B88ACC(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall ServantAddEntity__GetPresentDialogMessageId(ServantAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantAddMaster_c *v4; // x0

  if ( (byte_4A5B78E & 1) == 0 )
  {
    sub_1B885B0(&ServantAddMaster_TypeInfo);
    byte_4A5B78E = 1;
  }
  v4 = ServantAddMaster_TypeInfo;
  if ( !ServantAddMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAddMaster_TypeInfo);
    v4 = ServantAddMaster_TypeInfo;
  }
  return ServantAddEntity__GetScript(this, v4->static_fields->PRESENT_DIALOG_MESSAGE_ID, 0, v2);
}


int32_t __fastcall ServantAddEntity__GetScript(
        ServantAddEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  ServantAddEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B78D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5B78D = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defaultValue;
  }
  if ( !value )
    sub_1B8880C(0LL, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1B88ACC(value);
  return ServantAddEntity__GetPresentDialogMessageId(v12, v13);
}
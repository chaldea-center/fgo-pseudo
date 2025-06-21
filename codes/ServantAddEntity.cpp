void __fastcall ServantAddEntity___ctor(ServantAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CD07 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1CD07 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantAddEntity__CreatePrimaryKey(ServantAddEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4B1CD02 & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B1CD02 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v6, 0LL);
}


System_String_o *__fastcall ServantAddEntity__GetIdentifyText(ServantAddEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B1CD06 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1BCAFF8(&string_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_16536/*"addIdentifyText"*/, v4);
    byte_4B1CD06 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_16536/*"addIdentifyText"*/,
            &value,
            (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1BCB514(value);
      return 0LL;
    }
  }
  return result;
}


System_String_o *__fastcall ServantAddEntity__GetOverwriteServantShortName(
        ServantAddEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B1CD05 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1BCAFF8(&string_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_22310/*"overWriteServantShortName"*/, v4);
    byte_4B1CD05 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_22310/*"overWriteServantShortName"*/,
            &value,
            (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1BCB514(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall ServantAddEntity__GetPresentDialogMessageId(ServantAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantAddMaster_c *v4; // x0

  if ( (byte_4B1CD04 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAddMaster_TypeInfo, method);
    byte_4B1CD04 = 1;
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
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ServantAddEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1CD03 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1BCAFF8(&long_TypeInfo, v7);
    byte_4B1CD03 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defaultValue;
  }
  if ( !value )
    sub_1BCB254(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1BCB514(value);
  return ServantAddEntity__GetPresentDialogMessageId(v13, v14);
}
void ServantAddEntity___ctor(ServantAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77EF9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_int___ctor__);
    byte_4E77EF9 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3533444 *)Method_DataEntityBase_int___ctor__);
}


int32_t ServantAddEntity__CreatePrimaryKey(ServantAddEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4E77EF3 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E77EF3 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v6, 0);
}


System_String_o *ServantAddEntity__GetIdentifyText(ServantAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E77EF5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&string_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16908/*"addIdentifyText"*/);
    byte_4E77EF5 = 1;
  }
  value = 0;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_16908/*"addIdentifyText"*/,
            &value,
            (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1D0F6A8(value);
      return 0;
    }
  }
  return result;
}


System_String_o *ServantAddEntity__GetOverwriteServantCoinName(ServantAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E77EF6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&string_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23030/*"overwriteServantCoinName"*/);
    byte_4E77EF6 = 1;
  }
  value = 0;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_23030/*"overwriteServantCoinName"*/,
            &value,
            (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1D0F6A8(value);
      return 0;
    }
  }
  return result;
}


System_String_o *ServantAddEntity__GetOverwriteServantRecordName(ServantAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E77EF7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&string_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23033/*"overwriteServantRecordName"*/);
    byte_4E77EF7 = 1;
  }
  value = 0;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_23033/*"overwriteServantRecordName"*/,
            &value,
            (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1D0F6A8(value);
      return 0;
    }
  }
  return result;
}


System_String_o *ServantAddEntity__GetOverwriteServantRecordRuby(ServantAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E77EF8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&string_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23034/*"overwriteServantRecordRuby"*/);
    byte_4E77EF8 = 1;
  }
  value = 0;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_23034/*"overwriteServantRecordRuby"*/,
            &value,
            (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1D0F6A8(value);
      return 0;
    }
  }
  return result;
}


System_String_o *ServantAddEntity__GetOverwriteServantShortName(ServantAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E77EF4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&string_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22951/*"overWriteServantShortName"*/);
    byte_4E77EF4 = 1;
  }
  value = 0;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_22951/*"overWriteServantShortName"*/,
            &value,
            (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1D0F6A8(value);
      return 0;
    }
  }
  return result;
}


bool ServantAddEntity__TryGetOverwriteServantRecordNameAndRuby(
        ServantAddEntity_o *this,
        System_String_o **name,
        System_String_o **ruby,
        const MethodInfo *method)
{
  System_String_o *OverwriteServantRecordName; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x1
  System_String_o *OverwriteServantRecordRuby; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  OverwriteServantRecordName = ServantAddEntity__GetOverwriteServantRecordName(this, (const MethodInfo *)name);
  *name = OverwriteServantRecordName;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)name, (int32_t)OverwriteServantRecordName, v8, v9, v10, v11, v12, v13);
  OverwriteServantRecordRuby = ServantAddEntity__GetOverwriteServantRecordRuby(this, v14);
  *ruby = OverwriteServantRecordRuby;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)ruby, (int32_t)OverwriteServantRecordRuby, v16, v17, v18, v19, v20, v21);
  return *name && *ruby != 0;
}
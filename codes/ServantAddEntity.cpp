void ServantAddEntity___ctor(ServantAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59710D8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59710D8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t ServantAddEntity__CreatePrimaryKey(ServantAddEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_59710D2 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59710D2 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v6, 0);
}


System_String_o *ServantAddEntity__GetIdentifyText(ServantAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59710D4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_17357/*"addIdentifyText"*/);
    byte_59710D4 = 1;
  }
  result = (System_String_o *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_17357/*"addIdentifyText"*/,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && value->klass != (Il2CppClass *)qword_5984390 )
    {
      sub_221405C(value, qword_5984390, v4);
      return 0;
    }
  }
  return result;
}


System_String_o *ServantAddEntity__GetOverwriteServantCoinName(ServantAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59710D5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_23729/*"overwriteServantCoinName"*/);
    byte_59710D5 = 1;
  }
  result = (System_String_o *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_23729/*"overwriteServantCoinName"*/,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && value->klass != (Il2CppClass *)qword_5984390 )
    {
      sub_221405C(value, qword_5984390, v4);
      return 0;
    }
  }
  return result;
}


System_String_o *ServantAddEntity__GetOverwriteServantRecordName(ServantAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59710D6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_23732/*"overwriteServantRecordName"*/);
    byte_59710D6 = 1;
  }
  result = (System_String_o *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_23732/*"overwriteServantRecordName"*/,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && value->klass != (Il2CppClass *)qword_5984390 )
    {
      sub_221405C(value, qword_5984390, v4);
      return 0;
    }
  }
  return result;
}


System_String_o *ServantAddEntity__GetOverwriteServantRecordRuby(ServantAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59710D7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_23733/*"overwriteServantRecordRuby"*/);
    byte_59710D7 = 1;
  }
  result = (System_String_o *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_23733/*"overwriteServantRecordRuby"*/,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && value->klass != (Il2CppClass *)qword_5984390 )
    {
      sub_221405C(value, qword_5984390, v4);
      return 0;
    }
  }
  return result;
}


System_String_o *ServantAddEntity__GetOverwriteServantShortName(ServantAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 v4; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59710D3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_23650/*"overWriteServantShortName"*/);
    byte_59710D3 = 1;
  }
  result = (System_String_o *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)StringLiteral_23650/*"overWriteServantShortName"*/,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && value->klass != (Il2CppClass *)qword_5984390 )
    {
      sub_221405C(value, qword_5984390, v4);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  System_String_o *OverwriteServantRecordRuby; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  OverwriteServantRecordName = ServantAddEntity__GetOverwriteServantRecordName(this, (const MethodInfo *)name);
  *name = OverwriteServantRecordName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)name, (int32_t)OverwriteServantRecordName, v8, v9, v10, v11, v12, v13);
  OverwriteServantRecordRuby = ServantAddEntity__GetOverwriteServantRecordRuby(this, v14);
  *ruby = OverwriteServantRecordRuby;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ruby,
    (int32_t)OverwriteServantRecordRuby,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  return *name && *ruby != 0;
}
void __fastcall ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1696C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1696C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitAddEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_4B1696B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&limitCount, method);
    byte_4B1696B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantLimitAddEntity__CreatePrimaryKey(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLimitAddEntity__CreatePK(this->fields.svtId, this->fields.limitCount, v2);
}


bool __fastcall ServantLimitAddEntity__ExistOverwriteTDInfo(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *OverwriteTDName; // x21
  const MethodInfo *v4; // x1
  System_String_o *OverwriteTDRuby; // x20
  const MethodInfo *v6; // x1
  System_String_o *OverwriteTDFileName; // x19

  OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(this, method);
  OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(this, v4);
  OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName(this, v6);
  return !System_String__IsNullOrEmpty(OverwriteTDName, 0LL)
      && !System_String__IsNullOrEmpty(OverwriteTDRuby, 0LL)
      && !System_String__IsNullOrEmpty(OverwriteTDFileName, 0LL);
}


bool __fastcall ServantLimitAddEntity__ExistOverwriteTDRank(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x0

  v2 = ServantLimitAddEntity__GetOverWriteTDRank(this, method);
  return !System_String__IsNullOrEmpty(v2, 0LL);
}


bool __fastcall ServantLimitAddEntity__ExistOverwriteTDTypeText(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x0

  v2 = ServantLimitAddEntity__GetOverWriteTDTypeText(this, method);
  return !System_String__IsNullOrEmpty(v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetAscensionAfterDialogId(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B16961 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17093/*"ascensionAfterDialogId"*/, *(_QWORD *)&defaultValue, method);
    byte_4B16961 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_17093/*"ascensionAfterDialogId"*/, defaultValue, v3);
}


System_String_o *__fastcall ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B16968 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22649/*"overwriteServantParameterTitle"*/, defaultValue, method);
    byte_4B16968 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22649/*"overwriteServantParameterTitle"*/,
           defaultValue,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16957 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21331/*"limitCountUpResultServantLimitCount"*/, method, v2);
    byte_4B16957 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_21331/*"limitCountUpResultServantLimitCount"*/, -1, v3);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDRank(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0

  if ( (byte_4B1695E & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22601/*"overWriteTDRank"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B1695E = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22601/*"overWriteTDRank"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCACFC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDTypeText(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0

  if ( (byte_4B1695F & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22603/*"overWriteTDTypeText"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B1695F = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22603/*"overWriteTDTypeText"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCACFC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  if ( (byte_4B16967 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22624/*"overwriteCv"*/, *(_QWORD *)&defaultCvId, method);
    byte_4B16967 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22624/*"overwriteCv"*/, defaultCvId, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0

  if ( (byte_4B1695D & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22596/*"overWriteServantBattleName"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B1695D = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22596/*"overWriteServantBattleName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCACFC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0

  if ( (byte_4B1695B & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22597/*"overWriteServantName"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B1695B = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22597/*"overWriteServantName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCACFC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1696A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22648/*"overwriteServantParameter"*/, method, v2);
    byte_4B1696A = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22648/*"overwriteServantParameter"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0

  if ( (byte_4B1695C & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22598/*"overWriteServantShortName"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B1695C = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22598/*"overWriteServantShortName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCACFC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_array *__fastcall ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_array *ScriptStringArrayParam; // x0
  System_String_array *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x1

  if ( (byte_4B16963 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19175/*"en_waist"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_10244/*"OverwriteShadowServantEffectNodes"*/, v6, v7);
    byte_4B16963 = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10244/*"OverwriteShadowServantEffectNodes"*/,
                             v2);
  if ( !ScriptStringArrayParam || (v9 = ScriptStringArrayParam, !*(_QWORD *)&ScriptStringArrayParam->max_length) )
  {
    v10 = sub_1BCA888(string___TypeInfo, 1LL);
    if ( !v10 )
      sub_1BCAA3C(0LL, v11);
    v9 = (System_String_array *)v10;
    if ( !*(_DWORD *)(v10 + 24) )
      sub_1BCAA44(v10, v11);
    v18 = StringLiteral_19175/*"en_waist"*/;
    *(_QWORD *)(v10 + 32) = StringLiteral_19175/*"en_waist"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 32), v18, v12, v13, v14, v15, v16, v17);
  }
  return v9;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16965 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22654/*"overwriteSvtDetailName"*/, method, v2);
    byte_4B16965 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22654/*"overwriteSvtDetailName"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDFileName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0

  if ( (byte_4B1695A & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22599/*"overWriteTDFileName"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B1695A = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22599/*"overWriteTDFileName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCACFC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0

  if ( (byte_4B16958 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22600/*"overWriteTDName"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B16958 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22600/*"overWriteTDName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCACFC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDRuby(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *result; // x0

  if ( (byte_4B16959 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22602/*"overWriteTDRuby"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B16959 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22602/*"overWriteTDRuby"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCACFC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *ScriptObject; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x19

  if ( (byte_4B16960 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23019/*"randomGroupIndex"*/, v4, v5);
    byte_4B16960 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23019/*"randomGroupIndex"*/, v2);
  if ( ScriptObject )
  {
    v8 = ScriptObject;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v7);
    LODWORD(ScriptObject) = System_Convert__ToInt32(v8, 0LL);
  }
  return (int)ScriptObject;
}


System_String_array *__fastcall ServantLimitAddEntity__GetScriptStringArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *ScriptObject; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 methodPtr_low; // x10
  ServantLimitAddEntity___c_c *v24; // x0
  System_Converter_TInput__TOutput__o *_9__23_0; // x20
  Il2CppObject *v26; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_object__o *v34; // x0
  __int64 v35; // x1

  if ( (byte_4B16962 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__string__TypeInfo, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v9, v10);
    sub_1BCA7E0(&string___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__23_0__, v13, v14);
    sub_1BCA7E0(&ServantLimitAddEntity___c_TypeInfo, v15, v16);
    byte_4B16962 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_1BCA888(string___TypeInfo, 0LL);
  v21 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1BCA888(string___TypeInfo, 0LL);
  }
  v24 = ServantLimitAddEntity___c_TypeInfo;
  if ( !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo, v18);
    v24 = ServantLimitAddEntity___c_TypeInfo;
  }
  _9__23_0 = (System_Converter_TInput__TOutput__o *)v24->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24, v18);
      v24 = ServantLimitAddEntity___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__23_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                        System_Converter_object__string__TypeInfo,
                                                        v18,
                                                        v19,
                                                        v20);
    System_Converter_object__object____ctor(
      _9__23_0,
      v26,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__23_0__,
      0LL);
    static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = (struct System_Converter_object__string__o *)_9__23_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__23_0,
      (int64_t)_9__23_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v21,
                                                       (System_Converter_T__TOutput__o *)_9__23_0,
                                                       (const MethodInfo_2E42C60 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v34 )
    sub_1BCAA3C(0LL, v35);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v34,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4B16969 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23360/*"servantParameterLimitCount"*/, *(_QWORD *)&defaultLimitCount, method);
    byte_4B16969 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23360/*"servantParameterLimitCount"*/,
           defaultLimitCount,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16956 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24924/*"weaponEffect"*/, method, v2);
    byte_4B16956 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_24924/*"weaponEffect"*/, -1, v3);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16955 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24925/*"weaponGroup"*/, method, v2);
    byte_4B16955 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_24925/*"weaponGroup"*/, -1, v3);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteCv(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16966 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22624/*"overwriteCv"*/, method, v2);
    byte_4B16966 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22624/*"overwriteCv"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16964 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22654/*"overwriteSvtDetailName"*/, method, v2);
    byte_4B16964 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22654/*"overwriteSvtDetailName"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__IsValidWeaponGroup(
        ServantLimitAddEntity_o *this,
        int32_t checkValue,
        const MethodInfo *method)
{
  return checkValue != -1;
}


bool __fastcall ServantLimitAddEntity__checkScript(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  return ServantLimitAddEntity__getScriptObject(this, key, method) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__getScript(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObject; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  int32_t result; // w0
  ServantLimitAddEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2
  long double v14; // q0

  v4 = defVal;
  if ( (byte_4B16952 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, key, *(_QWORD *)&defVal);
    byte_4B16952 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  v14 = sub_1BCACFC(ScriptObject);
  ServantLimitAddEntity__getScriptFloat(v11, v12, *(float *)&v14, v13);
  return result;
}


float __fastcall ServantLimitAddEntity__getScriptFloat(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        float defVal,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObject; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  float result; // s0
  ServantLimitAddEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4B16953 & 1) == 0 )
  {
    sub_1BCA7E0(&double_TypeInfo, key, method);
    byte_4B16953 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return defVal;
  if ( ScriptObject->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(ScriptObject, double_TypeInfo, v8, v9);
  sub_1BCACFC(ScriptObject);
  ServantLimitAddEntity__getScriptIntArrayParam(v11, v12, v13, v14);
  return result;
}


System_Int32_array *__fastcall ServantLimitAddEntity__getScriptIntArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *ScriptObject; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x19
  ServantLimitAddEntity___c_c *v22; // x0
  System_Collections_Generic_List_object__c *v23; // x1
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *_9__5_0; // x20
  Il2CppObject *v26; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_int__o *v34; // x0
  __int64 v35; // x1

  if ( (byte_4B16954 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, key, defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__5_0__, v13, v14);
    sub_1BCA7E0(&ServantLimitAddEntity___c_TypeInfo, v15, v16);
    byte_4B16954 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, (const MethodInfo *)defVal);
  if ( ScriptObject )
  {
    v21 = (System_Collections_Generic_List_object__o *)ScriptObject;
    v22 = ServantLimitAddEntity___c_TypeInfo;
    if ( !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo, v18);
      v22 = ServantLimitAddEntity___c_TypeInfo;
    }
    v23 = System_Collections_Generic_List_object__TypeInfo;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_List_object__c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      _9__5_0 = v22->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22, System_Collections_Generic_List_object__TypeInfo);
          v22 = ServantLimitAddEntity___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v22->static_fields->__9;
        _9__5_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v23, v19, v20);
        System_Converter_object__int____ctor(
          _9__5_0,
          v26,
          Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__5_0__,
          0LL);
        static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = _9__5_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
          (int64_t)_9__5_0,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      v34 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v21,
                                                        (System_Converter_T__TOutput__o *)_9__5_0,
                                                        (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v34 )
        return System_Collections_Generic_List_int___ToArray(
                 v34,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1BCACFC(v21);
    }
    sub_1BCAA3C(v34, v35);
  }
  return defVal;
}


Il2CppObject *__fastcall ServantLimitAddEntity__getScriptObject(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16951 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, method);
    byte_4B16951 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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


void __fastcall ServantLimitAddEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1696D & 1) == 0 )
  {
    sub_1BCA7E0(&ServantLimitAddEntity___c_TypeInfo, v1, v2);
    byte_4B1696D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantLimitAddEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantLimitAddEntity___c_TypeInfo->static_fields->__9 = (struct ServantLimitAddEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantLimitAddEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ServantLimitAddEntity___c___ctor(ServantLimitAddEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity___c___GetScriptStringArrayParam_b__23_0(
        ServantLimitAddEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


int32_t __fastcall ServantLimitAddEntity___c___getScriptIntArrayParam_b__5_0(
        ServantLimitAddEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B1696E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B1696E = 1;
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
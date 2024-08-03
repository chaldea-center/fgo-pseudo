void __fastcall ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCB4A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FCB4A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitAddEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_49FCB49 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&limitCount);
    byte_49FCB49 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_2E37610 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_49FCB3F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16853/*"ascensionAfterDialogId"*/, *(_QWORD *)&defaultValue);
    byte_49FCB3F = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_16853/*"ascensionAfterDialogId"*/, defaultValue, v3);
}


System_String_o *__fastcall ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_49FCB46 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22319/*"overwriteServantParameterTitle"*/, defaultValue);
    byte_49FCB46 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22319/*"overwriteServantParameterTitle"*/,
           defaultValue,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCB35 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21023/*"limitCountUpResultServantLimitCount"*/, method);
    byte_49FCB35 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_21023/*"limitCountUpResultServantLimitCount"*/, -1, v2);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDRank(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_49FCB3C & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22273/*"overWriteTDRank"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCB3C = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22273/*"overWriteTDRank"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B645E4(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDTypeText(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_49FCB3D & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22275/*"overWriteTDTypeText"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCB3D = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22275/*"overWriteTDTypeText"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B645E4(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  if ( (byte_49FCB45 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22295/*"overwriteCv"*/, *(_QWORD *)&defaultCvId);
    byte_49FCB45 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22295/*"overwriteCv"*/, defaultCvId, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_49FCB3B & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22268/*"overWriteServantBattleName"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCB3B = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22268/*"overWriteServantBattleName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B645E4(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_49FCB39 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22269/*"overWriteServantName"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCB39 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22269/*"overWriteServantName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B645E4(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FCB48 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22318/*"overwriteServantParameter"*/, method);
    byte_49FCB48 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22318/*"overwriteServantParameter"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_49FCB3A & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22270/*"overWriteServantShortName"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCB3A = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22270/*"overWriteServantShortName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B645E4(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_array *__fastcall ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_array *ScriptStringArrayParam; // x0
  System_String_array *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1

  if ( (byte_49FCB41 & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, method);
    sub_1B640C8(&StringLiteral_18907/*"en_waist"*/, v4);
    sub_1B640C8(&StringLiteral_10062/*"OverwriteShadowServantEffectNodes"*/, v5);
    byte_49FCB41 = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10062/*"OverwriteShadowServantEffectNodes"*/,
                             v2);
  if ( !ScriptStringArrayParam || (v7 = ScriptStringArrayParam, !*(_QWORD *)&ScriptStringArrayParam->max_length) )
  {
    v8 = sub_1B64170(string___TypeInfo, 1LL);
    if ( !v8 )
      sub_1B64324(0LL);
    v7 = (System_String_array *)v8;
    if ( !*(_DWORD *)(v8 + 24) )
      sub_1B6432C(v8, v9);
    v12 = StringLiteral_18907/*"en_waist"*/;
    *(_QWORD *)(v8 + 32) = StringLiteral_18907/*"en_waist"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 32), v12, v10, v11);
  }
  return v7;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FCB43 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22323/*"overwriteSvtDetailName"*/, method);
    byte_49FCB43 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22323/*"overwriteSvtDetailName"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDFileName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_49FCB38 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22271/*"overWriteTDFileName"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCB38 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22271/*"overWriteTDFileName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B645E4(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_49FCB36 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22272/*"overWriteTDName"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCB36 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22272/*"overWriteTDName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B645E4(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDRuby(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_49FCB37 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22274/*"overWriteTDRuby"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCB37 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22274/*"overWriteTDRuby"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B645E4(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  Il2CppObject *ScriptObject; // x0
  Il2CppObject *v6; // x19

  if ( (byte_49FCB3E & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, method);
    sub_1B640C8(&StringLiteral_22682/*"randomGroupIndex"*/, v4);
    byte_49FCB3E = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22682/*"randomGroupIndex"*/, v2);
  if ( ScriptObject )
  {
    v6 = ScriptObject;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    LODWORD(ScriptObject) = System_Convert__ToInt32(v6, 0LL);
  }
  return (int)ScriptObject;
}


System_String_array *__fastcall ServantLimitAddEntity__GetScriptStringArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *ScriptObject; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x19
  __int64 methodPtr_low; // x10
  ServantLimitAddEntity___c_c *v17; // x0
  System_Converter_TInput__TOutput__o *_9__23_0; // x20
  Il2CppObject *v19; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *v23; // x0

  if ( (byte_49FCB40 & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__string__TypeInfo, key);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v6);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1B640C8(&string___TypeInfo, v8);
    sub_1B640C8(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__23_0__, v9);
    sub_1B640C8(&ServantLimitAddEntity___c_TypeInfo, v10);
    byte_49FCB40 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_1B64170(string___TypeInfo, 0LL);
  v14 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1B64170(string___TypeInfo, 0LL);
  }
  v17 = ServantLimitAddEntity___c_TypeInfo;
  if ( !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v17 = ServantLimitAddEntity___c_TypeInfo;
  }
  _9__23_0 = (System_Converter_TInput__TOutput__o *)v17->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ServantLimitAddEntity___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__23_0 = (System_Converter_TInput__TOutput__o *)sub_1B64314(System_Converter_object__string__TypeInfo, v12, v13);
    System_Converter_object__object____ctor(
      _9__23_0,
      v19,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__23_0__,
      0LL);
    static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = (struct System_Converter_object__string__o *)_9__23_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v21, v22);
  }
  v23 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v14,
                                                       (System_Converter_T__TOutput__o *)_9__23_0,
                                                       (const MethodInfo_2D6F2A4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v23 )
    sub_1B64324(0LL);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v23,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  if ( (byte_49FCB47 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23020/*"servantParameterLimitCount"*/, *(_QWORD *)&defaultLimitCount);
    byte_49FCB47 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23020/*"servantParameterLimitCount"*/,
           defaultLimitCount,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCB34 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24571/*"weaponEffect"*/, method);
    byte_49FCB34 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_24571/*"weaponEffect"*/, -1, v2);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FCB33 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24572/*"weaponGroup"*/, method);
    byte_49FCB33 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_24572/*"weaponGroup"*/, -1, v2);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteCv(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCB44 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22295/*"overwriteCv"*/, method);
    byte_49FCB44 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22295/*"overwriteCv"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FCB42 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22323/*"overwriteSvtDetailName"*/, method);
    byte_49FCB42 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22323/*"overwriteSvtDetailName"*/, 0LL);
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
  if ( (byte_49FCB30 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, key);
    byte_49FCB30 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  v14 = sub_1B645E4(ScriptObject);
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

  if ( (byte_49FCB31 & 1) == 0 )
  {
    sub_1B640C8(&double_TypeInfo, key);
    byte_49FCB31 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return defVal;
  if ( ScriptObject->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(ScriptObject, double_TypeInfo, v8, v9);
  sub_1B645E4(ScriptObject);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *ScriptObject; // x0
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x19
  ServantLimitAddEntity___c_c *v15; // x0
  System_Collections_Generic_List_object__c *v16; // x1
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *_9__5_0; // x20
  Il2CppObject *v19; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_int__o *v23; // x0

  if ( (byte_49FCB32 & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__int__TypeInfo, key);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1B640C8(&Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__5_0__, v10);
    sub_1B640C8(&ServantLimitAddEntity___c_TypeInfo, v11);
    byte_49FCB32 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, (const MethodInfo *)defVal);
  if ( ScriptObject )
  {
    v14 = (System_Collections_Generic_List_object__o *)ScriptObject;
    v15 = ServantLimitAddEntity___c_TypeInfo;
    if ( !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
      v15 = ServantLimitAddEntity___c_TypeInfo;
    }
    v16 = System_Collections_Generic_List_object__TypeInfo;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v14->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_List_object__c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      _9__5_0 = v15->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = ServantLimitAddEntity___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v15->static_fields->__9;
        _9__5_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_object__int__TypeInfo, v16, v13);
        System_Converter_object__int____ctor(
          _9__5_0,
          v19,
          Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__5_0__,
          0LL);
        static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = _9__5_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v21, v22);
      }
      v23 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v14,
                                                        (System_Converter_T__TOutput__o *)_9__5_0,
                                                        (const MethodInfo_2D6F1A0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v23 )
        return System_Collections_Generic_List_int___ToArray(
                 v23,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1B645E4(v14);
    }
    sub_1B64324(v23);
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

  if ( (byte_49FCB2F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49FCB2F = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCB4B & 1) == 0 )
  {
    sub_1B640C8(&ServantLimitAddEntity___c_TypeInfo, v1);
    byte_49FCB4B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantLimitAddEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantLimitAddEntity___c_TypeInfo->static_fields->__9 = (struct ServantLimitAddEntity___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantLimitAddEntity___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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

  if ( (byte_49FCB4C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, x);
    byte_49FCB4C = 1;
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
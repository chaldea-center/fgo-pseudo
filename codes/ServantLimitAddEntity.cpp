void __fastcall ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE57 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1CE57 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitAddEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_4B1CE56 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&limitCount);
    byte_4B1CE56 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4B1CE3B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16763/*"ascensionAfterDialogId"*/, *(_QWORD *)&defaultValue);
    byte_4B1CE3B = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_16763/*"ascensionAfterDialogId"*/, defaultValue, v3);
}


System_String_o *__fastcall ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1CE42 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22375/*"overwriteServantParameterTitle"*/, defaultValue);
    byte_4B1CE42 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22375/*"overwriteServantParameterTitle"*/,
           defaultValue,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1CE31 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_21041/*"limitCountUpResultServantLimitCount"*/, method);
    byte_4B1CE31 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_21041/*"limitCountUpResultServantLimitCount"*/, -1, v2);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDRank(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_4B1CE38 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_22313/*"overWriteTDRank"*/, v4);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1CE38 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22313/*"overWriteTDRank"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCB514(result);
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

  if ( (byte_4B1CE39 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_22315/*"overWriteTDTypeText"*/, v4);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1CE39 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22315/*"overWriteTDTypeText"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCB514(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteAtkBase(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1CE4A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22327/*"overwriteAtkBase"*/, *(_QWORD *)&defaultValue);
    byte_4B1CE4A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22327/*"overwriteAtkBase"*/, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteAtkMax(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1CE4C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22328/*"overwriteAtkMax"*/, *(_QWORD *)&defaultValue);
    byte_4B1CE4C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22328/*"overwriteAtkMax"*/, defaultValue, 0LL);
}


System_Int32_array *__fastcall ServantLimitAddEntity__GetOverwriteClassPassive(
        ServantLimitAddEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1CE54 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22334/*"overwriteClassPassive"*/, defaultValue);
    byte_4B1CE54 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22334/*"overwriteClassPassive"*/, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteCost(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1CE52 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22340/*"overwriteCost"*/, *(_QWORD *)&defaultValue);
    byte_4B1CE52 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22340/*"overwriteCost"*/, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  if ( (byte_4B1CE41 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22341/*"overwriteCv"*/, *(_QWORD *)&defaultCvId);
    byte_4B1CE41 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22341/*"overwriteCv"*/, defaultCvId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteExpType(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1CE50 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22349/*"overwriteExpType"*/, *(_QWORD *)&defaultValue);
    byte_4B1CE50 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22349/*"overwriteExpType"*/, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteHpBase(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1CE46 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22351/*"overwriteHpBase"*/, *(_QWORD *)&defaultValue);
    byte_4B1CE46 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22351/*"overwriteHpBase"*/, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteHpMax(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1CE48 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22352/*"overwriteHpMax"*/, *(_QWORD *)&defaultValue);
    byte_4B1CE48 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22352/*"overwriteHpMax"*/, defaultValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteRarity(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1CE4E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22367/*"overwriteRarity"*/, *(_QWORD *)&defaultValue);
    byte_4B1CE4E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22367/*"overwriteRarity"*/, defaultValue, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_4B1CE37 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_22308/*"overWriteServantBattleName"*/, v4);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1CE37 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22308/*"overWriteServantBattleName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCB514(result);
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

  if ( (byte_4B1CE35 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_22309/*"overWriteServantName"*/, v4);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1CE35 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22309/*"overWriteServantName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCB514(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CE45 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22374/*"overwriteServantParameter"*/, method);
    byte_4B1CE45 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22374/*"overwriteServantParameter"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_4B1CE36 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_22310/*"overWriteServantShortName"*/, v4);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1CE36 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22310/*"overWriteServantShortName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCB514(result);
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
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  int32_t v12; // w1

  if ( (byte_4B1CE3D & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_18823/*"en_waist"*/, v4);
    sub_1BCAFF8(&StringLiteral_10009/*"OverwriteShadowServantEffectNodes"*/, v5);
    byte_4B1CE3D = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10009/*"OverwriteShadowServantEffectNodes"*/,
                             v2);
  if ( !ScriptStringArrayParam || (v7 = ScriptStringArrayParam, !*(_QWORD *)&ScriptStringArrayParam->max_length) )
  {
    v8 = sub_1BCB0A0(string___TypeInfo, 1LL);
    if ( !v8 )
      sub_1BCB254(0LL, v9);
    v7 = (System_String_array *)v8;
    if ( !*(_DWORD *)(v8 + 24) )
      sub_1BCB25C(v8, v9, v10);
    v12 = StringLiteral_18823/*"en_waist"*/;
    *(_QWORD *)(v8 + 32) = StringLiteral_18823/*"en_waist"*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 32), v12, v10, v11);
  }
  return v7;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CE3F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22381/*"overwriteSvtDetailName"*/, method);
    byte_4B1CE3F = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22381/*"overwriteSvtDetailName"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDFileName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_4B1CE34 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_22311/*"overWriteTDFileName"*/, v4);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1CE34 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22311/*"overWriteTDFileName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCB514(result);
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

  if ( (byte_4B1CE32 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_22312/*"overWriteTDName"*/, v4);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1CE32 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22312/*"overWriteTDName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCB514(result);
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

  if ( (byte_4B1CE33 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_22314/*"overWriteTDRuby"*/, v4);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B1CE33 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22314/*"overWriteTDRuby"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1BCB514(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  Il2CppObject *ScriptObject; // x0
  Il2CppObject *v6; // x19

  if ( (byte_4B1CE3A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Convert_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_22745/*"randomGroupIndex"*/, v4);
    byte_4B1CE3A = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22745/*"randomGroupIndex"*/, v2);
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
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 methodPtr_low; // x10
  ServantLimitAddEntity___c_c *v15; // x0
  System_Converter_TInput__TOutput__o *_9__23_0; // x20
  Il2CppObject *v17; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_4B1CE3C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Converter_object__string__TypeInfo, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__ToArray__, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1BCAFF8(&string___TypeInfo, v8);
    sub_1BCAFF8(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__23_0__, v9);
    sub_1BCAFF8(&ServantLimitAddEntity___c_TypeInfo, v10);
    byte_4B1CE3C = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_1BCB0A0(string___TypeInfo, 0LL);
  v12 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1BCB0A0(string___TypeInfo, 0LL);
  }
  v15 = ServantLimitAddEntity___c_TypeInfo;
  if ( !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v15 = ServantLimitAddEntity___c_TypeInfo;
  }
  _9__23_0 = (System_Converter_TInput__TOutput__o *)v15->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = ServantLimitAddEntity___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__23_0 = (System_Converter_TInput__TOutput__o *)sub_1BCB244(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__23_0,
      v17,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__23_0__,
      0LL);
    static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = (struct System_Converter_object__string__o *)_9__23_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v19, v20);
  }
  v21 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v12,
                                                       (System_Converter_T__TOutput__o *)_9__23_0,
                                                       (const MethodInfo_2F4A124 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v21 )
    sub_1BCB254(0LL, v22);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4B1CE43 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23076/*"servantParameterLimitCount"*/, *(_QWORD *)&defaultLimitCount);
    byte_4B1CE43 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23076/*"servantParameterLimitCount"*/,
           defaultLimitCount,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1CE30 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_24573/*"weaponEffect"*/, method);
    byte_4B1CE30 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_24573/*"weaponEffect"*/, -1, v2);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1CE2F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_24574/*"weaponGroup"*/, method);
    byte_4B1CE2F = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_24574/*"weaponGroup"*/, -1, v2);
}


bool __fastcall ServantLimitAddEntity__HasKeyOverwriteAtkBase(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE4B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22327/*"overwriteAtkBase"*/, method);
    byte_4B1CE4B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22327/*"overwriteAtkBase"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__HasKeyOverwriteAtkMax(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE4D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22328/*"overwriteAtkMax"*/, method);
    byte_4B1CE4D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22328/*"overwriteAtkMax"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__HasKeyOverwriteClassPassive(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CE55 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22334/*"overwriteClassPassive"*/, method);
    byte_4B1CE55 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22334/*"overwriteClassPassive"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__HasKeyOverwriteCost(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE53 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22340/*"overwriteCost"*/, method);
    byte_4B1CE53 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22340/*"overwriteCost"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__HasKeyOverwriteExpType(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE51 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22349/*"overwriteExpType"*/, method);
    byte_4B1CE51 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22349/*"overwriteExpType"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__HasKeyOverwriteHpBase(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE47 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22351/*"overwriteHpBase"*/, method);
    byte_4B1CE47 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22351/*"overwriteHpBase"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__HasKeyOverwriteHpMax(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE49 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22352/*"overwriteHpMax"*/, method);
    byte_4B1CE49 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22352/*"overwriteHpMax"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__HasKeyOverwriteRarity(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE4F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22367/*"overwriteRarity"*/, method);
    byte_4B1CE4F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22367/*"overwriteRarity"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__HasServantParameterLimitCountKey(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CE44 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23076/*"servantParameterLimitCount"*/, method);
    byte_4B1CE44 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23076/*"servantParameterLimitCount"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteCv(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE40 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22341/*"overwriteCv"*/, method);
    byte_4B1CE40 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22341/*"overwriteCv"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CE3E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22381/*"overwriteSvtDetailName"*/, method);
    byte_4B1CE3E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22381/*"overwriteSvtDetailName"*/, 0LL);
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
  if ( (byte_4B1CE2C & 1) == 0 )
  {
    sub_1BCAFF8(&long_TypeInfo, key);
    byte_4B1CE2C = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  v14 = sub_1BCB514(ScriptObject);
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

  if ( (byte_4B1CE2D & 1) == 0 )
  {
    sub_1BCAFF8(&double_TypeInfo, key);
    byte_4B1CE2D = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return defVal;
  if ( ScriptObject->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(ScriptObject, double_TypeInfo, v8, v9);
  sub_1BCB514(ScriptObject);
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
  System_Collections_Generic_List_object__o *v13; // x19
  ServantLimitAddEntity___c_c *v14; // x0
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *_9__5_0; // x20
  Il2CppObject *v17; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_int__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_4B1CE2E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Converter_object__int__TypeInfo, key);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_1BCAFF8(&Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__5_0__, v10);
    sub_1BCAFF8(&ServantLimitAddEntity___c_TypeInfo, v11);
    byte_4B1CE2E = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, (const MethodInfo *)defVal);
  if ( ScriptObject )
  {
    v13 = (System_Collections_Generic_List_object__o *)ScriptObject;
    v14 = ServantLimitAddEntity___c_TypeInfo;
    if ( !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
      v14 = ServantLimitAddEntity___c_TypeInfo;
    }
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v13->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_List_object__c *)v13->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      _9__5_0 = v14->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = ServantLimitAddEntity___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v14->static_fields->__9;
        _9__5_0 = (System_Converter_object__int__o *)sub_1BCB244(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(
          _9__5_0,
          v17,
          Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__5_0__,
          0LL);
        static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = _9__5_0;
        sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v19, v20);
      }
      v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v13,
                                                        (System_Converter_T__TOutput__o *)_9__5_0,
                                                        (const MethodInfo_2F4A020 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v21 )
        return System_Collections_Generic_List_int___ToArray(
                 v21,
                 (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1BCB514(v13);
    }
    sub_1BCB254(v21, v22);
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

  if ( (byte_4B1CE2B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4B1CE2B = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1CE58 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantLimitAddEntity___c_TypeInfo, v1);
    byte_4B1CE58 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ServantLimitAddEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantLimitAddEntity___c_TypeInfo->static_fields->__9 = (struct ServantLimitAddEntity___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)ServantLimitAddEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
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

  if ( (byte_4B1CE59 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, x);
    byte_4B1CE59 = 1;
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
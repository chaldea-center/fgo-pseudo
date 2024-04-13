void __fastcall ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EAE20 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantLimitAddEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EAE05 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, limitCount, (_DWORD)method, v3);
    byte_42EAE05 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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


int32_t __fastcall ServantLimitAddEntity__GetAscensionAfterDialogId(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42EAE16 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16679/*"ascensionAfterDialogId"*/, defaultValue, (_DWORD)method, v3);
    byte_42EAE16 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_16679/*"ascensionAfterDialogId"*/, defaultValue, v3);
}


System_String_o *__fastcall ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EAE1D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21664/*"overwriteServantParameterTitle"*/, (_DWORD)defaultValue, (_DWORD)method, v3);
    byte_42EAE1D = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21664/*"overwriteServantParameterTitle"*/,
           defaultValue,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EAE0C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20480/*"limitCountUpResultServantLimitCount"*/, (_DWORD)method, v2, v3);
    byte_42EAE0C = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_20480/*"limitCountUpResultServantLimitCount"*/, -1, v3);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDRank(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0

  if ( (byte_42EAE13 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21621/*"overWriteTDRank"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EAE13 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21621/*"overWriteTDRank"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B5D990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDTypeText(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0

  if ( (byte_42EAE14 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21623/*"overWriteTDTypeText"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EAE14 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21623/*"overWriteTDTypeText"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B5D990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EAE1C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21640/*"overwriteCv"*/, defaultCvId, (_DWORD)method, v3);
    byte_42EAE1C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21640/*"overwriteCv"*/, defaultCvId, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0

  if ( (byte_42EAE12 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21616/*"overWriteServantBattleName"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EAE12 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21616/*"overWriteServantBattleName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B5D990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0

  if ( (byte_42EAE10 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21617/*"overWriteServantName"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EAE10 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21617/*"overWriteServantName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B5D990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE1F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21663/*"overwriteServantParameter"*/, (_DWORD)method, v2, v3);
    byte_42EAE1F = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21663/*"overwriteServantParameter"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0

  if ( (byte_42EAE11 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21618/*"overWriteServantShortName"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EAE11 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21618/*"overWriteServantShortName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B5D990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_array *__fastcall ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_array *ScriptStringArrayParam; // x0
  System_String_array *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  System_Int32_array **v22; // x1
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_42EAE18 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18554/*"en_waist"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10301/*"OverwriteShadowServantEffectNodes"*/, v8, v9, v10);
    byte_42EAE18 = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10301/*"OverwriteShadowServantEffectNodes"*/,
                             v2);
  if ( !ScriptStringArrayParam || (v12 = ScriptStringArrayParam, !*(_QWORD *)&ScriptStringArrayParam->max_length) )
  {
    v13 = sub_B5D5DC(string___TypeInfo, 1LL);
    if ( !v13 )
      sub_B5D69C(0LL, v14);
    v12 = (System_String_array *)v13;
    v21 = StringLiteral_18554/*"en_waist"*/;
    if ( StringLiteral_18554/*"en_waist"*/ )
    {
      v21 = sub_B5D684(StringLiteral_18554/*"en_waist"*/, v12->obj.klass->_1.element_class);
      if ( !v21 )
      {
        v25 = sub_B5D6BC(0LL);
        sub_B5D668(v25, 0LL);
      }
      v22 = (System_Int32_array **)StringLiteral_18554/*"en_waist"*/;
    }
    else
    {
      v22 = 0LL;
    }
    if ( !v12->max_length )
    {
      v24 = sub_B5D6C8(v21);
      sub_B5D668(v24, 0LL);
    }
    v12->m_Items[0] = (System_String_o *)v22;
    sub_B5D560((BattleServantConfConponent_o *)v12->m_Items, v22, v15, v16, v17, v18, v19, v20);
  }
  return v12;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE1A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21668/*"overwriteSvtDetailName"*/, (_DWORD)method, v2, v3);
    byte_42EAE1A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21668/*"overwriteSvtDetailName"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDFileName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0

  if ( (byte_42EAE0F & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21619/*"overWriteTDFileName"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EAE0F = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21619/*"overWriteTDFileName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B5D990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0

  if ( (byte_42EAE0D & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21620/*"overWriteTDName"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EAE0D = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21620/*"overWriteTDName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B5D990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDRuby(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *result; // x0

  if ( (byte_42EAE0E & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21622/*"overWriteTDRuby"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EAE0E = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21622/*"overWriteTDRuby"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B5D990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *ScriptObject; // x0
  Il2CppObject *v9; // x19

  if ( (byte_42EAE15 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21986/*"randomGroupIndex"*/, v5, v6, v7);
    byte_42EAE15 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21986/*"randomGroupIndex"*/, v2);
  if ( ScriptObject )
  {
    v9 = ScriptObject;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    LODWORD(ScriptObject) = System_Convert__ToInt32(v9, 0LL);
  }
  return (int)ScriptObject;
}


System_String_array *__fastcall ServantLimitAddEntity__GetScriptStringArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_string__o *v28; // x19
  __int64 v29; // x10
  ServantLimitAddEntity___c_c *v31; // x0
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__37_0; // x20
  Il2CppObject *v34; // x21
  struct ServantLimitAddEntity___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v42; // x0
  __int64 v43; // x1

  if ( (byte_42EAE17 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__string___ctor__, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&System_Converter_object__string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&string___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__37_0__, v21, v22, v23);
    sub_B5D5C4(&ServantLimitAddEntity___c_TypeInfo, v24, v25, v26);
    byte_42EAE17 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
  v28 = (System_Collections_Generic_List_string__o *)ScriptObject;
  v29 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&ScriptObject->klass->_2.bitflags2 + 1) < (unsigned int)v29
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[v29 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
  }
  v31 = ServantLimitAddEntity___c_TypeInfo;
  if ( (BYTE3(ServantLimitAddEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v31 = ServantLimitAddEntity___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__37_0 = (System_Converter_string__string__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_object__string__TypeInfo);
    System_Converter_string__string____ctor(
      _9__37_0,
      v34,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__37_0__,
      (const MethodInfo_23F738C *)Method_System_Converter_object__string___ctor__);
    v35 = ServantLimitAddEntity___c_TypeInfo->static_fields;
    v35->__9__37_0 = (struct System_Converter_object__string__o *)_9__37_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v35->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                        v28,
                                                                        (System_Converter_T__TOutput__o *)_9__37_0,
                                                                        (const MethodInfo_192E1C0 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v42 )
    sub_B5D69C(0LL, v43);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v42,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EAE1E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22280/*"servantParameterLimitCount"*/, defaultLimitCount, (_DWORD)method, v3);
    byte_42EAE1E = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22280/*"servantParameterLimitCount"*/,
           defaultLimitCount,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EAE0B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23568/*"weaponEffect"*/, (_DWORD)method, v2, v3);
    byte_42EAE0B = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_23568/*"weaponEffect"*/, -1, v3);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EAE0A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23569/*"weaponGroup"*/, (_DWORD)method, v2, v3);
    byte_42EAE0A = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_23569/*"weaponGroup"*/, -1, v3);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteCv(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE1B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21640/*"overwriteCv"*/, (_DWORD)method, v2, v3);
    byte_42EAE1B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21640/*"overwriteCv"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE19 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21668/*"overwriteSvtDetailName"*/, (_DWORD)method, v2, v3);
    byte_42EAE19 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21668/*"overwriteSvtDetailName"*/, 0LL);
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
  int32_t result; // w0
  ServantLimitAddEntity_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2
  long double v12; // q0

  v4 = defVal;
  if ( (byte_42EAE07 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, defVal, method);
    byte_42EAE07 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject);
  v12 = sub_B5D990(ScriptObject);
  ServantLimitAddEntity__getScriptFloat(v9, v10, *(float *)&v12, v11);
  return result;
}


float __fastcall ServantLimitAddEntity__getScriptFloat(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        float defVal,
        const MethodInfo *method)
{
  __int64 v4; // x3
  Il2CppObject *ScriptObject; // x0
  float result; // s0
  ServantLimitAddEntity_o *v10; // x0
  System_String_o *v11; // x1
  System_Int32_array *v12; // x2
  const MethodInfo *v13; // x3

  if ( (byte_42EAE08 & 1) == 0 )
  {
    sub_B5D5C4(&double_TypeInfo, (_DWORD)key, (_DWORD)method, v4);
    byte_42EAE08 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return defVal;
  if ( ScriptObject->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(ScriptObject);
  sub_B5D990(ScriptObject);
  ServantLimitAddEntity__getScriptIntArrayParam(v10, v11, v12, v13);
  return result;
}


System_Int32_array *__fastcall ServantLimitAddEntity__getScriptIntArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *_9__19_0; // x20
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v26; // x19
  ServantLimitAddEntity___c_c *v27; // x0
  __int64 v28; // x9
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x8
  __int64 v30; // x9
  Il2CppObject *v32; // x21
  struct ServantLimitAddEntity___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_int__o *v40; // x0
  __int64 v41; // x1

  _9__19_0 = defVal;
  if ( (byte_42EAE09 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__19_0__, v19, v20, v21);
    sub_B5D5C4(&ServantLimitAddEntity___c_TypeInfo, v22, v23, v24);
    byte_42EAE09 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObject )
    return _9__19_0;
  v26 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObject;
  v27 = ServantLimitAddEntity___c_TypeInfo;
  if ( (BYTE3(ServantLimitAddEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v27 = ServantLimitAddEntity___c_TypeInfo;
  }
  v28 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28
    || (System_Collections_Generic_List_object__c *)v26->klass->_2.typeHierarchy[v28 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_12:
    sub_B5D990(v26);
    return _9__19_0;
  }
  static_fields = v27->static_fields;
  _9__19_0 = (System_Int32_array *)static_fields->__9__19_0;
  if ( _9__19_0 )
  {
    v30 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (System_Collections_Generic_List_object__c *)v26->klass->_2.typeHierarchy[v30 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_12;
    }
  }
  else
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Int32_array *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      (System_Converter_BattleActionData_HealData__int__o *)_9__19_0,
      v32,
      Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__19_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v33 = ServantLimitAddEntity___c_TypeInfo->static_fields;
    v33->__9__19_0 = (struct System_Converter_object__int__o *)_9__19_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v33->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v26,
                                                    (System_Converter_T__TOutput__o *)_9__19_0,
                                                    (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v40 )
    sub_B5D69C(0LL, v41);
  return System_Collections_Generic_List_int___ToArray(
           v40,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall ServantLimitAddEntity__getScriptObject(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EAE06 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EAE06 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
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


void __fastcall ServantLimitAddEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D61 & 1) == 0 )
  {
    sub_B5D5C4(&ServantLimitAddEntity___c_TypeInfo, v1, v2, v3);
    byte_42E5D61 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantLimitAddEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantLimitAddEntity___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantLimitAddEntity___c___ctor(ServantLimitAddEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity___c___GetScriptStringArrayParam_b__37_0(
        ServantLimitAddEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


int32_t __fastcall ServantLimitAddEntity___c___getScriptIntArrayParam_b__19_0(
        ServantLimitAddEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E5D62 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5D62 = 1;
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
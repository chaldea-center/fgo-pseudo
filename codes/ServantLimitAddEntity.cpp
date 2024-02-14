void __fastcall ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216991 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4216991 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitAddEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_4216976 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&limitCount);
    byte_4216976 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4216987 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16530/*"ascensionAfterDialogId"*/, *(_QWORD *)&defaultValue);
    byte_4216987 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_16530/*"ascensionAfterDialogId"*/, defaultValue, v3);
}


System_String_o *__fastcall ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_421698E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21450/*"overwriteServantParameterTitle"*/, defaultValue);
    byte_421698E = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21450/*"overwriteServantParameterTitle"*/,
           defaultValue,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421697D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20287/*"limitCountUpResultServantLimitCount"*/, method);
    byte_421697D = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_20287/*"limitCountUpResultServantLimitCount"*/, -1, v2);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDRank(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_4216984 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21411/*"overWriteTDRank"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4216984 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21411/*"overWriteTDRank"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B0DC70(result);
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

  if ( (byte_4216985 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21413/*"overWriteTDTypeText"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4216985 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21413/*"overWriteTDTypeText"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B0DC70(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  if ( (byte_421698D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21428/*"overwriteCv"*/, *(_QWORD *)&defaultCvId);
    byte_421698D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21428/*"overwriteCv"*/, defaultCvId, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_4216983 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21406/*"overWriteServantBattleName"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4216983 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21406/*"overWriteServantBattleName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B0DC70(result);
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

  if ( (byte_4216981 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21407/*"overWriteServantName"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4216981 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21407/*"overWriteServantName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B0DC70(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4216990 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21449/*"overwriteServantParameter"*/, method);
    byte_4216990 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21449/*"overwriteServantParameter"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_4216982 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21408/*"overWriteServantShortName"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4216982 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21408/*"overWriteServantShortName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B0DC70(result);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0
  System_Int32_array **v16; // x1
  __int64 v18; // x0
  __int64 v19; // x0

  if ( (byte_4216989 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18383/*"en_waist"*/, v4);
    sub_B0D8A4(&StringLiteral_10219/*"OverwriteShadowServantEffectNodes"*/, v5);
    byte_4216989 = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10219/*"OverwriteShadowServantEffectNodes"*/,
                             v2);
  if ( !ScriptStringArrayParam || (v7 = ScriptStringArrayParam, !*(_QWORD *)&ScriptStringArrayParam->max_length) )
  {
    v8 = sub_B0D8BC(string___TypeInfo, 1LL);
    if ( !v8 )
      sub_B0D97C(0LL);
    v7 = (System_String_array *)v8;
    v15 = StringLiteral_18383/*"en_waist"*/;
    if ( StringLiteral_18383/*"en_waist"*/ )
    {
      v15 = sub_B0D964(StringLiteral_18383/*"en_waist"*/, v7->obj.klass->_1.element_class);
      if ( !v15 )
      {
        v19 = sub_B0D99C(0LL);
        sub_B0D948(v19, 0LL);
      }
      v16 = (System_Int32_array **)StringLiteral_18383/*"en_waist"*/;
    }
    else
    {
      v16 = 0LL;
    }
    if ( !v7->max_length )
    {
      v18 = sub_B0D9A8(v15);
      sub_B0D948(v18, 0LL);
    }
    v7->m_Items[0] = (System_String_o *)v16;
    sub_B0D840((BattleServantConfConponent_o *)v7->m_Items, v16, v9, v10, v11, v12, v13, v14);
  }
  return v7;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_421698B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21454/*"overwriteSvtDetailName"*/, method);
    byte_421698B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21454/*"overwriteSvtDetailName"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDFileName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_4216980 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21409/*"overWriteTDFileName"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4216980 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21409/*"overWriteTDFileName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B0DC70(result);
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

  if ( (byte_421697E & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21410/*"overWriteTDName"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_421697E = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21410/*"overWriteTDName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B0DC70(result);
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

  if ( (byte_421697F & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21412/*"overWriteTDRuby"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_421697F = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21412/*"overWriteTDRuby"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B0DC70(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  Il2CppObject *ScriptObject; // x0
  Il2CppObject *v6; // x19

  if ( (byte_4216986 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21763/*"randomGroupIndex"*/, v4);
    byte_4216986 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21763/*"randomGroupIndex"*/, v2);
  if ( ScriptObject )
  {
    v6 = ScriptObject;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
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
  __int64 v11; // x1
  Il2CppObject *ScriptObject; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_string__o *v15; // x19
  __int64 v16; // x10
  ServantLimitAddEntity___c_c *v18; // x0
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__37_0; // x20
  Il2CppObject *v21; // x21
  struct ServantLimitAddEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v29; // x0

  if ( (byte_4216988 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__string___ctor__, key);
    sub_B0D8A4(&System_Converter_object__string__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_B0D8A4(&string___TypeInfo, v9);
    sub_B0D8A4(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__37_0__, v10);
    sub_B0D8A4(&ServantLimitAddEntity___c_TypeInfo, v11);
    byte_4216988 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_B0D8BC(string___TypeInfo, 0LL);
  v15 = (System_Collections_Generic_List_string__o *)ScriptObject;
  v16 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&ScriptObject->klass->_2.bitflags2 + 1) < (unsigned int)v16
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_B0D8BC(string___TypeInfo, 0LL);
  }
  v18 = ServantLimitAddEntity___c_TypeInfo;
  if ( (BYTE3(ServantLimitAddEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v18 = ServantLimitAddEntity___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__37_0 = (System_Converter_string__string__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Converter_string__string__o *)sub_B0D974(System_Converter_object__string__TypeInfo, v13, v14);
    System_Converter_string__string____ctor(
      _9__37_0,
      v21,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__37_0__,
      (const MethodInfo_2666150 *)Method_System_Converter_object__string___ctor__);
    v22 = ServantLimitAddEntity___c_TypeInfo->static_fields;
    v22->__9__37_0 = (struct System_Converter_object__string__o *)_9__37_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v22->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                        v15,
                                                                        (System_Converter_T__TOutput__o *)_9__37_0,
                                                                        (const MethodInfo_189F878 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v29 )
    sub_B0D97C(0LL);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v29,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  if ( (byte_421698F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22054/*"servantParameterLimitCount"*/, *(_QWORD *)&defaultLimitCount);
    byte_421698F = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22054/*"servantParameterLimitCount"*/,
           defaultLimitCount,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421697C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23335/*"weaponEffect"*/, method);
    byte_421697C = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_23335/*"weaponEffect"*/, -1, v2);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_421697B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23336/*"weaponGroup"*/, method);
    byte_421697B = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_23336/*"weaponGroup"*/, -1, v2);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteCv(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_421698C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21428/*"overwriteCv"*/, method);
    byte_421698C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21428/*"overwriteCv"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_421698A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21454/*"overwriteSvtDetailName"*/, method);
    byte_421698A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21454/*"overwriteSvtDetailName"*/, 0LL);
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
  float v12; // s0

  v4 = defVal;
  if ( (byte_4216978 & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, key);
    byte_4216978 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject);
  v9 = (ServantLimitAddEntity_o *)sub_B0DC70(ScriptObject);
  ServantLimitAddEntity__getScriptFloat(v9, v10, v12, v11);
  return result;
}


float __fastcall ServantLimitAddEntity__getScriptFloat(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        float defVal,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObject; // x0
  float result; // s0
  ServantLimitAddEntity_o *v9; // x0
  System_String_o *v10; // x1
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x3

  if ( (byte_4216979 & 1) == 0 )
  {
    sub_B0D8A4(&double_TypeInfo, key);
    byte_4216979 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return defVal;
  if ( ScriptObject->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(ScriptObject);
  v9 = (ServantLimitAddEntity_o *)sub_B0DC70(ScriptObject);
  ServantLimitAddEntity__getScriptIntArrayParam(v9, v10, v11, v12);
  return result;
}


System_Int32_array *__fastcall ServantLimitAddEntity__getScriptIntArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *_9__19_0; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *ScriptObject; // x0
  __int64 v14; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v15; // x19
  ServantLimitAddEntity___c_c *v16; // x0
  System_Collections_Generic_List_object__c *v17; // x1
  __int64 v18; // x9
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x8
  __int64 v20; // x9
  Il2CppObject *v22; // x21
  struct ServantLimitAddEntity___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x0

  _9__19_0 = defVal;
  if ( (byte_421697A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, key);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B0D8A4(&Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__19_0__, v11);
    sub_B0D8A4(&ServantLimitAddEntity___c_TypeInfo, v12);
    byte_421697A = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObject )
    return _9__19_0;
  v15 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObject;
  v16 = ServantLimitAddEntity___c_TypeInfo;
  if ( (BYTE3(ServantLimitAddEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v16 = ServantLimitAddEntity___c_TypeInfo;
  }
  v17 = System_Collections_Generic_List_object__TypeInfo;
  v18 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v18
    || (System_Collections_Generic_List_object__c *)v15->klass->_2.typeHierarchy[v18 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_12:
    sub_B0DC70(v15);
    return _9__19_0;
  }
  static_fields = v16->static_fields;
  _9__19_0 = (System_Int32_array *)static_fields->__9__19_0;
  if ( _9__19_0 )
  {
    v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (System_Collections_Generic_List_object__c *)v15->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_12;
    }
  }
  else
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Int32_array *)sub_B0D974(System_Converter_object__int__TypeInfo, v17, v14);
    System_Converter_BattleActionData_HealData__int____ctor(
      (System_Converter_BattleActionData_HealData__int__o *)_9__19_0,
      v22,
      Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__19_0__,
      (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
    v23 = ServantLimitAddEntity___c_TypeInfo->static_fields;
    v23->__9__19_0 = (struct System_Converter_object__int__o *)_9__19_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v23->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v15,
                                                    (System_Converter_T__TOutput__o *)_9__19_0,
                                                    (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v30 )
    sub_B0D97C(0LL);
  return System_Collections_Generic_List_int___ToArray(
           v30,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall ServantLimitAddEntity__getScriptObject(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4216977 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4216977 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4212236 & 1) == 0 )
  {
    sub_B0D8A4(&ServantLimitAddEntity___c_TypeInfo, v1);
    byte_4212236 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantLimitAddEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantLimitAddEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


int32_t __fastcall ServantLimitAddEntity___c___getScriptIntArrayParam_b__19_0(
        ServantLimitAddEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4212237 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, x);
    byte_4212237 = 1;
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
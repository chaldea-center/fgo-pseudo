void __fastcall ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC7E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FC7E4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitAddEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_40FC7C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&limitCount);
    byte_40FC7C9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_40FC7DA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16417, *(_QWORD *)&defaultValue);
    byte_40FC7DA = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_16417, defaultValue, v3);
}


System_String_o *__fastcall ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_40FC7E1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21289, defaultValue);
    byte_40FC7E1 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21289,
           defaultValue,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FC7D0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20141, method);
    byte_40FC7D0 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_20141, -1, v2);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDRank(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_40FC7D7 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21252, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FC7D7 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21252, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B173C8(result);
  }
  return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDTypeText(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_40FC7D8 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21254, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FC7D8 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21254, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B173C8(result);
  }
  return (System_String_o *)StringLiteral_1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  if ( (byte_40FC7E0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21269, *(_QWORD *)&defaultCvId);
    byte_40FC7E0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21269, defaultCvId, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_40FC7D6 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21247, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FC7D6 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21247, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B173C8(result);
  }
  return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_40FC7D4 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21248, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FC7D4 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21248, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B173C8(result);
  }
  return (System_String_o *)StringLiteral_1;
}


System_Int32_array *__fastcall ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FC7E3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21288, method);
    byte_40FC7E3 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21288, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_40FC7D5 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21249, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FC7D5 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21249, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B173C8(result);
  }
  return (System_String_o *)StringLiteral_1;
}


System_String_array *__fastcall ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_array *ScriptStringArrayParam; // x0
  __int64 v7; // x2
  System_String_array *v8; // x19
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  System_Int32_array **v17; // x1

  if ( (byte_40FC7DC & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_18257, v4);
    sub_B16FFC(&StringLiteral_10162, v5);
    byte_40FC7DC = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10162,
                             v2);
  if ( !ScriptStringArrayParam || (v8 = ScriptStringArrayParam, !*(_QWORD *)&ScriptStringArrayParam->max_length) )
  {
    v9 = sub_B17014(string___TypeInfo, 1LL, v7);
    if ( !v9 )
      sub_B170D4();
    v8 = (System_String_array *)v9;
    v16 = StringLiteral_18257;
    if ( StringLiteral_18257 )
    {
      v16 = sub_B170BC(StringLiteral_18257, v8->obj.klass->_1.element_class);
      if ( !v16 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      v17 = (System_Int32_array **)StringLiteral_18257;
    }
    else
    {
      v17 = 0LL;
    }
    if ( !v8->max_length )
    {
      sub_B17100(v16, v17, v10);
      sub_B170A0();
    }
    v8->m_Items[0] = (System_String_o *)v17;
    sub_B16F98((BattleServantConfConponent_o *)v8->m_Items, v17, v10, v11, v12, v13, v14, v15);
  }
  return v8;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FC7DE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21293, method);
    byte_40FC7DE = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21293, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDFileName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_40FC7D3 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21250, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FC7D3 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21250, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B173C8(result);
  }
  return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_40FC7D1 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21251, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FC7D1 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21251, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B173C8(result);
  }
  return (System_String_o *)StringLiteral_1;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDRuby(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *result; // x0

  if ( (byte_40FC7D2 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21253, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FC7D2 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21253, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B173C8(result);
  }
  return (System_String_o *)StringLiteral_1;
}


int32_t __fastcall ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  Il2CppObject *ScriptObject; // x0
  Il2CppObject *v6; // x19

  if ( (byte_40FC7D9 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21601, v4);
    byte_40FC7D9 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21601, v2);
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_string__o *v17; // x19
  __int64 v18; // x10
  ServantLimitAddEntity___c_c *v20; // x0
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__37_0; // x20
  Il2CppObject *v23; // x21
  struct ServantLimitAddEntity___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v31; // x0

  if ( (byte_40FC7DB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__string___ctor__, key);
    sub_B16FFC(&System_Converter_object__string__TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_B16FFC(&string___TypeInfo, v9);
    sub_B16FFC(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__37_0__, v10);
    sub_B16FFC(&ServantLimitAddEntity___c_TypeInfo, v11);
    byte_40FC7DB = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_B17014(string___TypeInfo, 0LL, v14);
  v17 = (System_Collections_Generic_List_string__o *)ScriptObject;
  v18 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&ScriptObject->klass->_2.bitflags2 + 1) < (unsigned int)v18
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[v18 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_B17014(string___TypeInfo, 0LL, v14);
  }
  v20 = ServantLimitAddEntity___c_TypeInfo;
  if ( (BYTE3(ServantLimitAddEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v20 = ServantLimitAddEntity___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__37_0 = (System_Converter_string__string__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Converter_string__string__o *)sub_B170CC(
                                                       System_Converter_object__string__TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15,
                                                       v16);
    System_Converter_string__string____ctor(
      _9__37_0,
      v23,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__37_0__,
      (const MethodInfo_266B904 *)Method_System_Converter_object__string___ctor__);
    v24 = ServantLimitAddEntity___c_TypeInfo->static_fields;
    v24->__9__37_0 = (struct System_Converter_object__string__o *)_9__37_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                        v17,
                                                                        (System_Converter_T__TOutput__o *)_9__37_0,
                                                                        (const MethodInfo_18FDDD8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v31 )
    sub_B170D4();
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v31,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  if ( (byte_40FC7E2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21889, *(_QWORD *)&defaultLimitCount);
    byte_40FC7E2 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21889,
           defaultLimitCount,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FC7CF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23163, method);
    byte_40FC7CF = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_23163, -1, v2);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FC7CE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23164, method);
    byte_40FC7CE = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_23164, -1, v2);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteCv(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC7DF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21269, method);
    byte_40FC7DF = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21269, 0LL);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FC7DD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21293, method);
    byte_40FC7DD = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21293, 0LL);
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
  if ( (byte_40FC7CB & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, key);
    byte_40FC7CB = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject);
  v12 = sub_B173C8(ScriptObject);
  ServantLimitAddEntity__getScriptFloat(v9, v10, *(float *)&v12, v11);
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

  if ( (byte_40FC7CC & 1) == 0 )
  {
    sub_B16FFC(&double_TypeInfo, key);
    byte_40FC7CC = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return defVal;
  if ( ScriptObject->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(ScriptObject);
  sub_B173C8(ScriptObject);
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_BattleActionData_HealData__o *v17; // x19
  ServantLimitAddEntity___c_c *v18; // x0
  System_Collections_Generic_List_object__c *v19; // x1
  __int64 v20; // x9
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x8
  __int64 v22; // x9
  Il2CppObject *v24; // x21
  struct ServantLimitAddEntity___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_int__o *v32; // x0

  _9__19_0 = defVal;
  if ( (byte_40FC7CD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, key);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B16FFC(&Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__19_0__, v11);
    sub_B16FFC(&ServantLimitAddEntity___c_TypeInfo, v12);
    byte_40FC7CD = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObject )
    return _9__19_0;
  v17 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObject;
  v18 = ServantLimitAddEntity___c_TypeInfo;
  if ( (BYTE3(ServantLimitAddEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v18 = ServantLimitAddEntity___c_TypeInfo;
  }
  v19 = System_Collections_Generic_List_object__TypeInfo;
  v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v20
    || (System_Collections_Generic_List_object__c *)v17->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_12:
    sub_B173C8(v17);
    return _9__19_0;
  }
  static_fields = v18->static_fields;
  _9__19_0 = (System_Int32_array *)static_fields->__9__19_0;
  if ( _9__19_0 )
  {
    v22 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (System_Collections_Generic_List_object__c *)v17->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_12;
    }
  }
  else
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Int32_array *)sub_B170CC(System_Converter_object__int__TypeInfo, v19, v14, v15, v16);
    System_Converter_BattleActionData_HealData__int____ctor(
      (System_Converter_BattleActionData_HealData__int__o *)_9__19_0,
      v24,
      Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__19_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v25 = ServantLimitAddEntity___c_TypeInfo->static_fields;
    v25->__9__19_0 = (struct System_Converter_object__int__o *)_9__19_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v17,
                                                    (System_Converter_T__TOutput__o *)_9__19_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v32 )
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v32,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall ServantLimitAddEntity__getScriptObject(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC7CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_40FC7CA = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7633 & 1) == 0 )
  {
    sub_B16FFC(&ServantLimitAddEntity___c_TypeInfo, v1);
    byte_40F7633 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantLimitAddEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantLimitAddEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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

  if ( (byte_40F7634 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, x);
    byte_40F7634 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1;
  return System_Int32__Parse(v4, 0LL);
}
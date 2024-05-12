void __fastcall ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D570 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D570 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantLimitAddEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_438D555 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438D555 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_438D566 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16802/*"ascensionAfterDialogId"*/);
    byte_438D566 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_16802/*"ascensionAfterDialogId"*/, defaultValue, v3);
}


System_String_o *__fastcall ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_438D56D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21824/*"overwriteServantParameterTitle"*/);
    byte_438D56D = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_21824/*"overwriteServantParameterTitle"*/,
           defaultValue,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438D55C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20635/*"limitCountUpResultServantLimitCount"*/);
    byte_438D55C = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_20635/*"limitCountUpResultServantLimitCount"*/, -1, v2);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDRank(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_438D563 & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_21781/*"overWriteTDRank"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D563 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21781/*"overWriteTDRank"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B77990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDTypeText(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_438D564 & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_21783/*"overWriteTDTypeText"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D564 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21783/*"overWriteTDTypeText"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B77990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  if ( (byte_438D56C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21800/*"overwriteCv"*/);
    byte_438D56C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21800/*"overwriteCv"*/, defaultCvId, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_438D562 & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_21776/*"overWriteServantBattleName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D562 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21776/*"overWriteServantBattleName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B77990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_438D560 & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_21777/*"overWriteServantName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D560 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21777/*"overWriteServantName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B77990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D56F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21823/*"overwriteServantParameter"*/);
    byte_438D56F = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21823/*"overwriteServantParameter"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_438D561 & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_21778/*"overWriteServantShortName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D561 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21778/*"overWriteServantShortName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B77990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_array *__fastcall ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_array *ScriptStringArrayParam; // x0
  System_String_array *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0
  System_Int32_array **v15; // x1
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_438D568 & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_18692/*"en_waist"*/);
    sub_B775C4(&StringLiteral_10378/*"OverwriteShadowServantEffectNodes"*/);
    byte_438D568 = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10378/*"OverwriteShadowServantEffectNodes"*/,
                             v2);
  if ( !ScriptStringArrayParam || (v5 = ScriptStringArrayParam, !*(_QWORD *)&ScriptStringArrayParam->max_length) )
  {
    v6 = sub_B775DC(string___TypeInfo, 1LL);
    if ( !v6 )
      sub_B7769C(0LL, v7);
    v5 = (System_String_array *)v6;
    v14 = StringLiteral_18692/*"en_waist"*/;
    if ( StringLiteral_18692/*"en_waist"*/ )
    {
      v14 = sub_B77684(StringLiteral_18692/*"en_waist"*/, v5->obj.klass->_1.element_class);
      if ( !v14 )
      {
        v18 = sub_B776BC(0LL);
        sub_B77668(v18, 0LL);
      }
      v15 = (System_Int32_array **)StringLiteral_18692/*"en_waist"*/;
    }
    else
    {
      v15 = 0LL;
    }
    if ( !v5->max_length )
    {
      v17 = sub_B776C8(v14);
      sub_B77668(v17, 0LL);
    }
    v5->m_Items[0] = (System_String_o *)v15;
    sub_B77560((BattleServantConfConponent_o *)v5->m_Items, v15, v8, v9, v10, v11, v12, v13);
  }
  return v5;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D56A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21828/*"overwriteSvtDetailName"*/);
    byte_438D56A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_21828/*"overwriteSvtDetailName"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDFileName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_438D55F & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_21779/*"overWriteTDFileName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D55F = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21779/*"overWriteTDFileName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B77990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_438D55D & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_21780/*"overWriteTDName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D55D = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21780/*"overWriteTDName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B77990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDRuby(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_438D55E & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_21782/*"overWriteTDRuby"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D55E = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_21782/*"overWriteTDRuby"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_B77990(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  Il2CppObject *v5; // x19

  if ( (byte_438D565 & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&StringLiteral_22152/*"randomGroupIndex"*/);
    byte_438D565 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22152/*"randomGroupIndex"*/, v2);
  if ( ScriptObject )
  {
    v5 = ScriptObject;
    if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_Convert_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    }
    LODWORD(ScriptObject) = System_Convert__ToInt32(v5, 0LL);
  }
  return (int)ScriptObject;
}


System_String_array *__fastcall ServantLimitAddEntity__GetScriptStringArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_string__o *v6; // x19
  __int64 v7; // x10
  ServantLimitAddEntity___c_c *v9; // x0
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__37_0; // x20
  Il2CppObject *v12; // x21
  struct ServantLimitAddEntity___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v20; // x0
  __int64 v21; // x1

  if ( (byte_438D567 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__string___ctor__);
    sub_B775C4(&System_Converter_object__string__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__37_0__);
    sub_B775C4(&ServantLimitAddEntity___c_TypeInfo);
    byte_438D567 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_B775DC(string___TypeInfo, 0LL);
  v6 = (System_Collections_Generic_List_string__o *)ScriptObject;
  v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&ScriptObject->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_B775DC(string___TypeInfo, 0LL);
  }
  v9 = ServantLimitAddEntity___c_TypeInfo;
  if ( (BYTE3(ServantLimitAddEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v9 = ServantLimitAddEntity___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__37_0 = (System_Converter_string__string__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Converter_string__string__o *)sub_B77694(System_Converter_object__string__TypeInfo);
    System_Converter_string__string____ctor(
      _9__37_0,
      v12,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__37_0__,
      (const MethodInfo_21F7E10 *)Method_System_Converter_object__string___ctor__);
    v13 = ServantLimitAddEntity___c_TypeInfo->static_fields;
    v13->__9__37_0 = (struct System_Converter_object__string__o *)_9__37_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v13->__9__37_0,
      (System_Int32_array **)_9__37_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                        v6,
                                                                        (System_Converter_T__TOutput__o *)_9__37_0,
                                                                        (const MethodInfo_19AEDB4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v20 )
    sub_B7769C(0LL, v21);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v20,
                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  if ( (byte_438D56E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22449/*"servantParameterLimitCount"*/);
    byte_438D56E = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22449/*"servantParameterLimitCount"*/,
           defaultLimitCount,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438D55B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23742/*"weaponEffect"*/);
    byte_438D55B = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_23742/*"weaponEffect"*/, -1, v2);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438D55A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23743/*"weaponGroup"*/);
    byte_438D55A = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_23743/*"weaponGroup"*/, -1, v2);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteCv(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D56B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21800/*"overwriteCv"*/);
    byte_438D56B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21800/*"overwriteCv"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D569 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21828/*"overwriteSvtDetailName"*/);
    byte_438D569 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21828/*"overwriteSvtDetailName"*/, 0LL);
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
  if ( (byte_438D557 & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    byte_438D557 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject);
  v12 = sub_B77990(ScriptObject);
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

  if ( (byte_438D558 & 1) == 0 )
  {
    sub_B775C4(&double_TypeInfo);
    byte_438D558 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return defVal;
  if ( ScriptObject->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(ScriptObject);
  sub_B77990(ScriptObject);
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
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v8; // x19
  ServantLimitAddEntity___c_c *v9; // x0
  __int64 v10; // x9
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x8
  __int64 v12; // x9
  Il2CppObject *v14; // x21
  struct ServantLimitAddEntity___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_int__o *v22; // x0
  __int64 v23; // x1

  _9__19_0 = defVal;
  if ( (byte_438D559 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__int___ctor__);
    sub_B775C4(&System_Converter_object__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__19_0__);
    sub_B775C4(&ServantLimitAddEntity___c_TypeInfo);
    byte_438D559 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObject )
    return _9__19_0;
  v8 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObject;
  v9 = ServantLimitAddEntity___c_TypeInfo;
  if ( (BYTE3(ServantLimitAddEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v9 = ServantLimitAddEntity___c_TypeInfo;
  }
  v10 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[v10 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_12:
    sub_B77990(v8);
    return _9__19_0;
  }
  static_fields = v9->static_fields;
  _9__19_0 = (System_Int32_array *)static_fields->__9__19_0;
  if ( _9__19_0 )
  {
    v12 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[v12 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_12;
    }
  }
  else
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Int32_array *)sub_B77694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      (System_Converter_BattleActionData_HealData__int__o *)_9__19_0,
      v14,
      Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__19_0__,
      (const MethodInfo_21F7A30 *)Method_System_Converter_object__int___ctor__);
    v15 = ServantLimitAddEntity___c_TypeInfo->static_fields;
    v15->__9__19_0 = (struct System_Converter_object__int__o *)_9__19_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v15->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__19_0,
                                                    (const MethodInfo_19AECA8 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v22 )
    sub_B7769C(0LL, v23);
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall ServantLimitAddEntity__getScriptObject(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438D556 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438D556 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  Il2CppObject *v1; // x19
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4388821 & 1) == 0 )
  {
    sub_B775C4(&ServantLimitAddEntity___c_TypeInfo);
    byte_4388821 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ServantLimitAddEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantLimitAddEntity___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
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

  if ( (byte_4388822 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388822 = 1;
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
void __fastcall ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B8B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B8B9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantLimitAddEntity__CreatePK(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_4A5B8B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B8B8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4A5B8AE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16922/*"ascensionAfterDialogId"*/);
    byte_4A5B8AE = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_16922/*"ascensionAfterDialogId"*/, defaultValue, v3);
}


System_String_o *__fastcall ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4A5B8B5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22408/*"overwriteServantParameterTitle"*/);
    byte_4A5B8B5 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22408/*"overwriteServantParameterTitle"*/,
           defaultValue,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B8A4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21105/*"limitCountUpResultServantLimitCount"*/);
    byte_4A5B8A4 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_21105/*"limitCountUpResultServantLimitCount"*/, -1, v2);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDRank(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4A5B8AB & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22361/*"overWriteTDRank"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8AB = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22361/*"overWriteTDRank"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B88ACC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverWriteTDTypeText(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4A5B8AC & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22363/*"overWriteTDTypeText"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8AC = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22363/*"overWriteTDTypeText"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B88ACC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  if ( (byte_4A5B8B4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22383/*"overwriteCv"*/);
    byte_4A5B8B4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22383/*"overwriteCv"*/, defaultCvId, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4A5B8AA & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22356/*"overWriteServantBattleName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8AA = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22356/*"overWriteServantBattleName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B88ACC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4A5B8A8 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22357/*"overWriteServantName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8A8 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22357/*"overWriteServantName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B88ACC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B8B7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22407/*"overwriteServantParameter"*/);
    byte_4A5B8B7 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22407/*"overwriteServantParameter"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4A5B8A9 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22358/*"overWriteServantShortName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8A9 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22358/*"overWriteServantShortName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B88ACC(result);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1

  if ( (byte_4A5B8B0 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_18980/*"en_waist"*/);
    sub_1B885B0(&StringLiteral_10111/*"OverwriteShadowServantEffectNodes"*/);
    byte_4A5B8B0 = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10111/*"OverwriteShadowServantEffectNodes"*/,
                             v2);
  if ( !ScriptStringArrayParam || (v5 = ScriptStringArrayParam, !*(_QWORD *)&ScriptStringArrayParam->max_length) )
  {
    v6 = sub_1B88658(string___TypeInfo, 1LL);
    if ( !v6 )
      sub_1B8880C(0LL, v7);
    v5 = (System_String_array *)v6;
    if ( !*(_DWORD *)(v6 + 24) )
      sub_1B88814(v6, v7);
    v10 = StringLiteral_18980/*"en_waist"*/;
    *(_QWORD *)(v6 + 32) = StringLiteral_18980/*"en_waist"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), v10, v8, v9);
  }
  return v5;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B8B2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22413/*"overwriteSvtDetailName"*/);
    byte_4A5B8B2 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22413/*"overwriteSvtDetailName"*/, 0LL, 0LL);
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDFileName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4A5B8A7 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22359/*"overWriteTDFileName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8A7 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22359/*"overWriteTDFileName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B88ACC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4A5B8A5 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22360/*"overWriteTDName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8A5 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22360/*"overWriteTDName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B88ACC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *__fastcall ServantLimitAddEntity__GetOverwriteTDRuby(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4A5B8A6 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_22362/*"overWriteTDRuby"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8A6 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22362/*"overWriteTDRuby"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1B88ACC(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t __fastcall ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  Il2CppObject *v5; // x19

  if ( (byte_4A5B8AD & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&StringLiteral_22775/*"randomGroupIndex"*/);
    byte_4A5B8AD = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22775/*"randomGroupIndex"*/, v2);
  if ( ScriptObject )
  {
    v5 = ScriptObject;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
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
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 methodPtr_low; // x10
  ServantLimitAddEntity___c_c *v9; // x0
  System_Converter_TInput__TOutput__o *_9__23_0; // x20
  Il2CppObject *v11; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4A5B8AF & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__23_0__);
    sub_1B885B0(&ServantLimitAddEntity___c_TypeInfo);
    byte_4A5B8AF = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_1B88658(string___TypeInfo, 0LL);
  v6 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1B88658(string___TypeInfo, 0LL);
  }
  v9 = ServantLimitAddEntity___c_TypeInfo;
  if ( !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v9 = ServantLimitAddEntity___c_TypeInfo;
  }
  _9__23_0 = (System_Converter_TInput__TOutput__o *)v9->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ServantLimitAddEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__23_0 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__23_0,
      v11,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__23_0__,
      0LL);
    static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = (struct System_Converter_object__string__o *)_9__23_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v6,
                                                       (System_Converter_T__TOutput__o *)_9__23_0,
                                                       (const MethodInfo_2DB32F8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v15 )
    sub_1B8880C(0LL, v16);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v15,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4A5B8B6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23116/*"servantParameterLimitCount"*/);
    byte_4A5B8B6 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23116/*"servantParameterLimitCount"*/,
           defaultLimitCount,
           0LL);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B8A3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24670/*"weaponEffect"*/);
    byte_4A5B8A3 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_24670/*"weaponEffect"*/, -1, v2);
}


int32_t __fastcall ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B8A2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24671/*"weaponGroup"*/);
    byte_4A5B8A2 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_24671/*"weaponGroup"*/, -1, v2);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteCv(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B8B3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22383/*"overwriteCv"*/);
    byte_4A5B8B3 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22383/*"overwriteCv"*/, 0LL);
}


bool __fastcall ServantLimitAddEntity__IsOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B8B1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22413/*"overwriteSvtDetailName"*/);
    byte_4A5B8B1 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22413/*"overwriteSvtDetailName"*/, 0LL);
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
  if ( (byte_4A5B89F & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    byte_4A5B89F = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  v14 = sub_1B88ACC(ScriptObject);
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

  if ( (byte_4A5B8A0 & 1) == 0 )
  {
    sub_1B885B0(&double_TypeInfo);
    byte_4A5B8A0 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return defVal;
  if ( ScriptObject->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(ScriptObject, double_TypeInfo, v8, v9);
  sub_1B88ACC(ScriptObject);
  ServantLimitAddEntity__getScriptIntArrayParam(v11, v12, v13, v14);
  return result;
}


System_Int32_array *__fastcall ServantLimitAddEntity__getScriptIntArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  ServantLimitAddEntity___c_c *v9; // x0
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *_9__5_0; // x20
  Il2CppObject *v12; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_int__o *v16; // x0
  __int64 v17; // x1

  if ( (byte_4A5B8A1 & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__5_0__);
    sub_1B885B0(&ServantLimitAddEntity___c_TypeInfo);
    byte_4A5B8A1 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, (const MethodInfo *)defVal);
  if ( ScriptObject )
  {
    v8 = (System_Collections_Generic_List_object__o *)ScriptObject;
    v9 = ServantLimitAddEntity___c_TypeInfo;
    if ( !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
      v9 = ServantLimitAddEntity___c_TypeInfo;
    }
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v8->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      _9__5_0 = v9->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = ServantLimitAddEntity___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v9->static_fields->__9;
        _9__5_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(
          _9__5_0,
          v12,
          Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__5_0__,
          0LL);
        static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = _9__5_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v14, v15);
      }
      v16 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v8,
                                                        (System_Converter_T__TOutput__o *)_9__5_0,
                                                        (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v16 )
        return System_Collections_Generic_List_int___ToArray(
                 v16,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1B88ACC(v8);
    }
    sub_1B8880C(v16, v17);
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

  if ( (byte_4A5B89E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5B89E = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B8BA & 1) == 0 )
  {
    sub_1B885B0(&ServantLimitAddEntity___c_TypeInfo);
    byte_4A5B8BA = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantLimitAddEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantLimitAddEntity___c_TypeInfo->static_fields->__9 = (struct ServantLimitAddEntity___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantLimitAddEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5B8BB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8BB = 1;
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
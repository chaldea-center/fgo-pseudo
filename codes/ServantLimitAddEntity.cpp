void ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3136C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D3136C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantLimitAddEntity__CreatePK(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  if ( (byte_4D3136B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D3136B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantLimitAddEntity__CreatePrimaryKey(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLimitAddEntity__CreatePK(this->fields.svtId, this->fields.limitCount, v2);
}


bool ServantLimitAddEntity__ExistOverwriteTDInfo(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *OverwriteTDName; // x21
  const MethodInfo *v4; // x1
  System_String_o *OverwriteTDRuby; // x20
  const MethodInfo *v6; // x1
  System_String_o *OverwriteTDFileName; // x19

  OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(this, method);
  OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(this, v4);
  OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName(this, v6);
  return !System_String__IsNullOrEmpty(OverwriteTDName, 0)
      && !System_String__IsNullOrEmpty(OverwriteTDRuby, 0)
      && !System_String__IsNullOrEmpty(OverwriteTDFileName, 0);
}


bool ServantLimitAddEntity__ExistOverwriteTDRank(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x0

  v2 = ServantLimitAddEntity__GetOverWriteTDRank(this, method);
  return !System_String__IsNullOrEmpty(v2, 0);
}


bool ServantLimitAddEntity__ExistOverwriteTDTypeText(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x0

  v2 = ServantLimitAddEntity__GetOverWriteTDTypeText(this, method);
  return !System_String__IsNullOrEmpty(v2, 0);
}


int32_t ServantLimitAddEntity__GetAscensionAfterDialogId(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4D3134C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17022/*"ascensionAfterDialogId"*/);
    byte_4D3134C = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_17022/*"ascensionAfterDialogId"*/, defaultValue, v3);
}


System_String_o *ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D31353 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22857/*"overwriteServantParameterTitle"*/);
    byte_4D31353 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22857/*"overwriteServantParameterTitle"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D31341 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21495/*"limitCountUpResultServantLimitCount"*/);
    byte_4D31341 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_21495/*"limitCountUpResultServantLimitCount"*/, -1, v2);
}


int32_t ServantLimitAddEntity__GetNotExistMasterCharaId(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31367 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17194/*"battleCharaIdWhenNotExistMaster"*/);
    byte_4D31367 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17194/*"battleCharaIdWhenNotExistMaster"*/, 0, 0);
}


System_String_o *ServantLimitAddEntity__GetOverWriteTDRank(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4D31348 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_22788/*"overWriteTDRank"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31348 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22788/*"overWriteTDRank"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C940C8(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverWriteTDTypeText(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4D31349 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_22790/*"overWriteTDTypeText"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31349 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22790/*"overWriteTDTypeText"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C940C8(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t ServantLimitAddEntity__GetOverWriteTDTypeTextCommonReleaseId(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  Il2CppObject *v5; // x19

  if ( (byte_4D3134B & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&StringLiteral_22791/*"overWriteTDTypeTextCommonReleaseId"*/);
    byte_4D3134B = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22791/*"overWriteTDTypeTextCommonReleaseId"*/, v2);
  if ( ScriptObject )
  {
    v5 = ScriptObject;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    LODWORD(ScriptObject) = System_Convert__ToInt32(v5, 0);
  }
  return (int)ScriptObject;
}


int32_t ServantLimitAddEntity__GetOverwriteAtkBase(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D3135B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22803/*"overwriteAtkBase"*/);
    byte_4D3135B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22803/*"overwriteAtkBase"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteAtkMax(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D3135D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22804/*"overwriteAtkMax"*/);
    byte_4D3135D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22804/*"overwriteAtkMax"*/, defaultValue, 0);
}


System_Int32_array *ServantLimitAddEntity__GetOverwriteClassPassive(
        ServantLimitAddEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D31365 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22810/*"overwriteClassPassive"*/);
    byte_4D31365 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22810/*"overwriteClassPassive"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteCost(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D31363 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22816/*"overwriteCost"*/);
    byte_4D31363 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22816/*"overwriteCost"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  if ( (byte_4D31352 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22817/*"overwriteCv"*/);
    byte_4D31352 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22817/*"overwriteCv"*/, defaultCvId, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteExpType(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D31361 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22827/*"overwriteExpType"*/);
    byte_4D31361 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22827/*"overwriteExpType"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteHpBase(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D31357 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22832/*"overwriteHpBase"*/);
    byte_4D31357 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22832/*"overwriteHpBase"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteHpMax(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D31359 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22833/*"overwriteHpMax"*/);
    byte_4D31359 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22833/*"overwriteHpMax"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteRarity(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4D3135F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22849/*"overwriteRarity"*/);
    byte_4D3135F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22849/*"overwriteRarity"*/, defaultValue, 0);
}


System_String_o *ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4D31347 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_22783/*"overWriteServantBattleName"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31347 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22783/*"overWriteServantBattleName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C940C8(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverwriteServantName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4D31345 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_22784/*"overWriteServantName"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31345 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22784/*"overWriteServantName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C940C8(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D31356 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22856/*"overwriteServantParameter"*/);
    byte_4D31356 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22856/*"overwriteServantParameter"*/, 0, 0);
}


System_String_o *ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4D31346 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_22785/*"overWriteServantShortName"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31346 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22785/*"overWriteServantShortName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C940C8(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_array *ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w1

  if ( (byte_4D3134E & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_19165/*"en_waist"*/);
    sub_1C93AD4(&StringLiteral_10142/*"OverwriteShadowServantEffectNodes"*/);
    byte_4D3134E = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10142/*"OverwriteShadowServantEffectNodes"*/,
                             v2);
  if ( !ScriptStringArrayParam || (v5 = ScriptStringArrayParam, !ScriptStringArrayParam->max_length) )
  {
    v6 = sub_1C93B7C(string___TypeInfo, 1);
    if ( !v6 )
      sub_1C93D2C(0, v7);
    v5 = (System_String_array *)v6;
    if ( !*(_DWORD *)(v6 + 24) )
      sub_1C93D34(v6);
    v14 = StringLiteral_19165/*"en_waist"*/;
    *(_QWORD *)(v6 + 32) = StringLiteral_19165/*"en_waist"*/;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 32), v14, v8, v9, v10, v11, v12, v13);
  }
  return v5;
}


System_String_o *ServantLimitAddEntity__GetOverwriteSkillName(
        ServantLimitAddEntity_o *this,
        int32_t skillId,
        System_String_o *defaultName,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v8; // x21
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_object__o *current; // x21
  __int64 v11; // x9
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  Il2CppObject *Item; // x22
  int32_t v15; // w22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  void *v22; // x0
  int v23; // w1
  __int64 v24; // x21
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF

  v4 = defaultName;
  if ( (byte_4D31369 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&StringLiteral_22863/*"overwriteSkillName"*/);
    byte_4D31369 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  ScriptObject = ServantLimitAddEntity__getScriptObject(
                   this,
                   (System_String_o *)StringLiteral_22863/*"overwriteSkillName"*/,
                   (const MethodInfo *)defaultName);
  v8 = (System_Collections_Generic_List_object__o *)ScriptObject;
  if ( ScriptObject )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( ScriptObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ScriptObject, 0) )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v25,
          v8,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v26 = v25;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v26,
                  (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = (System_Collections_Generic_List_object__o *)v26.fields._current;
          if ( v26.fields._current )
          {
            v11 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
            if ( v26.fields._current->klass->_2.naturalAligment < (unsigned int)v11
              || (System_Collections_Generic_List_object__c *)v26.fields._current->klass->_2.typeHierarchy[v11 - 1] != System_Collections_Generic_List_object__TypeInfo )
            {
              sub_1C940C8(v26.fields._current);
LABEL_24:
              sub_1C93D2C(IsNullOrEmpty, v13);
            }
          }
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v26.fields._current, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !current )
              goto LABEL_24;
            if ( current->fields._size == 2 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       current,
                       0,
                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v15 = System_Convert__ToInt32(Item, 0);
              v16 = System_Collections_Generic_List_object___get_Item(
                      current,
                      1,
                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
              v17 = System_Convert__ToString(v16, 0);
              if ( v15 == skillId )
              {
                v18 = v17;
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v26,
                  (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
                return v18;
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v26,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      }
    }
    else
    {
      sub_1C940C8(ScriptObject);
      if ( v23 != 1 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v26,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        sub_1D77CB0();
      }
      v24 = *(_QWORD *)__cxa_begin_catch(v22);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      if ( v24 )
        sub_1C93D24(v24);
    }
  }
  else
  {
    v19 = BasicHelper__IsNullOrEmpty(0, 0);
    if ( !v19 )
      sub_1C93D2C(v19, v20);
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantLimitAddEntity__GetOverwriteSkillName_43414908(
        ServantLimitAddEntity_o *this,
        int32_t skillId,
        int32_t lv,
        System_String_o *defaultName,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v10; // x22
  __int64 naturalAligment; // x9
  System_Collections_Generic_List_object__o *current; // x22
  __int64 v13; // x9
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  Il2CppObject *Item; // x23
  int32_t v17; // w23
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  Il2CppObject *v20; // x22
  uint32_t cctor_finished; // w8
  System_String_o *v22; // x21
  Il2CppObject *v23; // x2
  System_String_o *v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x0
  void *v29; // x0
  int v30; // w1
  __int64 v31; // x21
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D3136A & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_22863/*"overwriteSkillName"*/);
    sub_1C93AD4(&StringLiteral_12319/*"SKILL_EFFECT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12318/*"SKILL_EFFECT_LEVEL_TITLE"*/);
    byte_4D3136A = 1;
  }
  memset(&v33, 0, sizeof(v33));
  ScriptObject = ServantLimitAddEntity__getScriptObject(
                   this,
                   (System_String_o *)StringLiteral_22863/*"overwriteSkillName"*/,
                   *(const MethodInfo **)&lv);
  v10 = (System_Collections_Generic_List_object__o *)ScriptObject;
  if ( ScriptObject )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( ScriptObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ScriptObject, 0) )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v32,
          v10,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v33 = v32;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v33,
                  (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = (System_Collections_Generic_List_object__o *)v33.fields._current;
          if ( v33.fields._current )
          {
            v13 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
            if ( v33.fields._current->klass->_2.naturalAligment < (unsigned int)v13
              || (System_Collections_Generic_List_object__c *)v33.fields._current->klass->_2.typeHierarchy[v13 - 1] != System_Collections_Generic_List_object__TypeInfo )
            {
              sub_1C940C8(v33.fields._current);
LABEL_31:
              sub_1C93D2C(IsNullOrEmpty, v15);
            }
          }
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v33.fields._current, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !current )
              goto LABEL_31;
            if ( current->fields._size == 2 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       current,
                       0,
                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v17 = System_Convert__ToInt32(Item, 0);
              v18 = System_Collections_Generic_List_object___get_Item(
                      current,
                      1,
                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
              v19 = System_Convert__ToString(v18, 0);
              if ( v17 == skillId )
              {
                v20 = (Il2CppObject *)v19;
                cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
                if ( lv <= 0 )
                {
                  if ( !cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SKILL_EFFECT_TITLE"*/, 0);
                  v24 = System_String__Format(v27, v20, 0);
                }
                else
                {
                  if ( !cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0);
                  LODWORD(v32.fields._list) = lv;
                  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
                  v24 = System_String__Format_64467032(v22, v20, v23, 0);
                }
                defaultName = v24;
                break;
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v33,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      }
    }
    else
    {
      sub_1C940C8(ScriptObject);
      if ( v30 != 1 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v33,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        sub_1D77CB0();
      }
      v31 = *(_QWORD *)__cxa_begin_catch(v29);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v33,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      if ( v31 )
        sub_1C93D24(v31);
    }
  }
  else
  {
    v25 = BasicHelper__IsNullOrEmpty(0, 0);
    if ( !v25 )
      sub_1C93D2C(v25, v26);
  }
  return defaultName;
}


System_String_o *ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D31350 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22864/*"overwriteSvtDetailName"*/);
    byte_4D31350 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22864/*"overwriteSvtDetailName"*/, 0, 0);
}


System_String_o *ServantLimitAddEntity__GetOverwriteTDFileName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4D31344 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_22786/*"overWriteTDFileName"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31344 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22786/*"overWriteTDFileName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C940C8(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverwriteTDName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4D31342 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_22787/*"overWriteTDName"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31342 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22787/*"overWriteTDName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C940C8(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverwriteTDRuby(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4D31343 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_22789/*"overWriteTDRuby"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31343 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22789/*"overWriteTDRuby"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C940C8(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  Il2CppObject *v5; // x19

  if ( (byte_4D3134A & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&StringLiteral_23237/*"randomGroupIndex"*/);
    byte_4D3134A = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23237/*"randomGroupIndex"*/, v2);
  if ( ScriptObject )
  {
    v5 = ScriptObject;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    LODWORD(ScriptObject) = System_Convert__ToInt32(v5, 0);
  }
  return (int)ScriptObject;
}


System_String_array *ServantLimitAddEntity__GetScriptStringArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 naturalAligment; // x10
  ServantLimitAddEntity___c_c *v9; // x0
  System_Converter_TInput__TOutput__o *_9__21_0; // x20
  Il2CppObject *v11; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_4D3134D & 1) == 0 )
  {
    sub_1C93AD4(&System_Converter_object__string__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__21_0__);
    sub_1C93AD4(&ServantLimitAddEntity___c_TypeInfo);
    byte_4D3134D = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_1C93B7C(string___TypeInfo, 0);
  v6 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( ScriptObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1C93B7C(string___TypeInfo, 0);
  }
  v9 = ServantLimitAddEntity___c_TypeInfo;
  if ( !ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo);
    v9 = ServantLimitAddEntity___c_TypeInfo;
  }
  _9__21_0 = (System_Converter_TInput__TOutput__o *)v9->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ServantLimitAddEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__21_0 = (System_Converter_TInput__TOutput__o *)sub_1C93D20(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__21_0,
      v11,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__21_0__,
      0);
    static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Converter_object__string__o *)_9__21_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_0,
      (int32_t)_9__21_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v6,
                                                       (System_Converter_T__TOutput__o *)_9__21_0,
                                                       (const MethodInfo_30C8598 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v19 )
    sub_1C93D2C(0, v20);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v19,
                                  (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4D31354 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23584/*"servantParameterLimitCount"*/);
    byte_4D31354 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23584/*"servantParameterLimitCount"*/,
           defaultLimitCount,
           0);
}


int32_t ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D31340 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_25116/*"weaponEffect"*/);
    byte_4D31340 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_25116/*"weaponEffect"*/, -1, v2);
}


int32_t ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D3133F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_25117/*"weaponGroup"*/);
    byte_4D3133F = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_25117/*"weaponGroup"*/, -1, v2);
}


bool ServantLimitAddEntity__HasKeyOverwriteAtkBase(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3135C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22803/*"overwriteAtkBase"*/);
    byte_4D3135C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22803/*"overwriteAtkBase"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteAtkMax(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3135E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22804/*"overwriteAtkMax"*/);
    byte_4D3135E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22804/*"overwriteAtkMax"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteClassPassive(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31366 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22810/*"overwriteClassPassive"*/);
    byte_4D31366 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22810/*"overwriteClassPassive"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteCost(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31364 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22816/*"overwriteCost"*/);
    byte_4D31364 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22816/*"overwriteCost"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteExpType(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31362 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22827/*"overwriteExpType"*/);
    byte_4D31362 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22827/*"overwriteExpType"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteHpBase(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31358 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22832/*"overwriteHpBase"*/);
    byte_4D31358 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22832/*"overwriteHpBase"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteHpMax(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3135A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22833/*"overwriteHpMax"*/);
    byte_4D3135A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22833/*"overwriteHpMax"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteRarity(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31360 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22849/*"overwriteRarity"*/);
    byte_4D31360 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22849/*"overwriteRarity"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteSkillName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31368 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22863/*"overwriteSkillName"*/);
    byte_4D31368 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22863/*"overwriteSkillName"*/, 0);
}


bool ServantLimitAddEntity__HasServantParameterLimitCountKey(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31355 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23584/*"servantParameterLimitCount"*/);
    byte_4D31355 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23584/*"servantParameterLimitCount"*/, 0);
}


bool ServantLimitAddEntity__IsOverwriteCv(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31351 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22817/*"overwriteCv"*/);
    byte_4D31351 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22817/*"overwriteCv"*/, 0);
}


bool ServantLimitAddEntity__IsOverwriteSvtDetailName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D3134F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22864/*"overwriteSvtDetailName"*/);
    byte_4D3134F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22864/*"overwriteSvtDetailName"*/, 0);
}


bool ServantLimitAddEntity__IsValidWeaponGroup(
        ServantLimitAddEntity_o *this,
        int32_t checkValue,
        const MethodInfo *method)
{
  return checkValue != -1;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLimitAddEntity__getScript(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObject; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  ServantLimitAddEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  v4 = defVal;
  if ( (byte_4D3133E & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    byte_4D3133E = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  sub_1C940C8(ScriptObject);
  return ServantLimitAddEntity__GetWeaponGroup(v11, v12);
}


Il2CppObject *ServantLimitAddEntity__getScriptObject(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D3133D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4D3133D = 1;
  }
  value = 0;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void ServantLimitAddEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3136D & 1) == 0 )
  {
    sub_1C93AD4(&ServantLimitAddEntity___c_TypeInfo);
    byte_4D3136D = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantLimitAddEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantLimitAddEntity___c_TypeInfo->static_fields->__9 = (struct ServantLimitAddEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantLimitAddEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantLimitAddEntity___c___ctor(ServantLimitAddEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *ServantLimitAddEntity___c___GetScriptStringArrayParam_b__21_0(
        ServantLimitAddEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return ((System_String_o *(__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
           x,
           x->klass->vtable[3].method);
}
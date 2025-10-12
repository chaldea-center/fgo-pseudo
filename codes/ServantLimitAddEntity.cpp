void ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3833D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C3833D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantLimitAddEntity__CreatePK(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  if ( (byte_4C3833C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C3833C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_30DB578 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4C3831D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16899/*"ascensionAfterDialogId"*/);
    byte_4C3831D = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_16899/*"ascensionAfterDialogId"*/, defaultValue, v3);
}


System_String_o *ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C38324 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22578/*"overwriteServantParameterTitle"*/);
    byte_4C38324 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22578/*"overwriteServantParameterTitle"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C38313 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_21230/*"limitCountUpResultServantLimitCount"*/);
    byte_4C38313 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_21230/*"limitCountUpResultServantLimitCount"*/, -1, v2);
}


int32_t ServantLimitAddEntity__GetNotExistMasterCharaId(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38338 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17067/*"battleCharaIdWhenNotExistMaster"*/);
    byte_4C38338 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17067/*"battleCharaIdWhenNotExistMaster"*/, 0, 0);
}


System_String_o *ServantLimitAddEntity__GetOverWriteTDRank(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4C3831A & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_22511/*"overWriteTDRank"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3831A = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22511/*"overWriteTDRank"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C3313C(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverWriteTDTypeText(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4C3831B & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_22513/*"overWriteTDTypeText"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3831B = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22513/*"overWriteTDTypeText"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C3313C(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t ServantLimitAddEntity__GetOverwriteAtkBase(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C3832C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22525/*"overwriteAtkBase"*/);
    byte_4C3832C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22525/*"overwriteAtkBase"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteAtkMax(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C3832E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22526/*"overwriteAtkMax"*/);
    byte_4C3832E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22526/*"overwriteAtkMax"*/, defaultValue, 0);
}


System_Int32_array *ServantLimitAddEntity__GetOverwriteClassPassive(
        ServantLimitAddEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C38336 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22532/*"overwriteClassPassive"*/);
    byte_4C38336 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22532/*"overwriteClassPassive"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteCost(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C38334 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22538/*"overwriteCost"*/);
    byte_4C38334 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22538/*"overwriteCost"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  if ( (byte_4C38323 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22539/*"overwriteCv"*/);
    byte_4C38323 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22539/*"overwriteCv"*/, defaultCvId, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteExpType(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C38332 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22548/*"overwriteExpType"*/);
    byte_4C38332 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22548/*"overwriteExpType"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteHpBase(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C38328 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22552/*"overwriteHpBase"*/);
    byte_4C38328 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22552/*"overwriteHpBase"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteHpMax(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C3832A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22553/*"overwriteHpMax"*/);
    byte_4C3832A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22553/*"overwriteHpMax"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteRarity(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C38330 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22569/*"overwriteRarity"*/);
    byte_4C38330 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22569/*"overwriteRarity"*/, defaultValue, 0);
}


System_String_o *ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4C38319 & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_22506/*"overWriteServantBattleName"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38319 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22506/*"overWriteServantBattleName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C3313C(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverwriteServantName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4C38317 & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_22507/*"overWriteServantName"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38317 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22507/*"overWriteServantName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C3313C(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C38327 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22577/*"overwriteServantParameter"*/);
    byte_4C38327 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_22577/*"overwriteServantParameter"*/, 0, 0);
}


System_String_o *ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4C38318 & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_22508/*"overWriteServantShortName"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38318 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22508/*"overWriteServantShortName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C3313C(result);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1

  if ( (byte_4C3831F & 1) == 0 )
  {
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_18985/*"en_waist"*/);
    sub_1C32C20(&StringLiteral_10085/*"OverwriteShadowServantEffectNodes"*/);
    byte_4C3831F = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10085/*"OverwriteShadowServantEffectNodes"*/,
                             v2);
  if ( !ScriptStringArrayParam || (v5 = ScriptStringArrayParam, !ScriptStringArrayParam->max_length) )
  {
    v6 = sub_1C32CC8(string___TypeInfo, 1);
    if ( !v6 )
      sub_1C32E7C(0);
    v5 = (System_String_array *)v6;
    if ( !*(_DWORD *)(v6 + 24) )
      sub_1C32E84(v6);
    v9 = StringLiteral_18985/*"en_waist"*/;
    *(_QWORD *)(v6 + 32) = StringLiteral_18985/*"en_waist"*/;
    sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), v9, v7, v8);
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
  Il2CppObject *Item; // x22
  int32_t v14; // w22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  _BOOL8 v18; // x0
  void *v20; // x0
  int v21; // w1
  __int64 v22; // x21
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  v4 = defaultName;
  if ( (byte_4C3833A & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&StringLiteral_22584/*"overwriteSkillName"*/);
    byte_4C3833A = 1;
  }
  memset(&v24, 0, sizeof(v24));
  ScriptObject = ServantLimitAddEntity__getScriptObject(
                   this,
                   (System_String_o *)StringLiteral_22584/*"overwriteSkillName"*/,
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v23,
          v8,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v24 = v23;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v24,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = (System_Collections_Generic_List_object__o *)v24.fields._current;
          if ( v24.fields._current )
          {
            v11 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
            if ( v24.fields._current->klass->_2.naturalAligment < (unsigned int)v11
              || (System_Collections_Generic_List_object__c *)v24.fields._current->klass->_2.typeHierarchy[v11 - 1] != System_Collections_Generic_List_object__TypeInfo )
            {
              sub_1C3313C(v24.fields._current);
LABEL_24:
              sub_1C32E7C(IsNullOrEmpty);
            }
          }
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v24.fields._current, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !current )
              goto LABEL_24;
            if ( current->fields._size == 2 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       current,
                       0,
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v14 = System_Convert__ToInt32(Item, 0);
              v15 = System_Collections_Generic_List_object___get_Item(
                      current,
                      1,
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
              v16 = System_Convert__ToString(v15, 0);
              if ( v14 == skillId )
              {
                v17 = v16;
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v24,
                  (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
                return v17;
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v24,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      }
    }
    else
    {
      sub_1C3313C(ScriptObject);
      if ( v21 != 1 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v24,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        sub_1D1BD54();
      }
      v22 = *(_QWORD *)__cxa_begin_catch(v20);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      if ( v22 )
        sub_1C32E74(v22);
    }
  }
  else
  {
    v18 = BasicHelper__IsNullOrEmpty(0, 0);
    if ( !v18 )
      sub_1C32E7C(v18);
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantLimitAddEntity__GetOverwriteSkillName_42599740(
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
  Il2CppObject *Item; // x23
  int32_t v16; // w23
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  Il2CppObject *v19; // x22
  uint32_t cctor_finished; // w8
  System_String_o *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x2
  System_String_o *v29; // x0
  _BOOL8 v30; // x0
  System_String_o *v31; // x0
  void *v33; // x0
  int v34; // w1
  __int64 v35; // x21
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3833B & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_22584/*"overwriteSkillName"*/);
    sub_1C32C20(&StringLiteral_12228/*"SKILL_EFFECT_TITLE"*/);
    sub_1C32C20(&StringLiteral_12227/*"SKILL_EFFECT_LEVEL_TITLE"*/);
    byte_4C3833B = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ScriptObject = ServantLimitAddEntity__getScriptObject(
                   this,
                   (System_String_o *)StringLiteral_22584/*"overwriteSkillName"*/,
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v36,
          v10,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v37 = v36;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v37,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = (System_Collections_Generic_List_object__o *)v37.fields._current;
          if ( v37.fields._current )
          {
            v13 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
            if ( v37.fields._current->klass->_2.naturalAligment < (unsigned int)v13
              || (System_Collections_Generic_List_object__c *)v37.fields._current->klass->_2.typeHierarchy[v13 - 1] != System_Collections_Generic_List_object__TypeInfo )
            {
              sub_1C3313C(v37.fields._current);
LABEL_31:
              sub_1C32E7C(IsNullOrEmpty);
            }
          }
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v37.fields._current, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !current )
              goto LABEL_31;
            if ( current->fields._size == 2 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       current,
                       0,
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v16 = System_Convert__ToInt32(Item, 0);
              v17 = System_Collections_Generic_List_object___get_Item(
                      current,
                      1,
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
              v18 = System_Convert__ToString(v17, 0);
              if ( v16 == skillId )
              {
                v19 = (Il2CppObject *)v18;
                cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
                if ( lv <= 0 )
                {
                  if ( !cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12228/*"SKILL_EFFECT_TITLE"*/, 0);
                  v29 = System_String__Format(v31, v19, 0);
                }
                else
                {
                  if ( !cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12227/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0);
                  LODWORD(v36.fields._list) = lv;
                  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v22, v23, v24, v25, v26, v27);
                  v29 = System_String__Format_63559836(v21, v19, v28, 0);
                }
                defaultName = v29;
                break;
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v37,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      }
    }
    else
    {
      sub_1C3313C(ScriptObject);
      if ( v34 != 1 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v37,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        sub_1D1BD54();
      }
      v35 = *(_QWORD *)__cxa_begin_catch(v33);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v37,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      if ( v35 )
        sub_1C32E74(v35);
    }
  }
  else
  {
    v30 = BasicHelper__IsNullOrEmpty(0, 0);
    if ( !v30 )
      sub_1C32E7C(v30);
  }
  return defaultName;
}


System_String_o *ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C38321 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22585/*"overwriteSvtDetailName"*/);
    byte_4C38321 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22585/*"overwriteSvtDetailName"*/, 0, 0);
}


System_String_o *ServantLimitAddEntity__GetOverwriteTDFileName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4C38316 & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_22509/*"overWriteTDFileName"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38316 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22509/*"overWriteTDFileName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C3313C(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverwriteTDName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4C38314 & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_22510/*"overWriteTDName"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38314 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22510/*"overWriteTDName"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C3313C(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverwriteTDRuby(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_4C38315 & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_22512/*"overWriteTDRuby"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38315 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22512/*"overWriteTDRuby"*/, v2);
  if ( result )
  {
    if ( result->klass == string_TypeInfo )
      return result;
    sub_1C3313C(result);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  Il2CppObject *v5; // x19

  if ( (byte_4C3831C & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&StringLiteral_22948/*"randomGroupIndex"*/);
    byte_4C3831C = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_22948/*"randomGroupIndex"*/, v2);
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
  System_Converter_TInput__TOutput__o *_9__23_0; // x20
  Il2CppObject *v11; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x0

  if ( (byte_4C3831E & 1) == 0 )
  {
    sub_1C32C20(&System_Converter_object__string__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__23_0__);
    sub_1C32C20(&ServantLimitAddEntity___c_TypeInfo);
    byte_4C3831E = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_1C32CC8(string___TypeInfo, 0);
  v6 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( ScriptObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1C32CC8(string___TypeInfo, 0);
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
    _9__23_0 = (System_Converter_TInput__TOutput__o *)sub_1C32E6C(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__23_0,
      v11,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__23_0__,
      0);
    static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = (struct System_Converter_object__string__o *)_9__23_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v6,
                                                       (System_Converter_T__TOutput__o *)_9__23_0,
                                                       (const MethodInfo_3004A10 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v15 )
    sub_1C32E7C(0);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v15,
                                  (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4C38325 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23282/*"servantParameterLimitCount"*/);
    byte_4C38325 = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23282/*"servantParameterLimitCount"*/,
           defaultLimitCount,
           0);
}


int32_t ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C38312 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24787/*"weaponEffect"*/);
    byte_4C38312 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_24787/*"weaponEffect"*/, -1, v2);
}


int32_t ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C38311 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24788/*"weaponGroup"*/);
    byte_4C38311 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_24788/*"weaponGroup"*/, -1, v2);
}


bool ServantLimitAddEntity__HasKeyOverwriteAtkBase(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3832D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22525/*"overwriteAtkBase"*/);
    byte_4C3832D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22525/*"overwriteAtkBase"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteAtkMax(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3832F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22526/*"overwriteAtkMax"*/);
    byte_4C3832F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22526/*"overwriteAtkMax"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteClassPassive(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38337 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22532/*"overwriteClassPassive"*/);
    byte_4C38337 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22532/*"overwriteClassPassive"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteCost(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38335 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22538/*"overwriteCost"*/);
    byte_4C38335 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22538/*"overwriteCost"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteExpType(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38333 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22548/*"overwriteExpType"*/);
    byte_4C38333 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22548/*"overwriteExpType"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteHpBase(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38329 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22552/*"overwriteHpBase"*/);
    byte_4C38329 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22552/*"overwriteHpBase"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteHpMax(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3832B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22553/*"overwriteHpMax"*/);
    byte_4C3832B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22553/*"overwriteHpMax"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteRarity(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38331 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22569/*"overwriteRarity"*/);
    byte_4C38331 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22569/*"overwriteRarity"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteSkillName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38339 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22584/*"overwriteSkillName"*/);
    byte_4C38339 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22584/*"overwriteSkillName"*/, 0);
}


bool ServantLimitAddEntity__HasServantParameterLimitCountKey(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38326 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23282/*"servantParameterLimitCount"*/);
    byte_4C38326 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23282/*"servantParameterLimitCount"*/, 0);
}


bool ServantLimitAddEntity__IsOverwriteCv(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38322 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22539/*"overwriteCv"*/);
    byte_4C38322 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22539/*"overwriteCv"*/, 0);
}


bool ServantLimitAddEntity__IsOverwriteSvtDetailName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38320 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22585/*"overwriteSvtDetailName"*/);
    byte_4C38320 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22585/*"overwriteSvtDetailName"*/, 0);
}


bool ServantLimitAddEntity__IsValidWeaponGroup(
        ServantLimitAddEntity_o *this,
        int32_t checkValue,
        const MethodInfo *method)
{
  return checkValue != -1;
}


bool ServantLimitAddEntity__checkScript(ServantLimitAddEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  return ServantLimitAddEntity__getScriptObject(this, key, method) != 0;
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
  int32_t result; // w0
  ServantLimitAddEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2
  long double v14; // q0

  v4 = defVal;
  if ( (byte_4C3830E & 1) == 0 )
  {
    sub_1C32C20(&long_TypeInfo);
    byte_4C3830E = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, long_TypeInfo, v8, v9);
  v14 = sub_1C3313C(ScriptObject);
  ServantLimitAddEntity__getScriptFloat(v11, v12, *(float *)&v14, v13);
  return result;
}


float ServantLimitAddEntity__getScriptFloat(
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

  if ( (byte_4C3830F & 1) == 0 )
  {
    sub_1C32C20(&double_TypeInfo);
    byte_4C3830F = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return defVal;
  if ( ScriptObject->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(ScriptObject, double_TypeInfo, v8, v9);
  sub_1C3313C(ScriptObject);
  ServantLimitAddEntity__getScriptIntArrayParam(v11, v12, v13, v14);
  return result;
}


System_Int32_array *ServantLimitAddEntity__getScriptIntArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  ServantLimitAddEntity___c_c *v9; // x0
  __int64 naturalAligment; // x9
  System_Converter_object__int__o *_9__5_0; // x20
  Il2CppObject *v12; // x21
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_int__o *v16; // x0

  if ( (byte_4C38310 & 1) == 0 )
  {
    sub_1C32C20(&System_Converter_object__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__5_0__);
    sub_1C32C20(&ServantLimitAddEntity___c_TypeInfo);
    byte_4C38310 = 1;
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
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( v8->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_List_object__c *)v8->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
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
        _9__5_0 = (System_Converter_object__int__o *)sub_1C32E6C(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(
          _9__5_0,
          v12,
          Method_ServantLimitAddEntity___c__getScriptIntArrayParam_b__5_0__,
          0);
        static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = _9__5_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v14, v15);
      }
      v16 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v8,
                                                        (System_Converter_T__TOutput__o *)_9__5_0,
                                                        (const MethodInfo_300490C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v16 )
        return System_Collections_Generic_List_int___ToArray(
                 v16,
                 (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1C3313C(v8);
    }
    sub_1C32E7C(v16);
  }
  return defVal;
}


Il2CppObject *ServantLimitAddEntity__getScriptObject(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3830D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C3830D = 1;
  }
  value = 0;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  const MethodInfo *v3; // x3

  if ( (byte_4C3833E & 1) == 0 )
  {
    sub_1C32C20(&ServantLimitAddEntity___c_TypeInfo);
    byte_4C3833E = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ServantLimitAddEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantLimitAddEntity___c_TypeInfo->static_fields->__9 = (struct ServantLimitAddEntity___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ServantLimitAddEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantLimitAddEntity___c___ctor(ServantLimitAddEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *ServantLimitAddEntity___c___GetScriptStringArrayParam_b__23_0(
        ServantLimitAddEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}


int32_t ServantLimitAddEntity___c___getScriptIntArrayParam_b__5_0(
        ServantLimitAddEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C3833F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3833F = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method,
                              method);
  else
    v4 = 0;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0);
}
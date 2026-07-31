void ServantLimitAddEntity___ctor(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939074 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939074 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantLimitAddEntity__CreatePK(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  if ( (byte_5939073 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939073 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_5939055 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17575/*"ascensionAfterDialogId"*/);
    byte_5939055 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_17575/*"ascensionAfterDialogId"*/, defaultValue, v3);
}


System_String_o *ServantLimitAddEntity__GetCondTitle(
        ServantLimitAddEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593905A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23684/*"overwriteServantParameterTitle"*/);
    byte_593905A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23684/*"overwriteServantParameterTitle"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetLimitCountUpResultServantLimitCount(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_593904A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22264/*"limitCountUpResultServantLimitCount"*/);
    byte_593904A = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_22264/*"limitCountUpResultServantLimitCount"*/, -1, v2);
}


int32_t ServantLimitAddEntity__GetNotExistMasterCharaId(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593906E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17760/*"battleCharaIdWhenNotExistMaster"*/);
    byte_593906E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17760/*"battleCharaIdWhenNotExistMaster"*/, 0, 0);
}


System_String_o *ServantLimitAddEntity__GetOverWriteTDRank(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  __int64 v5; // x2

  if ( (byte_5939051 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23606/*"overWriteTDRank"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939051 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23606/*"overWriteTDRank"*/, v2);
  if ( result )
  {
    if ( result->klass == (System_String_c *)qword_594C0B8 )
      return result;
    sub_220024C(result, qword_594C0B8, v5);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverWriteTDTypeText(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  __int64 v5; // x2

  if ( (byte_5939052 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23608/*"overWriteTDTypeText"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939052 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23608/*"overWriteTDTypeText"*/, v2);
  if ( result )
  {
    if ( result->klass == (System_String_c *)qword_594C0B8 )
      return result;
    sub_220024C(result, qword_594C0B8, v5);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t ServantLimitAddEntity__GetOverWriteTDTypeTextCommonReleaseId(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x19

  if ( (byte_5939054 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&StringLiteral_23609/*"overWriteTDTypeTextCommonReleaseId"*/);
    byte_5939054 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23609/*"overWriteTDTypeTextCommonReleaseId"*/, v2);
  if ( ScriptObject )
  {
    v6 = ScriptObject;
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v5);
    LODWORD(ScriptObject) = System_Convert__ToInt32(v6, 0);
  }
  return (int)ScriptObject;
}


int32_t ServantLimitAddEntity__GetOverwriteAtkBase(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5939062 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23621/*"overwriteAtkBase"*/);
    byte_5939062 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23621/*"overwriteAtkBase"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteAtkMax(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5939064 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23622/*"overwriteAtkMax"*/);
    byte_5939064 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23622/*"overwriteAtkMax"*/, defaultValue, 0);
}


System_Int32_array *ServantLimitAddEntity__GetOverwriteClassPassive(
        ServantLimitAddEntity_o *this,
        System_Int32_array *defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593906C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23629/*"overwriteClassPassive"*/);
    byte_593906C = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_23629/*"overwriteClassPassive"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteCost(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593906A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23635/*"overwriteCost"*/);
    byte_593906A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23635/*"overwriteCost"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteCvId(
        ServantLimitAddEntity_o *this,
        int32_t defaultCvId,
        const MethodInfo *method)
{
  if ( (byte_5939059 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23636/*"overwriteCv"*/);
    byte_5939059 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23636/*"overwriteCv"*/, defaultCvId, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteExpType(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5939068 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23646/*"overwriteExpType"*/);
    byte_5939068 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23646/*"overwriteExpType"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteHpBase(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_593905E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23651/*"overwriteHpBase"*/);
    byte_593905E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23651/*"overwriteHpBase"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteHpMax(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5939060 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23652/*"overwriteHpMax"*/);
    byte_5939060 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23652/*"overwriteHpMax"*/, defaultValue, 0);
}


int32_t ServantLimitAddEntity__GetOverwriteRarity(
        ServantLimitAddEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_5939066 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23672/*"overwriteRarity"*/);
    byte_5939066 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23672/*"overwriteRarity"*/, defaultValue, 0);
}


System_String_o *ServantLimitAddEntity__GetOverwriteServantBattleName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  __int64 v5; // x2

  if ( (byte_5939050 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23601/*"overWriteServantBattleName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939050 = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23601/*"overWriteServantBattleName"*/, v2);
  if ( result )
  {
    if ( result->klass == (System_String_c *)qword_594C0B8 )
      return result;
    sub_220024C(result, qword_594C0B8, v5);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverwriteServantName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  __int64 v5; // x2

  if ( (byte_593904E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23602/*"overWriteServantName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593904E = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23602/*"overWriteServantName"*/, v2);
  if ( result )
  {
    if ( result->klass == (System_String_c *)qword_594C0B8 )
      return result;
    sub_220024C(result, qword_594C0B8, v5);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *ServantLimitAddEntity__GetOverwriteServantParameter(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_593905D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23683/*"overwriteServantParameter"*/);
    byte_593905D = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_23683/*"overwriteServantParameter"*/, 0, 0);
}


System_String_o *ServantLimitAddEntity__GetOverwriteServantShortName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  __int64 v5; // x2

  if ( (byte_593904F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23603/*"overWriteServantShortName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593904F = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23603/*"overWriteServantShortName"*/, v2);
  if ( result )
  {
    if ( result->klass == (System_String_c *)qword_594C0B8 )
      return result;
    sub_220024C(result, qword_594C0B8, v5);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w1

  if ( (byte_5939057 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_19818/*"en_waist"*/);
    sub_21FFC50(&StringLiteral_10478/*"OverwriteShadowServantEffectNodes"*/);
    byte_5939057 = 1;
  }
  ScriptStringArrayParam = ServantLimitAddEntity__GetScriptStringArrayParam(
                             this,
                             (System_String_o *)StringLiteral_10478/*"OverwriteShadowServantEffectNodes"*/,
                             v2);
  if ( !ScriptStringArrayParam || (v5 = ScriptStringArrayParam, !ScriptStringArrayParam->max_length) )
  {
    v6 = sub_21FFD10(string___TypeInfo, 1);
    if ( !v6 )
      sub_21FFECC(0, v7);
    v5 = (System_String_array *)v6;
    if ( !*(_DWORD *)(v6 + 24) )
      sub_21FFED4(v6);
    v14 = StringLiteral_19818/*"en_waist"*/;
    *(_QWORD *)(v6 + 32) = StringLiteral_19818/*"en_waist"*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 32), v14, v8, v9, v10, v11, v12, v13);
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
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x21
  __int64 naturalAligment; // x9
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *current; // x21
  __int64 v13; // x9
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *Item; // x22
  int32_t v18; // w22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-70h] BYREF

  v4 = defaultName;
  if ( (byte_5939071 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&StringLiteral_23692/*"overwriteSkillName"*/);
    byte_5939071 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  ScriptObject = ServantLimitAddEntity__getScriptObject(
                   this,
                   (System_String_o *)StringLiteral_23692/*"overwriteSkillName"*/,
                   (const MethodInfo *)defaultName);
  if ( !ScriptObject )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty(0, 0);
    if ( IsNullOrEmpty )
      return v4;
LABEL_25:
    sub_21FFECC(IsNullOrEmpty, v22);
  }
  v9 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( ScriptObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_220024C(ScriptObject, System_Collections_Generic_List_object__TypeInfo, v8);
    goto LABEL_25;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ScriptObject, 0) )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      v9,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v25 = v24;
    v24.fields._list = 0;
    *(_QWORD *)&v24.fields._index = &v25;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
    {
      current = (System_Collections_Generic_List_object__o *)v25.fields._current;
      if ( v25.fields._current )
      {
        v13 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( v25.fields._current->klass->_2.naturalAligment < (unsigned int)v13
          || (System_Collections_Generic_List_object__c *)v25.fields._current->klass->_2.typeHierarchy[v13 - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_220024C(v25.fields._current, System_Collections_Generic_List_object__TypeInfo, v11);
LABEL_23:
          sub_21FFECC(v14, v15);
        }
      }
      v14 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v25.fields._current, 0);
      if ( !v14 )
      {
        if ( !current )
          goto LABEL_23;
        if ( current->fields._size == 2 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   current,
                   0,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
          if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v16);
          v18 = System_Convert__ToInt32(Item, 0);
          v19 = System_Collections_Generic_List_object___get_Item(
                  current,
                  1,
                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
          v20 = System_Convert__ToString(v19, 0);
          if ( v18 == skillId )
          {
            v4 = v20;
            break;
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantLimitAddEntity__GetOverwriteSkillName_49661944(
        ServantLimitAddEntity_o *this,
        int32_t skillId,
        int32_t lv,
        System_String_o *defaultName,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObject; // x0
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x22
  __int64 naturalAligment; // x9
  __int64 v13; // x2
  bool v14; // w22
  System_Collections_Generic_List_object__o *current; // x23
  __int64 v16; // x9
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *Item; // x24
  int32_t v21; // w24
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x23
  int v26; // w8
  System_String_o *v27; // x21
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_String_o *v33; // x0
  void *v34; // x0
  int v35; // w1
  struct System_Collections_Generic_List_T__o *v36; // x20
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF
  int32_t v39; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_5939072 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23692/*"overwriteSkillName"*/);
    sub_21FFC50(&StringLiteral_12722/*"SKILL_EFFECT_TITLE"*/);
    sub_21FFC50(&StringLiteral_12721/*"SKILL_EFFECT_LEVEL_TITLE"*/);
    byte_5939072 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  ScriptObject = ServantLimitAddEntity__getScriptObject(
                   this,
                   (System_String_o *)StringLiteral_23692/*"overwriteSkillName"*/,
                   *(const MethodInfo **)&lv);
  if ( ScriptObject )
  {
    v11 = (System_Collections_Generic_List_object__o *)ScriptObject;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( ScriptObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ScriptObject, 0) )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v37,
          v11,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v38 = v37;
        v37.fields._list = 0;
        *(_QWORD *)&v37.fields._index = &v38;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v38,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
          if ( !v14 )
          {
            v29 = 0;
            goto LABEL_25;
          }
          current = (System_Collections_Generic_List_object__o *)v38.fields._current;
          if ( v38.fields._current )
          {
            v16 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
            if ( v38.fields._current->klass->_2.naturalAligment < (unsigned int)v16
              || (System_Collections_Generic_List_object__c *)v38.fields._current->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_List_object__TypeInfo )
            {
              sub_220024C(v38.fields._current, System_Collections_Generic_List_object__TypeInfo, v13);
LABEL_33:
              sub_21FFECC(IsNullOrEmpty, v18);
            }
          }
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v38.fields._current, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !current )
              goto LABEL_33;
            if ( current->fields._size == 2 )
            {
              Item = System_Collections_Generic_List_object___get_Item(
                       current,
                       0,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
              if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v19);
              v21 = System_Convert__ToInt32(Item, 0);
              v22 = System_Collections_Generic_List_object___get_Item(
                      current,
                      1,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
              v23 = System_Convert__ToString(v22, 0);
              if ( v21 == skillId )
                break;
            }
          }
        }
        v25 = (Il2CppObject *)v23;
        v26 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( lv <= 0 )
        {
          if ( !v26 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12722/*"SKILL_EFFECT_TITLE"*/, 0);
          v29 = System_String__Format(v33, v25, 0);
        }
        else
        {
          if ( !v26 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12721/*"SKILL_EFFECT_LEVEL_TITLE"*/, 0);
          v39 = lv;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v39);
          v29 = System_String__Format_75484576(v27, v25, v28, 0);
        }
LABEL_25:
        if ( v14 )
          defaultName = v29;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v38,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      }
    }
    else
    {
      sub_220024C(ScriptObject, System_Collections_Generic_List_object__TypeInfo, v10);
      if ( v35 != 1 )
      {
        sub_1FFA574(&v37);
        sub_22ED31C();
      }
      v36 = *(struct System_Collections_Generic_List_T__o **)__cxa_begin_catch(v34);
      v37.fields._list = v36;
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_object___Dispose(
        *(System_Collections_Generic_List_Enumerator_object__o **)&v37.fields._index,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
      if ( v36 )
        sub_21FFEC4(v36);
    }
  }
  else
  {
    v30 = BasicHelper__IsNullOrEmpty(0, 0);
    if ( !v30 )
      sub_21FFECC(v30, v31);
  }
  return defaultName;
}


System_String_o *ServantLimitAddEntity__GetOverwriteSvtDetailName(
        ServantLimitAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_5939058 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23693/*"overwriteSvtDetailName"*/);
    byte_5939058 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23693/*"overwriteSvtDetailName"*/, 0, 0);
}


System_String_o *ServantLimitAddEntity__GetOverwriteTDFileName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  __int64 v5; // x2

  if ( (byte_593904D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23604/*"overWriteTDFileName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593904D = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23604/*"overWriteTDFileName"*/, v2);
  if ( result )
  {
    if ( result->klass == (System_String_c *)qword_594C0B8 )
      return result;
    sub_220024C(result, qword_594C0B8, v5);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverwriteTDName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  __int64 v5; // x2

  if ( (byte_593904B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23605/*"overWriteTDName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593904B = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23605/*"overWriteTDName"*/, v2);
  if ( result )
  {
    if ( result->klass == (System_String_c *)qword_594C0B8 )
      return result;
    sub_220024C(result, qword_594C0B8, v5);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


System_String_o *ServantLimitAddEntity__GetOverwriteTDRuby(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  __int64 v5; // x2

  if ( (byte_593904C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23607/*"overWriteTDRuby"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593904C = 1;
  }
  result = (System_String_o *)ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_23607/*"overWriteTDRuby"*/, v2);
  if ( result )
  {
    if ( result->klass == (System_String_c *)qword_594C0B8 )
      return result;
    sub_220024C(result, qword_594C0B8, v5);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t ServantLimitAddEntity__GetRandomGroupIndex(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x19

  if ( (byte_5939053 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&StringLiteral_24097/*"randomGroupIndex"*/);
    byte_5939053 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, (System_String_o *)StringLiteral_24097/*"randomGroupIndex"*/, v2);
  if ( ScriptObject )
  {
    v6 = ScriptObject;
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v5);
    LODWORD(ScriptObject) = System_Convert__ToInt32(v6, 0);
  }
  return (int)ScriptObject;
}


System_String_array *ServantLimitAddEntity__GetScriptStringArrayParam(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObject; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 naturalAligment; // x10
  ServantLimitAddEntity___c_c *v10; // x0
  struct ServantLimitAddEntity___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__21_0; // x20
  Il2CppObject *v13; // x21
  struct ServantLimitAddEntity___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_object__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_5939056 & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__string__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__21_0__);
    sub_21FFC50(&ServantLimitAddEntity___c_TypeInfo);
    byte_5939056 = 1;
  }
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, method);
  if ( !ScriptObject )
    return (System_String_array *)sub_21FFD10(string___TypeInfo, 0);
  v7 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( ScriptObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_21FFD10(string___TypeInfo, 0);
  }
  v10 = ServantLimitAddEntity___c_TypeInfo;
  if ( !*(&ServantLimitAddEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddEntity___c_TypeInfo, v6);
    v10 = ServantLimitAddEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__21_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v6);
      static_fields = ServantLimitAddEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__21_0,
      v13,
      Method_ServantLimitAddEntity___c__GetScriptStringArrayParam_b__21_0__,
      0);
    v14 = ServantLimitAddEntity___c_TypeInfo->static_fields;
    v14->__9__21_0 = (struct System_Converter_object__string__o *)_9__21_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__21_0, (int32_t)_9__21_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v7,
                                                       (System_Converter_T__TOutput__o *)_9__21_0,
                                                       (const MethodInfo_36A5860 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v21 )
    sub_21FFECC(0, v22);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t ServantLimitAddEntity__GetServantParameterLimitCount(
        ServantLimitAddEntity_o *this,
        int32_t defaultLimitCount,
        const MethodInfo *method)
{
  if ( (byte_593905B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24476/*"servantParameterLimitCount"*/);
    byte_593905B = 1;
  }
  return EntityScriptUtil__GetIntValue(
           this->fields.script,
           (System_String_o *)StringLiteral_24476/*"servantParameterLimitCount"*/,
           defaultLimitCount,
           0);
}


int32_t ServantLimitAddEntity__GetSupportLimitCountGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593906F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25070/*"supportLimitCountGroupIndex"*/);
    byte_593906F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25070/*"supportLimitCountGroupIndex"*/, 0, 0);
}


int32_t ServantLimitAddEntity__GetWeaponEfect(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939049 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26116/*"weaponEffect"*/);
    byte_5939049 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_26116/*"weaponEffect"*/, -1, v2);
}


int32_t ServantLimitAddEntity__GetWeaponGroup(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5939048 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26117/*"weaponGroup"*/);
    byte_5939048 = 1;
  }
  return ServantLimitAddEntity__getScript(this, (System_String_o *)StringLiteral_26117/*"weaponGroup"*/, -1, v2);
}


bool ServantLimitAddEntity__HasKeyOverwriteAtkBase(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939063 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23621/*"overwriteAtkBase"*/);
    byte_5939063 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23621/*"overwriteAtkBase"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteAtkMax(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939065 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23622/*"overwriteAtkMax"*/);
    byte_5939065 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23622/*"overwriteAtkMax"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteClassPassive(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593906D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23629/*"overwriteClassPassive"*/);
    byte_593906D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23629/*"overwriteClassPassive"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteCost(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593906B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23635/*"overwriteCost"*/);
    byte_593906B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23635/*"overwriteCost"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteExpType(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939069 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23646/*"overwriteExpType"*/);
    byte_5939069 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23646/*"overwriteExpType"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteHpBase(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593905F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23651/*"overwriteHpBase"*/);
    byte_593905F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23651/*"overwriteHpBase"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteHpMax(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939061 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23652/*"overwriteHpMax"*/);
    byte_5939061 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23652/*"overwriteHpMax"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteRarity(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939067 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23672/*"overwriteRarity"*/);
    byte_5939067 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23672/*"overwriteRarity"*/, 0);
}


bool ServantLimitAddEntity__HasKeyOverwriteSkillName(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939070 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23692/*"overwriteSkillName"*/);
    byte_5939070 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23692/*"overwriteSkillName"*/, 0);
}


bool ServantLimitAddEntity__HasServantParameterLimitCountKey(ServantLimitAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593905C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24476/*"servantParameterLimitCount"*/);
    byte_593905C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_24476/*"servantParameterLimitCount"*/, 0);
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
  __int64 v6; // x2
  ServantLimitAddEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  v4 = defVal;
  ScriptObject = ServantLimitAddEntity__getScriptObject(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObject )
    return v4;
  if ( ScriptObject->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObject, qword_594C090, v6);
  sub_220024C(ScriptObject, qword_594C090, v6);
  return ServantLimitAddEntity__GetWeaponGroup(v8, v9);
}


Il2CppObject *ServantLimitAddEntity__getScriptObject(
        ServantLimitAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939047 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5939047 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5939075 & 1) == 0 )
  {
    sub_21FFC50(&ServantLimitAddEntity___c_TypeInfo);
    byte_5939075 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantLimitAddEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantLimitAddEntity___c_TypeInfo->static_fields->__9 = (struct ServantLimitAddEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantLimitAddEntity___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}
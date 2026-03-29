void BattleSequenceManager___cctor(const MethodInfo *method)
{
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4D33792 & 1) == 0 )
  {
    sub_1C93AD4(&BattleSequenceManager_TypeInfo);
    byte_4D33792 = 1;
  }
  static_fields = BattleSequenceManager_TypeInfo->static_fields;
  static_fields->defaultForceObi_16_9 = 1;
  static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_Dictionary_object__int__o *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Collections_Generic_HashSet_T__o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7

  if ( (byte_4D33791 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_Object__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_Action__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
    sub_1C93AD4(&StringLiteral_9427/*"N_{0}{1}"*/);
    byte_4D33791 = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.ReleaseSoundNames, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.DelayInvokeMethodList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_9427/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9427/*"N_{0}{1}"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.PosNodeFormatNP, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v24;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.npEndDeleteObjects,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
  System_Collections_Generic_Dictionary_object__Color____ctor(
    v31,
    (const MethodInfo_351F48C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
  this->fields.rendererBaseAddColorsDict = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__o *)v31;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.rendererBaseAddColorsDict,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v38;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.battleTargetList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v45;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.createdObjects, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v52,
    (const MethodInfo_3525324 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v52;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_HashSet_T__o *)sub_1C93D20(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v59,
    (const MethodInfo_372B7CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v59;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.playedAudioGroupIdHash,
    (int32_t)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.nowTargetAlpha = 1.0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3AC57E4 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D33771 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_25040/*"wait"*/);
    byte_4D33771 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v5 )
  {
    if ( !actor )
      sub_1C93D2C(v5, v6);
    BattleActorControl__RevertDefaultAnimation(actor, 0);
    BattleActorControl__playAnimation_47947364(actor, (System_String_o *)StringLiteral_25040/*"wait"*/, 0, 0);
    if ( !this->fields.DemoMode )
    {
      v7.fields.r = 0.0;
      v7.fields.g = 0.0;
      v7.fields.b = 0.0;
      v7.fields.a = 0.0;
      BattleActorControl__ChangeShadowColor(actor, v7, 0.3, 0);
    }
    v8.fields.r = 0.0;
    v8.fields.g = 0.0;
    v8.fields.b = 0.0;
    v8.fields.a = 1.0;
    BattleActorControl__SetMaterialColor(actor, v8, 0.0, 0);
  }
}


void BattleSequenceManager__CacheExecutingTdInfo(
        BattleSequenceManager_o *this,
        ExecutingTdInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.executingTdInfoCache = info;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.executingTdInfoCache,
    (int32_t)info,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSequenceManager__CacheRendererBaseAddColor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0
  BattlePerformance_c *klass; // x8
  BattlePerformance_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x8
  __int64 v12; // x9
  int *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  BattleActorControl_o *v21; // x21
  BattleServantData_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_SkinnedMeshRenderer_array *RendererArray; // x0
  __int64 v25; // x1
  UnityEngine_SkinnedMeshRenderer_array *v26; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v28; // x29
  Il2CppObject *v29; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x23
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  System_Nullable_Color__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Nullable_Color__o v38; // [xsp+20h] [xbp-80h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D3378F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_Color__get_Value__);
    byte_4D3378F = 1;
  }
  entity = 0;
  memset(&v38, 0, sizeof(v38));
  performance = this->fields.performance;
  if ( !performance
    || (performance = (BattlePerformance_o *)BattlePerformance__EnumerateActorControls(performance, 0)) == 0 )
  {
    sub_1C93D2C(performance, method);
  }
  klass = performance->klass;
  v5 = performance;
  v6 = *(unsigned __int16 *)&performance->klass->_2.rank;
  if ( *(_WORD *)&performance->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleActorControl__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_1C69E5C(performance, System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(BattlePerformance_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  if ( !v10 )
    sub_1C93D2C(0, v9);
  while ( 1 )
  {
    v11 = *(_QWORD *)v10;
    v12 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_16:
      v14 = sub_1C69E5C(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v15 = *(_QWORD *)v10;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleActorControl__c **)v17 - 1) != System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_23;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_23:
      v18 = sub_1C69E5C(v10, System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
    v21 = (BattleActorControl_o *)v19;
    if ( !v19 )
      sub_1C93D2C(0, v20);
    v22 = *(BattleServantData_o **)(v19 + 536);
    if ( !v22 )
      sub_1C93D2C(0, v20);
    if ( BattleServantData__TryGetDisplayTypeDetailEntity(v22, &entity, 0) )
    {
      if ( !entity )
        sub_1C93D2C(0, v23);
      NpcServantDisplayTypeDetailEntity__get_AddColor(&v37, entity, 0);
      v38 = v37;
      if ( v37.fields.hasValue )
      {
        RendererArray = BattleActorControl__GetRendererArray(v21, 1, 0);
        v26 = RendererArray;
        if ( !RendererArray )
          sub_1C93D2C(0, v25);
        max_length = RendererArray->max_length;
        if ( (int)max_length >= 1 )
        {
          v28 = 0;
          do
          {
            if ( v28 >= (unsigned int)max_length )
              sub_1C93D34(RendererArray);
            v29 = (Il2CppObject *)v26->m_Items[v28];
            rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
            Value = System_Nullable_Color___get_Value(
                      &v38,
                      (const MethodInfo_399CD64 *)Method_System_Nullable_Color__get_Value__);
            if ( !rendererBaseAddColorsDict )
              sub_1C93D2C(v35, v36);
            System_Collections_Generic_Dictionary_object__Color___set_Item(
              rendererBaseAddColorsDict,
              v29,
              Value,
              (const MethodInfo_351FE48 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
            LODWORD(max_length) = v26->max_length;
            ++v28;
          }
          while ( (__int64)v28 < (int)max_length );
        }
      }
    }
  }
  v31 = *(_QWORD *)v10;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
  {
    v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_41;
    }
    v34 = v31 + 16LL * *v33 + 312;
  }
  else
  {
LABEL_41:
    v34 = sub_1C69E5C(v10, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v34)(v10, *(_QWORD *)(v34 + 8));
}


bool BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_4D33787 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4D33787 = 1;
  }
  if ( System_String__Equals_64461772(bgmName, this->fields.BackupBgmName, 0) )
  {
    return 0;
  }
  else
  {
    intactBgmList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.intactBgmList;
    return !intactBgmList
        || !intactBgmList[1].monitor
        || !System_Linq_Enumerable__Contains_object_(
              intactBgmList,
              (Il2CppObject *)this->fields.BackupBgmName,
              (const MethodInfo_31C1360 *)Method_System_Linq_Enumerable_Contains_string___);
  }
}


void BattleSequenceManager__ClearExecutingTdInfoCache(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.executingTdInfoCache = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.executingTdInfoCache, 0, v2, v3, v4, v5, v6, v7);
}


bool BattleSequenceManager__CreateCutInStandFigure(
        BattleSequenceManager_o *this,
        WellFired_USFGOPlayCutInBase_o *baseCutInEvent,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  if ( !baseCutInEvent )
    sub_1C93D2C(this, 0);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, const MethodInfo *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.methodPtr)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_47087320(this, obj, onComplete, v8);
}


bool BattleSequenceManager__CreateCutInStandFigure_47087320(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v29; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v40; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v44; // x24

  if ( (byte_4D3375A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__);
    sub_1C93AD4(&BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
    byte_4D3375A = 1;
  }
  v7 = sub_1C93D20(BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = obj;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)obj, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = onComplete;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)onComplete, v22, v23, v24, v25, v26, v27);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_16;
  v29 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_16;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0);
  if ( !v29 )
    goto LABEL_16;
  MeshLocal = StandFigureManager__CreateMeshLocal(v29, (UnityEngine_GameObject_o *)Instance, 0);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.standFigure,
    (int32_t)MeshLocal,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0, 0) )
  {
    Instance = (UnityEngine_Component_o *)*p_standFigure;
    if ( *p_standFigure )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0);
      Instance = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureMName(
                                              this->fields.loadStandFigureId,
                                              this->fields.loadStandFigureLimitCount,
                                              0);
      if ( gameObject )
      {
        UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0);
        Instance = (UnityEngine_Component_o *)*p_standFigure;
        if ( *p_standFigure )
        {
          UIStandFigureRender__SetDepth((UIStandFigureRender_o *)Instance, 0.0, 0);
          v40 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v44 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v44,
            (Il2CppObject *)v7,
            Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__,
            0);
          if ( v40 )
            return UIStandFigureM__SetCharacter_44728504(
                     v40,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v44,
                     1,
                     0);
        }
      }
    }
LABEL_16:
    sub_1C93D2C(Instance, v9);
  }
  return 0;
}


void BattleSequenceManager__CrossFadeBgm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 performance; // x0
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  System_String_o *v5; // x21
  struct System_String_o **p_BackupBgmName; // x20
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  _BOOL4 v13; // w21
  struct System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  _BOOL4 v21; // w22
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *v30; // x23
  System_String_o *BgmName; // x0
  const MethodInfo *v32; // x3
  BgmPlayArgsGroup_o *v33; // x19
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x20
  float v37; // s0
  int v38; // w28
  System_Nullable_float__o v39; // x21
  const MethodInfo_399FF98 *v40; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  __int64 v48; // x20
  __int64 v49; // x0
  __int64 v50; // x1
  struct BattlePerformance_o *v51; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v53; // x8
  struct BattlePerformance_o *v54; // x8
  System_String_o *v55; // x19
  BattleSequenceManager_c *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  __int64 v63; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  __int64 v70; // x1
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int64 v77; // x21
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  __int64 v84; // x1
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  __int64 v91; // x21
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  __int64 v98; // x1
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  __int64 v105; // x1
  System_Collections_Hashtable_o *v106; // x0
  __int64 v107; // x0
  int v108; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v109; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v111; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_long__o v113; // 0:x0.16

  if ( (byte_4D33772 & 1) == 0 )
  {
    sub_1C93AD4(&BattleSequenceManager_TypeInfo);
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
    sub_1C93AD4(&Method_System_Nullable_long___ctor__);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&float_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_19902/*"from"*/);
    sub_1C93AD4(&StringLiteral_9891/*"OnChangeBgmVolume"*/);
    sub_1C93AD4(&StringLiteral_24376/*"time"*/);
    sub_1C93AD4(&StringLiteral_22710/*"onupdate"*/);
    sub_1C93AD4(&StringLiteral_24415/*"to"*/);
    sub_1C93AD4(&iTween_TypeInfo);
    byte_4D33772 = 1;
  }
  changeBgm = 0;
  memset(&v111, 0, sizeof(v111));
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_90;
  FieldEnvData = BattlePerformance__get_FieldEnvData((BattlePerformance_o *)performance, 0);
  v5 = FieldEnvData ? BattleFieldEnvironmentData__get_CurBGMName(FieldEnvData, 0) : 0LL;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( BasicHelper__EqualExceptNullOrEmpty(v5, this->fields.BackupBgmName, 0) || this->fields.DemoMode )
  {
    v13 = 0;
  }
  else
  {
    *p_BackupBgmName = v5;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.BackupBgmName,
      (int32_t)v5,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = 1;
  }
  if ( BattleSequenceManager__TryGetAfterChangeBgm(this, &changeBgm, v7) )
  {
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v14 = BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
            changeBgm,
            this->fields.performance,
            this->fields.BackupBgmName,
            0);
    this->fields.BackupBgmName = v14;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.BackupBgmName, (int32_t)v14, v15, v16, v17, v18, v19, v20);
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v21 = BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(changeBgm, 0);
    v13 = 1;
  }
  else
  {
    v21 = 0;
  }
  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
  {
    v23 = BattleActionData_AfterChangeField__GetPriorityBgmName(
            changeFieldAfter,
            this->fields.performance,
            this->fields.BackupBgmName,
            0);
    this->fields.BackupBgmName = v23;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.BackupBgmName, (int32_t)v23, v24, v25, v26, v27, v28, v29);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v21 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0);
    v13 = 1;
  }
  v30 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1C93D2C(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0);
  if ( ((v21 | System_String__op_Inequality(v30, BgmName, 0)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    performance = sub_1C93B7C(object___TypeInfo, 8);
    if ( !performance )
      goto LABEL_90;
    v48 = performance;
    v49 = StringLiteral_19902/*"from"*/;
    if ( StringLiteral_19902/*"from"*/ )
    {
      v49 = sub_1C93C10(StringLiteral_19902/*"from"*/, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
      if ( !v49 )
        goto LABEL_92;
      v50 = StringLiteral_19902/*"from"*/;
    }
    else
    {
      v50 = 0;
    }
    if ( !*(_DWORD *)(v48 + 24) )
      goto LABEL_91;
    *(_QWORD *)(v48 + 32) = v50;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 32), v50, v42, v43, v44, v45, v46, v47);
    v56 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v56 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v110.fields._list = v56->static_fields->NoblePhantasmBgmVolumeRate;
    v49 = j_il2cpp_value_box_0(float_TypeInfo, &v110);
    v63 = v49;
    if ( !v49 || (v49 = sub_1C93C10(v49, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v48 + 24) <= 1u )
        goto LABEL_91;
      *(_QWORD *)(v48 + 40) = v63;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 40), v63, v57, v58, v59, v60, v61, v62);
      v49 = StringLiteral_24415/*"to"*/;
      if ( StringLiteral_24415/*"to"*/ )
      {
        v49 = sub_1C93C10(StringLiteral_24415/*"to"*/, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
        if ( !v49 )
          goto LABEL_92;
        v70 = StringLiteral_24415/*"to"*/;
      }
      else
      {
        v70 = 0;
      }
      if ( *(_DWORD *)(v48 + 24) <= 2u )
        goto LABEL_91;
      *(_QWORD *)(v48 + 48) = v70;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 48), v70, v64, v65, v66, v67, v68, v69);
      *(_DWORD *)&v109.fields.hasValue = 1;
      v49 = j_il2cpp_value_box_0(int_TypeInfo, &v109);
      v77 = v49;
      if ( !v49 || (v49 = sub_1C93C10(v49, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v48 + 24) <= 3u )
          goto LABEL_91;
        *(_QWORD *)(v48 + 56) = v77;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 56), v77, v71, v72, v73, v74, v75, v76);
        v49 = StringLiteral_24376/*"time"*/;
        if ( StringLiteral_24376/*"time"*/ )
        {
          v49 = sub_1C93C10(StringLiteral_24376/*"time"*/, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
          if ( !v49 )
            goto LABEL_92;
          v84 = StringLiteral_24376/*"time"*/;
        }
        else
        {
          v84 = 0;
        }
        if ( *(_DWORD *)(v48 + 24) <= 4u )
          goto LABEL_91;
        *(_QWORD *)(v48 + 64) = v84;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 64), v84, v78, v79, v80, v81, v82, v83);
        v108 = 1056964608;
        v49 = j_il2cpp_value_box_0(float_TypeInfo, &v108);
        v91 = v49;
        if ( !v49 || (v49 = sub_1C93C10(v49, *(_QWORD *)(*(_QWORD *)v48 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v48 + 24) <= 5u )
            goto LABEL_91;
          *(_QWORD *)(v48 + 72) = v91;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 72), v91, v85, v86, v87, v88, v89, v90);
          v49 = StringLiteral_22710/*"onupdate"*/;
          if ( StringLiteral_22710/*"onupdate"*/ )
          {
            v49 = sub_1C93C10(StringLiteral_22710/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
            if ( !v49 )
              goto LABEL_92;
            v98 = StringLiteral_22710/*"onupdate"*/;
          }
          else
          {
            v98 = 0;
          }
          if ( *(_DWORD *)(v48 + 24) <= 6u )
            goto LABEL_91;
          *(_QWORD *)(v48 + 80) = v98;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 80), v98, v92, v93, v94, v95, v96, v97);
          v49 = StringLiteral_9891/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9891/*"OnChangeBgmVolume"*/ )
          {
            v105 = 0;
LABEL_84:
            if ( *(_DWORD *)(v48 + 24) > 7u )
            {
              *(_QWORD *)(v48 + 88) = v105;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v48 + 88), v105, v99, v100, v101, v102, v103, v104);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v106 = iTween__Hash((System_Object_array *)v48, 0);
              iTween__ValueTo(gameObject, v106, 0);
              return;
            }
LABEL_91:
            sub_1C93D34(v49);
          }
          v49 = sub_1C93C10(StringLiteral_9891/*"OnChangeBgmVolume"*/, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
          if ( v49 )
          {
            v105 = StringLiteral_9891/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v107 = sub_1C93D50(v49);
    sub_1C93BFC(v107, 0);
  }
  performance = BattleSequenceManager__ExistBackupBgmPlayGroup(this, v13, this->fields.BackupBgmName, v32);
  if ( (performance & 1) != 0 )
  {
    performance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( performance )
    {
      performance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)performance, 0);
      if ( performance )
      {
        v33 = (BgmPlayArgsGroup_o *)performance;
        performance = *(_QWORD *)(performance + 16);
        if ( performance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v110,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v111 = v110;
          while ( 1 )
          {
            v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v111,
                    (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v34 )
              break;
            current = v111.fields._current;
            if ( !v111.fields._current )
              sub_1C93D2C(v34, v35);
            v37 = (float)(__int64)v111.fields._current[2].klass + -800.0;
            if ( v37 == INFINITY )
              v38 = 0x80000000;
            else
              v38 = (int)v37;
            v109 = 0;
            System_Nullable_float____ctor(
              (System_Nullable_float__o)&v109,
              0.5,
              (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
            v39 = v109;
            v113.fields.value = v38 & (unsigned int)~(v38 >> 31);
            *(_OWORD *)&v110.fields._list = 0u;
            *(_QWORD *)&v113.fields.hasValue = &v110;
            System_Nullable_long____ctor(v113, Method_System_Nullable_long___ctor__, v40);
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, 0, v39, *(System_Nullable_long__o *)&v110.fields._list, 0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v111,
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_41915296(v33, 0, 0);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v13 )
  {
    v51 = this->fields.performance;
    if ( !v51 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v51->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    performance = UnityEngine_Object__op_Inequality(logic, 0, 0);
    if ( (performance & 1) != 0 )
    {
      v53 = this->fields.performance;
      if ( v53 )
      {
        performance = (__int64)v53->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0, 0);
          v54 = this->fields.performance;
          if ( v54 )
          {
            performance = (__int64)v54->fields.logic;
            if ( performance )
            {
              BattleLogic__PlayCurrentBgm((BattleLogic_o *)performance, 0.5, 0);
              return;
            }
          }
        }
      }
      goto LABEL_90;
    }
  }
  v55 = *p_BackupBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v55, 0);
}


bool BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v17; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4D33789 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
    sub_1C93AD4(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__);
    sub_1C93AD4(&BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
    byte_4D33789 = 1;
  }
  v7 = sub_1C93D20(BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_QWORD *)(v7 + 16) = checkBgmName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)checkBgmName, v10, v11, v12, v13, v14, v15);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0;
  v17 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0);
  v18 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__52110824(
           (System_Collections_Generic_IEnumerable_TSource__o *)v17,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
}


void BattleSequenceManager__FadeBattleUI(
        BattleSequenceManager_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  this->fields.nowTargetAlpha = targetAlpha;
  if ( !performance )
    sub_1C93D2C(0, method);
  BattlePerformance__FadeBattleUi(performance, time, targetAlpha, 0);
}


UIStandFigureM_o *BattleSequenceManager__FetchMeshPrefab(
        BattleSequenceManager_o *this,
        int32_t svtId,
        int32_t limitImgCnt,
        int32_t faceType,
        const MethodInfo *method)
{
  if ( this->fields.chrId == svtId
    && this->fields.actorLimitImgCount == limitImgCnt
    && this->fields.faceType == faceType
    || this->fields.loadStandFigureId == svtId
    && this->fields.loadStandFigureLimitCount == limitImgCnt
    && this->fields.faceType == faceType )
  {
    return this->fields.standFigure;
  }
  else
  {
    return 0;
  }
}


void BattleSequenceManager__FixSyncGroupRandomAudioPlayIndex(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *sequence,
        System_String_o *syncGroupName,
        const MethodInfo *method)
{
  __int64 v6; // x22
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__52415656; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x21
  BattleSequenceManager___c_c *v16; // x0
  System_Comparison_T__o *_9__76_0; // x23
  Il2CppObject *v18; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Func_object__bool__o *v26; // x23
  System_Collections_Generic_List_object__o *v27; // x21
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  BattleSequenceManager___c_c *v29; // x0
  System_Comparison_T__o *_9__76_2; // x19
  Il2CppObject *v31; // x22
  struct BattleSequenceManager___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v39; // x1
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4D33759 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___);
    sub_1C93AD4(&System_Comparison_USFGOPlayAudioEvent__TypeInfo);
    sub_1C93AD4(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__);
    sub_1C93AD4(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1C93AD4(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__);
    sub_1C93AD4(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__);
    sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__);
    sub_1C93AD4(&BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
    sub_1C93AD4(&BattleSequenceManager___c_TypeInfo);
    byte_4D33759 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v6 = sub_1C93D20(BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_27;
  *(_QWORD *)(v6 + 16) = syncGroupName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)syncGroupName, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__52415656 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                                                                           sequence,
                                                                                           (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v15 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v15,
    ComponentsInChildren_object__52415656,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v16 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v16 = BattleSequenceManager___c_TypeInfo;
  }
  _9__76_0 = (System_Comparison_T__o *)v16->static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleSequenceManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__76_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__76_0,
      v18,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__,
      0);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__76_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__76_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__76_0,
      (int32_t)_9__76_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Collections_Generic_List_object___Sort_59225184(
    v15,
    _9__76_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v26 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v6,
    Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v15,
          (System_Func_T__bool__o *)v26,
          (const MethodInfo_318DB78 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v27 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__52415656 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                                                                             sequence,
                                                                                             (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v27 )
    {
      System_Collections_Generic_List_object___AddRange(
        v27,
        ComponentsInChildren_object__52415656,
        (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v28 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                                             sequence,
                                                             (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v27,
        v28,
        (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v29 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v29 = BattleSequenceManager___c_TypeInfo;
      }
      _9__76_2 = (System_Comparison_T__o *)v29->static_fields->__9__76_2;
      if ( !_9__76_2 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = BattleSequenceManager___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__76_2 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__76_2,
          v31,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__,
          0);
        v32 = BattleSequenceManager___c_TypeInfo->static_fields;
        v32->__9__76_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__76_2;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->__9__76_2, (int32_t)_9__76_2, v33, v34, v35, v36, v37, v38);
      }
      System_Collections_Generic_List_object___Sort_59225184(
        v27,
        _9__76_2,
        (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        v27,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v40,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v40.fields._current )
          sub_1C93D2C(0, v39);
      }
      while ( (((__int64 (*)(void))v40.fields._current->klass->vtable[16].methodPtr)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v40,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1C93D2C(ComponentsInChildren_object__52415656, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleSequenceManager__GetOverwritedCutInLimitCount(
        BattleSequenceManager_o *this,
        int32_t curLimCnt,
        int32_t svtId,
        int32_t defLimCnt,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x22
  int32_t ServantId; // w0

  if ( (byte_4D3375D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3375D = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( Component_object )
    {
      ServantId = BattleActorControl__getServantId((BattleActorControl_o *)Component_object, 0);
      if ( defLimCnt == -1 || ServantId == svtId )
        return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0);
      return curLimCnt;
    }
    goto LABEL_15;
  }
  if ( defLimCnt != -1 )
    return curLimCnt;
  if ( !Component_object )
LABEL_15:
    sub_1C93D2C(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0);
}


UnityEngine_Color_o BattleSequenceManager__GetRendererBaseAddColor(
        BattleSequenceManager_o *this,
        UnityEngine_SkinnedMeshRenderer_o *inputRenderer,
        const MethodInfo *method)
{
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D3378E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
    byte_4D3378E = 1;
  }
  v5.fields.r = 0.0;
  v5.fields.g = 0.0;
  v5.fields.b = 0.0;
  v5.fields.a = 0.0;
  return BasicHelper__GetValue_object__Color_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.rendererBaseAddColorsDict,
           (Il2CppObject *)inputRenderer,
           v5,
           (const MethodInfo_3192858 *)Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
}


UnityEngine_Transform_o *BattleSequenceManager__GetTargetFieldPosNode(
        BattleSequenceManager_o *this,
        int32_t pos,
        System_String_o *format,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 *v8; // x8
  Il2CppObject *v9; // x22
  Il2CppObject *Instance; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v15; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D3377C & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_6071/*"Enemy"*/);
    sub_1C93AD4(&StringLiteral_10757/*"Player"*/);
    byte_4D3377C = 1;
  }
  if ( isEnemy )
    v8 = &StringLiteral_6071/*"Enemy"*/;
  else
    v8 = &StringLiteral_10757/*"Player"*/;
  v9 = (Il2CppObject *)*v8;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v15 = pos;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v12 = System_String__Format_64467032(format, v9, v11, 0);
  if ( !Instance )
    sub_1C93D2C(v12, v13);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v12, 0);
}


UnityEngine_Transform_o *BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v9; // x20
  UnityEngine_Transform_o *result; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4D3377D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
    sub_1C93AD4(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass124_0__GetTargetPosIndexTransform_b__0__);
    sub_1C93AD4(&BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
    byte_4D3377D = 1;
  }
  v5 = sub_1C93D20(BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_DWORD *)(v5 + 16) = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v9 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass124_0__GetTargetPosIndexTransform_b__0__,
    0);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___Find(
                                        battleTargetList,
                                        (System_Predicate_T__o *)v9,
                                        (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v6 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, v11);
    if ( v6 )
      return UnityEngine_GameObject__get_transform(v6, 0);
LABEL_9:
    sub_1C93D2C(v6, v7);
  }
  return result;
}


bool BattleSequenceManager__HasFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o **fxdVoice,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *fixedVoice; // x20

  *fxdVoice = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)fxdVoice, 0, (int32_t)method, v3, v4, v5, v6, v7);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)fxdVoice, (int32_t)fixedVoice, v10, v11, v12, v13, v14, v15);
  return 1;
}


bool BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  __int64 v7; // x1
  void *ExecutingTdInfo; // x0
  Il2CppObject *Component_object; // x19
  BattleSequenceManager_c *v10; // x0

  if ( (byte_4D33788 & 1) == 0 )
  {
    sub_1C93AD4(&BattleSequenceManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33788 = 1;
  }
  if ( !entity )
    return 0;
  if ( TreasureDvcEntity__IsDelayEnd(entity, 0) )
    return 1;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(actor, 0, 0) )
    return 0;
  ExecutingTdInfo = this->fields.actor;
  if ( !ExecutingTdInfo )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)ExecutingTdInfo,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return 0;
  v10 = BattleSequenceManager_TypeInfo;
  if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
  ExecutingTdInfo = BattleSequenceManager__SafeGetExecutingTdInfo((const MethodInfo *)v10);
  if ( !ExecutingTdInfo || !Component_object )
LABEL_19:
    sub_1C93D2C(ExecutingTdInfo, v7);
  return BattleActorControl__IsDelayEndSequence(
           (BattleActorControl_o *)Component_object,
           *((_DWORD *)ExecutingTdInfo + 4),
           0);
}


bool BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *monitor; // x19
  Il2CppObject *Component_object; // x19

  if ( (byte_4D3378A & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4D3378A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  monitor = (UnityEngine_Object_o *)v2[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  v2 = (UnityEngine_GameObject_o *)v2[3].monitor;
  if ( !v2 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1C93D2C(v2, v3);
  return LOBYTE(Component_object[35].klass) == 0;
}


bool BattleSequenceManager__IsReleaseSound(
        BattleSequenceManager_o *this,
        System_String_o *soundName,
        const MethodInfo *method)
{
  return !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, soundName, 0);
}


bool BattleSequenceManager__IsSameBattleBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  return BasicHelper__EqualExceptNullOrEmpty(bgmName, this->fields.BackupBgmName, 0);
}


bool BattleSequenceManager__IsTimeAccelerateNow(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4D3378C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3378C = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return !UnityEngine_Object__op_Equality(performance, 0, 0) && BattleSequenceManager__get_isAuthTDAccelerate(this, v4);
}


void BattleSequenceManager__LoadBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_4D3375B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D3375B = 1;
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_String__IsNullOrEmpty(bgmName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( callback )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
      return;
    }
LABEL_14:
    sub_1C93D2C(IsNullOrEmpty, v8);
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_14;
  items = IsNullOrEmpty->fields._items;
  v16 = Method_System_Collections_Generic_List_string__Add__;
  ++IsNullOrEmpty->fields._version;
  if ( !items )
    goto LABEL_14;
  size = IsNullOrEmpty->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IsNullOrEmpty,
      (Il2CppObject *)bgmName,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v18[4] = (Il2CppClass *)bgmName;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)bgmName, v9, v10, v11, v12, v13, v14);
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage(bgmName, callback, 1, 0);
}


void BattleSequenceManager__LoadEndStandFigure(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  UnityEngine_Object_o *standFigure; // x22
  __int64 v8; // x1
  UIStandFigureRender_o *v9; // x0

  if ( (byte_4D3375C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3375C = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0, 0) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_1C93D2C(0, v8);
    UIStandFigureRender__SetActive(v9, 0, 0);
  }
  if ( onComplete )
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))onComplete->fields.invoke_impl)(
      onComplete->fields.method_code,
      obj,
      onComplete->fields.method);
}


bool BattleSequenceManager__MultiTargetBossPositioning(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *CoreObj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *monitor; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *v8; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v10; // x8
  struct BattleData_o *v11; // x8
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  Il2CppObject *v14; // x21
  __int64 *v15; // x8
  struct BattlePerformance_o *v16; // x9
  System_String_o *v17; // x19
  BattleData_o *v18; // x21
  UnityEngine_Component_o *TransformChild; // x19
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v22; // 0:kr14_12.12
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D33778 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_19158/*"en_Parts_Up01"*/);
    sub_1C93AD4(&StringLiteral_19157/*"en_Parts_Under01"*/);
    byte_4D33778 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CoreObj, 0, 0) && this->fields.IsPlaying )
  {
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0, 0);
    if ( ((unsigned __int8)monitor & 1) == 0 )
    {
      v8 = this->fields.performance;
      if ( !v8 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v8->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0, 0);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        v10 = this->fields.performance;
        if ( !v10 )
          goto LABEL_54;
        v11 = v10->fields.data;
        if ( !v11 )
          goto LABEL_54;
        if ( v11->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_54;
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CoreObj,
                                                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_object, 0, 0);
          if ( ((unsigned __int8)monitor & 1) == 0 )
          {
            if ( !Component_object )
              goto LABEL_54;
            monitor = (UnityEngine_GameObject_o *)Component_object[22].monitor;
            if ( !monitor )
              goto LABEL_54;
            if ( BattleServantData__isMultiTargetCore((BattleServantData_o *)monitor, 0) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0, 0) )
              {
                monitor = this->fields.SingleTarget;
                if ( !monitor )
                  goto LABEL_54;
                v14 = UnityEngine_GameObject__GetComponent_object_(
                        monitor,
                        (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0, 0);
                if ( ((unsigned __int8)monitor & 1) == 0 )
                {
                  if ( !v14 )
                    goto LABEL_54;
                  if ( LOBYTE(v14[35].klass) )
                  {
                    monitor = (UnityEngine_GameObject_o *)v14[33].monitor;
                    if ( !monitor )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)monitor, 0) )
                      goto LABEL_37;
                    monitor = (UnityEngine_GameObject_o *)v14[33].monitor;
                    if ( !monitor )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)monitor, 0) )
                    {
LABEL_37:
                      monitor = (UnityEngine_GameObject_o *)v14[33].monitor;
                      if ( !monitor )
                        goto LABEL_54;
                      monitor = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                              (BattleServantData_o *)monitor,
                                                              0);
                      if ( ((unsigned __int8)monitor & 1) != 0 )
                      {
                        v15 = &StringLiteral_19158/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        monitor = (UnityEngine_GameObject_o *)v14[33].monitor;
                        if ( !monitor )
                          goto LABEL_54;
                        monitor = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                                (BattleServantData_o *)monitor,
                                                                0);
                        if ( ((unsigned __int8)monitor & 1) == 0 )
                          return 0;
                        v15 = &StringLiteral_19157/*"en_Parts_Under01"*/;
                      }
                      v16 = this->fields.performance;
                      if ( !v16 )
                        goto LABEL_54;
                      v17 = (System_String_o *)*v15;
                      v18 = v16->fields.data;
                      monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Component_object,
                                                              0);
                      if ( !v18 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v18,
                                                                    (UnityEngine_Transform_o *)monitor,
                                                                    v17,
                                                                    0);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0, 0) )
                      {
                        monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Component_object,
                                                                0);
                        if ( monitor )
                        {
                          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)monitor, 0);
                          if ( TransformChild )
                          {
                            monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    TransformChild,
                                                                    0);
                            if ( monitor )
                            {
                              v22 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)monitor, 0);
                              monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Component_object,
                                                                      0);
                              if ( monitor )
                              {
                                v23.fields.z = position.fields.z - v22.fields.z;
                                v23.fields.y = position.fields.y - v22.fields.y;
                                v23.fields.x = position.fields.x - v22.fields.x;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)monitor, v23, 0);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1C93D2C(monitor, v7);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


void BattleSequenceManager__OnBgChanged(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  BattleSequenceManager_o *v3; // x19
  struct System_Action_o *BgChangedCallback; // x8
  GrandQuestFolderBoardItem_o *p_BgChangedCallback; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  performance = this->fields.performance;
  this->fields.IsBgBusy = 0;
  if ( !performance || (v3 = this, (this = (BattleSequenceManager_o *)performance->fields.bgPerf) == 0) )
    sub_1C93D2C(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (GrandQuestFolderBoardItem_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(intptr_t, intptr_t))BgChangedCallback->fields.invoke_impl)(
      BgChangedCallback->fields.method_code,
      BgChangedCallback->fields.method);
    p_BgChangedCallback->klass = 0;
    sub_1C93A78(p_BgChangedCallback, 0, v6, v7, v8, v9, v10, v11);
  }
}


void BattleSequenceManager__OnChangeBgmVolume(BattleSequenceManager_o *this, float newValue, const MethodInfo *method)
{
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v9; // x19
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  float v26; // s9
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_4D3376D & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D3376D = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v6 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0);
    if ( !v6 )
      sub_1C93D2C(0, v7);
    klass = v6->klass;
    v9 = v6;
    v10 = *(unsigned __int16 *)&v6->klass->_2.rank;
    if ( *(_WORD *)&v6->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v12 = sub_1C69E5C(v6, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))v12)(
            v9,
            *(_QWORD *)(v12 + 8));
    if ( !v14 )
      sub_1C93D2C(0, v13);
    while ( 1 )
    {
      v15 = *(_QWORD *)v14;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_16;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_16:
        v18 = sub_1C69E5C(v14, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      v19 = *(_QWORD *)v14;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v21 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_23;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_23:
        v22 = sub_1C69E5C(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
      if ( !v23 )
        sub_1C93D2C(0, v24);
      v25 = *(System_String_o **)(v23 + 16);
      v26 = *(float *)(v23 + 24);
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v25, v26 * newValue, 0);
    }
    v27 = *(_QWORD *)v14;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_33;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_33:
      v30 = sub_1C69E5C(v14, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  }
}


void BattleSequenceManager__OnEndNoblePhantasm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x0

  if ( (byte_4D3378D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
    byte_4D3378D = 1;
  }
  rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
  if ( !rendererBaseAddColorsDict )
    sub_1C93D2C(0, method);
  System_Collections_Generic_Dictionary_object__Color___Clear(
    rendererBaseAddColorsDict,
    (const MethodInfo_3520008 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
}


void BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(BattleSequenceManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Object_o *actorCamera; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformance_o **p_performance; // x25
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x8
  int32_t size; // w2
  int v18; // w9
  Il2CppObject *v19; // x20
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x8
  int32_t v21; // w2
  int v22; // w9
  UnityEngine_Object_o *seqObject; // x21
  struct UnityEngine_GameObject_o **p_seqObject; // x27
  UnityEngine_Object_o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  BattlePerformance_o *v33; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x10
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  struct UnityEngine_GameObject_array *saveWaitPlayer; // x9
  __int64 v37; // x20
  __int64 v38; // x22
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v40; // x23
  UnityEngine_Object_o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct UnityEngine_GameObject_array *v48; // x8
  struct UnityEngine_GameObject_array *v49; // x9
  Il2CppClass *v50; // x1
  struct UnityEngine_GameObject_array *v51; // x27
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v53; // x21
  UnityEngine_Object_o *v54; // x23
  char v55; // w22
  UnityEngine_Object_o *Component_object; // x23
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v58; // x20
  __int64 v59; // x23
  unsigned __int64 v60; // x9
  unsigned __int64 v61; // x27
  UnityEngine_Object_o *v62; // x22
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct UnityEngine_GameObject_array *v69; // x8
  struct UnityEngine_GameObject_array *v70; // x9
  Il2CppClass *v71; // x1
  struct UnityEngine_GameObject_array *v72; // x23
  il2cpp_array_size_t v73; // x8
  unsigned __int64 v74; // x27
  int v75; // w28
  UnityEngine_Object_o *v76; // x22
  char v77; // w21
  UnityEngine_Object_o *v78; // x22
  UnityEngine_Object_o *data; // x21
  struct UnityEngine_GameObject_array *v80; // x20
  il2cpp_array_size_t v81; // x8
  unsigned __int64 v82; // x22
  UnityEngine_Object_o *v83; // x21
  Il2CppObject *v84; // x0
  const MethodInfo *v85; // x2
  struct UnityEngine_GameObject_array *v86; // x20
  il2cpp_array_size_t v87; // x8
  unsigned __int64 v88; // x22
  UnityEngine_Object_o *v89; // x21
  Il2CppObject *v90; // x0
  const MethodInfo *v91; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v94; // x2
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  UnityEngine_Camera_o *v101; // x21
  int32_t cullingMask; // w22
  char v103; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v105; // w22
  char v106; // w0
  struct System_Action_USSequencer__o **p_OnCompleteActorCallback; // x19
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // t1
  UnityEngine_Object_o *v109; // x21
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  UnityEngine_Component_o *v116; // x19
  GrandQuestFolderBoardItem_o *v117; // x20
  UnityEngine_Object_o *klass; // x21
  UnityEngine_Object_o *v119; // x21
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  BattlePerformance_o *v126; // x19
  int32_t v127; // w20
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v129; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4D3376F & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&CommonUI_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Object__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Object__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_9569/*"NoblePhantasm/CutIns"*/);
    sub_1C93AD4(&StringLiteral_3121/*"Battle2D"*/);
    byte_4D3376F = 1;
  }
  entity = 0;
  memset(&v131, 0, sizeof(v131));
  memset(&v130, 0, sizeof(v130));
  this->fields.IsPlaying = 0;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0) )
  {
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(0, 0);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v3);
  }
  actorCamera = (UnityEngine_Object_o *)this->fields.actorCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actorCamera, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)this->fields.actorCamera;
    if ( !transform )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_106;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.originalCameraRoot, 0);
  }
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v6);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v8);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v9);
  BattleSequenceManager__restoreBattleActorTransform(this, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_106;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_34632C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v11) )
    BattleSequenceManager__CrossFadeBgm(this, v12);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v12);
  p_performance = &this->fields.performance;
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)performance->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__loadEffectStatus((BattleActionCamera_o *)transform, 0);
  transform = (UnityEngine_Component_o *)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v129,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v131 = v129;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v131,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v131.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v131,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_106;
  size = npEndDeleteObjects->fields._size;
  v18 = npEndDeleteObjects->fields._version + 1;
  npEndDeleteObjects->fields._size = 0;
  npEndDeleteObjects->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)npEndDeleteObjects->fields._items, 0, size, 0);
  transform = (UnityEngine_Component_o *)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v129,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v130 = v129;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v130,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v19 = v130.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)v19, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v130,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_106;
  v21 = createdObjects->fields._size;
  v22 = createdObjects->fields._version + 1;
  createdObjects->fields._size = 0;
  createdObjects->fields._version = v22;
  if ( v21 >= 1 )
    System_Array__Clear((System_Array_o *)createdObjects->fields._items, 0, v21, 0);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0, 0) )
  {
    v25 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v25, 0);
    *p_seqObject = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.seqObject, 0, v26, v27, v28, v29, v30, v31);
  }
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_106;
  v33 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  p_actorlist = v33->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_106;
  e_actorlist = v33->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_106;
  if ( ActorActiveList->fields._size == LODWORD(e_actorlist->max_length) + LODWORD(p_actorlist->max_length) )
  {
    saveWaitPlayer = this->fields.saveWaitPlayer;
    if ( saveWaitPlayer )
    {
      v37 = 4;
      v38 = 32;
      while ( 1 )
      {
        max_length_low = LODWORD(saveWaitPlayer->max_length);
        v40 = v37 - 4;
        if ( v37 - 4 >= (int)max_length_low )
          break;
        if ( v40 >= max_length_low )
          goto LABEL_192;
        v41 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitPlayer->obj.klass + v37);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v41, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v48 = this->fields.saveWaitPlayer;
          if ( !v48 )
            goto LABEL_106;
          if ( v40 >= LODWORD(v48->max_length) )
            goto LABEL_192;
          v49 = (*p_performance)->fields.p_actorlist;
          if ( !v49 )
            goto LABEL_106;
          if ( v40 >= LODWORD(v49->max_length) )
            goto LABEL_192;
          v50 = (Il2CppClass *)*((_QWORD *)&v48->obj.klass + v37);
          *(Il2CppClass **)((char *)&v49->obj.klass + v38) = v50;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v49 + v38), (int32_t)v50, v42, v43, v44, v45, v46, v47);
        }
        saveWaitPlayer = this->fields.saveWaitPlayer;
        ++v37;
        v38 += 8;
        if ( !saveWaitPlayer )
          goto LABEL_106;
      }
      v33 = *p_performance;
      if ( !*p_performance )
        goto LABEL_106;
    }
    v51 = v33->fields.p_actorlist;
    if ( !v51 )
      goto LABEL_106;
    max_length = v51->max_length;
    if ( (int)max_length >= 1 )
    {
      v53 = 0;
      while ( v53 < (unsigned int)max_length )
      {
        v54 = (UnityEngine_Object_o *)v51->m_Items[v53];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v54, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v53,
                                                   (const MethodInfo_38332BC *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v54 )
            goto LABEL_106;
          v55 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v54, (unsigned __int8)transform & 1, 0);
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)v54,
                                                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)Component_object[2].klass;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v55 & 1, 0);
          }
        }
        LODWORD(max_length) = v51->max_length;
        if ( (__int64)++v53 >= (int)max_length )
          goto LABEL_92;
      }
LABEL_192:
      sub_1C93D34(transform);
    }
    LODWORD(v53) = 0;
LABEL_92:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( saveWaitEnemy )
    {
      v58 = 4;
      v59 = 32;
      while ( 1 )
      {
        v60 = LODWORD(saveWaitEnemy->max_length);
        v61 = v58 - 4;
        if ( v58 - 4 >= (int)v60 )
          break;
        if ( v61 >= v60 )
          goto LABEL_192;
        v62 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v58);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v62, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v69 = this->fields.saveWaitEnemy;
          if ( !v69 )
            goto LABEL_106;
          if ( v61 >= LODWORD(v69->max_length) )
            goto LABEL_192;
          v70 = (*p_performance)->fields.e_actorlist;
          if ( !v70 )
            goto LABEL_106;
          if ( v61 >= LODWORD(v70->max_length) )
            goto LABEL_192;
          v71 = (Il2CppClass *)*((_QWORD *)&v69->obj.klass + v58);
          *(Il2CppClass **)((char *)&v70->obj.klass + v59) = v71;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)v70 + v59), (int32_t)v71, v63, v64, v65, v66, v67, v68);
        }
        saveWaitEnemy = this->fields.saveWaitEnemy;
        ++v58;
        v59 += 8;
        if ( !saveWaitEnemy )
          goto LABEL_106;
      }
    }
    if ( !*p_performance )
      goto LABEL_106;
    v72 = (*p_performance)->fields.e_actorlist;
    if ( !v72 )
      goto LABEL_106;
    v73 = v72->max_length;
    if ( (int)v73 >= 1 )
    {
      v74 = 0;
      v75 = v53;
      while ( v74 < (unsigned int)v73 )
      {
        v76 = (UnityEngine_Object_o *)v72->m_Items[v74];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v76, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v75 + v74,
                                                   (const MethodInfo_38332BC *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v76 )
            goto LABEL_106;
          v77 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v76, (unsigned __int8)transform & 1, 0);
          v78 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v76,
                                          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v78, 0, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v78 )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)v78[2].klass;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v77 & 1, 0);
          }
        }
        LODWORD(v73) = v72->max_length;
        if ( (__int64)++v74 >= (int)v73 )
          goto LABEL_124;
      }
      goto LABEL_192;
    }
LABEL_124:
    v33 = *p_performance;
    p_seqObject = &this->fields.seqObject;
    if ( !*p_performance )
      goto LABEL_106;
  }
  data = (UnityEngine_Object_o *)v33->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(data, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !*p_performance )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)(*p_performance)->fields.data;
    if ( !transform )
      goto LABEL_106;
    BattleData__PartsIntoTheBody((BattleData_o *)transform, 0);
  }
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__InitActorPosition((BattlePerformance_o *)transform, 0);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__resetOriginalPos((BattlePerformance_o *)transform, 0);
  if ( !*p_performance )
    goto LABEL_106;
  v80 = (*p_performance)->fields.p_actorlist;
  if ( !v80 )
    goto LABEL_106;
  v81 = v80->max_length;
  if ( (int)v81 >= 1 )
  {
    v82 = 0;
    while ( v82 < (unsigned int)v81 )
    {
      v83 = (UnityEngine_Object_o *)v80->m_Items[v82];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v83, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v83 )
          goto LABEL_106;
        v84 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v83,
                (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v84, v85);
      }
      LODWORD(v81) = v80->max_length;
      if ( (__int64)++v82 >= (int)v81 )
        goto LABEL_144;
    }
    goto LABEL_192;
  }
LABEL_144:
  if ( !*p_performance )
    goto LABEL_106;
  v86 = (*p_performance)->fields.e_actorlist;
  if ( !v86 )
    goto LABEL_106;
  v87 = v86->max_length;
  if ( (int)v87 >= 1 )
  {
    v88 = 0;
    while ( v88 < (unsigned int)v87 )
    {
      v89 = (UnityEngine_Object_o *)v86->m_Items[v88];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v89, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v89 )
          goto LABEL_106;
        v90 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v89,
                (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v90, v91);
      }
      LODWORD(v87) = v86->max_length;
      if ( (__int64)++v88 >= (int)v87 )
        goto LABEL_155;
    }
    goto LABEL_192;
  }
LABEL_155:
  p_standFigure = &this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)*p_standFigure;
    if ( !*p_standFigure )
      goto LABEL_106;
    UIStandFigureM__Dispose((UIStandFigureM_o *)transform, 0);
    *p_standFigure = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.standFigure, 0, v95, v96, v97, v98, v99, v100);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v94) )
    BattleSequenceManager__ReleaseCpk(this, v5);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0);
  v101 = this->fields.actorCamera;
  if ( !v101 )
    goto LABEL_106;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0);
  v103 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3121/*"Battle2D"*/, 0);
  UnityEngine_Camera__set_cullingMask(v101, (1 << v103) | cullingMask, 0);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_106;
  v105 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0);
  v106 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3121/*"Battle2D"*/, 0);
  UnityEngine_Camera__set_cullingMask(effectCamera, v105 & ~(1 << v106), 0);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0);
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)(*p_performance)->fields.bgPerf;
  if ( !transform )
    goto LABEL_106;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0);
  OnCompleteActorCallback = this->fields.OnCompleteActorCallback;
  p_OnCompleteActorCallback = &this->fields.OnCompleteActorCallback;
  if ( OnCompleteActorCallback )
  {
    v109 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v109, 0, 0);
    v5 = 0;
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UnityEngine_Component_o *)*p_seqObject;
      if ( !*p_seqObject )
        goto LABEL_106;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)transform,
                                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
      v5 = (const MethodInfo *)transform;
    }
    if ( *p_OnCompleteActorCallback )
    {
      ((void (__fastcall *)(intptr_t, const MethodInfo *, intptr_t))(*p_OnCompleteActorCallback)->fields.invoke_impl)(
        (*p_OnCompleteActorCallback)->fields.method_code,
        v5,
        (*p_OnCompleteActorCallback)->fields.method);
      *p_OnCompleteActorCallback = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p_OnCompleteActorCallback, 0, v110, v111, v112, v113, v114, v115);
      goto LABEL_176;
    }
LABEL_106:
    sub_1C93D2C(transform, v5);
  }
LABEL_176:
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_106;
  v116 = transform;
  v117 = (GrandQuestFolderBoardItem_o *)&transform[3];
  klass = (UnityEngine_Object_o *)transform[3].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
  {
    v119 = (UnityEngine_Object_o *)v117->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v119, 0);
    v117->klass = 0;
    sub_1C93A78(v117, 0, v120, v121, v122, v123, v124, v125);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9569/*"NoblePhantasm/CutIns"*/, 0);
  BYTE1(v116[5].fields.m_CachedPtr) = 0;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)(*p_performance)->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0);
  v126 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(*p_performance, 0);
  if ( !*p_performance )
    goto LABEL_106;
  v127 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(*p_performance, 0);
  BattlePerformance__UpdateCameraClippingRange(v126, v127, CurrentGroundType, 0, 0);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__ResetCameraClippingRange((BattlePerformance_o *)transform, 1, 0);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__releaseChangeBgAssets((BattlePerformance_o *)transform, 0);
}


void BattleSequenceManager__OverwriteStartTimeToSavedBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v3; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v4; // x0
  System_Object_array *v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x20
  Il2CppClass *klass; // x8
  System_Object_array *v9; // x19
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x21
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Func_object__bool__o *v31; // x23
  Il2CppObject *object; // x0
  const MethodInfo_399FF98 *v33; // x3
  BgmPlayArgs_o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_Nullable_long__o v41; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v42; // 0:x0.16

  if ( (byte_4D33774 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_BgmPlayArgs___);
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C93AD4(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_long___ctor__);
    sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__);
    sub_1C93AD4(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
    byte_4D33774 = 1;
  }
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager__ExportPlayArgsGroup(0);
    if ( v3 )
    {
      v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(v3, 0);
      v5 = System_Linq_Enumerable__ToArray_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v4,
             (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v7 = v5,
            (v5 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                           this->fields.backupBgmPlayArgsGroup,
                                           0)) == 0) )
      {
        sub_1C93D2C(v5, v6);
      }
      klass = v5->obj.klass;
      v9 = v5;
      v10 = *(unsigned __int16 *)&v5->obj.klass->_2.rank;
      if ( *(_WORD *)&v5->obj.klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_13;
        }
        v12 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_13:
        v12 = sub_1C69E5C(v5, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
      if ( !v14 )
        sub_1C93D2C(0, v13);
      while ( 1 )
      {
        v15 = *(_QWORD *)v14;
        v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v16;
            v17 += 4;
            if ( !v16 )
              goto LABEL_20;
          }
          v18 = v15 + 16LL * *v17 + 312;
        }
        else
        {
LABEL_20:
          v18 = sub_1C69E5C(v14, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
          break;
        v19 = sub_1C93D20(BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v19, 0);
        v20 = *(_QWORD *)v14;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v21;
            v22 += 4;
            if ( !v21 )
              goto LABEL_27;
          }
          v23 = v20 + 16LL * *v22 + 312;
        }
        else
        {
LABEL_27:
          v23 = sub_1C69E5C(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v14, *(_QWORD *)(v23 + 8));
        if ( !v19 )
          sub_1C93D2C(v24, v24);
        *(_QWORD *)(v19 + 16) = v24;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 16), v24, v25, v26, v27, v28, v29, v30);
        v31 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v31,
          (Il2CppObject *)v19,
          Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0);
        object = BasicHelper__Find_object_(
                   v7,
                   (System_Func_T__bool__o *)v31,
                   (const MethodInfo_318E744 *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v42.fields.value = (int64_t)object[2].klass;
        else
          v42.fields.value = 0;
        v34 = *(BgmPlayArgs_o **)(v19 + 16);
        *(_QWORD *)&v41.fields.hasValue = 0;
        v41.fields.value = 0;
        *(_QWORD *)&v42.fields.hasValue = &v41;
        System_Nullable_long____ctor(v42, Method_System_Nullable_long___ctor__, v33);
        if ( !v34 )
          sub_1C93D2C(v35, v36);
        BgmPlayArgs__Update(v34, 0, 0, v41, 0);
      }
      v37 = *(_QWORD *)v14;
      v38 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_39;
        }
        v40 = v37 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_39:
        v40 = sub_1C69E5C(v14, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v40)(v14, *(_QWORD *)(v40 + 8));
    }
  }
}


void BattleSequenceManager__PrevPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4D33770 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33770 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v4 )
  {
    if ( !actor )
      sub_1C93D2C(v4, v5);
    BattleActorControl__SetTempDefaultAnimation(actor, 0);
  }
}


void BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  System_Collections_Generic_List_object__o *ReleaseSoundNames; // x20
  System_String_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v18; // x1
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D33775 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BattleSequenceManager__ReleaseCpk_b__115_0__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Action__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_9572/*"NoblePhantasm_"*/);
    byte_4D33775 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v32 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v8 = System_Int32__ToString((int32_t)&v32, 0);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_64425724((System_String_o *)StringLiteral_9572/*"NoblePhantasm_"*/, v8, 0);
  if ( !ReleaseSoundNames )
    goto LABEL_17;
  items = ReleaseSoundNames->fields._items;
  v16 = Method_System_Collections_Generic_List_string__Add__;
  ++ReleaseSoundNames->fields._version;
  if ( !items )
    goto LABEL_17;
  size = ReleaseSoundNames->fields._size;
  v18 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ReleaseSoundNames,
      (Il2CppObject *)Instance,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v18;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v21 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__115_0__, 0);
  if ( !DelayInvokeMethodList
    || (v28 = DelayInvokeMethodList->fields._items,
        v29 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v28) )
  {
LABEL_17:
    sub_1C93D2C(Instance, v4);
  }
  v30 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v21,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    DelayInvokeMethodList->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)v21;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v21, v22, v23, v24, v25, v26, v27);
  }
  this->fields.delayInvokeTimer = 1.0;
}


void BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.fixedVoice = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fixedVoice, 0, v2, v3, v4, v5, v6, v7);
}


void BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.intactBgmList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.intactBgmList, 0, v2, v3, v4, v5, v6, v7);
}


ExecutingTdInfo_o *BattleSequenceManager__SafeGetExecutingTdInfo(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  __int64 v3; // x1

  if ( (byte_4D33790 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4D33790 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !v2 )
      goto LABEL_11;
    if ( v2[23].monitor )
    {
      v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( v2 )
        return (ExecutingTdInfo_o *)v2[23].monitor;
LABEL_11:
      sub_1C93D2C(v2, v3);
    }
  }
  return ExecutingTdInfo__GetDefault(0);
}


void BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D33773 & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    byte_4D33773 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.backupBgmPlayArgsGroup, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


UnityEngine_GameObject_o *BattleSequenceManager__SearchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        int32_t unitIndex,
        const MethodInfo *method)
{
  int32_t limitCount; // w22
  UnityEngine_Object_o *Manager__LoadNoblePhantasmEffect; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  UnityEngine_Object_o *v13; // x0
  UnityEngine_Object_o *v14; // x19

  if ( (byte_4D33767 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3111/*"Battle/Prefab/"*/);
    byte_4D33767 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadNoblePhantasmEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                               tdId,
                                                               limitCount,
                                                               name,
                                                               unitIndex,
                                                               0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Manager__LoadNoblePhantasmEffect, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = (Il2CppObject *)Manager__LoadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v11,
                                         (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v12 = System_String__Concat_64425724((System_String_o *)StringLiteral_3111/*"Battle/Prefab/"*/, name, 0);
  v13 = UnityEngine_Resources__Load(v12, 0);
  if ( v13 )
  {
    if ( (UnityEngine_GameObject_c *)v13->klass == UnityEngine_GameObject_TypeInfo )
      v14 = v13;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = (Il2CppObject *)v14;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v11,
                                         (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return 0;
}


void BattleSequenceManager__SearchTargetAndModifyPositions(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *SingleTarget; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v7; // x20
  struct BattlePerformance_o *performance; // x10
  UnityEngine_GameObject_o *v9; // x20
  System_String_o **v10; // x8
  __int64 v11; // x9
  __int64 v12; // x25
  System_String_o *v13; // x21
  unsigned __int64 v14; // x26
  unsigned int v15; // w8
  UnityEngine_GameObject_o *v16; // x23
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Transform_o *v19; // x23
  struct BattlePerformance_o *v20; // x8
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  float v24; // s9
  struct BattlePerformance_o *v25; // x8
  struct BattleData_o *data; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D33779 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_9425/*"N_Enemy2"*/);
    sub_1C93AD4(&StringLiteral_9426/*"N_Player2"*/);
    byte_4D33779 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)actor & 1) != 0 )
    return;
  if ( !Component_object )
    goto LABEL_55;
  SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Component_object,
                                         0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(SingleTarget, gameObject, 0) )
    return;
  v7 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v7, 0, 0) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_55;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                        actor,
                                        (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v9 = actor;
  v10 = (System_String_o **)((LOBYTE(actor[23].monitor) != 0) != (LOBYTE(Component_object[35].klass) != 0)
                           ? &StringLiteral_9425/*"N_Enemy2"*/
                           : &StringLiteral_9426/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v11 = 368;
  if ( LOBYTE(actor[23].monitor) )
    v11 = 376;
  v12 = *(__int64 *)((char *)&performance->klass + v11);
  if ( !v12 )
LABEL_55:
    sub_1C93D2C(actor, method);
  if ( (int)*(_QWORD *)(v12 + 24) >= 1 )
  {
    v13 = *v10;
    v14 = 0;
    v15 = *(_QWORD *)(v12 + 24);
    do
    {
      if ( v14 >= v15 )
        sub_1C93D34(actor);
      v16 = *(UnityEngine_GameObject_o **)(v12 + 32 + 8 * v14);
      v17 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, v17, 0) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v13,
                                              0);
        if ( !v16 )
          goto LABEL_55;
        v18 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0);
        if ( !v18 )
          goto LABEL_55;
        v19 = (UnityEngine_Transform_o *)actor;
        position = UnityEngine_Transform__get_position(v18, 0);
        if ( !v19 )
          goto LABEL_55;
        UnityEngine_Transform__set_position(v19, position, 0);
        v20 = this->fields.performance;
        if ( !v20 )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)v20->fields.data;
        if ( !actor )
          goto LABEL_55;
        if ( BYTE2(actor[31].klass) && LOBYTE(v9[23].monitor) )
        {
          PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor((BattleData_o *)actor, 1, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(PartsActor, 0, 0);
          if ( ((unsigned __int8)actor & 1) != 0 )
          {
            if ( !PartsActor )
              goto LABEL_55;
            actor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)PartsActor,
                                                  0);
            if ( !actor )
              goto LABEL_55;
            y = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)actor, 0).fields.y;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)PartsActor, 0);
            LODWORD(v24) = (unsigned int)UnityEngine_Transform__get_position(v18, 0);
            v28.fields.z = UnityEngine_Transform__get_position(v18, 0).fields.z;
            if ( !transform )
              goto LABEL_55;
            v28.fields.x = v24;
            v28.fields.y = y;
            UnityEngine_Transform__set_position(transform, v28, 0);
          }
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive(v16, 0, 0);
          v25 = this->fields.performance;
          if ( !v25 )
            goto LABEL_55;
          data = v25->fields.data;
          if ( !data )
            goto LABEL_55;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v9[23].monitor) )
            UnityEngine_GameObject__SetActive(v16, 1, 0);
        }
      }
      v15 = *(_DWORD *)(v12 + 24);
      ++v14;
    }
    while ( (__int64)v14 < (int)v15 );
  }
}


void BattleSequenceManager__SetAfterChangeField(
        BattleSequenceManager_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( actionData )
    actionData = (BattleActionData_o *)actionData->fields._ChangeField_k__BackingField;
  if ( !this )
    sub_1C93D2C(0, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.changeFieldAfter,
    (int32_t)actionData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  void *battleTargetList; // x0
  int32_t v6; // w21

  if ( (byte_4D33785 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4D33785 = 1;
  }
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_18;
  v6 = 0;
  while ( v6 < *((_DWORD *)battleTargetList + 6) )
  {
    battleTargetList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)battleTargetList,
                         v6,
                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( battleTargetList )
    {
      battleTargetList = (void *)*((_QWORD *)battleTargetList + 3);
      if ( battleTargetList )
      {
        if ( isReset )
          BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0);
        else
          BattleActorControl__setAuraFlip(
            (BattleActorControl_o *)battleTargetList,
            *((_BYTE *)battleTargetList + 560),
            0);
        battleTargetList = this->fields.battleTargetList;
        ++v6;
        if ( battleTargetList )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( isReset )
  {
    battleTargetList = this->fields.actor;
    if ( battleTargetList )
    {
      battleTargetList = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)battleTargetList,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0);
        return;
      }
    }
LABEL_18:
    sub_1C93D2C(battleTargetList, isReset);
  }
}


void BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.fixedVoice = voiceId;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.fixedVoice,
    (int32_t)voiceId,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_String_array *BgmNameListWithIds; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D33786 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D33786 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_BgmMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v6);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.intactBgmList,
    (int32_t)BgmNameListWithIds,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void BattleSequenceManager__SetMultiTargetBattleEnemy(
        BattleSequenceManager_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Component_o *PartsActor; // x21
  struct BattlePerformance_o *v9; // x8
  UnityEngine_Transform_o *transform; // x20
  BattleSequenceManager_o *v11; // x19

  v4 = this;
  if ( (byte_4D33777 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33777 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_26;
  data = performance->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.isMultiTargetBattle )
    return;
  if ( !targetActor )
    goto LABEL_26;
  if ( !targetActor->fields.isEnemy )
    return;
  this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
  if ( !this )
    goto LABEL_26;
  this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUp((BattleServantData_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
    if ( !this )
      goto LABEL_26;
    this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUnder((BattleServantData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
  }
  v7 = v4->fields.performance;
  if ( !v7 || (this = (BattleSequenceManager_o *)v7->fields.data) == 0 )
LABEL_26:
    sub_1C93D2C(this, targetActor);
  PartsActor = (UnityEngine_Component_o *)BattleData__GetPartsActor((BattleData_o *)this, 1, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PartsActor, 0, 0) )
  {
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetActor, 0);
    v9 = v4->fields.performance;
    if ( v9 )
    {
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v9->fields.root_field, 0);
        if ( PartsActor )
        {
          transform = UnityEngine_Component__get_transform(PartsActor, 0);
          this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)targetActor,
                                              0);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0);
            this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform(PartsActor, 0);
            v11 = this;
            if ( !byte_4D2A139 )
            {
              this = (BattleSequenceManager_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
              byte_4D2A139 = 1;
            }
            if ( v11 )
            {
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)v11,
                UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
}


void BattleSequenceManager__SetPreLoadStandFigureData(
        BattleSequenceManager_o *this,
        int32_t svtId,
        int32_t limitImgCnt,
        int32_t faceType,
        const MethodInfo *method)
{
  this->fields.loadStandFigureId = svtId;
  this->fields.loadStandFigureLimitCount = limitImgCnt;
  this->fields.faceType = faceType;
}


// local variable allocation has failed, the output may be wrong!
void BattleSequenceManager__SetShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        bool isStart,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v7; // x3
  int32_t v8; // w21
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4D3375F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4D3375F = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v7),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0) )
  {
LABEL_10:
    sub_1C93D2C(actor, isStart);
  }
  v8 = 0;
  while ( v8 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v8,
                                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( actor )
    {
      klass = actor[1].klass;
      if ( klass )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          (BattleFBXComponent_o *)klass->_1.this_arg.data,
          isStart,
          v9);
        actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList;
        ++v8;
        if ( actor )
          continue;
      }
    }
    goto LABEL_10;
  }
}


void BattleSequenceManager__SetTempShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        BattleFBXComponent_o *fbx,
        bool isStart,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D33760 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_16722/*"_y0"*/);
    byte_4D33760 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0, 0);
  if ( v6 )
  {
    if ( !fbx )
      sub_1C93D2C(v6, v7);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16722/*"_y0"*/, 0);
      else
        BattleFBXComponent__RevertShaderFloatProperty(fbx, 0);
    }
  }
}


void BattleSequenceManager__SetupDemoActor(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_array *playerList,
        UnityEngine_GameObject_array *enemyList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *seqObject; // x0
  Il2CppObject *Component_object; // x20
  unsigned __int64 v9; // x27
  unsigned __int64 v10; // x26
  System_String_o *v11; // x0
  BattleSequenceManager_o *v12; // x0
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x22
  unsigned __int64 max_length_low; // x8
  unsigned __int64 i; // x22
  System_String_o *v17; // x0
  BattleSequenceManager_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x21
  unsigned __int64 v21; // x8
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D3375E & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_2147/*"Actors/Actor"*/);
    byte_4D3375E = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1C93D2C(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v9 = 0;
  do
  {
    v10 = v9 + 1;
    v22 = v9 + 1;
    v11 = System_Int32__ToString((int32_t)&v22, 0);
    v12 = (BattleSequenceManager_o *)System_String__Concat_64425724((System_String_o *)StringLiteral_2147/*"Actors/Actor"*/, v11, 0);
    v14 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v12,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v12,
                                    v13);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_27;
      max_length_low = LODWORD(playerList->max_length);
      if ( (__int64)v9 < (int)max_length_low )
      {
        if ( v9 >= max_length_low )
LABEL_28:
          sub_1C93D34(seqObject);
        seqObject = playerList->m_Items[v9];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0);
        if ( !v14 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v14,
          (UnityEngine_Transform_o *)seqObject,
          0);
      }
    }
    ++v9;
  }
  while ( v10 != 3 );
  for ( i = 0; i != 3; ++i )
  {
    v22 = i + 4;
    v17 = System_Int32__ToString((int32_t)&v22, 0);
    v18 = (BattleSequenceManager_o *)System_String__Concat_64425724((System_String_o *)StringLiteral_2147/*"Actors/Actor"*/, v17, 0);
    v20 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v18,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v18,
                                    v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0, 0);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_27;
      v21 = LODWORD(enemyList->max_length);
      if ( (__int64)i < (int)v21 )
      {
        if ( i >= v21 )
          goto LABEL_28;
        seqObject = enemyList->m_Items[i];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0);
        if ( !v20 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v20,
          (UnityEngine_Transform_o *)seqObject,
          0);
      }
    }
  }
}


void BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x22
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x1
  void *actor; // x0
  Il2CppObject *Component_object; // x23
  BattleActionData_o *monitor; // x24
  System_Collections_Generic_HashSet_int__o *v14; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  GrandQuestFolderBoardItem_o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x25
  BattleSequenceManager___c_c *v23; // x8
  System_Func_object__bool__o *_9__117_0; // x26
  Il2CppObject *v25; // x27
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  int v34; // w8
  void *v35; // x25
  unsigned int v36; // w26
  __int64 v37; // x8
  BattleActionData_BuffData_array *BuffList; // x0
  BattleSequenceManager___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x25
  System_Func_object__bool__o *_9__117_1; // x26
  Il2CppObject *v42; // x27
  struct BattleSequenceManager___c_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  int v51; // w8
  void *v52; // x25
  unsigned int v53; // w26
  __int64 v54; // x8
  BattleActionData_HealData_array *HealList; // x0
  BattleSequenceManager___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x25
  System_Func_object__bool__o *_9__117_2; // x26
  Il2CppObject *v59; // x27
  struct BattleSequenceManager___c_StaticFields *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  int v68; // w8
  void *v69; // x25
  unsigned int v70; // w20
  __int64 v71; // x8
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x24
  System_Action_object__o *v73; // x25
  int klass_low; // w26
  System_Collections_Generic_HashSet_int__o *v75; // x22
  int v76; // w20
  __int64 v77; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_Object_o *ServantGameObject; // x24
  _BOOL8 v81; // x0
  __int64 v82; // x1
  Il2CppObject *v83; // x0
  __int64 v84; // x1
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  int32_t v91; // w21
  struct UnityEngine_GameObject_o *v92; // x21
  Il2CppObject *v93; // x23
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  const MethodInfo *v100; // x2
  __int64 v101; // x1
  BattlePerformance_o *v102; // x0
  int32_t v103; // w20
  UnityEngine_Object_o *v104; // x21
  _BOOL8 v105; // x0
  __int64 v106; // x1
  Il2CppObject *v107; // x22
  __int64 v108; // x21
  const MethodInfo *v109; // x1
  __int64 v110; // x1
  BattlePerformance_o *v111; // x0
  __int64 ServantPosIndex; // x0
  __int64 v113; // x1
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  int v120; // w20
  __int64 v121; // x1
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v130; // x9
  __int64 size; // x10
  Il2CppClass **v132; // x8
  int v133; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v134; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o i; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4D33776 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    sub_1C93AD4(&BattleSequenceManager_BattleTarget_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleActionData_BuffData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleActionData_DamageData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C93AD4(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_BattleActionData_HealData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_0__);
    sub_1C93AD4(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_1__);
    sub_1C93AD4(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_2__);
    sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__3__);
    sub_1C93AD4(&BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
    sub_1C93AD4(&BattleSequenceManager___c_TypeInfo);
    byte_4D33776 = 1;
  }
  memset(&i, 0, sizeof(i));
  v3 = sub_1C93D20(BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  this->fields.SingleTarget = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.SingleTarget, 0, v4, v5, v6, v7, v8, v9);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_98;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (BattleActionData_o *)Component_object[31].monitor;
      v14 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v14,
        (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v3 )
      {
        *(_QWORD *)(v3 + 16) = v14;
        v21 = (GrandQuestFolderBoardItem_o *)(v3 + 16);
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v14, v15, v16, v17, v18, v19, v20);
        if ( monitor )
        {
          DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                              monitor,
                                                                              -1,
                                                                              0);
          v23 = BattleSequenceManager___c_TypeInfo;
          if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
            v23 = BattleSequenceManager___c_TypeInfo;
          }
          _9__117_0 = (System_Func_object__bool__o *)v23->static_fields->__9__117_0;
          if ( !_9__117_0 )
          {
            if ( !v23->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v23);
              v23 = BattleSequenceManager___c_TypeInfo;
            }
            v25 = (Il2CppObject *)v23->static_fields->__9;
            _9__117_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleActionData_DamageData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__117_0,
              v25,
              Method_BattleSequenceManager___c__SetupTargetInfo_b__117_0__,
              0);
            static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
            static_fields->__9__117_0 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__117_0;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__117_0,
              (int32_t)_9__117_0,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32);
          }
          v33 = System_Linq_Enumerable__Where_object_(
                  DamageList,
                  (System_Func_TSource__bool__o *)_9__117_0,
                  (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
          actor = System_Linq_Enumerable__ToArray_object_(
                    v33,
                    (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_DamageData___);
          if ( actor )
          {
            v34 = *((_DWORD *)actor + 6);
            v35 = actor;
            if ( v34 >= 1 )
            {
              v36 = 0;
              while ( v36 < v34 )
              {
                v37 = *((_QWORD *)v35 + (int)v36 + 4);
                if ( !v37 )
                  goto LABEL_98;
                v10 = *(unsigned int *)(v37 + 32);
                if ( (_DWORD)v10 )
                {
                  actor = v21->klass;
                  if ( !v21->klass )
                    goto LABEL_98;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v10,
                                    (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v34 = *((_DWORD *)v35 + 6);
                if ( (int)++v36 >= v34 )
                  goto LABEL_25;
              }
LABEL_99:
              sub_1C93D34(actor);
            }
LABEL_25:
            BuffList = BattleActionData__getBuffList(monitor, -1, 0);
            v39 = BattleSequenceManager___c_TypeInfo;
            v40 = (System_Collections_Generic_IEnumerable_TSource__o *)BuffList;
            if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
              v39 = BattleSequenceManager___c_TypeInfo;
            }
            _9__117_1 = (System_Func_object__bool__o *)v39->static_fields->__9__117_1;
            if ( !_9__117_1 )
            {
              if ( !v39->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v39);
                v39 = BattleSequenceManager___c_TypeInfo;
              }
              v42 = (Il2CppObject *)v39->static_fields->__9;
              _9__117_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleActionData_BuffData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__117_1,
                v42,
                Method_BattleSequenceManager___c__SetupTargetInfo_b__117_1__,
                0);
              v43 = BattleSequenceManager___c_TypeInfo->static_fields;
              v43->__9__117_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__117_1;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v43->__9__117_1,
                (int32_t)_9__117_1,
                v44,
                v45,
                v46,
                v47,
                v48,
                v49);
            }
            v50 = System_Linq_Enumerable__Where_object_(
                    v40,
                    (System_Func_TSource__bool__o *)_9__117_1,
                    (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
            actor = System_Linq_Enumerable__ToArray_object_(
                      v50,
                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_BuffData___);
            if ( actor )
            {
              v51 = *((_DWORD *)actor + 6);
              v52 = actor;
              if ( v51 >= 1 )
              {
                v53 = 0;
                while ( v53 < v51 )
                {
                  v54 = *((_QWORD *)v52 + (int)v53 + 4);
                  if ( !v54 )
                    goto LABEL_98;
                  v10 = *(unsigned int *)(v54 + 44);
                  if ( (_DWORD)v10 )
                  {
                    actor = v21->klass;
                    if ( !v21->klass )
                      goto LABEL_98;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v10,
                                      (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v51 = *((_DWORD *)v52 + 6);
                  if ( (int)++v53 >= v51 )
                    goto LABEL_40;
                }
                goto LABEL_99;
              }
LABEL_40:
              HealList = BattleActionData__getHealList(monitor, -1, 0);
              v56 = BattleSequenceManager___c_TypeInfo;
              v57 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
              if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
                v56 = BattleSequenceManager___c_TypeInfo;
              }
              _9__117_2 = (System_Func_object__bool__o *)v56->static_fields->__9__117_2;
              if ( !_9__117_2 )
              {
                if ( !v56->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v56);
                  v56 = BattleSequenceManager___c_TypeInfo;
                }
                v59 = (Il2CppObject *)v56->static_fields->__9;
                _9__117_2 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleActionData_HealData__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__117_2,
                  v59,
                  Method_BattleSequenceManager___c__SetupTargetInfo_b__117_2__,
                  0);
                v60 = BattleSequenceManager___c_TypeInfo->static_fields;
                v60->__9__117_2 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__117_2;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&v60->__9__117_2,
                  (int32_t)_9__117_2,
                  v61,
                  v62,
                  v63,
                  v64,
                  v65,
                  v66);
              }
              v67 = System_Linq_Enumerable__Where_object_(
                      v57,
                      (System_Func_TSource__bool__o *)_9__117_2,
                      (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
              actor = System_Linq_Enumerable__ToArray_object_(
                        v67,
                        (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
              if ( actor )
              {
                v68 = *((_DWORD *)actor + 6);
                v69 = actor;
                if ( v68 >= 1 )
                {
                  v70 = 0;
                  while ( v70 < v68 )
                  {
                    v71 = *((_QWORD *)v69 + (int)v70 + 4);
                    if ( !v71 )
                      goto LABEL_98;
                    v10 = *(unsigned int *)(v71 + 32);
                    if ( (_DWORD)v10 )
                    {
                      actor = v21->klass;
                      if ( !v21->klass )
                        goto LABEL_98;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v10,
                                        (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v68 = *((_DWORD *)v69 + 6);
                    if ( (int)++v70 >= v68 )
                      goto LABEL_55;
                  }
                  goto LABEL_99;
                }
LABEL_55:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)monitor->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v73 = (System_Action_object__o *)sub_1C93D20(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v73,
                    (Il2CppObject *)v3,
                    Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__3__,
                    0);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v73,
                    (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                klass_low = LOBYTE(Component_object[35].klass);
                v75 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v75,
                  (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v21->klass;
                if ( v21->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v134,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v133 = 0;
                  i = v134;
                  v76 = 0;
                  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &i,
                            (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                  {
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1C93D2C(0, v77);
                    current = (int32_t)i.fields._current;
                    ServantGameObject = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                                  performance,
                                                                  (int32_t)i.fields._current,
                                                                  0);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    v81 = UnityEngine_Object__op_Equality(ServantGameObject, 0, 0);
                    if ( !v81 )
                    {
                      if ( !ServantGameObject )
                        sub_1C93D2C(v81, v82);
                      v83 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)ServantGameObject,
                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      if ( !v83 )
                        sub_1C93D2C(0, v84);
                      if ( (klass_low != 0) != (LOBYTE(v83[35].klass) != 0) )
                      {
                        ++v76;
                        if ( !v75 )
                          sub_1C93D2C(v83, v84);
                        System_Collections_Generic_HashSet_int___Add(
                          v75,
                          current,
                          (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
                      }
                      else
                      {
                        ++v133;
                      }
                    }
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &i,
                    (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v133 && v76 == 1 )
                  {
                    v21->klass = (GrandQuestFolderBoardItem_c *)v75;
                    sub_1C93A78(v21, (int32_t)v75, v85, v86, v87, v88, v89, v90);
                  }
                  actor = v21->klass;
                  if ( v21->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v134,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v91 = -1;
                      for ( i = v134;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &i,
                              (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v91 = (int32_t)i.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &i,
                        (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_98;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v91, 0);
                      if ( !actor )
                        goto LABEL_98;
                      v92 = (struct UnityEngine_GameObject_o *)actor;
                      v93 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v92;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)&this->fields.SingleTarget,
                        (int32_t)v92,
                        v94,
                        v95,
                        v96,
                        v97,
                        v98,
                        v99);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v93, v100);
                    }
                    if ( v75 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v134,
                        v75,
                        (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      i = v134;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &i,
                                (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v102 = this->fields.performance;
                        if ( !v102 )
                          sub_1C93D2C(0, v101);
                        v103 = (int32_t)i.fields._current;
                        v104 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                         v102,
                                                         (int32_t)i.fields._current,
                                                         0);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v105 = UnityEngine_Object__op_Equality(v104, 0, 0);
                        if ( !v105 )
                        {
                          if ( !v104 )
                            sub_1C93D2C(v105, v106);
                          v107 = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v104,
                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v108 = sub_1C93D20(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor((BattleSequenceManager_BattleTarget_o *)v108, v109);
                          v111 = this->fields.performance;
                          if ( !v111 )
                            sub_1C93D2C(0, v110);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v111, v103, 0);
                          if ( !v108 )
                            sub_1C93D2C(ServantPosIndex, v113);
                          v120 = ServantPosIndex;
                          *(_QWORD *)(v108 + 24) = v107;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)(v108 + 24),
                            (int32_t)v107,
                            v114,
                            v115,
                            v116,
                            v117,
                            v118,
                            v119);
                          *(_DWORD *)(v108 + 60) = v120;
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1C93D2C(0, v121);
                          items = battleTargetList->fields._items;
                          v130 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1C93D2C(battleTargetList, v121);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= LODWORD(items->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v108,
                              *(const MethodInfo_387999C **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v132 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v132[4] = (Il2CppClass *)v108;
                            sub_1C93A78(
                              (GrandQuestFolderBoardItem_o *)(v132 + 4),
                              v108,
                              v122,
                              v123,
                              v124,
                              v125,
                              v126,
                              v127);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &i,
                        (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_98:
    sub_1C93D2C(actor, v10);
  }
}


void BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1C93D2C(0, method);
  BattlePerformance__showNobleInfo(performance, -1, 1, 100, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleSequenceManager__SwitchPopupFullScreen(
        BattleSequenceManager_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *infoComp; // x21
  struct BattlePerformance_o *v7; // x8

  v4 = this;
  if ( (byte_4D3376C & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3376C = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_11;
  infoComp = (UnityEngine_Object_o *)performance->fields.infoComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(infoComp, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.performance;
    if ( v7 )
    {
      this = (BattleSequenceManager_o *)v7->fields.infoComp;
      if ( this )
      {
        BattleInformationComponent__SwitchPopupFullScreen((BattleInformationComponent_o *)this, isFullScreen, 0);
        return;
      }
    }
LABEL_11:
    sub_1C93D2C(this, isFullScreen);
  }
}


void BattleSequenceManager__SyncAttachedTargetPair(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetPosIndex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v5; // x19
  BattleSequenceManager_o *v6; // x20
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *Component_object; // x21
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v12; // x4
  BaseMonoBehaviour_o *v13; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *m_CachedPtr; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_object__o *npEndDeleteObjects; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  BattleSequenceManager_o *v28; // x1
  Il2CppClass **v29; // x0
  int v30; // w22
  UnityEngine_Component_o *v31; // x0
  BattleSyncTransformComponent_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  intptr_t v39; // x8
  _QWORD *v40; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v42; // x8

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_4D3377B & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Object__Add__);
    this = (BattleSequenceManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3377B = 1;
  }
  if ( (targetPosIndex & 0x80000000) == 0 )
  {
    performance = v6->fields.performance;
    if ( !performance )
      goto LABEL_43;
    this = (BattleSequenceManager_o *)performance->fields.data;
    if ( !this )
      goto LABEL_43;
    this = (BattleSequenceManager_o *)BattleData__get_IsEnemyPosCountNormal((BattleData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    if ( !v5 )
      goto LABEL_43;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v5,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      Component_object = (Il2CppObject *)v6->fields.defaultSyncSetting;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !Component_object )
        goto LABEL_43;
      if ( BattleSyncTransformComponent__get_IsNotExecSync((BattleSyncTransformComponent_o *)Component_object, 0) )
        return;
      TargetPosIndexTransform = (UnityEngine_Object_o *)BattleSequenceManager__GetTargetPosIndexTransform(
                                                          v6,
                                                          targetPosIndex + 3,
                                                          v9);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(TargetPosIndexTransform, 0, 0) )
        return;
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                                 (WellFired_USTimelineContainer_o *)v5,
                                                 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(AffectedObject, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v13 = (BaseMonoBehaviour_o *)v6->fields.performance;
        if ( !v13 )
          goto LABEL_43;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        m_CachedPtr = (UnityEngine_Transform_o *)v13[10].fields.m_CachedPtr;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v12);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            v13,
                                            dummyActorPrefab,
                                            m_CachedPtr,
                                            TargetFieldPosNode,
                                            0);
        if ( !this )
          goto LABEL_43;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        WellFired_USTimelineContainer__set_AffectedObject((WellFired_USTimelineContainer_o *)v5, transform, 0);
        npEndDeleteObjects = (System_Collections_Generic_List_object__o *)v6->fields.npEndDeleteObjects;
        this = (BattleSequenceManager_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                            (WellFired_USTimelineContainer_o *)v5,
                                            0);
        if ( !this )
          goto LABEL_43;
        this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !npEndDeleteObjects )
          goto LABEL_43;
        items = npEndDeleteObjects->fields._items;
        v26 = Method_System_Collections_Generic_List_Object__Add__;
        ++npEndDeleteObjects->fields._version;
        if ( !items )
          goto LABEL_43;
        size = npEndDeleteObjects->fields._size;
        v28 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            npEndDeleteObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v28;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v28, v19, v20, v21, v22, v23, v24);
        }
        v30 = 0;
      }
      else
      {
        v30 = 1;
      }
      v31 = (UnityEngine_Component_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                         (WellFired_USTimelineContainer_o *)v5,
                                         0);
      this = (BattleSequenceManager_o *)BasicHelper__GetOrAddComponent_object_(
                                          v31,
                                          (const MethodInfo_3191EDC *)Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_43;
      v32 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0);
      if ( v30 )
      {
        tlcont = (WellFired_USTimelineContainer_o *)v32;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_43;
        v39 = this->fields.m_CachedPtr;
        v40 = Method_System_Collections_Generic_List_Object__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v39 )
          goto LABEL_43;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v39 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)tlcont,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = v39 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v42 + 32) = tlcont;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 32), (int32_t)tlcont, v33, v34, v35, v36, v37, v38);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        return;
      }
LABEL_43:
      sub_1C93D2C(this, tlcont);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleSequenceManager__TargetTransformOverwriteOrReset(
        BattleSequenceManager_o *this,
        bool isOverwrite,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *BattleActor; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *performance; // x8
  BattleActorControl_o *v8; // x20
  BattleActionData_o *nowAction; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  void *monitor; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x23
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x0
  System_Collections_ICollection_o *Components_object; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v20; // x1
  void *v21; // x8
  unsigned __int64 v22; // x29
  NoblePhantasmTargetOverwriteTransform_o *v23; // x24
  __int64 v24; // x25
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 TargetOfTreasureDevice; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D3378B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
    byte_4D3378B = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( this->fields.battleTargetList )
  {
    BattleActor = (System_Collections_Generic_List_object__o *)BattleSequenceManager__get_BattleActor(
                                                                 this,
                                                                 (const MethodInfo *)isOverwrite);
    performance = this->fields.performance;
    if ( !performance
      || (v8 = (BattleActorControl_o *)BattleActor,
          (BattleActor = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList) == 0) )
    {
      sub_1C93D2C(BattleActor, v6);
    }
    nowAction = performance->fields.nowAction;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      BattleActor,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v38 = v37;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v10 )
        break;
      if ( !v38.fields._current )
        sub_1C93D2C(v10, v11);
      monitor = v38.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0, 0);
      if ( !v13 )
      {
        if ( !monitor )
          sub_1C93D2C(v13, v14);
        v15 = (UnityEngine_Object_o *)*((_QWORD *)monitor + 5);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v15, 0, 0) )
        {
          v17 = (UnityEngine_GameObject_o *)*((_QWORD *)monitor + 5);
          if ( !v17 )
            sub_1C93D2C(0, v16);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v17,
                                                                    (const MethodInfo_31FC9E0 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1C93D2C(IsNullOrEmpty, v20);
            v21 = Components_object[1].monitor;
            if ( (int)v21 >= 1 )
            {
              v22 = 0;
              do
              {
                if ( v22 >= (unsigned int)v21 )
                  sub_1C93D34(IsNullOrEmpty);
                v23 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v22);
                v24 = sub_1C93D20(NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
                NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo___ctor(
                  (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v24,
                  0);
                if ( !v24 )
                  sub_1C93D2C(v25, v26);
                *(_QWORD *)(v24 + 16) = monitor;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v24 + 16), (int32_t)monitor, v27, v28, v29, v30, v31, v32);
                if ( !nowAction )
                  sub_1C93D2C(v33, v34);
                *(_DWORD *)(v24 + 24) = BattleActionData__GetTargetSideFunctionRange(
                                          nowAction,
                                          *((_BYTE *)monitor + 560),
                                          0);
                TargetOfTreasureDevice = BattleActionData__GetTargetOfTreasureDevice(
                                           nowAction,
                                           (BattleActorControl_o *)monitor,
                                           v8,
                                           0);
                *(_DWORD *)(v24 + 28) = TargetOfTreasureDevice;
                if ( isOverwrite )
                {
                  if ( !v23 )
                    sub_1C93D2C(TargetOfTreasureDevice, v36);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
                    v23,
                    (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v24,
                    0);
                }
                else
                {
                  if ( !v23 )
                    sub_1C93D2C(TargetOfTreasureDevice, v36);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(
                    v23,
                    (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v24,
                    0);
                }
                LODWORD(v21) = Components_object[1].monitor;
                ++v22;
              }
              while ( (__int64)v22 < (int)v21 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v38,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  }
}


void BattleSequenceManager__TdDelayEnd(BattleSequenceManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleSequenceManager__CrossFadeBgm(this, method);
  BattleSequenceManager__ReleaseCpk(this, v3);
}


bool BattleSequenceManager__TryGetAfterChangeBgm(
        BattleSequenceManager_o *this,
        BattleActionData_TreasureDvcAfterChangeBgm_o **changeBgm,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattlePerformance_o *performance; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleActionData_TreasureDvcAfterChangeBgm_o *TdAfterChangeBgm_k__BackingField; // x19

  performance = this->fields.performance;
  if ( !performance )
    sub_1C93D2C(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)changeBgm,
    (int32_t)TdAfterChangeBgm_k__BackingField,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  return TdAfterChangeBgm_k__BackingField != 0;
}


void BattleSequenceManager__Update(BattleSequenceManager_o *this, const MethodInfo *method)
{
  float delayInvokeTimer; // s8
  __int64 v4; // x1
  float v5; // s0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x0
  struct System_Collections_Generic_List_Action__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D33757 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    byte_4D33757 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v5 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0);
    this->fields.delayInvokeTimer = v5;
    if ( v5 <= 0.0 )
    {
      DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_14;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v10,
        DelayInvokeMethodList,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v10,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v10.fields._current )
          (*(void (__fastcall **)(_QWORD, _QWORD))((char *)&v10.fields._current->klass + (unsigned __int64)&off_18))(
            *(Il2CppClass **)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_40),
            *(Il2CppClass **)((char *)&v10.fields._current->klass + (unsigned __int64)&qword_28));
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v10,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v7 = this->fields.DelayInvokeMethodList;
      if ( !v7 )
LABEL_14:
        sub_1C93D2C(DelayInvokeMethodList, v4);
      size = v7->fields._size;
      v9 = v7->fields._version + 1;
      v7->fields._size = 0;
      v7->fields._version = v9;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
    }
  }
}


void BattleSequenceManager__UpdateAfterChangeFieldBG(
        BattleSequenceManager_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x0

  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
    ((void (__fastcall *)(struct BattleActionData_AfterChangeField_o *, int32_t, int32_t, const MethodInfo *))changeFieldAfter->klass->vtable._4_SetTakeOverBG.methodPtr)(
      changeFieldAfter,
      id,
      type,
      changeFieldAfter->klass->vtable._4_SetTakeOverBG.method);
}


void BattleSequenceManager__UpdateAfterChangeFieldBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x0

  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
    ((void (__fastcall *)(struct BattleActionData_AfterChangeField_o *, System_String_o *, _QWORD, const MethodInfo *))changeFieldAfter->klass->vtable._5_SetTakeOverBgmName.methodPtr)(
      changeFieldAfter,
      bgmName,
      0,
      changeFieldAfter->klass->vtable._5_SetTakeOverBgmName.method);
}


System_Collections_IEnumerator_o *BattleSequenceManager__WaitEndSequence(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3376E & 1) == 0 )
  {
    sub_1C93AD4(&BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
    byte_4D3376E = 1;
  }
  v3 = sub_1C93D20(BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleSequenceManager___ReleaseCpk_b__115_0(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D33793 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4D33793 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v11.fields._current, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1C93D2C(0, v6);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v7 = this->fields.ReleaseSoundNames;
  if ( !v7 )
LABEL_14:
    sub_1C93D2C(ReleaseSoundNames, method);
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
}


void BattleSequenceManager___setup_b__88_1(
        BattleSequenceManager_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance || !comp )
    sub_1C93D2C(this, comp);
  SwitchActiveBaseConditionComponent__SwitchActive(comp, performance->fields.data, 0);
}


void BattleSequenceManager__addServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_4D33762 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D33762 = 1;
  }
  FlagRequestNumber = System_String__Concat_64425724((System_String_o *)StringLiteral_16207/*"_"*/, labelName, 0);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(voiceMaster, chrId, FlagRequestNumber, 0, 0);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__AddServantVoicePlayed_46402100((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0);
        return;
      }
    }
LABEL_9:
    sub_1C93D2C(FlagRequestNumber, v10);
  }
}


void BattleSequenceManager__changeBg(
        BattleSequenceManager_o *this,
        int32_t id,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int64_t v8; // x6
  System_String_o *v9; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  BattlePerformance_o *performance; // x23
  System_Action_o *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4D3376A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_BattleSequenceManager_OnBgChanged__);
    byte_4D3376A = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.BgChangedCallback,
    (int32_t)callback,
    tp,
    parentCamera,
    (System_String_o *)callback,
    (int32_t)method,
    v8,
    v9);
  performance = this->fields.performance;
  v22 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0);
  if ( !performance )
    sub_1C93D2C(v23, v24);
  v25.fields.z = v15;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v25.fields.x = v17;
  v25.fields.y = v16;
  BattlePerformance__ForceChangeBg(performance, id, tp, v25, v26, 1, parentCamera, v22, 0);
}


bool BattleSequenceManager__checkServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_4D33764 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D33764 = 1;
  }
  FlagRequestNumber = System_String__Concat_64425724((System_String_o *)StringLiteral_16207/*"_"*/, labelName, 0);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(voiceMaster, chrId, FlagRequestNumber, 0, 0);
  if ( !(_DWORD)FlagRequestNumber )
    return (char)FlagRequestNumber;
  performance = this->fields.performance;
  if ( !performance
    || (v12 = (int)FlagRequestNumber, (FlagRequestNumber = (System_String_o *)performance->fields.data) == 0) )
  {
LABEL_9:
    sub_1C93D2C(FlagRequestNumber, v10);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0);
  return (char)FlagRequestNumber;
}


int32_t BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4D33780 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4D33780 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_3525ECC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1C93D2C(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *BattleSequenceManager__getPlayedSoundList(BattleSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4D33782 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_string___);
    byte_4D33782 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *BattleSequenceManager__get_BattleActor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4D33753 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33753 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0, 0) )
    return 0;
  v5 = this->fields.actor;
  if ( !v5 )
    sub_1C93D2C(0, v4);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v5,
                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
}


bool BattleSequenceManager__get_ExistChangeFieldAfter(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.changeFieldAfter != 0;
}


bool BattleSequenceManager__get_FarClippingLock(BattleSequenceManager_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4D33756 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    byte_4D33756 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C69B68(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v8);
  return BYTE1(Instance[8].monitor) != 0;
}


bool BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleData_o *v10; // x8

  if ( (byte_4D33754 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33754 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(performance, 0, 0);
  if ( v4 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_14;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(data, 0, 0);
  if ( v4 )
    return 0;
  v9 = this->fields.performance;
  if ( !v9 || (v10 = v9->fields.data) == 0 )
LABEL_14:
    sub_1C93D2C(v4, v5);
  return v10->fields.systemflg_acceleration > 1;
}


bool BattleSequenceManager__get_IsDemoMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.DemoMode;
}


float BattleSequenceManager__get_NowTargetAlpha(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.nowTargetAlpha;
}


BattlePerformance_o *BattleSequenceManager__get_Performance(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.performance;
}


int32_t BattleSequenceManager__get_TreasureDeviceId(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.treasureDeviceId;
}


bool BattleSequenceManager__get_isAuthTDAccelerate(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  void *Component_object; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v11; // x20
  struct BattlePerformance_o *v13; // x8

  if ( (byte_4D33755 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33755 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Equality(performance, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_27;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(data, 0, 0) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Inequality(actor, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
    goto LABEL_22;
  Component_object = this->fields.actor;
  if ( !Component_object )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Component_object,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_object )
    goto LABEL_27;
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_27;
  nowAction = v9->fields.nowAction;
  v11 = (BattleServantData_o *)*((_QWORD *)Component_object + 67);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v11 )
LABEL_27:
    sub_1C93D2C(Component_object, v5);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_object + 67), 0) )
    return 0;
  Component_object = (void *)BattleServantData__IsFixNpFastSpeed(v11, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 1;
LABEL_22:
  v13 = this->fields.performance;
  if ( !v13 )
    goto LABEL_27;
  Component_object = v13->fields.data;
  if ( !Component_object )
    goto LABEL_27;
  if ( *((_BYTE *)Component_object + 663) )
    return 0;
  return BattleData__IsHighSpeedOption((BattleData_o *)Component_object, 0);
}


void BattleSequenceManager__init(
        BattleSequenceManager_o *this,
        BattlePerformance_o *performance,
        UnityEngine_GameObject_o *actor,
        UnityEngine_GameObject_array *players,
        UnityEngine_GameObject_array *enemies,
        UnityEngine_Camera_o *camera,
        UnityEngine_GameObject_o *bg,
        const MethodInfo *method)
{
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  const MethodInfo *v68; // x1
  System_Collections_Generic_Dictionary_object__int__o *v69; // x20
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  System_Collections_Generic_HashSet_T__o *v76; // x20
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7

  if ( (byte_4D33769 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4D33769 = 1;
  }
  this->fields.performance = performance;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.performance,
    (int32_t)performance,
    (int32_t)actor,
    (int32_t)players,
    (System_String_o *)enemies,
    (int32_t)camera,
    (int64_t)bg,
    (System_String_o *)method);
  this->fields.actor = actor;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.actor, (int32_t)actor, v15, v16, v17, v18, v19, v20);
  this->fields.playerActors = players;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.playerActors, (int32_t)players, v21, v22, v23, v24, v25, v26);
  this->fields.enemyActors = enemies;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.enemyActors, (int32_t)enemies, v27, v28, v29, v30, v31, v32);
  this->fields.actorCamera = camera;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.actorCamera, (int32_t)camera, v33, v34, v35, v36, v37, v38);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.effectCamera,
    (int32_t)middleCamera,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.cutInCamera,
    (int32_t)cutIncamera,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0)) == 0 )
  {
LABEL_7:
    sub_1C93D2C(actorCamera, v40);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0);
  this->fields.originalCameraRoot = parent;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.originalCameraRoot,
    (int32_t)parent,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.bgObject = bg;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bgObject, (int32_t)bg, v62, v63, v64, v65, v66, v67);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v68);
  v69 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v69,
    (const MethodInfo_3525324 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v69;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int32_t)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Collections_Generic_HashSet_T__o *)sub_1C93D20(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v76,
    (const MethodInfo_372B7CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v76;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.playedAudioGroupIdHash,
    (int32_t)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
}


bool BattleSequenceManager__isFixedWithNoVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_String_o *fixedVoice; // x8

  fixedVoice = this->fields.fixedVoice;
  return fixedVoice && fixedVoice->fields._stringLength == 0;
}


bool BattleSequenceManager__isNotPlaySoundLimitCount(
        BattleSequenceManager_o *this,
        System_Int32_array *limitCounts,
        const MethodInfo *method)
{
  if ( (byte_4D33783 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D33783 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_4D33766 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_2143/*"Actor"*/);
    sub_1C93AD4(&StringLiteral_16898/*"animCamLoc"*/);
    byte_4D33766 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2143/*"Actor"*/, 0)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16898/*"animCamLoc"*/, 0);
}


void BattleSequenceManager__loadSequence(
        BattleSequenceManager_o *this,
        int32_t chrId,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        int32_t treasureDeviceLv,
        int32_t npChargeStage,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v17; // x20
  UnityEngine_GameObject_o *actor; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *Component_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  AssetLoader_LoadEndDataHandler_o *v39; // x19

  if ( (byte_4D33758 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__);
    sub_1C93AD4(&BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_9569/*"NoblePhantasm/CutIns"*/);
    byte_4D33758 = 1;
  }
  v17 = sub_1C93D20(BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 56) = onComplete;
  *(_DWORD *)(v17 + 24) = chrId;
  *(_DWORD *)(v17 + 28) = limitCount;
  *(_DWORD *)(v17 + 32) = treasureDeviceId;
  *(_DWORD *)(v17 + 36) = treasureDeviceLv;
  *(_DWORD *)(v17 + 40) = npChargeStage;
  *(_DWORD *)(v17 + 44) = overwriteSvtVoiceId;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 56), (int32_t)onComplete, v26, v27, v28, v29, v30, v31);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v17 + 24);
  this->fields.limitCount = *(_DWORD *)(v17 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v17 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v17 + 44);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v17 + 48) = Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 48), (int32_t)Component_object, v33, v34, v35, v36, v37, v38);
  actor = *(UnityEngine_GameObject_o **)(v17 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v17 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v17 + 48)) == 0) )
  {
LABEL_10:
    sub_1C93D2C(actor, v19);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0);
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)v17,
    Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9569/*"NoblePhantasm/CutIns"*/, v39, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleSequenceManager__play(
        BattleSequenceManager_o *this,
        bool isOpponent,
        bool isDemoMode,
        System_Action_USSequencer__o *callback,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v7; // x19
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x8
  __int64 v10; // x0
  struct UnityEngine_GameObject_array **p_saveWaitPlayer; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct BattlePerformance_o *v18; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  __int64 v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Object_o *seqObject; // x23
  int32_t chrId; // w23
  struct BattlePerformance_o *v29; // x8
  struct BattlePerformance_o *v30; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w25
  char v33; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v35; // w25
  char v36; // w0
  System_Collections_Generic_List_bool__o *v37; // x25
  BattleSequenceManager_o **p_ActorActiveList; // x23
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct BattlePerformance_o *v45; // x8
  struct UnityEngine_GameObject_array *v46; // x29
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v48; // x20
  UnityEngine_Object_o *v49; // x25
  const MethodInfo *v50; // x2
  BattleServantData_o *v51; // x26
  System_Collections_Generic_List_bool__o *v52; // x27
  struct System_Boolean_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  intptr_t m_CachedPtr; // x8
  _QWORD *v57; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct UnityEngine_GameObject_array *v65; // x8
  __int64 v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  struct BattlePerformance_o *v73; // x8
  struct UnityEngine_GameObject_array *v74; // x8
  __int64 v75; // x0
  struct BattlePerformance_o *v76; // x8
  struct UnityEngine_GameObject_array *v77; // x27
  il2cpp_array_size_t v78; // x8
  unsigned __int64 v79; // x20
  UnityEngine_Object_o *v80; // x24
  const MethodInfo *v81; // x2
  BattleServantData_o *v82; // x25
  System_Collections_Generic_List_bool__o *v83; // x26
  struct System_Boolean_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  intptr_t v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  struct UnityEngine_GameObject_array *v96; // x8
  __int64 v97; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  struct BattlePerformance_o *v104; // x8
  struct UnityEngine_GameObject_array *v105; // x8
  __int64 v106; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  BattleSequenceManager_o *v114; // x22
  __int64 v115; // x1
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  BattleSequenceManager_o *v122; // x23
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  __int64 v129; // x1
  BattleSequenceManager_c *v130; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  System_String_o *v133; // x4
  int32_t v134; // w5
  int64_t v135; // x6
  System_String_o *v136; // x7
  BattleSequenceManager_o *v137; // x23
  int32_t v138; // w2
  int32_t v139; // w3
  System_String_o *v140; // x4
  int32_t v141; // w5
  int64_t v142; // x6
  System_String_o *v143; // x7
  __int64 v144; // x1
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  BattleSequenceManager_o *v151; // x23
  int32_t v152; // w2
  int32_t v153; // w3
  System_String_o *v154; // x4
  int32_t v155; // w5
  int64_t v156; // x6
  System_String_o *v157; // x7
  __int64 v158; // x1
  int32_t v159; // w2
  int32_t v160; // w3
  System_String_o *v161; // x4
  int32_t v162; // w5
  int64_t v163; // x6
  System_String_o *v164; // x7
  __int64 v165; // x1
  System_Collections_Hashtable_o *v166; // x0
  System_String_o *BgmName; // x0
  int32_t v168; // w2
  int32_t v169; // w3
  System_String_o *v170; // x4
  int32_t v171; // w5
  int64_t v172; // x6
  System_String_o *v173; // x7
  const MethodInfo *v174; // x2
  BattleSequenceManager_o *v175; // x21
  GrandQuestFolderBoardItem_o *p_actorCamera; // x22
  System_Delegate_o *v177; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v178; // x24
  System_Delegate_o *v179; // x0
  int32_t v180; // w2
  int32_t v181; // w3
  System_String_o *v182; // x4
  int32_t v183; // w5
  int64_t v184; // x6
  System_String_o *v185; // x7
  System_Delegate_o *v186; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v187; // x1
  int32_t v188; // w2
  int32_t v189; // w3
  System_String_o *v190; // x4
  int32_t v191; // w5
  int64_t v192; // x6
  System_String_o *v193; // x7
  const MethodInfo *v194; // x2
  __int64 v195; // x0
  System_Action_USSequencer__o *v196; // [xsp+8h] [xbp-88h]
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // [xsp+18h] [xbp-78h]
  int v198; // [xsp+24h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-68h] BYREF
  int v200; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4D3376B & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__);
    sub_1C93AD4(&BattleSequenceManager_TypeInfo);
    sub_1C93AD4(&CommonUI_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&UnityEngine_GameObject___TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&WellFired_USSequencer_PlaybackDelegate_TypeInfo);
    sub_1C93AD4(&float_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12963/*"ShowNobleInfo"*/);
    sub_1C93AD4(&StringLiteral_19902/*"from"*/);
    sub_1C93AD4(&StringLiteral_9891/*"OnChangeBgmVolume"*/);
    sub_1C93AD4(&StringLiteral_24376/*"time"*/);
    sub_1C93AD4(&StringLiteral_22710/*"onupdate"*/);
    sub_1C93AD4(&StringLiteral_3121/*"Battle2D"*/);
    sub_1C93AD4(&StringLiteral_24415/*"to"*/);
    this = (BattleSequenceManager_o *)sub_1C93AD4(&iTween_TypeInfo);
    byte_4D3376B = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_142;
  p_actorlist = performance->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_142;
  v10 = sub_1C93B7C(UnityEngine_GameObject___TypeInfo, LODWORD(p_actorlist->max_length));
  p_saveWaitPlayer = &v7->fields.saveWaitPlayer;
  v7->fields.saveWaitPlayer = (struct UnityEngine_GameObject_array *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7->fields.saveWaitPlayer, v10, v12, v13, v14, v15, v16, v17);
  v18 = v7->fields.performance;
  if ( !v18 )
    goto LABEL_142;
  e_actorlist = v18->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_142;
  v20 = sub_1C93B7C(UnityEngine_GameObject___TypeInfo, LODWORD(e_actorlist->max_length));
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v20;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7->fields.saveWaitEnemy, v20, v21, v22, v23, v24, v25, v26);
  seqObject = (UnityEngine_Object_o *)v7->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0, 0) )
  {
    chrId = v7->fields.chrId;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      }
      if ( this->fields.standFigure->klass )
      {
        if ( !CommonUI_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
        CommonUI__SetForceObi_16_9(1, 0);
      }
    }
    if ( !isDemoMode )
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)v7,
        (System_String_o *)StringLiteral_12963/*"ShowNobleInfo"*/,
        0.7,
        0);
    v29 = v7->fields.performance;
    if ( !v29 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v29->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0);
    v30 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v30 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v30->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_142;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0);
    v33 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3121/*"Battle2D"*/, 0);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v33), 0);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_142;
    p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
    v35 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0);
    v36 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3121/*"Battle2D"*/, 0);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v36) | v35, 0);
    v37 = (System_Collections_Generic_List_bool__o *)sub_1C93D20(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v37,
      (const MethodInfo_3832D58 *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v37;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7->fields.ActorActiveList, (int32_t)v37, v39, v40, v41, v42, v43, v44);
    v45 = v7->fields.performance;
    if ( !v45 )
      goto LABEL_142;
    v46 = v45->fields.p_actorlist;
    v196 = callback;
    if ( !v46 )
      goto LABEL_142;
    max_length = v46->max_length;
    if ( (int)max_length >= 1 )
    {
      v48 = 0;
      while ( v48 < (unsigned int)max_length )
      {
        v49 = (UnityEngine_Object_o *)v46->m_Items[v48];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v49, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v49 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v49,
                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v51 = (BattleServantData_o *)*((_QWORD *)this + 67);
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v50);
          v52 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v49, 0);
          if ( !v52 )
            goto LABEL_142;
          items = v52->fields._items;
          v54 = Method_System_Collections_Generic_List_bool__Add__;
          ++v52->fields._version;
          if ( !items )
            goto LABEL_142;
          size = v52->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v52,
              (unsigned __int8)this & 1,
              *(const MethodInfo_38335BC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v52->fields._size = size + 1;
            items->m_Items[size] = (unsigned __int8)this & 1;
          }
          if ( !v51 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v51, 0);
          if ( ((unsigned __int8)this & 1) != 0 || v51->fields.isAnimPlayedWithdraw )
          {
            v65 = *p_saveWaitPlayer;
            if ( !*p_saveWaitPlayer )
              goto LABEL_142;
            if ( v48 >= LODWORD(v65->max_length) )
              break;
            v66 = (__int64)v65 + 8 * v48;
            *(_QWORD *)(v66 + 32) = v49;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v66 + 32), (int32_t)v49, v59, v60, v61, v62, v63, v64);
            v73 = v7->fields.performance;
            if ( !v73 )
              goto LABEL_142;
            v74 = v73->fields.p_actorlist;
            if ( !v74 )
              goto LABEL_142;
            if ( v48 >= LODWORD(v74->max_length) )
              break;
            v75 = (__int64)v74 + 8 * v48;
            *(_QWORD *)(v75 + 32) = 0;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v75 + 32), 0, v67, v68, v69, v70, v71, v72);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v49, 0, 0);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          m_CachedPtr = this->fields.m_CachedPtr;
          v57 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_142;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_38335BC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(m_CachedPtr + m_CancellationTokenSource_low + 32) = 0;
          }
        }
        LODWORD(max_length) = v46->max_length;
        if ( (__int64)++v48 >= (int)max_length )
          goto LABEL_57;
      }
LABEL_143:
      sub_1C93D34(this);
    }
LABEL_57:
    v76 = v7->fields.performance;
    if ( !v76 )
      goto LABEL_142;
    v77 = v76->fields.e_actorlist;
    if ( !v77 )
      goto LABEL_142;
    v78 = v77->max_length;
    if ( (int)v78 >= 1 )
    {
      v79 = 0;
      while ( v79 < (unsigned int)v78 )
      {
        v80 = (UnityEngine_Object_o *)v77->m_Items[v79];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v80, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v80 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v80,
                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v82 = (BattleServantData_o *)*((_QWORD *)this + 67);
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v81);
          v83 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v80, 0);
          if ( !v83 )
            goto LABEL_142;
          v84 = v83->fields._items;
          v85 = Method_System_Collections_Generic_List_bool__Add__;
          ++v83->fields._version;
          if ( !v84 )
            goto LABEL_142;
          v86 = v83->fields._size;
          if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v83,
              (unsigned __int8)this & 1,
              *(const MethodInfo_38335BC **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v83->fields._size = v86 + 1;
            v84->m_Items[v86] = (unsigned __int8)this & 1;
          }
          if ( !v82 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v82, 0);
          if ( ((unsigned __int8)this & 1) != 0 || v82->fields.isAnimPlayedWithdraw )
          {
            v96 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_142;
            if ( v79 >= LODWORD(v96->max_length) )
              goto LABEL_143;
            v97 = (__int64)v96 + 8 * v79;
            *(_QWORD *)(v97 + 32) = v80;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v97 + 32), (int32_t)v80, v90, v91, v92, v93, v94, v95);
            v104 = v7->fields.performance;
            if ( !v104 )
              goto LABEL_142;
            v105 = v104->fields.e_actorlist;
            if ( !v105 )
              goto LABEL_142;
            if ( v79 >= LODWORD(v105->max_length) )
              goto LABEL_143;
            v106 = (__int64)v105 + 8 * v79;
            *(_QWORD *)(v106 + 32) = 0;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v106 + 32), 0, v98, v99, v100, v101, v102, v103);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v80, 0, 0);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v87 = this->fields.m_CachedPtr;
          v88 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v87 )
            goto LABEL_142;
          v89 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_38335BC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = v89 + 1;
            *(_BYTE *)(v87 + v89 + 32) = 0;
          }
        }
        LODWORD(v78) = v77->max_length;
        if ( (__int64)++v79 >= (int)v78 )
          goto LABEL_87;
      }
      goto LABEL_143;
    }
LABEL_87:
    if ( !isDemoMode )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
    this = (BattleSequenceManager_o *)sub_1C93B7C(object___TypeInfo, 8);
    if ( !this )
      goto LABEL_142;
    v114 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19902/*"from"*/;
    if ( StringLiteral_19902/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1C93C10(StringLiteral_19902/*"from"*/, v114->klass->_1.element_class);
      if ( !this )
        goto LABEL_144;
      v115 = StringLiteral_19902/*"from"*/;
    }
    else
    {
      v115 = 0;
    }
    if ( !LODWORD(v114->fields.m_CancellationTokenSource) )
      goto LABEL_143;
    v114->fields.sequenceManager = (struct UnityEngine_GameObject_o *)v115;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v114->fields.sequenceManager, v115, v108, v109, v110, v111, v112, v113);
    v200 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v200);
    v122 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1C93C10(this, v114->klass->_1.element_class)) != 0 )
    {
      if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_143;
      *(_QWORD *)&v114->fields.servantId = v122;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v114->fields.servantId,
        (int32_t)v122,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
      this = (BattleSequenceManager_o *)StringLiteral_24415/*"to"*/;
      if ( StringLiteral_24415/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1C93C10(StringLiteral_24415/*"to"*/, v114->klass->_1.element_class);
        if ( !this )
          goto LABEL_144;
        v129 = StringLiteral_24415/*"to"*/;
      }
      else
      {
        v129 = 0;
      }
      if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_143;
      *(_QWORD *)&v114->fields.testNpPer = v129;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v114->fields.testNpPer, v129, v123, v124, v125, v126, v127, v128);
      v130 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v130 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v130->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate);
      v137 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1C93C10(this, v114->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_143;
        v114->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v137;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v114->fields.ReleaseSoundNames,
          (int32_t)v137,
          v131,
          v132,
          v133,
          v134,
          v135,
          v136);
        this = (BattleSequenceManager_o *)StringLiteral_24376/*"time"*/;
        if ( StringLiteral_24376/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1C93C10(StringLiteral_24376/*"time"*/, v114->klass->_1.element_class);
          if ( !this )
            goto LABEL_144;
          v144 = StringLiteral_24376/*"time"*/;
        }
        else
        {
          v144 = 0;
        }
        if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_143;
        v114->fields.performance = (struct BattlePerformance_o *)v144;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v114->fields.performance, v144, v138, v139, v140, v141, v142, v143);
        v198 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v198);
        v151 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1C93C10(this, v114->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_143;
          v114->fields.seqObject = (struct UnityEngine_GameObject_o *)v151;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v114->fields.seqObject,
            (int32_t)v151,
            v145,
            v146,
            v147,
            v148,
            v149,
            v150);
          this = (BattleSequenceManager_o *)StringLiteral_22710/*"onupdate"*/;
          if ( StringLiteral_22710/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1C93C10(StringLiteral_22710/*"onupdate"*/, v114->klass->_1.element_class);
            if ( !this )
              goto LABEL_144;
            v158 = StringLiteral_22710/*"onupdate"*/;
          }
          else
          {
            v158 = 0;
          }
          if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_143;
          v114->fields.actor = (struct UnityEngine_GameObject_o *)v158;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v114->fields.actor, v158, v152, v153, v154, v155, v156, v157);
          this = (BattleSequenceManager_o *)StringLiteral_9891/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9891/*"OnChangeBgmVolume"*/ )
          {
            v165 = 0;
LABEL_125:
            if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_143;
            v114->fields.CutInRoot = (struct UnityEngine_GameObject_o *)v165;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v114->fields.CutInRoot,
              v165,
              v159,
              v160,
              v161,
              v162,
              v163,
              v164);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v166 = iTween__Hash((System_Object_array *)v114, 0);
            iTween__ValueTo(gameObject, v166, 0);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0);
              v7->fields.BackupBgmName = BgmName;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v7->fields.BackupBgmName,
                (int32_t)BgmName,
                v168,
                v169,
                v170,
                v171,
                v172,
                v173);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v174);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v175 = this;
                    p_actorCamera = (GrandQuestFolderBoardItem_o *)&this->fields.actorCamera;
                    v177 = (System_Delegate_o *)this->fields.actorCamera;
                    v178 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1C93D20(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v178,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0);
                    v179 = System_Delegate__Combine(v177, (System_Delegate_o *)v178, 0);
                    v186 = v179;
                    if ( v179 )
                    {
                      v187 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v179->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_actorCamera->klass = (GrandQuestFolderBoardItem_c *)v179;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v179->klass == v187 )
                          goto LABEL_137;
                      }
                      sub_1C940C8(v179);
                    }
                    p_actorCamera->klass = (GrandQuestFolderBoardItem_c *)v186;
LABEL_137:
                    sub_1C93A78(p_actorCamera, (int32_t)v186, v180, v181, v182, v183, v184, v185);
                    v7->fields.OnCompleteActorCallback = v196;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)&v7->fields.OnCompleteActorCallback,
                      (int32_t)v196,
                      v188,
                      v189,
                      v190,
                      v191,
                      v192,
                      v193);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v175, 0);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                    if ( CommonUI__GetForceObi_16_9(0) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v194);
                    return;
                  }
                }
              }
            }
LABEL_142:
            sub_1C93D2C(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_1C93C10(StringLiteral_9891/*"OnChangeBgmVolume"*/, v114->klass->_1.element_class);
          if ( this )
          {
            v165 = StringLiteral_9891/*"OnChangeBgmVolume"*/;
            goto LABEL_125;
          }
        }
      }
    }
LABEL_144:
    v195 = sub_1C93D50(this);
    sub_1C93BFC(v195, 0);
  }
}


void BattleSequenceManager__registNobleVoiceRandomPlay(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x20
  _DWORD *monitor; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v9; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v11; // x20
  Il2CppObject *MasterData_object; // x0
  const MethodInfo *v13; // x4
  VoiceMaster_o *v14; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v17; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x22

  if ( (byte_4D33784 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Voice_TypeInfo);
    byte_4D33784 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_31;
    if ( LOBYTE(Component_object[35].klass) )
      return;
    monitor = Component_object[33].monitor;
    if ( !monitor )
      goto LABEL_31;
    if ( !monitor[89] && !BattleActorControl__isNoVoice((BattleActorControl_o *)Component_object, 0) )
    {
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(performance, 0, 0);
      if ( ((unsigned __int8)actor & 1) != 0 )
      {
        v7 = this->fields.performance;
        if ( !v7 )
          goto LABEL_31;
        data = (UnityEngine_Object_o *)v7->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(data, 0, 0) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v9);
          if ( PlayedSoundList )
          {
            v11 = PlayedSoundList;
            if ( PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_VoiceMaster___);
                v14 = (VoiceMaster_o *)MasterData_object;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( !Voice_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  FileName = Voice__getFileName(111, 0);
                  BattleSequenceManager__removeServantVoicePlayed(this, v14, chrId, FileName, v17);
                }
                max_length = v11->max_length;
                if ( (int)max_length >= 1 )
                {
                  v19 = 0;
                  do
                  {
                    if ( v19 >= (unsigned int)max_length )
                      sub_1C93D34(MasterData_object);
                    BattleSequenceManager__addServantVoicePlayed(this, v14, this->fields.chrId, v11->m_Items[v19], v13);
                    LODWORD(max_length) = v11->max_length;
                    ++v19;
                  }
                  while ( (__int64)v19 < (int)max_length );
                }
                return;
              }
LABEL_31:
              sub_1C93D2C(actor, method);
            }
          }
        }
      }
    }
  }
}


void BattleSequenceManager__removeServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_4D33763 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D33763 = 1;
  }
  FlagRequestNumber = System_String__Concat_64425724((System_String_o *)StringLiteral_16207/*"_"*/, labelName, 0);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(voiceMaster, chrId, FlagRequestNumber, 0, 0);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__removeServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0);
        return;
      }
    }
LABEL_9:
    sub_1C93D2C(FlagRequestNumber, v10);
  }
}


void BattleSequenceManager__restoreBattleActorTransform(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D3377F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    byte_4D3377F = 1;
  }
  memset(&v8, 0, sizeof(v8));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    battleTargetList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C93D2C(0, v4);
    BattleSequenceManager_BattleTarget__restoreTransform((BattleSequenceManager_BattleTarget_o *)v8.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v5 = this->fields.battleTargetList;
  if ( !v5 )
LABEL_13:
    sub_1C93D2C(battleTargetList, method);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
}


WellFired_USTimelineContainer_o *BattleSequenceManager__searchTimeline(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  Il2CppObject *Component_object; // x0
  __int64 v22; // x1
  WellFired_USTimelineContainer_o *v23; // x21
  System_String_o *monitor; // x22
  System_String_o *v25; // x1
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_4D33768 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&UnityEngine_Transform_TypeInfo);
    this = (BattleSequenceManager_o *)sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    byte_4D33768 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0)) == 0 )
  {
    sub_1C93D2C(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0);
  if ( !Enumerator )
    sub_1C93D2C(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(Enumerator, *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_17:
      v15 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1C93D2C(0, v17);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C940C8(v16);
LABEL_37:
      sub_1C93D2C(Component_object, v22);
    }
    gameObject = UnityEngine_Component__get_gameObject(v16, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v20);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v23 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v25 = System_String__Concat_64425724((System_String_o *)StringLiteral_1042/*"/"*/, name, 0);
    if ( System_String__op_Equality(monitor, v25, 0) )
      goto LABEL_27;
  }
  v23 = 0;
LABEL_27:
  v26 = sub_1C93C10(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_32;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_32:
      v31 = sub_1C69E5C(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
  return v23;
}


void BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4D33781 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4D33781 = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_3525CC4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1C93D2C(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_372C9B0 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


void BattleSequenceManager__set_NowTargetAlpha(BattleSequenceManager_o *this, float value, const MethodInfo *method)
{
  this->fields.nowTargetAlpha = value;
}


void BattleSequenceManager__setup(
        BattleSequenceManager_o *this,
        System_Action_o *callback,
        bool isDemoMode,
        BattleBuffData_o *buffData,
        int32_t unitIndex,
        const MethodInfo *method)
{
  __int64 seqObject; // x0
  Il2CppObject *Component_object; // x19
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__52018868; // x0
  BattleSequenceManager___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *_9__88_0; // x21
  Il2CppObject *v15; // x23
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_IEnumerable_T__o *v23; // x20
  System_Action_object__o *v24; // x21
  BattleSequenceManager_o *v25; // x0
  const MethodInfo *v26; // x3
  WellFired_USTimelineContainer_o *v27; // x27
  System_Collections_Generic_List_object__o *v28; // x21
  System_Collections_Generic_List_object__o *v29; // x20
  Il2CppObject *klass; // x20
  System_Collections_Generic_List_object__o *monitor; // x28
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  __int64 v41; // x1
  Il2CppClass **v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  Il2CppClass *v49; // x1
  __int64 v50; // x28
  void *v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  Il2CppClass *v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  Il2CppClass *v71; // x8
  const MethodInfo *v72; // x1
  Il2CppObject *v73; // x20
  struct UnityEngine_Vector3_StaticFields *v74; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v78; // x0
  GrandQuestFolderBoardItem_o *v79; // x28
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  const MethodInfo *v86; // x1
  System_Collections_Generic_List_object__o *v87; // x20
  const MethodInfo *v88; // x2
  int v89; // w8
  __int64 v90; // x23
  int v91; // w24
  UnityEngine_Object_o *v92; // x27
  __int64 v93; // x8
  __int64 v94; // x28
  unsigned __int64 v95; // x23
  __int64 v96; // x29
  System_String_o *name; // x0
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  int32_t klass_high; // w20
  int32_t monitor_high; // w27
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x20
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  System_Collections_Generic_List_object__o *v113; // x8
  struct System_Object_array *v114; // x9
  _QWORD *v115; // x10
  __int64 v116; // x11
  Il2CppClass **v117; // x0
  System_String_o *v118; // x0
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  __int64 v125; // x10
  System_String_o *v126; // x0
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  __int64 v133; // x9
  Il2CppClass *v134; // x1
  UnityEngine_Transform_o *parent; // x0
  GrandQuestFolderBoardItem_o *v136; // x0
  System_String_o *v137; // x0
  __int64 v138; // x9
  System_String_o **v139; // x20
  System_String_o *v140; // x0
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  System_String_o *v147; // x0
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  Il2CppClass *v154; // x1
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x4
  int32_t v158; // w5
  int64_t v159; // x6
  System_String_o *v160; // x7
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  __int64 naturalAligment; // x9
  Il2CppClass *v166; // x1
  __int64 v167; // x29
  int32_t v168; // w2
  int32_t v169; // w3
  System_String_o *v170; // x4
  int32_t v171; // w5
  int64_t v172; // x6
  System_String_o *v173; // x7
  UnityEngine_Transform_o *v174; // x20
  System_Collections_Generic_List_object__o *v175; // x26
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x4
  int32_t v179; // w5
  int64_t v180; // x6
  System_String_o *v181; // x7
  struct System_Object_array *v182; // x8
  __int64 v183; // x9
  __int64 v184; // x10
  Il2CppClass **v185; // x0
  BattleSequenceManager_o *v186; // x0
  const MethodInfo *v187; // x3
  int32_t v188; // w2
  int32_t v189; // w3
  System_String_o *v190; // x4
  int32_t v191; // w5
  int64_t v192; // x6
  System_String_o *v193; // x7
  struct System_Object_array *v194; // x8
  __int64 v195; // x9
  __int64 v196; // x10
  __int64 v197; // x1
  Il2CppClass **v198; // x0
  Il2CppObject *current; // x20
  _BOOL8 v200; // x0
  __int64 v201; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v203; // x1
  void *v204; // x25
  int v205; // w8
  int i; // w20
  WellFired_USTimelineEvent_o *v207; // x0
  _QWORD *v208; // x26
  __int64 v209; // x8
  unsigned __int64 v210; // x28
  __int64 v211; // x27
  System_String_o *v212; // x0
  __int64 v213; // x9
  _BOOL8 v214; // x0
  __int64 v215; // x1
  int32_t v216; // w2
  int32_t v217; // w3
  System_String_o *v218; // x4
  int32_t v219; // w5
  int64_t v220; // x6
  System_String_o *v221; // x7
  UnityEngine_Component_o *v222; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v224; // w2
  int32_t v225; // w3
  System_String_o *v226; // x4
  int32_t v227; // w5
  int64_t v228; // x6
  System_String_o *v229; // x7
  struct System_Object_array *v230; // x8
  _QWORD *v231; // x9
  __int64 v232; // x10
  Il2CppClass **v233; // x0
  __int64 v234; // x1
  System_Collections_IEnumerator_o *Enumerator; // x25
  int v236; // w19
  System_Collections_IEnumerator_c *v237; // x8
  __int64 v238; // x9
  int32_t *p_offset; // x10
  __int64 v240; // x0
  System_Collections_IEnumerator_c *v241; // x8
  __int64 v242; // x9
  System_Collections_IEnumerator_c **v243; // x10
  __int64 v244; // x0
  UnityEngine_Component_o *v245; // x0
  __int64 v246; // x1
  __int64 v247; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v249; // x1
  Il2CppObject *v250; // x0
  __int64 v251; // x1
  Il2CppObject *v252; // x26
  System_String_o *v253; // x0
  __int64 v254; // x1
  System_String_o *v255; // x0
  __int64 v256; // x1
  System_String_o *v257; // x0
  System_String_o *v258; // x0
  __int64 v259; // x0
  __int64 v260; // x8
  __int64 v261; // x25
  __int64 v262; // x9
  int *v263; // x10
  __int64 v264; // x0
  __int64 v265; // x1
  System_Collections_IEnumerator_c *v266; // x8
  __int64 v267; // x9
  int32_t *v268; // x10
  __int64 v269; // x0
  System_Collections_IEnumerator_c *v270; // x8
  __int64 v271; // x9
  System_Collections_IEnumerator_c **v272; // x10
  __int64 v273; // x0
  UnityEngine_Component_o *v274; // x0
  __int64 v275; // x1
  __int64 v276; // x9
  UnityEngine_GameObject_o *v277; // x0
  __int64 v278; // x1
  Il2CppObject *v279; // x0
  __int64 v280; // x1
  WellFired_USTimelineContainer_o *v281; // x25
  System_String_o *v282; // x0
  __int64 v283; // x1
  bool v284; // w26
  System_String_o *affectedObjectPath; // x0
  System_String_o *v286; // x28
  System_String_o *v287; // x0
  __int64 v288; // x1
  bool v289; // w27
  System_String_o *v290; // x0
  System_String_o *v291; // x0
  __int64 v292; // x1
  System_String_o *v293; // x0
  UnityEngine_Component_o *v294; // x0
  UnityEngine_Transform_o *v295; // x0
  System_String_o *v296; // x0
  __int64 v297; // x1
  UnityEngine_GameObject_o *v298; // x0
  __int64 v299; // x1
  UnityEngine_Transform_o *v300; // x20
  System_String_o *v301; // x0
  System_String_o *v302; // x0
  UnityEngine_Transform_o *v303; // x0
  UnityEngine_Object_o *AffectedObject; // x20
  __int64 v305; // x1
  System_String_o *v306; // x0
  bool v307; // w0
  __int64 v308; // x1
  __int64 *v309; // x8
  System_String_o *v310; // x0
  bool v311; // w0
  System_String_o *v312; // x28
  UnityEngine_GameObject_o *v313; // x0
  UnityEngine_Transform_o *v314; // x0
  __int64 v315; // x1
  UnityEngine_Object_o *v316; // x20
  _BOOL8 v317; // x0
  __int64 v318; // x1
  __int64 v319; // x1
  System_Collections_IEnumerator_o *v320; // x27
  System_Collections_IEnumerator_c *v321; // x8
  __int64 v322; // x9
  int32_t *v323; // x10
  __int64 v324; // x0
  System_Collections_IEnumerator_c *v325; // x8
  __int64 v326; // x9
  System_Collections_IEnumerator_c **v327; // x10
  __int64 v328; // x0
  UnityEngine_Component_o *v329; // x0
  __int64 v330; // x1
  UnityEngine_Object_o *v331; // x26
  __int64 v332; // x9
  UnityEngine_Object_o *v333; // x0
  __int64 v334; // x1
  System_String_o *v335; // x0
  __int64 v336; // x1
  System_String_o *v337; // x0
  _BOOL8 v338; // x0
  const MethodInfo *v339; // x2
  __int64 v340; // x1
  __int64 v341; // x1
  int32_t v342; // w20
  __int64 v343; // x0
  __int64 v344; // x27
  __int64 v345; // x8
  __int64 v346; // x9
  int *v347; // x10
  __int64 v348; // x0
  System_String_o *v349; // x20
  System_String_o *v350; // x0
  __int64 v351; // x1
  System_String_o *v352; // x0
  __int64 v353; // x1
  System_String_array *v354; // x0
  __int64 v355; // x1
  __int64 v356; // x1
  System_String_o *v357; // x27
  UnityEngine_GameObject_o *v358; // x0
  __int64 v359; // x1
  UnityEngine_Transform_o *v360; // x26
  System_String_o *v361; // x0
  System_String_o *v362; // x0
  __int64 v363; // x1
  System_String_o *v364; // x0
  UnityEngine_Transform_o *v365; // x0
  Il2CppObject *v366; // x20
  System_Collections_Generic_List_object__o *v367; // x0
  _BOOL8 v368; // x0
  __int64 v369; // x1
  System_String_o *v370; // x0
  __int64 v371; // x1
  System_String_o *v372; // x1
  const MethodInfo *v373; // x4
  __int64 v374; // x1
  int32_t v375; // w2
  int32_t v376; // w3
  System_String_o *v377; // x4
  int32_t v378; // w5
  int64_t v379; // x6
  System_String_o *v380; // x7
  System_Collections_Generic_List_object__o *v381; // x0
  struct System_Object_array *v382; // x8
  _QWORD *v383; // x9
  __int64 v384; // x10
  Il2CppClass **v385; // x8
  __int64 v386; // x0
  __int64 v387; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v389; // x1
  UnityEngine_Transform_o *v390; // x0
  UnityEngine_Transform_o *v391; // x0
  __int64 v392; // x1
  __int64 v393; // x1
  UnityEngine_Transform_o *v394; // x26
  UnityEngine_GameObject_o *v395; // x0
  UnityEngine_Transform_o *v396; // x0
  UnityEngine_Transform_o *v397; // x0
  __int64 v398; // x1
  BattleSequenceManager_o *v399; // x0
  const MethodInfo *v400; // x4
  int32_t v401; // w26
  UnityEngine_Transform_o *v402; // x0
  __int64 v403; // x1
  UnityEngine_Transform_o *v404; // x0
  System_String_o *v405; // x0
  __int64 v406; // x1
  System_String_o *v407; // x0
  System_String_o *v408; // x0
  const MethodInfo *v409; // x3
  int32_t v410; // w2
  const MethodInfo *v411; // x3
  System_Object_array *EventCount; // x0
  __int64 v413; // x1
  System_Object_array *v414; // x25
  int max_length; // w8
  int j; // w20
  WellFired_USTimelineEvent_o *v417; // x26
  int32_t k; // w27
  UnityEngine_Object_o *v419; // x0
  __int64 v420; // x1
  Il2CppObject *v421; // x28
  System_String_o *v422; // x0
  __int64 v423; // x9
  _BOOL8 v424; // x0
  __int64 v425; // x1
  int32_t v426; // w2
  int32_t v427; // w3
  System_String_o *v428; // x4
  int32_t v429; // w5
  int64_t v430; // x6
  System_String_o *v431; // x7
  UnityEngine_Component_o *v432; // x0
  UnityEngine_Transform_o *v433; // x0
  int32_t v434; // w2
  int32_t v435; // w3
  System_String_o *v436; // x4
  int32_t v437; // w5
  int64_t v438; // x6
  System_String_o *v439; // x7
  struct System_Object_array *v440; // x8
  _QWORD *v441; // x9
  __int64 v442; // x10
  Il2CppClass **v443; // x0
  int32_t layer; // w26
  __int64 v445; // x8
  __int64 v446; // x23
  __int64 v447; // x9
  int *v448; // x10
  __int64 v449; // x0
  __int64 v450; // x1
  _DWORD *v451; // x8
  UnityEngine_Object_o *v452; // x20
  Il2CppClass *v453; // x8
  UnityEngine_Object_o *v454; // x20
  Il2CppObject *MasterData_object; // x21
  int32_t v456; // w20
  System_String_o *FileName; // x0
  const MethodInfo *v458; // x4
  int32_t v459; // w20
  System_String_o *v460; // x0
  const MethodInfo *v461; // x4
  _DWORD *v462; // x8
  int v463; // w20
  BalanceConfig_c *v464; // x0
  int32_t v465; // w20
  System_String_o *v466; // x0
  const MethodInfo *v467; // x4
  __int64 v468; // x0
  __int64 v469; // x23
  __int64 v470; // x8
  __int64 v471; // x9
  int *v472; // x10
  __int64 v473; // x0
  char v474; // [xsp+18h] [xbp-138h]
  Il2CppObject *v475; // [xsp+20h] [xbp-130h]
  Il2CppObject *item; // [xsp+28h] [xbp-128h]
  WellFired_USSequencer_o *seq; // [xsp+30h] [xbp-120h]
  System_String_o *seqa; // [xsp+30h] [xbp-120h]
  System_String_o *seqb; // [xsp+30h] [xbp-120h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+40h] [xbp-110h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *sourcea; // [xsp+40h] [xbp-110h]
  __int64 v484; // [xsp+48h] [xbp-108h]
  System_Collections_IEnumerator_o *v485; // [xsp+48h] [xbp-108h]
  Il2CppObject *object; // [xsp+50h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v487; // [xsp+58h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+70h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+8Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v490; // [xsp+90h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v491; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+D8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v494; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D33761 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
    sub_1C93AD4(&Method_BattleSequenceManager__setup_b__88_1__);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__);
    sub_1C93AD4(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    sub_1C93AD4(&System_GC_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4((char *)&xmmword_4B5D0C4 + 12);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
    sub_1C93AD4((char *)&xmmword_4B5D0D4 + 4);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
    sub_1C93AD4((char *)&xmmword_4B5D0C4 + 4);
    sub_1C93AD4(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_USTimelineContainer__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146688);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&UnityEngine_Transform_TypeInfo);
    sub_1C93AD4(&Method_BattleSequenceManager___c__setup_b__88_0__);
    sub_1C93AD4(&BattleSequenceManager___c_TypeInfo);
    sub_1C93AD4(&WellFired_USFGOAnimationCameraEvent_TypeInfo);
    sub_1C93AD4(&WellFired_USFGOAttachToParentEvent_TypeInfo);
    sub_1C93AD4(&WellFired_USFGOChangeBgEvent_TypeInfo);
    sub_1C93AD4(&WellFired_USFGOPlayCutInEvent_TypeInfo);
    sub_1C93AD4(&WellFired_USFGOSetCameraEvent_TypeInfo);
    sub_1C93AD4(&Voice_TypeInfo);
    sub_1C93AD4(&StringLiteral_1050/*"/Actor/chr/"*/);
    sub_1C93AD4(&StringLiteral_3123/*"BattleBG"*/);
    sub_1C93AD4(&StringLiteral_1060/*"/BattleActors/"*/);
    sub_1C93AD4(&StringLiteral_3125/*"BattleCamera"*/);
    sub_1C93AD4(&StringLiteral_3128/*"BattleCutIn"*/);
    sub_1C93AD4(&StringLiteral_14974/*"USFGOSetCameraEvent"*/);
    sub_1C93AD4(&StringLiteral_2143/*"Actor"*/);
    sub_1C93AD4(&StringLiteral_17455/*"body_level_"*/);
    sub_1C93AD4(&StringLiteral_1052/*"/Actor/chr/weapon_level_"*/);
    sub_1C93AD4(&StringLiteral_1051/*"/Actor/chr/body_level_"*/);
    sub_1C93AD4(&StringLiteral_6436/*"FGOSequenceManager"*/);
    sub_1C93AD4(&StringLiteral_1054/*"/AllEffects/"*/);
    sub_1C93AD4(&StringLiteral_18102/*"chr(Clone)"*/);
    sub_1C93AD4(&StringLiteral_3995/*"Cameras/BattleCamera"*/);
    sub_1C93AD4(&StringLiteral_14972/*"USFGOChangeBgEvent"*/);
    sub_1C93AD4(&StringLiteral_1072/*"/BattleCamera"*/);
    sub_1C93AD4(&StringLiteral_1075/*"/CutIns/"*/);
    sub_1C93AD4(&StringLiteral_3121/*"Battle2D"*/);
    sub_1C93AD4(&StringLiteral_1074/*"/Cameras/BattleCamera"*/);
    sub_1C93AD4(&StringLiteral_16898/*"animCamLoc"*/);
    sub_1C93AD4(&StringLiteral_25119/*"weapon_level_"*/);
    sub_1C93AD4(&StringLiteral_682/*"(Clone)"*/);
    sub_1C93AD4(&StringLiteral_14971/*"USFGOAttachToParentEvent"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_1049/*"/Actor/chr"*/);
    sub_1C93AD4(&StringLiteral_14970/*"USFGOAnimationCameraEvent"*/);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    sub_1C93AD4(&StringLiteral_14973/*"USFGOPlayCutInEvent"*/);
    byte_4D33761 = 1;
  }
  *(_QWORD *)result = 0;
  memset(&v491, 0, sizeof(v491));
  memset(&v490, 0, sizeof(v490));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  object = (Il2CppObject *)this;
  if ( !seqObject )
    goto LABEL_416;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v10 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  (BattleSequenceManager_o *)Component_object,
                                  (WellFired_USSequencer_o *)Component_object,
                                  (System_String_o *)StringLiteral_2143/*"Actor"*/,
                                  v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v10, 0, 0);
  if ( (seqObject & 1) != 0 )
  {
    seqObject = (__int64)object[5].klass;
    if ( !seqObject )
      goto LABEL_416;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0);
    if ( !v10 )
      goto LABEL_416;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v10,
      (UnityEngine_Transform_o *)seqObject,
      0);
  }
  if ( !Component_object )
    goto LABEL_416;
  ComponentsInChildren_object__52018868 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__52018868(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_319BEB4 *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v12 = BattleSequenceManager___c_TypeInfo;
  item = (Il2CppObject *)v10;
  seq = (WellFired_USSequencer_o *)Component_object;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    v13 = ComponentsInChildren_object__52018868;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v12 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__52018868 = v13;
  }
  _9__88_0 = (System_Func_object__bool__o *)v12->static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    source = ComponentsInChildren_object__52018868;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleSequenceManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__88_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__88_0, v15, Method_BattleSequenceManager___c__setup_b__88_0__, 0);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__88_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__88_0,
      (int32_t)_9__88_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    ComponentsInChildren_object__52018868 = source;
  }
  v23 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         ComponentsInChildren_object__52018868,
                                                         (System_Func_TSource__bool__o *)_9__88_0,
                                                         (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v24 = (System_Action_object__o *)sub_1C93D20(System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
  System_Action_object____ctor(v24, object, Method_BattleSequenceManager__setup_b__88_1__, 0);
  BasicHelper__ForEach_object_(
    v23,
    (System_Action_T__o *)v24,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v27 = BattleSequenceManager__searchTimeline(v25, seq, (System_String_o *)StringLiteral_6436/*"FGOSequenceManager"*/, v26);
  v28 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)object[5].klass;
  if ( !seqObject )
LABEL_416:
    sub_1C93D2C(seqObject, callback);
  v475 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)seqObject,
           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sourcea = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v29;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0) )
  {
    klass = (Il2CppObject *)object[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           klass,
                           (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_416;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0);
    if ( !v27 )
      goto LABEL_416;
    WellFired_USTimelineContainer__set_AffectedObject(v27, (UnityEngine_Transform_o *)seqObject, 0);
    monitor = (System_Collections_Generic_List_object__o *)object[20].monitor;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v27, 0);
    if ( !seqObject )
      goto LABEL_416;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0);
    if ( !monitor )
      goto LABEL_416;
    items = monitor->fields._items;
    v39 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_416;
    size = monitor->fields._size;
    v41 = seqObject;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v42[4] = (Il2CppClass *)v41;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 4), v41, v32, v33, v34, v35, v36, v37);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v27, 0);
    if ( !seqObject )
      goto LABEL_416;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_416;
    v49 = object[7].klass;
    v50 = seqObject;
    *(_QWORD *)(seqObject + 32) = v49;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(seqObject + 32), (int32_t)v49, v43, v44, v45, v46, v47, v48);
    v51 = object[7].monitor;
    *(_QWORD *)(v50 + 40) = v51;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v50 + 40), (int32_t)v51, v52, v53, v54, v55, v56, v57);
    v58 = object[8].klass;
    *(_QWORD *)(v50 + 48) = v58;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v50 + 48), (int32_t)v58, v59, v60, v61, v62, v63, v64);
    v71 = object[4].klass;
    if ( !v71 )
      goto LABEL_416;
    v72 = v71->vtable[7].method;
    *(_QWORD *)(v50 + 96) = v72;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v50 + 96), (int32_t)v72, v65, v66, v67, v68, v69, v70);
    v73 = (Il2CppObject *)object[21].klass;
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    v74 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v74->zeroVector.fields.x;
    y = v74->zeroVector.fields.y;
    z = v74->zeroVector.fields.z;
    if ( !byte_4D2A13F )
    {
      sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
      byte_4D2A13F = 1;
    }
    v494.fields.x = x;
    v494.fields.y = y;
    v494.fields.z = z;
    v78 = UnityEngine_Object__Instantiate_object__52629704(
            v73,
            v494,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            (const MethodInfo_32310C8 *)Method_UnityEngine_Object_Instantiate_GameObject____79146688);
    *(_QWORD *)(v50 + 72) = v78;
    v79 = (GrandQuestFolderBoardItem_o *)(v50 + 72);
    sub_1C93A78(v79, (int32_t)v78, v80, v81, v82, v83, v84, v85);
    seqObject = (__int64)v79->klass;
    if ( !v79->klass )
      goto LABEL_416;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0);
    v87 = (System_Collections_Generic_List_object__o *)sourcea;
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo((BattleSequenceManager_o *)object, v86);
      BattleSequenceManager__SetShaderNoblePhantasmMode((BattleSequenceManager_o *)object, 1, v88);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v27,
                           1,
                           (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_416;
    v89 = *(_DWORD *)(seqObject + 24);
    v90 = seqObject;
    if ( v89 >= 1 )
    {
      v91 = 0;
      v92 = 0;
      v484 = seqObject;
      while ( 1 )
      {
        if ( v91 >= (unsigned int)v89 )
LABEL_420:
          sub_1C93D34(seqObject);
        seqObject = *(_QWORD *)(v90 + 8LL * v91 + 32);
        if ( !seqObject )
          goto LABEL_416;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0);
        if ( !seqObject )
          goto LABEL_416;
        v93 = *(_QWORD *)(seqObject + 24);
        v94 = seqObject;
        if ( (int)v93 >= 1 )
          break;
LABEL_103:
        v90 = v484;
        ++v91;
        v89 = *(_DWORD *)(v484 + 24);
        if ( v91 >= v89 )
          goto LABEL_104;
      }
      v95 = 0;
      while ( 1 )
      {
        if ( v95 >= (unsigned int)v93 )
          goto LABEL_420;
        v96 = *(_QWORD *)(v94 + 32 + 8 * v95);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v96, 0, 0);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v96 )
            goto LABEL_416;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v96, 0);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14970/*"USFGOAnimationCameraEvent"*/, 0) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v92, 0, 0) )
            {
              klass_high = HIDWORD(object[10].klass);
              monitor_high = HIDWORD(object[2].monitor);
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                                   klass_high,
                                                                   monitor_high,
                                                                   (System_String_o *)StringLiteral_16898/*"animCamLoc"*/,
                                                                   unitIndex,
                                                                   0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__LoadNoblePhantasmEffect,
                                     (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v113 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              if ( !v113 )
                goto LABEL_416;
              v114 = v113->fields._items;
              v115 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v113->fields._version;
              if ( !v114 )
                goto LABEL_416;
              v116 = v113->fields._size;
              v92 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v113,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
              }
              else
              {
                v117 = &v114->obj.klass + v116;
                v113->fields._size = v116 + 1;
                v117[4] = (Il2CppClass *)v92;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v117 + 4), (int32_t)v92, v107, v108, v109, v110, v111, v112);
              }
            }
            naturalAligment = WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v96 + 304LL) < (unsigned int)naturalAligment
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v96 + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_421:
              sub_1C940C8(v96);
LABEL_422:
              sub_1C940C8(v245);
LABEL_423:
              sub_1C93D2C(v419, v420);
            }
            *(_QWORD *)(v96 + 56) = v92;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v96 + 56), (int32_t)v92, v98, v99, v100, v101, v102, v103);
            v166 = object[7].klass;
            *(_QWORD *)(v96 + 64) = v166;
            v167 = v96 + 64;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)v167, (int32_t)v166, v168, v169, v170, v171, v172, v173);
            *(_BYTE *)(v167 + 28) = 0;
            if ( !v92 )
              goto LABEL_416;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v92, 0);
            if ( !object[5].klass )
              goto LABEL_416;
            v174 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)object[5].klass, 0);
            if ( !seqObject )
              goto LABEL_416;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)seqObject, 0);
            if ( !v174 )
              goto LABEL_416;
            UnityEngine_Transform__set_position(v174, position, 0);
            goto LABEL_99;
          }
          v118 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v96, 0);
          seqObject = System_String__op_Equality(v118, (System_String_o *)StringLiteral_14973/*"USFGOPlayCutInEvent"*/, 0);
          if ( (seqObject & 1) != 0 )
          {
            if ( !v87 )
              goto LABEL_416;
            v125 = WellFired_USFGOPlayCutInEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v96 + 304LL) >= (unsigned int)v125 )
              callback = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v96 + 200LL) + 8 * v125 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                       ? (System_Action_o *)v96
                       : 0LL;
            else
              callback = 0;
            v161 = v87->fields._items;
            v162 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
            ++v87->fields._version;
            if ( !v161 )
              goto LABEL_416;
            v163 = v87->fields._size;
            if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v87,
                (Il2CppObject *)callback,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
              goto LABEL_100;
            }
            v164 = &v161->obj.klass + v163;
            v87->fields._size = v163 + 1;
            v164[4] = (Il2CppClass *)callback;
            v136 = (GrandQuestFolderBoardItem_o *)(v164 + 4);
            goto LABEL_90;
          }
          v126 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v96, 0);
          if ( System_String__op_Equality(v126, (System_String_o *)StringLiteral_14974/*"USFGOSetCameraEvent"*/, 0) )
          {
            v133 = WellFired_USFGOSetCameraEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v96 + 304LL) < (unsigned int)v133
              || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v96 + 200LL) + 8 * v133 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
            {
              goto LABEL_421;
            }
            v134 = object[7].klass;
            *(_QWORD *)(v96 + 56) = v134;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v96 + 56), (int32_t)v134, v127, v128, v129, v130, v131, v132);
            seqObject = (__int64)object[7].klass;
            if ( !seqObject )
              goto LABEL_416;
            seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0);
            if ( !seqObject )
              goto LABEL_416;
            parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0);
            *(_QWORD *)(v96 + 64) = parent;
            LODWORD(callback) = (_DWORD)parent;
            v136 = (GrandQuestFolderBoardItem_o *)(v96 + 64);
LABEL_90:
            sub_1C93A78(v136, (int32_t)callback, v119, v120, v121, v122, v123, v124);
            goto LABEL_100;
          }
          v137 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v96, 0);
          seqObject = System_String__op_Equality(v137, (System_String_o *)StringLiteral_14972/*"USFGOChangeBgEvent"*/, 0);
          if ( (seqObject & 1) != 0 )
          {
            v138 = WellFired_USFGOChangeBgEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v96 + 304LL) < (unsigned int)v138
              || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v96 + 200LL) + 8 * v138 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
            {
              goto LABEL_421;
            }
            v139 = (System_String_o **)(v96 + 64);
            if ( System_String__op_Equality(*(System_String_o **)(v96 + 64), (System_String_o *)StringLiteral_1116/*"0"*/, 0)
              || (seqObject = System_String__op_Equality(*v139, (System_String_o *)StringLiteral_1/*""*/, 0),
                  (seqObject & 1) != 0) )
            {
              seqObject = (__int64)object[4].klass;
              if ( !seqObject )
                goto LABEL_416;
              result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0);
              v140 = System_Int32__ToString((int32_t)&result[1], 0);
              *v139 = v140;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v96 + 64), (int32_t)v140, v141, v142, v143, v144, v145, v146);
              seqObject = (__int64)object[4].klass;
              if ( !seqObject )
                goto LABEL_416;
              result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0);
              v147 = System_Int32__ToString((int32_t)&result[1], 0);
              *(_QWORD *)(v96 + 72) = v147;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v96 + 72), (int32_t)v147, v148, v149, v150, v151, v152, v153);
              v154 = object[25].klass;
              *(_QWORD *)(v96 + 136) = v154;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v96 + 136), (int32_t)v154, v155, v156, v157, v158, v159, v160);
            }
LABEL_99:
            v87 = (System_Collections_Generic_List_object__o *)sourcea;
          }
        }
LABEL_100:
        LODWORD(v93) = *(_DWORD *)(v94 + 24);
        if ( (__int64)++v95 >= (int)v93 )
          goto LABEL_103;
      }
    }
  }
LABEL_104:
  v175 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(v175, *(const MethodInfo_3879168 **)((char *)&xmmword_4B5D0C4 + 4));
  if ( !v175 )
    goto LABEL_416;
  v182 = v175->fields._items;
  v183 = *(_QWORD *)((char *)&xmmword_4B5D0C4 + 12);
  ++v175->fields._version;
  if ( !v182 )
    goto LABEL_416;
  v184 = v175->fields._size;
  if ( (unsigned int)v184 >= LODWORD(v182->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v175,
      item,
      *(const MethodInfo_387999C **)(*(_QWORD *)(*(_QWORD *)(v183 + 32) + 192LL) + 112LL));
  }
  else
  {
    v185 = &v182->obj.klass + v184;
    v175->fields._size = v184 + 1;
    v185[4] = (Il2CppClass *)item;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v185 + 4), (int32_t)item, v176, v177, v178, v179, v180, v181);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(v186, seq, (System_String_o *)StringLiteral_3995/*"Cameras/BattleCamera"*/, v187);
  v194 = v175->fields._items;
  v195 = *(_QWORD *)((char *)&xmmword_4B5D0C4 + 12);
  ++v175->fields._version;
  if ( !v194 )
    goto LABEL_416;
  v196 = v175->fields._size;
  v197 = seqObject;
  if ( (unsigned int)v196 >= LODWORD(v194->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v175,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_387999C **)(*(_QWORD *)(*(_QWORD *)(v195 + 32) + 192LL) + 112LL));
  }
  else
  {
    v198 = &v194->obj.klass + v196;
    v175->fields._size = v196 + 1;
    v198[4] = (Il2CppClass *)v197;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v198 + 4), v197, v188, v189, v190, v191, v192, v193);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v487,
    v175,
    *(const MethodInfo_387A494 **)((char *)&xmmword_4B5D0D4 + 4));
  v491 = v487;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v491,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v491.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v200 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v200 )
    {
      if ( !current )
        sub_1C93D2C(v200, v201);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v204 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1C93D2C(0, v203);
      v205 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v205 >= 1 )
      {
        for ( i = 0; i < v205; ++i )
        {
          if ( i >= (unsigned int)v205 )
            sub_1C93D34(ComponentsInChildren_object);
          v207 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v204 + i + 4);
          if ( !v207 )
            sub_1C93D2C(0, v203);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v207, 0);
          v208 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1C93D2C(0, v203);
          v209 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v209 >= 1 )
          {
            v210 = 0;
            do
            {
              if ( v210 >= (unsigned int)v209 )
                sub_1C93D34(ComponentsInChildren_object);
              v211 = v208[v210 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v211, 0, 0);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v211 )
                  sub_1C93D2C(ComponentsInChildren_object, v203);
                v212 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v211, 0);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v212,
                                                        (System_String_o *)StringLiteral_14971/*"USFGOAttachToParentEvent"*/,
                                                        0);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v213 = WellFired_USFGOAttachToParentEvent_TypeInfo->_2.naturalAligment;
                  if ( *(unsigned __int8 *)(*(_QWORD *)v211 + 304LL) < (unsigned int)v213
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v211 + 200LL) + 8 * v213 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1C940C8(v211);
LABEL_413:
                    sub_1C93D2C(v214, v215);
                  }
                  v214 = System_String__op_Equality(
                           *(System_String_o **)(v211 + 80),
                           (System_String_o *)StringLiteral_3125/*"BattleCamera"*/,
                           0);
                  if ( v214 )
                  {
                    v222 = (UnityEngine_Component_o *)object[7].klass;
                    if ( !v222 )
                      sub_1C93D2C(0, v215);
                    transform = UnityEngine_Component__get_transform(v222, 0);
                    *(_QWORD *)(v211 + 64) = transform;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)(v211 + 64),
                      (int32_t)transform,
                      v224,
                      v225,
                      v226,
                      v227,
                      v228,
                      v229);
                  }
                  else
                  {
                    if ( !v28 )
                      goto LABEL_413;
                    v230 = v28->fields._items;
                    v231 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v28->fields._version;
                    if ( !v230 )
                      sub_1C93D2C(v214, v215);
                    v232 = v28->fields._size;
                    if ( (unsigned int)v232 >= LODWORD(v230->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v28,
                        (Il2CppObject *)v211,
                        *(const MethodInfo_387999C **)(*(_QWORD *)(v231[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v233 = &v230->obj.klass + v232;
                      v28->fields._size = v232 + 1;
                      v233[4] = (Il2CppClass *)v211;
                      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v233 + 4), v211, v216, v217, v218, v219, v220, v221);
                    }
                  }
                }
              }
              LODWORD(v209) = *((_DWORD *)v208 + 6);
              ++v210;
            }
            while ( (__int64)v210 < (int)v209 );
          }
          v205 = *((_DWORD *)v204 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v491,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0);
  if ( !seqObject )
    goto LABEL_416;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0);
  if ( !Enumerator )
    sub_1C93D2C(0, v234);
  v236 = 0;
  while ( 1 )
  {
    v237 = Enumerator->klass;
    v238 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &v237->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v238;
        p_offset += 4;
        if ( !v238 )
          goto LABEL_153;
      }
      v240 = (__int64)&v237->vtable[*p_offset];
    }
    else
    {
LABEL_153:
      v240 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v240)(
            Enumerator,
            *(_QWORD *)(v240 + 8))
        & 1) == 0 )
      break;
    v241 = Enumerator->klass;
    v242 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v243 = (System_Collections_IEnumerator_c **)&v241->_1.interfaceOffsets->offset;
      while ( *(v243 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v242;
        v243 += 2;
        if ( !v242 )
          goto LABEL_160;
      }
      v244 = (__int64)&v241->vtable[*(_DWORD *)v243 + 1];
    }
    else
    {
LABEL_160:
      v244 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v245 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v244)(
                                        Enumerator,
                                        *(_QWORD *)(v244 + 8));
    if ( !v245 )
      sub_1C93D2C(0, v246);
    v247 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v245->klass->_2.naturalAligment < (unsigned int)v247
      || (UnityEngine_Transform_c *)v245->klass->_2.typeHierarchy[v247 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_422;
    }
    gameObject = UnityEngine_Component__get_gameObject(v245, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v249);
    v250 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v252 = v250;
    if ( !v250 )
LABEL_426:
      sub_1C93D2C(v250, v251);
    v253 = (System_String_o *)v250[2].monitor;
    if ( !v253 )
      sub_1C93D2C(0, v251);
    if ( System_String__StartsWith(v253, (System_String_o *)StringLiteral_1060/*"/BattleActors/"*/, 0) && v252[2].monitor )
    {
      v255 = (System_String_o *)v252[2].monitor;
      if ( !v255 )
        sub_1C93D2C(0, v254);
      if ( System_String__StartsWith(v255, (System_String_o *)StringLiteral_1060/*"/BattleActors/"*/, 0) )
      {
        v257 = (System_String_o *)v252[2].monitor;
        if ( !v257 )
          sub_1C93D2C(0, v256);
        v258 = System_String__Substring_64471664(v257, v257->fields._stringLength - 1, 1, 0);
        result[0] = 1;
        v236 += System_Int32__TryParse(v258, result, 0);
      }
    }
  }
  v259 = sub_1C93C10(Enumerator, System_IDisposable_TypeInfo);
  if ( v259 )
  {
    v260 = *(_QWORD *)v259;
    v261 = v259;
    v262 = *(unsigned __int16 *)(*(_QWORD *)v259 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v259 + 302LL) )
    {
      v263 = (int *)(*(_QWORD *)(v260 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v263 - 1) != System_IDisposable_TypeInfo )
      {
        --v262;
        v263 += 4;
        if ( !v262 )
          goto LABEL_179;
      }
      v264 = v260 + 16LL * *v263 + 312;
    }
    else
    {
LABEL_179:
      v264 = sub_1C69E5C(v259, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v264)(v261, *(_QWORD *)(v264 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0);
  if ( !seqObject )
    goto LABEL_416;
  v485 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0);
  if ( !v485 )
    sub_1C93D2C(0, v265);
  v474 = 0;
  while ( 1 )
  {
    v266 = v485->klass;
    v267 = *(unsigned __int16 *)&v485->klass->_2.rank;
    if ( *(_WORD *)&v485->klass->_2.rank )
    {
      v268 = &v266->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v268 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v267;
        v268 += 4;
        if ( !v267 )
          goto LABEL_189;
      }
      v269 = (__int64)&v266->vtable[*v268];
    }
    else
    {
LABEL_189:
      v269 = sub_1C69E5C(v485, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v269)(v485, *(_QWORD *)(v269 + 8)) & 1) == 0 )
      break;
    v270 = v485->klass;
    v271 = *(unsigned __int16 *)&v485->klass->_2.rank;
    if ( *(_WORD *)&v485->klass->_2.rank )
    {
      v272 = (System_Collections_IEnumerator_c **)&v270->_1.interfaceOffsets->offset;
      while ( *(v272 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v271;
        v272 += 2;
        if ( !v271 )
          goto LABEL_196;
      }
      v273 = (__int64)&v270->vtable[*(_DWORD *)v272 + 1];
    }
    else
    {
LABEL_196:
      v273 = sub_1C69E5C(v485, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v274 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v273)(
                                        v485,
                                        *(_QWORD *)(v273 + 8));
    if ( !v274 )
      sub_1C93D2C(0, v275);
    v276 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v274->klass->_2.naturalAligment < (unsigned int)v276
      || (UnityEngine_Transform_c *)v274->klass->_2.typeHierarchy[v276 - 1] != UnityEngine_Transform_TypeInfo )
    {
LABEL_425:
      sub_1C940C8(v274);
      goto LABEL_426;
    }
    v277 = UnityEngine_Component__get_gameObject(v274, 0);
    if ( !v277 )
      sub_1C93D2C(0, v278);
    v279 = UnityEngine_GameObject__GetComponent_object_(
             v277,
             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v281 = (WellFired_USTimelineContainer_o *)v279;
    if ( !v279 )
      sub_1C93D2C(0, v280);
    v282 = (System_String_o *)v279[2].monitor;
    if ( !v282 )
      sub_1C93D2C(0, v280);
    v284 = System_String__StartsWith(v282, (System_String_o *)StringLiteral_1054/*"/AllEffects/"*/, 0);
    if ( v284 )
    {
      affectedObjectPath = v281->fields.affectedObjectPath;
      if ( !affectedObjectPath )
        sub_1C93D2C(0, v283);
      v286 = System_String__Substring(affectedObjectPath, 12, 0);
    }
    else
    {
      v286 = 0;
    }
    v287 = v281->fields.affectedObjectPath;
    if ( !v287 )
      sub_1C93D2C(0, v283);
    v289 = System_String__StartsWith(v287, (System_String_o *)StringLiteral_1075/*"/CutIns/"*/, 0);
    if ( v289 )
    {
      v290 = v281->fields.affectedObjectPath;
      if ( !v290 )
        sub_1C93D2C(0, v288);
      v286 = System_String__Substring(v290, 8, 0);
    }
    v291 = v281->fields.affectedObjectPath;
    if ( !v291 )
      sub_1C93D2C(0, v288);
    if ( System_String__StartsWith(v291, (System_String_o *)StringLiteral_1072/*"/BattleCamera"*/, 0) )
      goto LABEL_216;
    v293 = v281->fields.affectedObjectPath;
    if ( !v293 )
      sub_1C93D2C(0, v292);
    if ( System_String__StartsWith(v293, (System_String_o *)StringLiteral_1074/*"/Cameras/BattleCamera"*/, 0) )
    {
LABEL_216:
      v294 = (UnityEngine_Component_o *)object[7].klass;
      if ( !v294 )
        sub_1C93D2C(0, v292);
      v295 = UnityEngine_Component__get_transform(v294, 0);
      WellFired_USTimelineContainer__set_AffectedObject(v281, v295, 0);
    }
    else
    {
      v296 = v281->fields.affectedObjectPath;
      if ( !v296 )
        sub_1C93D2C(0, v292);
      if ( System_String__StartsWith(v296, (System_String_o *)StringLiteral_1049/*"/Actor/chr"*/, 0) )
      {
        v298 = (UnityEngine_GameObject_o *)object[5].klass;
        if ( !v298 )
          sub_1C93D2C(0, v297);
        v300 = UnityEngine_GameObject__get_transform(v298, 0);
        v301 = v281->fields.affectedObjectPath;
        if ( !v301 )
          sub_1C93D2C(0, v299);
        v302 = System_String__Replace_64472288(
                 v301,
                 (System_String_o *)StringLiteral_1049/*"/Actor/chr"*/,
                 (System_String_o *)StringLiteral_18102/*"chr(Clone)"*/,
                 0);
        if ( !v300 )
          sub_1C93D2C(v302, v302);
        v303 = UnityEngine_Transform__Find(v300, v302, 0);
        WellFired_USTimelineContainer__set_AffectedObject(v281, v303, 0);
        AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v281, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(AffectedObject, 0, 0) )
        {
          v306 = v281->fields.affectedObjectPath;
          if ( !v306 )
            sub_1C93D2C(0, v305);
          v307 = System_String__StartsWith(v306, (System_String_o *)StringLiteral_1051/*"/Actor/chr/body_level_"*/, 0);
          v309 = &StringLiteral_17455/*"body_level_"*/;
          if ( v307 )
            goto LABEL_230;
          v310 = v281->fields.affectedObjectPath;
          if ( !v310 )
            sub_1C93D2C(0, v308);
          v311 = System_String__StartsWith(v310, (System_String_o *)StringLiteral_1052/*"/Actor/chr/weapon_level_"*/, 0);
          v309 = &StringLiteral_25119/*"weapon_level_"*/;
          if ( v311 )
          {
LABEL_230:
            v312 = (System_String_o *)*v309;
            if ( *v309 )
            {
              v313 = (UnityEngine_GameObject_o *)object[5].klass;
              if ( !v313 )
                sub_1C93D2C(0, v308);
              seqa = (System_String_o *)StringLiteral_1/*""*/;
              v314 = UnityEngine_GameObject__get_transform(v313, 0);
              if ( !v314 )
                sub_1C93D2C(0, v315);
              v316 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                               v314,
                                               (System_String_o *)StringLiteral_18102/*"chr(Clone)"*/,
                                               0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v317 = UnityEngine_Object__op_Inequality(v316, 0, 0);
              if ( v317 )
              {
                if ( !v316 )
                  sub_1C93D2C(v317, v318);
                v320 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v316, 0);
                if ( !v320 )
                  sub_1C93D2C(0, v319);
                while ( 1 )
                {
                  v321 = v320->klass;
                  v322 = *(unsigned __int16 *)&v320->klass->_2.rank;
                  if ( *(_WORD *)&v320->klass->_2.rank )
                  {
                    v323 = &v321->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)v323 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      --v322;
                      v323 += 4;
                      if ( !v322 )
                        goto LABEL_242;
                    }
                    v324 = (__int64)&v321->vtable[*v323];
                  }
                  else
                  {
LABEL_242:
                    v324 = sub_1C69E5C(v320, System_Collections_IEnumerator_TypeInfo, 0);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v324)(
                          v320,
                          *(_QWORD *)(v324 + 8))
                      & 1) == 0 )
                    break;
                  v325 = v320->klass;
                  v326 = *(unsigned __int16 *)&v320->klass->_2.rank;
                  if ( *(_WORD *)&v320->klass->_2.rank )
                  {
                    v327 = (System_Collections_IEnumerator_c **)&v325->_1.interfaceOffsets->offset;
                    while ( *(v327 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      --v326;
                      v327 += 2;
                      if ( !v326 )
                        goto LABEL_249;
                    }
                    v328 = (__int64)&v325->vtable[*(_DWORD *)v327 + 1];
                  }
                  else
                  {
LABEL_249:
                    v328 = sub_1C69E5C(v320, System_Collections_IEnumerator_TypeInfo, 1);
                  }
                  v329 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v328)(
                                                      v320,
                                                      *(_QWORD *)(v328 + 8));
                  v331 = (UnityEngine_Object_o *)v329;
                  if ( !v329 )
                    sub_1C93D2C(0, v330);
                  v332 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
                  if ( v329->klass->_2.naturalAligment < (unsigned int)v332
                    || (UnityEngine_Transform_c *)v329->klass->_2.typeHierarchy[v332 - 1] != UnityEngine_Transform_TypeInfo )
                  {
                    sub_1C940C8(v329);
                    v468 = sub_1C93C10(v320, System_IDisposable_TypeInfo);
                    v469 = v468;
                    if ( v468 )
                    {
                      v470 = *(_QWORD *)v468;
                      v471 = *(unsigned __int16 *)(*(_QWORD *)v468 + 302LL);
                      if ( *(_WORD *)(*(_QWORD *)v468 + 302LL) )
                      {
                        v472 = (int *)(*(_QWORD *)(v470 + 176) + 8LL);
                        while ( *((System_IDisposable_c **)v472 - 1) != System_IDisposable_TypeInfo )
                        {
                          --v471;
                          v472 += 4;
                          if ( !v471 )
                            goto LABEL_457;
                        }
                        v473 = v470 + 16LL * *v472 + 312;
                      }
                      else
                      {
LABEL_457:
                        v473 = sub_1C69E5C(v468, System_IDisposable_TypeInfo, 0);
                      }
                      (*(void (__fastcall **)(__int64, _QWORD))v473)(v469, *(_QWORD *)(v473 + 8));
                    }
                    sub_1C93D24(v316);
                  }
                  v333 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v329, 0);
                  if ( !v333 )
                    sub_1C93D2C(0, v334);
                  v335 = UnityEngine_Object__get_name(v333, 0);
                  if ( !v335 )
                    sub_1C93D2C(0, v336);
                  if ( System_String__StartsWith(v335, v312, 0) )
                  {
                    seqa = UnityEngine_Object__get_name(v331, 0);
                    break;
                  }
                }
                v343 = sub_1C93C10(v320, System_IDisposable_TypeInfo);
                v344 = v343;
                if ( v343 )
                {
                  v345 = *(_QWORD *)v343;
                  v346 = *(unsigned __int16 *)(*(_QWORD *)v343 + 302LL);
                  if ( *(_WORD *)(*(_QWORD *)v343 + 302LL) )
                  {
                    v347 = (int *)(*(_QWORD *)(v345 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v347 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v346;
                      v347 += 4;
                      if ( !v346 )
                        goto LABEL_271;
                    }
                    v348 = v345 + 16LL * *v347 + 312;
                  }
                  else
                  {
LABEL_271:
                    v348 = sub_1C69E5C(v343, System_IDisposable_TypeInfo, 0);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v348)(v344, *(_QWORD *)(v348 + 8));
                }
              }
              v349 = v281->fields.affectedObjectPath;
              v350 = System_String__Concat_64425724((System_String_o *)StringLiteral_1050/*"/Actor/chr/"*/, v312, 0);
              if ( !v350 )
                sub_1C93D2C(0, v351);
              if ( !v349 )
                sub_1C93D2C(v350, v351);
              v352 = System_String__Substring(v349, v350->fields._stringLength, 0);
              if ( !v352 )
                sub_1C93D2C(0, v353);
              v354 = System_String__Split(v352, 0x2Fu, 0, 0);
              if ( !v354 )
                sub_1C93D2C(0, v355);
              if ( !LODWORD(v354->max_length) )
                sub_1C93D34(v354);
              v357 = System_String__Concat_64425724(v312, v354->m_Items[0], 0);
              v358 = (UnityEngine_GameObject_o *)object[5].klass;
              if ( !v358 )
                sub_1C93D2C(0, v356);
              v360 = UnityEngine_GameObject__get_transform(v358, 0);
              v361 = v281->fields.affectedObjectPath;
              if ( !v361 )
                sub_1C93D2C(0, v359);
              v362 = System_String__Replace_64472288(
                       v361,
                       (System_String_o *)StringLiteral_1049/*"/Actor/chr"*/,
                       (System_String_o *)StringLiteral_18102/*"chr(Clone)"*/,
                       0);
              if ( !v362 )
                sub_1C93D2C(0, v363);
              v364 = System_String__Replace_64472288(v362, v357, seqa, 0);
              if ( !v360 )
                sub_1C93D2C(v364, v364);
              v365 = UnityEngine_Transform__Find(v360, v364, 0);
              WellFired_USTimelineContainer__set_AffectedObject(v281, v365, 0);
            }
          }
        }
      }
      else
      {
        v337 = v281->fields.affectedObjectPath;
        if ( !v337 )
          sub_1C93D2C(0, v297);
        v338 = System_String__StartsWith(v337, (System_String_o *)StringLiteral_1060/*"/BattleActors/"*/, 0);
        if ( v338 )
          v286 = v281->fields.affectedObjectPath;
        if ( v286 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v338, v286, v339) )
            goto LABEL_326;
          if ( v284 )
          {
            v342 = System_String__IndexOf(v286, 0x2Fu, 0);
            if ( (v342 & 0x80000000) == 0 )
            {
              seqb = System_String__Substring(v286, v342 + 1, 0);
              v286 = System_String__Substring_64471664(v286, 0, v342, 0);
              goto LABEL_287;
            }
            if ( (v474 & 1) != 0 )
            {
              seqb = 0;
LABEL_287:
              v367 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              if ( !v367 )
                sub_1C93D2C(0, v341);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v487,
                v367,
                (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v490 = v487;
              while ( 1 )
              {
                v368 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v490,
                         (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v368 )
                  break;
                v366 = v490.fields._current;
                if ( !v490.fields._current )
                  sub_1C93D2C(v368, v369);
                v370 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v490.fields._current, 0);
                if ( !v370 )
                  sub_1C93D2C(0, v371);
                v372 = System_String__Replace_64472288(
                         v370,
                         (System_String_o *)StringLiteral_682/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0);
                if ( System_String__op_Equality(v286, v372, 0) )
                  goto LABEL_295;
              }
              v366 = 0;
LABEL_295:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v490,
                (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v474 = 1;
              goto LABEL_297;
            }
            seqb = 0;
            v366 = 0;
            v474 = 0;
          }
          else
          {
            seqb = 0;
            v366 = 0;
          }
LABEL_297:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v366, 0, 0) )
          {
            v366 = (Il2CppObject *)BattleSequenceManager__SearchPrefab(
                                     (BattleSequenceManager_o *)object,
                                     HIDWORD(object[10].klass),
                                     v286,
                                     unitIndex,
                                     v373);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v366, 0, 0) )
            {
              v381 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              if ( !v381 )
                sub_1C93D2C(0, v374);
              v382 = v381->fields._items;
              v383 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v381->fields._version;
              if ( !v382 )
                sub_1C93D2C(v381, v374);
              v384 = v381->fields._size;
              if ( (unsigned int)v384 >= LODWORD(v382->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v381,
                  v366,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v383[4] + 192LL) + 112LL));
              }
              else
              {
                v385 = &v382->obj.klass + v384;
                v381->fields._size = v384 + 1;
                v385[4] = (Il2CppClass *)v366;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v385 + 4),
                  (int32_t)v366,
                  v375,
                  v376,
                  v377,
                  v378,
                  v379,
                  v380);
              }
              if ( !v366 )
                sub_1C93D2C(v386, v387);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v366, 0, 0);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v366, 0, 0) )
            goto LABEL_326;
          IsNullOrEmpty = System_String__IsNullOrEmpty(seqb, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !v366 )
              sub_1C93D2C(IsNullOrEmpty, v389);
            v402 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v366, 0);
            if ( !v402 )
              sub_1C93D2C(0, v403);
            v404 = UnityEngine_Transform__Find(v402, seqb, 0);
            WellFired_USTimelineContainer__set_AffectedObject(v281, v404, 0);
            goto LABEL_326;
          }
          if ( !v366 )
            sub_1C93D2C(IsNullOrEmpty, v389);
          v390 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v366, 0);
          WellFired_USTimelineContainer__set_AffectedObject(v281, v390, 0);
          if ( v289 )
          {
            v391 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v366, 0);
            if ( !v391 )
              sub_1C93D2C(0, v392);
            localPosition = UnityEngine_Transform__get_localPosition(v391, 0);
            v394 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v366, 0);
            v395 = (UnityEngine_GameObject_o *)object[5].monitor;
            if ( !v395 )
              sub_1C93D2C(0, v393);
            v396 = UnityEngine_GameObject__get_transform(v395, 0);
            if ( !v394 )
              sub_1C93D2C(v396, v396);
            UnityEngine_Transform__set_parent(v394, v396, 0);
            v397 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v366, 0);
            if ( !v397 )
              sub_1C93D2C(0, v398);
            UnityEngine_Transform__set_localPosition(v397, localPosition, 0);
            BattleSequenceManager__updateCutInEvents(v399, sourcea, v286, (UnityEngine_GameObject_o *)v366, v400);
            v401 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3128/*"BattleCutIn"*/, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v366, 0);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3123/*"BattleBG"*/, 0) )
              goto LABEL_326;
            v401 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3121/*"Battle2D"*/, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v366, v401, 0);
LABEL_326:
          v405 = v281->fields.affectedObjectPath;
          if ( !v405 )
            sub_1C93D2C(0, v340);
          if ( System_String__StartsWith(v405, (System_String_o *)StringLiteral_1060/*"/BattleActors/"*/, 0) )
          {
            v407 = v281->fields.affectedObjectPath;
            if ( !v407 )
              sub_1C93D2C(0, v406);
            v408 = System_String__Substring_64471664(v407, v407->fields._stringLength - 1, 1, 0);
            targetPosIndex = 1;
            System_Int32__TryParse(v408, &targetPosIndex, 0);
            v410 = --targetPosIndex;
            if ( v236 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach((BattleSequenceManager_o *)object, v281, v410, v409);
              BattleSequenceManager__SyncAttachedTargetPair(
                (BattleSequenceManager_o *)object,
                v281,
                targetPosIndex,
                v411);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach((BattleSequenceManager_o *)object, v281, v410, v409);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v281,
                         1,
                         (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v414 = EventCount;
          if ( !EventCount )
            sub_1C93D2C(0, v413);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1C93D34(EventCount);
              v417 = (WellFired_USTimelineEvent_o *)v414->m_Items[j];
              if ( !v417 )
                sub_1C93D2C(EventCount, v413);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v417, 0);
                if ( k >= (int)EventCount )
                  break;
                v419 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v417, k, 0);
                v421 = (Il2CppObject *)v419;
                if ( !v419 )
                  goto LABEL_423;
                v422 = UnityEngine_Object__get_name(v419, 0);
                if ( System_String__op_Equality(v422, (System_String_o *)StringLiteral_14971/*"USFGOAttachToParentEvent"*/, 0) )
                {
                  v423 = WellFired_USFGOAttachToParentEvent_TypeInfo->_2.naturalAligment;
                  if ( v421->klass->_2.naturalAligment < (unsigned int)v423
                    || (WellFired_USFGOAttachToParentEvent_c *)v421->klass->_2.typeHierarchy[v423 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1C940C8(v421);
                    goto LABEL_425;
                  }
                  v424 = System_String__op_Equality(
                           (System_String_o *)v421[5].klass,
                           (System_String_o *)StringLiteral_3125/*"BattleCamera"*/,
                           0);
                  if ( v424 )
                  {
                    v432 = (UnityEngine_Component_o *)object[7].klass;
                    if ( !v432 )
                      sub_1C93D2C(0, v425);
                    v433 = UnityEngine_Component__get_transform(v432, 0);
                    v421[4].klass = (Il2CppClass *)v433;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)&v421[4],
                      (int32_t)v433,
                      v434,
                      v435,
                      v436,
                      v437,
                      v438,
                      v439);
                  }
                  else
                  {
                    if ( !v28 )
                      sub_1C93D2C(v424, v425);
                    v440 = v28->fields._items;
                    v441 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v28->fields._version;
                    if ( !v440 )
                      sub_1C93D2C(v424, v425);
                    v442 = v28->fields._size;
                    if ( (unsigned int)v442 >= LODWORD(v440->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v28,
                        v421,
                        *(const MethodInfo_387999C **)(*(_QWORD *)(v441[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v443 = &v440->obj.klass + v442;
                      v28->fields._size = v442 + 1;
                      v443[4] = (Il2CppClass *)v421;
                      sub_1C93A78(
                        (GrandQuestFolderBoardItem_o *)(v443 + 4),
                        (int32_t)v421,
                        v426,
                        v427,
                        v428,
                        v429,
                        v430,
                        v431);
                    }
                  }
                }
              }
              max_length = v414->max_length;
            }
          }
        }
      }
    }
  }
  seqObject = sub_1C93C10(v485, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v445 = *(_QWORD *)seqObject;
    v446 = seqObject;
    v447 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v448 = (int *)(*(_QWORD *)(v445 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v448 - 1) != System_IDisposable_TypeInfo )
      {
        --v447;
        v448 += 4;
        if ( !v447 )
          goto LABEL_370;
      }
      v449 = v445 + 16LL * *v448 + 312;
    }
    else
    {
LABEL_370:
      v449 = sub_1C69E5C(seqObject, System_IDisposable_TypeInfo, 0);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v449)(v446, *(_QWORD *)(v449 + 8));
  }
  if ( !v28 )
    goto LABEL_416;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v487,
    v28,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v487;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          (BattlePerformance_o *)object[4].klass,
          (UnityEngine_GameObject_o *)object[5].klass,
          (System_Collections_Generic_List_GameObject__o *)object[20].monitor,
          0) )
  {
    if ( !m.fields._current )
      sub_1C93D2C(0, v450);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v475, 0, 0);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v475 )
      goto LABEL_416;
    if ( LOBYTE(v475[35].klass) )
      goto LABEL_407;
    v451 = v475[33].monitor;
    if ( !v451 )
      goto LABEL_416;
    if ( !v451[89] && !BattleActorControl__isNoVoice((BattleActorControl_o *)v475, 0) )
    {
      v452 = (UnityEngine_Object_o *)object[4].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v452, 0, 0);
      if ( (seqObject & 1) != 0 )
      {
        v453 = object[4].klass;
        if ( !v453 )
          goto LABEL_416;
        v454 = *(UnityEngine_Object_o **)&v453->_1.byval_arg.bits;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v454, 0, 0) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_VoiceMaster___);
            LOBYTE(object[22].monitor) = 0;
            v456 = (int32_t)object[10].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   (BattleSequenceManager_o *)object,
                   (VoiceMaster_o *)MasterData_object,
                   v456,
                   FileName,
                   v458) )
            {
              LOBYTE(object[22].monitor) = 1;
            }
            v459 = (int32_t)object[10].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v460 = Voice__getFileName(111, 0);
            BattleSequenceManager__addServantVoicePlayed(
              (BattleSequenceManager_o *)object,
              (VoiceMaster_o *)MasterData_object,
              v459,
              v460,
              v461);
            v462 = v475[33].monitor;
            if ( v462 )
            {
              v463 = v462[192];
              v464 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v464 = BalanceConfig_TypeInfo;
              }
              if ( v463 == v464->static_fields->TreasureDeviceIdMashu3 )
              {
                v465 = (int32_t)object[10].klass;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v466 = Voice__getFileName(121, 0);
                BattleSequenceManager__addServantVoicePlayed(
                  (BattleSequenceManager_o *)object,
                  (VoiceMaster_o *)MasterData_object,
                  v465,
                  v466,
                  v467);
              }
              goto LABEL_407;
            }
          }
          goto LABEL_416;
        }
      }
    }
  }
LABEL_407:
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
}


void BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  int size; // w8
  int v9; // w24
  int32_t v10; // w22

  if ( (byte_4D3377A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4D3377A = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      v9 = size - 1;
      if ( size < 1 )
      {
LABEL_12:
        if ( tlcont )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)tlcont,
                                                                            0);
          if ( battleTargetList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleTargetList, 0, 0);
            return;
          }
        }
      }
      else
      {
        v10 = 0;
        while ( 1 )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v10,
                                                                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( !battleTargetList )
            goto LABEL_21;
          if ( HIDWORD(battleTargetList[1].fields._items) == targetIndex )
            break;
          if ( v9 == v10 )
            goto LABEL_12;
          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
          ++v10;
          if ( !battleTargetList )
            goto LABEL_21;
        }
        battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v10,
                                                                            (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( battleTargetList )
          {
            battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                              (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                              (const MethodInfo *)tlcont);
            if ( battleTargetList )
            {
              battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                                (UnityEngine_GameObject_o *)battleTargetList,
                                                                                0);
              if ( tlcont )
              {
                WellFired_USTimelineContainer__set_AffectedObject(
                  tlcont,
                  (UnityEngine_Transform_o *)battleTargetList,
                  0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1C93D2C(battleTargetList, tlcont);
  }
}


void BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  if ( (byte_4D3377E & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_GameObject_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    sub_1C93AD4(&StringLiteral_14619/*"Tmp_Target"*/);
    byte_4D3377E = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
    if ( !battleTargetList )
      goto LABEL_15;
    if ( battleTargetList->fields._size > targetIndex )
    {
      battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        battleTargetList,
                                                                        targetIndex,
                                                                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
      if ( battleTargetList )
      {
        battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                          (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                          (const MethodInfo *)tlcont);
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)battleTargetList,
                                                                            0);
          if ( tlcont )
          {
            WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)battleTargetList, 0);
            return;
          }
        }
      }
LABEL_15:
      sub_1C93D2C(battleTargetList, tlcont);
    }
    v8 = (UnityEngine_GameObject_o *)sub_1C93D20(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v8, (System_String_o *)StringLiteral_14619/*"Tmp_Target"*/, 0);
    if ( !v8 )
      goto LABEL_15;
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v8, 0);
    if ( !tlcont )
      goto LABEL_15;
    WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)battleTargetList, 0);
    AffectedObject = WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0);
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)tlcont,
                                                                      0);
    if ( !AffectedObject )
      goto LABEL_15;
    UnityEngine_Transform__SetParent(AffectedObject, (UnityEngine_Transform_o *)battleTargetList, 0);
  }
}


bool BattleSequenceManager__updateCutInEvents(
        BattleSequenceManager_o *this,
        System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs,
        System_String_o *cutInName,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  bool v10; // w21
  Il2CppObject *current; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int v18; // w19
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D33765 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__);
    this = (BattleSequenceManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
    byte_4D33765 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !evs )
    sub_1C93D2C(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1C93D2C(v8, v9);
    if ( System_String__op_Equality(
           *(System_String_o **)((char *)&v20.fields._current->klass + (unsigned __int64)&dword_40),
           cutInName,
           0) )
    {
      *(_QWORD *)((char *)&word_38 + (_QWORD)current) = obj;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)((char *)&word_38 + (_QWORD)current),
        (int32_t)obj,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      v18 = 4;
      goto LABEL_10;
    }
  }
  v18 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v10 && v18 == 4;
}


void BattleSequenceManager_BattleTarget___ctor(BattleSequenceManager_BattleTarget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_4D2A13F )
  {
    sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
  }
  this->fields.originalRotation = UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion;
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleActorControl_o *BattleSequenceManager_BattleTarget__getBattleActor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  return this->fields.targetActor;
}


int32_t BattleSequenceManager_BattleTarget__get_positionIndex(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  return this->fields._positionIndex_k__BackingField;
}


void BattleSequenceManager_BattleTarget__restoreTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Component_o *targetActor; // x0

  if ( this->fields.isSave )
  {
    targetActor = (UnityEngine_Component_o *)this->fields.targetActor;
    if ( !targetActor
      || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0)) == 0
      || (UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)targetActor,
            this->fields.originalRotation,
            0),
          (targetActor = (UnityEngine_Component_o *)this->fields.targetActor) == 0)
      || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0)) == 0 )
    {
      sub_1C93D2C(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0);
  }
  this->fields.targetActor = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.targetActor, 0, v2, v3, v4, v5, v6, v7);
}


UnityEngine_GameObject_o *BattleSequenceManager_BattleTarget__saveTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *targetActor; // x0
  UnityEngine_Vector3_o localScale; // 0:kr10_12.12
  UnityEngine_Quaternion_o localRotation; // 0:kr00_16.16

  targetActor = (UnityEngine_Component_o *)this->fields.targetActor;
  this->fields.isSave = 1;
  if ( !targetActor )
    goto LABEL_7;
  targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0);
  if ( !targetActor
    || (localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)targetActor, 0),
        targetActor = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalRotation = localRotation,
        !targetActor)
    || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0)) == 0
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetActor, 0),
        targetActor = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalScale = localScale,
        !targetActor) )
  {
LABEL_7:
    sub_1C93D2C(targetActor, method);
  }
  return UnityEngine_Component__get_gameObject(targetActor, 0);
}


void BattleSequenceManager_BattleTarget__set_positionIndex(
        BattleSequenceManager_BattleTarget_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._positionIndex_k__BackingField = value;
}


void BattleSequenceManager_BattleTarget__setup(
        BattleSequenceManager_BattleTarget_o *this,
        BattleActorControl_o *bac,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleActorControl_o **p_targetActor; // x20

  this->fields.targetActor = bac;
  p_targetActor = &this->fields.targetActor;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetActor,
    (int32_t)bac,
    index,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  *((_DWORD *)p_targetActor + 9) = index;
}


void BattleSequenceManager__WaitEndSequence_d__108___ctor(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleSequenceManager__WaitEndSequence_d__108__MoveNext(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleSequenceManager__WaitEndSequence_d__108_o *v8; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *wait_5__2; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x19

  v8 = this;
  if ( (byte_4D3379A & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__108_o *)sub_1C93AD4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4D3379A = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C93D20(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0);
    v8->fields._wait_5__2 = v11;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields._wait_5__2, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1C93D2C(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v8->fields._wait_5__2;
    v8->fields.__2__current = wait_5__2;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C93A78(p__2__current, (int32_t)wait_5__2, v2, v3, v4, v5, v6, v7);
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return 1;
  }
  BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(_4__this, method);
  return 0;
}


Il2CppObject *BattleSequenceManager__WaitEndSequence_d__108__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleSequenceManager__WaitEndSequence_d__108__System_Collections_IEnumerator_Reset(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleSequenceManager__WaitEndSequence_d__108_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattleSequenceManager__WaitEndSequence_d__108__System_Collections_IEnumerator_get_Current(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleSequenceManager__WaitEndSequence_d__108__System_IDisposable_Dispose(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleSequenceManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D33794 & 1) == 0 )
  {
    sub_1C93AD4(&BattleSequenceManager___c_TypeInfo);
    byte_4D33794 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleSequenceManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleSequenceManager___c___ctor(BattleSequenceManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__76_0(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x1,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1C93D2C(this, x1);
  return System_Single__CompareTo_66018744(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


int32_t BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__76_2(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOPlayAudioEvent_o *x1,
        WellFired_USFGOPlayAudioEvent_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1C93D2C(this, x1);
  return System_Single__CompareTo_66018744(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_0(
        BattleSequenceManager___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_1(
        BattleSequenceManager___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_2(
        BattleSequenceManager___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___setup_b__88_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C93D2C(this, 0);
  return SwitchActiveBaseConditionComponent__IsTimingBeforeTreasureDevice(comp, 0);
}


void BattleSequenceManager___c__DisplayClass114_0___ctor(
        BattleSequenceManager___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSequenceManager___c__DisplayClass114_0___OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0(
        BattleSequenceManager___c__DisplayClass114_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  struct BgmPlayArgs_o *args; // x8

  if ( !x || (args = this->fields.args) == 0 )
    sub_1C93D2C(this, x);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, args->fields._BgmName_k__BackingField, 0);
}


void BattleSequenceManager___c__DisplayClass117_0___ctor(
        BattleSequenceManager___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSequenceManager___c__DisplayClass117_0___SetupTargetInfo_b__3(
        BattleSequenceManager___c__DisplayClass117_0_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass117_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D33795 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass117_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4D33795 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass117_0_o *)v4->fields.targetList) == 0 )
    sub_1C93D2C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void BattleSequenceManager___c__DisplayClass124_0___ctor(
        BattleSequenceManager___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSequenceManager___c__DisplayClass124_0___GetTargetPosIndexTransform_b__0(
        BattleSequenceManager___c__DisplayClass124_0_o *this,
        BattleSequenceManager_BattleTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._positionIndex_k__BackingField == this->fields.posIndex;
}


void BattleSequenceManager___c__DisplayClass143_0___ctor(
        BattleSequenceManager___c__DisplayClass143_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSequenceManager___c__DisplayClass143_0___ExistBackupBgmPlayGroup_b__0(
        BattleSequenceManager___c__DisplayClass143_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, this->fields.checkBgmName, 0);
}


void BattleSequenceManager___c__DisplayClass75_0___ctor(
        BattleSequenceManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSequenceManager___c__DisplayClass75_0___loadSequence_b__0(
        BattleSequenceManager___c__DisplayClass75_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass75_0_o *v4; // x19
  struct BattleSequenceManager_o *_4__this; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v14; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  v4 = this;
  if ( (byte_4D33796 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_GameObject____79057888);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__);
    sub_1C93AD4(&StringLiteral_13134/*"StandardCutIn"*/);
    this = (BattleSequenceManager___c__DisplayClass75_0_o *)sub_1C93AD4(&ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    byte_4D33796 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass75_0_o *)AssetData__GetObject_object__51927708(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13134/*"StandardCutIn"*/,
                                                                  (const MethodInfo_3185A9C *)Method_AssetData_GetObject_GameObject____79057888),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&_4__this->fields.CutInPrefab,
          (int32_t)this,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (this = (BattleSequenceManager___c__DisplayClass75_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1C93D2C(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  _9__1 = v4->fields.__9__1;
  v14 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1C93D20(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v20, v21, v22, v23, v24, v25);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__LoadNoblePhantasm(
    v14,
    chrId,
    limitCount,
    treasureDeviceId,
    treasureDeviceLv,
    npChargeStage,
    _9__1,
    0);
}


void BattleSequenceManager___c__DisplayClass75_0___loadSequence_b__1(
        BattleSequenceManager___c__DisplayClass75_0_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *_4__this; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x1
  struct BattleSequenceManager_o *v28; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x22
  System_Action_o *v32; // x23
  struct BattleSequenceManager_o *v33; // x8
  struct BattleSequenceManager_o *v34; // x8
  _DWORD *v35; // x20
  int v36; // w8
  int v37; // w9
  __int64 v38; // x10
  struct BattleSequenceManager_o *v39; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D33797 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__);
    sub_1C93AD4(&BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
    sub_1C93AD4(&StringLiteral_9572/*"NoblePhantasm_"*/);
    byte_4D33797 = 1;
  }
  v5 = sub_1C93D20(BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = obj;
  v14 = (__int64 *)(v5 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)obj, v15, v16, v17, v18, v19, v20);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  v27 = *v14;
  *((_QWORD *)_4__this + 9) = *v14;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)((char *)_4__this + 72), v27, v21, v22, v23, v24, v25, v26);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_26;
  _4__this = (void *)ServantAssetLoadManager__getVoiceId(
                       (ServantAssetLoadManager_o *)_4__this,
                       this->fields.chrId,
                       this->fields.limitCount,
                       0);
  overwriteSvtVoiceId = (int)_4__this;
  if ( this->fields.overwriteSvtVoiceId )
  {
    v28 = this->fields.__4__this;
    if ( !v28 )
      goto LABEL_26;
    overwriteSvtVoiceId = v28->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v30 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0);
  v31 = System_String__Concat_64425724((System_String_o *)StringLiteral_9572/*"NoblePhantasm_"*/, v30, 0);
  v32 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__,
    0);
  if ( !Instance )
    goto LABEL_26;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v31, v32, 1, 0);
  v33 = this->fields.__4__this;
  if ( !v33 )
    goto LABEL_26;
  _4__this = v33->fields.seqObject;
  if ( !_4__this )
    goto LABEL_26;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_26;
  v35 = _4__this;
  v34->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v35 )
    goto LABEL_26;
  v36 = v35[6];
  if ( v36 < 1 )
    return;
  v37 = 0;
  while ( 1 )
  {
    if ( v36 == v37 )
      sub_1C93D34(_4__this);
    v38 = *(_QWORD *)&v35[2 * v37 + 8];
    if ( !v38 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v38 + 64) && *(_BYTE *)(v38 + 69) )
      break;
    if ( v36 == ++v37 )
      return;
  }
  v39 = this->fields.__4__this;
  if ( !v39 )
LABEL_26:
    sub_1C93D2C(_4__this, v7);
  v39->fields.isNoDamageMotionInDamageNoble = 1;
}


void BattleSequenceManager___c__DisplayClass75_1___ctor(
        BattleSequenceManager___c__DisplayClass75_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSequenceManager___c__DisplayClass75_1___loadSequence_b__2(
        BattleSequenceManager___c__DisplayClass75_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass75_1_o *v2; // x19
  struct BattleSequenceManager___c__DisplayClass75_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  System_String_o *m_CachedPtr; // x20
  const MethodInfo *v6; // x3
  int v7; // w8
  BattleSequenceManager___c__DisplayClass75_1_o *v8; // x21
  unsigned int v9; // w23
  int v10; // w24
  UnityEngine_Behaviour_o *v11; // x22
  struct BattleSequenceManager___c__DisplayClass75_0_o *v12; // x8
  BattleSequenceManager_o *v13; // x21
  System_Action_o *_9__3; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  v2 = this;
  if ( (byte_4D33798 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
    sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D33798 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_20;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_20;
  m_CachedPtr = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  v7 = (int)this->fields.CS___8__locals1;
  v8 = this;
  if ( v7 >= 1 )
  {
    v9 = 0;
    v10 = 1;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1C93D34(this);
      v11 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v8->fields.__9__4 + (int)v9);
      if ( !v11 )
        break;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, Il2CppClass **))v11->klass[1].rgctx_data)(
                                                                v11,
                                                                v11->klass[1]._2.typeHierarchy);
      if ( (v10 & (unsigned int)this & 1) != 0 )
      {
        m_CachedPtr = (System_String_o *)v11[2].fields.m_CachedPtr;
        v10 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v11, 0, 0);
      }
      v7 = (int)v8->fields.CS___8__locals1;
      if ( (int)++v9 >= v7 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1C93D2C(this, method);
  }
LABEL_15:
  v12 = v2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_20;
  v13 = v12->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v15, v16, v17, v18, v19, v20);
  }
  if ( !v13 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v13, m_CachedPtr, _9__3, v6);
}


void BattleSequenceManager___c__DisplayClass75_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass75_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass75_1_o *v2; // x19
  struct BattleSequenceManager___c__DisplayClass75_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass75_0_o *v5; // x8
  struct BattleSequenceManager_o *v6; // x8
  BattleSequenceManager___c__DisplayClass75_1_o *v7; // x20
  struct BattleSequenceManager___c__DisplayClass75_0_o *v8; // x8
  struct BattleSequenceManager_o *v9; // x8
  UnityEngine_Object_o *v10; // x21
  Il2CppObject *ComponentInChildren_object; // x22
  struct BattleSequenceManager___c__DisplayClass75_0_o *v12; // x8
  struct BattleSequenceManager_o *v13; // x21
  struct BattleSequenceManager___c__DisplayClass75_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v17; // x22
  UIStandFigureM_o *MeshLocal; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct BattleSequenceManager___c__DisplayClass75_0_o *v25; // x8
  struct BattleSequenceManager_o *v26; // x8
  UnityEngine_Object_o *standFigure; // x21
  const MethodInfo *v28; // x3
  struct BattleSequenceManager___c__DisplayClass75_0_o *v29; // x8
  struct BattleSequenceManager_o *v30; // x9
  int32_t monitor; // w21
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int32_t monitor_high; // w9
  struct BattleSequenceManager___c__DisplayClass75_0_o *v35; // x8
  struct BattleSequenceManager_o *v36; // x10
  const MethodInfo *v37; // x4
  struct BattleSequenceManager___c__DisplayClass75_0_o *v38; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v41; // x1
  struct BattleSequenceManager___c__DisplayClass75_0_o *v42; // x8
  struct BattleSequenceManager___c__DisplayClass75_0_o *v43; // x8
  struct BattleSequenceManager_o *v44; // x20
  struct BattleSequenceManager_o *v45; // x8
  struct BattleSequenceManager___c__DisplayClass75_0_o *v46; // x8
  struct BattleSequenceManager_o *v47; // x8
  UnityEngine_Object_o *v48; // x20
  struct BattleSequenceManager___c__DisplayClass75_0_o *v49; // x8
  struct BattleSequenceManager_o *v50; // x8
  struct BattleSequenceManager___c__DisplayClass75_0_o *v51; // x8
  struct BattleSequenceManager_o *v52; // x8
  UIStandFigureM_o *v53; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct BattleSequenceManager___c__DisplayClass75_0_o *v64; // x8

  v2 = this;
  if ( (byte_4D33799 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_1C93AD4(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__);
    byte_4D33799 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_73;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v5 = v2->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_73;
  v6 = v5->fields.__4__this;
  if ( !v6 )
    goto LABEL_73;
  v7 = this;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)v6->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_73;
  v9 = v8->fields.__4__this;
  if ( !v9 )
    goto LABEL_73;
  v10 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)v9->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v7,
                                                            0,
                                                            0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = v2->fields.CS___8__locals1;
    if ( !v12 )
      goto LABEL_73;
    if ( !v7 )
      goto LABEL_73;
    v13 = v12->fields.__4__this;
    if ( !v13 )
      goto LABEL_73;
    v13->fields.faceType = (int32_t)v7[1].fields.obj;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    v14 = v2->fields.CS___8__locals1;
    if ( !v14 )
      goto LABEL_73;
    v15 = v14->fields.__4__this;
    if ( !v15 )
      goto LABEL_73;
    performance = v15->fields.performance;
    if ( !performance )
      goto LABEL_73;
    v17 = (StandFigureManager_o *)this;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)performance->fields.root_field;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
    if ( !v17 )
      goto LABEL_73;
    MeshLocal = StandFigureManager__CreateMeshLocal(v17, (UnityEngine_GameObject_o *)this, 0);
    v13->fields.standFigure = MeshLocal;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v13->fields.standFigure,
      (int32_t)MeshLocal,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = v2->fields.CS___8__locals1;
    if ( !v25 )
      goto LABEL_73;
    v26 = v25->fields.__4__this;
    if ( !v26 )
      goto LABEL_73;
    standFigure = (UnityEngine_Object_o *)v26->fields.standFigure;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
    v29 = v2->fields.CS___8__locals1;
    if ( !v29 )
      goto LABEL_73;
    v30 = v29->fields.__4__this;
    if ( !v30 )
      goto LABEL_73;
    monitor = (int32_t)v7[1].monitor;
    v30->fields.loadStandFigureId = monitor;
    battleActor = v29->fields.battleActor;
    if ( !battleActor )
      goto LABEL_73;
    battleSvtData = battleActor->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)battleSvtData->fields.svtdata;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)ServantEntity__GetTrueSvtId((ServantEntity_o *)this, 0);
    if ( monitor == (_DWORD)this || (monitor_high = HIDWORD(v7[1].monitor), monitor_high == -1) )
    {
      v43 = v2->fields.CS___8__locals1;
      if ( !v43 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)v43->fields.battleActor;
      if ( !this )
        goto LABEL_73;
      v44 = v43->fields.__4__this;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                (BattleActorControl_o *)this,
                                                                0);
      if ( !v44 )
        goto LABEL_73;
      v44->fields.loadStandFigureLimitCount = (int)this;
      v35 = v2->fields.CS___8__locals1;
      if ( !v35 )
        goto LABEL_73;
    }
    else
    {
      v35 = v2->fields.CS___8__locals1;
      if ( !v35 )
        goto LABEL_73;
      v36 = v35->fields.__4__this;
      if ( !v36 )
        goto LABEL_73;
      v36->fields.loadStandFigureLimitCount = monitor_high;
    }
    v45 = v35->fields.__4__this;
    if ( !v45 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)v45->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
    v46 = v2->fields.CS___8__locals1;
    if ( !v46 )
      goto LABEL_73;
    v47 = v46->fields.__4__this;
    if ( !v47 )
      goto LABEL_73;
    v48 = (UnityEngine_Object_o *)this;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)StandFigureManager__CreateStandFigureMName(
                                                              v47->fields.loadStandFigureId,
                                                              v47->fields.loadStandFigureLimitCount,
                                                              0);
    if ( !v48 )
      goto LABEL_73;
    UnityEngine_Object__set_name(v48, (System_String_o *)this, 0);
    v49 = v2->fields.CS___8__locals1;
    if ( !v49 )
      goto LABEL_73;
    v50 = v49->fields.__4__this;
    if ( !v50 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)v50->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0);
    v51 = v2->fields.CS___8__locals1;
    if ( !v51 )
      goto LABEL_73;
    v52 = v51->fields.__4__this;
    if ( !v52 )
      goto LABEL_73;
    v53 = v52->fields.standFigure;
    loadStandFigureId = v52->fields.loadStandFigureId;
    loadStandFigureLimitCount = v52->fields.loadStandFigureLimitCount;
    faceType = v52->fields.faceType;
    _9__4 = v2->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__,
        0);
      v2->fields.__9__4 = _9__4;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v58, v59, v60, v61, v62, v63);
    }
    if ( !v53 )
LABEL_73:
      sub_1C93D2C(this, method);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UIStandFigureM__SetCharacter_44728504(
                                                              v53,
                                                              loadStandFigureId,
                                                              loadStandFigureLimitCount,
                                                              faceType,
                                                              _9__4,
                                                              1,
                                                              0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_70:
      v64 = v2->fields.CS___8__locals1;
      if ( v64 )
      {
        this = (BattleSequenceManager___c__DisplayClass75_1_o *)v64->fields.__4__this;
        if ( this )
        {
          BattleSequenceManager__LoadEndStandFigure(
            (BattleSequenceManager_o *)this,
            v2->fields.obj,
            v64->fields.onComplete,
            v28);
          return;
        }
      }
      goto LABEL_73;
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                                              0,
                                                              0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v38 = v2->fields.CS___8__locals1;
      if ( !v38 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)v38->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v38->fields.onComplete;
      obj = v2->fields.obj;
      v41 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_object;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_70;
      v42 = v2->fields.CS___8__locals1;
      if ( !v42 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)v42->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v42->fields.onComplete;
      obj = v2->fields.obj;
      v41 = (WellFired_USFGOPlayCutInBase_o *)v10;
    }
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v41,
                                                              obj,
                                                              onComplete,
                                                              v37);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
  }
}


void BattleSequenceManager___c__DisplayClass75_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass75_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct BattleSequenceManager___c__DisplayClass75_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_1C93D2C(this, method);
  BattleSequenceManager__LoadEndStandFigure(
    CS___8__locals1->fields.__4__this,
    this->fields.obj,
    CS___8__locals1->fields.onComplete,
    v2);
}


void BattleSequenceManager___c__DisplayClass76_0___ctor(
        BattleSequenceManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleSequenceManager___c__DisplayClass76_0___FixSyncGroupRandomAudioPlayIndex_b__1(
        BattleSequenceManager___c__DisplayClass76_0_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return WellFired_USFGOSetAudioGroupIndexConditional__FixSyncAudioGroupIndex(x, this->fields.syncGroupName, 0);
}


void BattleSequenceManager___c__DisplayClass79_0___ctor(
        BattleSequenceManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSequenceManager___c__DisplayClass79_0___CreateCutInStandFigure_b__0(
        BattleSequenceManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  BattleSequenceManager__LoadEndStandFigure(this->fields.__4__this, this->fields.obj, this->fields.onComplete, v2);
}


void BattleSequenceManager_onGameObjectLoadComplete___ctor(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1ACBA7C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1ACBA5C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1ACBA14;
}


System_IAsyncResult_o *BattleSequenceManager_onGameObjectLoadComplete__BeginInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = obj;
  return sub_1C93A88(this, &v6, callback, object);
}


void BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void BattleSequenceManager_onGameObjectLoadComplete__Invoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    obj,
    this->fields.method);
}
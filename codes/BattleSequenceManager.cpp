void BattleSequenceManager___cctor(const MethodInfo *method)
{
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4E0780D & 1) == 0 )
  {
    sub_1CE6700(&BattleSequenceManager_TypeInfo);
    byte_4E0780D = 1;
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

  if ( (byte_4E0780C & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1CE6700(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_Object__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_Action__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_string__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
    sub_1CE6700(&StringLiteral_9445/*"N_{0}{1}"*/);
    byte_4E0780C = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.ReleaseSoundNames, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v10;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.DelayInvokeMethodList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = StringLiteral_9445/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9445/*"N_{0}{1}"*/;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.PosNodeFormatNP, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v24;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.npEndDeleteObjects,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1CE694C(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
  System_Collections_Generic_Dictionary_object__Color____ctor(
    v31,
    (const MethodInfo_35A5344 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
  this->fields.rendererBaseAddColorsDict = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__o *)v31;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.rendererBaseAddColorsDict,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v38;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.battleTargetList, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v45;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.createdObjects, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1CE694C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v52,
    (const MethodInfo_35AB1DC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v52;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_HashSet_T__o *)sub_1CE694C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v59,
    (const MethodInfo_37B3998 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v59;
  sub_1CE66A4(
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
    (const MethodInfo_3B5522C *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
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

  if ( (byte_4E077EC & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_25128/*"wait"*/);
    byte_4E077EC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v5 )
  {
    if ( !actor )
      sub_1CE6958(v5, v6);
    BattleActorControl__RevertDefaultAnimation(actor, 0);
    BattleActorControl__playAnimation_48403632(actor, (System_String_o *)StringLiteral_25128/*"wait"*/, 0, 0);
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
  sub_1CE66A4(
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
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Nullable_Color__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Nullable_Color__o v38; // [xsp+20h] [xbp-80h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E0780A & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&Method_System_Nullable_Color__get_HasValue__);
    sub_1CE6700(&Method_System_Nullable_Color__get_Value__);
    byte_4E0780A = 1;
  }
  entity = 0;
  memset(&v38, 0, sizeof(v38));
  performance = this->fields.performance;
  if ( !performance
    || (performance = (BattlePerformance_o *)BattlePerformance__EnumerateActorControls(performance, 0)) == 0 )
  {
    sub_1CE6958(performance, method);
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
    v8 = sub_1CBCA7C(performance, System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(BattlePerformance_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  if ( !v10 )
    sub_1CE6958(0, v9);
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
      v14 = sub_1CBCA7C(v10, System_Collections_IEnumerator_TypeInfo, 0);
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
      v18 = sub_1CBCA7C(v10, System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
    v21 = (BattleActorControl_o *)v19;
    if ( !v19 )
      sub_1CE6958(0, v20);
    v22 = *(BattleServantData_o **)(v19 + 536);
    if ( !v22 )
      sub_1CE6958(0, v20);
    if ( BattleServantData__TryGetDisplayTypeDetailEntity(v22, &entity, 0) )
    {
      if ( !entity )
        sub_1CE6958(0, v23);
      NpcServantDisplayTypeDetailEntity__get_AddColor(&v37, entity, 0);
      v38 = v37;
      if ( v37.fields.hasValue )
      {
        RendererArray = BattleActorControl__GetRendererArray(v21, 1, 0);
        v26 = RendererArray;
        if ( !RendererArray )
          sub_1CE6958(0, v25);
        max_length = RendererArray->max_length;
        if ( (int)max_length >= 1 )
        {
          v28 = 0;
          do
          {
            if ( v28 >= (unsigned int)max_length )
              sub_1CE6960(RendererArray);
            v29 = (Il2CppObject *)v26->m_Items[v28];
            rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
            Value = System_Nullable_Color___get_Value(
                      &v38,
                      (const MethodInfo_3A2AEF0 *)Method_System_Nullable_Color__get_Value__);
            if ( !rendererBaseAddColorsDict )
              sub_1CE6958(v31, v32);
            System_Collections_Generic_Dictionary_object__Color___set_Item(
              rendererBaseAddColorsDict,
              v29,
              Value,
              (const MethodInfo_35A5D00 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
            LODWORD(max_length) = v26->max_length;
            ++v28;
          }
          while ( (__int64)v28 < (int)max_length );
        }
      }
    }
  }
  v33 = *(_QWORD *)v10;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_41;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_41:
    v36 = sub_1CBCA7C(v10, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v10, *(_QWORD *)(v36 + 8));
}


bool BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_4E07802 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4E07802 = 1;
  }
  if ( System_String__Equals_65158876(bgmName, this->fields.BackupBgmName, 0) )
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
              (const MethodInfo_3220D84 *)Method_System_Linq_Enumerable_Contains_string___);
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.executingTdInfoCache, 0, v2, v3, v4, v5, v6, v7);
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
    sub_1CE6958(this, 0);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, const MethodInfo *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.methodPtr)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_47541560(this, obj, onComplete, v8);
}


bool BattleSequenceManager__CreateCutInStandFigure_47541560(
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

  if ( (byte_4E077D5 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__);
    sub_1CE6700(&BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
    byte_4E077D5 = 1;
  }
  v7 = sub_1CE694C(BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = obj;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)obj, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = onComplete;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)onComplete, v22, v23, v24, v25, v26, v27);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
  sub_1CE66A4(
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
          v44 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
          System_Action___ctor(
            v44,
            (Il2CppObject *)v7,
            Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__,
            0);
          if ( v40 )
            return UIStandFigureM__SetCharacter_45161052(
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
    sub_1CE6958(Instance, v9);
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
  System_Nullable_float__o v39; // x0
  System_Nullable_float__o v40; // x21
  const MethodInfo_3A2E600 *v41; // x3
  System_Nullable_float__o v42; // x1
  System_Nullable_float__o v43; // x2
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  __int64 v51; // x20
  __int64 v52; // x0
  __int64 v53; // x1
  struct BattlePerformance_o *v54; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v56; // x8
  struct BattlePerformance_o *v57; // x8
  System_String_o *v58; // x19
  BattleSequenceManager_c *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  __int64 v66; // x21
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  __int64 v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  __int64 v80; // x21
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  __int64 v87; // x1
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  __int64 v94; // x21
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  __int64 v101; // x1
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  __int64 v108; // x1
  System_Collections_Hashtable_o *v109; // x0
  __int64 v110; // x0
  int v111; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v112; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v114; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_long__o v116; // 0:x0.16

  if ( (byte_4E077ED & 1) == 0 )
  {
    sub_1CE6700(&BattleSequenceManager_TypeInfo);
    sub_1CE6700(&BgmManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
    sub_1CE6700(&Method_System_Nullable_long___ctor__);
    sub_1CE6700(&Method_System_Nullable_float___ctor__);
    sub_1CE6700(&object___TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&float_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1CE6700(&SoundManager_TypeInfo);
    sub_1CE6700(&StringLiteral_19968/*"from"*/);
    sub_1CE6700(&StringLiteral_9912/*"OnChangeBgmVolume"*/);
    sub_1CE6700(&StringLiteral_24462/*"time"*/);
    sub_1CE6700(&StringLiteral_22783/*"onupdate"*/);
    sub_1CE6700(&StringLiteral_24501/*"to"*/);
    sub_1CE6700(&iTween_TypeInfo);
    byte_4E077ED = 1;
  }
  changeBgm = 0;
  memset(&v114, 0, sizeof(v114));
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
    sub_1CE66A4(
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
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.BackupBgmName, (int32_t)v14, v15, v16, v17, v18, v19, v20);
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
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.BackupBgmName, (int32_t)v23, v24, v25, v26, v27, v28, v29);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v21 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0);
    v13 = 1;
  }
  v30 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1CE6958(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0);
  if ( ((v21 | System_String__op_Inequality(v30, BgmName, 0)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    performance = sub_1CE67A8(object___TypeInfo, 8);
    if ( !performance )
      goto LABEL_90;
    v51 = performance;
    v52 = StringLiteral_19968/*"from"*/;
    if ( StringLiteral_19968/*"from"*/ )
    {
      v52 = sub_1CE683C(StringLiteral_19968/*"from"*/, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
      if ( !v52 )
        goto LABEL_92;
      v53 = StringLiteral_19968/*"from"*/;
    }
    else
    {
      v53 = 0;
    }
    if ( !*(_DWORD *)(v51 + 24) )
      goto LABEL_91;
    *(_QWORD *)(v51 + 32) = v53;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v51 + 32), v53, v45, v46, v47, v48, v49, v50);
    v59 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v59 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v113.fields._list = v59->static_fields->NoblePhantasmBgmVolumeRate;
    v52 = j_il2cpp_value_box_0(float_TypeInfo, &v113);
    v66 = v52;
    if ( !v52 || (v52 = sub_1CE683C(v52, *(_QWORD *)(*(_QWORD *)v51 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v51 + 24) <= 1u )
        goto LABEL_91;
      *(_QWORD *)(v51 + 40) = v66;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v51 + 40), v66, v60, v61, v62, v63, v64, v65);
      v52 = StringLiteral_24501/*"to"*/;
      if ( StringLiteral_24501/*"to"*/ )
      {
        v52 = sub_1CE683C(StringLiteral_24501/*"to"*/, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
        if ( !v52 )
          goto LABEL_92;
        v73 = StringLiteral_24501/*"to"*/;
      }
      else
      {
        v73 = 0;
      }
      if ( *(_DWORD *)(v51 + 24) <= 2u )
        goto LABEL_91;
      *(_QWORD *)(v51 + 48) = v73;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v51 + 48), v73, v67, v68, v69, v70, v71, v72);
      *(_DWORD *)&v112.fields.hasValue = 1;
      v52 = j_il2cpp_value_box_0(int_TypeInfo, &v112);
      v80 = v52;
      if ( !v52 || (v52 = sub_1CE683C(v52, *(_QWORD *)(*(_QWORD *)v51 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v51 + 24) <= 3u )
          goto LABEL_91;
        *(_QWORD *)(v51 + 56) = v80;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v51 + 56), v80, v74, v75, v76, v77, v78, v79);
        v52 = StringLiteral_24462/*"time"*/;
        if ( StringLiteral_24462/*"time"*/ )
        {
          v52 = sub_1CE683C(StringLiteral_24462/*"time"*/, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
          if ( !v52 )
            goto LABEL_92;
          v87 = StringLiteral_24462/*"time"*/;
        }
        else
        {
          v87 = 0;
        }
        if ( *(_DWORD *)(v51 + 24) <= 4u )
          goto LABEL_91;
        *(_QWORD *)(v51 + 64) = v87;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v51 + 64), v87, v81, v82, v83, v84, v85, v86);
        v111 = 1056964608;
        v52 = j_il2cpp_value_box_0(float_TypeInfo, &v111);
        v94 = v52;
        if ( !v52 || (v52 = sub_1CE683C(v52, *(_QWORD *)(*(_QWORD *)v51 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v51 + 24) <= 5u )
            goto LABEL_91;
          *(_QWORD *)(v51 + 72) = v94;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v51 + 72), v94, v88, v89, v90, v91, v92, v93);
          v52 = StringLiteral_22783/*"onupdate"*/;
          if ( StringLiteral_22783/*"onupdate"*/ )
          {
            v52 = sub_1CE683C(StringLiteral_22783/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
            if ( !v52 )
              goto LABEL_92;
            v101 = StringLiteral_22783/*"onupdate"*/;
          }
          else
          {
            v101 = 0;
          }
          if ( *(_DWORD *)(v51 + 24) <= 6u )
            goto LABEL_91;
          *(_QWORD *)(v51 + 80) = v101;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v51 + 80), v101, v95, v96, v97, v98, v99, v100);
          v52 = StringLiteral_9912/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9912/*"OnChangeBgmVolume"*/ )
          {
            v108 = 0;
LABEL_84:
            if ( *(_DWORD *)(v51 + 24) > 7u )
            {
              *(_QWORD *)(v51 + 88) = v108;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v51 + 88), v108, v102, v103, v104, v105, v106, v107);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v109 = iTween__Hash((System_Object_array *)v51, 0);
              iTween__ValueTo(gameObject, v109, 0);
              return;
            }
LABEL_91:
            sub_1CE6960(v52);
          }
          v52 = sub_1CE683C(StringLiteral_9912/*"OnChangeBgmVolume"*/, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
          if ( v52 )
          {
            v108 = StringLiteral_9912/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v110 = sub_1CE697C(v52);
    sub_1CE6828(v110, 0);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v113,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v114 = v113;
          while ( 1 )
          {
            v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v114,
                    (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v34 )
              break;
            current = v114.fields._current;
            if ( !v114.fields._current )
              sub_1CE6958(v34, v35);
            v37 = (float)(__int64)v114.fields._current[2].klass + -800.0;
            if ( v37 == INFINITY )
              v38 = 0x80000000;
            else
              v38 = (int)v37;
            v112 = 0;
            v39 = (System_Nullable_float__o)&v112;
            System_Nullable_float____ctor(v39, 0.5, (const MethodInfo_3A30574 *)Method_System_Nullable_float___ctor__);
            v40 = v112;
            v116.fields.value = v38 & (unsigned int)~(v38 >> 31);
            *(_OWORD *)&v113.fields._list = 0u;
            *(_QWORD *)&v116.fields.hasValue = &v113;
            System_Nullable_long____ctor(v116, Method_System_Nullable_long___ctor__, v41);
            v42 = 0;
            v43 = v40;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v42, v43, *(System_Nullable_long__o *)&v113.fields._list, 0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v114,
            (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_42338972(v33, 0, 0);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v13 )
  {
    v54 = this->fields.performance;
    if ( !v54 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v54->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    performance = UnityEngine_Object__op_Inequality(logic, 0, 0);
    if ( (performance & 1) != 0 )
    {
      v56 = this->fields.performance;
      if ( v56 )
      {
        performance = (__int64)v56->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0, 0);
          v57 = this->fields.performance;
          if ( v57 )
          {
            performance = (__int64)v57->fields.logic;
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
  v58 = *p_BackupBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v58, 0);
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

  if ( (byte_4E07804 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
    sub_1CE6700(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__);
    sub_1CE6700(&BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
    byte_4E07804 = 1;
  }
  v7 = sub_1CE694C(BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1CE6958(v8, v9);
  *(_QWORD *)(v7 + 16) = checkBgmName;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)checkBgmName, v10, v11, v12, v13, v14, v15);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0;
  v17 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0);
  v18 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__52502356(
           (System_Collections_Generic_IEnumerable_TSource__o *)v17,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_3211F54 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
    sub_1CE6958(0, method);
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
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__52808288; // x0
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

  if ( (byte_4E077D4 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___);
    sub_1CE6700(&System_Comparison_USFGOPlayAudioEvent__TypeInfo);
    sub_1CE6700(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__);
    sub_1CE6700(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1CE6700(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__);
    sub_1CE6700(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__);
    sub_1CE6700(&BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
    sub_1CE6700(&BattleSequenceManager___c_TypeInfo);
    byte_4E077D4 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v6 = sub_1CE694C(BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_27;
  *(_QWORD *)(v6 + 16) = syncGroupName;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)syncGroupName, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__52808288 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__52808288(
                                                                                           sequence,
                                                                                           (const MethodInfo_325CA60 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v15 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v15,
    ComponentsInChildren_object__52808288,
    (const MethodInfo_3906174 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
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
    _9__76_0 = (System_Comparison_T__o *)sub_1CE694C(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__76_0,
      v18,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__,
      0);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__76_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__76_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__76_0,
      (int32_t)_9__76_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Collections_Generic_List_object___Sort_59800108(
    v15,
    _9__76_0,
    (const MethodInfo_3907A2C *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v26 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v6,
    Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v15,
          (System_Func_T__bool__o *)v26,
          (const MethodInfo_31ED4DC *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v27 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__52808288 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__52808288(
                                                                                             sequence,
                                                                                             (const MethodInfo_325CA60 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v27 )
    {
      System_Collections_Generic_List_object___AddRange(
        v27,
        ComponentsInChildren_object__52808288,
        (const MethodInfo_3906174 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v28 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__52808288(
                                                             sequence,
                                                             (const MethodInfo_325CA60 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v27,
        v28,
        (const MethodInfo_3906174 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
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
        _9__76_2 = (System_Comparison_T__o *)sub_1CE694C(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__76_2,
          v31,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__,
          0);
        v32 = BattleSequenceManager___c_TypeInfo->static_fields;
        v32->__9__76_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__76_2;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v32->__9__76_2, (int32_t)_9__76_2, v33, v34, v35, v36, v37, v38);
      }
      System_Collections_Generic_List_object___Sort_59800108(
        v27,
        _9__76_2,
        (const MethodInfo_3907A2C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        v27,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v40,
                (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v40.fields._current )
          sub_1CE6958(0, v39);
      }
      while ( (((__int64 (*)(void))v40.fields._current->klass->vtable[16].methodPtr)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v40,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1CE6958(ComponentsInChildren_object__52808288, v8);
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

  if ( (byte_4E077D8 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E077D8 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1CE6958(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0);
}


UnityEngine_Color_o BattleSequenceManager__GetRendererBaseAddColor(
        BattleSequenceManager_o *this,
        UnityEngine_SkinnedMeshRenderer_o *inputRenderer,
        const MethodInfo *method)
{
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E07809 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
    byte_4E07809 = 1;
  }
  v5.fields.r = 0.0;
  v5.fields.g = 0.0;
  v5.fields.b = 0.0;
  v5.fields.a = 0.0;
  return BasicHelper__GetValue_object__Color_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.rendererBaseAddColorsDict,
           (Il2CppObject *)inputRenderer,
           v5,
           (const MethodInfo_31F21BC *)Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
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

  if ( (byte_4E077F7 & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1CE6700(&StringLiteral_6086/*"Enemy"*/);
    sub_1CE6700(&StringLiteral_10790/*"Player"*/);
    byte_4E077F7 = 1;
  }
  if ( isEnemy )
    v8 = &StringLiteral_6086/*"Enemy"*/;
  else
    v8 = &StringLiteral_10790/*"Player"*/;
  v9 = (Il2CppObject *)*v8;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v15 = pos;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v12 = System_String__Format_65164136(format, v9, v11, 0);
  if ( !Instance )
    sub_1CE6958(v12, v13);
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

  if ( (byte_4E077F8 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
    sub_1CE6700(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass124_0__GetTargetPosIndexTransform_b__0__);
    sub_1CE6700(&BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
    byte_4E077F8 = 1;
  }
  v5 = sub_1CE694C(BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_DWORD *)(v5 + 16) = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v9 = (System_Predicate_object__o *)sub_1CE694C(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
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
                                        (const MethodInfo_39065D0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v6 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, v11);
    if ( v6 )
      return UnityEngine_GameObject__get_transform(v6, 0);
LABEL_9:
    sub_1CE6958(v6, v7);
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)fxdVoice, 0, (int32_t)method, v3, v4, v5, v6, v7);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)fxdVoice, (int32_t)fixedVoice, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_4E07803 & 1) == 0 )
  {
    sub_1CE6700(&BattleSequenceManager_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E07803 = 1;
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
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1CE6958(ExecutingTdInfo, v7);
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

  if ( (byte_4E07805 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4E07805 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  monitor = (UnityEngine_Object_o *)v2[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  v2 = (UnityEngine_GameObject_o *)v2[3].monitor;
  if ( !v2 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1CE6958(v2, v3);
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

  if ( (byte_4E07807 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E07807 = 1;
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

  if ( (byte_4E077D6 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Add__);
    sub_1CE6700(&SoundManager_TypeInfo);
    byte_4E077D6 = 1;
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
    sub_1CE6958(IsNullOrEmpty, v8);
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
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v18[4] = (Il2CppClass *)bgmName;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)bgmName, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4E077D7 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E077D7 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0, 0) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_1CE6958(0, v8);
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
  float x; // s8
  float y; // s9
  float z; // s10
  float v23; // s11
  float v24; // s12
  float v25; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E077F3 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_19219/*"en_Parts_Up01"*/);
    sub_1CE6700(&StringLiteral_19218/*"en_Parts_Under01"*/);
    byte_4E077F3 = 1;
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
                                                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                        (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                        v15 = &StringLiteral_19219/*"en_Parts_Up01"*/;
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
                        v15 = &StringLiteral_19218/*"en_Parts_Under01"*/;
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
                            x = position.fields.x;
                            y = position.fields.y;
                            z = position.fields.z;
                            monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    TransformChild,
                                                                    0);
                            if ( monitor )
                            {
                              v28 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)monitor, 0);
                              v23 = v28.fields.x;
                              v24 = v28.fields.y;
                              v25 = v28.fields.z;
                              monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Component_object,
                                                                      0);
                              if ( monitor )
                              {
                                v29.fields.z = z - v25;
                                v29.fields.y = y - v24;
                                v29.fields.x = x - v23;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)monitor, v29, 0);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1CE6958(monitor, v7);
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
    sub_1CE6958(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (GrandQuestFolderBoardItem_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(intptr_t, intptr_t))BgChangedCallback->fields.invoke_impl)(
      BgChangedCallback->fields.method_code,
      BgChangedCallback->fields.method);
    p_BgChangedCallback->klass = 0;
    sub_1CE66A4(p_BgChangedCallback, 0, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4E077E8 & 1) == 0 )
  {
    sub_1CE6700(&BgmManager_TypeInfo);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    byte_4E077E8 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v6 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0);
    if ( !v6 )
      sub_1CE6958(0, v7);
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
      v12 = sub_1CBCA7C(v6, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))v12)(
            v9,
            *(_QWORD *)(v12 + 8));
    if ( !v14 )
      sub_1CE6958(0, v13);
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
        v18 = sub_1CBCA7C(v14, System_Collections_IEnumerator_TypeInfo, 0);
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
        v22 = sub_1CBCA7C(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
      if ( !v23 )
        sub_1CE6958(0, v24);
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
      v30 = sub_1CBCA7C(v14, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  }
}


void BattleSequenceManager__OnEndNoblePhantasm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x0

  if ( (byte_4E07808 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
    byte_4E07808 = 1;
  }
  rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
  if ( !rendererBaseAddColorsDict )
    sub_1CE6958(0, method);
  System_Collections_Generic_Dictionary_object__Color___Clear(
    rendererBaseAddColorsDict,
    (const MethodInfo_35A5EC0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
}


void BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v4, 0);
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

  if ( (byte_4E077EA & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&CommonUI_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Object__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Object__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1CE6700(&StringLiteral_9589/*"NoblePhantasm/CutIns"*/);
    sub_1CE6700(&StringLiteral_3126/*"Battle2D"*/);
    byte_4E077EA = 1;
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
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_106;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_34E92A8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
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
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v131 = v129;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v131,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v131.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72918540((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v131,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
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
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v130 = v129;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v130,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v19 = v130.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72918540((UnityEngine_Object_o *)v19, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v130,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    UnityEngine_Object__Destroy_72918540(v25, 0);
    *p_seqObject = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.seqObject, 0, v26, v27, v28, v29, v30, v31);
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
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)((char *)v49 + v38), (int32_t)v50, v42, v43, v44, v45, v46, v47);
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
                                                   (const MethodInfo_38BF888 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v54 )
            goto LABEL_106;
          v55 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v54, (unsigned __int8)transform & 1, 0);
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)v54,
                                                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
      sub_1CE6960(transform);
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
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)((char *)v70 + v59), (int32_t)v71, v63, v64, v65, v66, v67, v68);
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
                                                   (const MethodInfo_38BF888 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v76 )
            goto LABEL_106;
          v77 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v76, (unsigned __int8)transform & 1, 0);
          v78 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v76,
                                          (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.standFigure, 0, v95, v96, v97, v98, v99, v100);
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
  v103 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3126/*"Battle2D"*/, 0);
  UnityEngine_Camera__set_cullingMask(v101, (1 << v103) | cullingMask, 0);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_106;
  v105 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0);
  v106 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3126/*"Battle2D"*/, 0);
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
                                               (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
      v5 = (const MethodInfo *)transform;
    }
    if ( *p_OnCompleteActorCallback )
    {
      ((void (__fastcall *)(intptr_t, const MethodInfo *, intptr_t))(*p_OnCompleteActorCallback)->fields.invoke_impl)(
        (*p_OnCompleteActorCallback)->fields.method_code,
        v5,
        (*p_OnCompleteActorCallback)->fields.method);
      *p_OnCompleteActorCallback = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_OnCompleteActorCallback, 0, v110, v111, v112, v113, v114, v115);
      goto LABEL_176;
    }
LABEL_106:
    sub_1CE6958(transform, v5);
  }
LABEL_176:
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
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
    UnityEngine_Object__Destroy_72918540(v119, 0);
    v117->klass = 0;
    sub_1CE66A4(v117, 0, v120, v121, v122, v123, v124, v125);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9589/*"NoblePhantasm/CutIns"*/, 0);
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
  const MethodInfo_3A2E600 *v33; // x3
  System_Nullable_long__o v34; // x0
  BgmPlayArgs_o *v35; // x21
  __int64 v36; // x0
  __int64 v37; // x1
  System_Nullable_float__o v38; // x1
  System_Nullable_float__o v39; // x2
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  System_Nullable_long__o v44; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4E077EF & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Find_BgmPlayArgs___);
    sub_1CE6700(&BgmManager_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1CE6700(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&Method_System_Nullable_long___ctor__);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__);
    sub_1CE6700(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
    byte_4E077EF = 1;
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
             (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v7 = v5,
            (v5 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                           this->fields.backupBgmPlayArgsGroup,
                                           0)) == 0) )
      {
        sub_1CE6958(v5, v6);
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
        v12 = sub_1CBCA7C(v5, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
      if ( !v14 )
        sub_1CE6958(0, v13);
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
          v18 = sub_1CBCA7C(v14, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
          break;
        v19 = sub_1CE694C(BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
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
          v23 = sub_1CBCA7C(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v14, *(_QWORD *)(v23 + 8));
        if ( !v19 )
          sub_1CE6958(v24, v24);
        *(_QWORD *)(v19 + 16) = v24;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v19 + 16), v24, v25, v26, v27, v28, v29, v30);
        v31 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v31,
          (Il2CppObject *)v19,
          Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0);
        object = BasicHelper__Find_object_(
                   v7,
                   (System_Func_T__bool__o *)v31,
                   (const MethodInfo_31EE0A8 *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v34.fields.value = (int64_t)object[2].klass;
        else
          v34.fields.value = 0;
        v35 = *(BgmPlayArgs_o **)(v19 + 16);
        *(_QWORD *)&v44.fields.hasValue = 0;
        v44.fields.value = 0;
        *(_QWORD *)&v34.fields.hasValue = &v44;
        System_Nullable_long____ctor(v34, Method_System_Nullable_long___ctor__, v33);
        if ( !v35 )
          sub_1CE6958(v36, v37);
        v38 = 0;
        v39 = 0;
        BgmPlayArgs__Update(v35, v38, v39, v44, 0);
      }
      v40 = *(_QWORD *)v14;
      v41 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_39;
        }
        v43 = v40 + 16LL * *v42 + 312;
      }
      else
      {
LABEL_39:
        v43 = sub_1CBCA7C(v14, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v43)(v14, *(_QWORD *)(v43 + 8));
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

  if ( (byte_4E077EB & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E077EB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v4 )
  {
    if ( !actor )
      sub_1CE6958(v4, v5);
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

  if ( (byte_4E077F0 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_BattleSequenceManager__ReleaseCpk_b__115_0__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Action__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Add__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1CE6700(&StringLiteral_9592/*"NoblePhantasm_"*/);
    byte_4E077F0 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v32 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v8 = System_Int32__ToString((int32_t)&v32, 0);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_65122828((System_String_o *)StringLiteral_9592/*"NoblePhantasm_"*/, v8, 0);
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
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v18;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v21 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__115_0__, 0);
  if ( !DelayInvokeMethodList
    || (v28 = DelayInvokeMethodList->fields._items,
        v29 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v28) )
  {
LABEL_17:
    sub_1CE6958(Instance, v4);
  }
  v30 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v21,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    DelayInvokeMethodList->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)v21;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v21, v22, v23, v24, v25, v26, v27);
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.fixedVoice, 0, v2, v3, v4, v5, v6, v7);
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.intactBgmList, 0, v2, v3, v4, v5, v6, v7);
}


ExecutingTdInfo_o *BattleSequenceManager__SafeGetExecutingTdInfo(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  __int64 v3; // x1

  if ( (byte_4E0780B & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4E0780B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !v2 )
      goto LABEL_11;
    if ( v2[23].monitor )
    {
      v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( v2 )
        return (ExecutingTdInfo_o *)v2[23].monitor;
LABEL_11:
      sub_1CE6958(v2, v3);
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

  if ( (byte_4E077EE & 1) == 0 )
  {
    sub_1CE6700(&BgmManager_TypeInfo);
    byte_4E077EE = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.backupBgmPlayArgsGroup, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4E077E2 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_GameObject_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&ServantAssetLoadManager_TypeInfo);
    sub_1CE6700(&StringLiteral_3116/*"Battle/Prefab/"*/);
    byte_4E077E2 = 1;
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
                                         (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v12 = System_String__Concat_65122828((System_String_o *)StringLiteral_3116/*"Battle/Prefab/"*/, name, 0);
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
                                         (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  unsigned int v24; // s9
  unsigned int v25; // s0
  float v26; // s1
  struct BattlePerformance_o *v27; // x8
  struct BattleData_o *data; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E077F4 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1CE6700(&StringLiteral_9443/*"N_Enemy2"*/);
    sub_1CE6700(&StringLiteral_9444/*"N_Player2"*/);
    byte_4E077F4 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                                        (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v9 = actor;
  v10 = (System_String_o **)((LOBYTE(actor[23].monitor) != 0) != (LOBYTE(Component_object[35].klass) != 0)
                           ? &StringLiteral_9443/*"N_Enemy2"*/
                           : &StringLiteral_9444/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v11 = 368;
  if ( LOBYTE(actor[23].monitor) )
    v11 = 376;
  v12 = *(__int64 *)((char *)&performance->klass + v11);
  if ( !v12 )
LABEL_55:
    sub_1CE6958(actor, method);
  if ( (int)*(_QWORD *)(v12 + 24) >= 1 )
  {
    v13 = *v10;
    v14 = 0;
    v15 = *(_QWORD *)(v12 + 24);
    do
    {
      if ( v14 >= v15 )
        sub_1CE6960(actor);
      v16 = *(UnityEngine_GameObject_o **)(v12 + 32 + 8 * v14);
      v17 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, v17, 0) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
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
        if ( BYTE2(actor[31].fields.m_CachedPtr) && LOBYTE(v9[23].monitor) )
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
            v30 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)actor, 0);
            y = v30.fields.y;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)PartsActor, 0);
            v24 = (unsigned int)UnityEngine_Transform__get_position(v18, 0);
            v31 = UnityEngine_Transform__get_position(v18, 0);
            if ( !transform )
              goto LABEL_55;
            v25 = v24;
            v26 = y;
            UnityEngine_Transform__set_position(transform, v31, 0);
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
          v27 = this->fields.performance;
          if ( !v27 )
            goto LABEL_55;
          data = v27->fields.data;
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
    sub_1CE6958(0, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1CE66A4(
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

  if ( (byte_4E07800 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4E07800 = 1;
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
                         (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0);
        return;
      }
    }
LABEL_18:
    sub_1CE6958(battleTargetList, isReset);
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
  sub_1CE66A4(
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

  if ( (byte_4E07801 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E07801 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0 )
  {
    sub_1CE6958(Instance, v6);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1CE66A4(
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
  if ( (byte_4E077F2 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E077F2 = 1;
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
    sub_1CE6958(this, targetActor);
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
            if ( !byte_4DFE0A9 )
            {
              this = (BattleSequenceManager_o *)sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
              byte_4DFE0A9 = 1;
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

  if ( (byte_4E077DA & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4E077DA = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v7),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0) )
  {
LABEL_10:
    sub_1CE6958(actor, isStart);
  }
  v8 = 0;
  while ( v8 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v8,
                                          (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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

  if ( (byte_4E077DB & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_16774/*"_y0"*/);
    byte_4E077DB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0, 0);
  if ( v6 )
  {
    if ( !fbx )
      sub_1CE6958(v6, v7);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16774/*"_y0"*/, 0);
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

  if ( (byte_4E077D9 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_2148/*"Actors/Actor"*/);
    byte_4E077D9 = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1CE6958(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v9 = 0;
  do
  {
    v10 = v9 + 1;
    v22 = v9 + 1;
    v11 = System_Int32__ToString((int32_t)&v22, 0);
    v12 = (BattleSequenceManager_o *)System_String__Concat_65122828((System_String_o *)StringLiteral_2148/*"Actors/Actor"*/, v11, 0);
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
          sub_1CE6960(seqObject);
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
    v18 = (BattleSequenceManager_o *)System_String__Concat_65122828((System_String_o *)StringLiteral_2148/*"Actors/Actor"*/, v17, 0);
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

  if ( (byte_4E077F1 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    sub_1CE6700(&BattleSequenceManager_BattleTarget_TypeInfo);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_BattleActionData_BuffData___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_BattleActionData_DamageData___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1CE6700(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_1CE6700(&System_Func_BattleActionData_HealData__bool__TypeInfo);
    sub_1CE6700(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1CE6700(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_0__);
    sub_1CE6700(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_1__);
    sub_1CE6700(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_2__);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__3__);
    sub_1CE6700(&BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
    sub_1CE6700(&BattleSequenceManager___c_TypeInfo);
    byte_4E077F1 = 1;
  }
  memset(&i, 0, sizeof(i));
  v3 = sub_1CE694C(BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  this->fields.SingleTarget = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.SingleTarget, 0, v4, v5, v6, v7, v8, v9);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_98;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (BattleActionData_o *)Component_object[31].monitor;
      v14 = (System_Collections_Generic_HashSet_int__o *)sub_1CE694C(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v14,
        (const MethodInfo_37AD2C0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v3 )
      {
        *(_QWORD *)(v3 + 16) = v14;
        v21 = (GrandQuestFolderBoardItem_o *)(v3 + 16);
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v14, v15, v16, v17, v18, v19, v20);
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
            _9__117_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_BattleActionData_DamageData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__117_0,
              v25,
              Method_BattleSequenceManager___c__SetupTargetInfo_b__117_0__,
              0);
            static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
            static_fields->__9__117_0 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__117_0;
            sub_1CE66A4(
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
                  (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
          actor = System_Linq_Enumerable__ToArray_object_(
                    v33,
                    (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_DamageData___);
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
                                    (const MethodInfo_37AE4C4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v34 = *((_DWORD *)v35 + 6);
                if ( (int)++v36 >= v34 )
                  goto LABEL_25;
              }
LABEL_99:
              sub_1CE6960(actor);
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
              _9__117_1 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_BattleActionData_BuffData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__117_1,
                v42,
                Method_BattleSequenceManager___c__SetupTargetInfo_b__117_1__,
                0);
              v43 = BattleSequenceManager___c_TypeInfo->static_fields;
              v43->__9__117_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__117_1;
              sub_1CE66A4(
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
                    (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
            actor = System_Linq_Enumerable__ToArray_object_(
                      v50,
                      (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_BuffData___);
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
                                      (const MethodInfo_37AE4C4 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
                _9__117_2 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_BattleActionData_HealData__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__117_2,
                  v59,
                  Method_BattleSequenceManager___c__SetupTargetInfo_b__117_2__,
                  0);
                v60 = BattleSequenceManager___c_TypeInfo->static_fields;
                v60->__9__117_2 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__117_2;
                sub_1CE66A4(
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
                      (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
              actor = System_Linq_Enumerable__ToArray_object_(
                        v67,
                        (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
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
                                        (const MethodInfo_37AE4C4 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
                  v73 = (System_Action_object__o *)sub_1CE694C(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v73,
                    (Il2CppObject *)v3,
                    Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__3__,
                    0);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v73,
                    (const MethodInfo_39069A8 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                klass_low = LOBYTE(Component_object[35].klass);
                v75 = (System_Collections_Generic_HashSet_int__o *)sub_1CE694C(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v75,
                  (const MethodInfo_37AD2C0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v21->klass;
                if ( v21->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v134,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_37ADE48 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v133 = 0;
                  i = v134;
                  v76 = 0;
                  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &i,
                            (const MethodInfo_367C970 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                  {
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1CE6958(0, v77);
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
                        sub_1CE6958(v81, v82);
                      v83 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)ServantGameObject,
                              (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      if ( !v83 )
                        sub_1CE6958(0, v84);
                      if ( (klass_low != 0) != (LOBYTE(v83[35].klass) != 0) )
                      {
                        ++v76;
                        if ( !v75 )
                          sub_1CE6958(v83, v84);
                        System_Collections_Generic_HashSet_int___Add(
                          v75,
                          current,
                          (const MethodInfo_37AE4C4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                      }
                      else
                      {
                        ++v133;
                      }
                    }
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &i,
                    (const MethodInfo_367C96C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v133 && v76 == 1 )
                  {
                    v21->klass = (GrandQuestFolderBoardItem_c *)v75;
                    sub_1CE66A4(v21, (int32_t)v75, v85, v86, v87, v88, v89, v90);
                  }
                  actor = v21->klass;
                  if ( v21->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v134,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_37ADE48 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v91 = -1;
                      for ( i = v134;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &i,
                              (const MethodInfo_367C970 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v91 = (int32_t)i.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &i,
                        (const MethodInfo_367C96C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_98;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v91, 0);
                      if ( !actor )
                        goto LABEL_98;
                      v92 = (struct UnityEngine_GameObject_o *)actor;
                      v93 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v92;
                      sub_1CE66A4(
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
                        (const MethodInfo_37ADE48 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      i = v134;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &i,
                                (const MethodInfo_367C970 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v102 = this->fields.performance;
                        if ( !v102 )
                          sub_1CE6958(0, v101);
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
                            sub_1CE6958(v105, v106);
                          v107 = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v104,
                                   (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v108 = sub_1CE694C(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor((BattleSequenceManager_BattleTarget_o *)v108, v109);
                          v111 = this->fields.performance;
                          if ( !v111 )
                            sub_1CE6958(0, v110);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v111, v103, 0);
                          if ( !v108 )
                            sub_1CE6958(ServantPosIndex, v113);
                          v120 = ServantPosIndex;
                          *(_QWORD *)(v108 + 24) = v107;
                          sub_1CE66A4(
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
                            sub_1CE6958(0, v121);
                          items = battleTargetList->fields._items;
                          v130 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1CE6958(battleTargetList, v121);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= LODWORD(items->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v108,
                              *(const MethodInfo_3905F68 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v132 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v132[4] = (Il2CppClass *)v108;
                            sub_1CE66A4(
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
                        (const MethodInfo_367C96C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
    sub_1CE6958(actor, v10);
  }
}


void BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1CE6958(0, method);
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
  if ( (byte_4E077E7 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E077E7 = 1;
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
    sub_1CE6958(this, isFullScreen);
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
  if ( (byte_4E077F6 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_Object__Add__);
    this = (BattleSequenceManager_o *)sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E077F6 = 1;
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
                         (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
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
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v28;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v28, v19, v20, v21, v22, v23, v24);
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
                                          (const MethodInfo_31F1840 *)Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
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
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = v39 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v42 + 32) = tlcont;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v42 + 32), (int32_t)tlcont, v33, v34, v35, v36, v37, v38);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        return;
      }
LABEL_43:
      sub_1CE6958(this, tlcont);
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

  if ( (byte_4E07806 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
    byte_4E07806 = 1;
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
      sub_1CE6958(BattleActor, v6);
    }
    nowAction = performance->fields.nowAction;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      BattleActor,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v38 = v37;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v38,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v10 )
        break;
      if ( !v38.fields._current )
        sub_1CE6958(v10, v11);
      monitor = v38.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0, 0);
      if ( !v13 )
      {
        if ( !monitor )
          sub_1CE6958(v13, v14);
        v15 = (UnityEngine_Object_o *)*((_QWORD *)monitor + 5);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v15, 0, 0) )
        {
          v17 = (UnityEngine_GameObject_o *)*((_QWORD *)monitor + 5);
          if ( !v17 )
            sub_1CE6958(0, v16);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v17,
                                                                    (const MethodInfo_325C798 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1CE6958(IsNullOrEmpty, v20);
            v21 = Components_object[1].monitor;
            if ( (int)v21 >= 1 )
            {
              v22 = 0;
              do
              {
                if ( v22 >= (unsigned int)v21 )
                  sub_1CE6960(IsNullOrEmpty);
                v23 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v22);
                v24 = sub_1CE694C(NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
                NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo___ctor(
                  (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v24,
                  0);
                if ( !v24 )
                  sub_1CE6958(v25, v26);
                *(_QWORD *)(v24 + 16) = monitor;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v24 + 16), (int32_t)monitor, v27, v28, v29, v30, v31, v32);
                if ( !nowAction )
                  sub_1CE6958(v33, v34);
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
                    sub_1CE6958(TargetOfTreasureDevice, v36);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
                    v23,
                    (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v24,
                    0);
                }
                else
                {
                  if ( !v23 )
                    sub_1CE6958(TargetOfTreasureDevice, v36);
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
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
    sub_1CE6958(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1CE66A4(
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

  if ( (byte_4E077D2 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    byte_4E077D2 = 1;
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
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v10,
                (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v10.fields._current )
          (*(void (__fastcall **)(_QWORD, _QWORD))((char *)&v10.fields._current->klass + (unsigned __int64)&off_18))(
            *(Il2CppClass **)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_40),
            *(Il2CppClass **)((char *)&v10.fields._current->klass + (unsigned __int64)&qword_28));
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v10,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v7 = this->fields.DelayInvokeMethodList;
      if ( !v7 )
LABEL_14:
        sub_1CE6958(DelayInvokeMethodList, v4);
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

  if ( (byte_4E077E9 & 1) == 0 )
  {
    sub_1CE6700(&BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
    byte_4E077E9 = 1;
  }
  v3 = sub_1CE694C(BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4E0780E & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4E0780E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v11.fields._current, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1CE6958(0, v6);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v7 = this->fields.ReleaseSoundNames;
  if ( !v7 )
LABEL_14:
    sub_1CE6958(ReleaseSoundNames, method);
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
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

  if ( (byte_4E077DD & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_16258/*"_"*/);
    byte_4E077DD = 1;
  }
  FlagRequestNumber = System_String__Concat_65122828((System_String_o *)StringLiteral_16258/*"_"*/, labelName, 0);
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
        BattleData__AddServantVoicePlayed_46921992((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0);
        return;
      }
    }
LABEL_9:
    sub_1CE6958(FlagRequestNumber, v10);
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
  if ( (byte_4E077E5 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_BattleSequenceManager_OnBgChanged__);
    byte_4E077E5 = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.BgChangedCallback,
    (int32_t)callback,
    tp,
    parentCamera,
    (System_String_o *)callback,
    (int32_t)method,
    v8,
    v9);
  performance = this->fields.performance;
  v22 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0);
  if ( !performance )
    sub_1CE6958(v23, v24);
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

  if ( (byte_4E077DF & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_16258/*"_"*/);
    byte_4E077DF = 1;
  }
  FlagRequestNumber = System_String__Concat_65122828((System_String_o *)StringLiteral_16258/*"_"*/, labelName, 0);
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
    sub_1CE6958(FlagRequestNumber, v10);
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

  if ( (byte_4E077FB & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4E077FB = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_35ABD84 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_35ABB10 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1CE6958(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *BattleSequenceManager__getPlayedSoundList(BattleSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4E077FD & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_string___);
    byte_4E077FD = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *BattleSequenceManager__get_BattleActor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4E077CE & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E077CE = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0, 0) )
    return 0;
  v5 = this->fields.actor;
  if ( !v5 )
    sub_1CE6958(0, v4);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v5,
                                   (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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

  if ( (byte_4E077D1 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    byte_4E077D1 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1CBC788(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1CBC788(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v8);
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

  if ( (byte_4E077CF & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E077CF = 1;
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
    sub_1CE6958(v4, v5);
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

  if ( (byte_4E077D0 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E077D0 = 1;
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
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1CE6958(Component_object, v5);
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
  if ( *((_BYTE *)Component_object + 679) )
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

  if ( (byte_4E077E4 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1CE6700(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4E077E4 = 1;
  }
  this->fields.performance = performance;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.performance,
    (int32_t)performance,
    (int32_t)actor,
    (int32_t)players,
    (System_String_o *)enemies,
    (int32_t)camera,
    (int64_t)bg,
    (System_String_o *)method);
  this->fields.actor = actor;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.actor, (int32_t)actor, v15, v16, v17, v18, v19, v20);
  this->fields.playerActors = players;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.playerActors, (int32_t)players, v21, v22, v23, v24, v25, v26);
  this->fields.enemyActors = enemies;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.enemyActors, (int32_t)enemies, v27, v28, v29, v30, v31, v32);
  this->fields.actorCamera = camera;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.actorCamera, (int32_t)camera, v33, v34, v35, v36, v37, v38);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1CE66A4(
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
  sub_1CE66A4(
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
    sub_1CE6958(actorCamera, v40);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0);
  this->fields.originalCameraRoot = parent;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.originalCameraRoot,
    (int32_t)parent,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.bgObject = bg;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.bgObject, (int32_t)bg, v62, v63, v64, v65, v66, v67);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v68);
  v69 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1CE694C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v69,
    (const MethodInfo_35AB1DC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v69;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int32_t)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Collections_Generic_HashSet_T__o *)sub_1CE694C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v76,
    (const MethodInfo_37B3998 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v76;
  sub_1CE66A4(
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
  if ( (byte_4E077FE & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4E077FE = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_4E077E1 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_2144/*"Actor"*/);
    sub_1CE6700(&StringLiteral_16950/*"animCamLoc"*/);
    byte_4E077E1 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2144/*"Actor"*/, 0)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16950/*"animCamLoc"*/, 0);
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

  if ( (byte_4E077D3 & 1) == 0 )
  {
    sub_1CE6700(&AssetManager_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__);
    sub_1CE6700(&BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
    sub_1CE6700(&StringLiteral_9589/*"NoblePhantasm/CutIns"*/);
    byte_4E077D3 = 1;
  }
  v17 = sub_1CE694C(BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 56) = onComplete;
  *(_DWORD *)(v17 + 24) = chrId;
  *(_DWORD *)(v17 + 28) = limitCount;
  *(_DWORD *)(v17 + 32) = treasureDeviceId;
  *(_DWORD *)(v17 + 36) = treasureDeviceLv;
  *(_DWORD *)(v17 + 40) = npChargeStage;
  *(_DWORD *)(v17 + 44) = overwriteSvtVoiceId;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v17 + 56), (int32_t)onComplete, v26, v27, v28, v29, v30, v31);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v17 + 24);
  this->fields.limitCount = *(_DWORD *)(v17 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v17 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v17 + 44);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v17 + 48) = Component_object;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v17 + 48), (int32_t)Component_object, v33, v34, v35, v36, v37, v38);
  actor = *(UnityEngine_GameObject_o **)(v17 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v17 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v17 + 48)) == 0) )
  {
LABEL_10:
    sub_1CE6958(actor, v19);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0);
  v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1CE694C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v39,
    (Il2CppObject *)v17,
    Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9589/*"NoblePhantasm/CutIns"*/, v39, 1, 0, 0);
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
  BattleServantData_o *cutInCamera; // x26
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
  if ( (byte_4E077E6 & 1) == 0 )
  {
    sub_1CE6700(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__);
    sub_1CE6700(&BattleSequenceManager_TypeInfo);
    sub_1CE6700(&CommonUI_TypeInfo);
    sub_1CE6700(&FSUtility_TypeInfo);
    sub_1CE6700(&UnityEngine_GameObject___TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1CE6700(&int_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1CE6700(&object___TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&WellFired_USSequencer_PlaybackDelegate_TypeInfo);
    sub_1CE6700(&float_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1CE6700(&StringLiteral_13001/*"ShowNobleInfo"*/);
    sub_1CE6700(&StringLiteral_19968/*"from"*/);
    sub_1CE6700(&StringLiteral_9912/*"OnChangeBgmVolume"*/);
    sub_1CE6700(&StringLiteral_24462/*"time"*/);
    sub_1CE6700(&StringLiteral_22783/*"onupdate"*/);
    sub_1CE6700(&StringLiteral_3126/*"Battle2D"*/);
    sub_1CE6700(&StringLiteral_24501/*"to"*/);
    this = (BattleSequenceManager_o *)sub_1CE6700(&iTween_TypeInfo);
    byte_4E077E6 = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_142;
  p_actorlist = performance->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_142;
  v10 = sub_1CE67A8(UnityEngine_GameObject___TypeInfo, LODWORD(p_actorlist->max_length));
  p_saveWaitPlayer = &v7->fields.saveWaitPlayer;
  v7->fields.saveWaitPlayer = (struct UnityEngine_GameObject_array *)v10;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v7->fields.saveWaitPlayer, v10, v12, v13, v14, v15, v16, v17);
  v18 = v7->fields.performance;
  if ( !v18 )
    goto LABEL_142;
  e_actorlist = v18->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_142;
  v20 = sub_1CE67A8(UnityEngine_GameObject___TypeInfo, LODWORD(e_actorlist->max_length));
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v20;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v7->fields.saveWaitEnemy, v20, v21, v22, v23, v24, v25, v26);
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
        (System_String_o *)StringLiteral_13001/*"ShowNobleInfo"*/,
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
    v33 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3126/*"Battle2D"*/, 0);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v33), 0);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_142;
    p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
    v35 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0);
    v36 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3126/*"Battle2D"*/, 0);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v36) | v35, 0);
    v37 = (System_Collections_Generic_List_bool__o *)sub_1CE694C(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v37,
      (const MethodInfo_38BF324 *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v37;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v7->fields.ActorActiveList, (int32_t)v37, v39, v40, v41, v42, v43, v44);
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
                                              (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          cutInCamera = (BattleServantData_o *)this[1].fields.cutInCamera;
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
              *(const MethodInfo_38BFB88 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v52->fields._size = size + 1;
            items->m_Items[size] = (unsigned __int8)this & 1;
          }
          if ( !cutInCamera )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(cutInCamera, 0);
          if ( ((unsigned __int8)this & 1) != 0 || cutInCamera->fields.isAnimPlayedWithdraw )
          {
            v65 = *p_saveWaitPlayer;
            if ( !*p_saveWaitPlayer )
              goto LABEL_142;
            if ( v48 >= LODWORD(v65->max_length) )
              break;
            v66 = (__int64)v65 + 8 * v48;
            *(_QWORD *)(v66 + 32) = v49;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v66 + 32), (int32_t)v49, v59, v60, v61, v62, v63, v64);
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
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v75 + 32), 0, v67, v68, v69, v70, v71, v72);
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
              *(const MethodInfo_38BFB88 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
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
      sub_1CE6960(this);
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
                                              (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v82 = (BattleServantData_o *)this[1].fields.cutInCamera;
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
              *(const MethodInfo_38BFB88 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
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
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v97 + 32), (int32_t)v80, v90, v91, v92, v93, v94, v95);
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
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v106 + 32), 0, v98, v99, v100, v101, v102, v103);
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
              *(const MethodInfo_38BFB88 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
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
    this = (BattleSequenceManager_o *)sub_1CE67A8(object___TypeInfo, 8);
    if ( !this )
      goto LABEL_142;
    v114 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19968/*"from"*/;
    if ( StringLiteral_19968/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1CE683C(StringLiteral_19968/*"from"*/, v114->klass->_1.element_class);
      if ( !this )
        goto LABEL_144;
      v115 = StringLiteral_19968/*"from"*/;
    }
    else
    {
      v115 = 0;
    }
    if ( !LODWORD(v114->fields.m_CancellationTokenSource) )
      goto LABEL_143;
    v114->fields.sequenceManager = (struct UnityEngine_GameObject_o *)v115;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v114->fields.sequenceManager, v115, v108, v109, v110, v111, v112, v113);
    v200 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v200);
    v122 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1CE683C(this, v114->klass->_1.element_class)) != 0 )
    {
      if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_143;
      *(_QWORD *)&v114->fields.servantId = v122;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&v114->fields.servantId,
        (int32_t)v122,
        v116,
        v117,
        v118,
        v119,
        v120,
        v121);
      this = (BattleSequenceManager_o *)StringLiteral_24501/*"to"*/;
      if ( StringLiteral_24501/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1CE683C(StringLiteral_24501/*"to"*/, v114->klass->_1.element_class);
        if ( !this )
          goto LABEL_144;
        v129 = StringLiteral_24501/*"to"*/;
      }
      else
      {
        v129 = 0;
      }
      if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_143;
      *(_QWORD *)&v114->fields.testNpPer = v129;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v114->fields.testNpPer, v129, v123, v124, v125, v126, v127, v128);
      v130 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v130 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v130->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate);
      v137 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1CE683C(this, v114->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_143;
        v114->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v137;
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&v114->fields.ReleaseSoundNames,
          (int32_t)v137,
          v131,
          v132,
          v133,
          v134,
          v135,
          v136);
        this = (BattleSequenceManager_o *)StringLiteral_24462/*"time"*/;
        if ( StringLiteral_24462/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1CE683C(StringLiteral_24462/*"time"*/, v114->klass->_1.element_class);
          if ( !this )
            goto LABEL_144;
          v144 = StringLiteral_24462/*"time"*/;
        }
        else
        {
          v144 = 0;
        }
        if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_143;
        v114->fields.performance = (struct BattlePerformance_o *)v144;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v114->fields.performance, v144, v138, v139, v140, v141, v142, v143);
        v198 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v198);
        v151 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1CE683C(this, v114->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_143;
          v114->fields.seqObject = (struct UnityEngine_GameObject_o *)v151;
          sub_1CE66A4(
            (GrandQuestFolderBoardItem_o *)&v114->fields.seqObject,
            (int32_t)v151,
            v145,
            v146,
            v147,
            v148,
            v149,
            v150);
          this = (BattleSequenceManager_o *)StringLiteral_22783/*"onupdate"*/;
          if ( StringLiteral_22783/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1CE683C(StringLiteral_22783/*"onupdate"*/, v114->klass->_1.element_class);
            if ( !this )
              goto LABEL_144;
            v158 = StringLiteral_22783/*"onupdate"*/;
          }
          else
          {
            v158 = 0;
          }
          if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_143;
          v114->fields.actor = (struct UnityEngine_GameObject_o *)v158;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v114->fields.actor, v158, v152, v153, v154, v155, v156, v157);
          this = (BattleSequenceManager_o *)StringLiteral_9912/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9912/*"OnChangeBgmVolume"*/ )
          {
            v165 = 0;
LABEL_125:
            if ( LODWORD(v114->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_143;
            v114->fields.CutInRoot = (struct UnityEngine_GameObject_o *)v165;
            sub_1CE66A4(
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
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0);
              v7->fields.BackupBgmName = BgmName;
              sub_1CE66A4(
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
                                                      (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v175 = this;
                    p_actorCamera = (GrandQuestFolderBoardItem_o *)&this->fields.actorCamera;
                    v177 = (System_Delegate_o *)this->fields.actorCamera;
                    v178 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1CE694C(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
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
                      sub_1CE6CF4(v179);
                    }
                    p_actorCamera->klass = (GrandQuestFolderBoardItem_c *)v186;
LABEL_137:
                    sub_1CE66A4(p_actorCamera, (int32_t)v186, v180, v181, v182, v183, v184, v185);
                    v7->fields.OnCompleteActorCallback = v196;
                    sub_1CE66A4(
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
            sub_1CE6958(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_1CE683C(StringLiteral_9912/*"OnChangeBgmVolume"*/, v114->klass->_1.element_class);
          if ( this )
          {
            v165 = StringLiteral_9912/*"OnChangeBgmVolume"*/;
            goto LABEL_125;
          }
        }
      }
    }
LABEL_144:
    v195 = sub_1CE697C(this);
    sub_1CE6828(v195, 0);
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

  if ( (byte_4E077FF & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Voice_TypeInfo);
    byte_4E077FF = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
                      sub_1CE6960(MasterData_object);
                    BattleSequenceManager__addServantVoicePlayed(this, v14, this->fields.chrId, v11->m_Items[v19], v13);
                    LODWORD(max_length) = v11->max_length;
                    ++v19;
                  }
                  while ( (__int64)v19 < (int)max_length );
                }
                return;
              }
LABEL_31:
              sub_1CE6958(actor, method);
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

  if ( (byte_4E077DE & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_16258/*"_"*/);
    byte_4E077DE = 1;
  }
  FlagRequestNumber = System_String__Concat_65122828((System_String_o *)StringLiteral_16258/*"_"*/, labelName, 0);
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
    sub_1CE6958(FlagRequestNumber, v10);
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

  if ( (byte_4E077FA & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    byte_4E077FA = 1;
  }
  memset(&v8, 0, sizeof(v8));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    battleTargetList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1CE6958(0, v4);
    BattleSequenceManager_BattleTarget__restoreTransform((BattleSequenceManager_BattleTarget_o *)v8.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v5 = this->fields.battleTargetList;
  if ( !v5 )
LABEL_13:
    sub_1CE6958(battleTargetList, method);
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

  if ( (byte_4E077E3 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&UnityEngine_Transform_TypeInfo);
    this = (BattleSequenceManager_o *)sub_1CE6700(&StringLiteral_1043/*"/"*/);
    byte_4E077E3 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0)) == 0 )
  {
    sub_1CE6958(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0);
  if ( !Enumerator )
    sub_1CE6958(0, v6);
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
      v11 = sub_1CBCA7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v15 = sub_1CBCA7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1CE6958(0, v17);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1CE6CF4(v16);
LABEL_37:
      sub_1CE6958(Component_object, v22);
    }
    gameObject = UnityEngine_Component__get_gameObject(v16, 0);
    if ( !gameObject )
      sub_1CE6958(0, v20);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v23 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v25 = System_String__Concat_65122828((System_String_o *)StringLiteral_1043/*"/"*/, name, 0);
    if ( System_String__op_Equality(monitor, v25, 0) )
      goto LABEL_27;
  }
  v23 = 0;
LABEL_27:
  v26 = sub_1CE683C(Enumerator, System_IDisposable_TypeInfo);
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
      v31 = sub_1CBCA7C(v26, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4E077FC & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4E077FC = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_35ABB7C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1CE6958(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_37B4B7C *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  __int64 v8; // x21
  __int64 seqObject; // x0
  Il2CppObject *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *Component_object; // x24
  const MethodInfo *v18; // x3
  WellFired_USTimelineContainer_o *v19; // x25
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__52410400; // x0
  BattleSequenceManager___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  unsigned __int64 v30; // x28
  System_Func_object__bool__o *_9__88_0; // x20
  Il2CppObject *v32; // x27
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_IEnumerable_T__o *v40; // x20
  System_Action_object__o *v41; // x23
  BattleSequenceManager_o *v42; // x0
  const MethodInfo *v43; // x3
  WellFired_USTimelineContainer_o *v44; // x27
  System_Collections_Generic_List_object__o *v45; // x21
  System_Collections_Generic_List_object__o *v46; // x20
  Il2CppObject *sequenceManager; // x20
  System_Collections_Generic_List_object__o *createdObjects; // x28
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  __int64 v58; // x1
  Il2CppClass **v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct UnityEngine_Camera_o *actorCamera; // x1
  __int64 v67; // x28
  struct UnityEngine_Camera_o *effectCamera; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  struct UnityEngine_Camera_o *cutInCamera; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_o *fadeObject; // x1
  Il2CppObject *CutInPrefab; // x20
  struct UnityEngine_Vector3_StaticFields *v91; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  const MethodInfo *v102; // x1
  System_Collections_Generic_List_object__o *v103; // x20
  const MethodInfo *v104; // x2
  int v105; // w8
  __int64 v106; // x23
  int v107; // w24
  UnityEngine_Object_o *v108; // x27
  __int64 v109; // x8
  unsigned __int64 v110; // x23
  __int64 v111; // x29
  System_String_o *name; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  int32_t treasureDeviceId; // w20
  int32_t limitCount; // w27
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x20
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  System_Collections_Generic_List_object__o *v128; // x8
  struct System_Object_array *v129; // x9
  _QWORD *v130; // x10
  __int64 v131; // x11
  Il2CppClass **v132; // x0
  System_String_o *v133; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  __int64 v140; // x10
  System_String_o *v141; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  System_String_o *v144; // x4
  int32_t v145; // w5
  int64_t v146; // x6
  System_String_o *v147; // x7
  __int64 v148; // x9
  struct UnityEngine_Camera_o *v149; // x1
  UnityEngine_Transform_o *parent; // x0
  GrandQuestFolderBoardItem_o *v151; // x0
  System_String_o *v152; // x0
  __int64 v153; // x9
  System_String_o **v154; // x20
  System_String_o *v155; // x0
  int32_t v156; // w2
  int32_t v157; // w3
  System_String_o *v158; // x4
  int32_t v159; // w5
  int64_t v160; // x6
  System_String_o *v161; // x7
  System_String_o *v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x1
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x4
  int32_t v173; // w5
  int64_t v174; // x6
  System_String_o *v175; // x7
  struct System_Object_array *v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  Il2CppClass **v179; // x0
  __int64 naturalAligment; // x9
  struct UnityEngine_Camera_o *v181; // x1
  __int64 v182; // x29
  int32_t v183; // w2
  int32_t v184; // w3
  System_String_o *v185; // x4
  int32_t v186; // w5
  int64_t v187; // x6
  System_String_o *v188; // x7
  UnityEngine_Transform_o *v189; // x20
  System_Collections_Generic_List_object__o *v190; // x26
  int32_t v191; // w2
  int32_t v192; // w3
  System_String_o *v193; // x4
  int32_t v194; // w5
  int64_t v195; // x6
  System_String_o *v196; // x7
  struct System_Object_array *v197; // x8
  __int64 v198; // x9
  __int64 v199; // x10
  Il2CppClass **v200; // x0
  BattleSequenceManager_o *v201; // x0
  const MethodInfo *v202; // x3
  int32_t v203; // w2
  int32_t v204; // w3
  System_String_o *v205; // x4
  int32_t v206; // w5
  int64_t v207; // x6
  System_String_o *v208; // x7
  struct System_Object_array *v209; // x8
  __int64 v210; // x9
  __int64 v211; // x10
  __int64 v212; // x1
  Il2CppClass **v213; // x0
  Il2CppObject *current; // x20
  _BOOL8 v215; // x0
  __int64 v216; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v218; // x1
  void *v219; // x25
  int v220; // w8
  int i; // w20
  WellFired_USTimelineEvent_o *v222; // x0
  _QWORD *v223; // x26
  __int64 v224; // x8
  __int64 v225; // x27
  System_String_o *v226; // x0
  __int64 v227; // x9
  _BOOL8 v228; // x0
  __int64 v229; // x1
  int32_t v230; // w2
  int32_t v231; // w3
  System_String_o *v232; // x4
  int32_t v233; // w5
  int64_t v234; // x6
  System_String_o *v235; // x7
  UnityEngine_Component_o *v236; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v238; // w2
  int32_t v239; // w3
  System_String_o *v240; // x4
  int32_t v241; // w5
  int64_t v242; // x6
  System_String_o *v243; // x7
  struct System_Object_array *v244; // x8
  _QWORD *v245; // x9
  __int64 v246; // x10
  Il2CppClass **v247; // x0
  __int64 v248; // x1
  System_Collections_IEnumerator_o *Enumerator; // x25
  int v250; // w19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v252; // x9
  int32_t *p_offset; // x10
  __int64 v254; // x0
  System_Collections_IEnumerator_c *v255; // x8
  __int64 v256; // x9
  System_Collections_IEnumerator_c **v257; // x10
  __int64 v258; // x0
  UnityEngine_Component_o *v259; // x0
  __int64 v260; // x1
  __int64 v261; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v263; // x1
  Il2CppObject *v264; // x0
  __int64 v265; // x1
  Il2CppObject *v266; // x26
  System_String_o *monitor; // x0
  __int64 v268; // x1
  System_String_o *v269; // x0
  __int64 v270; // x1
  System_String_o *v271; // x0
  System_String_o *v272; // x0
  __int64 v273; // x0
  __int64 v274; // x8
  __int64 v275; // x25
  __int64 v276; // x9
  int *v277; // x10
  __int64 v278; // x0
  __int64 v279; // x1
  System_Collections_IEnumerator_c *v280; // x8
  __int64 v281; // x9
  int32_t *v282; // x10
  __int64 v283; // x0
  System_Collections_IEnumerator_c *v284; // x8
  __int64 v285; // x9
  System_Collections_IEnumerator_c **v286; // x10
  __int64 v287; // x0
  UnityEngine_Component_o *v288; // x0
  __int64 v289; // x1
  __int64 v290; // x9
  UnityEngine_GameObject_o *v291; // x0
  __int64 v292; // x1
  Il2CppObject *v293; // x0
  __int64 v294; // x1
  WellFired_USTimelineContainer_o *v295; // x25
  System_String_o *v296; // x0
  __int64 v297; // x1
  bool v298; // w26
  System_String_o *affectedObjectPath; // x0
  System_String_o *v300; // x28
  System_String_o *v301; // x0
  __int64 v302; // x1
  bool v303; // w27
  System_String_o *v304; // x0
  System_String_o *v305; // x0
  __int64 v306; // x1
  System_String_o *v307; // x0
  UnityEngine_Component_o *v308; // x0
  UnityEngine_Transform_o *v309; // x0
  System_String_o *v310; // x0
  __int64 v311; // x1
  UnityEngine_GameObject_o *actor; // x0
  __int64 v313; // x1
  UnityEngine_Transform_o *v314; // x20
  System_String_o *v315; // x0
  System_String_o *v316; // x0
  UnityEngine_Transform_o *v317; // x0
  UnityEngine_Object_o *AffectedObject; // x20
  __int64 v319; // x1
  System_String_o *v320; // x0
  bool v321; // w0
  __int64 v322; // x1
  __int64 *v323; // x8
  System_String_o *v324; // x0
  bool v325; // w0
  System_String_o *v326; // x28
  UnityEngine_GameObject_o *v327; // x0
  UnityEngine_Transform_o *v328; // x0
  __int64 v329; // x1
  UnityEngine_Object_o *v330; // x20
  _BOOL8 v331; // x0
  __int64 v332; // x1
  __int64 v333; // x1
  System_Collections_IEnumerator_o *v334; // x27
  System_Collections_IEnumerator_c *v335; // x8
  __int64 v336; // x9
  int32_t *v337; // x10
  __int64 v338; // x0
  System_Collections_IEnumerator_c *v339; // x8
  __int64 v340; // x9
  System_Collections_IEnumerator_c **v341; // x10
  __int64 v342; // x0
  UnityEngine_Component_o *v343; // x0
  __int64 v344; // x1
  UnityEngine_Object_o *v345; // x26
  __int64 v346; // x9
  UnityEngine_Object_o *v347; // x0
  __int64 v348; // x1
  System_String_o *v349; // x0
  __int64 v350; // x1
  System_String_o *v351; // x0
  _BOOL8 v352; // x0
  const MethodInfo *v353; // x2
  __int64 v354; // x1
  __int64 v355; // x1
  int32_t v356; // w20
  __int64 v357; // x0
  __int64 v358; // x27
  __int64 v359; // x8
  __int64 v360; // x9
  int *v361; // x10
  __int64 v362; // x0
  System_String_o *v363; // x20
  System_String_o *v364; // x0
  __int64 v365; // x1
  System_String_o *v366; // x0
  __int64 v367; // x1
  System_String_array *v368; // x0
  __int64 v369; // x1
  __int64 v370; // x1
  System_String_o *v371; // x27
  UnityEngine_GameObject_o *v372; // x0
  __int64 v373; // x1
  UnityEngine_Transform_o *v374; // x26
  System_String_o *v375; // x0
  System_String_o *v376; // x0
  __int64 v377; // x1
  System_String_o *v378; // x0
  UnityEngine_Transform_o *v379; // x0
  Il2CppObject *v380; // x20
  System_Collections_Generic_List_object__o *v381; // x0
  _BOOL8 v382; // x0
  __int64 v383; // x1
  System_String_o *v384; // x0
  __int64 v385; // x1
  System_String_o *v386; // x1
  const MethodInfo *v387; // x4
  __int64 v388; // x1
  int32_t v389; // w2
  int32_t v390; // w3
  System_String_o *v391; // x4
  int32_t v392; // w5
  int64_t v393; // x6
  System_String_o *v394; // x7
  System_Collections_Generic_List_object__o *v395; // x0
  struct System_Object_array *v396; // x8
  _QWORD *v397; // x9
  __int64 v398; // x10
  Il2CppClass **v399; // x8
  __int64 v400; // x0
  __int64 v401; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v403; // x1
  UnityEngine_Transform_o *v404; // x0
  UnityEngine_Transform_o *v405; // x0
  __int64 v406; // x1
  float v407; // s8
  float v408; // s9
  float v409; // s10
  __int64 v410; // x1
  UnityEngine_Transform_o *v411; // x26
  UnityEngine_GameObject_o *CutInRoot; // x0
  UnityEngine_Transform_o *v413; // x0
  UnityEngine_Transform_o *v414; // x0
  __int64 v415; // x1
  BattleSequenceManager_o *v416; // x0
  const MethodInfo *v417; // x4
  int32_t v418; // w26
  UnityEngine_Transform_o *v419; // x0
  __int64 v420; // x1
  UnityEngine_Transform_o *v421; // x0
  System_String_o *v422; // x0
  __int64 v423; // x1
  System_String_o *v424; // x0
  System_String_o *v425; // x0
  const MethodInfo *v426; // x3
  int32_t v427; // w2
  const MethodInfo *v428; // x3
  System_Object_array *EventCount; // x0
  __int64 v430; // x1
  System_Object_array *v431; // x25
  int max_length; // w8
  unsigned int v433; // w20
  WellFired_USTimelineEvent_o *v434; // x26
  int32_t j; // w27
  UnityEngine_Object_o *v436; // x0
  __int64 v437; // x1
  System_String_o *v438; // x0
  __int64 v439; // x9
  _BOOL8 v440; // x0
  __int64 v441; // x1
  int32_t v442; // w2
  int32_t v443; // w3
  System_String_o *v444; // x4
  int32_t v445; // w5
  int64_t v446; // x6
  System_String_o *v447; // x7
  UnityEngine_Component_o *v448; // x0
  UnityEngine_Transform_o *v449; // x0
  int32_t v450; // w2
  int32_t v451; // w3
  System_String_o *v452; // x4
  int32_t v453; // w5
  int64_t v454; // x6
  System_String_o *v455; // x7
  struct System_Object_array *v456; // x8
  _QWORD *v457; // x9
  __int64 v458; // x10
  Il2CppClass **v459; // x0
  int32_t layer; // w26
  __int64 v461; // x20
  __int64 v462; // x8
  __int64 v463; // x23
  __int64 v464; // x9
  int *v465; // x10
  __int64 v466; // x0
  __int64 v467; // x1
  UnityEngine_Object_o *v468; // x20
  __int64 v469; // x8
  UnityEngine_Object_o *v470; // x20
  struct BattlePerformance_o *v471; // x8
  UnityEngine_Object_o *data; // x20
  Il2CppObject *MasterData_object; // x21
  int32_t chrId; // w20
  System_String_o *FileName; // x0
  const MethodInfo *v476; // x4
  int32_t v477; // w20
  System_String_o *v478; // x0
  const MethodInfo *v479; // x4
  _DWORD *v480; // x8
  int v481; // w20
  BalanceConfig_c *v482; // x0
  int32_t v483; // w20
  System_String_o *v484; // x0
  const MethodInfo *v485; // x4
  int v486; // w1
  int v487; // w19
  void *v488; // x0
  __int64 v489; // x0
  __int64 v490; // x19
  __int64 v491; // x8
  __int64 v492; // x9
  int *v493; // x10
  __int64 v494; // x0
  void *v495; // [xsp+10h] [xbp-140h]
  __int64 v496; // [xsp+18h] [xbp-138h]
  UnityEngine_Object_o **v497; // [xsp+20h] [xbp-130h]
  WellFired_USSequencer_o *seq; // [xsp+30h] [xbp-120h]
  System_String_o *seqa; // [xsp+30h] [xbp-120h]
  System_String_o *seqb; // [xsp+30h] [xbp-120h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+40h] [xbp-110h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *sourcea; // [xsp+40h] [xbp-110h]
  __int64 v504; // [xsp+48h] [xbp-108h]
  System_Collections_IEnumerator_o *v505; // [xsp+48h] [xbp-108h]
  BattleSequenceManager_o *v506; // [xsp+50h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v507; // [xsp+58h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o k; // [xsp+70h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+8Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v510; // [xsp+90h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v511; // [xsp+B0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+D8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v513; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v516; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E077DC & 1) == 0 )
  {
    sub_1CE6700(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    sub_1CE6700(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1CE6700(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__);
    sub_1CE6700(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    sub_1CE6700(&System_GC_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1CE6700(&System_IDisposable_TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1CE6700((char *)&xmmword_4C2BBAC + 12);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
    sub_1CE6700((char *)&xmmword_4C2BBBC + 4);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
    sub_1CE6700((char *)&xmmword_4C2BBAC + 4);
    sub_1CE6700(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_USTimelineContainer__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
    sub_1CE6700(&NGUITools_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1CE6700(&Method_UnityEngine_Object_Instantiate_GameObject____79994256);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&ServantAssetLoadManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&UnityEngine_Transform_TypeInfo);
    sub_1CE6700(&Method_BattleSequenceManager___c__setup_b__88_0__);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass88_0__setup_b__1__);
    sub_1CE6700(&BattleSequenceManager___c__DisplayClass88_0_TypeInfo);
    sub_1CE6700(&BattleSequenceManager___c_TypeInfo);
    sub_1CE6700(&WellFired_USFGOAnimationCameraEvent_TypeInfo);
    sub_1CE6700(&WellFired_USFGOAttachToParentEvent_TypeInfo);
    sub_1CE6700(&WellFired_USFGOChangeBgEvent_TypeInfo);
    sub_1CE6700(&WellFired_USFGOPlayCutInEvent_TypeInfo);
    sub_1CE6700(&WellFired_USFGOSetCameraEvent_TypeInfo);
    sub_1CE6700(&Voice_TypeInfo);
    sub_1CE6700(&StringLiteral_1051/*"/Actor/chr/"*/);
    sub_1CE6700(&StringLiteral_3128/*"BattleBG"*/);
    sub_1CE6700(&StringLiteral_1061/*"/BattleActors/"*/);
    sub_1CE6700(&StringLiteral_3130/*"BattleCamera"*/);
    sub_1CE6700(&StringLiteral_3133/*"BattleCutIn"*/);
    sub_1CE6700(&StringLiteral_15021/*"USFGOSetCameraEvent"*/);
    sub_1CE6700(&StringLiteral_2144/*"Actor"*/);
    sub_1CE6700(&StringLiteral_17510/*"body_level_"*/);
    sub_1CE6700(&StringLiteral_1053/*"/Actor/chr/weapon_level_"*/);
    sub_1CE6700(&StringLiteral_1052/*"/Actor/chr/body_level_"*/);
    sub_1CE6700(&StringLiteral_6452/*"FGOSequenceManager"*/);
    sub_1CE6700(&StringLiteral_1055/*"/AllEffects/"*/);
    sub_1CE6700(&StringLiteral_18160/*"chr(Clone)"*/);
    sub_1CE6700(&StringLiteral_4002/*"Cameras/BattleCamera"*/);
    sub_1CE6700(&StringLiteral_15019/*"USFGOChangeBgEvent"*/);
    sub_1CE6700(&StringLiteral_1073/*"/BattleCamera"*/);
    sub_1CE6700(&StringLiteral_1076/*"/CutIns/"*/);
    sub_1CE6700(&StringLiteral_3126/*"Battle2D"*/);
    sub_1CE6700(&StringLiteral_1075/*"/Cameras/BattleCamera"*/);
    sub_1CE6700(&StringLiteral_16950/*"animCamLoc"*/);
    sub_1CE6700(&StringLiteral_25207/*"weapon_level_"*/);
    sub_1CE6700(&StringLiteral_683/*"(Clone)"*/);
    sub_1CE6700(&StringLiteral_15018/*"USFGOAttachToParentEvent"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_1050/*"/Actor/chr"*/);
    sub_1CE6700(&StringLiteral_15017/*"USFGOAnimationCameraEvent"*/);
    sub_1CE6700(&StringLiteral_1117/*"0"*/);
    sub_1CE6700(&StringLiteral_15020/*"USFGOPlayCutInEvent"*/);
    byte_4E077DC = 1;
  }
  *(_QWORD *)result = 0;
  memset(&v511, 0, sizeof(v511));
  memset(&v510, 0, sizeof(v510));
  targetPosIndex = 0;
  memset(&k, 0, sizeof(k));
  v8 = sub_1CE694C(BattleSequenceManager___c__DisplayClass88_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_420;
  *(_QWORD *)(v8 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)this, v11, v12, v13, v14, v15, v16);
  seqObject = (__int64)this->fields.seqObject;
  v506 = this;
  if ( !seqObject )
    goto LABEL_420;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v19 = BattleSequenceManager__searchTimeline(
          (BattleSequenceManager_o *)Component_object,
          (WellFired_USSequencer_o *)Component_object,
          (System_String_o *)StringLiteral_2144/*"Actor"*/,
          v18);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
  {
    seqObject = (__int64)this->fields.actor;
    if ( !seqObject )
      goto LABEL_420;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0);
    if ( !v19 )
      goto LABEL_420;
    WellFired_USTimelineContainer__set_AffectedObject(v19, (UnityEngine_Transform_o *)seqObject, 0);
  }
  seqObject = (__int64)this->fields.actor;
  if ( !seqObject )
    goto LABEL_420;
  v20 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)seqObject,
          (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v8 + 24) = v20;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  if ( !Component_object )
    goto LABEL_420;
  ComponentsInChildren_object__52410400 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__52410400(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_31FB820 *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v28 = BattleSequenceManager___c_TypeInfo;
  seq = (WellFired_USSequencer_o *)Component_object;
  v497 = (UnityEngine_Object_o **)(v8 + 24);
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    v29 = ComponentsInChildren_object__52410400;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v28 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__52410400 = v29;
  }
  v30 = (unsigned __int64)&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___;
  _9__88_0 = (System_Func_object__bool__o *)v28->static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    source = ComponentsInChildren_object__52410400;
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = BattleSequenceManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v28->static_fields->__9;
    _9__88_0 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__88_0, v32, Method_BattleSequenceManager___c__setup_b__88_0__, 0);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__88_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__88_0,
      (int32_t)_9__88_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    v30 = (unsigned __int64)&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___;
    ComponentsInChildren_object__52410400 = source;
  }
  v40 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         ComponentsInChildren_object__52410400,
                                                         (System_Func_TSource__bool__o *)_9__88_0,
                                                         (const MethodInfo_324B214 *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v41 = (System_Action_object__o *)sub_1CE694C(System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
  System_Action_object____ctor(
    v41,
    (Il2CppObject *)v8,
    Method_BattleSequenceManager___c__DisplayClass88_0__setup_b__1__,
    0);
  BasicHelper__ForEach_object_(
    v40,
    (System_Action_T__o *)v41,
    (const MethodInfo_31F00FC *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v44 = BattleSequenceManager__searchTimeline(
          v42,
          (WellFired_USSequencer_o *)Component_object,
          (System_String_o *)StringLiteral_6452/*"FGOSequenceManager"*/,
          v43);
  v45 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v46 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sourcea = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v46;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, 0, 0) )
  {
    sequenceManager = (Il2CppObject *)this->fields.sequenceManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           sequenceManager,
                           (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_420;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0);
    if ( !v44 )
      goto LABEL_420;
    WellFired_USTimelineContainer__set_AffectedObject(v44, (UnityEngine_Transform_o *)seqObject, 0);
    createdObjects = (System_Collections_Generic_List_object__o *)this->fields.createdObjects;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v44, 0);
    if ( !seqObject )
      goto LABEL_420;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0);
    if ( !createdObjects )
      goto LABEL_420;
    items = createdObjects->fields._items;
    v56 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++createdObjects->fields._version;
    if ( !items )
      goto LABEL_420;
    size = createdObjects->fields._size;
    v58 = seqObject;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        createdObjects,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &items->obj.klass + size;
      createdObjects->fields._size = size + 1;
      v59[4] = (Il2CppClass *)v58;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v59 + 4), v58, v49, v50, v51, v52, v53, v54);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v44, 0);
    if ( !seqObject )
      goto LABEL_420;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_420;
    actorCamera = this->fields.actorCamera;
    v67 = seqObject;
    *(_QWORD *)(seqObject + 32) = actorCamera;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(seqObject + 32), (int32_t)actorCamera, v60, v61, v62, v63, v64, v65);
    effectCamera = this->fields.effectCamera;
    *(_QWORD *)(v67 + 40) = effectCamera;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v67 + 40), (int32_t)effectCamera, v69, v70, v71, v72, v73, v74);
    cutInCamera = this->fields.cutInCamera;
    *(_QWORD *)(v67 + 48) = cutInCamera;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v67 + 48), (int32_t)cutInCamera, v76, v77, v78, v79, v80, v81);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_420;
    fadeObject = performance->fields.fadeObject;
    *(_QWORD *)(v67 + 96) = fadeObject;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v67 + 96), (int32_t)fadeObject, v82, v83, v84, v85, v86, v87);
    CutInPrefab = (Il2CppObject *)this->fields.CutInPrefab;
    if ( !byte_4DFE0A9 )
    {
      sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
      byte_4DFE0A9 = 1;
    }
    v91 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v91->zeroVector.fields.x;
    y = v91->zeroVector.fields.y;
    z = v91->zeroVector.fields.z;
    if ( !byte_4DFE0AF )
    {
      sub_1CE6700(&UnityEngine_Quaternion_TypeInfo);
      byte_4DFE0AF = 1;
    }
    v513.fields.x = x;
    v513.fields.y = y;
    v513.fields.z = z;
    v95 = UnityEngine_Object__Instantiate_object__53022336(
            CutInPrefab,
            v513,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            (const MethodInfo_3290E80 *)Method_UnityEngine_Object_Instantiate_GameObject____79994256);
    *(_QWORD *)(v67 + 72) = v95;
    v30 = v67 + 72;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)v30, (int32_t)v95, v96, v97, v98, v99, v100, v101);
    seqObject = *(_QWORD *)v30;
    if ( !*(_QWORD *)v30 )
      goto LABEL_420;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0);
    v103 = (System_Collections_Generic_List_object__o *)sourcea;
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo(this, v102);
      BattleSequenceManager__SetShaderNoblePhantasmMode(this, 1, v104);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v44,
                           1,
                           (const MethodInfo_31FB89C *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_420;
    v105 = *(_DWORD *)(seqObject + 24);
    v106 = seqObject;
    if ( v105 >= 1 )
    {
      v107 = 0;
      v108 = 0;
      v504 = seqObject;
      while ( 1 )
      {
        if ( v107 >= (unsigned int)v105 )
LABEL_424:
          sub_1CE6960(seqObject);
        seqObject = *(_QWORD *)(v106 + 8LL * v107 + 32);
        if ( !seqObject )
          goto LABEL_420;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0);
        if ( !seqObject )
          goto LABEL_420;
        v109 = *(_QWORD *)(seqObject + 24);
        v30 = seqObject;
        if ( (int)v109 >= 1 )
          break;
LABEL_104:
        v106 = v504;
        ++v107;
        v105 = *(_DWORD *)(v504 + 24);
        if ( v107 >= v105 )
          goto LABEL_105;
      }
      v110 = 0;
      while ( 1 )
      {
        if ( v110 >= (unsigned int)v109 )
          goto LABEL_424;
        v111 = *(_QWORD *)(v30 + 32 + 8 * v110);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v111, 0, 0);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v111 )
            goto LABEL_420;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v111, 0);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_15017/*"USFGOAnimationCameraEvent"*/, 0) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v108, 0, 0) )
            {
              treasureDeviceId = this->fields.treasureDeviceId;
              limitCount = this->fields.limitCount;
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                                   treasureDeviceId,
                                                                   limitCount,
                                                                   (System_String_o *)StringLiteral_16950/*"animCamLoc"*/,
                                                                   unitIndex,
                                                                   0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__LoadNoblePhantasmEffect,
                                     (const MethodInfo_3290C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v128 = (System_Collections_Generic_List_object__o *)this->fields.createdObjects;
              if ( !v128 )
                goto LABEL_420;
              v129 = v128->fields._items;
              v130 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v128->fields._version;
              if ( !v129 )
                goto LABEL_420;
              v131 = v128->fields._size;
              v108 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v131 >= LODWORD(v129->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v128,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
              }
              else
              {
                v132 = &v129->obj.klass + v131;
                v128->fields._size = v131 + 1;
                v132[4] = (Il2CppClass *)v108;
                sub_1CE66A4(
                  (GrandQuestFolderBoardItem_o *)(v132 + 4),
                  (int32_t)v108,
                  v122,
                  v123,
                  v124,
                  v125,
                  v126,
                  v127);
              }
            }
            naturalAligment = WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v111 + 304LL) < (unsigned int)naturalAligment
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v111 + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
              goto LABEL_425;
            }
            *(_QWORD *)(v111 + 56) = v108;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v111 + 56), (int32_t)v108, v113, v114, v115, v116, v117, v118);
            v181 = this->fields.actorCamera;
            *(_QWORD *)(v111 + 64) = v181;
            v182 = v111 + 64;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)v182, (int32_t)v181, v183, v184, v185, v186, v187, v188);
            *(_BYTE *)(v182 + 28) = 0;
            if ( !v108 )
              goto LABEL_420;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v108, 0);
            if ( !this->fields.actor )
              goto LABEL_420;
            v189 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.actor, 0);
            if ( !seqObject )
              goto LABEL_420;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)seqObject, 0);
            if ( !v189 )
              goto LABEL_420;
            UnityEngine_Transform__set_position(v189, position, 0);
            goto LABEL_100;
          }
          v133 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v111, 0);
          seqObject = System_String__op_Equality(v133, (System_String_o *)StringLiteral_15020/*"USFGOPlayCutInEvent"*/, 0);
          if ( (seqObject & 1) != 0 )
          {
            if ( !v103 )
              goto LABEL_420;
            v140 = WellFired_USFGOPlayCutInEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v111 + 304LL) >= (unsigned int)v140 )
              v10 = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v111 + 200LL) + 8 * v140 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                  ? (Il2CppObject *)v111
                  : 0LL;
            else
              v10 = 0;
            v176 = v103->fields._items;
            v177 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
            ++v103->fields._version;
            if ( !v176 )
              goto LABEL_420;
            v178 = v103->fields._size;
            if ( (unsigned int)v178 >= LODWORD(v176->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v103,
                v10,
                *(const MethodInfo_3905F68 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
              goto LABEL_101;
            }
            v179 = &v176->obj.klass + v178;
            v103->fields._size = v178 + 1;
            v179[4] = (Il2CppClass *)v10;
            v151 = (GrandQuestFolderBoardItem_o *)(v179 + 4);
            goto LABEL_91;
          }
          v141 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v111, 0);
          if ( System_String__op_Equality(v141, (System_String_o *)StringLiteral_15021/*"USFGOSetCameraEvent"*/, 0) )
          {
            v148 = WellFired_USFGOSetCameraEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v111 + 304LL) < (unsigned int)v148
              || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v111 + 200LL) + 8 * v148 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
            {
              goto LABEL_425;
            }
            v149 = this->fields.actorCamera;
            *(_QWORD *)(v111 + 56) = v149;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v111 + 56), (int32_t)v149, v142, v143, v144, v145, v146, v147);
            seqObject = (__int64)this->fields.actorCamera;
            if ( !seqObject )
              goto LABEL_420;
            seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0);
            if ( !seqObject )
              goto LABEL_420;
            parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0);
            *(_QWORD *)(v111 + 64) = parent;
            LODWORD(v10) = (_DWORD)parent;
            v151 = (GrandQuestFolderBoardItem_o *)(v111 + 64);
LABEL_91:
            sub_1CE66A4(v151, (int32_t)v10, v134, v135, v136, v137, v138, v139);
            goto LABEL_101;
          }
          v152 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v111, 0);
          seqObject = System_String__op_Equality(v152, (System_String_o *)StringLiteral_15019/*"USFGOChangeBgEvent"*/, 0);
          if ( (seqObject & 1) != 0 )
          {
            v153 = WellFired_USFGOChangeBgEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v111 + 304LL) < (unsigned int)v153
              || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v111 + 200LL) + 8 * v153 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
            {
LABEL_425:
              sub_1CE6CF4(v111);
LABEL_426:
              sub_1CE6CF4(v259);
LABEL_427:
              sub_1CE6CF4(v30);
LABEL_428:
              sub_1CE6958(v436, v437);
            }
            v154 = (System_String_o **)(v111 + 64);
            if ( System_String__op_Equality(*(System_String_o **)(v111 + 64), (System_String_o *)StringLiteral_1117/*"0"*/, 0)
              || (seqObject = System_String__op_Equality(*v154, (System_String_o *)StringLiteral_1/*""*/, 0),
                  (seqObject & 1) != 0) )
            {
              seqObject = (__int64)this->fields.performance;
              if ( !seqObject )
                goto LABEL_420;
              result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0);
              v155 = System_Int32__ToString((int32_t)&result[1], 0);
              *v154 = v155;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v111 + 64), (int32_t)v155, v156, v157, v158, v159, v160, v161);
              seqObject = (__int64)this->fields.performance;
              if ( !seqObject )
                goto LABEL_420;
              result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0);
              v162 = System_Int32__ToString((int32_t)&result[1], 0);
              *(_QWORD *)(v111 + 72) = v162;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v111 + 72), (int32_t)v162, v163, v164, v165, v166, v167, v168);
              changeFieldAfter = this->fields.changeFieldAfter;
              *(_QWORD *)(v111 + 136) = changeFieldAfter;
              sub_1CE66A4(
                (GrandQuestFolderBoardItem_o *)(v111 + 136),
                (int32_t)changeFieldAfter,
                v170,
                v171,
                v172,
                v173,
                v174,
                v175);
            }
LABEL_100:
            v103 = (System_Collections_Generic_List_object__o *)sourcea;
          }
        }
LABEL_101:
        LODWORD(v109) = *(_DWORD *)(v30 + 24);
        if ( (__int64)++v110 >= (int)v109 )
          goto LABEL_104;
      }
    }
  }
LABEL_105:
  v190 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(v190, *(const MethodInfo_3905734 **)((char *)&xmmword_4C2BBAC + 4));
  if ( !v190 )
    goto LABEL_420;
  v197 = v190->fields._items;
  v198 = *(_QWORD *)((char *)&xmmword_4C2BBAC + 12);
  ++v190->fields._version;
  if ( !v197 )
    goto LABEL_420;
  v199 = v190->fields._size;
  if ( (unsigned int)v199 >= LODWORD(v197->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v190,
      (Il2CppObject *)v19,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(*(_QWORD *)(v198 + 32) + 192LL) + 112LL));
  }
  else
  {
    v200 = &v197->obj.klass + v199;
    v190->fields._size = v199 + 1;
    v200[4] = (Il2CppClass *)v19;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v200 + 4), (int32_t)v19, v191, v192, v193, v194, v195, v196);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(v201, seq, (System_String_o *)StringLiteral_4002/*"Cameras/BattleCamera"*/, v202);
  v209 = v190->fields._items;
  v210 = *(_QWORD *)((char *)&xmmword_4C2BBAC + 12);
  ++v190->fields._version;
  if ( !v209 )
    goto LABEL_420;
  v211 = v190->fields._size;
  v212 = seqObject;
  if ( (unsigned int)v211 >= LODWORD(v209->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v190,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_3905F68 **)(*(_QWORD *)(*(_QWORD *)(v210 + 32) + 192LL) + 112LL));
  }
  else
  {
    v213 = &v209->obj.klass + v211;
    v190->fields._size = v211 + 1;
    v213[4] = (Il2CppClass *)v212;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v213 + 4), v212, v203, v204, v205, v206, v207, v208);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v507,
    v190,
    *(const MethodInfo_3906A60 **)((char *)&xmmword_4C2BBBC + 4));
  v511 = v507;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v511,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v511.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v215 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v215 )
    {
      if ( !current )
        sub_1CE6958(v215, v216);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_31FB89C *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v219 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1CE6958(0, v218);
      v220 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v220 >= 1 )
      {
        for ( i = 0; i < v220; ++i )
        {
          if ( i >= (unsigned int)v220 )
            sub_1CE6960(ComponentsInChildren_object);
          v222 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v219 + i + 4);
          if ( !v222 )
            sub_1CE6958(0, v218);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v222, 0);
          v223 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1CE6958(0, v218);
          v224 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v224 >= 1 )
          {
            v30 = 0;
            do
            {
              if ( v30 >= (unsigned int)v224 )
                sub_1CE6960(ComponentsInChildren_object);
              v225 = v223[v30 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v225, 0, 0);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v225 )
                  sub_1CE6958(ComponentsInChildren_object, v218);
                v226 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v225, 0);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v226,
                                                        (System_String_o *)StringLiteral_15018/*"USFGOAttachToParentEvent"*/,
                                                        0);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v227 = WellFired_USFGOAttachToParentEvent_TypeInfo->_2.naturalAligment;
                  if ( *(unsigned __int8 *)(*(_QWORD *)v225 + 304LL) < (unsigned int)v227
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v225 + 200LL) + 8 * v227 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1CE6CF4(v225);
LABEL_417:
                    sub_1CE6958(v228, v229);
                  }
                  v228 = System_String__op_Equality(
                           *(System_String_o **)(v225 + 80),
                           (System_String_o *)StringLiteral_3130/*"BattleCamera"*/,
                           0);
                  if ( v228 )
                  {
                    v236 = (UnityEngine_Component_o *)this->fields.actorCamera;
                    if ( !v236 )
                      sub_1CE6958(0, v229);
                    transform = UnityEngine_Component__get_transform(v236, 0);
                    *(_QWORD *)(v225 + 64) = transform;
                    sub_1CE66A4(
                      (GrandQuestFolderBoardItem_o *)(v225 + 64),
                      (int32_t)transform,
                      v238,
                      v239,
                      v240,
                      v241,
                      v242,
                      v243);
                  }
                  else
                  {
                    if ( !v45 )
                      goto LABEL_417;
                    v244 = v45->fields._items;
                    v245 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v45->fields._version;
                    if ( !v244 )
                      sub_1CE6958(v228, v229);
                    v246 = v45->fields._size;
                    if ( (unsigned int)v246 >= LODWORD(v244->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v45,
                        (Il2CppObject *)v225,
                        *(const MethodInfo_3905F68 **)(*(_QWORD *)(v245[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v247 = &v244->obj.klass + v246;
                      v45->fields._size = v246 + 1;
                      v247[4] = (Il2CppClass *)v225;
                      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v247 + 4), v225, v230, v231, v232, v233, v234, v235);
                    }
                  }
                }
              }
              LODWORD(v224) = *((_DWORD *)v223 + 6);
              ++v30;
            }
            while ( (__int64)v30 < (int)v224 );
          }
          v220 = *((_DWORD *)v219 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v511,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0);
  if ( !seqObject )
    goto LABEL_420;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0);
  if ( !Enumerator )
    sub_1CE6958(0, v248);
  v250 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v252 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v252;
        p_offset += 4;
        if ( !v252 )
          goto LABEL_154;
      }
      v254 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_154:
      v254 = sub_1CBCA7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v254)(
            Enumerator,
            *(_QWORD *)(v254 + 8))
        & 1) == 0 )
      break;
    v255 = Enumerator->klass;
    v256 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v257 = (System_Collections_IEnumerator_c **)&v255->_1.interfaceOffsets->offset;
      while ( *(v257 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v256;
        v257 += 2;
        if ( !v256 )
          goto LABEL_161;
      }
      v258 = (__int64)&v255->vtable[*(_DWORD *)v257 + 1];
    }
    else
    {
LABEL_161:
      v258 = sub_1CBCA7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v259 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v258)(
                                        Enumerator,
                                        *(_QWORD *)(v258 + 8));
    if ( !v259 )
      sub_1CE6958(0, v260);
    v261 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v259->klass->_2.naturalAligment < (unsigned int)v261
      || (UnityEngine_Transform_c *)v259->klass->_2.typeHierarchy[v261 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_426;
    }
    gameObject = UnityEngine_Component__get_gameObject(v259, 0);
    if ( !gameObject )
      sub_1CE6958(0, v263);
    v264 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v266 = v264;
    if ( !v264 )
LABEL_430:
      sub_1CE6958(v264, v265);
    monitor = (System_String_o *)v264[2].monitor;
    if ( !monitor )
      sub_1CE6958(0, v265);
    if ( System_String__StartsWith(monitor, (System_String_o *)StringLiteral_1061/*"/BattleActors/"*/, 0) && v266[2].monitor )
    {
      v269 = (System_String_o *)v266[2].monitor;
      if ( !v269 )
        sub_1CE6958(0, v268);
      if ( System_String__StartsWith(v269, (System_String_o *)StringLiteral_1061/*"/BattleActors/"*/, 0) )
      {
        v271 = (System_String_o *)v266[2].monitor;
        if ( !v271 )
          sub_1CE6958(0, v270);
        v272 = System_String__Substring_65168768(v271, v271->fields._stringLength - 1, 1, 0);
        result[0] = 1;
        v250 += System_Int32__TryParse(v272, result, 0);
      }
    }
  }
  v273 = sub_1CE683C(Enumerator, System_IDisposable_TypeInfo);
  if ( v273 )
  {
    v274 = *(_QWORD *)v273;
    v275 = v273;
    v276 = *(unsigned __int16 *)(*(_QWORD *)v273 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v273 + 302LL) )
    {
      v277 = (int *)(*(_QWORD *)(v274 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v277 - 1) != System_IDisposable_TypeInfo )
      {
        --v276;
        v277 += 4;
        if ( !v276 )
          goto LABEL_180;
      }
      v278 = v274 + 16LL * *v277 + 312;
    }
    else
    {
LABEL_180:
      v278 = sub_1CBCA7C(v273, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v278)(v275, *(_QWORD *)(v278 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0);
  if ( !seqObject )
    goto LABEL_420;
  v505 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0);
  if ( !v505 )
    sub_1CE6958(0, v279);
  LODWORD(v496) = 0;
  while ( 1 )
  {
LABEL_186:
    v280 = v505->klass;
    v281 = *(unsigned __int16 *)&v505->klass->_2.rank;
    if ( *(_WORD *)&v505->klass->_2.rank )
    {
      v282 = &v280->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v282 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v281;
        v282 += 4;
        if ( !v281 )
          goto LABEL_190;
      }
      v283 = (__int64)&v280->vtable[*v282];
    }
    else
    {
LABEL_190:
      v283 = sub_1CBCA7C(v505, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v283)(v505, *(_QWORD *)(v283 + 8)) & 1) == 0 )
      break;
    v284 = v505->klass;
    v285 = *(unsigned __int16 *)&v505->klass->_2.rank;
    if ( *(_WORD *)&v505->klass->_2.rank )
    {
      v286 = (System_Collections_IEnumerator_c **)&v284->_1.interfaceOffsets->offset;
      while ( *(v286 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v285;
        v286 += 2;
        if ( !v285 )
          goto LABEL_197;
      }
      v287 = (__int64)&v284->vtable[*(_DWORD *)v286 + 1];
    }
    else
    {
LABEL_197:
      v287 = sub_1CBCA7C(v505, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v288 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v287)(
                                        v505,
                                        *(_QWORD *)(v287 + 8));
    if ( !v288 )
      sub_1CE6958(0, v289);
    v290 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v288->klass->_2.naturalAligment < (unsigned int)v290
      || (UnityEngine_Transform_c *)v288->klass->_2.typeHierarchy[v290 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1CE6CF4(v288);
      goto LABEL_430;
    }
    v291 = UnityEngine_Component__get_gameObject(v288, 0);
    if ( !v291 )
      sub_1CE6958(0, v292);
    v293 = UnityEngine_GameObject__GetComponent_object_(
             v291,
             (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v295 = (WellFired_USTimelineContainer_o *)v293;
    if ( !v293 )
      sub_1CE6958(0, v294);
    v296 = (System_String_o *)v293[2].monitor;
    if ( !v296 )
      sub_1CE6958(0, v294);
    v298 = System_String__StartsWith(v296, (System_String_o *)StringLiteral_1055/*"/AllEffects/"*/, 0);
    if ( v298 )
    {
      affectedObjectPath = v295->fields.affectedObjectPath;
      if ( !affectedObjectPath )
        sub_1CE6958(0, v297);
      v300 = System_String__Substring(affectedObjectPath, 12, 0);
    }
    else
    {
      v300 = 0;
    }
    v301 = v295->fields.affectedObjectPath;
    if ( !v301 )
      sub_1CE6958(0, v297);
    v303 = System_String__StartsWith(v301, (System_String_o *)StringLiteral_1076/*"/CutIns/"*/, 0);
    if ( v303 )
    {
      v304 = v295->fields.affectedObjectPath;
      if ( !v304 )
        sub_1CE6958(0, v302);
      v300 = System_String__Substring(v304, 8, 0);
    }
    v305 = v295->fields.affectedObjectPath;
    if ( !v305 )
      sub_1CE6958(0, v302);
    if ( System_String__StartsWith(v305, (System_String_o *)StringLiteral_1073/*"/BattleCamera"*/, 0) )
      goto LABEL_217;
    v307 = v295->fields.affectedObjectPath;
    if ( !v307 )
      sub_1CE6958(0, v306);
    if ( System_String__StartsWith(v307, (System_String_o *)StringLiteral_1075/*"/Cameras/BattleCamera"*/, 0) )
    {
LABEL_217:
      v308 = (UnityEngine_Component_o *)v506->fields.actorCamera;
      if ( !v308 )
        sub_1CE6958(0, v306);
      v309 = UnityEngine_Component__get_transform(v308, 0);
      WellFired_USTimelineContainer__set_AffectedObject(v295, v309, 0);
      continue;
    }
    v310 = v295->fields.affectedObjectPath;
    if ( !v310 )
      sub_1CE6958(0, v306);
    if ( !System_String__StartsWith(v310, (System_String_o *)StringLiteral_1050/*"/Actor/chr"*/, 0) )
    {
      v351 = v295->fields.affectedObjectPath;
      if ( !v351 )
        sub_1CE6958(0, v311);
      v352 = System_String__StartsWith(v351, (System_String_o *)StringLiteral_1061/*"/BattleActors/"*/, 0);
      if ( v352 )
        v300 = v295->fields.affectedObjectPath;
      if ( !v300 )
        continue;
      if ( BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v352, v300, v353) )
      {
        if ( v298 )
        {
          v356 = System_String__IndexOf(v300, 0x2Fu, 0);
          if ( v356 < 0 )
          {
            if ( (v496 & 1) != 0 )
            {
              seqb = 0;
              goto LABEL_288;
            }
            seqb = 0;
            v380 = 0;
            LODWORD(v496) = 0;
          }
          else
          {
            seqb = System_String__Substring(v300, v356 + 1, 0);
            v300 = System_String__Substring_65168768(v300, 0, v356, 0);
LABEL_288:
            v381 = (System_Collections_Generic_List_object__o *)v506->fields.createdObjects;
            if ( !v381 )
              sub_1CE6958(0, v355);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v507,
              v381,
              (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
            v510 = v507;
            while ( 1 )
            {
              v382 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                       &v510,
                       (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
              if ( !v382 )
                break;
              v380 = v510.fields._current;
              if ( !v510.fields._current )
                sub_1CE6958(v382, v383);
              v384 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v510.fields._current, 0);
              if ( !v384 )
                sub_1CE6958(0, v385);
              v386 = System_String__Replace_65169392(
                       v384,
                       (System_String_o *)StringLiteral_683/*"(Clone)"*/,
                       (System_String_o *)StringLiteral_1/*""*/,
                       0);
              if ( System_String__op_Equality(v300, v386, 0) )
              {
                HIDWORD(v496) = 0;
                goto LABEL_296;
              }
            }
            HIDWORD(v496) = 0;
            v380 = 0;
LABEL_296:
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v510,
              (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
            LODWORD(v496) = 1;
          }
        }
        else
        {
          seqb = 0;
          v380 = 0;
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v380, 0, 0) )
        {
          v380 = (Il2CppObject *)BattleSequenceManager__SearchPrefab(
                                   v506,
                                   v506->fields.treasureDeviceId,
                                   v300,
                                   unitIndex,
                                   v387);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v380, 0, 0) )
          {
            v395 = (System_Collections_Generic_List_object__o *)v506->fields.createdObjects;
            if ( !v395 )
              sub_1CE6958(0, v388);
            v396 = v395->fields._items;
            v397 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v395->fields._version;
            if ( !v396 )
              sub_1CE6958(v395, v388);
            v398 = v395->fields._size;
            if ( (unsigned int)v398 >= LODWORD(v396->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v395,
                v380,
                *(const MethodInfo_3905F68 **)(*(_QWORD *)(v397[4] + 192LL) + 112LL));
            }
            else
            {
              v399 = &v396->obj.klass + v398;
              v395->fields._size = v398 + 1;
              v399[4] = (Il2CppClass *)v380;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v399 + 4), (int32_t)v380, v389, v390, v391, v392, v393, v394);
            }
            if ( !v380 )
              sub_1CE6958(v400, v401);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v380, 0, 0);
          }
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v380, 0, 0) )
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(seqb, 0);
          if ( IsNullOrEmpty )
          {
            if ( !v380 )
              sub_1CE6958(IsNullOrEmpty, v403);
            v404 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v380, 0);
            WellFired_USTimelineContainer__set_AffectedObject(v295, v404, 0);
            if ( v303 )
            {
              v405 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v380, 0);
              if ( !v405 )
                sub_1CE6958(0, v406);
              localPosition = UnityEngine_Transform__get_localPosition(v405, 0);
              v407 = localPosition.fields.x;
              v408 = localPosition.fields.y;
              v409 = localPosition.fields.z;
              v411 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v380, 0);
              CutInRoot = v506->fields.CutInRoot;
              if ( !CutInRoot )
                sub_1CE6958(0, v410);
              v413 = UnityEngine_GameObject__get_transform(CutInRoot, 0);
              if ( !v411 )
                sub_1CE6958(v413, v413);
              UnityEngine_Transform__set_parent(v411, v413, 0);
              v414 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v380, 0);
              if ( !v414 )
                sub_1CE6958(0, v415);
              v516.fields.x = v407;
              v516.fields.y = v408;
              v516.fields.z = v409;
              UnityEngine_Transform__set_localPosition(v414, v516, 0);
              BattleSequenceManager__updateCutInEvents(v416, sourcea, v300, (UnityEngine_GameObject_o *)v380, v417);
              v418 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3133/*"BattleCutIn"*/, 0);
              if ( !NGUITools_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
              goto LABEL_323;
            }
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v380, 0);
            if ( layer != UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3128/*"BattleBG"*/, 0) )
            {
              v418 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3126/*"Battle2D"*/, 0);
              if ( !NGUITools_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
LABEL_323:
              NGUITools__SetLayer((UnityEngine_GameObject_o *)v380, v418, 0);
            }
          }
          else
          {
            if ( !v380 )
              sub_1CE6958(IsNullOrEmpty, v403);
            v419 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v380, 0);
            if ( !v419 )
              sub_1CE6958(0, v420);
            v421 = UnityEngine_Transform__Find(v419, seqb, 0);
            WellFired_USTimelineContainer__set_AffectedObject(v295, v421, 0);
          }
        }
      }
      v422 = v295->fields.affectedObjectPath;
      if ( !v422 )
        sub_1CE6958(0, v354);
      if ( System_String__StartsWith(v422, (System_String_o *)StringLiteral_1061/*"/BattleActors/"*/, 0) )
      {
        v424 = v295->fields.affectedObjectPath;
        if ( !v424 )
          sub_1CE6958(0, v423);
        v425 = System_String__Substring_65168768(v424, v424->fields._stringLength - 1, 1, 0);
        targetPosIndex = 1;
        System_Int32__TryParse(v425, &targetPosIndex, 0);
        v427 = --targetPosIndex;
        if ( v250 >= 2 )
        {
          BattleSequenceManager__targetMultipleAttach(v506, v295, v427, v426);
          BattleSequenceManager__SyncAttachedTargetPair(v506, v295, targetPosIndex, v428);
        }
        else
        {
          BattleSequenceManager__targetSingleAttach(v506, v295, v427, v426);
        }
      }
      EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                     (UnityEngine_Component_o *)v295,
                     1,
                     (const MethodInfo_31FB89C *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v431 = EventCount;
      if ( !EventCount )
        sub_1CE6958(0, v430);
      max_length = EventCount->max_length;
      if ( max_length < 1 )
        continue;
      v433 = 0;
      while ( 1 )
      {
        if ( v433 >= max_length )
          sub_1CE6960(EventCount);
        v434 = (WellFired_USTimelineEvent_o *)v431->m_Items[v433];
        if ( !v434 )
          sub_1CE6958(EventCount, v430);
        for ( j = 0; ; ++j )
        {
          EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v434, 0);
          if ( j >= (int)EventCount )
            break;
          v436 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v434, j, 0);
          v30 = (unsigned __int64)v436;
          if ( !v436 )
            goto LABEL_428;
          v438 = UnityEngine_Object__get_name(v436, 0);
          if ( System_String__op_Equality(v438, (System_String_o *)StringLiteral_15018/*"USFGOAttachToParentEvent"*/, 0) )
          {
            v439 = WellFired_USFGOAttachToParentEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) < (unsigned int)v439
              || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v30 + 200LL) + 8 * v439 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
            {
              goto LABEL_427;
            }
            v440 = System_String__op_Equality(*(System_String_o **)(v30 + 80), (System_String_o *)StringLiteral_3130/*"BattleCamera"*/, 0);
            if ( v440 )
            {
              v448 = (UnityEngine_Component_o *)v506->fields.actorCamera;
              if ( !v448 )
                sub_1CE6958(0, v441);
              v449 = UnityEngine_Component__get_transform(v448, 0);
              *(_QWORD *)(v30 + 64) = v449;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v30 + 64), (int32_t)v449, v450, v451, v452, v453, v454, v455);
            }
            else
            {
              if ( !v45 )
                sub_1CE6958(v440, v441);
              v456 = v45->fields._items;
              v457 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
              ++v45->fields._version;
              if ( !v456 )
                sub_1CE6958(v440, v441);
              v458 = v45->fields._size;
              if ( (unsigned int)v458 >= LODWORD(v456->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v45,
                  (Il2CppObject *)v30,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v457[4] + 192LL) + 112LL));
              }
              else
              {
                v459 = &v456->obj.klass + v458;
                v45->fields._size = v458 + 1;
                v459[4] = (Il2CppClass *)v30;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v459 + 4), v30, v442, v443, v444, v445, v446, v447);
              }
            }
          }
        }
        max_length = v431->max_length;
        if ( (int)++v433 >= max_length )
          goto LABEL_186;
      }
    }
    actor = v506->fields.actor;
    if ( !actor )
      sub_1CE6958(0, v311);
    v314 = UnityEngine_GameObject__get_transform(actor, 0);
    v315 = v295->fields.affectedObjectPath;
    if ( !v315 )
      sub_1CE6958(0, v313);
    v316 = System_String__Replace_65169392(
             v315,
             (System_String_o *)StringLiteral_1050/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_18160/*"chr(Clone)"*/,
             0);
    if ( !v314 )
      sub_1CE6958(v316, v316);
    v317 = UnityEngine_Transform__Find(v314, v316, 0);
    WellFired_USTimelineContainer__set_AffectedObject(v295, v317, 0);
    AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v295, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(AffectedObject, 0, 0) )
      continue;
    v320 = v295->fields.affectedObjectPath;
    if ( !v320 )
      sub_1CE6958(0, v319);
    v321 = System_String__StartsWith(v320, (System_String_o *)StringLiteral_1052/*"/Actor/chr/body_level_"*/, 0);
    v323 = &StringLiteral_17510/*"body_level_"*/;
    if ( !v321 )
    {
      v324 = v295->fields.affectedObjectPath;
      if ( !v324 )
        sub_1CE6958(0, v322);
      v325 = System_String__StartsWith(v324, (System_String_o *)StringLiteral_1053/*"/Actor/chr/weapon_level_"*/, 0);
      v323 = &StringLiteral_25207/*"weapon_level_"*/;
      if ( !v325 )
        continue;
    }
    v326 = (System_String_o *)*v323;
    if ( !*v323 )
      continue;
    v327 = v506->fields.actor;
    if ( !v327 )
      sub_1CE6958(0, v322);
    seqa = (System_String_o *)StringLiteral_1/*""*/;
    v328 = UnityEngine_GameObject__get_transform(v327, 0);
    if ( !v328 )
      sub_1CE6958(0, v329);
    v330 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v328, (System_String_o *)StringLiteral_18160/*"chr(Clone)"*/, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v331 = UnityEngine_Object__op_Inequality(v330, 0, 0);
    if ( !v331 )
      goto LABEL_275;
    if ( !v330 )
      sub_1CE6958(v331, v332);
    v334 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v330, 0);
    if ( !v334 )
      sub_1CE6958(0, v333);
    do
    {
      v335 = v334->klass;
      v336 = *(unsigned __int16 *)&v334->klass->_2.rank;
      if ( *(_WORD *)&v334->klass->_2.rank )
      {
        v337 = &v335->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v337 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v336;
          v337 += 4;
          if ( !v336 )
            goto LABEL_243;
        }
        v338 = (__int64)&v335->vtable[*v337];
      }
      else
      {
LABEL_243:
        v338 = sub_1CBCA7C(v334, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v338)(v334, *(_QWORD *)(v338 + 8)) & 1) == 0 )
        goto LABEL_267;
      v339 = v334->klass;
      v340 = *(unsigned __int16 *)&v334->klass->_2.rank;
      if ( *(_WORD *)&v334->klass->_2.rank )
      {
        v341 = (System_Collections_IEnumerator_c **)&v339->_1.interfaceOffsets->offset;
        while ( *(v341 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v340;
          v341 += 2;
          if ( !v340 )
            goto LABEL_250;
        }
        v342 = (__int64)&v339->vtable[*(_DWORD *)v341 + 1];
      }
      else
      {
LABEL_250:
        v342 = sub_1CBCA7C(v334, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v343 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v342)(
                                          v334,
                                          *(_QWORD *)(v342 + 8));
      v345 = (UnityEngine_Object_o *)v343;
      if ( !v343 )
        sub_1CE6958(0, v344);
      v346 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v343->klass->_2.naturalAligment < (unsigned int)v346
        || (UnityEngine_Transform_c *)v343->klass->_2.typeHierarchy[v346 - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1CE6CF4(v343);
        v487 = v486;
        v495 = v488;
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v510,
          (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        if ( v496 )
          sub_1CE6950(v496);
        if ( v487 != 1 )
        {
          v489 = sub_1CE683C(v505, System_IDisposable_TypeInfo);
          v490 = v489;
          if ( v489 )
          {
            v491 = *(_QWORD *)v489;
            v492 = *(unsigned __int16 *)(*(_QWORD *)v489 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v489 + 302LL) )
            {
              v493 = (int *)(*(_QWORD *)(v491 + 176) + 8LL);
              while ( *((System_IDisposable_c **)v493 - 1) != System_IDisposable_TypeInfo )
              {
                --v492;
                v493 += 4;
                if ( !v492 )
                  goto LABEL_500;
              }
              v494 = v491 + 16LL * *v493 + 312;
            }
            else
            {
LABEL_500:
              v494 = sub_1CBCA7C(v489, System_IDisposable_TypeInfo, 0);
            }
            (*(void (__fastcall **)(__int64, _QWORD))v494)(v490, *(_QWORD *)(v494 + 8));
          }
          sub_1DCA8DC();
        }
        v461 = *(_QWORD *)__cxa_begin_catch(v495);
        __cxa_end_catch();
        goto LABEL_367;
      }
      v347 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v343, 0);
      if ( !v347 )
        sub_1CE6958(0, v348);
      v349 = UnityEngine_Object__get_name(v347, 0);
      if ( !v349 )
        sub_1CE6958(0, v350);
    }
    while ( !System_String__StartsWith(v349, v326, 0) );
    seqa = UnityEngine_Object__get_name(v345, 0);
LABEL_267:
    v357 = sub_1CE683C(v334, System_IDisposable_TypeInfo);
    v358 = v357;
    if ( v357 )
    {
      v359 = *(_QWORD *)v357;
      v360 = *(unsigned __int16 *)(*(_QWORD *)v357 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v357 + 302LL) )
      {
        v361 = (int *)(*(_QWORD *)(v359 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v361 - 1) != System_IDisposable_TypeInfo )
        {
          --v360;
          v361 += 4;
          if ( !v360 )
            goto LABEL_272;
        }
        v362 = v359 + 16LL * *v361 + 312;
      }
      else
      {
LABEL_272:
        v362 = sub_1CBCA7C(v357, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v362)(v358, *(_QWORD *)(v362 + 8));
    }
LABEL_275:
    v363 = v295->fields.affectedObjectPath;
    v364 = System_String__Concat_65122828((System_String_o *)StringLiteral_1051/*"/Actor/chr/"*/, v326, 0);
    if ( !v364 )
      sub_1CE6958(0, v365);
    if ( !v363 )
      sub_1CE6958(v364, v365);
    v366 = System_String__Substring(v363, v364->fields._stringLength, 0);
    if ( !v366 )
      sub_1CE6958(0, v367);
    v368 = System_String__Split(v366, 0x2Fu, 0, 0);
    if ( !v368 )
      sub_1CE6958(0, v369);
    if ( !LODWORD(v368->max_length) )
      sub_1CE6960(v368);
    v371 = System_String__Concat_65122828(v326, v368->m_Items[0], 0);
    v372 = v506->fields.actor;
    if ( !v372 )
      sub_1CE6958(0, v370);
    v374 = UnityEngine_GameObject__get_transform(v372, 0);
    v375 = v295->fields.affectedObjectPath;
    if ( !v375 )
      sub_1CE6958(0, v373);
    v376 = System_String__Replace_65169392(
             v375,
             (System_String_o *)StringLiteral_1050/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_18160/*"chr(Clone)"*/,
             0);
    if ( !v376 )
      sub_1CE6958(0, v377);
    v378 = System_String__Replace_65169392(v376, v371, seqa, 0);
    if ( !v374 )
      sub_1CE6958(v378, v378);
    v379 = UnityEngine_Transform__Find(v374, v378, 0);
    WellFired_USTimelineContainer__set_AffectedObject(v295, v379, 0);
  }
  v461 = 0;
LABEL_367:
  seqObject = sub_1CE683C(v505, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v462 = *(_QWORD *)seqObject;
    v463 = seqObject;
    v464 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v465 = (int *)(*(_QWORD *)(v462 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v465 - 1) != System_IDisposable_TypeInfo )
      {
        --v464;
        v465 += 4;
        if ( !v464 )
          goto LABEL_372;
      }
      v466 = v462 + 16LL * *v465 + 312;
    }
    else
    {
LABEL_372:
      v466 = sub_1CBCA7C(seqObject, System_IDisposable_TypeInfo, 0);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v466)(v463, *(_QWORD *)(v466 + 8));
  }
  if ( v461 )
    sub_1CE6950(v461);
  if ( !v45 )
LABEL_420:
    sub_1CE6958(seqObject, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v507,
    v45,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( k = v507;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &k,
          (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)k.fields._current,
          v506->fields.performance,
          v506->fields.actor,
          v506->fields.createdObjects,
          0) )
  {
    if ( !k.fields._current )
      sub_1CE6958(0, v467);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &k,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  v468 = *v497;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v468, 0, 0) )
  {
    seqObject = (__int64)*v497;
    if ( !*v497 )
      goto LABEL_420;
    if ( *(_BYTE *)(seqObject + 560) )
      goto LABEL_411;
    v469 = *(_QWORD *)(seqObject + 536);
    if ( !v469 )
      goto LABEL_420;
    if ( !*(_DWORD *)(v469 + 356) && !BattleActorControl__isNoVoice((BattleActorControl_o *)seqObject, 0) )
    {
      v470 = (UnityEngine_Object_o *)v506->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v470, 0, 0);
      if ( (seqObject & 1) != 0 )
      {
        v471 = v506->fields.performance;
        if ( !v471 )
          goto LABEL_420;
        data = (UnityEngine_Object_o *)v471->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(data, 0, 0) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_VoiceMaster___);
            v506->fields.isAlreadyRegistDefaultVoice = 0;
            chrId = v506->fields.chrId;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   v506,
                   (VoiceMaster_o *)MasterData_object,
                   chrId,
                   FileName,
                   v476) )
            {
              v506->fields.isAlreadyRegistDefaultVoice = 1;
            }
            v477 = v506->fields.chrId;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v478 = Voice__getFileName(111, 0);
            BattleSequenceManager__addServantVoicePlayed(v506, (VoiceMaster_o *)MasterData_object, v477, v478, v479);
            if ( *v497 )
            {
              v480 = (*v497)[22].monitor;
              if ( v480 )
              {
                v481 = v480[192];
                v482 = BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  v482 = BalanceConfig_TypeInfo;
                }
                if ( v481 == v482->static_fields->TreasureDeviceIdMashu3 )
                {
                  v483 = v506->fields.chrId;
                  if ( !Voice_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  v484 = Voice__getFileName(121, 0);
                  BattleSequenceManager__addServantVoicePlayed(
                    v506,
                    (VoiceMaster_o *)MasterData_object,
                    v483,
                    v484,
                    v485);
                }
                goto LABEL_411;
              }
            }
          }
          goto LABEL_420;
        }
      }
    }
  }
LABEL_411:
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

  if ( (byte_4E077F5 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4E077F5 = 1;
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
                                                                            (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
                                                                            (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
    sub_1CE6958(battleTargetList, tlcont);
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

  if ( (byte_4E077F9 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_GameObject_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    sub_1CE6700(&StringLiteral_14663/*"Tmp_Target"*/);
    byte_4E077F9 = 1;
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
                                                                        (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
      sub_1CE6958(battleTargetList, tlcont);
    }
    v8 = (UnityEngine_GameObject_o *)sub_1CE694C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v8, (System_String_o *)StringLiteral_14663/*"Tmp_Target"*/, 0);
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

  if ( (byte_4E077E0 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__);
    this = (BattleSequenceManager_o *)sub_1CE6700(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
    byte_4E077E0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !evs )
    sub_1CE6958(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v20,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1CE6958(v8, v9);
    if ( System_String__op_Equality(
           *(System_String_o **)((char *)&v20.fields._current->klass + (unsigned __int64)&dword_40),
           cutInName,
           0) )
    {
      *(_QWORD *)((char *)&word_38 + (_QWORD)current) = obj;
      sub_1CE66A4(
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
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v10 && v18 == 4;
}


void BattleSequenceManager_BattleTarget___ctor(BattleSequenceManager_BattleTarget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4DFE0A9 )
  {
    sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
    byte_4DFE0A9 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_4DFE0AF )
  {
    sub_1CE6700(&UnityEngine_Quaternion_TypeInfo);
    byte_4DFE0AF = 1;
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
      sub_1CE6958(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0);
  }
  this->fields.targetActor = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.targetActor, 0, v2, v3, v4, v5, v6, v7);
}


UnityEngine_GameObject_o *BattleSequenceManager_BattleTarget__saveTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *targetActor; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
    sub_1CE6958(targetActor, method);
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
  sub_1CE66A4(
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
  bool result; // w0

  v8 = this;
  if ( (byte_4E07815 & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__108_o *)sub_1CE6700(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4E07815 = 1;
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
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1CE694C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0);
    v8->fields._wait_5__2 = v11;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v8->fields._wait_5__2, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1CE6958(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v8->fields._wait_5__2;
    v8->fields.__2__current = wait_5__2;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1CE66A4(p__2__current, (int32_t)wait_5__2, v2, v3, v4, v5, v6, v7);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return result;
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

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_BattleSequenceManager__WaitEndSequence_d__108_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
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

  if ( (byte_4E0780F & 1) == 0 )
  {
    sub_1CE6700(&BattleSequenceManager___c_TypeInfo);
    byte_4E0780F = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v1;
  sub_1CE66A4(
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
    sub_1CE6958(this, x1);
  return System_Single__CompareTo_66715892(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
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
    sub_1CE6958(this, x1);
  return System_Single__CompareTo_66715892(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_0(
        BattleSequenceManager___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_1(
        BattleSequenceManager___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_2(
        BattleSequenceManager___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___setup_b__88_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1CE6958(this, 0);
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
    sub_1CE6958(this, x);
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
  if ( (byte_4E07810 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass117_0_o *)sub_1CE6700(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4E07810 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass117_0_o *)v4->fields.targetList) == 0 )
    sub_1CE6958(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_37AE4C4 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_1CE6958(this, 0);
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
    sub_1CE6958(this, 0);
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
  if ( (byte_4E07811 & 1) == 0 )
  {
    sub_1CE6700(&Method_AssetData_GetObject_GameObject____79905008);
    sub_1CE6700(&ServantAssetLoadManager_TypeInfo);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__);
    sub_1CE6700(&StringLiteral_13174/*"StandardCutIn"*/);
    this = (BattleSequenceManager___c__DisplayClass75_0_o *)sub_1CE6700(&ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    byte_4E07811 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass75_0_o *)AssetData__GetObject_object__52317288(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13174/*"StandardCutIn"*/,
                                                                  (const MethodInfo_31E4C68 *)Method_AssetData_GetObject_GameObject____79905008),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1CE66A4(
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
    sub_1CE6958(this, data);
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
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1CE694C(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_4E07812 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__);
    sub_1CE6700(&BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
    sub_1CE6700(&StringLiteral_9592/*"NoblePhantasm_"*/);
    byte_4E07812 = 1;
  }
  v5 = sub_1CE694C(BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 24) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = obj;
  v14 = (__int64 *)(v5 + 16);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)obj, v15, v16, v17, v18, v19, v20);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  v27 = *v14;
  *((_QWORD *)_4__this + 9) = *v14;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)((char *)_4__this + 72), v27, v21, v22, v23, v24, v25, v26);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v30 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0);
  v31 = System_String__Concat_65122828((System_String_o *)StringLiteral_9592/*"NoblePhantasm_"*/, v30, 0);
  v32 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
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
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__52808288(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_325CA60 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
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
      sub_1CE6960(_4__this);
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
    sub_1CE6958(_4__this, v7);
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
  if ( (byte_4E07813 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
    sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E07813 = 1;
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
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52808288(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_325CA60 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
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
        sub_1CE6960(this);
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
    sub_1CE6958(this, method);
  }
LABEL_15:
  v12 = v2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_20;
  v13 = v12->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v15, v16, v17, v18, v19, v20);
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
  if ( (byte_4E07814 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_1CE6700(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__);
    byte_4E07814 = 1;
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
                                                            (const MethodInfo_325C0A0 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
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
                                                            (const MethodInfo_325C0A0 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
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
                                 (const MethodInfo_325C0A0 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
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
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
    sub_1CE66A4(
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
      _9__4 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__,
        0);
      v2->fields.__9__4 = _9__4;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v58, v59, v60, v61, v62, v63);
    }
    if ( !v53 )
LABEL_73:
      sub_1CE6958(this, method);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UIStandFigureM__SetCharacter_45161052(
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, 0);
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
    sub_1CE6958(this, method);
  BattleSequenceManager__LoadEndStandFigure(this->fields.__4__this, this->fields.obj, this->fields.onComplete, v2);
}


void BattleSequenceManager___c__DisplayClass88_0___ctor(
        BattleSequenceManager___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSequenceManager___c__DisplayClass88_0___setup_b__1(
        BattleSequenceManager___c__DisplayClass88_0_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattlePerformance_o *performance; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (performance = _4__this->fields.performance) == 0 || !comp )
    sub_1CE6958(this, comp);
  SwitchActiveBaseConditionComponent__SwitchActive(comp, performance->fields.data, this->fields.bac, 0);
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
  sub_1CE66A4(
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
  if ( (sub_1CE67C0(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1B1A82C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1B1A80C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1B1A7C4;
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
  return (System_IAsyncResult_o *)sub_1CE66B4(this, &v6, callback, object);
}


void BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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
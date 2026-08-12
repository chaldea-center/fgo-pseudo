void BattleSequenceManager___cctor(const MethodInfo *method)
{
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_59735F6 & 1) == 0 )
  {
    sub_2213A60(&BattleSequenceManager_TypeInfo);
    byte_59735F6 = 1;
  }
  static_fields = BattleSequenceManager_TypeInfo->static_fields;
  static_fields->defaultForceObi_16_9 = 1;
  static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_string__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_List_object__o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_List_object__o *v39; // x20
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_List_object__o *v46; // x20
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_Dictionary_object__int__o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_Generic_HashSet_object__o *v60; // x20
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  const MethodInfo_47A2F28 *v67; // x1

  if ( (byte_59735F5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Object__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_Action__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
    sub_2213A60(&StringLiteral_9759/*"N_{0}{1}"*/);
    byte_59735F5 = 1;
  }
  v3 = System_Collections_Generic_List_string__TypeInfo;
  this->fields.testNpPer = 500;
  this->fields.servantId = 100100;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.ReleaseSoundNames, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.DelayInvokeMethodList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = StringLiteral_9759/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9759/*"N_{0}{1}"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.PosNodeFormatNP, v18, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.npEndDeleteObjects,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
  System_Collections_Generic_Dictionary_object__Color____ctor(
    v32,
    (const MethodInfo_3FE9810 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
  this->fields.rendererBaseAddColorsDict = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__o *)v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rendererBaseAddColorsDict,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v39;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleTargetList,
    (int32_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v46,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v46;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.createdObjects,
    (int32_t)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v53,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v53;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v60,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v60;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playedAudioGroupIdHash,
    (int32_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__;
  this->fields.nowTargetAlpha = 1.0;
  SingletonMonoBehaviour_object____ctor((SingletonMonoBehaviour_T__o *)this, v67);
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

  if ( (byte_59735D5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26090/*"wait"*/);
    byte_59735D5 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actor);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v5 )
  {
    if ( !actor )
      sub_2213CDC(v5, v6);
    BattleActorControl__RevertDefaultAnimation(actor, 0);
    BattleActorControl__playAnimation_54351892(actor, (System_String_o *)StringLiteral_26090/*"wait"*/, 0, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.executingTdInfoCache = info;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.executingTdInfoCache,
    (int32_t)info,
    (System_String_o *)method,
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
  BattlePerformance_o *v5; // x20
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  __int64 DisplayTypeDetailEntity; // x0
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x20
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  BattleActorControl_o *v25; // x20
  BattleServantData_o *v26; // x0
  __int64 v27; // x20
  __int64 v28; // x8
  unsigned __int64 v29; // x27
  Il2CppObject *v30; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x22
  __int64 v32; // x20
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  System_Nullable_Color__o v39; // [xsp+Ch] [xbp-A4h] BYREF
  __int64 v40; // [xsp+20h] [xbp-90h]
  __int64 *v41; // [xsp+28h] [xbp-88h]
  System_Nullable_Color__o v42; // [xsp+30h] [xbp-80h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  __int64 v44; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59735F3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Color__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_Color__get_Value__);
    byte_59735F3 = 1;
  }
  performance = this->fields.performance;
  v44 = 0;
  entity = 0;
  memset(&v42, 0, sizeof(v42));
  if ( !performance
    || (performance = (BattlePerformance_o *)BattlePerformance__EnumerateActorControls(performance, 0)) == 0 )
  {
    sub_2213CDC(performance, method);
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
    v8 = sub_224BC3C(performance, System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, 0);
  }
  DisplayTypeDetailEntity = (*(__int64 (__fastcall **)(BattlePerformance_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  v44 = DisplayTypeDetailEntity;
  v40 = 0;
  v41 = &v44;
  if ( !DisplayTypeDetailEntity )
LABEL_39:
    sub_2213CDC(DisplayTypeDetailEntity, v10);
  v11 = DisplayTypeDetailEntity;
  while ( 1 )
  {
    v12 = *(_QWORD *)v11;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_17:
      v15 = sub_224BC3C(v11, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    v18 = v44;
    if ( !v44 )
      sub_2213CDC(v16, v17);
    v19 = *(_QWORD *)v44;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleActorControl__c **)v21 - 1) != System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_25;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_25:
      v22 = sub_224BC3C(v44, System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
    v25 = (BattleActorControl_o *)v23;
    if ( !v23 )
      sub_2213CDC(0, v24);
    v26 = *(BattleServantData_o **)(v23 + 552);
    if ( !v26 )
      sub_2213CDC(0, v24);
    DisplayTypeDetailEntity = BattleServantData__TryGetDisplayTypeDetailEntity(v26, &entity, 0);
    if ( (DisplayTypeDetailEntity & 1) != 0 )
    {
      if ( !entity )
        sub_2213CDC(0, v10);
      DisplayTypeDetailEntity = (__int64)NpcServantDisplayTypeDetailEntity__get_AddColor(&v39, entity, 0);
      v42 = v39;
      if ( v39.fields.hasValue )
      {
        DisplayTypeDetailEntity = (__int64)BattleActorControl__GetRendererArray(v25, 1, 0);
        v27 = DisplayTypeDetailEntity;
        if ( !DisplayTypeDetailEntity )
          sub_2213CDC(0, v10);
        v28 = *(_QWORD *)(DisplayTypeDetailEntity + 24);
        if ( (int)v28 >= 1 )
        {
          v29 = 0;
          do
          {
            if ( v29 >= (unsigned int)v28 )
              sub_2213CE4(DisplayTypeDetailEntity);
            v30 = *(Il2CppObject **)(v27 + 32 + 8 * v29);
            rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
            Value = System_Nullable_Color___get_Value(
                      &v42,
                      (const MethodInfo_45E1980 *)Method_System_Nullable_Color__get_Value__);
            if ( !rendererBaseAddColorsDict )
              sub_2213CDC(v37, v38);
            System_Collections_Generic_Dictionary_object__Color___set_Item(
              rendererBaseAddColorsDict,
              v30,
              Value,
              (const MethodInfo_3FEA1A4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
            LODWORD(v28) = *(_DWORD *)(v27 + 24);
            ++v29;
          }
          while ( (__int64)v29 < (int)v28 );
        }
      }
    }
    v11 = v44;
    if ( !v44 )
      goto LABEL_39;
  }
  v32 = v44;
  if ( v44 )
  {
    v33 = *(_QWORD *)v44;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_45;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_45:
      v36 = sub_224BC3C(v44, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
  }
}


bool BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_59735EB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_string___);
    byte_59735EB = 1;
  }
  if ( System_String__Equals_75687256(bgmName, this->fields.BackupBgmName, 0) )
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
              (const MethodInfo_3876940 *)Method_System_Linq_Enumerable_Contains_string___);
  }
}


void BattleSequenceManager__ClearExecutingTdInfoCache(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.executingTdInfoCache = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.executingTdInfoCache, 0, v2, v3, v4, v5, v6, v7);
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
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, const MethodInfo *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.methodPtr)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_53328744(this, obj, onComplete, v8);
}


bool BattleSequenceManager__CreateCutInStandFigure_53328744(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v29; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v41; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v45; // x24

  if ( (byte_59735BE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__);
    sub_2213A60(&BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
    byte_59735BE = 1;
  }
  v7 = sub_2213CCC(BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass79_0___ctor((BattleSequenceManager___c__DisplayClass79_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = obj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)obj, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = onComplete;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)onComplete, v22, v23, v24, v25, v26, v27);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.standFigure,
    (int32_t)MeshLocal,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
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
          v41 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v45,
            (Il2CppObject *)v7,
            Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__,
            0);
          if ( v41 )
            return UIStandFigureM__SetCharacter_51056312(
                     v41,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v45,
                     1,
                     0);
        }
      }
    }
LABEL_16:
    sub_2213CDC(Instance, v9);
  }
  return 0;
}


void BattleSequenceManager__CrossFadeBgm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 performance; // x0
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  System_String_o *v5; // x21
  struct System_String_o **p_BackupBgmName; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  _BOOL4 v13; // w21
  struct System_String_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL4 v21; // w22
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x23
  System_String_o *BgmName; // x0
  const MethodInfo *v32; // x3
  BgmPlayArgsGroup_o *v33; // x19
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x20
  __int64 v37; // x21
  const MethodInfo_45E4A50 *v38; // x3
  float v39; // s0
  System_Nullable_float__o v40; // x21
  float v41; // s0
  UnityEngine_GameObject_o *gameObject; // x19
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x20
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w1
  __int64 v53; // x1
  BattleSequenceManager_c *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  __int64 v61; // x21
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  int32_t v68; // w1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  __int64 v75; // x21
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  int32_t v82; // w1
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  __int64 v89; // x21
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  int32_t v96; // w1
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  int32_t v103; // w1
  __int64 v104; // x1
  System_Collections_Hashtable_o *v105; // x0
  struct BattlePerformance_o *v106; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v108; // x8
  struct BattlePerformance_o *v109; // x8
  __int64 v110; // x1
  System_String_o *v111; // x19
  __int64 v112; // x0
  System_Nullable_long__o v113; // [xsp+0h] [xbp-90h] BYREF
  System_Nullable_float__o v114; // [xsp+10h] [xbp-80h] BYREF
  _QWORD v115[2]; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+28h] [xbp-68h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+48h] [xbp-48h] BYREF
  System_Nullable_long__o v118; // 0:x0.16

  if ( (byte_59735D6 & 1) == 0 )
  {
    sub_2213A60(&BattleSequenceManager_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_10235/*"OnChangeBgmVolume"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    sub_2213A60(&iTween_TypeInfo);
    byte_59735D6 = 1;
  }
  performance = (__int64)this->fields.performance;
  changeBgm = 0;
  memset(&v116, 0, sizeof(v116));
  if ( !performance )
    goto LABEL_80;
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.BackupBgmName, (int32_t)v5, v7, v8, v9, v10, v11, v12);
    v13 = 1;
  }
  if ( BattleSequenceManager__TryGetAfterChangeBgm(this, &changeBgm, (const MethodInfo *)v7) )
  {
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_80;
    v14 = BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
            changeBgm,
            this->fields.performance,
            this->fields.BackupBgmName,
            0);
    this->fields.BackupBgmName = v14;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.BackupBgmName,
      (int32_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_80;
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.BackupBgmName,
      (int32_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_80;
    v21 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0);
    v13 = 1;
  }
  v30 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_80:
    sub_2213CDC(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0);
  if ( ((v21 | System_String__op_Inequality(v30, BgmName, 0)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    performance = sub_2213B20(object___TypeInfo, 8);
    if ( !performance )
      goto LABEL_80;
    v49 = performance;
    v50 = StringLiteral_20622/*"from"*/;
    if ( !StringLiteral_20622/*"from"*/ || (v50 = sub_2213BB4(StringLiteral_20622/*"from"*/, *(_QWORD *)(*(_QWORD *)v49 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v49 + 24) )
        goto LABEL_81;
      v52 = StringLiteral_20622/*"from"*/;
      *(_QWORD *)(v49 + 32) = StringLiteral_20622/*"from"*/;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 32), v52, v43, v44, v45, v46, v47, v48);
      v54 = BattleSequenceManager_TypeInfo;
      if ( !*(&BattleSequenceManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo, v53);
        v54 = BattleSequenceManager_TypeInfo;
      }
      *(float *)v115 = v54->static_fields->NoblePhantasmBgmVolumeRate;
      v50 = j_il2cpp_value_box_0(qword_5984378, v115);
      v61 = v50;
      if ( !v50 || (v50 = sub_2213BB4(v50, *(_QWORD *)(*(_QWORD *)v49 + 64LL))) != 0 )
      {
        if ( (*(_DWORD *)(v49 + 24) & 0xFFFFFFFE) == 0 )
          goto LABEL_81;
        *(_QWORD *)(v49 + 40) = v61;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 40), v61, v55, v56, v57, v58, v59, v60);
        v50 = StringLiteral_25406/*"to"*/;
        if ( !StringLiteral_25406/*"to"*/ || (v50 = sub_2213BB4(StringLiteral_25406/*"to"*/, *(_QWORD *)(*(_QWORD *)v49 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v49 + 24) <= 2u )
            goto LABEL_81;
          v68 = StringLiteral_25406/*"to"*/;
          *(_QWORD *)(v49 + 48) = StringLiteral_25406/*"to"*/;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 48), v68, v62, v63, v64, v65, v66, v67);
          *(_DWORD *)&v113.fields.hasValue = 1;
          v50 = j_il2cpp_value_box_0(qword_5984348, &v113);
          v75 = v50;
          if ( !v50 || (v50 = sub_2213BB4(v50, *(_QWORD *)(*(_QWORD *)v49 + 64LL))) != 0 )
          {
            if ( (*(_DWORD *)(v49 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_81;
            *(_QWORD *)(v49 + 56) = v75;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 56), v75, v69, v70, v71, v72, v73, v74);
            v50 = StringLiteral_25366/*"time"*/;
            if ( !StringLiteral_25366/*"time"*/
              || (v50 = sub_2213BB4(StringLiteral_25366/*"time"*/, *(_QWORD *)(*(_QWORD *)v49 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v49 + 24) <= 4u )
                goto LABEL_81;
              v82 = StringLiteral_25366/*"time"*/;
              *(_QWORD *)(v49 + 64) = StringLiteral_25366/*"time"*/;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 64), v82, v76, v77, v78, v79, v80, v81);
              *(_DWORD *)&v114.fields.hasValue = 1056964608;
              v50 = j_il2cpp_value_box_0(qword_5984378, &v114);
              v89 = v50;
              if ( !v50 || (v50 = sub_2213BB4(v50, *(_QWORD *)(*(_QWORD *)v49 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v49 + 24) <= 5u )
                  goto LABEL_81;
                *(_QWORD *)(v49 + 72) = v89;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 72), v89, v83, v84, v85, v86, v87, v88);
                v50 = StringLiteral_23573/*"onupdate"*/;
                if ( !StringLiteral_23573/*"onupdate"*/
                  || (v50 = sub_2213BB4(StringLiteral_23573/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v49 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v49 + 24) <= 6u )
                    goto LABEL_81;
                  v96 = StringLiteral_23573/*"onupdate"*/;
                  *(_QWORD *)(v49 + 80) = StringLiteral_23573/*"onupdate"*/;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 80), v96, v90, v91, v92, v93, v94, v95);
                  v50 = StringLiteral_10235/*"OnChangeBgmVolume"*/;
                  if ( !StringLiteral_10235/*"OnChangeBgmVolume"*/
                    || (v50 = sub_2213BB4(StringLiteral_10235/*"OnChangeBgmVolume"*/, *(_QWORD *)(*(_QWORD *)v49 + 64LL))) != 0 )
                  {
                    if ( (*(_DWORD *)(v49 + 24) & 0xFFFFFFF8) != 0 )
                    {
                      v103 = StringLiteral_10235/*"OnChangeBgmVolume"*/;
                      *(_QWORD *)(v49 + 88) = StringLiteral_10235/*"OnChangeBgmVolume"*/;
                      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 88), v103, v97, v98, v99, v100, v101, v102);
                      if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v104);
                      v105 = iTween__Hash((System_Object_array *)v49, 0);
                      iTween__ValueTo(gameObject, v105, 0);
                      return;
                    }
LABEL_81:
                    sub_2213CE4(v50);
                  }
                }
              }
            }
          }
        }
      }
    }
    v112 = sub_2213D00(v50, v51);
    sub_2213BA0(v112, 0);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v116,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v115[0] = 0;
          v115[1] = &v116;
          while ( 1 )
          {
            v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v116,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v34 )
              break;
            current = v116.fields._current;
            if ( !v116.fields._current )
              sub_2213CDC(v34, v35);
            v37 = *(__int64 *)((char *)&v116.fields._current->klass + (unsigned __int64)&qword_20);
            v114 = 0;
            System_Nullable_float____ctor(
              (System_Nullable_float__o)&v114,
              0.5,
              (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
            v39 = (float)v37;
            v40 = v114;
            *(_QWORD *)&v113.fields.hasValue = 0;
            v113.fields.value = 0;
            v41 = v39 + -800.0;
            if ( v41 == INFINITY )
              v118.fields.value = 0;
            else
              v118.fields.value = (int)v41 & (unsigned int)~((int)v41 >> 31);
            *(_QWORD *)&v118.fields.hasValue = &v113;
            System_Nullable_long____ctor(v118, Method_System_Nullable_long___ctor__, v38);
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, 0, v40, v113, 0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v116,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v110);
          BgmManager__PlayBgm_48157944(v33, 0, 0);
          return;
        }
      }
    }
    goto LABEL_80;
  }
  if ( v13 )
  {
    v106 = this->fields.performance;
    if ( !v106 )
      goto LABEL_80;
    logic = (UnityEngine_Object_o *)v106->fields.logic;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    performance = UnityEngine_Object__op_Inequality(logic, 0, 0);
    if ( (performance & 1) != 0 )
    {
      v108 = this->fields.performance;
      if ( v108 )
      {
        performance = (__int64)v108->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0, 0);
          v109 = this->fields.performance;
          if ( v109 )
          {
            performance = (__int64)v109->fields.logic;
            if ( performance )
            {
              BattleLogic__PlayCurrentBgm((BattleLogic_o *)performance, 0.5, 0);
              return;
            }
          }
        }
      }
      goto LABEL_80;
    }
  }
  v111 = *p_BackupBgmName;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__playBgm(v111, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v17; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_59735ED & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
    sub_2213A60(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__);
    sub_2213A60(&BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
    byte_59735ED = 1;
  }
  v7 = sub_2213CCC(BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass143_0___ctor((BattleSequenceManager___c__DisplayClass143_0_o *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = checkBgmName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)checkBgmName, v10, v11, v12, v13, v14, v15);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0;
  v17 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0);
  v18 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__59145568(
           (System_Collections_Generic_IEnumerable_TSource__o *)v17,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
    sub_2213CDC(0, method);
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
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__59472212; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *v15; // x21
  __int64 v16; // x1
  BattleSequenceManager___c_c *v17; // x0
  struct BattleSequenceManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__76_0; // x23
  Il2CppObject *v20; // x24
  struct BattleSequenceManager___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Func_object__bool__o *v28; // x23
  System_Collections_Generic_List_object__o *v29; // x21
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  __int64 v31; // x1
  BattleSequenceManager___c_c *v32; // x0
  struct BattleSequenceManager___c_StaticFields *v33; // x8
  System_Comparison_T__o *_9__76_2; // x20
  Il2CppObject *v35; // x22
  struct BattleSequenceManager___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x1
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_59735BD & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___);
    sub_2213A60(&System_Comparison_USFGOPlayAudioEvent__TypeInfo);
    sub_2213A60(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__);
    sub_2213A60(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_2213A60(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__);
    sub_2213A60(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__);
    sub_2213A60(&BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
    sub_2213A60(&BattleSequenceManager___c_TypeInfo);
    byte_59735BD = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v6 = sub_2213CCC(BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass76_0___ctor((BattleSequenceManager___c__DisplayClass76_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_27;
  *(_QWORD *)(v6 + 16) = syncGroupName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)syncGroupName, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__59472212 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                                                           sequence,
                                                                                           (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v15 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v15,
    ComponentsInChildren_object__59472212,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v17 = BattleSequenceManager___c_TypeInfo;
  if ( !*(&BattleSequenceManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo, v16);
    v17 = BattleSequenceManager___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__76_0 = (System_Comparison_T__o *)static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__76_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__76_0,
      v20,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__,
      0);
    v21 = BattleSequenceManager___c_TypeInfo->static_fields;
    v21->__9__76_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__76_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__76_0, (int32_t)_9__76_0, v22, v23, v24, v25, v26, v27);
  }
  System_Collections_Generic_List_object___Sort_71849708(
    v15,
    _9__76_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v28 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v6,
    Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v15,
          (System_Func_T__bool__o *)v28,
          (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v29 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__59472212 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                                                             sequence,
                                                                                             (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v29 )
    {
      System_Collections_Generic_List_object___AddRange(
        v29,
        ComponentsInChildren_object__59472212,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v30 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                             sequence,
                                                             (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v29,
        v30,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v32 = BattleSequenceManager___c_TypeInfo;
      if ( !*(&BattleSequenceManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo, v31);
        v32 = BattleSequenceManager___c_TypeInfo;
      }
      v33 = v32->static_fields;
      _9__76_2 = (System_Comparison_T__o *)v33->__9__76_2;
      if ( !_9__76_2 )
      {
        if ( !*(&v32->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v32, v31);
          v33 = BattleSequenceManager___c_TypeInfo->static_fields;
        }
        v35 = (Il2CppObject *)v33->__9;
        _9__76_2 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__76_2,
          v35,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__,
          0);
        v36 = BattleSequenceManager___c_TypeInfo->static_fields;
        v36->__9__76_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__76_2;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v36->__9__76_2,
          (int32_t)_9__76_2,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
      System_Collections_Generic_List_object___Sort_71849708(
        v29,
        _9__76_2,
        (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v44,
        v29,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v44,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v44.fields._current )
          sub_2213CDC(0, v43);
      }
      while ( (((__int64 (*)(void))v44.fields._current->klass->vtable[16].methodPtr)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v44,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_2213CDC(ComponentsInChildren_object__59472212, v8);
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
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22

  if ( (byte_59735C1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735C1 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_13;
    actor = (UnityEngine_GameObject_o *)BattleActorControl__getServantId((BattleActorControl_o *)Component_object, 0);
    if ( (_DWORD)actor == svtId )
      return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0);
  }
  if ( defLimCnt != -1 )
    return curLimCnt;
  if ( !Component_object )
LABEL_13:
    sub_2213CDC(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0);
}


UnityEngine_Color_o BattleSequenceManager__GetRendererBaseAddColor(
        BattleSequenceManager_o *this,
        UnityEngine_SkinnedMeshRenderer_o *inputRenderer,
        const MethodInfo *method)
{
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59735F2 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
    byte_59735F2 = 1;
  }
  v5.fields.r = 0.0;
  v5.fields.g = 0.0;
  v5.fields.b = 0.0;
  v5.fields.a = 0.0;
  return BasicHelper__GetValue_object__Color_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.rendererBaseAddColorsDict,
           (Il2CppObject *)inputRenderer,
           v5,
           (const MethodInfo_38147B0 *)Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
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

  if ( (byte_59735E0 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_2213A60(&StringLiteral_6299/*"Enemy"*/);
    sub_2213A60(&StringLiteral_11136/*"Player"*/);
    byte_59735E0 = 1;
  }
  if ( isEnemy )
    v8 = &StringLiteral_6299/*"Enemy"*/;
  else
    v8 = &StringLiteral_11136/*"Player"*/;
  v9 = (Il2CppObject *)*v8;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v15 = pos;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v15);
  v12 = System_String__Format_75697880(format, v9, v11, 0);
  if ( !Instance )
    sub_2213CDC(v12, v13);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v12, 0);
}


UnityEngine_Transform_o *BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass124_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x20
  System_Predicate_object__o *v9; // x19
  UnityEngine_Transform_o *result; // x0

  if ( (byte_59735E1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
    sub_2213A60(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass124_0__GetTargetPosIndexTransform_b__0__);
    sub_2213A60(&BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
    byte_59735E1 = 1;
  }
  v5 = (BattleSequenceManager___c__DisplayClass124_0_o *)sub_2213CCC(BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass124_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_9;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v5->fields.posIndex = posIndex;
  v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
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
                                        (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v6 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0);
    if ( v6 )
      return UnityEngine_GameObject__get_transform(v6, 0);
LABEL_9:
    sub_2213CDC(v6, v7);
  }
  return result;
}


bool BattleSequenceManager__HasFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o **fxdVoice,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *fixedVoice; // x20

  *fxdVoice = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)fxdVoice, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)fxdVoice, (int32_t)fixedVoice, v10, v11, v12, v13, v14, v15);
  return 1;
}


bool BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *actor; // x20
  __int64 v8; // x1
  void *ExecutingTdInfo; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x19
  __int64 v12; // x1
  BattleSequenceManager_c *v13; // x0

  if ( (byte_59735EC & 1) == 0 )
  {
    sub_2213A60(&BattleSequenceManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735EC = 1;
  }
  if ( !entity )
    return 0;
  if ( TreasureDvcEntity__IsDelayEnd(entity, 0) )
    return 1;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Equality(actor, 0, 0) )
    return 0;
  ExecutingTdInfo = this->fields.actor;
  if ( !ExecutingTdInfo )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)ExecutingTdInfo,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return 0;
  v13 = BattleSequenceManager_TypeInfo;
  if ( !*(&BattleSequenceManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo, v12);
  ExecutingTdInfo = BattleSequenceManager__SafeGetExecutingTdInfo((const MethodInfo *)v13);
  if ( !ExecutingTdInfo || !Component_object )
LABEL_19:
    sub_2213CDC(ExecutingTdInfo, v8);
  return BattleActorControl__IsDelayEndSequence(
           (BattleActorControl_o *)Component_object,
           *((_DWORD *)ExecutingTdInfo + 4),
           0);
}


bool BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v3; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *monitor; // x19
  __int64 v6; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_59735EE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_59735EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v3 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v3 )
    goto LABEL_18;
  monitor = (UnityEngine_Object_o *)v3[3].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
    return 0;
  v3 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v3 )
    goto LABEL_18;
  v3 = (UnityEngine_GameObject_o *)v3[3].monitor;
  if ( !v3 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v3,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v3 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v3 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_2213CDC(v3, v4);
  return LOBYTE(Component_object[36].klass) == 0;
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

  if ( (byte_59735F0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735F0 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  __int64 v19; // x1

  if ( (byte_59735BF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_59735BF = 1;
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
    sub_2213CDC(IsNullOrEmpty, v8);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v18[4] = (Il2CppClass *)bgmName;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)bgmName, v9, v10, v11, v12, v13, v14);
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v19);
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

  if ( (byte_59735C0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735C0 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0, 0) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_2213CDC(0, v8);
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
  __int64 v5; // x1
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *klass; // x0
  __int64 v8; // x1
  struct BattlePerformance_o *v9; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v11; // x8
  struct BattleData_o *v12; // x8
  __int64 v13; // x1
  UnityEngine_Object_o *Component_object; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *SingleTarget; // x21
  __int64 v17; // x1
  Il2CppObject *v18; // x21
  __int64 *v19; // x8
  struct BattlePerformance_o *v20; // x9
  System_String_o *v21; // x19
  BattleData_o *v22; // x21
  __int64 v23; // x1
  UnityEngine_Component_o *TransformChild; // x19
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v27; // 0:kr14_12.12
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59735DC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_19853/*"en_Parts_Up01"*/);
    sub_2213A60(&StringLiteral_19852/*"en_Parts_Under01"*/);
    byte_59735DC = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, CoreObj);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CoreObj, 0, 0) && this->fields.IsPlaying )
  {
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0, 0);
    if ( ((unsigned __int8)klass & 1) == 0 )
    {
      v9 = this->fields.performance;
      if ( !v9 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v9->fields.data;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0, 0);
      if ( ((unsigned __int8)klass & 1) == 0 )
      {
        v11 = this->fields.performance;
        if ( !v11 )
          goto LABEL_54;
        v12 = v11->fields.data;
        if ( !v12 )
          goto LABEL_54;
        if ( v12->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_54;
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CoreObj,
                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
          klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_object, 0, 0);
          if ( ((unsigned __int8)klass & 1) == 0 )
          {
            if ( !Component_object )
              goto LABEL_54;
            klass = (UnityEngine_GameObject_o *)Component_object[23].klass;
            if ( !klass )
              goto LABEL_54;
            if ( BattleServantData__isMultiTargetCore((BattleServantData_o *)klass, 0) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0, 0) )
              {
                klass = this->fields.SingleTarget;
                if ( !klass )
                  goto LABEL_54;
                v18 = UnityEngine_GameObject__GetComponent_object_(
                        klass,
                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
                klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0, 0);
                if ( ((unsigned __int8)klass & 1) == 0 )
                {
                  if ( !v18 )
                    goto LABEL_54;
                  if ( LOBYTE(v18[36].klass) )
                  {
                    klass = (UnityEngine_GameObject_o *)v18[34].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)klass, 0) )
                      goto LABEL_37;
                    klass = (UnityEngine_GameObject_o *)v18[34].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)klass, 0) )
                    {
LABEL_37:
                      klass = (UnityEngine_GameObject_o *)v18[34].monitor;
                      if ( !klass )
                        goto LABEL_54;
                      klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                            (BattleServantData_o *)klass,
                                                            0);
                      if ( ((unsigned __int8)klass & 1) != 0 )
                      {
                        v19 = &StringLiteral_19853/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        klass = (UnityEngine_GameObject_o *)v18[34].monitor;
                        if ( !klass )
                          goto LABEL_54;
                        klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                              (BattleServantData_o *)klass,
                                                              0);
                        if ( ((unsigned __int8)klass & 1) == 0 )
                          return 0;
                        v19 = &StringLiteral_19852/*"en_Parts_Under01"*/;
                      }
                      v20 = this->fields.performance;
                      if ( !v20 )
                        goto LABEL_54;
                      v21 = (System_String_o *)*v19;
                      v22 = v20->fields.data;
                      klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Component_object,
                                                            0);
                      if ( !v22 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v22,
                                                                    (UnityEngine_Transform_o *)klass,
                                                                    v21,
                                                                    0);
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0, 0) )
                      {
                        klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Component_object,
                                                              0);
                        if ( klass )
                        {
                          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)klass, 0);
                          if ( TransformChild )
                          {
                            klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(TransformChild, 0);
                            if ( klass )
                            {
                              v27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)klass, 0);
                              klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)Component_object,
                                                                    0);
                              if ( klass )
                              {
                                v28.fields.z = position.fields.z - v27.fields.z;
                                v28.fields.y = position.fields.y - v27.fields.y;
                                v28.fields.x = position.fields.x - v27.fields.x;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v28, 0);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_2213CDC(klass, v8);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  performance = this->fields.performance;
  this->fields.IsBgBusy = 0;
  if ( !performance || (v3 = this, (this = (BattleSequenceManager_o *)performance->fields.bgPerf) == 0) )
    sub_2213CDC(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))BgChangedCallback->fields.invoke_impl)(
      BgChangedCallback->fields.method_code,
      BgChangedCallback->fields.method);
    v3->fields.BgChangedCallback = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.BgChangedCallback, 0, v5, v6, v7, v8, v9, v10);
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
  __int64 v13; // x0
  __int64 v14; // x1
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
  System_String_o *v25; // x19
  float v26; // s9
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // [xsp+28h] [xbp-28h]

  if ( (byte_59735D1 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_59735D1 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v6 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0);
    if ( !v6 )
      sub_2213CDC(0, v7);
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
      v12 = sub_224BC3C(v6, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))v12)(
            v9,
            *(_QWORD *)(v12 + 8));
    v31 = v13;
    while ( 1 )
    {
      if ( !v31 )
        sub_2213CDC(v13, v14);
      v15 = *(_QWORD *)v31;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_17;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_17:
        v18 = sub_224BC3C(v31, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v31, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      v19 = *(_QWORD *)v31;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v21 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_24;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_24:
        v22 = sub_224BC3C(v31, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v31, *(_QWORD *)(v22 + 8));
      if ( !v23 )
        sub_2213CDC(0, v24);
      v25 = *(System_String_o **)(v23 + 16);
      v26 = *(float *)(v23 + 24);
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v24);
      BgmManager__ChangePlayerVolume(v25, v26 * newValue, 0);
    }
    v27 = *(_QWORD *)v31;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_34;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_34:
      v30 = sub_224BC3C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v31, *(_QWORD *)(v30 + 8));
  }
}


void BattleSequenceManager__OnEndNoblePhantasm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x0

  if ( (byte_59735F1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
    byte_59735F1 = 1;
  }
  rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
  if ( !rendererBaseAddColorsDict )
    sub_2213CDC(0, method);
  System_Collections_Generic_Dictionary_object__Color___Clear(
    rendererBaseAddColorsDict,
    (const MethodInfo_3FEA364 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
}


void BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(BattleSequenceManager_o *this, const MethodInfo *method)
{
  CommonUI_c *v3; // x0
  int v4; // w8
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *actorCamera; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  struct BattlePerformance_o *performance; // x8
  __int64 v18; // x1
  Il2CppObject *current; // x20
  __int64 v20; // x1
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x8
  int32_t size; // w2
  int v23; // w9
  __int64 v24; // x1
  Il2CppObject *v25; // x20
  __int64 v26; // x1
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x8
  int32_t v28; // w2
  int v29; // w9
  UnityEngine_Object_o *seqObject; // x21
  struct UnityEngine_GameObject_o **p_seqObject; // x26
  UnityEngine_Object_o *v32; // x21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  struct BattlePerformance_o *v40; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x10
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  struct UnityEngine_GameObject_array *saveWaitPlayer; // x9
  __int64 v44; // x22
  __int64 v45; // x23
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v47; // x25
  UnityEngine_Object_o *v48; // x21
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct BattlePerformance_o *v55; // x9
  struct UnityEngine_GameObject_array *v56; // x8
  struct UnityEngine_GameObject_array *v57; // x9
  __int64 v58; // x1
  struct UnityEngine_GameObject_array *v59; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v61; // x21
  UnityEngine_Object_o *v62; // x23
  char v63; // w22
  __int64 v64; // x1
  UnityEngine_Object_o *Component_object; // x23
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v67; // x23
  __int64 v68; // x25
  unsigned __int64 v69; // x9
  unsigned __int64 v70; // x26
  UnityEngine_Object_o *v71; // x22
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct BattlePerformance_o *v78; // x9
  struct UnityEngine_GameObject_array *v79; // x8
  struct UnityEngine_GameObject_array *v80; // x9
  __int64 v81; // x1
  struct BattlePerformance_o *v82; // x8
  struct UnityEngine_GameObject_array *v83; // x23
  il2cpp_array_size_t v84; // x8
  unsigned __int64 v85; // x25
  int v86; // w27
  UnityEngine_Object_o *v87; // x22
  char v88; // w21
  __int64 v89; // x1
  UnityEngine_Object_o *v90; // x22
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v92; // x8
  struct BattlePerformance_o *v93; // x8
  struct UnityEngine_GameObject_array *v94; // x22
  il2cpp_array_size_t v95; // x8
  unsigned __int64 v96; // x23
  UnityEngine_Object_o *v97; // x21
  Il2CppObject *v98; // x0
  const MethodInfo *v99; // x2
  struct BattlePerformance_o *v100; // x8
  struct UnityEngine_GameObject_array *v101; // x22
  il2cpp_array_size_t v102; // x8
  unsigned __int64 v103; // x23
  UnityEngine_Object_o *v104; // x21
  Il2CppObject *v105; // x0
  const MethodInfo *v106; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v109; // x2
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  UnityEngine_Camera_o *v116; // x21
  int32_t cullingMask; // w22
  char v118; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v120; // w22
  char v121; // w0
  struct BattlePerformance_o *v122; // x8
  __int64 v123; // x1
  struct System_Action_USSequencer__o **p_OnCompleteActorCallback; // x21
  UnityEngine_Object_o *v125; // x22
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  UnityEngine_Component_o *v132; // x20
  UnityEngine_Object_o **v133; // x21
  UnityEngine_Object_o *klass; // x22
  __int64 v135; // x1
  UnityEngine_Object_o *v136; // x22
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  struct BattlePerformance_o *v143; // x8
  BattlePerformance_o *v144; // x20
  int32_t v145; // w21
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v147; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v148; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v149; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_59735D3 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&CommonUI_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Object__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_2213A60(&StringLiteral_9908/*"NoblePhantasm/CutIns"*/);
    sub_2213A60(&StringLiteral_3229/*"Battle2D"*/);
    byte_59735D3 = 1;
  }
  v3 = CommonUI_TypeInfo;
  this->fields.IsPlaying = 0;
  entity = 0;
  v4 = *(&v3->_2.cctor_finished + 1);
  memset(&v149, 0, sizeof(v149));
  memset(&v148, 0, sizeof(v148));
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( CommonUI__GetForceObi_16_9(0) )
  {
    if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v5);
    CommonUI__SetForceObi_16_9(0, 0);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v6);
  }
  actorCamera = (UnityEngine_Object_o *)this->fields.actorCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v9);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v11);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v12);
  BattleSequenceManager__restoreBattleActorTransform(this, v13);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_106;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_3F10B80 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v15) )
    BattleSequenceManager__CrossFadeBgm(this, v16);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v16);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v147,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v149 = v147;
  v147.fields._list = 0;
  *(_QWORD *)&v147.fields._index = &v149;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v149,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v149.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v149,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_106;
  size = npEndDeleteObjects->fields._size;
  v23 = npEndDeleteObjects->fields._version + 1;
  npEndDeleteObjects->fields._size = 0;
  npEndDeleteObjects->fields._version = v23;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)npEndDeleteObjects->fields._items, 0, size, 0);
  transform = (UnityEngine_Component_o *)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v147,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v148 = v147;
  v147.fields._list = 0;
  *(_QWORD *)&v147.fields._index = &v148;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v148,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v25 = v148.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v25, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v148,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_106;
  v28 = createdObjects->fields._size;
  v29 = createdObjects->fields._version + 1;
  createdObjects->fields._size = 0;
  createdObjects->fields._version = v29;
  if ( v28 >= 1 )
    System_Array__Clear((System_Array_o *)createdObjects->fields._items, 0, v28, 0);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0, 0) )
  {
    v32 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_83459800(v32, 0);
    *p_seqObject = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.seqObject, 0, v33, v34, v35, v36, v37, v38);
  }
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_106;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_106;
  v40 = this->fields.performance;
  if ( !v40 )
    goto LABEL_106;
  p_actorlist = v40->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_106;
  e_actorlist = v40->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_106;
  if ( ActorActiveList->fields._size == LODWORD(e_actorlist->max_length) + LODWORD(p_actorlist->max_length) )
  {
    saveWaitPlayer = this->fields.saveWaitPlayer;
    if ( saveWaitPlayer )
    {
      v44 = 4;
      v45 = 32;
      while ( 1 )
      {
        max_length_low = LODWORD(saveWaitPlayer->max_length);
        v47 = v44 - 4;
        if ( v44 - 4 >= (int)max_length_low )
          break;
        if ( v47 >= max_length_low )
          goto LABEL_192;
        v48 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitPlayer->obj.klass + v44);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v48, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          v55 = this->fields.performance;
          if ( !v55 )
            goto LABEL_106;
          v56 = this->fields.saveWaitPlayer;
          if ( !v56 )
            goto LABEL_106;
          if ( v47 >= LODWORD(v56->max_length) )
            goto LABEL_192;
          v57 = v55->fields.p_actorlist;
          if ( !v57 )
            goto LABEL_106;
          if ( v47 >= LODWORD(v57->max_length) )
            goto LABEL_192;
          v58 = *((_QWORD *)&v56->obj.klass + v44);
          *((_QWORD *)&v57->obj.klass + v44) = v58;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v57 + v45), v58, v49, v50, v51, v52, v53, v54);
        }
        saveWaitPlayer = this->fields.saveWaitPlayer;
        ++v44;
        v45 += 8;
        if ( !saveWaitPlayer )
          goto LABEL_106;
      }
      v40 = this->fields.performance;
      if ( !v40 )
        goto LABEL_106;
    }
    v59 = v40->fields.p_actorlist;
    if ( !v59 )
      goto LABEL_106;
    max_length = v59->max_length;
    if ( (int)max_length >= 1 )
    {
      v61 = 0;
      while ( v61 < (unsigned int)max_length )
      {
        v62 = (UnityEngine_Object_o *)v59->m_Items[v61];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v62, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v61,
                                                   (const MethodInfo_44114A0 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v62 )
            goto LABEL_106;
          v63 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v62, (unsigned __int8)transform & 1, 0);
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)v62,
                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)Component_object[2].klass;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v63 & 1, 0);
          }
        }
        LODWORD(max_length) = v59->max_length;
        if ( (__int64)++v61 >= (int)max_length )
          goto LABEL_92;
      }
LABEL_192:
      sub_2213CE4(transform);
    }
    LODWORD(v61) = 0;
LABEL_92:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( saveWaitEnemy )
    {
      v67 = 4;
      v68 = 32;
      while ( 1 )
      {
        v69 = LODWORD(saveWaitEnemy->max_length);
        v70 = v67 - 4;
        if ( v67 - 4 >= (int)v69 )
          break;
        if ( v70 >= v69 )
          goto LABEL_192;
        v71 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v67);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v71, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          v78 = this->fields.performance;
          if ( !v78 )
            goto LABEL_106;
          v79 = this->fields.saveWaitEnemy;
          if ( !v79 )
            goto LABEL_106;
          if ( v70 >= LODWORD(v79->max_length) )
            goto LABEL_192;
          v80 = v78->fields.e_actorlist;
          if ( !v80 )
            goto LABEL_106;
          if ( v70 >= LODWORD(v80->max_length) )
            goto LABEL_192;
          v81 = *((_QWORD *)&v79->obj.klass + v67);
          *((_QWORD *)&v80->obj.klass + v67) = v81;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v80 + v68), v81, v72, v73, v74, v75, v76, v77);
        }
        saveWaitEnemy = this->fields.saveWaitEnemy;
        ++v67;
        v68 += 8;
        if ( !saveWaitEnemy )
          goto LABEL_106;
      }
    }
    v82 = this->fields.performance;
    if ( !v82 )
      goto LABEL_106;
    v83 = v82->fields.e_actorlist;
    if ( !v83 )
      goto LABEL_106;
    v84 = v83->max_length;
    if ( (int)v84 >= 1 )
    {
      v85 = 0;
      v86 = v61;
      while ( v85 < (unsigned int)v84 )
      {
        v87 = (UnityEngine_Object_o *)v83->m_Items[v85];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v87, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v86 + v85,
                                                   (const MethodInfo_44114A0 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v87 )
            goto LABEL_106;
          v88 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v87, (unsigned __int8)transform & 1, 0);
          v90 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v87,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v89);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v90, 0, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v90 )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)v90[2].klass;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v88 & 1, 0);
          }
        }
        LODWORD(v84) = v83->max_length;
        if ( (__int64)++v85 >= (int)v84 )
          goto LABEL_124;
      }
      goto LABEL_192;
    }
LABEL_124:
    v40 = this->fields.performance;
    p_seqObject = &this->fields.seqObject;
    if ( !v40 )
      goto LABEL_106;
  }
  data = (UnityEngine_Object_o *)v40->fields.data;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(data, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v92 = this->fields.performance;
    if ( !v92 )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)v92->fields.data;
    if ( !transform )
      goto LABEL_106;
    BattleData__PartsIntoTheBody((BattleData_o *)transform, 0);
  }
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_106;
  BattlePerformance__InitActorPosition((BattlePerformance_o *)transform, 0);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_106;
  BattlePerformance__resetOriginalPos((BattlePerformance_o *)transform, 0);
  v93 = this->fields.performance;
  if ( !v93 )
    goto LABEL_106;
  v94 = v93->fields.p_actorlist;
  if ( !v94 )
    goto LABEL_106;
  v95 = v94->max_length;
  if ( (int)v95 >= 1 )
  {
    v96 = 0;
    while ( v96 < (unsigned int)v95 )
    {
      v97 = (UnityEngine_Object_o *)v94->m_Items[v96];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v97, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v97 )
          goto LABEL_106;
        v98 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v97,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v98, v99);
      }
      LODWORD(v95) = v94->max_length;
      if ( (__int64)++v96 >= (int)v95 )
        goto LABEL_144;
    }
    goto LABEL_192;
  }
LABEL_144:
  v100 = this->fields.performance;
  if ( !v100 )
    goto LABEL_106;
  v101 = v100->fields.e_actorlist;
  if ( !v101 )
    goto LABEL_106;
  v102 = v101->max_length;
  if ( (int)v102 >= 1 )
  {
    v103 = 0;
    while ( v103 < (unsigned int)v102 )
    {
      v104 = (UnityEngine_Object_o *)v101->m_Items[v103];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v104, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v104 )
          goto LABEL_106;
        v105 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)v104,
                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v105, v106);
      }
      LODWORD(v102) = v101->max_length;
      if ( (__int64)++v103 >= (int)v102 )
        goto LABEL_155;
    }
    goto LABEL_192;
  }
LABEL_155:
  p_standFigure = &this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)*p_standFigure;
    if ( !*p_standFigure )
      goto LABEL_106;
    UIStandFigureM__Dispose((UIStandFigureM_o *)transform, 0);
    *p_standFigure = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.standFigure, 0, v110, v111, v112, v113, v114, v115);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v109) )
    BattleSequenceManager__ReleaseCpk(this, v8);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_106;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0);
  v116 = this->fields.actorCamera;
  if ( !v116 )
    goto LABEL_106;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0);
  v118 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3229/*"Battle2D"*/, 0);
  UnityEngine_Camera__set_cullingMask(v116, (1 << v118) | cullingMask, 0);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_106;
  v120 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0);
  v121 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3229/*"Battle2D"*/, 0);
  UnityEngine_Camera__set_cullingMask(effectCamera, v120 & ~(1 << v121), 0);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_106;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0);
  v122 = this->fields.performance;
  if ( !v122 )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)v122->fields.bgPerf;
  if ( !transform )
    goto LABEL_106;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0);
  p_OnCompleteActorCallback = &this->fields.OnCompleteActorCallback;
  if ( this->fields.OnCompleteActorCallback )
  {
    v125 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v123);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v125, 0, 0);
    v8 = 0;
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UnityEngine_Component_o *)*p_seqObject;
      if ( !*p_seqObject )
        goto LABEL_106;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)transform,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
      v8 = (const MethodInfo *)transform;
    }
    if ( *p_OnCompleteActorCallback )
    {
      ((void (__fastcall *)(intptr_t, const MethodInfo *, intptr_t))(*p_OnCompleteActorCallback)->fields.invoke_impl)(
        (*p_OnCompleteActorCallback)->fields.method_code,
        v8,
        (*p_OnCompleteActorCallback)->fields.method);
      *p_OnCompleteActorCallback = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.OnCompleteActorCallback,
        0,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      goto LABEL_176;
    }
LABEL_106:
    sub_2213CDC(transform, v8);
  }
LABEL_176:
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_106;
  v132 = transform;
  v133 = (UnityEngine_Object_o **)&transform[3];
  klass = (UnityEngine_Object_o *)transform[3].klass;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
  {
    v136 = *v133;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v135);
    UnityEngine_Object__Destroy_83459800(v136, 0);
    *v133 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v132[3], 0, v137, v138, v139, v140, v141, v142);
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v135);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9908/*"NoblePhantasm/CutIns"*/, 0);
  BYTE1(v132[5].fields.m_CachedPtr) = 0;
  v143 = this->fields.performance;
  if ( !v143 )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)v143->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0);
  v144 = this->fields.performance;
  if ( !v144 )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0);
  if ( !this->fields.performance )
    goto LABEL_106;
  v145 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0);
  BattlePerformance__UpdateCameraClippingRange(v144, v145, CurrentGroundType, 0, 0);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_106;
  BattlePerformance__ResetCameraClippingRange((BattlePerformance_o *)transform, 1, 0);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_106;
  BattlePerformance__releaseChangeBgAssets((BattlePerformance_o *)transform, 0);
}


void BattleSequenceManager__OverwriteStartTimeToSavedBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x8
  BgmPlayArgsGroup_o *v4; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v5; // x0
  System_Object_array *v6; // x0
  __int64 v7; // x1
  BgmPlayArgsGroup_o *v8; // x8
  System_Object_array *v9; // x19
  Il2CppClass *klass; // x8
  System_Object_array *v11; // x20
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Func_object__bool__o *v37; // x22
  Il2CppObject *object; // x0
  const MethodInfo_45E4A50 *v39; // x3
  BgmPlayArgs_o *v40; // x20
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x20
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_Nullable_long__o v48; // [xsp+8h] [xbp-88h] BYREF
  __int64 v49; // [xsp+18h] [xbp-78h]
  __int64 *v50; // [xsp+20h] [xbp-70h]
  __int64 v51; // [xsp+28h] [xbp-68h] BYREF
  System_Nullable_long__o v52; // 0:x0.16

  if ( (byte_59735D8 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_BgmPlayArgs___);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_2213A60(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__);
    sub_2213A60(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
    byte_59735D8 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  v51 = 0;
  if ( backupBgmPlayArgsGroup )
  {
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v4 = BgmManager__ExportPlayArgsGroup(0);
    if ( v4 )
    {
      v5 = BgmPlayArgsGroup__AllArgsListNullExcluded(v4, 0);
      v6 = System_Linq_Enumerable__ToArray_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v5,
             (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      v8 = this->fields.backupBgmPlayArgsGroup;
      if ( !v8 || (v9 = v6, (v6 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(v8, 0)) == 0) )
        sub_2213CDC(v6, v7);
      klass = v6->obj.klass;
      v11 = v6;
      v12 = *(unsigned __int16 *)&v6->obj.klass->_2.rank;
      if ( *(_WORD *)&v6->obj.klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v12;
          p_offset += 4;
          if ( !v12 )
            goto LABEL_13;
        }
        v14 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_13:
        v14 = sub_224BC3C(v6, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
      }
      v15 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
      v51 = v15;
      v49 = 0;
      v50 = &v51;
      if ( !v15 )
LABEL_37:
        sub_2213CDC(v15, v16);
      v17 = v15;
      while ( 1 )
      {
        v18 = *(_QWORD *)v17;
        v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
        {
          v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v19;
            v20 += 4;
            if ( !v19 )
              goto LABEL_21;
          }
          v21 = v18 + 16LL * *v20 + 312;
        }
        else
        {
LABEL_21:
          v21 = sub_224BC3C(v17, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
          break;
        v22 = sub_2213CCC(BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass114_0___ctor((BattleSequenceManager___c__DisplayClass114_0_o *)v22, 0);
        v25 = v51;
        if ( !v51 )
          sub_2213CDC(v23, v24);
        v26 = *(_QWORD *)v51;
        v27 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v28 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v27;
            v28 += 4;
            if ( !v27 )
              goto LABEL_29;
          }
          v29 = v26 + 16LL * *v28 + 312;
        }
        else
        {
LABEL_29:
          v29 = sub_224BC3C(v51, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
        }
        v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8));
        if ( !v22 )
          sub_2213CDC(v30, v30);
        *(_QWORD *)(v22 + 16) = v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 16), v30, v31, v32, v33, v34, v35, v36);
        v37 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v37,
          (Il2CppObject *)v22,
          Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0);
        object = BasicHelper__Find_object_(
                   v9,
                   (System_Func_T__bool__o *)v37,
                   (const MethodInfo_3810A1C *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v52.fields.value = (int64_t)object[2].klass;
        else
          v52.fields.value = 0;
        v40 = *(BgmPlayArgs_o **)(v22 + 16);
        *(_QWORD *)&v48.fields.hasValue = 0;
        v48.fields.value = 0;
        *(_QWORD *)&v52.fields.hasValue = &v48;
        System_Nullable_long____ctor(v52, Method_System_Nullable_long___ctor__, v39);
        if ( !v40 )
          sub_2213CDC(v41, v42);
        BgmPlayArgs__Update(v40, 0, 0, v48, 0);
        v17 = v51;
        if ( !v51 )
          goto LABEL_37;
      }
      v43 = v51;
      if ( v51 )
      {
        v44 = *(_QWORD *)v51;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
          {
            --v45;
            v46 += 4;
            if ( !v45 )
              goto LABEL_43;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_43:
          v47 = sub_224BC3C(v51, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8));
      }
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

  if ( (byte_59735D4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735D4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actor);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v4 )
  {
    if ( !actor )
      sub_2213CDC(v4, v5);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v18; // x1
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59735D9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleSequenceManager__ReleaseCpk_b__115_0__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_2213A60(&StringLiteral_9911/*"NoblePhantasm_"*/);
    byte_59735D9 = 1;
  }
  v32 = 0;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v32 = overwriteSvtVoiceId;
  v8 = System_Int32__ToString((int32_t)&v32, 0);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_9911/*"NoblePhantasm_"*/, v8, 0);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__115_0__, 0);
  if ( !DelayInvokeMethodList
    || (v28 = DelayInvokeMethodList->fields._items,
        v29 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v28) )
  {
LABEL_17:
    sub_2213CDC(Instance, v4);
  }
  v30 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v21,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    DelayInvokeMethodList->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v21, v22, v23, v24, v25, v26, v27);
  }
  this->fields.delayInvokeTimer = 1.0;
}


void BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.fixedVoice = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fixedVoice, 0, v2, v3, v4, v5, v6, v7);
}


void BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.intactBgmList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.intactBgmList, 0, v2, v3, v4, v5, v6, v7);
}


ExecutingTdInfo_o *BattleSequenceManager__SafeGetExecutingTdInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v3; // x0
  __int64 v4; // x1

  if ( (byte_59735F4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_59735F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !v3 )
      goto LABEL_11;
    if ( v3[23].monitor )
    {
      v3 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( v3 )
        return (ExecutingTdInfo_o *)v3[23].monitor;
LABEL_11:
      sub_2213CDC(v3, v4);
    }
  }
  return ExecutingTdInfo__GetDefault(0);
}


void BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59735D7 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59735D7 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  v3 = BgmManager__ExportPlayArgsGroup(0);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.backupBgmPlayArgsGroup,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleSequenceManager__SearchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        int32_t unitIndex,
        const MethodInfo *method)
{
  int32_t limitCount; // w22
  __int64 v10; // x1
  UnityEngine_Object_o *Manager__LoadNoblePhantasmEffect; // x20
  __int64 v12; // x1
  System_String_o *v13; // x0
  UnityEngine_Object_o *v14; // x0
  __int64 v15; // x1

  if ( (byte_59735CB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&StringLiteral_3218/*"Battle/Prefab/"*/);
    byte_59735CB = 1;
  }
  limitCount = this->fields.limitCount;
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&tdId);
  Manager__LoadNoblePhantasmEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                               tdId,
                                                               limitCount,
                                                               name,
                                                               unitIndex,
                                                               0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Inequality(Manager__LoadNoblePhantasmEffect, 0, 0) )
  {
    v13 = System_String__Concat_75651716((System_String_o *)StringLiteral_3218/*"Battle/Prefab/"*/, name, 0);
    v14 = UnityEngine_Resources__Load(v13, 0);
    if ( v14 )
    {
      if ( (UnityEngine_GameObject_c *)v14->klass == UnityEngine_GameObject_TypeInfo )
        Manager__LoadNoblePhantasmEffect = v14;
      else
        Manager__LoadNoblePhantasmEffect = 0;
    }
    else
    {
      Manager__LoadNoblePhantasmEffect = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( !UnityEngine_Object__op_Inequality(Manager__LoadNoblePhantasmEffect, 0, 0) )
      return 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       (Il2CppObject *)Manager__LoadNoblePhantasmEffect,
                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void BattleSequenceManager__SearchTargetAndModifyPositions(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *SingleTarget; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x22
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x20
  System_String_o **v12; // x8
  System_String_o *v13; // x21
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array **p_e_actorlist; // x8
  struct UnityEngine_GameObject_array *v16; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  UnityEngine_GameObject_o *v19; // x23
  UnityEngine_Object_o *v20; // x22
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x22
  UnityEngine_Transform_o *v23; // x23
  struct BattlePerformance_o *v24; // x8
  __int64 v25; // x1
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  float v29; // s9
  struct BattlePerformance_o *v30; // x8
  struct BattleData_o *data; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59735DD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_2213A60(&StringLiteral_9757/*"N_Enemy2"*/);
    sub_2213A60(&StringLiteral_9758/*"N_Player2"*/);
    byte_59735DD = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_57;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)actor & 1) != 0 )
    return;
  if ( !Component_object )
    goto LABEL_57;
  SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Component_object,
                                         0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(SingleTarget, gameObject, 0) )
    return;
  v10 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Inequality(v10, 0, 0) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_57;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                        actor,
                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_57;
  v11 = actor;
  v12 = (System_String_o **)((LOBYTE(actor[24].klass) != 0) != (LOBYTE(Component_object[36].klass) != 0)
                           ? &StringLiteral_9757/*"N_Enemy2"*/
                           : &StringLiteral_9758/*"N_Player2"*/);
  v13 = *v12;
  performance = this->fields.performance;
  if ( LOBYTE(actor[24].klass) )
  {
    if ( !performance )
      goto LABEL_57;
    p_e_actorlist = &performance->fields.e_actorlist;
  }
  else
  {
    if ( !performance )
      goto LABEL_57;
    p_e_actorlist = &performance->fields.p_actorlist;
  }
  v16 = *p_e_actorlist;
  if ( !*p_e_actorlist )
LABEL_57:
    sub_2213CDC(actor, method);
  max_length = v16->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_2213CE4(actor);
      v19 = v16->m_Items[i];
      v20 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, v20, 0) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_57;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v13,
                                              0);
        if ( !v19 )
          goto LABEL_57;
        v22 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v19, 0);
        if ( !v22 )
          goto LABEL_57;
        v23 = (UnityEngine_Transform_o *)actor;
        position = UnityEngine_Transform__get_position(v22, 0);
        if ( !v23 )
          goto LABEL_57;
        UnityEngine_Transform__set_position(v23, position, 0);
        v24 = this->fields.performance;
        if ( !v24 )
          goto LABEL_57;
        actor = (UnityEngine_GameObject_o *)v24->fields.data;
        if ( !actor )
          goto LABEL_57;
        if ( BYTE2(actor[31].fields.m_CachedPtr) && LOBYTE(v11[24].klass) )
        {
          PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor((BattleData_o *)actor, 1, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
          actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(PartsActor, 0, 0);
          if ( ((unsigned __int8)actor & 1) != 0 )
          {
            if ( !PartsActor )
              goto LABEL_57;
            actor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)PartsActor,
                                                  0);
            if ( !actor )
              goto LABEL_57;
            y = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)actor, 0).fields.y;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)PartsActor, 0);
            LODWORD(v29) = (unsigned int)UnityEngine_Transform__get_position(v22, 0);
            v33.fields.z = UnityEngine_Transform__get_position(v22, 0).fields.z;
            if ( !transform )
              goto LABEL_57;
            v33.fields.x = v29;
            v33.fields.y = y;
            UnityEngine_Transform__set_position(transform, v33, 0);
          }
        }
      }
      else
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v19 )
            goto LABEL_57;
          UnityEngine_GameObject__SetActive(v19, 0, 0);
          v30 = this->fields.performance;
          if ( !v30 )
            goto LABEL_57;
          data = v30->fields.data;
          if ( !data )
            goto LABEL_57;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v11[24].klass) )
            UnityEngine_GameObject__SetActive(v19, 1, 0);
        }
      }
      LODWORD(max_length) = v16->max_length;
    }
  }
}


void BattleSequenceManager__SetAfterChangeField(
        BattleSequenceManager_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( actionData )
    actionData = (BattleActionData_o *)actionData->fields._ChangeField_k__BackingField;
  if ( !this )
    sub_2213CDC(0, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.changeFieldAfter,
    (int32_t)actionData,
    (System_String_o *)method,
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

  if ( (byte_59735E9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_59735E9 = 1;
  }
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  v6 = 0;
  while ( v6 < *((_DWORD *)battleTargetList + 6) )
  {
    battleTargetList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)battleTargetList,
                         v6,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( !battleTargetList )
      goto LABEL_13;
    battleTargetList = (void *)*((_QWORD *)battleTargetList + 3);
    if ( isReset )
    {
      if ( !battleTargetList )
        goto LABEL_13;
      BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0);
    }
    else
    {
      if ( !battleTargetList )
        goto LABEL_13;
      BattleActorControl__setAuraFlip((BattleActorControl_o *)battleTargetList, *((_BYTE *)battleTargetList + 576), 0);
    }
    battleTargetList = this->fields.battleTargetList;
    ++v6;
    if ( !battleTargetList )
      goto LABEL_13;
  }
  if ( isReset )
  {
    battleTargetList = this->fields.actor;
    if ( battleTargetList )
    {
      battleTargetList = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)battleTargetList,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(battleTargetList, isReset);
  }
}


void BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.fixedVoice = voiceId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fixedVoice,
    (int32_t)voiceId,
    (System_String_o *)method,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59735EA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59735EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BgmMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.intactBgmList,
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
  __int64 v8; // x1
  UnityEngine_Component_o *PartsActor; // x21
  struct BattlePerformance_o *v10; // x8
  UnityEngine_Transform_o *transform; // x20
  BattleSequenceManager_o *v12; // x19

  v4 = this;
  if ( (byte_59735DB & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735DB = 1;
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
    sub_2213CDC(this, targetActor);
  PartsActor = (UnityEngine_Component_o *)BattleData__GetPartsActor((BattleData_o *)this, 1, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PartsActor, 0, 0) )
  {
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetActor, 0);
    v10 = v4->fields.performance;
    if ( v10 )
    {
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v10->fields.root_field, 0);
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
            v12 = this;
            if ( !byte_5969AE0 )
            {
              this = (BattleSequenceManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
              byte_5969AE0 = 1;
            }
            if ( v12 )
            {
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)v12,
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

  if ( (byte_59735C3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_59735C3 = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v7),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0) )
  {
LABEL_10:
    sub_2213CDC(actor, isStart);
  }
  v8 = 0;
  while ( v8 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v8,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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

  if ( (byte_59735C4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17293/*"_y0"*/);
    byte_59735C4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, fbx);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0, 0);
  if ( v6 )
  {
    if ( !fbx )
      sub_2213CDC(v6, v7);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_17293/*"_y0"*/, 0);
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
  __int64 v9; // x27
  __int64 v10; // x26
  System_String_o *v11; // x0
  BattleSequenceManager_o *v12; // x0
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x22
  __int64 i; // x22
  System_String_o *v17; // x0
  BattleSequenceManager_o *v18; // x0
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x21
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_59735C2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2237/*"Actors/Actor"*/);
    byte_59735C2 = 1;
  }
  seqObject = this->fields.seqObject;
  v22 = 0;
  if ( !seqObject )
LABEL_25:
    sub_2213CDC(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v9 = 0;
  do
  {
    v10 = v9 + 1;
    v22 = v9 + 1;
    v11 = System_Int32__ToString((int32_t)&v22, 0);
    v12 = (BattleSequenceManager_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_2237/*"Actors/Actor"*/, v11, 0);
    v15 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v12,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v12,
                                    v13);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v15, 0, 0);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_25;
      if ( v9 < SLODWORD(playerList->max_length) )
      {
        seqObject = playerList->m_Items[v9];
        if ( !seqObject )
          goto LABEL_25;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0);
        if ( !v15 )
          goto LABEL_25;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v15,
          (UnityEngine_Transform_o *)seqObject,
          0);
      }
    }
    ++v9;
  }
  while ( v10 != 3 );
  for ( i = 0; i != 3; ++i )
  {
    v22 = i | 4;
    v17 = System_Int32__ToString((int32_t)&v22, 0);
    v18 = (BattleSequenceManager_o *)System_String__Concat_75651716((System_String_o *)StringLiteral_2237/*"Actors/Actor"*/, v17, 0);
    v21 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v18,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v18,
                                    v19);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v21, 0, 0);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_25;
      if ( i < SLODWORD(enemyList->max_length) )
      {
        seqObject = enemyList->m_Items[i];
        if ( !seqObject )
          goto LABEL_25;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0);
        if ( !v21 )
          goto LABEL_25;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v21,
          (UnityEngine_Transform_o *)seqObject,
          0);
      }
    }
  }
}


void BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x21
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  void *actor; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22
  BattleActionData_o *monitor; // x23
  System_Collections_Generic_HashSet_int__o *v15; // x24
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  MissionNaviTransitionBoardItem_o *v22; // x20
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x24
  BattleSequenceManager___c_c *v25; // x8
  struct BattleSequenceManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__117_0; // x25
  Il2CppObject *v28; // x26
  struct BattleSequenceManager___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  int v37; // w8
  void *v38; // x24
  unsigned int v39; // w26
  __int64 v40; // x8
  BattleActionData_BuffData_array *BuffList; // x0
  __int64 v42; // x1
  BattleSequenceManager___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x24
  struct BattleSequenceManager___c_StaticFields *v45; // x9
  System_Func_object__bool__o *_9__117_1; // x25
  Il2CppObject *v47; // x26
  struct BattleSequenceManager___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  int v56; // w8
  void *v57; // x24
  unsigned int v58; // w26
  __int64 v59; // x8
  BattleActionData_HealData_array *HealList; // x0
  __int64 v61; // x1
  BattleSequenceManager___c_c *v62; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x24
  struct BattleSequenceManager___c_StaticFields *v64; // x9
  System_Func_object__bool__o *_9__117_2; // x25
  Il2CppObject *v66; // x26
  struct BattleSequenceManager___c_StaticFields *v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  int v75; // w8
  void *v76; // x24
  unsigned int v77; // w26
  __int64 v78; // x8
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x23
  System_Action_object__o *v80; // x24
  int klass_low; // w25
  System_Collections_Generic_HashSet_int__o *v82; // x21
  int v83; // w29
  __int64 v84; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w22
  __int64 v87; // x1
  UnityEngine_Object_o *ServantGameObject; // x23
  _BOOL8 v89; // x0
  __int64 v90; // x1
  Il2CppObject *v91; // x0
  __int64 v92; // x1
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  int32_t v99; // w20
  struct UnityEngine_GameObject_o *v100; // x20
  Il2CppObject *v101; // x22
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  const MethodInfo *v108; // x2
  __int64 v109; // x1
  BattlePerformance_o *v110; // x0
  int32_t v111; // w21
  __int64 v112; // x1
  UnityEngine_Object_o *v113; // x20
  _BOOL8 v114; // x0
  __int64 v115; // x1
  Il2CppObject *v116; // x22
  BattleSequenceManager_BattleTarget_o *v117; // x20
  __int64 v118; // x1
  BattlePerformance_o *v119; // x0
  __int64 ServantPosIndex; // x0
  __int64 v121; // x1
  __int64 v122; // x1
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v131; // x9
  __int64 size; // x10
  Il2CppClass **v133; // x8
  int v134; // [xsp+4h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v135; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v136; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_59735DA & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    sub_2213A60(&BattleSequenceManager_BattleTarget_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleActionData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleActionData_DamageData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_2213A60(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleActionData_HealData__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_0__);
    sub_2213A60(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_1__);
    sub_2213A60(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_2__);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__3__);
    sub_2213A60(&BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
    sub_2213A60(&BattleSequenceManager___c_TypeInfo);
    byte_59735DA = 1;
  }
  memset(&v136, 0, sizeof(v136));
  v3 = sub_2213CCC(BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass117_0___ctor((BattleSequenceManager___c__DisplayClass117_0_o *)v3, 0);
  this->fields.SingleTarget = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.SingleTarget, 0, v4, v5, v6, v7, v8, v9);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_98;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (BattleActionData_o *)Component_object[32].monitor;
      v15 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v15,
        (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v3 )
      {
        *(_QWORD *)(v3 + 16) = v15;
        v22 = (MissionNaviTransitionBoardItem_o *)(v3 + 16);
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v15, v16, v17, v18, v19, v20, v21);
        if ( monitor )
        {
          DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                              monitor,
                                                                              -1,
                                                                              0);
          v25 = BattleSequenceManager___c_TypeInfo;
          if ( !*(&BattleSequenceManager___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo, v23);
            v25 = BattleSequenceManager___c_TypeInfo;
          }
          static_fields = v25->static_fields;
          _9__117_0 = (System_Func_object__bool__o *)static_fields->__9__117_0;
          if ( !_9__117_0 )
          {
            if ( !*(&v25->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v25, v23);
              static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
            }
            v28 = (Il2CppObject *)static_fields->__9;
            _9__117_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_DamageData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__117_0,
              v28,
              Method_BattleSequenceManager___c__SetupTargetInfo_b__117_0__,
              0);
            v29 = BattleSequenceManager___c_TypeInfo->static_fields;
            v29->__9__117_0 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__117_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v29->__9__117_0,
              (int32_t)_9__117_0,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35);
          }
          v36 = System_Linq_Enumerable__Where_object_(
                  DamageList,
                  (System_Func_TSource__bool__o *)_9__117_0,
                  (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
          actor = System_Linq_Enumerable__ToArray_object_(
                    v36,
                    (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleActionData_DamageData___);
          if ( actor )
          {
            v37 = *((_DWORD *)actor + 6);
            v38 = actor;
            if ( v37 >= 1 )
            {
              v39 = 0;
              while ( v39 < v37 )
              {
                v40 = *((_QWORD *)v38 + (int)v39 + 4);
                if ( !v40 )
                  goto LABEL_98;
                v10 = *(unsigned int *)(v40 + 48);
                if ( (_DWORD)v10 )
                {
                  actor = v22->klass;
                  if ( !v22->klass )
                    goto LABEL_98;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v10,
                                    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v37 = *((_DWORD *)v38 + 6);
                if ( (int)++v39 >= v37 )
                  goto LABEL_25;
              }
LABEL_99:
              sub_2213CE4(actor);
            }
LABEL_25:
            BuffList = BattleActionData__getBuffList(monitor, -1, 0);
            v43 = BattleSequenceManager___c_TypeInfo;
            v44 = (System_Collections_Generic_IEnumerable_TSource__o *)BuffList;
            if ( !*(&BattleSequenceManager___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo, v42);
              v43 = BattleSequenceManager___c_TypeInfo;
            }
            v45 = v43->static_fields;
            _9__117_1 = (System_Func_object__bool__o *)v45->__9__117_1;
            if ( !_9__117_1 )
            {
              if ( !*(&v43->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v43, v42);
                v45 = BattleSequenceManager___c_TypeInfo->static_fields;
              }
              v47 = (Il2CppObject *)v45->__9;
              _9__117_1 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__117_1,
                v47,
                Method_BattleSequenceManager___c__SetupTargetInfo_b__117_1__,
                0);
              v48 = BattleSequenceManager___c_TypeInfo->static_fields;
              v48->__9__117_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__117_1;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v48->__9__117_1,
                (int32_t)_9__117_1,
                v49,
                v50,
                v51,
                v52,
                v53,
                v54);
            }
            v55 = System_Linq_Enumerable__Where_object_(
                    v44,
                    (System_Func_TSource__bool__o *)_9__117_1,
                    (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
            actor = System_Linq_Enumerable__ToArray_object_(
                      v55,
                      (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleActionData_BuffData___);
            if ( actor )
            {
              v56 = *((_DWORD *)actor + 6);
              v57 = actor;
              if ( v56 >= 1 )
              {
                v58 = 0;
                while ( v58 < v56 )
                {
                  v59 = *((_QWORD *)v57 + (int)v58 + 4);
                  if ( !v59 )
                    goto LABEL_98;
                  v10 = *(unsigned int *)(v59 + 60);
                  if ( (_DWORD)v10 )
                  {
                    actor = v22->klass;
                    if ( !v22->klass )
                      goto LABEL_98;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v10,
                                      (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v56 = *((_DWORD *)v57 + 6);
                  if ( (int)++v58 >= v56 )
                    goto LABEL_40;
                }
                goto LABEL_99;
              }
LABEL_40:
              HealList = BattleActionData__getHealList(monitor, -1, 0);
              v62 = BattleSequenceManager___c_TypeInfo;
              v63 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
              if ( !*(&BattleSequenceManager___c_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo, v61);
                v62 = BattleSequenceManager___c_TypeInfo;
              }
              v64 = v62->static_fields;
              _9__117_2 = (System_Func_object__bool__o *)v64->__9__117_2;
              if ( !_9__117_2 )
              {
                if ( !*(&v62->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(v62, v61);
                  v64 = BattleSequenceManager___c_TypeInfo->static_fields;
                }
                v66 = (Il2CppObject *)v64->__9;
                _9__117_2 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleActionData_HealData__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__117_2,
                  v66,
                  Method_BattleSequenceManager___c__SetupTargetInfo_b__117_2__,
                  0);
                v67 = BattleSequenceManager___c_TypeInfo->static_fields;
                v67->__9__117_2 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__117_2;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v67->__9__117_2,
                  (int32_t)_9__117_2,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72,
                  v73);
              }
              v74 = System_Linq_Enumerable__Where_object_(
                      v63,
                      (System_Func_TSource__bool__o *)_9__117_2,
                      (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
              actor = System_Linq_Enumerable__ToArray_object_(
                        v74,
                        (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
              if ( actor )
              {
                v75 = *((_DWORD *)actor + 6);
                v76 = actor;
                if ( v75 >= 1 )
                {
                  v77 = 0;
                  while ( v77 < v75 )
                  {
                    v78 = *((_QWORD *)v76 + (int)v77 + 4);
                    if ( !v78 )
                      goto LABEL_98;
                    v10 = *(unsigned int *)(v78 + 48);
                    if ( (_DWORD)v10 )
                    {
                      actor = v22->klass;
                      if ( !v22->klass )
                        goto LABEL_98;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v10,
                                        (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v75 = *((_DWORD *)v76 + 6);
                    if ( (int)++v77 >= v75 )
                      goto LABEL_55;
                  }
                  goto LABEL_99;
                }
LABEL_55:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)monitor->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v80 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v80,
                    (Il2CppObject *)v3,
                    Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__3__,
                    0);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v80,
                    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                klass_low = LOBYTE(Component_object[36].klass);
                v82 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v82,
                  (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v22->klass;
                if ( v22->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v135,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v134 = 0;
                  v136 = v135;
                  v83 = 0;
                  v135.fields._set = 0;
                  *(_QWORD *)&v135.fields._index = &v136;
                  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &v136,
                            (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                  {
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_2213CDC(0, v84);
                    current = (int32_t)v136.fields._current;
                    ServantGameObject = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                                  performance,
                                                                  (int32_t)v136.fields._current,
                                                                  0);
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v87);
                    v89 = UnityEngine_Object__op_Equality(ServantGameObject, 0, 0);
                    if ( !v89 )
                    {
                      if ( !ServantGameObject )
                        sub_2213CDC(v89, v90);
                      v91 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)ServantGameObject,
                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      if ( !v91 )
                        sub_2213CDC(0, v92);
                      if ( (klass_low != 0) != (LOBYTE(v91[36].klass) != 0) )
                      {
                        ++v83;
                        if ( !v82 )
                          sub_2213CDC(v91, v92);
                        System_Collections_Generic_HashSet_int___Add(
                          v82,
                          current,
                          (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
                      }
                      else
                      {
                        ++v134;
                      }
                    }
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &v136,
                    (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v83 == 1 && v134 )
                  {
                    v22->klass = (MissionNaviTransitionBoardItem_c *)v82;
                    sub_2213A04(v22, (int32_t)v82, v93, v94, v95, v96, v97, v98);
                  }
                  actor = v22->klass;
                  if ( v22->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v135,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v99 = -1;
                      v136 = v135;
                      v135.fields._set = 0;
                      *(_QWORD *)&v135.fields._index = &v136;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &v136,
                                (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                        v99 = (int32_t)v136.fields._current;
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &v136,
                        (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_98;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v99, 0);
                      if ( !actor )
                        goto LABEL_98;
                      v100 = (struct UnityEngine_GameObject_o *)actor;
                      v101 = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)actor,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v100;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)&this->fields.SingleTarget,
                        (int32_t)v100,
                        v102,
                        v103,
                        v104,
                        v105,
                        v106,
                        v107);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v101, v108);
                    }
                    if ( v82 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v135,
                        v82,
                        (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v136 = v135;
                      v135.fields._set = 0;
                      *(_QWORD *)&v135.fields._index = &v136;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &v136,
                                (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v110 = this->fields.performance;
                        if ( !v110 )
                          sub_2213CDC(0, v109);
                        v111 = (int32_t)v136.fields._current;
                        v113 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                         v110,
                                                         (int32_t)v136.fields._current,
                                                         0);
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v112);
                        v114 = UnityEngine_Object__op_Equality(v113, 0, 0);
                        if ( !v114 )
                        {
                          if ( !v113 )
                            sub_2213CDC(v114, v115);
                          v116 = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v113,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v117 = (BattleSequenceManager_BattleTarget_o *)sub_2213CCC(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor(v117, 0);
                          v119 = this->fields.performance;
                          if ( !v119 )
                            sub_2213CDC(0, v118);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v119, v111, 0);
                          if ( !v117 )
                            sub_2213CDC(ServantPosIndex, v121);
                          BattleSequenceManager_BattleTarget__setup(
                            v117,
                            (BattleActorControl_o *)v116,
                            ServantPosIndex,
                            0);
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList
                            || (items = battleTargetList->fields._items,
                                v131 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__,
                                ++battleTargetList->fields._version,
                                !items) )
                          {
                            sub_2213CDC(battleTargetList, v122);
                          }
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= LODWORD(items->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v117,
                              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v133 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v133[4] = (Il2CppClass *)v117;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)(v133 + 4),
                              (int32_t)v117,
                              v123,
                              v124,
                              v125,
                              v126,
                              v127,
                              v128);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &v136,
                        (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
    sub_2213CDC(actor, v10);
  }
}


void BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_2213CDC(0, method);
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
  if ( (byte_59735D0 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735D0 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_11;
  infoComp = (UnityEngine_Object_o *)performance->fields.infoComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFullScreen);
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
    sub_2213CDC(this, isFullScreen);
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
  __int64 v8; // x1
  Il2CppObject *Component_object; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  __int64 v14; // x1
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v16; // x4
  char v17; // w24
  BaseMonoBehaviour_o *v18; // x25
  UnityEngine_GameObject_o *dummyActorPrefab; // x26
  UnityEngine_Transform_o *m_CachedPtr; // x27
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x22
  UnityEngine_Component_o *v24; // x0
  BattleSyncTransformComponent_o *v25; // x0

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_59735DF & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_Object__Add__);
    this = (BattleSequenceManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735DF = 1;
  }
  if ( (targetPosIndex & 0x80000000) == 0 )
  {
    performance = v6->fields.performance;
    if ( !performance )
      goto LABEL_35;
    this = (BattleSequenceManager_o *)performance->fields.data;
    if ( !this )
      goto LABEL_35;
    this = (BattleSequenceManager_o *)BattleData__get_IsEnemyPosCountNormal((BattleData_o *)this, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    if ( !v5 )
      goto LABEL_35;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v5,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      Component_object = (Il2CppObject *)v6->fields.defaultSyncSetting;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !Component_object )
        goto LABEL_35;
      if ( BattleSyncTransformComponent__get_IsNotExecSync((BattleSyncTransformComponent_o *)Component_object, 0) )
        return;
      TargetPosIndexTransform = (UnityEngine_Object_o *)BattleSequenceManager__GetTargetPosIndexTransform(
                                                          v6,
                                                          targetPosIndex + 3,
                                                          v11);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Equality(TargetPosIndexTransform, 0, 0) )
        return;
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                                 (WellFired_USTimelineContainer_o *)v5,
                                                 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(AffectedObject, 0, 0);
      v17 = (char)this;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v18 = (BaseMonoBehaviour_o *)v6->fields.performance;
        if ( !v18 )
          goto LABEL_35;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        m_CachedPtr = (UnityEngine_Transform_o *)v18[10].fields.m_CachedPtr;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v16);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            v18,
                                            dummyActorPrefab,
                                            m_CachedPtr,
                                            TargetFieldPosNode,
                                            0);
        if ( !this )
          goto LABEL_35;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        WellFired_USTimelineContainer__set_AffectedObject((WellFired_USTimelineContainer_o *)v5, transform, 0);
        npEndDeleteObjects = v6->fields.npEndDeleteObjects;
        this = (BattleSequenceManager_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                            (WellFired_USTimelineContainer_o *)v5,
                                            0);
        if ( !this )
          goto LABEL_35;
        this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !npEndDeleteObjects )
          goto LABEL_35;
        sub_1FFEDA8(npEndDeleteObjects, this, Method_System_Collections_Generic_List_Object__Add__);
      }
      v24 = (UnityEngine_Component_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                         (WellFired_USTimelineContainer_o *)v5,
                                         0);
      this = (BattleSequenceManager_o *)BasicHelper__GetOrAddComponent_object_(
                                          v24,
                                          (const MethodInfo_3813E18 *)Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_35;
      v25 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0);
      if ( (v17 & 1) == 0 )
      {
        tlcont = (WellFired_USTimelineContainer_o *)v25;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_35;
        sub_1FFEDA8(this, tlcont, Method_System_Collections_Generic_List_Object__Add__);
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        return;
      }
LABEL_35:
      sub_2213CDC(this, tlcont);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleSequenceManager__TargetTransformOverwriteOrReset(
        BattleSequenceManager_o *this,
        bool isOverwrite,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x8
  System_Collections_Generic_List_object__o *BattleActor; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *performance; // x8
  BattleActorControl_o *v9; // x20
  BattleActionData_o *nowAction; // x21
  _BOOL8 v11; // x0
  __int64 v12; // x1
  void *monitor; // x22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x23
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x0
  System_Collections_ICollection_o *Components_object; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v21; // x1
  void *v22; // x8
  unsigned __int64 v23; // x29
  NoblePhantasmTargetOverwriteTransform_o *v24; // x24
  __int64 v25; // x25
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 TargetOfTreasureDevice; // x0
  __int64 v37; // x1
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_59735EF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
    byte_59735EF = 1;
  }
  battleTargetList = this->fields.battleTargetList;
  memset(&v39, 0, sizeof(v39));
  if ( battleTargetList )
  {
    BattleActor = (System_Collections_Generic_List_object__o *)BattleSequenceManager__get_BattleActor(
                                                                 this,
                                                                 (const MethodInfo *)isOverwrite);
    performance = this->fields.performance;
    if ( !performance
      || (v9 = (BattleActorControl_o *)BattleActor,
          (BattleActor = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList) == 0) )
    {
      sub_2213CDC(BattleActor, v7);
    }
    nowAction = performance->fields.nowAction;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      BattleActor,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v39 = v38;
    v38.fields._list = 0;
    *(_QWORD *)&v38.fields._index = &v39;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v39,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v11 )
        break;
      if ( !v39.fields._current )
        sub_2213CDC(v11, v12);
      monitor = v39.fields._current[1].monitor;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0, 0);
      if ( !v14 )
      {
        if ( !monitor )
          sub_2213CDC(v14, v15);
        v16 = (UnityEngine_Object_o *)*((_QWORD *)monitor + 5);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        if ( !UnityEngine_Object__op_Equality(v16, 0, 0) )
        {
          v18 = (UnityEngine_GameObject_o *)*((_QWORD *)monitor + 5);
          if ( !v18 )
            sub_2213CDC(0, v17);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v18,
                                                                    (const MethodInfo_38B76D4 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_2213CDC(IsNullOrEmpty, v21);
            v22 = Components_object[1].monitor;
            if ( (int)v22 >= 1 )
            {
              v23 = 0;
              do
              {
                if ( v23 >= (unsigned int)v22 )
                  sub_2213CE4(IsNullOrEmpty);
                v24 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v23);
                v25 = sub_2213CCC(NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
                NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo___ctor(
                  (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v25,
                  0);
                if ( !v25 )
                  sub_2213CDC(v26, v27);
                *(_QWORD *)(v25 + 16) = monitor;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v25 + 16),
                  (int32_t)monitor,
                  v28,
                  v29,
                  v30,
                  v31,
                  v32,
                  v33);
                if ( !nowAction )
                  sub_2213CDC(v34, v35);
                *(_DWORD *)(v25 + 24) = BattleActionData__GetTargetSideFunctionRange(
                                          nowAction,
                                          *((_BYTE *)monitor + 576),
                                          0);
                TargetOfTreasureDevice = BattleActionData__GetTargetOfTreasureDevice(
                                           nowAction,
                                           (BattleActorControl_o *)monitor,
                                           v9,
                                           0);
                *(_DWORD *)(v25 + 28) = TargetOfTreasureDevice;
                if ( isOverwrite )
                {
                  if ( !v24 )
                    sub_2213CDC(TargetOfTreasureDevice, v37);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
                    v24,
                    (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v25,
                    0);
                }
                else
                {
                  if ( !v24 )
                    sub_2213CDC(TargetOfTreasureDevice, v37);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(
                    v24,
                    (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v25,
                    0);
                }
                LODWORD(v22) = Components_object[1].monitor;
                ++v23;
              }
              while ( (__int64)v23 < (int)v22 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v39,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattlePerformance_o *performance; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleActionData_TreasureDvcAfterChangeBgm_o *TdAfterChangeBgm_k__BackingField; // x19

  performance = this->fields.performance;
  if ( !performance )
    sub_2213CDC(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)changeBgm,
    (int32_t)TdAfterChangeBgm_k__BackingField,
    (System_String_o *)method,
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
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59735BB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    byte_59735BB = 1;
  }
  delayInvokeTimer = this->fields.delayInvokeTimer;
  memset(&v10, 0, sizeof(v10));
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
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v10,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v10.fields._current )
          (*(void (__fastcall **)(_QWORD, _QWORD))((char *)&v10.fields._current->klass + (unsigned __int64)off_18))(
            *(Il2CppClass **)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_40),
            *(Il2CppClass **)((char *)&v10.fields._current->klass + (unsigned __int64)&qword_28));
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v10,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v7 = this->fields.DelayInvokeMethodList;
      if ( !v7 )
LABEL_14:
        sub_2213CDC(DelayInvokeMethodList, v4);
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
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59735D2 & 1) == 0 )
  {
    sub_2213A60(&BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
    byte_59735D2 = 1;
  }
  v3 = sub_2213CCC(BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__108___ctor((BattleSequenceManager__WaitEndSequence_d__108_o *)v3, 0, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v10; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v11; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59735F7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_59735F7 = 1;
  }
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  memset(&v12, 0, sizeof(v12));
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v10 = 0;
  v11 = &v12;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v12.fields._current, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v6);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v7 = this->fields.ReleaseSoundNames;
  if ( !v7 )
LABEL_14:
    sub_2213CDC(ReleaseSoundNames, method);
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

  if ( (byte_59735C6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_59735C6 = 1;
  }
  FlagRequestNumber = System_String__Concat_75651716((System_String_o *)StringLiteral_16746/*"_"*/, labelName, 0);
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
        BattleData__AddServantVoicePlayed_52911472((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0);
        return;
      }
    }
LABEL_9:
    sub_2213CDC(FlagRequestNumber, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  bool v8; // w6
  bool v9; // w7
  float z; // s8
  float y; // s9
  float x; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  BattlePerformance_o *performance; // x23
  System_Action_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_59735CE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleSequenceManager_OnBgChanged__);
    byte_59735CE = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.BgChangedCallback,
    (int32_t)callback,
    *(System_String_o **)&tp,
    (System_String_o *)parentCamera,
    (int32_t)callback,
    (int32_t)method,
    v8,
    v9);
  performance = this->fields.performance;
  v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0);
  if ( !performance )
    sub_2213CDC(v23, v24);
  v25.fields.z = v13;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v25.fields.x = v15;
  v25.fields.y = v14;
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

  if ( (byte_59735C8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_59735C8 = 1;
  }
  FlagRequestNumber = System_String__Concat_75651716((System_String_o *)StringLiteral_16746/*"_"*/, labelName, 0);
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
    sub_2213CDC(FlagRequestNumber, v10);
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

  if ( (byte_59735E4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_59735E4 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_2213CDC(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *BattleSequenceManager__getPlayedSoundList(BattleSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_59735E6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    byte_59735E6 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *BattleSequenceManager__get_BattleActor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_59735B7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735B7 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(actor, 0, 0) )
    return 0;
  v5 = this->fields.actor;
  if ( !v5 )
    sub_2213CDC(0, v4);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v5,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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

  if ( (byte_59735BA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    byte_59735BA = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_224B908(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v8);
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

  if ( (byte_59735B8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735B8 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Equality(performance, 0, 0);
  if ( v4 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_14;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v4 = UnityEngine_Object__op_Equality(data, 0, 0);
  if ( v4 )
    return 0;
  v9 = this->fields.performance;
  if ( !v9 || (v10 = v9->fields.data) == 0 )
LABEL_14:
    sub_2213CDC(v4, v5);
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
  __int64 v8; // x1
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v10; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v12; // x20
  struct BattlePerformance_o *v14; // x8

  if ( (byte_59735B9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735B9 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Component_object = (void *)UnityEngine_Object__op_Equality(performance, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_27;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Equality(data, 0, 0) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  Component_object = (void *)UnityEngine_Object__op_Inequality(actor, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
    goto LABEL_22;
  Component_object = this->fields.actor;
  if ( !Component_object )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Component_object,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_object )
    goto LABEL_27;
  v10 = this->fields.performance;
  if ( !v10 )
    goto LABEL_27;
  nowAction = v10->fields.nowAction;
  v12 = (BattleServantData_o *)*((_QWORD *)Component_object + 69);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v12 )
LABEL_27:
    sub_2213CDC(Component_object, v5);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_object + 69), 0) )
    return 0;
  Component_object = (void *)BattleServantData__IsFixNpFastSpeed(v12, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 1;
LABEL_22:
  v14 = this->fields.performance;
  if ( !v14 )
    goto LABEL_27;
  Component_object = v14->fields.data;
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v40; // x1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct UnityEngine_Transform_o *parent; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  const MethodInfo *v68; // x1
  System_Collections_Generic_Dictionary_object__int__o *v69; // x20
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_Collections_Generic_HashSet_object__o *v76; // x20
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7

  if ( (byte_59735CD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_59735CD = 1;
  }
  this->fields.performance = performance;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.performance,
    (int32_t)performance,
    (System_String_o *)actor,
    (System_String_o *)players,
    (int32_t)enemies,
    (int32_t)camera,
    (bool)bg,
    (bool)method);
  this->fields.actor = actor;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.actor, (int32_t)actor, v15, v16, v17, v18, v19, v20);
  this->fields.playerActors = players;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playerActors,
    (int32_t)players,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.enemyActors = enemies;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enemyActors,
    (int32_t)enemies,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.actorCamera = camera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actorCamera,
    (int32_t)camera,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectCamera,
    (int32_t)middleCamera,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cutInCamera,
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
    sub_2213CDC(actorCamera, v40);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0);
  this->fields.originalCameraRoot = parent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.originalCameraRoot,
    (int32_t)parent,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.bgObject = bg;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bgObject, (int32_t)bg, v62, v63, v64, v65, v66, v67);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v68);
  v69 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v69,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v69;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playAudioSyncGroupIndexDict,
    (int32_t)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v76,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v76;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playedAudioGroupIdHash,
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
  if ( (byte_59735E7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_59735E7 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_59735CA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_2233/*"Actor"*/);
    sub_2213A60(&StringLiteral_17486/*"animCamLoc"*/);
    byte_59735CA = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2233/*"Actor"*/, 0)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_17486/*"animCamLoc"*/, 0);
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w9
  int32_t v33; // w10
  int32_t v34; // w8
  Il2CppObject *Component_object; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t LimitImageIndex; // w8
  int32_t v43; // w10
  int32_t v44; // w0
  AssetLoader_LoadEndDataHandler_c *v45; // x8
  AssetLoader_LoadEndDataHandler_o *v46; // x19
  __int64 v47; // x1

  if ( (byte_59735BC & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__);
    sub_2213A60(&BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
    sub_2213A60(&StringLiteral_9908/*"NoblePhantasm/CutIns"*/);
    byte_59735BC = 1;
  }
  v17 = sub_2213CCC(BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass75_0___ctor((BattleSequenceManager___c__DisplayClass75_0_o *)v17, 0);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 56) = onComplete;
  *(_DWORD *)(v17 + 24) = chrId;
  *(_DWORD *)(v17 + 28) = limitCount;
  *(_DWORD *)(v17 + 32) = treasureDeviceId;
  *(_DWORD *)(v17 + 36) = treasureDeviceLv;
  *(_DWORD *)(v17 + 40) = npChargeStage;
  *(_DWORD *)(v17 + 44) = overwriteSvtVoiceId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 56), (int32_t)onComplete, v26, v27, v28, v29, v30, v31);
  v32 = *(_DWORD *)(v17 + 24);
  v33 = *(_DWORD *)(v17 + 32);
  actor = this->fields.actor;
  this->fields.limitCount = *(_DWORD *)(v17 + 28);
  v34 = *(_DWORD *)(v17 + 44);
  this->fields.chrId = v32;
  this->fields.treasureDeviceId = v33;
  this->fields.overwriteSvtVoiceId = v34;
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v17 + 48) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 48), (int32_t)Component_object, v36, v37, v38, v39, v40, v41);
  actor = *(UnityEngine_GameObject_o **)(v17 + 48);
  if ( !actor
    || (LimitImageIndex = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0),
        v43 = *(_DWORD *)(v17 + 24),
        actor = *(UnityEngine_GameObject_o **)(v17 + 48),
        this->fields.actorLimitImgCount = LimitImageIndex,
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = v43,
        !actor) )
  {
LABEL_10:
    sub_2213CDC(actor, v19);
  }
  v44 = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0);
  v45 = AssetLoader_LoadEndDataHandler_TypeInfo;
  this->fields.loadStandFigureLimitCount = v44;
  v46 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(v45);
  AssetLoader_LoadEndDataHandler___ctor(
    v46,
    (Il2CppObject *)v17,
    Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v47);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9908/*"NoblePhantasm/CutIns"*/, v46, 1, 0, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattlePerformance_o *v17; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  __int64 v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  UnityEngine_Object_o *seqObject; // x22
  __int64 v28; // x1
  int32_t chrId; // w22
  struct BattlePerformance_o *v30; // x8
  struct BattlePerformance_o *v31; // x8
  UnityEngine_Camera_o *actorCamera; // x22
  int32_t cullingMask; // w23
  char v34; // w0
  UnityEngine_Camera_o *effectCamera; // x22
  int32_t v36; // w23
  char v37; // w0
  System_Collections_Generic_List_bool__o *v38; // x23
  BattleSequenceManager_o **p_ActorActiveList; // x22
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct BattlePerformance_o *v46; // x8
  struct UnityEngine_GameObject_array *v47; // x27
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v49; // x28
  UnityEngine_Object_o *v50; // x23
  const MethodInfo *v51; // x2
  BattleServantData_o *v52; // x24
  System_Collections_Generic_List_bool__o *v53; // x25
  struct System_Boolean_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  intptr_t m_CachedPtr; // x8
  _QWORD *v58; // x9
  __int64 m_CancellationTokenSource_low; // x10
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct UnityEngine_GameObject_array *saveWaitPlayer; // x8
  Il2CppClass **v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  struct BattlePerformance_o *v74; // x8
  struct UnityEngine_GameObject_array *v75; // x8
  __int64 v76; // x0
  struct BattlePerformance_o *v77; // x8
  struct UnityEngine_GameObject_array *v78; // x27
  il2cpp_array_size_t v79; // x8
  unsigned __int64 v80; // x28
  UnityEngine_Object_o *v81; // x23
  const MethodInfo *v82; // x2
  BattleServantData_o *v83; // x24
  System_Collections_Generic_List_bool__o *v84; // x25
  struct System_Boolean_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  intptr_t v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  Il2CppClass **v98; // x0
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  struct BattlePerformance_o *v105; // x8
  struct UnityEngine_GameObject_array *v106; // x8
  __int64 v107; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  BattleSequenceManager_o *v115; // x22
  __int64 v116; // x1
  int32_t v117; // w1
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  BattleSequenceManager_o *v124; // x23
  System_String_o *v125; // x2
  System_String_o *v126; // x3
  int32_t v127; // w4
  int32_t v128; // w5
  bool v129; // w6
  bool v130; // w7
  int32_t v131; // w1
  __int64 v132; // x1
  BattleSequenceManager_c *v133; // x0
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  BattleSequenceManager_o *v140; // x23
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  int32_t v147; // w1
  System_String_o *v148; // x2
  System_String_o *v149; // x3
  int32_t v150; // w4
  int32_t v151; // w5
  bool v152; // w6
  bool v153; // w7
  BattleSequenceManager_o *v154; // x23
  System_String_o *v155; // x2
  System_String_o *v156; // x3
  int32_t v157; // w4
  int32_t v158; // w5
  bool v159; // w6
  bool v160; // w7
  int32_t v161; // w1
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  int32_t v168; // w1
  __int64 v169; // x1
  System_Collections_Hashtable_o *v170; // x0
  System_String_o *BgmName; // x0
  System_String_o *v172; // x2
  System_String_o *v173; // x3
  int32_t v174; // w4
  int32_t v175; // w5
  bool v176; // w6
  bool v177; // w7
  const MethodInfo *v178; // x2
  BattleSequenceManager_o *v179; // x21
  MissionNaviTransitionBoardItem_o *p_actorCamera; // x22
  System_Delegate_o *v181; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v182; // x24
  System_Delegate_o *v183; // x0
  System_String_o *v184; // x2
  System_String_o *v185; // x3
  int32_t v186; // w4
  int32_t v187; // w5
  bool v188; // w6
  bool v189; // w7
  int32_t v190; // w8
  WellFired_USSequencer_PlaybackDelegate_c *v191; // x1
  struct System_Action_USSequencer__o *v192; // x20
  System_String_o *v193; // x2
  System_String_o *v194; // x3
  int32_t v195; // w4
  int32_t v196; // w5
  bool v197; // w6
  bool v198; // w7
  __int64 v199; // x1
  const MethodInfo *v200; // x2
  __int64 v201; // x0
  System_Action_USSequencer__o *v202; // [xsp+8h] [xbp-78h]
  int v203; // [xsp+14h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+18h] [xbp-68h] BYREF
  int v205; // [xsp+1Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_59735CF & 1) == 0 )
  {
    sub_2213A60(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__);
    sub_2213A60(&BattleSequenceManager_TypeInfo);
    sub_2213A60(&CommonUI_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_2213A60(&Method_System_Collections_Generic_List_bool__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_2213A60(&System_Collections_Generic_List_bool__TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&WellFired_USSequencer_PlaybackDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_2213A60(&StringLiteral_13410/*"ShowNobleInfo"*/);
    sub_2213A60(&StringLiteral_20622/*"from"*/);
    sub_2213A60(&StringLiteral_10235/*"OnChangeBgmVolume"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23573/*"onupdate"*/);
    sub_2213A60(&StringLiteral_3229/*"Battle2D"*/);
    sub_2213A60(&StringLiteral_25406/*"to"*/);
    this = (BattleSequenceManager_o *)sub_2213A60(&iTween_TypeInfo);
    byte_59735CF = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_132;
  p_actorlist = performance->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_132;
  v10 = sub_2213B20(UnityEngine_GameObject___TypeInfo, LODWORD(p_actorlist->max_length));
  v7->fields.saveWaitPlayer = (struct UnityEngine_GameObject_array *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields.saveWaitPlayer, v10, v11, v12, v13, v14, v15, v16);
  v17 = v7->fields.performance;
  if ( !v17 )
    goto LABEL_132;
  e_actorlist = v17->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_132;
  v19 = sub_2213B20(UnityEngine_GameObject___TypeInfo, LODWORD(e_actorlist->max_length));
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields.saveWaitEnemy, v19, v20, v21, v22, v23, v24, v25);
  seqObject = (UnityEngine_Object_o *)v7->fields.seqObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0, 0) )
  {
    chrId = v7->fields.chrId;
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v28);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      if ( !*(&BattleSequenceManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo, isOpponent);
        this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      }
      if ( this->fields.standFigure->klass )
      {
        if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, isOpponent);
        CommonUI__SetForceObi_16_9(1, 0);
      }
    }
    if ( !isDemoMode )
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)v7,
        (System_String_o *)StringLiteral_13410/*"ShowNobleInfo"*/,
        0.7,
        0);
    v30 = v7->fields.performance;
    if ( v30 )
    {
      this = (BattleSequenceManager_o *)v30->fields.actioncamera;
      if ( this )
      {
        BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0);
        v31 = v7->fields.performance;
        v7->fields.DemoMode = isDemoMode;
        if ( v31 )
        {
          this = (BattleSequenceManager_o *)v31->fields.actioncamera;
          if ( this )
          {
            v202 = callback;
            BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0);
            actorCamera = v7->fields.actorCamera;
            if ( actorCamera )
            {
              cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0);
              v34 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3229/*"Battle2D"*/, 0);
              UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v34), 0);
              effectCamera = v7->fields.effectCamera;
              if ( effectCamera )
              {
                v36 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0);
                v37 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3229/*"Battle2D"*/, 0);
                UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v37) | v36, 0);
                v38 = (System_Collections_Generic_List_bool__o *)sub_2213CCC(System_Collections_Generic_List_bool__TypeInfo);
                System_Collections_Generic_List_bool____ctor(
                  v38,
                  (const MethodInfo_4410F08 *)Method_System_Collections_Generic_List_bool___ctor__);
                v7->fields.ActorActiveList = v38;
                p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&v7->fields.ActorActiveList,
                  (int32_t)v38,
                  v40,
                  v41,
                  v42,
                  v43,
                  v44,
                  v45);
                v46 = v7->fields.performance;
                if ( v46 )
                {
                  v47 = v46->fields.p_actorlist;
                  if ( v47 )
                  {
                    max_length = v47->max_length;
                    if ( (int)max_length >= 1 )
                    {
                      v49 = 0;
                      while ( v49 < (unsigned int)max_length )
                      {
                        v50 = (UnityEngine_Object_o *)v47->m_Items[v49];
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOpponent);
                        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v50, 0, 0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !v50 )
                            goto LABEL_132;
                          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)v50,
                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          if ( !this )
                            goto LABEL_132;
                          v52 = (BattleServantData_o *)*((_QWORD *)this + 69);
                          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v51);
                          v53 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
                          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                              (UnityEngine_GameObject_o *)v50,
                                                              0);
                          if ( !v53 )
                            goto LABEL_132;
                          items = v53->fields._items;
                          v55 = Method_System_Collections_Generic_List_bool__Add__;
                          ++v53->fields._version;
                          if ( !items )
                            goto LABEL_132;
                          size = v53->fields._size;
                          if ( (unsigned int)size >= LODWORD(items->max_length) )
                          {
                            System_Collections_Generic_List_bool___AddWithResize(
                              v53,
                              (unsigned __int8)this & 1,
                              *(const MethodInfo_44117A4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v53->fields._size = size + 1;
                            items->m_Items[size] = (unsigned __int8)this & 1;
                          }
                          if ( !v52 )
                            goto LABEL_132;
                          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v52, 0);
                          if ( ((unsigned __int8)this & 1) != 0 || v52->fields.isAnimPlayedWithdraw )
                          {
                            saveWaitPlayer = v7->fields.saveWaitPlayer;
                            if ( !saveWaitPlayer )
                              goto LABEL_132;
                            if ( v49 >= LODWORD(saveWaitPlayer->max_length) )
                              goto LABEL_133;
                            v67 = &saveWaitPlayer->obj.klass + v49;
                            v67[4] = (Il2CppClass *)v50;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)(v67 + 4),
                              (int32_t)v50,
                              v60,
                              v61,
                              v62,
                              v63,
                              v64,
                              v65);
                            v74 = v7->fields.performance;
                            if ( !v74 )
                              goto LABEL_132;
                            v75 = v74->fields.p_actorlist;
                            if ( !v75 )
                              goto LABEL_132;
                            if ( v49 >= LODWORD(v75->max_length) )
                              goto LABEL_133;
                            v76 = (__int64)v75 + 8 * v49;
                            *(_QWORD *)(v76 + 32) = 0;
                            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 32), 0, v68, v69, v70, v71, v72, v73);
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v50, 0, 0);
                          }
                        }
                        else
                        {
                          this = *p_ActorActiveList;
                          if ( !*p_ActorActiveList )
                            goto LABEL_132;
                          m_CachedPtr = this->fields.m_CachedPtr;
                          v58 = Method_System_Collections_Generic_List_bool__Add__;
                          ++HIDWORD(this->fields.m_CancellationTokenSource);
                          if ( !m_CachedPtr )
                            goto LABEL_132;
                          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                          {
                            System_Collections_Generic_List_bool___AddWithResize(
                              (System_Collections_Generic_List_bool__o *)this,
                              0,
                              *(const MethodInfo_44117A4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                            *(_BYTE *)(m_CachedPtr + m_CancellationTokenSource_low + 32) = 0;
                          }
                        }
                        LODWORD(max_length) = v47->max_length;
                        if ( (__int64)++v49 >= (int)max_length )
                          goto LABEL_57;
                      }
                      goto LABEL_133;
                    }
LABEL_57:
                    v77 = v7->fields.performance;
                    if ( v77 )
                    {
                      v78 = v77->fields.e_actorlist;
                      if ( v78 )
                      {
                        v79 = v78->max_length;
                        if ( (int)v79 >= 1 )
                        {
                          v80 = 0;
                          while ( v80 < (unsigned int)v79 )
                          {
                            v81 = (UnityEngine_Object_o *)v78->m_Items[v80];
                            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isOpponent);
                            this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v81, 0, 0);
                            if ( ((unsigned __int8)this & 1) != 0 )
                            {
                              if ( !v81 )
                                goto LABEL_132;
                              this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)v81,
                                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                              if ( !this )
                                goto LABEL_132;
                              v83 = (BattleServantData_o *)*((_QWORD *)this + 69);
                              BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v82);
                              v84 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
                              this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                                  (UnityEngine_GameObject_o *)v81,
                                                                  0);
                              if ( !v84 )
                                goto LABEL_132;
                              v85 = v84->fields._items;
                              v86 = Method_System_Collections_Generic_List_bool__Add__;
                              ++v84->fields._version;
                              if ( !v85 )
                                goto LABEL_132;
                              v87 = v84->fields._size;
                              if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
                              {
                                System_Collections_Generic_List_bool___AddWithResize(
                                  v84,
                                  (unsigned __int8)this & 1,
                                  *(const MethodInfo_44117A4 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v84->fields._size = v87 + 1;
                                v85->m_Items[v87] = (unsigned __int8)this & 1;
                              }
                              if ( !v83 )
                                goto LABEL_132;
                              this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v83, 0);
                              if ( ((unsigned __int8)this & 1) != 0 || v83->fields.isAnimPlayedWithdraw )
                              {
                                saveWaitEnemy = v7->fields.saveWaitEnemy;
                                if ( !saveWaitEnemy )
                                  goto LABEL_132;
                                if ( v80 >= LODWORD(saveWaitEnemy->max_length) )
                                  goto LABEL_133;
                                v98 = &saveWaitEnemy->obj.klass + v80;
                                v98[4] = (Il2CppClass *)v81;
                                sub_2213A04(
                                  (MissionNaviTransitionBoardItem_o *)(v98 + 4),
                                  (int32_t)v81,
                                  v91,
                                  v92,
                                  v93,
                                  v94,
                                  v95,
                                  v96);
                                v105 = v7->fields.performance;
                                if ( !v105 )
                                  goto LABEL_132;
                                v106 = v105->fields.e_actorlist;
                                if ( !v106 )
                                  goto LABEL_132;
                                if ( v80 >= LODWORD(v106->max_length) )
                                  goto LABEL_133;
                                v107 = (__int64)v106 + 8 * v80;
                                *(_QWORD *)(v107 + 32) = 0;
                                sub_2213A04(
                                  (MissionNaviTransitionBoardItem_o *)(v107 + 32),
                                  0,
                                  v99,
                                  v100,
                                  v101,
                                  v102,
                                  v103,
                                  v104);
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v81, 0, 0);
                              }
                            }
                            else
                            {
                              this = *p_ActorActiveList;
                              if ( !*p_ActorActiveList )
                                goto LABEL_132;
                              v88 = this->fields.m_CachedPtr;
                              v89 = Method_System_Collections_Generic_List_bool__Add__;
                              ++HIDWORD(this->fields.m_CancellationTokenSource);
                              if ( !v88 )
                                goto LABEL_132;
                              v90 = SLODWORD(this->fields.m_CancellationTokenSource);
                              if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
                              {
                                System_Collections_Generic_List_bool___AddWithResize(
                                  (System_Collections_Generic_List_bool__o *)this,
                                  0,
                                  *(const MethodInfo_44117A4 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                LODWORD(this->fields.m_CancellationTokenSource) = v90 + 1;
                                *(_BYTE *)(v88 + v90 + 32) = 0;
                              }
                            }
                            LODWORD(v79) = v78->max_length;
                            if ( (__int64)++v80 >= (int)v79 )
                              goto LABEL_87;
                          }
                          goto LABEL_133;
                        }
LABEL_87:
                        if ( !isDemoMode )
                          BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
                        BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
                        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
                        this = (BattleSequenceManager_o *)sub_2213B20(object___TypeInfo, 8);
                        if ( this )
                        {
                          v115 = this;
                          this = (BattleSequenceManager_o *)StringLiteral_20622/*"from"*/;
                          if ( StringLiteral_20622/*"from"*/ )
                          {
                            this = (BattleSequenceManager_o *)sub_2213BB4(
                                                                StringLiteral_20622/*"from"*/,
                                                                v115->klass->_1.element_class);
                            if ( !this )
                              goto LABEL_134;
                          }
                          if ( !LODWORD(v115->fields.m_CancellationTokenSource) )
                            goto LABEL_133;
                          v117 = StringLiteral_20622/*"from"*/;
                          v115->fields.sequenceManager = (struct UnityEngine_GameObject_o *)StringLiteral_20622/*"from"*/;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v115->fields.sequenceManager,
                            v117,
                            v109,
                            v110,
                            v111,
                            v112,
                            v113,
                            v114);
                          v205 = 1;
                          this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(qword_5984348, &v205);
                          v124 = this;
                          if ( this )
                          {
                            this = (BattleSequenceManager_o *)sub_2213BB4(this, v115->klass->_1.element_class);
                            if ( !this )
                              goto LABEL_134;
                          }
                          if ( ((__int64)v115->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
                            goto LABEL_133;
                          *(_QWORD *)&v115->fields.servantId = v124;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v115->fields.servantId,
                            (int32_t)v124,
                            v118,
                            v119,
                            v120,
                            v121,
                            v122,
                            v123);
                          this = (BattleSequenceManager_o *)StringLiteral_25406/*"to"*/;
                          if ( StringLiteral_25406/*"to"*/ )
                          {
                            this = (BattleSequenceManager_o *)sub_2213BB4(
                                                                StringLiteral_25406/*"to"*/,
                                                                v115->klass->_1.element_class);
                            if ( !this )
                              goto LABEL_134;
                          }
                          if ( LODWORD(v115->fields.m_CancellationTokenSource) <= 2 )
                            goto LABEL_133;
                          v131 = StringLiteral_25406/*"to"*/;
                          *(_QWORD *)&v115->fields.testNpPer = StringLiteral_25406/*"to"*/;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v115->fields.testNpPer,
                            v131,
                            v125,
                            v126,
                            v127,
                            v128,
                            v129,
                            v130);
                          v133 = BattleSequenceManager_TypeInfo;
                          if ( !*(&BattleSequenceManager_TypeInfo->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo, v132);
                            v133 = BattleSequenceManager_TypeInfo;
                          }
                          NoblePhantasmBgmVolumeRate = v133->static_fields->NoblePhantasmBgmVolumeRate;
                          this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(
                                                              qword_5984378,
                                                              &NoblePhantasmBgmVolumeRate);
                          v140 = this;
                          if ( this )
                          {
                            this = (BattleSequenceManager_o *)sub_2213BB4(this, v115->klass->_1.element_class);
                            if ( !this )
                              goto LABEL_134;
                          }
                          if ( ((__int64)v115->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
                            goto LABEL_133;
                          v115->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v140;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v115->fields.ReleaseSoundNames,
                            (int32_t)v140,
                            v134,
                            v135,
                            v136,
                            v137,
                            v138,
                            v139);
                          this = (BattleSequenceManager_o *)StringLiteral_25366/*"time"*/;
                          if ( StringLiteral_25366/*"time"*/ )
                          {
                            this = (BattleSequenceManager_o *)sub_2213BB4(
                                                                StringLiteral_25366/*"time"*/,
                                                                v115->klass->_1.element_class);
                            if ( !this )
                              goto LABEL_134;
                          }
                          if ( LODWORD(v115->fields.m_CancellationTokenSource) <= 4 )
                            goto LABEL_133;
                          v147 = StringLiteral_25366/*"time"*/;
                          v115->fields.performance = (struct BattlePerformance_o *)StringLiteral_25366/*"time"*/;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v115->fields.performance,
                            v147,
                            v141,
                            v142,
                            v143,
                            v144,
                            v145,
                            v146);
                          v203 = 1050253722;
                          this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(qword_5984378, &v203);
                          v154 = this;
                          if ( this )
                          {
                            this = (BattleSequenceManager_o *)sub_2213BB4(this, v115->klass->_1.element_class);
                            if ( !this )
                              goto LABEL_134;
                          }
                          if ( LODWORD(v115->fields.m_CancellationTokenSource) <= 5 )
                            goto LABEL_133;
                          v115->fields.seqObject = (struct UnityEngine_GameObject_o *)v154;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v115->fields.seqObject,
                            (int32_t)v154,
                            v148,
                            v149,
                            v150,
                            v151,
                            v152,
                            v153);
                          this = (BattleSequenceManager_o *)StringLiteral_23573/*"onupdate"*/;
                          if ( StringLiteral_23573/*"onupdate"*/ )
                          {
                            this = (BattleSequenceManager_o *)sub_2213BB4(
                                                                StringLiteral_23573/*"onupdate"*/,
                                                                v115->klass->_1.element_class);
                            if ( !this )
                              goto LABEL_134;
                          }
                          if ( LODWORD(v115->fields.m_CancellationTokenSource) <= 6 )
                            goto LABEL_133;
                          v161 = StringLiteral_23573/*"onupdate"*/;
                          v115->fields.actor = (struct UnityEngine_GameObject_o *)StringLiteral_23573/*"onupdate"*/;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v115->fields.actor,
                            v161,
                            v155,
                            v156,
                            v157,
                            v158,
                            v159,
                            v160);
                          this = (BattleSequenceManager_o *)StringLiteral_10235/*"OnChangeBgmVolume"*/;
                          if ( StringLiteral_10235/*"OnChangeBgmVolume"*/ )
                          {
                            this = (BattleSequenceManager_o *)sub_2213BB4(
                                                                StringLiteral_10235/*"OnChangeBgmVolume"*/,
                                                                v115->klass->_1.element_class);
                            if ( !this )
                            {
LABEL_134:
                              v201 = sub_2213D00(this, v116);
                              sub_2213BA0(v201, 0);
                            }
                          }
                          if ( ((__int64)v115->fields.m_CancellationTokenSource & 0xFFFFFFF8) == 0 )
LABEL_133:
                            sub_2213CE4(this);
                          v168 = StringLiteral_10235/*"OnChangeBgmVolume"*/;
                          v115->fields.CutInRoot = (struct UnityEngine_GameObject_o *)StringLiteral_10235/*"OnChangeBgmVolume"*/;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&v115->fields.CutInRoot,
                            v168,
                            v162,
                            v163,
                            v164,
                            v165,
                            v166,
                            v167);
                          if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v169);
                          v170 = iTween__Hash((System_Object_array *)v115, 0);
                          iTween__ValueTo(gameObject, v170, 0);
                          this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
                          if ( this )
                          {
                            BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0);
                            v7->fields.BackupBgmName = BgmName;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)&v7->fields.BackupBgmName,
                              (int32_t)BgmName,
                              v172,
                              v173,
                              v174,
                              v175,
                              v176,
                              v177);
                            BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v178);
                            this = (BattleSequenceManager_o *)v7->fields.seqObject;
                            if ( this )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                              this = (BattleSequenceManager_o *)v7->fields.seqObject;
                              if ( this )
                              {
                                this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                                if ( this )
                                {
                                  v179 = this;
                                  p_actorCamera = (MissionNaviTransitionBoardItem_o *)&this->fields.actorCamera;
                                  v181 = (System_Delegate_o *)this->fields.actorCamera;
                                  v182 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_2213CCC(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                                  WellFired_USSequencer_PlaybackDelegate___ctor(
                                    v182,
                                    (Il2CppObject *)v7,
                                    Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                                    0);
                                  v183 = System_Delegate__Combine(v181, (System_Delegate_o *)v182, 0);
                                  v190 = (int)v183;
                                  if ( v183 )
                                  {
                                    v191 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                                    v192 = v202;
                                    if ( (WellFired_USSequencer_PlaybackDelegate_c *)v183->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                                    {
                                      p_actorCamera->klass = (MissionNaviTransitionBoardItem_c *)v183;
                                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v183->klass == v191 )
                                        goto LABEL_127;
                                    }
                                    sub_221405C(v183, v191, v184);
                                  }
                                  v192 = v202;
                                  p_actorCamera->klass = 0;
LABEL_127:
                                  sub_2213A04(p_actorCamera, v190, v184, v185, v186, v187, v188, v189);
                                  v7->fields.OnCompleteActorCallback = v192;
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)&v7->fields.OnCompleteActorCallback,
                                    (int32_t)v192,
                                    v193,
                                    v194,
                                    v195,
                                    v196,
                                    v197,
                                    v198);
                                  WellFired_USSequencer__Play((WellFired_USSequencer_o *)v179, 0);
                                  if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
                                    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v199);
                                  if ( CommonUI__GetForceObi_16_9(0) )
                                    BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v200);
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
              }
            }
          }
        }
      }
    }
LABEL_132:
    sub_2213CDC(this, isOpponent);
  }
}


void BattleSequenceManager__registNobleVoiceRandomPlay(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  _DWORD *monitor; // x8
  __int64 v7; // x1
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v9; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v11; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v13; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  VoiceMaster_o *v17; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v20; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v22; // x22

  if ( (byte_59735E8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Voice_TypeInfo);
    byte_59735E8 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_31;
    if ( LOBYTE(Component_object[36].klass) )
      return;
    monitor = Component_object[34].monitor;
    if ( !monitor )
      goto LABEL_31;
    if ( !monitor[89] && !BattleActorControl__isNoVoice((BattleActorControl_o *)Component_object, 0) )
    {
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(performance, 0, 0);
      if ( ((unsigned __int8)actor & 1) != 0 )
      {
        v9 = this->fields.performance;
        if ( !v9 )
          goto LABEL_31;
        data = (UnityEngine_Object_o *)v9->fields.data;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Inequality(data, 0, 0) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v11);
          if ( PlayedSoundList )
          {
            v13 = PlayedSoundList;
            if ( PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoiceMaster___);
                v17 = (VoiceMaster_o *)MasterData_object;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( !*(&Voice_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v15);
                  FileName = Voice__getFileName(111, 0);
                  BattleSequenceManager__removeServantVoicePlayed(this, v17, chrId, FileName, v20);
                }
                max_length = v13->max_length;
                if ( (int)max_length >= 1 )
                {
                  v22 = 0;
                  do
                  {
                    if ( v22 >= (unsigned int)max_length )
                      sub_2213CE4(MasterData_object);
                    BattleSequenceManager__addServantVoicePlayed(this, v17, this->fields.chrId, v13->m_Items[v22], v16);
                    LODWORD(max_length) = v13->max_length;
                    ++v22;
                  }
                  while ( (__int64)v22 < (int)max_length );
                }
                return;
              }
LABEL_31:
              sub_2213CDC(actor, method);
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

  if ( (byte_59735C7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_59735C7 = 1;
  }
  FlagRequestNumber = System_String__Concat_75651716((System_String_o *)StringLiteral_16746/*"_"*/, labelName, 0);
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
    sub_2213CDC(FlagRequestNumber, v10);
  }
}


void BattleSequenceManager__restoreBattleActorTransform(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59735E3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    byte_59735E3 = 1;
  }
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  memset(&v8, 0, sizeof(v8));
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    battleTargetList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_2213CDC(0, v4);
    BattleSequenceManager_BattleTarget__restoreTransform((BattleSequenceManager_BattleTarget_o *)v8.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v5 = this->fields.battleTargetList;
  if ( !v5 )
LABEL_13:
    sub_2213CDC(battleTargetList, method);
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
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  Il2CppObject *Component_object; // x0
  __int64 v23; // x1
  WellFired_USTimelineContainer_o *v24; // x20
  System_String_o *monitor; // x21
  System_String_o *v26; // x1
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x21
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  System_Collections_IEnumerator_o *v34; // [xsp+28h] [xbp-48h]

  if ( (byte_59735CC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    this = (BattleSequenceManager_o *)sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_59735CC = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0)) == 0 )
  {
    sub_2213CDC(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0);
  v34 = Enumerator;
  while ( 1 )
  {
    if ( !v34 )
      goto LABEL_38;
    klass = v34->klass;
    v9 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v11 = sub_224BC3C(v34, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(v34, *(_QWORD *)(v11 + 8)) & 1) == 0 )
      break;
    v12 = v34->klass;
    v13 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_18:
      v15 = sub_224BC3C(v34, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       v34,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_2213CDC(0, v17);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_221405C(v16, UnityEngine_Transform_TypeInfo, v18);
LABEL_38:
      sub_2213CDC(Enumerator, v7);
    }
    gameObject = UnityEngine_Component__get_gameObject(v16, 0);
    if ( !gameObject )
      sub_2213CDC(0, v21);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v24 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      sub_2213CDC(0, v23);
    monitor = (System_String_o *)Component_object[2].monitor;
    v26 = System_String__Concat_75651716((System_String_o *)StringLiteral_1123/*"/"*/, name, 0);
    Enumerator = (System_Collections_IEnumerator_o *)System_String__op_Equality(monitor, v26, 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
      goto LABEL_28;
  }
  v24 = 0;
LABEL_28:
  v27 = sub_2213BB4(v34, System_IDisposable_TypeInfo);
  if ( v27 )
  {
    v28 = *(_QWORD *)v27;
    v29 = v27;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_33;
      }
      v32 = v28 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_33:
      v32 = sub_224BC3C(v27, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  }
  return v24;
}


void BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_59735E5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_59735E5 = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_2213CDC(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  UnityEngine_GameObject_o *seqObject; // x0
  Il2CppObject *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *Component_object; // x24
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  WellFired_USTimelineContainer_o *v20; // x25
  Il2CppObject *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__58857296; // x0
  __int64 v29; // x1
  BattleSequenceManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  struct BattleSequenceManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__88_0; // x20
  Il2CppObject *v34; // x27
  struct BattleSequenceManager___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Collections_Generic_IEnumerable_T__o *v42; // x20
  System_Action_object__o *v43; // x23
  BattleSequenceManager_o *v44; // x0
  const MethodInfo *v45; // x3
  WellFired_USTimelineContainer_o *v46; // x27
  System_Collections_Generic_List_object__o *v47; // x21
  System_Collections_Generic_List_object__o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x1
  Il2CppObject *sequenceManager; // x20
  System_Collections_Generic_List_object__o *createdObjects; // x28
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  UnityEngine_Object_o *v62; // x1
  Il2CppClass **v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct UnityEngine_Camera_o *actorCamera; // x1
  UnityEngine_Object_o *v71; // x28
  struct UnityEngine_Camera_o *effectCamera; // x1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct UnityEngine_Camera_o *cutInCamera; // x1
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_o *fadeObject; // x1
  Il2CppObject *CutInPrefab; // x29
  System_Collections_Generic_List_object__o *v95; // x20
  struct UnityEngine_Vector3_StaticFields *v96; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *v100; // x0
  MissionNaviTransitionBoardItem_o *v101; // x28
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x2
  unsigned __int64 klass_low; // x8
  System_String_o *v111; // x23
  unsigned __int64 v112; // x24
  UnityEngine_Object_o *v113; // x28
  UnityEngine_Object_c *klass; // x8
  unsigned __int64 v115; // x23
  __int64 v116; // x29
  System_String_o *name; // x0
  __int64 v118; // x1
  __int64 v119; // x1
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  int32_t treasureDeviceId; // w20
  int32_t limitCount; // w28
  __int64 v128; // x1
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x20
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  System_Collections_Generic_List_object__o *v136; // x8
  struct System_Object_array *v137; // x9
  _QWORD *v138; // x10
  __int64 v139; // x11
  Il2CppClass **v140; // x0
  System_String_o *v141; // x0
  System_String_o *v142; // x2
  System_String_o *v143; // x3
  int32_t v144; // w4
  int32_t v145; // w5
  bool v146; // w6
  bool v147; // w7
  __int64 v148; // x10
  System_String_o *v149; // x0
  System_String_o *v150; // x3
  int32_t v151; // w4
  int32_t v152; // w5
  bool v153; // w6
  bool v154; // w7
  void *v155; // x1
  __int64 v156; // x9
  struct UnityEngine_Camera_o *v157; // x1
  UnityEngine_Transform_o *parent; // x0
  MissionNaviTransitionBoardItem_o *v159; // x0
  System_String_o *v160; // x0
  __int64 v161; // x9
  System_String_o **v162; // x20
  System_String_o *v163; // x0
  System_String_o *v164; // x2
  System_String_o *v165; // x3
  int32_t v166; // w4
  int32_t v167; // w5
  bool v168; // w6
  bool v169; // w7
  System_String_o *v170; // x0
  System_String_o *v171; // x2
  System_String_o *v172; // x3
  int32_t v173; // w4
  int32_t v174; // w5
  bool v175; // w6
  bool v176; // w7
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x1
  System_String_o *v178; // x2
  System_String_o *v179; // x3
  int32_t v180; // w4
  int32_t v181; // w5
  bool v182; // w6
  bool v183; // w7
  struct System_Object_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  Il2CppClass **v187; // x0
  __int64 naturalAligment; // x9
  struct UnityEngine_Camera_o *v189; // x1
  __int64 v190; // x29
  System_String_o *v191; // x2
  System_String_o *v192; // x3
  int32_t v193; // w4
  int32_t v194; // w5
  bool v195; // w6
  bool v196; // w7
  UnityEngine_Transform_o *v197; // x20
  System_Collections_Generic_List_object__o *v198; // x26
  System_String_o *v199; // x2
  System_String_o *v200; // x3
  int32_t v201; // w4
  int32_t v202; // w5
  bool v203; // w6
  bool v204; // w7
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  Il2CppClass **v208; // x0
  BattleSequenceManager_o *v209; // x0
  const MethodInfo *v210; // x3
  System_String_o *v211; // x2
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  struct System_Object_array *v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  UnityEngine_Object_o *v220; // x1
  Il2CppClass **v221; // x0
  __int64 v222; // x1
  Il2CppObject *current; // x20
  _BOOL8 v224; // x0
  __int64 v225; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v227; // x1
  _QWORD *v228; // x25
  unsigned __int64 v229; // x8
  unsigned __int64 v230; // x20
  WellFired_USTimelineEvent_o *v231; // x0
  _QWORD *v232; // x26
  __int64 v233; // x8
  unsigned __int64 i; // x24
  System_String_o *v235; // x0
  __int64 v236; // x2
  __int64 v237; // x9
  _BOOL8 v238; // x0
  __int64 v239; // x1
  System_String_o *v240; // x2
  System_String_o *v241; // x3
  int32_t v242; // w4
  int32_t v243; // w5
  bool v244; // w6
  bool v245; // w7
  UnityEngine_Component_o *v246; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v248; // x2
  System_String_o *v249; // x3
  int32_t v250; // w4
  int32_t v251; // w5
  bool v252; // w6
  bool v253; // w7
  struct System_Object_array *v254; // x8
  _QWORD *v255; // x9
  __int64 v256; // x10
  Il2CppClass **v257; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v259; // x1
  System_Collections_IEnumerator_o *v260; // x25
  int v261; // w24
  System_Collections_IEnumerator_c *v262; // x8
  __int64 v263; // x9
  int *p_offset; // x10
  __int64 v265; // x0
  __int64 v266; // x0
  __int64 v267; // x1
  BattleSequenceManager_o *v268; // x25
  BattleSequenceManager_c *v269; // x8
  __int64 v270; // x9
  System_Collections_IEnumerator_c **v271; // x10
  __int64 v272; // x0
  UnityEngine_Component_o *v273; // x0
  __int64 v274; // x1
  __int64 v275; // x2
  UnityEngine_Transform_c *v276; // x1
  __int64 v277; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v279; // x1
  Il2CppObject *v280; // x0
  __int64 v281; // x1
  Il2CppObject *v282; // x25
  System_String_o *monitor; // x0
  System_String_o *v284; // x0
  System_String_o *v285; // x0
  System_String_o *v286; // x0
  Il2CppClass *v287; // x0
  _QWORD *image; // x8
  Il2CppClass *v289; // x25
  __int64 v290; // x9
  int *v291; // x10
  __int64 v292; // x0
  BattleSequenceManager_o *EventCount; // x0
  __int64 v294; // x1
  BattleSequenceManager_o *v295; // x24
  BattleSequenceManager_c *v296; // x8
  __int64 v297; // x9
  int *v298; // x10
  __int64 v299; // x0
  __int64 v300; // x0
  __int64 v301; // x1
  BattleSequenceManager_o *v302; // x24
  BattleSequenceManager_c *v303; // x8
  __int64 v304; // x9
  System_Collections_IEnumerator_c **v305; // x10
  __int64 v306; // x0
  UnityEngine_Component_o *v307; // x0
  __int64 v308; // x1
  __int64 v309; // x2
  __int64 v310; // x9
  UnityEngine_GameObject_o *v311; // x0
  __int64 v312; // x1
  Il2CppObject *v313; // x0
  __int64 v314; // x1
  WellFired_USTimelineContainer_o *v315; // x24
  System_String_o *v316; // x0
  __int64 v317; // x1
  bool v318; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v320; // x27
  System_String_o *v321; // x0
  __int64 v322; // x1
  bool v323; // w26
  System_String_o *v324; // x0
  System_String_o *v325; // x0
  __int64 v326; // x1
  System_String_o *v327; // x0
  UnityEngine_Component_o *v328; // x0
  UnityEngine_Transform_o *v329; // x0
  System_String_o *v330; // x0
  __int64 v331; // x1
  UnityEngine_GameObject_o *actor; // x0
  __int64 v333; // x1
  UnityEngine_Transform_o *v334; // x20
  System_String_o *v335; // x0
  System_String_o *v336; // x0
  UnityEngine_Transform_o *v337; // x0
  __int64 v338; // x1
  UnityEngine_Object_o *AffectedObject; // x20
  System_String_o *v340; // x0
  __int64 *v341; // x8
  System_String_o *v342; // x0
  System_String_o *v343; // x27
  UnityEngine_GameObject_o *v344; // x0
  UnityEngine_Transform_o *v345; // x0
  __int64 v346; // x1
  __int64 v347; // x1
  UnityEngine_Object_o *v348; // x20
  _BOOL8 v349; // x0
  __int64 v350; // x1
  System_Collections_IEnumerator_o *v351; // x0
  __int64 v352; // x1
  System_Collections_IEnumerator_o *v353; // x25
  System_Collections_IEnumerator_c *v354; // x8
  __int64 v355; // x9
  int *v356; // x10
  __int64 v357; // x0
  __int64 v358; // x0
  __int64 v359; // x1
  System_Collections_IEnumerator_o *v360; // x25
  System_Collections_IEnumerator_c *v361; // x8
  __int64 v362; // x9
  System_Collections_IEnumerator_c **v363; // x10
  __int64 v364; // x0
  UnityEngine_Component_o *v365; // x0
  __int64 v366; // x1
  __int64 v367; // x2
  UnityEngine_Object_o *v368; // x25
  __int64 v369; // x9
  UnityEngine_Object_o *v370; // x0
  __int64 v371; // x1
  System_String_o *v372; // x0
  __int64 v373; // x1
  System_String_o *v374; // x0
  const MethodInfo *v375; // x2
  __int64 v376; // x1
  int32_t v377; // w20
  Il2CppClass *v378; // x0
  Il2CppClass *v379; // x26
  _QWORD *v380; // x8
  __int64 v381; // x9
  int *v382; // x10
  __int64 v383; // x0
  System_String_o *v384; // x20
  System_String_o *v385; // x0
  __int64 v386; // x1
  System_String_o *v387; // x0
  __int64 v388; // x1
  System_String_array *v389; // x0
  __int64 v390; // x1
  __int64 v391; // x1
  System_String_o *v392; // x26
  UnityEngine_GameObject_o *v393; // x0
  __int64 v394; // x1
  UnityEngine_Transform_o *v395; // x25
  System_String_o *v396; // x0
  System_String_o *v397; // x0
  __int64 v398; // x1
  System_String_o *v399; // x0
  UnityEngine_Transform_o *v400; // x0
  Il2CppObject *v401; // x20
  struct System_Collections_Generic_List_GameObject__o *v402; // x0
  _BOOL8 v403; // x0
  __int64 v404; // x1
  System_String_o *v405; // x0
  __int64 v406; // x1
  System_String_o *v407; // x1
  __int64 v408; // x1
  const MethodInfo *v409; // x4
  __int64 v410; // x1
  System_String_o *v411; // x2
  System_String_o *v412; // x3
  int32_t v413; // w4
  int32_t v414; // w5
  bool v415; // w6
  bool v416; // w7
  System_Collections_Generic_List_object__o *v417; // x0
  struct System_Object_array *v418; // x8
  _QWORD *v419; // x9
  __int64 v420; // x10
  Il2CppClass **v421; // x8
  __int64 v422; // x0
  __int64 v423; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v425; // x1
  UnityEngine_Transform_o *v426; // x0
  UnityEngine_Transform_o *v427; // x0
  __int64 v428; // x1
  __int64 v429; // x1
  UnityEngine_Transform_o *v430; // x25
  UnityEngine_GameObject_o *CutInRoot; // x0
  UnityEngine_Transform_o *v432; // x0
  UnityEngine_Transform_o *v433; // x0
  __int64 v434; // x1
  BattleSequenceManager_o *v435; // x0
  const MethodInfo *v436; // x4
  __int64 v437; // x1
  int32_t v438; // w25
  UnityEngine_Transform_o *v439; // x0
  UnityEngine_Transform_o *v440; // x0
  System_String_o *v441; // x0
  __int64 v442; // x1
  System_String_o *v443; // x0
  System_String_o *v444; // x0
  const MethodInfo *v445; // x3
  int32_t v446; // w2
  const MethodInfo *v447; // x3
  BattleSequenceManager_o *v448; // x24
  unsigned __int64 m_CancellationTokenSource_low; // x8
  unsigned __int64 v450; // x20
  WellFired_USTimelineEvent_o *v451; // x25
  int32_t j; // w26
  UnityEngine_Object_o *v453; // x0
  __int64 v454; // x1
  System_String_o *v455; // x0
  __int64 v456; // x2
  WellFired_USFGOAttachToParentEvent_c *v457; // x1
  __int64 v458; // x9
  _BOOL8 v459; // x0
  __int64 v460; // x1
  System_String_o *v461; // x2
  System_String_o *v462; // x3
  int32_t v463; // w4
  int32_t v464; // w5
  bool v465; // w6
  bool v466; // w7
  UnityEngine_Component_o *v467; // x0
  UnityEngine_Transform_o *v468; // x0
  System_String_o *v469; // x2
  System_String_o *v470; // x3
  int32_t v471; // w4
  int32_t v472; // w5
  bool v473; // w6
  bool v474; // w7
  struct System_Object_array *v475; // x8
  _QWORD *v476; // x9
  __int64 v477; // x10
  Il2CppClass **v478; // x0
  int32_t layer; // w25
  __int64 v480; // x1
  Il2CppClass *v481; // x0
  _QWORD *v482; // x8
  Il2CppClass *v483; // x20
  __int64 v484; // x9
  int *v485; // x10
  __int64 v486; // x0
  __int64 v487; // x1
  __int64 v488; // x1
  UnityEngine_Object_o *v489; // x20
  UnityEngine_Object_c *v490; // x8
  UnityEngine_Object_o *v491; // x20
  struct BattlePerformance_o *v492; // x8
  UnityEngine_Object_o *data; // x20
  __int64 v494; // x1
  Il2CppObject *MasterData_object; // x21
  Voice_c *v496; // x8
  int32_t chrId; // w20
  System_String_o *FileName; // x0
  const MethodInfo *v499; // x4
  __int64 v500; // x1
  int32_t v501; // w20
  System_String_o *v502; // x0
  const MethodInfo *v503; // x4
  UnityEngine_Object_c *v504; // x8
  int v505; // w20
  BalanceConfig_c *v506; // x0
  int32_t v507; // w20
  System_String_o *v508; // x0
  const MethodInfo *v509; // x4
  int v510; // w1
  int v511; // w20
  void *v512; // x0
  void *v513; // x25
  UnityEngine_Object_o **v514; // [xsp+8h] [xbp-158h]
  int item; // [xsp+10h] [xbp-150h]
  WellFired_USSequencer_o *seq; // [xsp+18h] [xbp-148h]
  char seqa; // [xsp+18h] [xbp-148h]
  System_String_o *newValue; // [xsp+20h] [xbp-140h]
  System_String_o *newValuea; // [xsp+20h] [xbp-140h]
  System_String_o *newValueb; // [xsp+20h] [xbp-140h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *sourcea; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_Enumerator_object__o v524; // [xsp+40h] [xbp-120h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v525; // [xsp+58h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v526; // [xsp+70h] [xbp-F0h] BYREF
  int32_t targetPosIndex; // [xsp+8Ch] [xbp-D4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v528; // [xsp+90h] [xbp-D0h] BYREF
  System_Collections_IEnumerator_o *v529; // [xsp+A8h] [xbp-B8h] BYREF
  __int64 v530; // [xsp+B0h] [xbp-B0h] BYREF
  BattleSequenceManager_o *v531; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v532; // [xsp+C0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+E8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v535; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59735C5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    sub_2213A60(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__);
    sub_2213A60(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    sub_2213A60(&System_GC_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_USTimelineContainer__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
    sub_2213A60(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_USTimelineContainer__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801600);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    sub_2213A60(&Method_BattleSequenceManager___c__setup_b__88_0__);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass88_0__setup_b__1__);
    sub_2213A60(&BattleSequenceManager___c__DisplayClass88_0_TypeInfo);
    sub_2213A60(&BattleSequenceManager___c_TypeInfo);
    sub_2213A60(&WellFired_USFGOAnimationCameraEvent_TypeInfo);
    sub_2213A60(&WellFired_USFGOAttachToParentEvent_TypeInfo);
    sub_2213A60(&WellFired_USFGOChangeBgEvent_TypeInfo);
    sub_2213A60(&WellFired_USFGOPlayCutInEvent_TypeInfo);
    sub_2213A60(&WellFired_USFGOSetCameraEvent_TypeInfo);
    sub_2213A60(&Voice_TypeInfo);
    sub_2213A60(&StringLiteral_1131/*"/Actor/chr/"*/);
    sub_2213A60(&StringLiteral_3231/*"BattleBG"*/);
    sub_2213A60(&StringLiteral_1142/*"/BattleActors/"*/);
    sub_2213A60(&StringLiteral_3233/*"BattleCamera"*/);
    sub_2213A60(&StringLiteral_3236/*"BattleCutIn"*/);
    sub_2213A60(&StringLiteral_15469/*"USFGOSetCameraEvent"*/);
    sub_2213A60(&StringLiteral_2233/*"Actor"*/);
    sub_2213A60(&StringLiteral_18069/*"body_level_"*/);
    sub_2213A60(&StringLiteral_1133/*"/Actor/chr/weapon_level_"*/);
    sub_2213A60(&StringLiteral_1132/*"/Actor/chr/body_level_"*/);
    sub_2213A60(&StringLiteral_6680/*"FGOSequenceManager"*/);
    sub_2213A60(&StringLiteral_1136/*"/AllEffects/"*/);
    sub_2213A60(&StringLiteral_18755/*"chr(Clone)"*/);
    sub_2213A60(&StringLiteral_4119/*"Cameras/BattleCamera"*/);
    sub_2213A60(&StringLiteral_15467/*"USFGOChangeBgEvent"*/);
    sub_2213A60(&StringLiteral_1154/*"/BattleCamera"*/);
    sub_2213A60(&StringLiteral_1157/*"/CutIns/"*/);
    sub_2213A60(&StringLiteral_3229/*"Battle2D"*/);
    sub_2213A60(&StringLiteral_1156/*"/Cameras/BattleCamera"*/);
    sub_2213A60(&StringLiteral_17486/*"animCamLoc"*/);
    sub_2213A60(&StringLiteral_26170/*"weapon_level_"*/);
    sub_2213A60(&StringLiteral_712/*"(Clone)"*/);
    sub_2213A60(&StringLiteral_15466/*"USFGOAttachToParentEvent"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_1130/*"/Actor/chr"*/);
    sub_2213A60(&StringLiteral_15465/*"USFGOAnimationCameraEvent"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    sub_2213A60(&StringLiteral_15468/*"USFGOPlayCutInEvent"*/);
    byte_59735C5 = 1;
  }
  *(_QWORD *)result = 0;
  memset(&v532, 0, sizeof(v532));
  v530 = 0;
  v531 = 0;
  v529 = 0;
  memset(&v528, 0, sizeof(v528));
  targetPosIndex = 0;
  memset(&v526, 0, sizeof(v526));
  v8 = sub_2213CCC(BattleSequenceManager___c__DisplayClass88_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass88_0___ctor((BattleSequenceManager___c__DisplayClass88_0_o *)v8, 0);
  if ( !v8 )
    goto LABEL_430;
  *(_QWORD *)(v8 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)this, v11, v12, v13, v14, v15, v16);
  seqObject = this->fields.seqObject;
  if ( !seqObject )
    goto LABEL_430;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v20 = BattleSequenceManager__searchTimeline(
          (BattleSequenceManager_o *)Component_object,
          (WellFired_USSequencer_o *)Component_object,
          (System_String_o *)StringLiteral_2233/*"Actor"*/,
          v18);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0) )
  {
    seqObject = this->fields.actor;
    if ( !seqObject )
      goto LABEL_430;
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0);
    if ( !v20 )
      goto LABEL_430;
    WellFired_USTimelineContainer__set_AffectedObject(v20, (UnityEngine_Transform_o *)seqObject, 0);
  }
  seqObject = this->fields.actor;
  if ( !seqObject )
    goto LABEL_430;
  v21 = UnityEngine_GameObject__GetComponent_object_(
          seqObject,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v8 + 24) = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 24), (int32_t)v21, v22, v23, v24, v25, v26, v27);
  if ( !Component_object )
    goto LABEL_430;
  ComponentsInChildren_object__58857296 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__58857296(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_3821750 *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v30 = BattleSequenceManager___c_TypeInfo;
  seq = (WellFired_USSequencer_o *)Component_object;
  v514 = (UnityEngine_Object_o **)(v8 + 24);
  if ( !*(&BattleSequenceManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    v31 = ComponentsInChildren_object__58857296;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo, v29);
    v30 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__58857296 = v31;
  }
  static_fields = v30->static_fields;
  _9__88_0 = (System_Func_object__bool__o *)static_fields->__9__88_0;
  if ( !_9__88_0 )
  {
    source = ComponentsInChildren_object__58857296;
    if ( !*(&v30->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v30, v29);
      static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__88_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__88_0, v34, Method_BattleSequenceManager___c__setup_b__88_0__, 0);
    v35 = BattleSequenceManager___c_TypeInfo->static_fields;
    v35->__9__88_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__88_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35->__9__88_0, (int32_t)_9__88_0, v36, v37, v38, v39, v40, v41);
    ComponentsInChildren_object__58857296 = source;
  }
  v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         ComponentsInChildren_object__58857296,
                                                         (System_Func_TSource__bool__o *)_9__88_0,
                                                         (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v43 = (System_Action_object__o *)sub_2213CCC(System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
  System_Action_object____ctor(
    v43,
    (Il2CppObject *)v8,
    Method_BattleSequenceManager___c__DisplayClass88_0__setup_b__1__,
    0);
  BasicHelper__ForEach_object_(
    v42,
    (System_Action_T__o *)v43,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v46 = BattleSequenceManager__searchTimeline(
          v44,
          (WellFired_USSequencer_o *)Component_object,
          (System_String_o *)StringLiteral_6680/*"FGOSequenceManager"*/,
          v45);
  v47 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v48 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  sourcea = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v48;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0, 0) )
  {
    sequenceManager = (Il2CppObject *)this->fields.sequenceManager;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              sequenceManager,
                                              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_430;
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0);
    if ( !v46 )
      goto LABEL_430;
    WellFired_USTimelineContainer__set_AffectedObject(v46, (UnityEngine_Transform_o *)seqObject, 0);
    createdObjects = (System_Collections_Generic_List_object__o *)this->fields.createdObjects;
    seqObject = (UnityEngine_GameObject_o *)WellFired_USTimelineContainer__get_AffectedObject(v46, 0);
    if ( !seqObject )
      goto LABEL_430;
    seqObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0);
    if ( !createdObjects )
      goto LABEL_430;
    items = createdObjects->fields._items;
    v60 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++createdObjects->fields._version;
    if ( !items )
      goto LABEL_430;
    size = createdObjects->fields._size;
    v62 = (UnityEngine_Object_o *)seqObject;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        createdObjects,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &items->obj.klass + size;
      createdObjects->fields._size = size + 1;
      v63[4] = (Il2CppClass *)v62;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v63 + 4), (int32_t)v62, v53, v54, v55, v56, v57, v58);
    }
    seqObject = (UnityEngine_GameObject_o *)WellFired_USTimelineContainer__get_AffectedObject(v46, 0);
    if ( !seqObject )
      goto LABEL_430;
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)seqObject,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_430;
    actorCamera = this->fields.actorCamera;
    v71 = (UnityEngine_Object_o *)seqObject;
    seqObject[1].monitor = actorCamera;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&seqObject[1].monitor,
      (int32_t)actorCamera,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
    effectCamera = this->fields.effectCamera;
    v71[1].fields.m_CachedPtr = (intptr_t)effectCamera;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v71[1].fields, (int32_t)effectCamera, v73, v74, v75, v76, v77, v78);
    cutInCamera = this->fields.cutInCamera;
    v71[2].klass = (UnityEngine_Object_c *)cutInCamera;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v71[2], (int32_t)cutInCamera, v80, v81, v82, v83, v84, v85);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_430;
    fadeObject = performance->fields.fadeObject;
    v71[4].klass = (UnityEngine_Object_c *)fadeObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v71[4], (int32_t)fadeObject, v86, v87, v88, v89, v90, v91);
    CutInPrefab = (Il2CppObject *)this->fields.CutInPrefab;
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    v95 = (System_Collections_Generic_List_object__o *)sourcea;
    v96 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v96->zeroVector.fields.x;
    y = v96->zeroVector.fields.y;
    z = v96->zeroVector.fields.z;
    if ( !byte_5969AE6 )
    {
      sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
      byte_5969AE6 = 1;
    }
    v535.fields.x = x;
    v535.fields.y = y;
    v535.fields.z = z;
    v100 = UnityEngine_Object__Instantiate_object__59717424(
             CutInPrefab,
             v535,
             UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
             (const MethodInfo_38F3730 *)Method_UnityEngine_Object_Instantiate_GameObject____91801600);
    v71[3].klass = (UnityEngine_Object_c *)v100;
    v101 = (MissionNaviTransitionBoardItem_o *)&v71[3];
    sub_2213A04(v101, (int32_t)v100, v102, v103, v104, v105, v106, v107);
    seqObject = (UnityEngine_GameObject_o *)v101->klass;
    if ( !v101->klass )
      goto LABEL_430;
    UnityEngine_GameObject__SetActive(seqObject, 0, 0);
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo(this, v108);
      BattleSequenceManager__SetShaderNoblePhantasmMode(this, 1, v109);
    }
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                              (UnityEngine_Component_o *)v46,
                                              1,
                                              (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_430;
    klass_low = LODWORD(seqObject[1].klass);
    v111 = (System_String_o *)seqObject;
    if ( (int)klass_low >= 1 )
    {
      v112 = 0;
      v113 = 0;
      newValue = (System_String_o *)seqObject;
      while ( 1 )
      {
        if ( v112 >= klass_low )
LABEL_434:
          sub_2213CE4(seqObject);
        seqObject = (UnityEngine_GameObject_o *)*((_QWORD *)&v111[1].monitor + v112);
        if ( !seqObject )
          goto LABEL_430;
        seqObject = (UnityEngine_GameObject_o *)WellFired_USTimelineEvent__get_Events(
                                                  (WellFired_USTimelineEvent_o *)seqObject,
                                                  0);
        if ( !seqObject )
          goto LABEL_430;
        klass = (UnityEngine_Object_c *)seqObject[1].klass;
        v46 = (WellFired_USTimelineContainer_o *)seqObject;
        if ( (int)klass >= 1 )
          break;
LABEL_104:
        v111 = newValue;
        ++v112;
        klass_low = LODWORD(newValue[1].klass);
        if ( (int)v112 >= (int)klass_low )
          goto LABEL_105;
      }
      v115 = 0;
      while ( 1 )
      {
        if ( v115 >= (unsigned int)klass )
          goto LABEL_434;
        v116 = *((_QWORD *)&v46->fields.affectedObject + v115);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v116, 0, 0);
        if ( ((unsigned __int8)seqObject & 1) == 0 )
        {
          if ( !v116 )
            goto LABEL_430;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v116, 0);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_15465/*"USFGOAnimationCameraEvent"*/, 0) )
          {
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v118);
            if ( UnityEngine_Object__op_Equality(v113, 0, 0) )
            {
              treasureDeviceId = this->fields.treasureDeviceId;
              limitCount = this->fields.limitCount;
              if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v119);
              Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                                   treasureDeviceId,
                                                                   limitCount,
                                                                   (System_String_o *)StringLiteral_17486/*"animCamLoc"*/,
                                                                   unitIndex,
                                                                   0);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v128);
              seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                        Manager__LoadNoblePhantasmEffect,
                                                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v136 = (System_Collections_Generic_List_object__o *)this->fields.createdObjects;
              if ( !v136 )
                goto LABEL_430;
              v137 = v136->fields._items;
              v138 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v136->fields._version;
              if ( !v137 )
                goto LABEL_430;
              v139 = v136->fields._size;
              v113 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v139 >= LODWORD(v137->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v136,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
              }
              else
              {
                v140 = &v137->obj.klass + v139;
                v136->fields._size = v139 + 1;
                v140[4] = (Il2CppClass *)v113;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v140 + 4),
                  (int32_t)v113,
                  v130,
                  v131,
                  v132,
                  v133,
                  v134,
                  v135);
              }
            }
            v155 = WellFired_USFGOAnimationCameraEvent_TypeInfo;
            naturalAligment = WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v116 + 304LL) < (unsigned int)naturalAligment
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v116 + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
              goto LABEL_435;
            }
            *(_QWORD *)(v116 + 56) = v113;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v116 + 56),
              (int32_t)v113,
              v120,
              v121,
              v122,
              v123,
              v124,
              v125);
            v189 = this->fields.actorCamera;
            *(_QWORD *)(v116 + 64) = v189;
            v190 = v116 + 64;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)v190, (int32_t)v189, v191, v192, v193, v194, v195, v196);
            *(_BYTE *)(v190 + 28) = 0;
            if ( !v113 )
              goto LABEL_430;
            seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)v113,
                                                      0);
            if ( !this->fields.actor )
              goto LABEL_430;
            v197 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.actor, 0);
            if ( !seqObject )
              goto LABEL_430;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)seqObject, 0);
            if ( !v197 )
              goto LABEL_430;
            UnityEngine_Transform__set_position(v197, position, 0);
            goto LABEL_100;
          }
          v141 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v116, 0);
          seqObject = (UnityEngine_GameObject_o *)System_String__op_Equality(
                                                    v141,
                                                    (System_String_o *)StringLiteral_15468/*"USFGOPlayCutInEvent"*/,
                                                    0);
          if ( ((unsigned __int8)seqObject & 1) != 0 )
          {
            if ( !v95 )
              goto LABEL_430;
            v148 = WellFired_USFGOPlayCutInEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v116 + 304LL) >= (unsigned int)v148 )
              v10 = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v116 + 200LL) + 8 * v148 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                  ? (Il2CppObject *)v116
                  : 0LL;
            else
              v10 = 0;
            v184 = v95->fields._items;
            v185 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
            ++v95->fields._version;
            if ( !v184 )
              goto LABEL_430;
            v186 = v95->fields._size;
            if ( (unsigned int)v186 >= LODWORD(v184->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v95,
                v10,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
              goto LABEL_101;
            }
            v187 = &v184->obj.klass + v186;
            v95->fields._size = v186 + 1;
            v187[4] = (Il2CppClass *)v10;
            v159 = (MissionNaviTransitionBoardItem_o *)(v187 + 4);
            goto LABEL_91;
          }
          v149 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v116, 0);
          if ( System_String__op_Equality(v149, (System_String_o *)StringLiteral_15469/*"USFGOSetCameraEvent"*/, 0) )
          {
            v155 = WellFired_USFGOSetCameraEvent_TypeInfo;
            v156 = WellFired_USFGOSetCameraEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v116 + 304LL) < (unsigned int)v156
              || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v116 + 200LL) + 8 * v156 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
            {
              goto LABEL_435;
            }
            v157 = this->fields.actorCamera;
            *(_QWORD *)(v116 + 56) = v157;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v116 + 56),
              (int32_t)v157,
              v120,
              v150,
              v151,
              v152,
              v153,
              v154);
            seqObject = (UnityEngine_GameObject_o *)this->fields.actorCamera;
            if ( !seqObject )
              goto LABEL_430;
            seqObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)seqObject,
                                                      0);
            if ( !seqObject )
              goto LABEL_430;
            parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0);
            LODWORD(v10) = (_DWORD)parent;
            *(_QWORD *)(v116 + 64) = parent;
            v159 = (MissionNaviTransitionBoardItem_o *)(v116 + 64);
LABEL_91:
            sub_2213A04(v159, (int32_t)v10, v142, v143, v144, v145, v146, v147);
            goto LABEL_101;
          }
          v160 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v116, 0);
          seqObject = (UnityEngine_GameObject_o *)System_String__op_Equality(
                                                    v160,
                                                    (System_String_o *)StringLiteral_15467/*"USFGOChangeBgEvent"*/,
                                                    0);
          if ( ((unsigned __int8)seqObject & 1) != 0 )
          {
            v155 = WellFired_USFGOChangeBgEvent_TypeInfo;
            v161 = WellFired_USFGOChangeBgEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v116 + 304LL) < (unsigned int)v161
              || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v116 + 200LL) + 8 * v161 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
            {
LABEL_435:
              sub_221405C(v116, v155, v120);
LABEL_436:
              sub_221405C(v273, v276, v275);
LABEL_437:
              sub_221405C(v46, v457, v456);
LABEL_438:
              sub_2213CDC(v453, v454);
            }
            v162 = (System_String_o **)(v116 + 64);
            if ( System_String__op_Equality(*(System_String_o **)(v116 + 64), (System_String_o *)StringLiteral_1198/*"0"*/, 0)
              || (seqObject = (UnityEngine_GameObject_o *)System_String__op_Equality(
                                                            *v162,
                                                            (System_String_o *)StringLiteral_1/*""*/,
                                                            0),
                  ((unsigned __int8)seqObject & 1) != 0) )
            {
              seqObject = (UnityEngine_GameObject_o *)this->fields.performance;
              if ( !seqObject )
                goto LABEL_430;
              result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0);
              v163 = System_Int32__ToString((int32_t)&result[1], 0);
              *v162 = v163;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v116 + 64),
                (int32_t)v163,
                v164,
                v165,
                v166,
                v167,
                v168,
                v169);
              seqObject = (UnityEngine_GameObject_o *)this->fields.performance;
              if ( !seqObject )
                goto LABEL_430;
              result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0);
              v170 = System_Int32__ToString((int32_t)&result[1], 0);
              *(_QWORD *)(v116 + 72) = v170;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v116 + 72),
                (int32_t)v170,
                v171,
                v172,
                v173,
                v174,
                v175,
                v176);
              changeFieldAfter = this->fields.changeFieldAfter;
              *(_QWORD *)(v116 + 136) = changeFieldAfter;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v116 + 136),
                (int32_t)changeFieldAfter,
                v178,
                v179,
                v180,
                v181,
                v182,
                v183);
            }
LABEL_100:
            v95 = (System_Collections_Generic_List_object__o *)sourcea;
          }
        }
LABEL_101:
        LODWORD(klass) = v46->fields.m_CancellationTokenSource;
        if ( (__int64)++v115 >= (int)klass )
          goto LABEL_104;
      }
    }
  }
LABEL_105:
  v198 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v198,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v198 )
    goto LABEL_430;
  v205 = v198->fields._items;
  v206 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v198->fields._version;
  if ( !v205 )
    goto LABEL_430;
  v207 = v198->fields._size;
  if ( (unsigned int)v207 >= LODWORD(v205->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v198,
      (Il2CppObject *)v20,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
  }
  else
  {
    v208 = &v205->obj.klass + v207;
    v198->fields._size = v207 + 1;
    v208[4] = (Il2CppClass *)v20;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v208 + 4), (int32_t)v20, v199, v200, v201, v202, v203, v204);
  }
  seqObject = (UnityEngine_GameObject_o *)BattleSequenceManager__searchTimeline(
                                            v209,
                                            seq,
                                            (System_String_o *)StringLiteral_4119/*"Cameras/BattleCamera"*/,
                                            v210);
  v217 = v198->fields._items;
  v218 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v198->fields._version;
  if ( !v217 )
    goto LABEL_430;
  v219 = v198->fields._size;
  v220 = (UnityEngine_Object_o *)seqObject;
  if ( (unsigned int)v219 >= LODWORD(v217->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v198,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
  }
  else
  {
    v221 = &v217->obj.klass + v219;
    v198->fields._size = v219 + 1;
    v221[4] = (Il2CppClass *)v220;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v221 + 4), (int32_t)v220, v211, v212, v213, v214, v215, v216);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v525,
    v198,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v532 = v525;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v532,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v532.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v222);
    v224 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v224 )
    {
      if ( !current )
        sub_2213CDC(v224, v225);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v228 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_2213CDC(0, v227);
      v229 = *((unsigned int *)ComponentsInChildren_object + 6);
      if ( (int)v229 >= 1 )
      {
        v230 = 0;
        do
        {
          if ( v230 >= v229 )
            sub_2213CE4(ComponentsInChildren_object);
          v231 = (WellFired_USTimelineEvent_o *)v228[v230 + 4];
          if ( !v231 )
            sub_2213CDC(0, v227);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v231, 0);
          v232 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_2213CDC(0, v227);
          v233 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v233 >= 1 )
          {
            for ( i = 0; (__int64)i < (int)v233; ++i )
            {
              if ( i >= (unsigned int)v233 )
                sub_2213CE4(ComponentsInChildren_object);
              v46 = (WellFired_USTimelineContainer_o *)v232[i + 4];
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v227);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v46, 0, 0);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v46 )
                  sub_2213CDC(ComponentsInChildren_object, v227);
                v235 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v46, 0);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v235,
                                                        (System_String_o *)StringLiteral_15466/*"USFGOAttachToParentEvent"*/,
                                                        0);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v237 = WellFired_USFGOAttachToParentEvent_TypeInfo->_2.naturalAligment;
                  if ( v46->klass->_2.naturalAligment < (unsigned int)v237
                    || (WellFired_USFGOAttachToParentEvent_c *)v46->klass->_2.typeHierarchy[v237 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_221405C(v46, WellFired_USFGOAttachToParentEvent_TypeInfo, v236);
LABEL_428:
                    sub_2213CDC(v238, v239);
                  }
                  v238 = System_String__op_Equality(
                           (System_String_o *)v46[1].monitor,
                           (System_String_o *)StringLiteral_3233/*"BattleCamera"*/,
                           0);
                  if ( v238 )
                  {
                    v246 = (UnityEngine_Component_o *)this->fields.actorCamera;
                    if ( !v246 )
                      sub_2213CDC(0, v239);
                    transform = UnityEngine_Component__get_transform(v246, 0);
                    v46->fields.timelines = (struct WellFired_USTimelineBase_array *)transform;
                    v46 = (WellFired_USTimelineContainer_o *)((char *)v46 + 64);
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)v46,
                      (int32_t)transform,
                      v248,
                      v249,
                      v250,
                      v251,
                      v252,
                      v253);
                  }
                  else
                  {
                    if ( !v47 )
                      goto LABEL_428;
                    v254 = v47->fields._items;
                    v255 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v47->fields._version;
                    if ( !v254 )
                      goto LABEL_428;
                    v256 = v47->fields._size;
                    if ( (unsigned int)v256 >= LODWORD(v254->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v47,
                        (Il2CppObject *)v46,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v255[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v257 = &v254->obj.klass + v256;
                      v47->fields._size = v256 + 1;
                      v257[4] = (Il2CppClass *)v46;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v257 + 4),
                        (int32_t)v46,
                        v240,
                        v241,
                        v242,
                        v243,
                        v244,
                        v245);
                    }
                  }
                }
              }
              LODWORD(v233) = *((_DWORD *)v232 + 6);
            }
          }
          v229 = *((unsigned int *)v228 + 6);
          ++v230;
        }
        while ( (int)v230 < (int)v229 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v532,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0);
  if ( !seqObject )
LABEL_430:
    sub_2213CDC(seqObject, v10);
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0);
  v531 = (BattleSequenceManager_o *)Enumerator;
  v525.fields._list = 0;
  *(_QWORD *)&v525.fields._index = &v531;
  v525.fields._current = (Il2CppObject *)&v530;
  if ( !Enumerator )
LABEL_472:
    sub_2213CDC(Enumerator, v259);
  v260 = Enumerator;
  v261 = 0;
  while ( 1 )
  {
    v262 = v260->klass;
    v263 = *(unsigned __int16 *)&v260->klass->_2.rank;
    if ( *(_WORD *)&v260->klass->_2.rank )
    {
      p_offset = &v262->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v263;
        p_offset += 4;
        if ( !v263 )
          goto LABEL_154;
      }
      v265 = (__int64)&v262->vtable[*p_offset];
    }
    else
    {
LABEL_154:
      v265 = sub_224BC3C(v260, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v266 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v265)(v260, *(_QWORD *)(v265 + 8));
    if ( (v266 & 1) == 0 )
      break;
    v268 = v531;
    if ( !v531 )
      sub_2213CDC(v266, v267);
    v269 = v531->klass;
    v270 = *(unsigned __int16 *)&v531->klass->_2.rank;
    if ( *(_WORD *)&v531->klass->_2.rank )
    {
      v271 = (System_Collections_IEnumerator_c **)&v269->_1.interfaceOffsets->offset;
      while ( *(v271 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v270;
        v271 += 2;
        if ( !v270 )
          goto LABEL_162;
      }
      v272 = (__int64)(&v269->vtable._1_Finalize + *(_DWORD *)v271);
    }
    else
    {
LABEL_162:
      v272 = sub_224BC3C(v531, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v273 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(BattleSequenceManager_o *, _QWORD))v272)(
                                        v268,
                                        *(_QWORD *)(v272 + 8));
    if ( !v273 )
      goto LABEL_440;
    v276 = UnityEngine_Transform_TypeInfo;
    v277 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v273->klass->_2.naturalAligment < (unsigned int)v277
      || (UnityEngine_Transform_c *)v273->klass->_2.typeHierarchy[v277 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_436;
    }
    gameObject = UnityEngine_Component__get_gameObject(v273, 0);
    if ( !gameObject )
      sub_2213CDC(0, v279);
    v280 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v282 = v280;
    if ( !v280 )
      sub_2213CDC(0, v281);
    monitor = (System_String_o *)v280[2].monitor;
    if ( !monitor )
      sub_2213CDC(0, v281);
    Enumerator = (System_Collections_IEnumerator_o *)System_String__StartsWith(
                                                       monitor,
                                                       (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/,
                                                       0);
    if ( ((unsigned __int8)Enumerator & 1) == 0 || !v282[2].monitor )
      goto LABEL_174;
    v284 = (System_String_o *)v282[2].monitor;
    if ( !v284 )
      sub_2213CDC(0, v259);
    Enumerator = (System_Collections_IEnumerator_o *)System_String__StartsWith(
                                                       v284,
                                                       (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/,
                                                       0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      v285 = (System_String_o *)v282[2].monitor;
      if ( !v285 )
        sub_2213CDC(0, v259);
      v286 = System_String__Substring_75702848(v285, v285->fields._stringLength - 1, 1, 0);
      result[0] = 1;
      Enumerator = (System_Collections_IEnumerator_o *)System_Int32__TryParse(v286, result, 0);
      v260 = (System_Collections_IEnumerator_o *)v531;
      v261 += (unsigned __int8)Enumerator & 1;
      if ( !v531 )
        goto LABEL_472;
    }
    else
    {
LABEL_174:
      v260 = (System_Collections_IEnumerator_o *)v531;
      if ( !v531 )
        goto LABEL_472;
    }
  }
  v287 = (Il2CppClass *)sub_2213BB4(**(_QWORD **)&v525.fields._index, System_IDisposable_TypeInfo);
  v525.fields._current->klass = v287;
  if ( v287 )
  {
    image = v287->_1.image;
    v289 = v287;
    v290 = *((unsigned __int16 *)v287->_1.image + 151);
    if ( *((_WORD *)v287->_1.image + 151) )
    {
      v291 = (int *)(image[22] + 8LL);
      while ( *((System_IDisposable_c **)v291 - 1) != System_IDisposable_TypeInfo )
      {
        --v290;
        v291 += 4;
        if ( !v290 )
          goto LABEL_184;
      }
      v292 = (__int64)&image[2 * *v291 + 39];
    }
    else
    {
LABEL_184:
      v292 = sub_224BC3C(v287, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(Il2CppClass *, _QWORD))v292)(v289, *(_QWORD *)(v292 + 8));
  }
  seqObject = (UnityEngine_GameObject_o *)v525.fields._list;
  if ( v525.fields._list )
LABEL_468:
    sub_2213CD4(seqObject);
  item = v261;
  seqObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0);
  if ( !seqObject )
    goto LABEL_430;
  EventCount = (BattleSequenceManager_o *)UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0);
  v531 = EventCount;
  v525.fields._list = 0;
  *(_QWORD *)&v525.fields._index = &v531;
  v525.fields._current = (Il2CppObject *)&v530;
  if ( !EventCount )
    goto LABEL_446;
  v295 = EventCount;
  seqa = 0;
LABEL_191:
  v296 = v295->klass;
  v297 = *(unsigned __int16 *)&v295->klass->_2.rank;
  if ( *(_WORD *)&v295->klass->_2.rank )
  {
    v298 = &v296->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v298 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v297;
      v298 += 4;
      if ( !v297 )
        goto LABEL_195;
    }
    v299 = (__int64)&v296->vtable + 16 * *v298;
  }
  else
  {
LABEL_195:
    v299 = sub_224BC3C(v295, System_Collections_IEnumerator_TypeInfo, 0);
  }
  v300 = (*(__int64 (__fastcall **)(BattleSequenceManager_o *, _QWORD))v299)(v295, *(_QWORD *)(v299 + 8));
  if ( (v300 & 1) != 0 )
  {
    v302 = v531;
    if ( !v531 )
      sub_2213CDC(v300, v301);
    v303 = v531->klass;
    v304 = *(unsigned __int16 *)&v531->klass->_2.rank;
    if ( *(_WORD *)&v531->klass->_2.rank )
    {
      v305 = (System_Collections_IEnumerator_c **)&v303->_1.interfaceOffsets->offset;
      while ( *(v305 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v304;
        v305 += 2;
        if ( !v304 )
          goto LABEL_203;
      }
      v306 = (__int64)(&v303->vtable._1_Finalize + *(_DWORD *)v305);
    }
    else
    {
LABEL_203:
      v306 = sub_224BC3C(v531, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v307 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(BattleSequenceManager_o *, _QWORD))v306)(
                                        v302,
                                        *(_QWORD *)(v306 + 8));
    if ( !v307 )
      sub_2213CDC(0, v308);
    v310 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v307->klass->_2.naturalAligment < (unsigned int)v310
      || (UnityEngine_Transform_c *)v307->klass->_2.typeHierarchy[v310 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_221405C(v307, UnityEngine_Transform_TypeInfo, v309);
LABEL_440:
      sub_2213CDC(v273, v274);
    }
    v311 = UnityEngine_Component__get_gameObject(v307, 0);
    if ( !v311 )
      sub_2213CDC(0, v312);
    v313 = UnityEngine_GameObject__GetComponent_object_(
             v311,
             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v315 = (WellFired_USTimelineContainer_o *)v313;
    if ( !v313 )
      sub_2213CDC(0, v314);
    v316 = (System_String_o *)v313[2].monitor;
    if ( !v316 )
      sub_2213CDC(0, v314);
    v318 = System_String__StartsWith(v316, (System_String_o *)StringLiteral_1136/*"/AllEffects/"*/, 0);
    if ( v318 )
    {
      affectedObjectPath = v315->fields.affectedObjectPath;
      if ( !affectedObjectPath )
        sub_2213CDC(0, v317);
      v320 = System_String__Substring(affectedObjectPath, 12, 0);
    }
    else
    {
      v320 = 0;
    }
    v321 = v315->fields.affectedObjectPath;
    if ( !v321 )
      sub_2213CDC(0, v317);
    v323 = System_String__StartsWith(v321, (System_String_o *)StringLiteral_1157/*"/CutIns/"*/, 0);
    if ( v323 )
    {
      v324 = v315->fields.affectedObjectPath;
      if ( !v324 )
        sub_2213CDC(0, v322);
      v320 = System_String__Substring(v324, 8, 0);
    }
    v325 = v315->fields.affectedObjectPath;
    if ( !v325 )
      sub_2213CDC(0, v322);
    if ( System_String__StartsWith(v325, (System_String_o *)StringLiteral_1154/*"/BattleCamera"*/, 0) )
      goto LABEL_223;
    v327 = v315->fields.affectedObjectPath;
    if ( !v327 )
      sub_2213CDC(0, v326);
    if ( System_String__StartsWith(v327, (System_String_o *)StringLiteral_1156/*"/Cameras/BattleCamera"*/, 0) )
    {
LABEL_223:
      v328 = (UnityEngine_Component_o *)this->fields.actorCamera;
      if ( !v328 )
        sub_2213CDC(0, v326);
      v329 = UnityEngine_Component__get_transform(v328, 0);
      WellFired_USTimelineContainer__set_AffectedObject(v315, v329, 0);
      goto LABEL_225;
    }
    v330 = v315->fields.affectedObjectPath;
    if ( !v330 )
      sub_2213CDC(0, v326);
    if ( System_String__StartsWith(v330, (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/, 0) )
    {
      actor = this->fields.actor;
      if ( !actor )
        sub_2213CDC(0, v331);
      v334 = UnityEngine_GameObject__get_transform(actor, 0);
      v335 = v315->fields.affectedObjectPath;
      if ( !v335 )
        sub_2213CDC(0, v333);
      v336 = System_String__Replace_75703400(
               v335,
               (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_18755/*"chr(Clone)"*/,
               0);
      if ( !v334 )
        sub_2213CDC(v336, v336);
      v337 = UnityEngine_Transform__Find(v334, v336, 0);
      WellFired_USTimelineContainer__set_AffectedObject(v315, v337, 0);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v315, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v338);
      EventCount = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(AffectedObject, 0, 0);
      if ( ((unsigned __int8)EventCount & 1) == 0 )
        goto LABEL_225;
      v340 = v315->fields.affectedObjectPath;
      if ( !v340 )
        sub_2213CDC(0, v294);
      EventCount = (BattleSequenceManager_o *)System_String__StartsWith(v340, (System_String_o *)StringLiteral_1132/*"/Actor/chr/body_level_"*/, 0);
      v341 = &StringLiteral_18069/*"body_level_"*/;
      if ( ((unsigned __int8)EventCount & 1) == 0 )
      {
        v342 = v315->fields.affectedObjectPath;
        if ( !v342 )
          sub_2213CDC(0, v294);
        EventCount = (BattleSequenceManager_o *)System_String__StartsWith(
                                                  v342,
                                                  (System_String_o *)StringLiteral_1133/*"/Actor/chr/weapon_level_"*/,
                                                  0);
        v341 = &StringLiteral_26170/*"weapon_level_"*/;
        if ( ((unsigned __int8)EventCount & 1) == 0 )
          goto LABEL_225;
      }
      v343 = (System_String_o *)*v341;
      if ( !*v341 )
        goto LABEL_225;
      v344 = this->fields.actor;
      if ( !v344 )
        sub_2213CDC(0, v294);
      newValuea = (System_String_o *)StringLiteral_1/*""*/;
      v345 = UnityEngine_GameObject__get_transform(v344, 0);
      if ( !v345 )
        sub_2213CDC(0, v346);
      v348 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v345, (System_String_o *)StringLiteral_18755/*"chr(Clone)"*/, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v347);
      v349 = UnityEngine_Object__op_Inequality(v348, 0, 0);
      if ( !v349 )
        goto LABEL_287;
      if ( !v348 )
        sub_2213CDC(v349, v350);
      v351 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v348, 0);
      v353 = v351;
      v529 = v351;
      v524.fields._list = 0;
      *(_QWORD *)&v524.fields._index = &v529;
      v524.fields._current = (Il2CppObject *)&v530;
      if ( !v351 )
LABEL_268:
        sub_2213CDC(v351, v352);
      while ( 1 )
      {
        v354 = v353->klass;
        v355 = *(unsigned __int16 *)&v353->klass->_2.rank;
        if ( *(_WORD *)&v353->klass->_2.rank )
        {
          v356 = &v354->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)v356 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v355;
            v356 += 4;
            if ( !v355 )
              goto LABEL_251;
          }
          v357 = (__int64)&v354->vtable[*v356];
        }
        else
        {
LABEL_251:
          v357 = sub_224BC3C(v353, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v358 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v357)(v353, *(_QWORD *)(v357 + 8));
        if ( (v358 & 1) == 0 )
          goto LABEL_279;
        v360 = v529;
        if ( !v529 )
          sub_2213CDC(v358, v359);
        v361 = v529->klass;
        v362 = *(unsigned __int16 *)&v529->klass->_2.rank;
        if ( *(_WORD *)&v529->klass->_2.rank )
        {
          v363 = (System_Collections_IEnumerator_c **)&v361->_1.interfaceOffsets->offset;
          while ( *(v363 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v362;
            v363 += 2;
            if ( !v362 )
              goto LABEL_259;
          }
          v364 = (__int64)&v361->vtable[*(_DWORD *)v363 + 1];
        }
        else
        {
LABEL_259:
          v364 = sub_224BC3C(v529, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v365 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v364)(
                                            v360,
                                            *(_QWORD *)(v364 + 8));
        v368 = (UnityEngine_Object_o *)v365;
        if ( !v365 )
          sub_2213CDC(0, v366);
        v369 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
        if ( v365->klass->_2.naturalAligment < (unsigned int)v369
          || (UnityEngine_Transform_c *)v365->klass->_2.typeHierarchy[v369 - 1] != UnityEngine_Transform_TypeInfo )
        {
          break;
        }
        v370 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v365, 0);
        if ( !v370 )
          sub_2213CDC(0, v371);
        v372 = UnityEngine_Object__get_name(v370, 0);
        if ( !v372 )
          sub_2213CDC(0, v373);
        v351 = (System_Collections_IEnumerator_o *)System_String__StartsWith(v372, v343, 0);
        if ( ((unsigned __int8)v351 & 1) != 0 )
        {
          newValuea = UnityEngine_Object__get_name(v368, 0);
LABEL_279:
          v378 = (Il2CppClass *)sub_2213BB4(v529, System_IDisposable_TypeInfo);
          v379 = v378;
          v524.fields._current->klass = v378;
          if ( v378 )
          {
            v380 = v378->_1.image;
            v381 = *((unsigned __int16 *)v378->_1.image + 151);
            if ( *((_WORD *)v378->_1.image + 151) )
            {
              v382 = (int *)(v380[22] + 8LL);
              while ( *((System_IDisposable_c **)v382 - 1) != System_IDisposable_TypeInfo )
              {
                --v381;
                v382 += 4;
                if ( !v381 )
                  goto LABEL_284;
              }
              v383 = (__int64)&v380[2 * *v382 + 39];
            }
            else
            {
LABEL_284:
              v383 = sub_224BC3C(v378, System_IDisposable_TypeInfo, 0);
            }
            (*(void (__fastcall **)(Il2CppClass *, _QWORD))v383)(v379, *(_QWORD *)(v383 + 8));
          }
LABEL_287:
          v384 = v315->fields.affectedObjectPath;
          v385 = System_String__Concat_75651716((System_String_o *)StringLiteral_1131/*"/Actor/chr/"*/, v343, 0);
          if ( !v385 )
            sub_2213CDC(0, v386);
          if ( !v384 )
            sub_2213CDC(v385, v386);
          v387 = System_String__Substring(v384, v385->fields._stringLength, 0);
          if ( !v387 )
            sub_2213CDC(0, v388);
          v389 = System_String__Split(v387, 0x2Fu, 0, 0);
          if ( !v389 )
            sub_2213CDC(0, v390);
          if ( !LODWORD(v389->max_length) )
            sub_2213CE4(v389);
          v392 = System_String__Concat_75651716(v343, v389->m_Items[0], 0);
          v393 = this->fields.actor;
          if ( !v393 )
            sub_2213CDC(0, v391);
          v395 = UnityEngine_GameObject__get_transform(v393, 0);
          v396 = v315->fields.affectedObjectPath;
          if ( !v396 )
            sub_2213CDC(0, v394);
          v397 = System_String__Replace_75703400(
                   v396,
                   (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/,
                   (System_String_o *)StringLiteral_18755/*"chr(Clone)"*/,
                   0);
          if ( !v397 )
            sub_2213CDC(0, v398);
          v399 = System_String__Replace_75703400(v397, v392, newValuea, 0);
          if ( !v395 )
            sub_2213CDC(v399, v399);
          v400 = UnityEngine_Transform__Find(v395, v399, 0);
          WellFired_USTimelineContainer__set_AffectedObject(v315, v400, 0);
LABEL_225:
          v295 = v531;
          if ( !v531 )
LABEL_446:
            sub_2213CDC(EventCount, v294);
          goto LABEL_191;
        }
        v353 = v529;
        if ( !v529 )
          goto LABEL_268;
      }
      sub_221405C(v365, UnityEngine_Transform_TypeInfo, v367);
      v511 = v510;
      v513 = v512;
      sub_1FF99DC(&v524);
      if ( v511 != 1 )
      {
        sub_1FF99DC(&v525);
        sub_230112C();
      }
      v525.fields._list = *(struct System_Collections_Generic_List_T__o **)__cxa_begin_catch(v513);
      __cxa_end_catch();
      goto LABEL_378;
    }
    v374 = v315->fields.affectedObjectPath;
    if ( !v374 )
      sub_2213CDC(0, v331);
    EventCount = (BattleSequenceManager_o *)System_String__StartsWith(v374, (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/, 0);
    if ( ((unsigned __int8)EventCount & 1) != 0 )
      v320 = v315->fields.affectedObjectPath;
    if ( !v320 )
      goto LABEL_225;
    if ( !BattleSequenceManager__isValidObject(EventCount, v320, v375) )
      goto LABEL_339;
    if ( v318 )
    {
      v377 = System_String__IndexOf(v320, 0x2Fu, 0);
      if ( (v377 & 0x80000000) == 0 )
      {
        newValueb = System_String__Substring(v320, v377 + 1, 0);
        v320 = System_String__Substring_75702848(v320, 0, v377, 0);
        goto LABEL_299;
      }
      newValueb = 0;
      if ( (seqa & 1) != 0 )
      {
LABEL_299:
        v402 = this->fields.createdObjects;
        if ( !v402 )
          sub_2213CDC(0, v376);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v524,
          (System_Collections_Generic_List_object__o *)v402,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v528 = v524;
        v524.fields._list = 0;
        *(_QWORD *)&v524.fields._index = &v528;
        while ( 1 )
        {
          v403 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v528,
                   (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
          if ( !v403 )
            break;
          v401 = v528.fields._current;
          if ( !v528.fields._current )
            sub_2213CDC(v403, v404);
          v405 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v528.fields._current, 0);
          if ( !v405 )
            sub_2213CDC(0, v406);
          v407 = System_String__Replace_75703400(
                   v405,
                   (System_String_o *)StringLiteral_712/*"(Clone)"*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0);
          if ( System_String__op_Equality(v320, v407, 0) )
            goto LABEL_307;
        }
        v401 = 0;
LABEL_307:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          *(System_Collections_Generic_List_Enumerator_object__o **)&v524.fields._index,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        if ( v524.fields._list )
          sub_2213CD4(v524.fields._list);
        seqa = 1;
        goto LABEL_310;
      }
      v401 = 0;
      seqa = 0;
    }
    else
    {
      newValueb = 0;
      v401 = 0;
    }
LABEL_310:
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v376);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v401, 0, 0) )
    {
      v401 = (Il2CppObject *)BattleSequenceManager__SearchPrefab(
                               this,
                               this->fields.treasureDeviceId,
                               v320,
                               unitIndex,
                               v409);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v410);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v401, 0, 0) )
      {
        v417 = (System_Collections_Generic_List_object__o *)this->fields.createdObjects;
        if ( !v417
          || (v418 = v417->fields._items,
              v419 = Method_System_Collections_Generic_List_GameObject__Add__,
              ++v417->fields._version,
              !v418) )
        {
          sub_2213CDC(v417, v408);
        }
        v420 = v417->fields._size;
        if ( (unsigned int)v420 >= LODWORD(v418->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v417,
            v401,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v419[4] + 192LL) + 112LL));
        }
        else
        {
          v421 = &v418->obj.klass + v420;
          v417->fields._size = v420 + 1;
          v421[4] = (Il2CppClass *)v401;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v421 + 4), (int32_t)v401, v411, v412, v413, v414, v415, v416);
        }
        if ( !v401 )
          sub_2213CDC(v422, v423);
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v401, 0, 0);
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v408);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v401, 0, 0) )
      goto LABEL_339;
    IsNullOrEmpty = System_String__IsNullOrEmpty(newValueb, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !v401 )
        sub_2213CDC(IsNullOrEmpty, v425);
      v439 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v401, 0);
      if ( !v439 )
        sub_2213CDC(0, newValueb);
      v440 = UnityEngine_Transform__Find(v439, newValueb, 0);
      WellFired_USTimelineContainer__set_AffectedObject(v315, v440, 0);
      goto LABEL_339;
    }
    if ( !v401 )
      sub_2213CDC(IsNullOrEmpty, v425);
    v426 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v401, 0);
    WellFired_USTimelineContainer__set_AffectedObject(v315, v426, 0);
    if ( v323 )
    {
      v427 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v401, 0);
      if ( !v427 )
        sub_2213CDC(0, v428);
      localPosition = UnityEngine_Transform__get_localPosition(v427, 0);
      v430 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v401, 0);
      CutInRoot = this->fields.CutInRoot;
      if ( !CutInRoot )
        sub_2213CDC(0, v429);
      v432 = UnityEngine_GameObject__get_transform(CutInRoot, 0);
      if ( !v430 )
        sub_2213CDC(v432, v432);
      UnityEngine_Transform__set_parent(v430, v432, 0);
      v433 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v401, 0);
      if ( !v433 )
        sub_2213CDC(0, v434);
      UnityEngine_Transform__set_localPosition(v433, localPosition, 0);
      BattleSequenceManager__updateCutInEvents(v435, sourcea, v320, (UnityEngine_GameObject_o *)v401, v436);
      v438 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3236/*"BattleCutIn"*/, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v437);
    }
    else
    {
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v401, 0);
      if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3231/*"BattleBG"*/, 0) )
        goto LABEL_339;
      v438 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3229/*"Battle2D"*/, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v480);
    }
    NGUITools__SetLayer((UnityEngine_GameObject_o *)v401, v438, 0);
LABEL_339:
    v441 = v315->fields.affectedObjectPath;
    if ( !v441 )
      sub_2213CDC(0, v376);
    if ( System_String__StartsWith(v441, (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/, 0) )
    {
      v443 = v315->fields.affectedObjectPath;
      if ( !v443 )
        sub_2213CDC(0, v442);
      v444 = System_String__Substring_75702848(v443, v443->fields._stringLength - 1, 1, 0);
      targetPosIndex = 1;
      System_Int32__TryParse(v444, &targetPosIndex, 0);
      v446 = --targetPosIndex;
      if ( item >= 2 )
      {
        BattleSequenceManager__targetMultipleAttach(this, v315, v446, v445);
        BattleSequenceManager__SyncAttachedTargetPair(this, v315, targetPosIndex, v447);
      }
      else
      {
        BattleSequenceManager__targetSingleAttach(this, v315, v446, v445);
      }
    }
    EventCount = (BattleSequenceManager_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                              (UnityEngine_Component_o *)v315,
                                              1,
                                              (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    v448 = EventCount;
    if ( !EventCount )
      sub_2213CDC(0, v294);
    m_CancellationTokenSource_low = LODWORD(EventCount->fields.m_CancellationTokenSource);
    if ( (int)m_CancellationTokenSource_low < 1 )
      goto LABEL_225;
    v450 = 0;
    while ( 1 )
    {
      if ( v450 >= m_CancellationTokenSource_low )
        sub_2213CE4(EventCount);
      v451 = (WellFired_USTimelineEvent_o *)*((_QWORD *)&v448->fields.sequenceManager + v450);
      if ( !v451 )
        sub_2213CDC(EventCount, v294);
      for ( j = 0; ; ++j )
      {
        EventCount = (BattleSequenceManager_o *)WellFired_USTimelineEvent__get_EventCount(v451, 0);
        if ( j >= (int)EventCount )
          break;
        v453 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v451, j, 0);
        v46 = (WellFired_USTimelineContainer_o *)v453;
        if ( !v453 )
          goto LABEL_438;
        v455 = UnityEngine_Object__get_name(v453, 0);
        if ( System_String__op_Equality(v455, (System_String_o *)StringLiteral_15466/*"USFGOAttachToParentEvent"*/, 0) )
        {
          v457 = WellFired_USFGOAttachToParentEvent_TypeInfo;
          v458 = WellFired_USFGOAttachToParentEvent_TypeInfo->_2.naturalAligment;
          if ( v46->klass->_2.naturalAligment < (unsigned int)v458
            || (WellFired_USFGOAttachToParentEvent_c *)v46->klass->_2.typeHierarchy[v458 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
          {
            goto LABEL_437;
          }
          v459 = System_String__op_Equality((System_String_o *)v46[1].monitor, (System_String_o *)StringLiteral_3233/*"BattleCamera"*/, 0);
          if ( v459 )
          {
            v467 = (UnityEngine_Component_o *)this->fields.actorCamera;
            if ( !v467 )
              sub_2213CDC(0, v460);
            v468 = UnityEngine_Component__get_transform(v467, 0);
            v46->fields.timelines = (struct WellFired_USTimelineBase_array *)v468;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v46->fields.timelines,
              (int32_t)v468,
              v469,
              v470,
              v471,
              v472,
              v473,
              v474);
          }
          else
          {
            if ( !v47
              || (v475 = v47->fields._items,
                  v476 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__,
                  ++v47->fields._version,
                  !v475) )
            {
              sub_2213CDC(v459, v460);
            }
            v477 = v47->fields._size;
            if ( (unsigned int)v477 >= LODWORD(v475->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v47,
                (Il2CppObject *)v46,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v476[4] + 192LL) + 112LL));
            }
            else
            {
              v478 = &v475->obj.klass + v477;
              v47->fields._size = v477 + 1;
              v478[4] = (Il2CppClass *)v46;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v478 + 4),
                (int32_t)v46,
                v461,
                v462,
                v463,
                v464,
                v465,
                v466);
            }
          }
        }
      }
      m_CancellationTokenSource_low = LODWORD(v448->fields.m_CancellationTokenSource);
      if ( (int)++v450 >= (int)m_CancellationTokenSource_low )
        goto LABEL_225;
    }
  }
LABEL_378:
  v481 = (Il2CppClass *)sub_2213BB4(**(_QWORD **)&v525.fields._index, System_IDisposable_TypeInfo);
  v525.fields._current->klass = v481;
  if ( v481 )
  {
    v482 = v481->_1.image;
    v483 = v481;
    v484 = *((unsigned __int16 *)v481->_1.image + 151);
    if ( *((_WORD *)v481->_1.image + 151) )
    {
      v485 = (int *)(v482[22] + 8LL);
      while ( *((System_IDisposable_c **)v485 - 1) != System_IDisposable_TypeInfo )
      {
        --v484;
        v485 += 4;
        if ( !v484 )
          goto LABEL_383;
      }
      v486 = (__int64)&v482[2 * *v485 + 39];
    }
    else
    {
LABEL_383:
      v486 = sub_224BC3C(v481, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(Il2CppClass *, _QWORD))v486)(v483, *(_QWORD *)(v486 + 8));
  }
  seqObject = (UnityEngine_GameObject_o *)v525.fields._list;
  if ( v525.fields._list )
    goto LABEL_468;
  if ( !v47 )
    goto LABEL_430;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v525,
    v47,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  v526 = v525;
  v525.fields._list = 0;
  *(_QWORD *)&v525.fields._index = &v526;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v526,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__) )
  {
    if ( !v526.fields._current )
      sub_2213CDC(0, v487);
    WellFired_USFGOAttachToParentEvent__SetupTarget(
      (WellFired_USFGOAttachToParentEvent_o *)v526.fields._current,
      this->fields.performance,
      this->fields.actor,
      this->fields.createdObjects,
      0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v526,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  v489 = *v514;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v488);
  if ( UnityEngine_Object__op_Inequality(v489, 0, 0) )
  {
    seqObject = (UnityEngine_GameObject_o *)*v514;
    if ( !*v514 )
      goto LABEL_430;
    if ( LOBYTE(seqObject[24].klass) )
      goto LABEL_422;
    v490 = (UnityEngine_Object_c *)seqObject[23].klass;
    if ( !v490 )
      goto LABEL_430;
    if ( !HIDWORD(v490->vtable._2_GetHashCode.method)
      && !BattleActorControl__isNoVoice((BattleActorControl_o *)seqObject, 0) )
    {
      v491 = (UnityEngine_Object_o *)this->fields.performance;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v491, 0, 0);
      if ( ((unsigned __int8)seqObject & 1) != 0 )
      {
        v492 = this->fields.performance;
        if ( !v492 )
          goto LABEL_430;
        data = (UnityEngine_Object_o *)v492->fields.data;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        if ( UnityEngine_Object__op_Inequality(data, 0, 0) )
        {
          seqObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoiceMaster___);
            v496 = Voice_TypeInfo;
            this->fields.isAlreadyRegistDefaultVoice = 0;
            chrId = this->fields.chrId;
            if ( !*(&v496->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v496, v494);
            FileName = Voice__getFileName(111, 0);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   this,
                   (VoiceMaster_o *)MasterData_object,
                   chrId,
                   FileName,
                   v499) )
            {
              this->fields.isAlreadyRegistDefaultVoice = 1;
            }
            v501 = this->fields.chrId;
            if ( !*(&Voice_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v500);
            v502 = Voice__getFileName(111, 0);
            BattleSequenceManager__addServantVoicePlayed(this, (VoiceMaster_o *)MasterData_object, v501, v502, v503);
            if ( *v514 )
            {
              v504 = (*v514)[23].klass;
              if ( v504 )
              {
                v505 = (int)v504[2]._1.name;
                v506 = BalanceConfig_TypeInfo;
                if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
                  v506 = BalanceConfig_TypeInfo;
                }
                if ( v505 == v506->static_fields->TreasureDeviceIdMashu3 )
                {
                  v507 = this->fields.chrId;
                  if ( !*(&Voice_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v10);
                  v508 = Voice__getFileName(121, 0);
                  BattleSequenceManager__addServantVoicePlayed(
                    this,
                    (VoiceMaster_o *)MasterData_object,
                    v507,
                    v508,
                    v509);
                }
                goto LABEL_422;
              }
            }
          }
          goto LABEL_430;
        }
      }
    }
  }
LABEL_422:
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v10);
  System_GC__Collect(0);
}


void BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x21
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x8
  int size; // w23
  int32_t v9; // w22

  v6 = this;
  if ( (byte_59735DE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    this = (BattleSequenceManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_59735DE = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = v6->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      if ( size < 1 )
      {
LABEL_11:
        if ( tlcont )
        {
          this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tlcont, 0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            return;
          }
        }
      }
      else
      {
        v9 = 0;
        while ( 1 )
        {
          this = (BattleSequenceManager_o *)v6->fields.battleTargetList;
          if ( !this )
            goto LABEL_20;
          this = (BattleSequenceManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v9,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( !this )
            goto LABEL_20;
          if ( HIDWORD(this->fields.ReleaseSoundNames) == targetIndex )
            break;
          if ( size == ++v9 )
            goto LABEL_11;
        }
        this = (BattleSequenceManager_o *)v6->fields.battleTargetList;
        if ( this )
        {
          this = (BattleSequenceManager_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              v9,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( this )
          {
            this = (BattleSequenceManager_o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                (BattleSequenceManager_BattleTarget_o *)this,
                                                0);
            if ( this )
            {
              this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0);
              if ( tlcont )
              {
                WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)this, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_2213CDC(this, tlcont);
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

  if ( (byte_59735E2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    sub_2213A60(&StringLiteral_15111/*"Tmp_Target"*/);
    byte_59735E2 = 1;
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
                                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
      if ( battleTargetList )
      {
        battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                          (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                          0);
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
      sub_2213CDC(battleTargetList, tlcont);
    }
    v8 = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v8, (System_String_o *)StringLiteral_15111/*"Tmp_Target"*/, 0);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v19; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v20; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59735C9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__);
    this = (BattleSequenceManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
    byte_59735C9 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !evs )
    sub_2213CDC(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  v19 = 0;
  v20 = &v21;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_2213CDC(v8, v9);
    if ( System_String__op_Equality(
           *(System_String_o **)((char *)&v21.fields._current->klass + (unsigned __int64)&dword_40),
           cutInName,
           0) )
    {
      *(_QWORD *)((char *)&word_38 + (_QWORD)current) = obj;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)((char *)&word_38 + (_QWORD)current),
        (int32_t)obj,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v10;
}


void BattleSequenceManager_BattleTarget___ctor(BattleSequenceManager_BattleTarget_o *this, const MethodInfo *method)
{
  int v3; // w9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v3 = (unsigned __int8)byte_5969AE6;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
      sub_2213CDC(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0);
  }
  this->fields.targetActor = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetActor, 0, v2, v3, v4, v5, v6, v7);
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
    sub_2213CDC(targetActor, method);
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


// local variable allocation has failed, the output may be wrong!
void BattleSequenceManager_BattleTarget__setup(
        BattleSequenceManager_BattleTarget_o *this,
        BattleActorControl_o *bac,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleActorControl_o **p_targetActor; // x20

  this->fields.targetActor = bac;
  p_targetActor = &this->fields.targetActor;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetActor,
    (int32_t)bac,
    *(System_String_o **)&index,
    (System_String_o *)method,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleSequenceManager__WaitEndSequence_d__108_o *v8; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *wait_5__2; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19

  v8 = this;
  if ( (byte_597374A & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__108_o *)sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_597374A = 1;
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
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0);
    v8->fields._wait_5__2 = v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields._wait_5__2, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v8->fields._wait_5__2;
    v8->fields.__2__current = wait_5__2;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)wait_5__2, v2, v3, v4, v5, v6, v7);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return 1;
  }
  BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(_4__this, 0);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleSequenceManager__WaitEndSequence_d__108_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973744 & 1) == 0 )
  {
    sub_2213A60(&BattleSequenceManager___c_TypeInfo);
    byte_5973744 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleSequenceManager___c_TypeInfo->static_fields,
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

  firetime = 0.0;
  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_2213CDC(this, x1);
  return System_Single__CompareTo_77225624(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


int32_t BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__76_2(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOPlayAudioEvent_o *x1,
        WellFired_USFGOPlayAudioEvent_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  firetime = 0.0;
  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_2213CDC(this, x1);
  return System_Single__CompareTo_77225624(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_0(
        BattleSequenceManager___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_1(
        BattleSequenceManager___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_2(
        BattleSequenceManager___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___setup_b__88_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, x);
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
  if ( (byte_5973745 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass117_0_o *)sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_5973745 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass117_0_o *)v4->fields.targetList) == 0 )
    sub_2213CDC(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
  MissionNaviTransitionBoardItem_o *_4__this; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x25
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  int32_t npChargeStage; // w24
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  v4 = this;
  if ( (byte_5973746 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__);
    sub_2213A60(&StringLiteral_13586/*"StandardCutIn"*/);
    this = (BattleSequenceManager___c__DisplayClass75_0_o *)sub_2213A60(&ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    byte_5973746 = 1;
  }
  if ( !data
    || (_4__this = (MissionNaviTransitionBoardItem_o *)v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass75_0_o *)AssetData__GetObject_object__58532980(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13586/*"StandardCutIn"*/,
                                                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320),
        !_4__this)
    || (_4__this[2].klass = (MissionNaviTransitionBoardItem_c *)this,
        sub_2213A04(_4__this + 2, (int32_t)this, v6, v7, v8, v9, v10, v11),
        (this = (BattleSequenceManager___c__DisplayClass75_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  _9__1 = v4->fields.__9__1;
  npChargeStage = v4->fields.npChargeStage;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_2213CCC(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v20, v21, v22, v23, v24, v25);
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v12);
  ServantAssetLoadManager__LoadNoblePhantasm(
    gameObject,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  int32_t overwriteSvtVoiceId; // w8
  struct BattleSequenceManager_o *v29; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x22
  System_Action_o *v33; // x23
  struct BattleSequenceManager_o *v34; // x8
  struct BattleSequenceManager_o *v35; // x8
  _DWORD *v36; // x20
  int v37; // w8
  int v38; // w10
  __int64 v39; // x11
  struct BattleSequenceManager_o *v40; // x8
  int32_t v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5973747 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__);
    sub_2213A60(&BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
    sub_2213A60(&StringLiteral_9911/*"NoblePhantasm_"*/);
    byte_5973747 = 1;
  }
  v41 = 0;
  v5 = sub_2213CCC(BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 16) = obj;
  v14 = (__int64 *)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)obj, v15, v16, v17, v18, v19, v20);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  v27 = *v14;
  *((_QWORD *)_4__this + 9) = *v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)_4__this + 72), v27, v21, v22, v23, v24, v25, v26);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_26;
  _4__this = (void *)ServantAssetLoadManager__getVoiceId(
                       (ServantAssetLoadManager_o *)_4__this,
                       this->fields.chrId,
                       this->fields.limitCount,
                       0);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  v41 = (int)_4__this;
  if ( overwriteSvtVoiceId )
  {
    v29 = this->fields.__4__this;
    if ( !v29 )
      goto LABEL_26;
    v41 = v29->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v31 = System_Int32__ToString((int32_t)&v41, 0);
  v32 = System_String__Concat_75651716((System_String_o *)StringLiteral_9911/*"NoblePhantasm_"*/, v31, 0);
  v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__,
    0);
  if ( !Instance )
    goto LABEL_26;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v32, v33, 1, 0);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_26;
  _4__this = v34->fields.seqObject;
  if ( !_4__this )
    goto LABEL_26;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v35 = this->fields.__4__this;
  if ( !v35 )
    goto LABEL_26;
  v36 = _4__this;
  v35->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v36 )
    goto LABEL_26;
  v37 = v36[6];
  if ( v37 < 1 )
    return;
  v38 = 0;
  while ( 1 )
  {
    if ( v37 == v38 )
      sub_2213CE4(_4__this);
    v39 = *(_QWORD *)&v36[2 * v38 + 8];
    if ( !v39 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v39 + 64) && *(_BYTE *)(v39 + 69) )
      break;
    if ( (v37 & ~(v37 >> 31)) == ++v38 )
      return;
  }
  v40 = this->fields.__4__this;
  if ( !v40 )
LABEL_26:
    sub_2213CDC(_4__this, v7);
  v40->fields.isNoDamageMotionInDamageNoble = 1;
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
  int v6; // w8
  BattleSequenceManager___c__DisplayClass75_1_o *v7; // x21
  unsigned int v8; // w23
  int v9; // w24
  UnityEngine_Behaviour_o *v10; // x22
  struct BattleSequenceManager___c__DisplayClass75_0_o *v11; // x8
  BattleSequenceManager_o *v12; // x21
  System_Action_o *_9__3; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  v2 = this;
  if ( (byte_5973748 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
    sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973748 = 1;
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
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  v6 = (int)this->fields.CS___8__locals1;
  v7 = this;
  if ( v6 >= 1 )
  {
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_2213CE4(this);
      v10 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v7->fields.__9__4 + (int)v8);
      if ( !v10 )
        break;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, Il2CppClass **))v10->klass[1].rgctx_data)(
                                                                v10,
                                                                v10->klass[1]._2.typeHierarchy);
      if ( (v9 & (unsigned int)this & 1) != 0 )
      {
        m_CachedPtr = (System_String_o *)v10[2].fields.m_CachedPtr;
        v9 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v10, 0, 0);
      }
      v6 = (int)v7->fields.CS___8__locals1;
      if ( (int)++v8 >= v6 )
        goto LABEL_15;
    }
LABEL_20:
    sub_2213CDC(this, method);
  }
LABEL_15:
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v14, v15, v16, v17, v18, v19);
  }
  if ( !v12 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v12, m_CachedPtr, _9__3, 0);
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
  __int64 v11; // x1
  Il2CppObject *ComponentInChildren_object; // x22
  struct BattleSequenceManager___c__DisplayClass75_0_o *v13; // x8
  struct BattleSequenceManager_o *v14; // x21
  const MethodInfo_47A29F8 *v15; // x0
  struct BattleSequenceManager___c__DisplayClass75_0_o *v16; // x8
  struct BattleSequenceManager_o *v17; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v19; // x22
  UIStandFigureM_o *MeshLocal; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct BattleSequenceManager___c__DisplayClass75_0_o *v27; // x8
  struct BattleSequenceManager_o *v28; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass75_0_o *v30; // x8
  struct BattleSequenceManager_o *v31; // x9
  int32_t monitor; // w21
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int32_t monitor_high; // w9
  struct BattleSequenceManager___c__DisplayClass75_0_o *v36; // x8
  struct BattleSequenceManager_o *v37; // x10
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
  System_Action_o *_9__4; // x24
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct BattleSequenceManager___c__DisplayClass75_0_o *v64; // x8

  v2 = this;
  if ( (byte_5973749 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_2213A60(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__);
    byte_5973749 = 1;
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
                                                            (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
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
                                                            (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
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
                                 (const MethodInfo_38B711C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v7,
                                                            0,
                                                            0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v2->fields.CS___8__locals1;
    if ( !v13 )
      goto LABEL_73;
    if ( !v7 )
      goto LABEL_73;
    v14 = v13->fields.__4__this;
    if ( !v14 )
      goto LABEL_73;
    v15 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__;
    v14->fields.faceType = (int32_t)v7[1].fields.obj;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)SingletonMonoBehaviour_object___get_Instance(v15);
    v16 = v2->fields.CS___8__locals1;
    if ( !v16 )
      goto LABEL_73;
    v17 = v16->fields.__4__this;
    if ( !v17 )
      goto LABEL_73;
    performance = v17->fields.performance;
    if ( !performance )
      goto LABEL_73;
    v19 = (StandFigureManager_o *)this;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)performance->fields.root_field;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
    if ( !v19 )
      goto LABEL_73;
    MeshLocal = StandFigureManager__CreateMeshLocal(v19, (UnityEngine_GameObject_o *)this, 0);
    v14->fields.standFigure = MeshLocal;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v14->fields.standFigure,
      (int32_t)MeshLocal,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    v27 = v2->fields.CS___8__locals1;
    if ( !v27 )
      goto LABEL_73;
    v28 = v27->fields.__4__this;
    if ( !v28 )
      goto LABEL_73;
    standFigure = (UnityEngine_Object_o *)v28->fields.standFigure;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
    v30 = v2->fields.CS___8__locals1;
    if ( !v30 )
      goto LABEL_73;
    v31 = v30->fields.__4__this;
    if ( !v31 )
      goto LABEL_73;
    monitor = (int32_t)v7[1].monitor;
    battleActor = v30->fields.battleActor;
    v31->fields.loadStandFigureId = monitor;
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
      v36 = v2->fields.CS___8__locals1;
      v44->fields.loadStandFigureLimitCount = (int)this;
      if ( !v36 )
        goto LABEL_73;
    }
    else
    {
      v36 = v2->fields.CS___8__locals1;
      if ( !v36 )
        goto LABEL_73;
      v37 = v36->fields.__4__this;
      if ( !v37 )
        goto LABEL_73;
      v37->fields.loadStandFigureLimitCount = monitor_high;
    }
    v45 = v36->fields.__4__this;
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
    _9__4 = v2->fields.__9__4;
    loadStandFigureLimitCount = v52->fields.loadStandFigureLimitCount;
    faceType = v52->fields.faceType;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__,
        0);
      v2->fields.__9__4 = _9__4;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v58, v59, v60, v61, v62, v63);
    }
    if ( !v53 )
LABEL_73:
      sub_2213CDC(this, method);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UIStandFigureM__SetCharacter_51056312(
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
            0);
          return;
        }
      }
      goto LABEL_73;
    }
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
                                                              0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
  }
}


void BattleSequenceManager___c__DisplayClass75_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass75_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass75_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_2213CDC(this, method);
  BattleSequenceManager__LoadEndStandFigure(
    CS___8__locals1->fields.__4__this,
    this->fields.obj,
    CS___8__locals1->fields.onComplete,
    0);
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
    sub_2213CDC(this, 0);
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
  BattleSequenceManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  BattleSequenceManager__LoadEndStandFigure(_4__this, this->fields.obj, this->fields.onComplete, 0);
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
    sub_2213CDC(this, comp);
  SwitchActiveBaseConditionComponent__SwitchActive(comp, performance->fields.data, this->fields.bac, 0);
}


void BattleSequenceManager_onGameObjectLoadComplete___ctor(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2011D28;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2011D0C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_2011CC4;
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
  return sub_2213A14(this, &v6, callback, object);
}


void BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
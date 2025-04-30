void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4A50DE1 & 1) == 0 )
  {
    sub_1B863B8(&BattleSequenceManager_TypeInfo, v1);
    byte_4A50DE1 = 1;
  }
  static_fields = BattleSequenceManager_TypeInfo->static_fields;
  static_fields->defaultForceObi_16_9 = 1;
  static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void __fastcall BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_object__o *v35; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_Dictionary_object__int__o *v41; // x20
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_HashSet_T__o *v44; // x20
  int32_t v45; // w2
  const MethodInfo *v46; // x3

  if ( (byte_4A50DE0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo, v4);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_string___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_HashSet_string__TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Object___ctor__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_Action___ctor__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1B863B8(&System_Collections_Generic_List_Object__TypeInfo, v13);
    sub_1B863B8(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo, v14);
    sub_1B863B8(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    sub_1B863B8(&System_Collections_Generic_List_Action__TypeInfo, v16);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B863B8(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__, v18);
    sub_1B863B8(&StringLiteral_9218/*"N_{0}{1}"*/, v19);
    byte_4A50DE0 = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v20 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v20;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.ReleaseSoundNames, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v23;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.DelayInvokeMethodList, (int32_t)v23, v24, v25);
  v26 = StringLiteral_9218/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9218/*"N_{0}{1}"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.PosNodeFormatNP, v26, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v29;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.npEndDeleteObjects, (int32_t)v29, v30, v31);
  v32 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B86604(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
  System_Collections_Generic_Dictionary_object__Color____ctor(
    v32,
    (const MethodInfo_32BF164 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
  this->fields.rendererBaseAddColorsDict = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__o *)v32;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.rendererBaseAddColorsDict, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v35;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.battleTargetList, (int32_t)v35, v36, v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v38;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.createdObjects, (int32_t)v38, v39, v40);
  v41 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v41,
    (const MethodInfo_32C4FFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v41;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v41, v42, v43);
  v44 = (System_Collections_Generic_HashSet_T__o *)sub_1B86604(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v44,
    (const MethodInfo_34BDC34 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v44;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v44, v45, v46);
  this->fields.nowTargetAlpha = 1.0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3839A98 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A50DC0 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, actor);
    sub_1B863B8(&StringLiteral_24437/*"wait"*/, v5);
    byte_4A50DC0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v6 )
  {
    if ( !actor )
      sub_1B86614(v6, v7);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_44882684(actor, (System_String_o *)StringLiteral_24437/*"wait"*/, 0, 0LL);
    if ( !this->fields.DemoMode )
    {
      v8.fields.r = 0.0;
      v8.fields.g = 0.0;
      v8.fields.b = 0.0;
      v8.fields.a = 0.0;
      BattleActorControl__ChangeShadowColor(actor, v8, 0.3, 0LL);
    }
    v9.fields.r = 0.0;
    v9.fields.g = 0.0;
    v9.fields.b = 0.0;
    v9.fields.a = 1.0;
    BattleActorControl__SetMaterialColor(actor, v9, 0.0, 0LL);
  }
}


void __fastcall BattleSequenceManager__CacheExecutingTdInfo(
        BattleSequenceManager_o *this,
        ExecutingTdInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.executingTdInfoCache = info;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.executingTdInfoCache, (int32_t)info, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__CacheRendererBaseAddColor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattlePerformance_o *performance; // x0
  BattlePerformance_c *klass; // x8
  BattlePerformance_o *v11; // x19
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  BattleActorControl_o *v27; // x21
  BattleServantData_o *v28; // x0
  __int64 v29; // x1
  UnityEngine_SkinnedMeshRenderer_array *RendererArray; // x0
  __int64 v31; // x1
  UnityEngine_SkinnedMeshRenderer_array *v32; // x21
  __int64 v33; // x8
  unsigned __int64 v34; // x29
  Il2CppObject *v35; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  int v39; // s0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  System_Nullable_Color__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Nullable_Color__o v48; // [xsp+20h] [xbp-80h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A50DDE & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__, method);
    sub_1B863B8(&System_IDisposable_TypeInfo, v3);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, v4);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, v5);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_1B863B8(&Method_System_Nullable_Color__get_HasValue__, v7);
    sub_1B863B8(&Method_System_Nullable_Color__get_Value__, v8);
    byte_4A50DDE = 1;
  }
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
  performance = this->fields.performance;
  if ( !performance
    || (performance = (BattlePerformance_o *)BattlePerformance__EnumerateActorControls(performance, 0LL)) == 0LL )
  {
    sub_1B86614(performance, method);
  }
  klass = performance->klass;
  v11 = performance;
  v12 = *(unsigned __int16 *)(&performance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&performance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleActorControl__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_9;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v14 = sub_1BD6B4C(performance, System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(BattlePerformance_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  if ( !v16 )
    sub_1B86614(0LL, v15);
  while ( 1 )
  {
    v17 = *(_QWORD *)v16;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_16:
      v20 = sub_1BD6B4C(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
      break;
    v21 = *(_QWORD *)v16;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleActorControl__c **)v23 - 1) != System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_23;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_23:
      v24 = sub_1BD6B4C(v16, System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
    v27 = (BattleActorControl_o *)v25;
    if ( !v25 )
      sub_1B86614(0LL, v26);
    v28 = *(BattleServantData_o **)(v25 + 512);
    if ( !v28 )
      sub_1B86614(0LL, v26);
    if ( BattleServantData__TryGetDisplayTypeDetailEntity(v28, &entity, 0LL) )
    {
      if ( !entity )
        sub_1B86614(0LL, v29);
      NpcServantDisplayTypeDetailEntity__get_AddColor(&v47, entity, 0LL);
      v48 = v47;
      if ( v47.fields.hasValue )
      {
        RendererArray = BattleActorControl__GetRendererArray(v27, 1, 0LL);
        v32 = RendererArray;
        if ( !RendererArray )
          sub_1B86614(0LL, v31);
        v33 = *(_QWORD *)&RendererArray->max_length;
        if ( (int)v33 >= 1 )
        {
          v34 = 0LL;
          do
          {
            if ( v34 >= (unsigned int)v33 )
              sub_1B8661C(RendererArray, v31);
            v35 = (Il2CppObject *)v32->m_Items[v34];
            rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
            *(UnityEngine_Color_o *)&v39 = System_Nullable_Color___get_Value(
                                             &v48,
                                             (const MethodInfo_3719970 *)Method_System_Nullable_Color__get_Value__);
            if ( !rendererBaseAddColorsDict )
              sub_1B86614(v37, v38);
            System_Collections_Generic_Dictionary_object__Color___set_Item(
              rendererBaseAddColorsDict,
              v35,
              *(UnityEngine_Color_o *)&v39,
              (const MethodInfo_32BFB20 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
            LODWORD(v33) = v32->max_length;
            ++v34;
          }
          while ( (__int64)v34 < (int)v33 );
        }
      }
    }
  }
  v43 = *(_QWORD *)v16;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_41;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_41:
    v46 = sub_1BD6B4C(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v16, *(_QWORD *)(v46 + 8));
}


bool __fastcall BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_4A50DD6 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_string___, bgmName);
    byte_4A50DD6 = 1;
  }
  if ( System_String__Equals_61681208(bgmName, this->fields.BackupBgmName, 0LL) )
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
              (const MethodInfo_2F887E4 *)Method_System_Linq_Enumerable_Contains_string___);
  }
}


void __fastcall BattleSequenceManager__ClearExecutingTdInfoCache(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.executingTdInfoCache = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.executingTdInfoCache, 0, v2, v3);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure(
        BattleSequenceManager_o *this,
        WellFired_USFGOPlayCutInBase_o *baseCutInEvent,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  if ( !baseCutInEvent )
    sub_1B86614(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_44029600(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_44029600(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v21; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v28; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v32; // x24

  if ( (byte_4A50DA9 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, obj);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v8);
    sub_1B863B8(&Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__, v9);
    sub_1B863B8(&BattleSequenceManager___c__DisplayClass79_0_TypeInfo, v10);
    byte_4A50DA9 = 1;
  }
  v11 = sub_1B86604(BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass79_0___ctor((BattleSequenceManager___c__DisplayClass79_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = obj;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)obj, v16, v17);
  *(_QWORD *)(v11 + 32) = onComplete;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 32), (int32_t)onComplete, v18, v19);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_16;
  v21 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_16;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v21 )
    goto LABEL_16;
  MeshLocal = StandFigureManager__CreateMeshLocal(v21, (UnityEngine_GameObject_o *)Instance, 0LL);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.standFigure, (int32_t)MeshLocal, v24, v25);
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Component_o *)*p_standFigure;
    if ( *p_standFigure )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
      Instance = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureMName(
                                              this->fields.loadStandFigureId,
                                              this->fields.loadStandFigureLimitCount,
                                              0LL);
      if ( gameObject )
      {
        UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
        Instance = (UnityEngine_Component_o *)*p_standFigure;
        if ( *p_standFigure )
        {
          UIStandFigureRender__SetDepth((UIStandFigureRender_o *)Instance, 0.0, 0LL);
          v28 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v32 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v32,
            (Il2CppObject *)v11,
            Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v28 )
            return UIStandFigureM__SetCharacter_42091484(
                     v28,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v32,
                     1,
                     0LL);
        }
      }
    }
LABEL_16:
    sub_1B86614(Instance, v13);
  }
  return 0;
}


void __fastcall BattleSequenceManager__CrossFadeBgm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 performance; // x0
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  System_String_o *v24; // x21
  struct System_String_o **p_BackupBgmName; // x20
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  _BOOL4 v28; // w21
  struct System_String_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  _BOOL4 v32; // w22
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *v37; // x23
  System_String_o *BgmName; // x0
  const MethodInfo *v39; // x3
  BgmPlayArgsGroup_o *v40; // x19
  _BOOL8 v41; // x0
  __int64 v42; // x1
  Il2CppObject *current; // x20
  float v44; // s0
  int v45; // w28
  System_Nullable_float__o v46; // x21
  const MethodInfo_371CBA4 *v47; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Object_array *v51; // x20
  __int64 v52; // x0
  __int64 v53; // x1
  struct BattlePerformance_o *v54; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v56; // x8
  struct BattlePerformance_o *v57; // x8
  System_String_o *v58; // x19
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  BattleSequenceManager_c *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  Il2CppObject *v65; // x21
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  Il2CppObject *v73; // x21
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  Il2CppObject *v81; // x21
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  System_Collections_Hashtable_o *v86; // x0
  __int64 v87; // x0
  int v88; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v89; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_float__o v93; // 0:x0.8
  System_Nullable_float__o v94; // 0:x1.8
  System_Nullable_float__o v95; // 0:x2.8
  System_Nullable_long__o v96; // 0:x0.16

  if ( (byte_4A50DC1 & 1) == 0 )
  {
    sub_1B863B8(&BattleSequenceManager_TypeInfo, method);
    sub_1B863B8(&BgmManager_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__, v6);
    sub_1B863B8(&int_TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__, v8);
    sub_1B863B8(&Method_System_Nullable_long___ctor__, v9);
    sub_1B863B8(&Method_System_Nullable_float___ctor__, v10);
    sub_1B863B8(&object___TypeInfo, v11);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B863B8(&float_TypeInfo, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v14);
    sub_1B863B8(&SoundManager_TypeInfo, v15);
    sub_1B863B8(&StringLiteral_19437/*"from"*/, v16);
    sub_1B863B8(&StringLiteral_9685/*"OnChangeBgmVolume"*/, v17);
    sub_1B863B8(&StringLiteral_23770/*"time"*/, v18);
    sub_1B863B8(&StringLiteral_22117/*"onupdate"*/, v19);
    sub_1B863B8(&StringLiteral_23809/*"to"*/, v20);
    sub_1B863B8(&iTween_TypeInfo, v21);
    byte_4A50DC1 = 1;
  }
  changeBgm = 0LL;
  memset(&v91, 0, sizeof(v91));
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_90;
  FieldEnvData = BattlePerformance__get_FieldEnvData((BattlePerformance_o *)performance, 0LL);
  v24 = FieldEnvData ? BattleFieldEnvironmentData__get_CurBGMName(FieldEnvData, 0LL) : 0LL;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( BasicHelper__EqualExceptNullOrEmpty(v24, this->fields.BackupBgmName, 0LL) || this->fields.DemoMode )
  {
    v28 = 0;
  }
  else
  {
    *p_BackupBgmName = v24;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.BackupBgmName, (int32_t)v24, (int32_t)v26, v27);
    v28 = 1;
  }
  if ( BattleSequenceManager__TryGetAfterChangeBgm(this, &changeBgm, v26) )
  {
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v29 = BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
            changeBgm,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v29;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.BackupBgmName, (int32_t)v29, v30, v31);
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v32 = BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(changeBgm, 0LL);
    v28 = 1;
  }
  else
  {
    v32 = 0;
  }
  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
  {
    v34 = BattleActionData_AfterChangeField__GetPriorityBgmName(
            changeFieldAfter,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v34;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.BackupBgmName, (int32_t)v34, v35, v36);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v32 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0LL);
    v28 = 1;
  }
  v37 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1B86614(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0LL);
  if ( ((v32 | System_String__op_Inequality(v37, BgmName, 0LL)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    performance = sub_1B86460(object___TypeInfo, 8LL);
    if ( !performance )
      goto LABEL_90;
    v51 = (System_Object_array *)performance;
    v52 = StringLiteral_19437/*"from"*/;
    if ( StringLiteral_19437/*"from"*/ )
    {
      v52 = sub_1B864F4(StringLiteral_19437/*"from"*/, v51->obj.klass->_1.element_class);
      if ( !v52 )
        goto LABEL_92;
      v53 = StringLiteral_19437/*"from"*/;
    }
    else
    {
      v53 = 0LL;
    }
    if ( !v51->max_length )
      goto LABEL_91;
    v51->m_Items[0] = (Il2CppObject *)v53;
    sub_1B8635C((CGThumbnailListItem_o *)v51->m_Items, v53, v49, v50);
    v62 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v62 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v90.fields._list = v62->static_fields->NoblePhantasmBgmVolumeRate;
    v52 = j_il2cpp_value_box_0(float_TypeInfo, &v90, v59, v60, v61);
    v65 = (Il2CppObject *)v52;
    if ( !v52 || (v52 = sub_1B864F4(v52, v51->obj.klass->_1.element_class)) != 0 )
    {
      if ( v51->max_length <= 1 )
        goto LABEL_91;
      v51->m_Items[1] = v65;
      sub_1B8635C((CGThumbnailListItem_o *)&v51->m_Items[1], (int32_t)v65, v63, v64);
      v52 = StringLiteral_23809/*"to"*/;
      if ( StringLiteral_23809/*"to"*/ )
      {
        v52 = sub_1B864F4(StringLiteral_23809/*"to"*/, v51->obj.klass->_1.element_class);
        if ( !v52 )
          goto LABEL_92;
        v53 = StringLiteral_23809/*"to"*/;
      }
      else
      {
        v53 = 0LL;
      }
      if ( v51->max_length <= 2 )
        goto LABEL_91;
      v51->m_Items[2] = (Il2CppObject *)v53;
      sub_1B8635C((CGThumbnailListItem_o *)&v51->m_Items[2], v53, v66, v67);
      *(_DWORD *)&v89.fields.hasValue = 1;
      v52 = j_il2cpp_value_box_0(int_TypeInfo, &v89, v68, v69, v70);
      v73 = (Il2CppObject *)v52;
      if ( !v52 || (v52 = sub_1B864F4(v52, v51->obj.klass->_1.element_class)) != 0 )
      {
        if ( v51->max_length <= 3 )
          goto LABEL_91;
        v51->m_Items[3] = v73;
        sub_1B8635C((CGThumbnailListItem_o *)&v51->m_Items[3], (int32_t)v73, v71, v72);
        v52 = StringLiteral_23770/*"time"*/;
        if ( StringLiteral_23770/*"time"*/ )
        {
          v52 = sub_1B864F4(StringLiteral_23770/*"time"*/, v51->obj.klass->_1.element_class);
          if ( !v52 )
            goto LABEL_92;
          v53 = StringLiteral_23770/*"time"*/;
        }
        else
        {
          v53 = 0LL;
        }
        if ( v51->max_length <= 4 )
          goto LABEL_91;
        v51->m_Items[4] = (Il2CppObject *)v53;
        sub_1B8635C((CGThumbnailListItem_o *)&v51->m_Items[4], v53, v74, v75);
        v88 = 1056964608;
        v52 = j_il2cpp_value_box_0(float_TypeInfo, &v88, v76, v77, v78);
        v81 = (Il2CppObject *)v52;
        if ( !v52 || (v52 = sub_1B864F4(v52, v51->obj.klass->_1.element_class)) != 0 )
        {
          if ( v51->max_length <= 5 )
            goto LABEL_91;
          v51->m_Items[5] = v81;
          sub_1B8635C((CGThumbnailListItem_o *)&v51->m_Items[5], (int32_t)v81, v79, v80);
          v52 = StringLiteral_22117/*"onupdate"*/;
          if ( StringLiteral_22117/*"onupdate"*/ )
          {
            v52 = sub_1B864F4(StringLiteral_22117/*"onupdate"*/, v51->obj.klass->_1.element_class);
            if ( !v52 )
              goto LABEL_92;
            v53 = StringLiteral_22117/*"onupdate"*/;
          }
          else
          {
            v53 = 0LL;
          }
          if ( v51->max_length <= 6 )
            goto LABEL_91;
          v51->m_Items[6] = (Il2CppObject *)v53;
          sub_1B8635C((CGThumbnailListItem_o *)&v51->m_Items[6], v53, v82, v83);
          v52 = StringLiteral_9685/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9685/*"OnChangeBgmVolume"*/ )
          {
            v53 = 0LL;
LABEL_84:
            if ( v51->max_length > 7 )
            {
              v51->m_Items[7] = (Il2CppObject *)v53;
              sub_1B8635C((CGThumbnailListItem_o *)&v51->m_Items[7], v53, v84, v85);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v86 = iTween__Hash(v51, 0LL);
              iTween__ValueTo(gameObject, v86, 0LL);
              return;
            }
LABEL_91:
            sub_1B8661C(v52, v53);
          }
          v52 = sub_1B864F4(StringLiteral_9685/*"OnChangeBgmVolume"*/, v51->obj.klass->_1.element_class);
          if ( v52 )
          {
            v53 = StringLiteral_9685/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v87 = sub_1B86638(v52);
    sub_1B864E0(v87, 0LL);
  }
  performance = BattleSequenceManager__ExistBackupBgmPlayGroup(this, v28, this->fields.BackupBgmName, v39);
  if ( (performance & 1) != 0 )
  {
    performance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( performance )
    {
      performance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)performance, 0LL);
      if ( performance )
      {
        v40 = (BgmPlayArgsGroup_o *)performance;
        performance = *(_QWORD *)(performance + 16);
        if ( performance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v90,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v91 = v90;
          while ( 1 )
          {
            v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v91,
                    (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v41 )
              break;
            current = v91.fields._current;
            if ( !v91.fields._current )
              sub_1B86614(v41, v42);
            v44 = (float)(__int64)v91.fields._current[2].klass + -800.0;
            if ( v44 == INFINITY )
              v45 = 0x80000000;
            else
              v45 = (int)v44;
            v89 = 0LL;
            v93 = (System_Nullable_float__o)&v89;
            System_Nullable_float____ctor(v93, 0.5, (const MethodInfo_371E63C *)Method_System_Nullable_float___ctor__);
            v46 = v89;
            v96.fields.value = v45 & (unsigned int)~(v45 >> 31);
            *(_OWORD *)&v90.fields._list = 0uLL;
            *(_QWORD *)&v96.fields.hasValue = &v90;
            System_Nullable_long____ctor(v96, Method_System_Nullable_long___ctor__, v47);
            v94 = 0LL;
            v95 = v46;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v94, v95, *(System_Nullable_long__o *)&v90.fields._list, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v91,
            (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_39272872(v40, 0LL, 0LL);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v28 )
  {
    v54 = this->fields.performance;
    if ( !v54 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v54->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    performance = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    if ( (performance & 1) != 0 )
    {
      v56 = this->fields.performance;
      if ( v56 )
      {
        performance = (__int64)v56->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0LL, 0LL);
          v57 = this->fields.performance;
          if ( v57 )
          {
            performance = (__int64)v57->fields.logic;
            if ( performance )
            {
              BattleLogic__PlayCurrentBgm((BattleLogic_o *)performance, 0.5, 0LL);
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
  SoundManager__playBgm(v58, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v16; // x19
  System_Func_object__bool__o *v17; // x20

  if ( (byte_4A50DD8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___, isCheckExistBgm);
    sub_1B863B8(&System_Func_BgmPlayArgs__bool__TypeInfo, v7);
    sub_1B863B8(&Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__, v8);
    sub_1B863B8(&BattleSequenceManager___c__DisplayClass143_0_TypeInfo, v9);
    byte_4A50DD8 = 1;
  }
  v10 = sub_1B86604(BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass143_0___ctor((BattleSequenceManager___c__DisplayClass143_0_o *)v10, 0LL);
  if ( !v10 )
    sub_1B86614(v11, v12);
  *(_QWORD *)(v10 + 16) = checkBgmName;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)checkBgmName, v13, v14);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v16 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
  v17 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__49797040(
           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
           (System_Func_TSource__bool__o *)v17,
           (const MethodInfo_2F7D7B0 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
}


void __fastcall BattleSequenceManager__FadeBattleUI(
        BattleSequenceManager_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  this->fields.nowTargetAlpha = targetAlpha;
  if ( !performance )
    sub_1B86614(0LL, method);
  BattlePerformance__FadeBattleUi(performance, time, targetAlpha, 0LL);
}


UIStandFigureM_o *__fastcall BattleSequenceManager__FetchMeshPrefab(
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
    return 0LL;
  }
}


void __fastcall BattleSequenceManager__FixSyncGroupRandomAudioPlayIndex(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *sequence,
        System_String_o *syncGroupName,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x22
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__50076180; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_object__o *v34; // x21
  BattleSequenceManager___c_c *v35; // x0
  System_Comparison_T__o *_9__76_0; // x23
  Il2CppObject *v37; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Func_object__bool__o *v41; // x23
  System_Collections_Generic_List_object__o *v42; // x21
  System_Collections_Generic_IEnumerable_T__o *v43; // x0
  BattleSequenceManager___c_c *v44; // x0
  System_Comparison_T__o *_9__76_2; // x19
  Il2CppObject *v46; // x22
  struct BattleSequenceManager___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x1
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4A50DA8 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___, sequence);
    sub_1B863B8(&System_Comparison_USFGOPlayAudioEvent__TypeInfo, v6);
    sub_1B863B8(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__, v10);
    sub_1B863B8(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo, v11);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___, v12);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___, v13);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__, v21);
    sub_1B863B8(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo, v22);
    sub_1B863B8(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo, v23);
    sub_1B863B8(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__, v24);
    sub_1B863B8(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__, v25);
    sub_1B863B8(&Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__, v26);
    sub_1B863B8(&BattleSequenceManager___c__DisplayClass76_0_TypeInfo, v27);
    sub_1B863B8(&BattleSequenceManager___c_TypeInfo, v28);
    byte_4A50DA8 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v29 = sub_1B86604(BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass76_0___ctor((BattleSequenceManager___c__DisplayClass76_0_o *)v29, 0LL);
  if ( !v29 )
    goto LABEL_27;
  *(_QWORD *)(v29 + 16) = syncGroupName;
  sub_1B8635C((CGThumbnailListItem_o *)(v29 + 16), (int32_t)syncGroupName, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__50076180 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                                                                           sequence,
                                                                                           (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v34 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v34,
    ComponentsInChildren_object__50076180,
    (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v35 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v35 = BattleSequenceManager___c_TypeInfo;
  }
  _9__76_0 = (System_Comparison_T__o *)v35->static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = BattleSequenceManager___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__76_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__76_0,
      v37,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__,
      0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__76_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__76_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__76_0, (int32_t)_9__76_0, v39, v40);
  }
  System_Collections_Generic_List_object___Sort_56615964(
    v34,
    _9__76_0,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v41 = (System_Func_object__bool__o *)sub_1B86604(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v41,
    (Il2CppObject *)v29,
    Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0LL);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v34,
          (System_Func_T__bool__o *)v41,
          (const MethodInfo_2F57CB4 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v42 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v42,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__50076180 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                                                                             sequence,
                                                                                             (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v42 )
    {
      System_Collections_Generic_List_object___AddRange(
        v42,
        ComponentsInChildren_object__50076180,
        (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v43 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                                             sequence,
                                                             (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v42,
        v43,
        (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v44 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v44 = BattleSequenceManager___c_TypeInfo;
      }
      _9__76_2 = (System_Comparison_T__o *)v44->static_fields->__9__76_2;
      if ( !_9__76_2 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v44 = BattleSequenceManager___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v44->static_fields->__9;
        _9__76_2 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__76_2,
          v46,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__,
          0LL);
        v47 = BattleSequenceManager___c_TypeInfo->static_fields;
        v47->__9__76_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__76_2;
        sub_1B8635C((CGThumbnailListItem_o *)&v47->__9__76_2, (int32_t)_9__76_2, v48, v49);
      }
      System_Collections_Generic_List_object___Sort_56615964(
        v42,
        _9__76_2,
        (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        v42,
        (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v51,
                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v51.fields._current )
          sub_1B86614(0LL, v50);
      }
      while ( (((__int64 (*)(void))v51.fields._current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v51,
        (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1B86614(ComponentsInChildren_object__50076180, v31);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleSequenceManager__GetOverwritedCutInLimitCount(
        BattleSequenceManager_o *this,
        int32_t curLimCnt,
        int32_t svtId,
        int32_t defLimCnt,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x22
  int32_t ServantId; // w0

  if ( (byte_4A50DAC & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, *(_QWORD *)&curLimCnt);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A50DAC = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( Component_object )
    {
      ServantId = BattleActorControl__getServantId((BattleActorControl_o *)Component_object, 0LL);
      if ( defLimCnt == -1 || ServantId == svtId )
        return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL);
      return curLimCnt;
    }
    goto LABEL_15;
  }
  if ( defLimCnt != -1 )
    return curLimCnt;
  if ( !Component_object )
LABEL_15:
    sub_1B86614(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleSequenceManager__GetRendererBaseAddColor(
        BattleSequenceManager_o *this,
        UnityEngine_SkinnedMeshRenderer_o *inputRenderer,
        const MethodInfo *method)
{
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s3
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A50DDD & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___, inputRenderer);
    byte_4A50DDD = 1;
  }
  v9.fields.r = 0.0;
  v9.fields.g = 0.0;
  v9.fields.b = 0.0;
  v9.fields.a = 0.0;
  *(UnityEngine_Color_o *)&v5 = BasicHelper__GetValue_object__Color_(
                                  (System_Collections_Generic_Dictionary_K__V__o *)this->fields.rendererBaseAddColorsDict,
                                  (Il2CppObject *)inputRenderer,
                                  v9,
                                  (const MethodInfo_2F5C070 *)Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
  result.fields.a = v8;
  result.fields.b = v7;
  result.fields.g = v6;
  result.fields.r = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetFieldPosNode(
        BattleSequenceManager_o *this,
        int32_t pos,
        System_String_o *format,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  Il2CppObject *v12; // x22
  Il2CppObject *Instance; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A50DCB & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&pos);
    sub_1B863B8(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8);
    sub_1B863B8(&StringLiteral_5973/*"Enemy"*/, v9);
    sub_1B863B8(&StringLiteral_10518/*"Player"*/, v10);
    byte_4A50DCB = 1;
  }
  if ( isEnemy )
    v11 = &StringLiteral_5973/*"Enemy"*/;
  else
    v11 = &StringLiteral_10518/*"Player"*/;
  v12 = (Il2CppObject *)*v11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v21 = pos;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v14, v15, v16);
  v18 = System_String__Format_61686468(format, v12, v17, 0LL);
  if ( !Instance )
    sub_1B86614(v18, v19);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleSequenceManager___c__DisplayClass124_0_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v12; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4A50DCC & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__,
      *(_QWORD *)&posIndex);
    sub_1B863B8(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo, v5);
    sub_1B863B8(&Method_BattleSequenceManager___c__DisplayClass124_0__GetTargetPosIndexTransform_b__0__, v6);
    sub_1B863B8(&BattleSequenceManager___c__DisplayClass124_0_TypeInfo, v7);
    byte_4A50DCC = 1;
  }
  v8 = (BattleSequenceManager___c__DisplayClass124_0_o *)sub_1B86604(BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass124_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  v8->fields.posIndex = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v12 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattleSequenceManager___c__DisplayClass124_0__GetTargetPosIndexTransform_b__0__,
    0LL);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___Find(
                                        battleTargetList,
                                        (System_Predicate_T__o *)v12,
                                        (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v9 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v9 )
      return UnityEngine_GameObject__get_transform(v9, 0LL);
LABEL_9:
    sub_1B86614(v9, v10);
  }
  return result;
}


bool __fastcall BattleSequenceManager__HasFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o **fxdVoice,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *fixedVoice; // x20

  *fxdVoice = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)fxdVoice, 0, (int32_t)method, v3);
  fixedVoice = this->fields.fixedVoice;
  if ( fixedVoice )
  {
    *fxdVoice = fixedVoice;
    sub_1B8635C((CGThumbnailListItem_o *)fxdVoice, (int32_t)fixedVoice, v6, v7);
  }
  return fixedVoice != 0LL;
}


bool __fastcall BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *actor; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *ExecutingTdInfo; // x0
  Il2CppObject *Component_object; // x19
  BattleSequenceManager_c *v12; // x0

  if ( (byte_4A50DD7 & 1) == 0 )
  {
    sub_1B863B8(&BattleSequenceManager_TypeInfo, entity);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A50DD7 = 1;
  }
  if ( !entity )
    return 0;
  if ( TreasureDvcEntity__IsDelayEnd(entity, 0LL) )
    return 1;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(actor, 0LL, 0LL) )
    return 0;
  ExecutingTdInfo = this->fields.actor;
  if ( !ExecutingTdInfo )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       ExecutingTdInfo,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    return 0;
  v12 = BattleSequenceManager_TypeInfo;
  if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
  ExecutingTdInfo = (UnityEngine_GameObject_o *)BattleSequenceManager__SafeGetExecutingTdInfo((const MethodInfo *)v12);
  if ( !ExecutingTdInfo || !Component_object )
LABEL_19:
    sub_1B86614(ExecutingTdInfo, v9);
  return BattleActorControl__IsDelayEndSequence(
           (BattleActorControl_o *)Component_object,
           ExecutingTdInfo->fields.m_CachedPtr,
           0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *monitor; // x19
  Il2CppObject *Component_object; // x19

  if ( (byte_4A50DD9 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v1);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v2);
    sub_1B863B8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    byte_4A50DD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v5 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_18;
  monitor = (UnityEngine_Object_o *)v5[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    return 0;
  v5 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_18;
  v5 = (UnityEngine_GameObject_o *)v5[3].monitor;
  if ( !v5 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1B86614(v5, v6);
  return LOBYTE(Component_object[33].monitor) == 0;
}


bool __fastcall BattleSequenceManager__IsReleaseSound(
        BattleSequenceManager_o *this,
        System_String_o *soundName,
        const MethodInfo *method)
{
  return !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, soundName, 0LL);
}


bool __fastcall BattleSequenceManager__IsSameBattleBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  return BasicHelper__EqualExceptNullOrEmpty(bgmName, this->fields.BackupBgmName, 0LL);
}


bool __fastcall BattleSequenceManager__IsTimeAccelerateNow(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4A50DDB & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A50DDB = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return !UnityEngine_Object__op_Equality(performance, 0LL, 0LL)
      && BattleSequenceManager__get_isAuthTDAccelerate(this, v4);
}


void __fastcall BattleSequenceManager__LoadBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4A50DAA & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, bgmName);
    sub_1B863B8(&SoundManager_TypeInfo, v7);
    byte_4A50DAA = 1;
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_String__IsNullOrEmpty(bgmName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( callback )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return;
    }
LABEL_14:
    sub_1B86614(IsNullOrEmpty, v9);
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_14;
  items = IsNullOrEmpty->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++IsNullOrEmpty->fields._version;
  if ( !items )
    goto LABEL_14;
  size = IsNullOrEmpty->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IsNullOrEmpty,
      (Il2CppObject *)bgmName,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v15[4] = (Il2CppClass *)bgmName;
    sub_1B8635C((CGThumbnailListItem_o *)(v15 + 4), (int32_t)bgmName, v10, v11);
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage(bgmName, callback, 1, 0LL);
}


void __fastcall BattleSequenceManager__LoadEndStandFigure(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  UnityEngine_Object_o *standFigure; // x22
  __int64 v8; // x1
  UIStandFigureRender_o *v9; // x0

  if ( (byte_4A50DAB & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, obj);
    byte_4A50DAB = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_1B86614(0LL, v8);
    UIStandFigureRender__SetActive(v9, 0, 0LL);
  }
  if ( onComplete )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, _QWORD))onComplete->fields.m_target)(
      onComplete->fields.original_method_info,
      obj,
      *(_QWORD *)&onComplete->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSequenceManager__MultiTargetBossPositioning(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *CoreObj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *monitor; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *v11; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v13; // x8
  struct BattleData_o *v14; // x8
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  Il2CppObject *v17; // x21
  __int64 *v18; // x8
  struct BattlePerformance_o *v19; // x9
  System_String_o *v20; // x19
  BattleData_o *v21; // x21
  UnityEngine_Component_o *TransformChild; // x19
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float v26; // s8
  float v27; // s9
  float v28; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A50DC7 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, CoreObj);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_18745/*"en_Parts_Up01"*/, v6);
    sub_1B863B8(&StringLiteral_18744/*"en_Parts_Under01"*/, v7);
    byte_4A50DC7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CoreObj, 0LL, 0LL) && this->fields.IsPlaying )
  {
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) == 0 )
    {
      v11 = this->fields.performance;
      if ( !v11 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v11->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        v13 = this->fields.performance;
        if ( !v13 )
          goto LABEL_54;
        v14 = v13->fields.data;
        if ( !v14 )
          goto LABEL_54;
        if ( v14->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_54;
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CoreObj,
                                                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
          if ( ((unsigned __int8)monitor & 1) == 0 )
          {
            if ( !Component_object )
              goto LABEL_54;
            monitor = (UnityEngine_GameObject_o *)Component_object[21].monitor;
            if ( !monitor )
              goto LABEL_54;
            if ( BattleServantData__isMultiTargetCore((BattleServantData_o *)monitor, 0LL) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0LL, 0LL) )
              {
                monitor = this->fields.SingleTarget;
                if ( !monitor )
                  goto LABEL_54;
                v17 = UnityEngine_GameObject__GetComponent_object_(
                        monitor,
                        (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)v17,
                                                        0LL,
                                                        0LL);
                if ( ((unsigned __int8)monitor & 1) == 0 )
                {
                  if ( !v17 )
                    goto LABEL_54;
                  if ( LOBYTE(v17[33].monitor) )
                  {
                    monitor = (UnityEngine_GameObject_o *)v17[32].klass;
                    if ( !monitor )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)monitor, 0LL) )
                      goto LABEL_37;
                    monitor = (UnityEngine_GameObject_o *)v17[32].klass;
                    if ( !monitor )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)monitor, 0LL) )
                    {
LABEL_37:
                      monitor = (UnityEngine_GameObject_o *)v17[32].klass;
                      if ( !monitor )
                        goto LABEL_54;
                      monitor = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                              (BattleServantData_o *)monitor,
                                                              0LL);
                      if ( ((unsigned __int8)monitor & 1) != 0 )
                      {
                        v18 = &StringLiteral_18745/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        monitor = (UnityEngine_GameObject_o *)v17[32].klass;
                        if ( !monitor )
                          goto LABEL_54;
                        monitor = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                                (BattleServantData_o *)monitor,
                                                                0LL);
                        if ( ((unsigned __int8)monitor & 1) == 0 )
                          return 0;
                        v18 = &StringLiteral_18744/*"en_Parts_Under01"*/;
                      }
                      v19 = this->fields.performance;
                      if ( !v19 )
                        goto LABEL_54;
                      v20 = (System_String_o *)*v18;
                      v21 = v19->fields.data;
                      monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Component_object,
                                                              0LL);
                      if ( !v21 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v21,
                                                                    (UnityEngine_Transform_o *)monitor,
                                                                    v20,
                                                                    0LL);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0LL, 0LL) )
                      {
                        monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Component_object,
                                                                0LL);
                        if ( monitor )
                        {
                          *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)monitor,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v26 = v23;
                            v27 = v24;
                            v28 = v25;
                            monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    TransformChild,
                                                                    0LL);
                            if ( monitor )
                            {
                              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)monitor, 0LL);
                              x = position.fields.x;
                              y = position.fields.y;
                              z = position.fields.z;
                              monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Component_object,
                                                                      0LL);
                              if ( monitor )
                              {
                                v34.fields.z = v28 - z;
                                v34.fields.y = v27 - y;
                                v34.fields.x = v26 - x;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)monitor, v34, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1B86614(monitor, v10);
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


void __fastcall BattleSequenceManager__OnBgChanged(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  BattleSequenceManager_o *v3; // x19
  struct System_Action_o *BgChangedCallback; // x8
  CGThumbnailListItem_o *p_BgChangedCallback; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  performance = this->fields.performance;
  this->fields.IsBgBusy = 0;
  if ( !performance || (v3 = this, (this = (BattleSequenceManager_o *)performance->fields.bgPerf) == 0LL) )
    sub_1B86614(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (CGThumbnailListItem_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))BgChangedCallback->fields.m_target)(
      BgChangedCallback->fields.original_method_info,
      *(_QWORD *)&BgChangedCallback->fields.extra_arg);
    p_BgChangedCallback->klass = 0LL;
    sub_1B8635C(p_BgChangedCallback, 0, v6, v7);
  }
}


void __fastcall BattleSequenceManager__OnChangeBgmVolume(
        BattleSequenceManager_o *this,
        float newValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v13; // x19
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x19
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x20
  float v30; // s9
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A50DBC & 1) == 0 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, method);
    sub_1B863B8(&System_IDisposable_TypeInfo, v5);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v6);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v7);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4A50DBC = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v10 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v10 )
      sub_1B86614(0LL, v11);
    klass = v10->klass;
    v13 = v10;
    v14 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BD6B4C(v10, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v13,
            *(_QWORD *)(p_method + 8));
    if ( !v18 )
      sub_1B86614(0LL, v17);
    while ( 1 )
    {
      v19 = *(_QWORD *)v18;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_16;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_16:
        v22 = sub_1BD6B4C(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
        break;
      v23 = *(_QWORD *)v18;
      v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v25 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_23;
        }
        v26 = v23 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_23:
        v26 = sub_1BD6B4C(v18, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
      if ( !v27 )
        sub_1B86614(0LL, v28);
      v29 = *(System_String_o **)(v27 + 16);
      v30 = *(float *)(v27 + 24);
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v29, v30 * newValue, 0LL);
    }
    v31 = *(_QWORD *)v18;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_33;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_33:
      v34 = sub_1BD6B4C(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v18, *(_QWORD *)(v34 + 8));
  }
}


void __fastcall BattleSequenceManager__OnEndNoblePhantasm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x0

  if ( (byte_4A50DDC & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__, method);
    byte_4A50DDC = 1;
  }
  rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
  if ( !rendererBaseAddColorsDict )
    sub_1B86614(0LL, method);
  System_Collections_Generic_Dictionary_object__Color___Clear(
    rendererBaseAddColorsDict,
    (const MethodInfo_32BFCE0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *actorCamera; // x20
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformance_o **p_performance; // x25
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x8
  int32_t size; // w2
  int v40; // w9
  Il2CppObject *v41; // x20
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x8
  int32_t v43; // w2
  int v44; // w9
  UnityEngine_Object_o *seqObject; // x21
  struct UnityEngine_GameObject_o **p_seqObject; // x27
  UnityEngine_Object_o *v47; // x21
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  BattlePerformance_o *v51; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x10
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  struct UnityEngine_GameObject_array *saveWaitPlayer; // x9
  __int64 v55; // x20
  __int64 v56; // x22
  unsigned __int64 max_length; // x8
  unsigned __int64 v58; // x23
  UnityEngine_Object_o *v59; // x21
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct UnityEngine_GameObject_array *v62; // x8
  struct UnityEngine_GameObject_array *v63; // x9
  Il2CppClass *v64; // x1
  struct UnityEngine_GameObject_array *v65; // x27
  __int64 v66; // x8
  unsigned __int64 v67; // x21
  UnityEngine_Object_o *v68; // x23
  char v69; // w22
  UnityEngine_Object_o *Component_object; // x23
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v72; // x20
  __int64 v73; // x23
  unsigned __int64 v74; // x9
  unsigned __int64 v75; // x27
  UnityEngine_Object_o *v76; // x22
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct UnityEngine_GameObject_array *v79; // x8
  struct UnityEngine_GameObject_array *v80; // x9
  Il2CppClass *v81; // x1
  struct UnityEngine_GameObject_array *v82; // x23
  __int64 v83; // x8
  unsigned __int64 v84; // x27
  int v85; // w28
  UnityEngine_Object_o *v86; // x22
  char v87; // w21
  UnityEngine_Object_o *v88; // x22
  UnityEngine_Object_o *data; // x21
  struct UnityEngine_GameObject_array *v90; // x20
  __int64 v91; // x8
  unsigned __int64 v92; // x22
  UnityEngine_Object_o *v93; // x21
  Il2CppObject *v94; // x0
  const MethodInfo *v95; // x2
  struct UnityEngine_GameObject_array *v96; // x20
  __int64 v97; // x8
  unsigned __int64 v98; // x22
  UnityEngine_Object_o *v99; // x21
  Il2CppObject *v100; // x0
  const MethodInfo *v101; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v104; // x2
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  UnityEngine_Camera_o *v107; // x21
  int32_t cullingMask; // w22
  char v109; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v111; // w22
  char v112; // w0
  UnityEngine_Object_o *v113; // x21
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // x8
  BattlePerformance_o *v115; // x19
  int32_t v116; // w20
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v118; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v120; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A50DBE & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&CommonUI_TypeInfo, v3);
    sub_1B863B8(&Method_DataManager_GetMaster_TreasureDvcMaster___, v4);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v13);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Clear__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_Object__Clear__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_Object__GetEnumerator__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_bool__get_Count__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_bool__get_Item__, v20);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B863B8(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v22);
    sub_1B863B8(&StringLiteral_9361/*"NoblePhantasm/CutIns"*/, v23);
    sub_1B863B8(&StringLiteral_3134/*"Battle2D"*/, v24);
    byte_4A50DBE = 1;
  }
  entity = 0LL;
  memset(&v120, 0, sizeof(v120));
  memset(&v119, 0, sizeof(v119));
  this->fields.IsPlaying = 0;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(0, 0LL);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v25);
  }
  actorCamera = (UnityEngine_Object_o *)this->fields.actorCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actorCamera, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.actorCamera;
    if ( !transform )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_106;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.originalCameraRoot, 0LL);
  }
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v28);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v30);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v31);
  BattleSequenceManager__restoreBattleActorTransform(this, v32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_106;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_32142CC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v33) )
    BattleSequenceManager__CrossFadeBgm(this, v34);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v34);
  p_performance = &this->fields.performance;
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)performance->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__loadEffectStatus((BattleActionCamera_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v118,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v120 = v118;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v120,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v120.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69356292((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v120,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_106;
  size = npEndDeleteObjects->fields._size;
  v40 = npEndDeleteObjects->fields._version + 1;
  npEndDeleteObjects->fields._size = 0;
  npEndDeleteObjects->fields._version = v40;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)npEndDeleteObjects->fields._items, 0, size, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v118,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v119 = v118;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v119,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v41 = v119.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69356292((UnityEngine_Object_o *)v41, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v119,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_106;
  v43 = createdObjects->fields._size;
  v44 = createdObjects->fields._version + 1;
  createdObjects->fields._size = 0;
  createdObjects->fields._version = v44;
  if ( v43 >= 1 )
    System_Array__Clear((System_Array_o *)createdObjects->fields._items, 0, v43, 0LL);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v47 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v47, 0LL);
    *p_seqObject = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.seqObject, 0, v48, v49);
  }
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_106;
  v51 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  p_actorlist = v51->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_106;
  e_actorlist = v51->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_106;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + p_actorlist->max_length )
  {
    saveWaitPlayer = this->fields.saveWaitPlayer;
    if ( saveWaitPlayer )
    {
      v55 = 4LL;
      v56 = 32LL;
      while ( 1 )
      {
        max_length = saveWaitPlayer->max_length;
        v58 = v55 - 4;
        if ( v55 - 4 >= (int)max_length )
          break;
        if ( v58 >= max_length )
          goto LABEL_186;
        v59 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitPlayer->obj.klass + v55);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v62 = this->fields.saveWaitPlayer;
          if ( !v62 )
            goto LABEL_106;
          if ( v58 >= v62->max_length )
            goto LABEL_186;
          v63 = (*p_performance)->fields.p_actorlist;
          if ( !v63 )
            goto LABEL_106;
          if ( v58 >= v63->max_length )
            goto LABEL_186;
          v64 = (Il2CppClass *)*((_QWORD *)&v62->obj.klass + v55);
          *(Il2CppClass **)((char *)&v63->obj.klass + v56) = v64;
          sub_1B8635C((CGThumbnailListItem_o *)((char *)v63 + v56), (int32_t)v64, v60, v61);
        }
        saveWaitPlayer = this->fields.saveWaitPlayer;
        ++v55;
        v56 += 8LL;
        if ( !saveWaitPlayer )
          goto LABEL_106;
      }
      v51 = *p_performance;
      if ( !*p_performance )
        goto LABEL_106;
    }
    v65 = v51->fields.p_actorlist;
    if ( !v65 )
      goto LABEL_106;
    v66 = *(_QWORD *)&v65->max_length;
    if ( (int)v66 >= 1 )
    {
      v67 = 0LL;
      while ( v67 < (unsigned int)v66 )
      {
        v68 = (UnityEngine_Object_o *)v65->m_Items[v67];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v68, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v67,
                                                   (const MethodInfo_35B6278 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v68 )
            goto LABEL_106;
          v69 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v68, (unsigned __int8)transform & 1, 0LL);
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)v68,
                                                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)Component_object[2].klass;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v69 & 1, 0LL);
          }
        }
        LODWORD(v66) = v65->max_length;
        if ( (__int64)++v67 >= (int)v66 )
          goto LABEL_92;
      }
LABEL_186:
      sub_1B8661C(transform, v27);
    }
    LODWORD(v67) = 0;
LABEL_92:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( saveWaitEnemy )
    {
      v72 = 4LL;
      v73 = 32LL;
      while ( 1 )
      {
        v74 = saveWaitEnemy->max_length;
        v75 = v72 - 4;
        if ( v72 - 4 >= (int)v74 )
          break;
        if ( v75 >= v74 )
          goto LABEL_186;
        v76 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v72);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v76, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v79 = this->fields.saveWaitEnemy;
          if ( !v79 )
            goto LABEL_106;
          if ( v75 >= v79->max_length )
            goto LABEL_186;
          v80 = (*p_performance)->fields.e_actorlist;
          if ( !v80 )
            goto LABEL_106;
          if ( v75 >= v80->max_length )
            goto LABEL_186;
          v81 = (Il2CppClass *)*((_QWORD *)&v79->obj.klass + v72);
          *(Il2CppClass **)((char *)&v80->obj.klass + v73) = v81;
          sub_1B8635C((CGThumbnailListItem_o *)((char *)v80 + v73), (int32_t)v81, v77, v78);
        }
        saveWaitEnemy = this->fields.saveWaitEnemy;
        ++v72;
        v73 += 8LL;
        if ( !saveWaitEnemy )
          goto LABEL_106;
      }
    }
    if ( !*p_performance )
      goto LABEL_106;
    v82 = (*p_performance)->fields.e_actorlist;
    if ( !v82 )
      goto LABEL_106;
    v83 = *(_QWORD *)&v82->max_length;
    if ( (int)v83 >= 1 )
    {
      v84 = 0LL;
      v85 = v67;
      while ( v84 < (unsigned int)v83 )
      {
        v86 = (UnityEngine_Object_o *)v82->m_Items[v84];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v86, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v85 + v84,
                                                   (const MethodInfo_35B6278 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v86 )
            goto LABEL_106;
          v87 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v86, (unsigned __int8)transform & 1, 0LL);
          v88 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v86,
                                          (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v88, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v88 )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)v88[2].klass;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v87 & 1, 0LL);
          }
        }
        LODWORD(v83) = v82->max_length;
        if ( (__int64)++v84 >= (int)v83 )
          goto LABEL_124;
      }
      goto LABEL_186;
    }
LABEL_124:
    v51 = *p_performance;
    p_seqObject = &this->fields.seqObject;
    if ( !*p_performance )
      goto LABEL_106;
  }
  data = (UnityEngine_Object_o *)v51->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !*p_performance )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)(*p_performance)->fields.data;
    if ( !transform )
      goto LABEL_106;
    BattleData__PartsIntoTheBody((BattleData_o *)transform, 0LL);
  }
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__InitActorPosition((BattlePerformance_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__resetOriginalPos((BattlePerformance_o *)transform, 0LL);
  if ( !*p_performance )
    goto LABEL_106;
  v90 = (*p_performance)->fields.p_actorlist;
  if ( !v90 )
    goto LABEL_106;
  v91 = *(_QWORD *)&v90->max_length;
  if ( (int)v91 >= 1 )
  {
    v92 = 0LL;
    while ( v92 < (unsigned int)v91 )
    {
      v93 = (UnityEngine_Object_o *)v90->m_Items[v92];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v93, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v93 )
          goto LABEL_106;
        v94 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v93,
                (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v94, v95);
      }
      LODWORD(v91) = v90->max_length;
      if ( (__int64)++v92 >= (int)v91 )
        goto LABEL_144;
    }
    goto LABEL_186;
  }
LABEL_144:
  if ( !*p_performance )
    goto LABEL_106;
  v96 = (*p_performance)->fields.e_actorlist;
  if ( !v96 )
    goto LABEL_106;
  v97 = *(_QWORD *)&v96->max_length;
  if ( (int)v97 >= 1 )
  {
    v98 = 0LL;
    while ( v98 < (unsigned int)v97 )
    {
      v99 = (UnityEngine_Object_o *)v96->m_Items[v98];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v99, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v99 )
          goto LABEL_106;
        v100 = UnityEngine_GameObject__GetComponent_object_(
                 (UnityEngine_GameObject_o *)v99,
                 (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v100, v101);
      }
      LODWORD(v97) = v96->max_length;
      if ( (__int64)++v98 >= (int)v97 )
        goto LABEL_155;
    }
    goto LABEL_186;
  }
LABEL_155:
  p_standFigure = &this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)*p_standFigure;
    if ( !*p_standFigure )
      goto LABEL_106;
    UIStandFigureM__Dispose((UIStandFigureM_o *)transform, 0LL);
    *p_standFigure = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.standFigure, 0, v105, v106);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v104) )
    BattleSequenceManager__ReleaseCpk(this, v27);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v107 = this->fields.actorCamera;
  if ( !v107 )
    goto LABEL_106;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v109 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3134/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v107, (1 << v109) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_106;
  v111 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v112 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3134/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v111 & ~(1 << v112), 0LL);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0LL);
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)(*p_performance)->fields.bgPerf;
  if ( !transform )
    goto LABEL_106;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0LL);
  if ( !this->fields.OnCompleteActorCallback )
    goto LABEL_176;
  v113 = (UnityEngine_Object_o *)*p_seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v113, 0LL, 0LL);
  v27 = 0LL;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    transform = (UnityEngine_Component_o *)*p_seqObject;
    if ( !*p_seqObject )
      goto LABEL_106;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)transform,
                                             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    v27 = (const MethodInfo *)transform;
  }
  OnCompleteActorCallback = this->fields.OnCompleteActorCallback;
  if ( !OnCompleteActorCallback )
LABEL_106:
    sub_1B86614(transform, v27);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, const MethodInfo *, _QWORD))OnCompleteActorCallback->fields.m_target)(
    OnCompleteActorCallback->fields.original_method_info,
    v27,
    *(_QWORD *)&OnCompleteActorCallback->fields.extra_arg);
LABEL_176:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9361/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_106;
  BYTE1(transform[5].fields.m_CachedPtr) = 0;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)(*p_performance)->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v115 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(*p_performance, 0LL);
  if ( !*p_performance )
    goto LABEL_106;
  v116 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(*p_performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v115, v116, CurrentGroundType, 0, 0LL);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__ResetCameraClippingRange((BattlePerformance_o *)transform, 1, 0LL);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__releaseChangeBgAssets((BattlePerformance_o *)transform, 0LL);
}


void __fastcall BattleSequenceManager__OverwriteStartTimeToSavedBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BgmPlayArgsGroup_o *v13; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v14; // x0
  System_Object_array *v15; // x0
  __int64 v16; // x1
  System_Object_array *v17; // x20
  Il2CppClass *klass; // x8
  System_Object_array *v19; // x19
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Func_object__bool__o *v37; // x23
  Il2CppObject *object; // x0
  const MethodInfo_371CBA4 *v39; // x3
  BgmPlayArgs_o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  System_Nullable_long__o v47; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v48; // 0:x1.8
  System_Nullable_float__o v49; // 0:x2.8
  System_Nullable_long__o v50; // 0:x0.16

  if ( (byte_4A50DC3 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Find_BgmPlayArgs___, method);
    sub_1B863B8(&BgmManager_TypeInfo, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_1B863B8(&System_Func_BgmPlayArgs__bool__TypeInfo, v5);
    sub_1B863B8(&System_IDisposable_TypeInfo, v6);
    sub_1B863B8(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v7);
    sub_1B863B8(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v8);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B863B8(&Method_System_Nullable_long___ctor__, v10);
    sub_1B863B8(
      &Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
      v11);
    sub_1B863B8(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo, v12);
    byte_4A50DC3 = 1;
  }
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v13 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v13 )
    {
      v14 = BgmPlayArgsGroup__AllArgsListNullExcluded(v13, 0LL);
      v15 = System_Linq_Enumerable__ToArray_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v14,
              (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v17 = v15,
            (v15 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                            this->fields.backupBgmPlayArgsGroup,
                                            0LL)) == 0LL) )
      {
        sub_1B86614(v15, v16);
      }
      klass = v15->obj.klass;
      v19 = v15;
      v20 = *(unsigned __int16 *)(&v15->obj.klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v15->obj.klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v20;
          p_offset += 4;
          if ( !v20 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BD6B4C(v15, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v24 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))p_method)(v19, *(_QWORD *)(p_method + 8));
      if ( !v24 )
        sub_1B86614(0LL, v23);
      while ( 1 )
      {
        v25 = *(_QWORD *)v24;
        v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v26;
            v27 += 4;
            if ( !v26 )
              goto LABEL_20;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_20:
          v28 = sub_1BD6B4C(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
          break;
        v29 = sub_1B86604(BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass114_0___ctor((BattleSequenceManager___c__DisplayClass114_0_o *)v29, 0LL);
        v30 = *(_QWORD *)v24;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v32 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v31;
            v32 += 4;
            if ( !v31 )
              goto LABEL_27;
          }
          v33 = v30 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_27:
          v33 = sub_1BD6B4C(v24, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
        if ( !v29 )
          sub_1B86614(v34, v34);
        *(_QWORD *)(v29 + 16) = v34;
        sub_1B8635C((CGThumbnailListItem_o *)(v29 + 16), v34, v35, v36);
        v37 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v37,
          (Il2CppObject *)v29,
          Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0LL);
        object = BasicHelper__Find_object_(
                   v17,
                   (System_Func_T__bool__o *)v37,
                   (const MethodInfo_2F58880 *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v50.fields.value = (int64_t)object[2].klass;
        else
          v50.fields.value = 0LL;
        v40 = *(BgmPlayArgs_o **)(v29 + 16);
        *(_QWORD *)&v47.fields.hasValue = 0LL;
        v47.fields.value = 0LL;
        *(_QWORD *)&v50.fields.hasValue = &v47;
        System_Nullable_long____ctor(v50, Method_System_Nullable_long___ctor__, v39);
        if ( !v40 )
          sub_1B86614(v41, v42);
        v48 = 0LL;
        v49 = 0LL;
        BgmPlayArgs__Update(v40, v48, v49, v47, 0LL);
      }
      v43 = *(_QWORD *)v24;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_39;
        }
        v46 = v43 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_39:
        v46 = sub_1BD6B4C(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v24, *(_QWORD *)(v46 + 8));
    }
  }
}


void __fastcall BattleSequenceManager__PrevPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A50DBF & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, actor);
    byte_4A50DBF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v4 )
  {
    if ( !actor )
      sub_1B86614(v4, v5);
    BattleActorControl__SetTempDefaultAnimation(actor, 0LL);
  }
}


void __fastcall BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  System_Collections_Generic_List_object__o *ReleaseSoundNames; // x20
  System_String_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v19; // x1
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  int32_t v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A50DC4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_BattleSequenceManager__ReleaseCpk_b__115_0__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Action__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B863B8(&StringLiteral_9364/*"NoblePhantasm_"*/, v7);
    byte_4A50DC4 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v29 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v13 = System_Int32__ToString((int32_t)&v29, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_61645176(
                                            (System_String_o *)StringLiteral_9364/*"NoblePhantasm_"*/,
                                            v13,
                                            0LL);
  if ( !ReleaseSoundNames )
    goto LABEL_17;
  items = ReleaseSoundNames->fields._items;
  v17 = Method_System_Collections_Generic_List_string__Add__;
  ++ReleaseSoundNames->fields._version;
  if ( !items )
    goto LABEL_17;
  size = ReleaseSoundNames->fields._size;
  v19 = Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ReleaseSoundNames,
      (Il2CppObject *)Instance,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v19;
    sub_1B8635C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v22 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__115_0__, 0LL);
  if ( !DelayInvokeMethodList
    || (v25 = DelayInvokeMethodList->fields._items,
        v26 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v25) )
  {
LABEL_17:
    sub_1B86614(Instance, v9);
  }
  v27 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v22,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    DelayInvokeMethodList->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v22;
    sub_1B8635C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
  }
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.fixedVoice = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.fixedVoice, 0, v2, v3);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.intactBgmList = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.intactBgmList, 0, v2, v3);
}


ExecutingTdInfo_o *__fastcall BattleSequenceManager__SafeGetExecutingTdInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x19
  Il2CppObject *v4; // x0
  __int64 v5; // x1

  if ( (byte_4A50DDF & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v1);
    sub_1B863B8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v2);
    byte_4A50DDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
  {
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !v4 )
      goto LABEL_11;
    if ( v4[23].monitor )
    {
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( v4 )
        return (ExecutingTdInfo_o *)v4[23].monitor;
LABEL_11:
      sub_1B86614(v4, v5);
    }
  }
  return ExecutingTdInfo__GetDefault(0LL);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A50DC2 & 1) == 0 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, method);
    byte_4A50DC2 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.backupBgmPlayArgsGroup, (int32_t)v3, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleSequenceManager__SearchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t limitCount; // w21
  UnityEngine_Object_o *Manager__LoadNoblePhantasmEffect; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UnityEngine_Object_o *v15; // x0
  UnityEngine_Object_o *v16; // x19

  if ( (byte_4A50DB6 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_GameObject_TypeInfo, *(_QWORD *)&tdId);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_3125/*"Battle/Prefab/"*/, v10);
    byte_4A50DB6 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadNoblePhantasmEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                               tdId,
                                                               limitCount,
                                                               name,
                                                               0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Manager__LoadNoblePhantasmEffect, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = (Il2CppObject *)Manager__LoadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v13,
                                         (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v14 = System_String__Concat_61645176((System_String_o *)StringLiteral_3125/*"Battle/Prefab/"*/, name, 0LL);
  v15 = UnityEngine_Resources__Load(v14, 0LL);
  if ( v15 )
  {
    if ( (UnityEngine_GameObject_c *)v15->klass == UnityEngine_GameObject_TypeInfo )
      v16 = v15;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = (Il2CppObject *)v16;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v13,
                                         (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SearchTargetAndModifyPositions(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *SingleTarget; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v11; // x20
  struct BattlePerformance_o *performance; // x10
  UnityEngine_GameObject_o *v13; // x20
  System_String_o **v14; // x8
  __int64 v15; // x9
  __int64 v16; // x25
  System_String_o *v17; // x21
  unsigned __int64 v18; // x26
  unsigned int v19; // w8
  UnityEngine_GameObject_o *v20; // x23
  UnityEngine_Object_o *v21; // x22
  UnityEngine_Transform_o *v22; // x22
  UnityEngine_Transform_o *v23; // x23
  int v24; // s0
  struct BattlePerformance_o *v27; // x8
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  unsigned int v31; // s9
  int v32; // s2
  unsigned int v33; // s0
  float v34; // s1
  struct BattlePerformance_o *v35; // x8
  struct BattleData_o *data; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A50DC8 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    sub_1B863B8(&StringLiteral_9216/*"N_Enemy2"*/, v5);
    sub_1B863B8(&StringLiteral_9217/*"N_Player2"*/, v6);
    byte_4A50DC8 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
    return;
  if ( !Component_object )
    goto LABEL_55;
  SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Component_object,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(SingleTarget, gameObject, 0LL) )
    return;
  v11 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_55;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                        actor,
                                        (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v13 = actor;
  v14 = (System_String_o **)((LOBYTE(actor[22].monitor) != 0) != (LOBYTE(Component_object[33].monitor) != 0)
                           ? &StringLiteral_9216/*"N_Enemy2"*/
                           : &StringLiteral_9217/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v15 = 360LL;
  if ( LOBYTE(actor[22].monitor) )
    v15 = 368LL;
  v16 = *(__int64 *)((char *)&performance->klass + v15);
  if ( !v16 )
LABEL_55:
    sub_1B86614(actor, method);
  if ( (int)*(_QWORD *)(v16 + 24) >= 1 )
  {
    v17 = *v14;
    v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 24);
    do
    {
      if ( v18 >= v19 )
        sub_1B8661C(actor, method);
      v20 = *(UnityEngine_GameObject_o **)(v16 + 32 + 8 * v18);
      v21 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, v21, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v17,
                                              0LL);
        if ( !v20 )
          goto LABEL_55;
        v22 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
        if ( !v22 )
          goto LABEL_55;
        v23 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_position(v22, 0LL);
        if ( !v23 )
          goto LABEL_55;
        UnityEngine_Transform__set_position(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
        v27 = this->fields.performance;
        if ( !v27 )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)v27->fields.data;
        if ( !actor )
          goto LABEL_55;
        if ( BYTE6(actor[29].monitor) && LOBYTE(v13[22].monitor) )
        {
          PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor((BattleData_o *)actor, 1, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
          if ( ((unsigned __int8)actor & 1) != 0 )
          {
            if ( !PartsActor )
              goto LABEL_55;
            actor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)PartsActor,
                                                  0LL);
            if ( !actor )
              goto LABEL_55;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)actor, 0LL);
            y = position.fields.y;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)PartsActor, 0LL);
            v31 = (unsigned int)UnityEngine_Transform__get_position(v22, 0LL);
            *(UnityEngine_Vector3_o *)(&v32 - 2) = UnityEngine_Transform__get_position(v22, 0LL);
            if ( !transform )
              goto LABEL_55;
            v33 = v31;
            v34 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v32 - 2), 0LL);
          }
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v20 )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive(v20, 0, 0LL);
          v35 = this->fields.performance;
          if ( !v35 )
            goto LABEL_55;
          data = v35->fields.data;
          if ( !data )
            goto LABEL_55;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v13[22].monitor) )
            UnityEngine_GameObject__SetActive(v20, 1, 0LL);
        }
      }
      v19 = *(_DWORD *)(v16 + 24);
      ++v18;
    }
    while ( (__int64)v18 < (int)v19 );
  }
}


void __fastcall BattleSequenceManager__SetAfterChangeField(
        BattleSequenceManager_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( actionData )
    actionData = (BattleActionData_o *)actionData->fields._ChangeField_k__BackingField;
  if ( !this )
    sub_1B86614(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.changeFieldAfter, (int32_t)actionData, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *battleTargetList; // x0
  int32_t v8; // w21

  if ( (byte_4A50DD4 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, isReset);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_4A50DD4 = 1;
  }
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_18;
  v8 = 0;
  while ( v8 < *((_DWORD *)battleTargetList + 6) )
  {
    battleTargetList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)battleTargetList,
                         v8,
                         (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( battleTargetList )
    {
      battleTargetList = (void *)*((_QWORD *)battleTargetList + 3);
      if ( battleTargetList )
      {
        if ( isReset )
          BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        else
          BattleActorControl__setAuraFlip(
            (BattleActorControl_o *)battleTargetList,
            *((_BYTE *)battleTargetList + 536),
            0LL);
        battleTargetList = this->fields.battleTargetList;
        ++v8;
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
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        return;
      }
    }
LABEL_18:
    sub_1B86614(battleTargetList, isReset);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.fixedVoice = voiceId;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.fixedVoice, (int32_t)voiceId, (int32_t)method, v3);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct System_String_array *BgmNameListWithIds; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A50DD5 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_BgmMaster___, bgmIds);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A50DD5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v7);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.intactBgmList, (int32_t)BgmNameListWithIds, v9, v10);
}


void __fastcall BattleSequenceManager__SetMultiTargetBattleEnemy(
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
  if ( (byte_4A50DC6 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, targetActor);
    byte_4A50DC6 = 1;
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
  this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUp((BattleServantData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
    if ( !this )
      goto LABEL_26;
    this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUnder((BattleServantData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
  }
  v7 = v4->fields.performance;
  if ( !v7 || (this = (BattleSequenceManager_o *)v7->fields.data) == 0LL )
LABEL_26:
    sub_1B86614(this, targetActor);
  PartsActor = (UnityEngine_Component_o *)BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL) )
  {
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetActor, 0LL);
    v9 = v4->fields.performance;
    if ( v9 )
    {
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v9->fields.root_field, 0LL);
        if ( PartsActor )
        {
          transform = UnityEngine_Component__get_transform(PartsActor, 0LL);
          this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)targetActor,
                                              0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
            this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform(PartsActor, 0LL);
            v11 = this;
            if ( !byte_4A487E1 )
            {
              this = (BattleSequenceManager_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, targetActor);
              byte_4A487E1 = 1;
            }
            if ( v11 )
            {
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)v11,
                UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
}


void __fastcall BattleSequenceManager__SetPreLoadStandFigureData(
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
void __fastcall BattleSequenceManager__SetShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        bool isStart,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v9; // x3
  int32_t v10; // w21
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4A50DAE & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___, isStart);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_4A50DAE = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v9),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0LL) )
  {
LABEL_10:
    sub_1B86614(actor, isStart);
  }
  v10 = 0;
  while ( v10 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v10,
                                          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( actor )
    {
      klass = actor[1].klass;
      if ( klass )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          (BattleFBXComponent_o *)klass->_1.this_arg.data,
          isStart,
          v11);
        actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList;
        ++v10;
        if ( actor )
          continue;
      }
    }
    goto LABEL_10;
  }
}


void __fastcall BattleSequenceManager__SetTempShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        BattleFBXComponent_o *fbx,
        bool isStart,
        const MethodInfo *method)
{
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A50DAF & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, fbx);
    sub_1B863B8(&StringLiteral_16378/*"_y0"*/, v6);
    byte_4A50DAF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v7 )
  {
    if ( !fbx )
      sub_1B86614(v7, v8);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16378/*"_y0"*/, 0LL);
      else
        BattleFBXComponent__RevertShaderFloatProperty(fbx, 0LL);
    }
  }
}


void __fastcall BattleSequenceManager__SetupDemoActor(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_array *playerList,
        UnityEngine_GameObject_array *enemyList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *seqObject; // x0
  Il2CppObject *Component_object; // x20
  unsigned __int64 v11; // x27
  unsigned __int64 v12; // x26
  System_String_o *v13; // x0
  BattleSequenceManager_o *v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x22
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x22
  System_String_o *v19; // x0
  BattleSequenceManager_o *v20; // x0
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *v22; // x21
  unsigned __int64 v23; // x8
  int v24; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A50DAD & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, playerList);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_2148/*"Actors/Actor"*/, v8);
    byte_4A50DAD = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1B86614(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v11 = 0LL;
  do
  {
    v12 = v11 + 1;
    v24 = v11 + 1;
    v13 = System_Int32__ToString((int32_t)&v24, 0LL);
    v14 = (BattleSequenceManager_o *)System_String__Concat_61645176((System_String_o *)StringLiteral_2148/*"Actors/Actor"*/, v13, 0LL);
    v16 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v14,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v14,
                                    v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_27;
      max_length = playerList->max_length;
      if ( (__int64)v11 < (int)max_length )
      {
        if ( v11 >= max_length )
LABEL_28:
          sub_1B8661C(seqObject, playerList);
        seqObject = playerList->m_Items[v11];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v16 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v16,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v11;
  }
  while ( v12 != 3 );
  for ( i = 0LL; i != 3; ++i )
  {
    v24 = i + 4;
    v19 = System_Int32__ToString((int32_t)&v24, 0LL);
    v20 = (BattleSequenceManager_o *)System_String__Concat_61645176((System_String_o *)StringLiteral_2148/*"Actors/Actor"*/, v19, 0LL);
    v22 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v20,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v20,
                                    v21);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_27;
      v23 = enemyList->max_length;
      if ( (__int64)i < (int)v23 )
      {
        if ( i >= v23 )
          goto LABEL_28;
        seqObject = enemyList->m_Items[i];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v22 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v22,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
  }
}


void __fastcall BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  void *actor; // x0
  Il2CppObject *Component_object; // x23
  BattleActionData_o *klass; // x24
  System_Collections_Generic_HashSet_int__o *v25; // x25
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_o *v28; // x21
  int v29; // w8
  void *v30; // x25
  unsigned int v31; // w20
  __int64 v32; // x8
  int v33; // w8
  void *v34; // x25
  unsigned int v35; // w20
  __int64 v36; // x8
  int v37; // w8
  void *v38; // x25
  unsigned int v39; // w20
  __int64 v40; // x8
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x24
  System_Action_object__o *v42; // x25
  int monitor_low; // w28
  System_Collections_Generic_HashSet_int__o *v44; // x22
  int v45; // w29
  int i; // w24
  __int64 v47; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v51; // x1
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w21
  struct UnityEngine_GameObject_o *v57; // x21
  Il2CppObject *v58; // x23
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x2
  __int64 v62; // x1
  BattlePerformance_o *v63; // x0
  int32_t v64; // w20
  UnityEngine_Object_o *v65; // x21
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x22
  BattleSequenceManager_BattleTarget_o *v69; // x21
  __int64 v70; // x1
  BattlePerformance_o *v71; // x0
  __int64 ServantPosIndex; // x0
  __int64 v73; // x1
  __int64 v74; // x1
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x8
  int v82; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v83; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A50DC5 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_BattleActionData_MoveToSubMember__TypeInfo, method);
    sub_1B863B8(&BattleSequenceManager_BattleTarget_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v6);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_1B863B8(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__, v14);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B863B8(&Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__0__, v16);
    sub_1B863B8(&BattleSequenceManager___c__DisplayClass117_0_TypeInfo, v17);
    byte_4A50DC5 = 1;
  }
  memset(&j, 0, sizeof(j));
  v18 = sub_1B86604(BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass117_0___ctor((BattleSequenceManager___c__DisplayClass117_0_o *)v18, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.SingleTarget, 0, v19, v20);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      klass = (BattleActionData_o *)Component_object[30].klass;
      v25 = (System_Collections_Generic_HashSet_int__o *)sub_1B86604(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v25,
        (const MethodInfo_34B7810 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v18 )
      {
        *(_QWORD *)(v18 + 16) = v25;
        v28 = (CGThumbnailListItem_o *)(v18 + 16);
        sub_1B8635C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)v25, v26, v27);
        if ( klass )
        {
          actor = BattleActionData__getDamageList(klass, -1, 0LL);
          if ( actor )
          {
            v29 = *((_DWORD *)actor + 6);
            v30 = actor;
            if ( v29 >= 1 )
            {
              v31 = 0;
              while ( v31 < v29 )
              {
                v32 = *((_QWORD *)v30 + (int)v31 + 4);
                if ( !v32 )
                  goto LABEL_78;
                v21 = *(unsigned int *)(v32 + 28);
                if ( (_DWORD)v21 )
                {
                  actor = v28->klass;
                  if ( !v28->klass )
                    goto LABEL_78;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v21,
                                    (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v29 = *((_DWORD *)v30 + 6);
                if ( (int)++v31 >= v29 )
                  goto LABEL_19;
              }
LABEL_79:
              sub_1B8661C(actor, v21);
            }
LABEL_19:
            actor = BattleActionData__getBuffList(klass, -1, 0LL);
            if ( actor )
            {
              v33 = *((_DWORD *)actor + 6);
              v34 = actor;
              if ( v33 >= 1 )
              {
                v35 = 0;
                while ( v35 < v33 )
                {
                  v36 = *((_QWORD *)v34 + (int)v35 + 4);
                  if ( !v36 )
                    goto LABEL_78;
                  v21 = *(unsigned int *)(v36 + 40);
                  if ( (_DWORD)v21 )
                  {
                    actor = v28->klass;
                    if ( !v28->klass )
                      goto LABEL_78;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v21,
                                      (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v33 = *((_DWORD *)v34 + 6);
                  if ( (int)++v35 >= v33 )
                    goto LABEL_28;
                }
                goto LABEL_79;
              }
LABEL_28:
              actor = BattleActionData__getHealList(klass, -1, 0LL);
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
                      goto LABEL_78;
                    v21 = *(unsigned int *)(v40 + 28);
                    if ( (_DWORD)v21 )
                    {
                      actor = v28->klass;
                      if ( !v28->klass )
                        goto LABEL_78;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v21,
                                        (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v37 = *((_DWORD *)v38 + 6);
                    if ( (int)++v39 >= v37 )
                      goto LABEL_37;
                  }
                  goto LABEL_79;
                }
LABEL_37:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)klass->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v42 = (System_Action_object__o *)sub_1B86604(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v42,
                    (Il2CppObject *)v18,
                    Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__0__,
                    0LL);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v42,
                    (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                monitor_low = LOBYTE(Component_object[33].monitor);
                v44 = (System_Collections_Generic_HashSet_int__o *)sub_1B86604(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v44,
                  (const MethodInfo_34B7810 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v28->klass;
                if ( v28->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v83,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_34B8398 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v82 = 0;
                  j = v83;
                  v45 = 0;
LABEL_41:
                  for ( i = v45; ; ++i )
                  {
                    v45 = i;
                    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &j,
                            (const MethodInfo_337C2C8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      break;
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1B86614(0LL, v47);
                    current = (int32_t)j.fields._current;
                    ServantGameObject = BattlePerformance__getServantGameObject(
                                          performance,
                                          (int32_t)j.fields._current,
                                          0LL);
                    if ( !ServantGameObject )
                      sub_1B86614(0LL, v51);
                    v52 = UnityEngine_GameObject__GetComponent_object_(
                            ServantGameObject,
                            (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                    if ( !v52 )
                      sub_1B86614(0LL, v53);
                    if ( (monitor_low != 0) == (LOBYTE(v52[33].monitor) != 0) )
                    {
                      ++v82;
                      goto LABEL_41;
                    }
                    if ( !v44 )
                      sub_1B86614(v52, v53);
                    System_Collections_Generic_HashSet_int___Add(
                      v44,
                      current,
                      (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &j,
                    (const MethodInfo_337C2C4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v82 && i == 1 )
                  {
                    v28->klass = (CGThumbnailListItem_c *)v44;
                    sub_1B8635C(v28, (int32_t)v44, v54, v55);
                  }
                  actor = v28->klass;
                  if ( v28->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v83,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_34B8398 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v56 = -1;
                      for ( j = v83;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &j,
                              (const MethodInfo_337C2C8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v56 = (int32_t)j.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_337C2C4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_78;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v56, 0LL);
                      if ( !actor )
                        goto LABEL_78;
                      v57 = (struct UnityEngine_GameObject_o *)actor;
                      v58 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v57;
                      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.SingleTarget, (int32_t)v57, v59, v60);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v58, v61);
                    }
                    if ( v44 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v83,
                        v44,
                        (const MethodInfo_34B8398 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      j = v83;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &j,
                                (const MethodInfo_337C2C8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v63 = this->fields.performance;
                        if ( !v63 )
                          sub_1B86614(0LL, v62);
                        v64 = (int32_t)j.fields._current;
                        v65 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                        v63,
                                                        (int32_t)j.fields._current,
                                                        0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v66 = UnityEngine_Object__op_Equality(v65, 0LL, 0LL);
                        if ( !v66 )
                        {
                          if ( !v65 )
                            sub_1B86614(v66, v67);
                          v68 = UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v65,
                                  (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v69 = (BattleSequenceManager_BattleTarget_o *)sub_1B86604(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor(v69, 0LL);
                          v71 = this->fields.performance;
                          if ( !v71 )
                            sub_1B86614(0LL, v70);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v71, v64, 0LL);
                          if ( !v69 )
                            sub_1B86614(ServantPosIndex, v73);
                          BattleSequenceManager_BattleTarget__setup(
                            v69,
                            (BattleActorControl_o *)v68,
                            ServantPosIndex,
                            0LL);
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1B86614(0LL, v74);
                          items = battleTargetList->fields._items;
                          v79 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1B86614(battleTargetList, v74);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v69,
                              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v81 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v81[4] = (Il2CppClass *)v69;
                            sub_1B8635C((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v69, v75, v76);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_337C2C4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
LABEL_78:
    sub_1B86614(actor, v21);
  }
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1B86614(0LL, method);
  BattlePerformance__showNobleInfo(performance, -1, 1, 100, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SwitchPopupFullScreen(
        BattleSequenceManager_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *infoComp; // x21
  struct BattlePerformance_o *v7; // x8

  v4 = this;
  if ( (byte_4A50DBB & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, isFullScreen);
    byte_4A50DBB = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_11;
  infoComp = (UnityEngine_Object_o *)performance->fields.infoComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(infoComp, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.performance;
    if ( v7 )
    {
      this = (BattleSequenceManager_o *)v7->fields.infoComp;
      if ( this )
      {
        BattleInformationComponent__SwitchPopupFullScreen((BattleInformationComponent_o *)this, isFullScreen, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1B86614(this, isFullScreen);
  }
}


void __fastcall BattleSequenceManager__SyncAttachedTargetPair(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetPosIndex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v5; // x19
  BattleSequenceManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *Component_object; // x21
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v15; // x4
  struct BattlePerformance_o *v16; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *root_field; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_object__o *npEndDeleteObjects; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  BattleSequenceManager_o *v27; // x1
  Il2CppClass **v28; // x0
  int v29; // w22
  UnityEngine_Component_o *v30; // x0
  BattleSyncTransformComponent_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v37; // x8

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_4A50DCA & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___, tlcont);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Object__Add__, v8);
    this = (BattleSequenceManager_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    byte_4A50DCA = 1;
  }
  if ( (targetPosIndex & 0x80000000) == 0 )
  {
    performance = v6->fields.performance;
    if ( !performance )
      goto LABEL_43;
    this = (BattleSequenceManager_o *)performance->fields.data;
    if ( !this )
      goto LABEL_43;
    this = (BattleSequenceManager_o *)BattleData__get_IsEnemyPosCountNormal((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    if ( !v5 )
      goto LABEL_43;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v5,
                         (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      Component_object = (Il2CppObject *)v6->fields.defaultSyncSetting;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !Component_object )
        goto LABEL_43;
      if ( BattleSyncTransformComponent__get_IsNotExecSync((BattleSyncTransformComponent_o *)Component_object, 0LL) )
        return;
      TargetPosIndexTransform = (UnityEngine_Object_o *)BattleSequenceManager__GetTargetPosIndexTransform(
                                                          v6,
                                                          targetPosIndex + 3,
                                                          v12);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(TargetPosIndexTransform, 0LL, 0LL) )
        return;
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                                 (WellFired_USTimelineContainer_o *)v5,
                                                 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v16 = v6->fields.performance;
        if ( !v16 )
          goto LABEL_43;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        root_field = v16->fields.root_field;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v15);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            (BaseMonoBehaviour_o *)v16,
                                            dummyActorPrefab,
                                            root_field,
                                            TargetFieldPosNode,
                                            0LL);
        if ( !this )
          goto LABEL_43;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject((WellFired_USTimelineContainer_o *)v5, transform, 0LL);
        npEndDeleteObjects = (System_Collections_Generic_List_object__o *)v6->fields.npEndDeleteObjects;
        this = (BattleSequenceManager_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                            (WellFired_USTimelineContainer_o *)v5,
                                            0LL);
        if ( !this )
          goto LABEL_43;
        this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !npEndDeleteObjects )
          goto LABEL_43;
        items = npEndDeleteObjects->fields._items;
        v25 = Method_System_Collections_Generic_List_Object__Add__;
        ++npEndDeleteObjects->fields._version;
        if ( !items )
          goto LABEL_43;
        size = npEndDeleteObjects->fields._size;
        v27 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            npEndDeleteObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1B8635C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
        }
        v29 = 0;
      }
      else
      {
        v29 = 1;
      }
      v30 = (UnityEngine_Component_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                         (WellFired_USTimelineContainer_o *)v5,
                                         0LL);
      this = (BattleSequenceManager_o *)BasicHelper__GetOrAddComponent_object_(
                                          v30,
                                          (const MethodInfo_2F5B6F4 *)Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_43;
      v31 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0LL);
      if ( v29 )
      {
        tlcont = (WellFired_USTimelineContainer_o *)v31;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_43;
        v34 = *(_QWORD *)&this->fields.m_CachedPtr;
        v35 = Method_System_Collections_Generic_List_Object__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v34 )
          goto LABEL_43;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)tlcont,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v37 + 32) = tlcont;
          sub_1B8635C((CGThumbnailListItem_o *)(v37 + 32), (int32_t)tlcont, v32, v33);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_43:
      sub_1B86614(this, tlcont);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__TargetTransformOverwriteOrReset(
        BattleSequenceManager_o *this,
        bool isOverwrite,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *BattleActor; // x0
  __int64 v12; // x1
  struct BattlePerformance_o *performance; // x8
  BattleActorControl_o *v14; // x20
  BattleActionData_o *nowAction; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  void *monitor; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *v21; // x23
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x0
  System_Collections_ICollection_o *Components_object; // x23
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v26; // x1
  void *v27; // x8
  unsigned __int64 v28; // x29
  NoblePhantasmTargetOverwriteTransform_o *v29; // x24
  __int64 v30; // x25
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 TargetOfTreasureDevice; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A50DDA & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      isOverwrite);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v5);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v6);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo, v10);
    byte_4A50DDA = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( this->fields.battleTargetList )
  {
    BattleActor = (System_Collections_Generic_List_object__o *)BattleSequenceManager__get_BattleActor(
                                                                 this,
                                                                 (const MethodInfo *)isOverwrite);
    performance = this->fields.performance;
    if ( !performance
      || (v14 = (BattleActorControl_o *)BattleActor,
          (BattleActor = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList) == 0LL) )
    {
      sub_1B86614(BattleActor, v12);
    }
    nowAction = performance->fields.nowAction;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v39,
      BattleActor,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v40 = v39;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v40,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v16 )
        break;
      if ( !v40.fields._current )
        sub_1B86614(v16, v17);
      monitor = v40.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v19 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL);
      if ( !v19 )
      {
        if ( !monitor )
          sub_1B86614(v19, v20);
        v21 = (UnityEngine_Object_o *)*((_QWORD *)monitor + 5);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v21, 0LL, 0LL) )
        {
          v23 = (UnityEngine_GameObject_o *)*((_QWORD *)monitor + 5);
          if ( !v23 )
            sub_1B86614(0LL, v22);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v23,
                                                                    (const MethodInfo_2FC174C *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1B86614(IsNullOrEmpty, v26);
            v27 = Components_object[1].monitor;
            if ( (int)v27 >= 1 )
            {
              v28 = 0LL;
              do
              {
                if ( v28 >= (unsigned int)v27 )
                  sub_1B8661C(IsNullOrEmpty, v26);
                v29 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v28);
                v30 = sub_1B86604(NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
                NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo___ctor(
                  (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v30,
                  0LL);
                if ( !v30 )
                  sub_1B86614(v31, v32);
                *(_QWORD *)(v30 + 16) = monitor;
                sub_1B8635C((CGThumbnailListItem_o *)(v30 + 16), (int32_t)monitor, v33, v34);
                if ( !nowAction )
                  sub_1B86614(v35, v36);
                *(_DWORD *)(v30 + 24) = BattleActionData__GetTargetSideFunctionRange(
                                          nowAction,
                                          *((_BYTE *)monitor + 536),
                                          0LL);
                TargetOfTreasureDevice = BattleActionData__GetTargetOfTreasureDevice(
                                           nowAction,
                                           (BattleActorControl_o *)monitor,
                                           v14,
                                           0LL);
                *(_DWORD *)(v30 + 28) = TargetOfTreasureDevice;
                if ( isOverwrite )
                {
                  if ( !v29 )
                    sub_1B86614(TargetOfTreasureDevice, v38);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
                    v29,
                    (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v30,
                    0LL);
                }
                else
                {
                  if ( !v29 )
                    sub_1B86614(TargetOfTreasureDevice, v38);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(
                    v29,
                    (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v30,
                    0LL);
                }
                LODWORD(v27) = Components_object[1].monitor;
                ++v28;
              }
              while ( (__int64)v28 < (int)v27 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v40,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  }
}


void __fastcall BattleSequenceManager__TdDelayEnd(BattleSequenceManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleSequenceManager__CrossFadeBgm(this, method);
  BattleSequenceManager__ReleaseCpk(this, v3);
}


bool __fastcall BattleSequenceManager__TryGetAfterChangeBgm(
        BattleSequenceManager_o *this,
        BattleActionData_TreasureDvcAfterChangeBgm_o **changeBgm,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattlePerformance_o *performance; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleActionData_TreasureDvcAfterChangeBgm_o *TdAfterChangeBgm_k__BackingField; // x19

  performance = this->fields.performance;
  if ( !performance )
    sub_1B86614(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0LL;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1B8635C((CGThumbnailListItem_o *)changeBgm, (int32_t)TdAfterChangeBgm_k__BackingField, (int32_t)method, v3);
  return TdAfterChangeBgm_k__BackingField != 0LL;
}


void __fastcall BattleSequenceManager__Update(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  float delayInvokeTimer; // s8
  __int64 v8; // x1
  float v9; // s0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x0
  struct System_Collections_Generic_List_Action__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A50DA6 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Action__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Action__GetEnumerator__, v6);
    byte_4A50DA6 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v9 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v9;
    if ( v9 <= 0.0 )
    {
      DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_14;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        DelayInvokeMethodList,
        (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v14,
                (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v14.fields._current )
          ((void (__fastcall *)(Il2CppClass *, void *))v14.fields._current[1].monitor)(
            v14.fields._current[4].klass,
            v14.fields._current[2].monitor);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v14,
        (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v11 = this->fields.DelayInvokeMethodList;
      if ( !v11 )
LABEL_14:
        sub_1B86614(DelayInvokeMethodList, v8);
      size = v11->fields._size;
      v13 = v11->fields._version + 1;
      v11->fields._size = 0;
      v11->fields._version = v13;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
    }
  }
}


void __fastcall BattleSequenceManager__UpdateAfterChangeFieldBG(
        BattleSequenceManager_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x0

  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
    ((void (__fastcall *)(struct BattleActionData_AfterChangeField_o *, int32_t, int32_t, Il2CppMethodPointer))changeFieldAfter->klass->vtable._4_SetTakeOverBG.method)(
      changeFieldAfter,
      id,
      type,
      changeFieldAfter->klass->vtable._5_SetTakeOverBgmName.methodPtr);
}


void __fastcall BattleSequenceManager__UpdateAfterChangeFieldBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x0

  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
    ((void (__fastcall *)(struct BattleActionData_AfterChangeField_o *, System_String_o *, _QWORD, void *))changeFieldAfter->klass->vtable._5_SetTakeOverBgmName.method)(
      changeFieldAfter,
      bgmName,
      0LL,
      changeFieldAfter->klass[1]._1.image);
}


System_Collections_IEnumerator_o *__fastcall BattleSequenceManager__WaitEndSequence(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A50DBD & 1) == 0 )
  {
    sub_1B863B8(&BattleSequenceManager__WaitEndSequence_d__108_TypeInfo, method);
    byte_4A50DBD = 1;
  }
  v3 = sub_1B86604(BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__108___ctor((BattleSequenceManager__WaitEndSequence_d__108_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B86614(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__115_0(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_string__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A50DE2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_4A50DE2 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v16.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v16.fields._current, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1B86614(0LL, v11);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v12 = this->fields.ReleaseSoundNames;
  if ( !v12 )
LABEL_14:
    sub_1B86614(ReleaseSoundNames, method);
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
}


void __fastcall BattleSequenceManager___setup_b__88_1(
        BattleSequenceManager_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance || !comp )
    sub_1B86614(this, comp);
  SwitchActiveBaseConditionComponent__SwitchActive(comp, performance->fields.data, 0LL);
}


void __fastcall BattleSequenceManager__addServantVoicePlayed(
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

  if ( (byte_4A50DB1 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15886/*"_"*/, voiceMaster);
    byte_4A50DB1 = 1;
  }
  FlagRequestNumber = System_String__Concat_61645176((System_String_o *)StringLiteral_15886/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__AddServantVoicePlayed_43654856((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B86614(FlagRequestNumber, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__changeBg(
        BattleSequenceManager_o *this,
        int32_t id,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  __int64 v19; // x1
  BattlePerformance_o *performance; // x23
  System_Action_o *v21; // x24
  __int64 v22; // x0
  __int64 v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_4A50DB9 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_1B863B8(&Method_BattleSequenceManager_OnBgChanged__, v19);
    byte_4A50DB9 = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.BgChangedCallback,
    (int32_t)callback,
    tp,
    (const MethodInfo *)parentCamera);
  performance = this->fields.performance;
  v21 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_1B86614(v22, v23);
  v24.fields.z = v13;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  v24.fields.x = v15;
  v24.fields.y = v14;
  BattlePerformance__ForceChangeBg(performance, id, tp, v24, v25, 1, parentCamera, v21, 0LL);
}


bool __fastcall BattleSequenceManager__checkServantVoicePlayed(
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

  if ( (byte_4A50DB3 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15886/*"_"*/, voiceMaster);
    byte_4A50DB3 = 1;
  }
  FlagRequestNumber = System_String__Concat_61645176((System_String_o *)StringLiteral_15886/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( !(_DWORD)FlagRequestNumber )
    return (char)FlagRequestNumber;
  performance = this->fields.performance;
  if ( !performance
    || (v12 = (int)FlagRequestNumber, (FlagRequestNumber = (System_String_o *)performance->fields.data) == 0LL) )
  {
LABEL_9:
    sub_1B86614(FlagRequestNumber, v10);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
  return (char)FlagRequestNumber;
}


int32_t __fastcall BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4A50DCF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, groupName);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    byte_4A50DCF = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_32C5BA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_32C5930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1B86614(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A50DD1 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_string___, method);
    byte_4A50DD1 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *actor; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4A50DA2 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A50DA2 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.actor;
  if ( !v6 )
    sub_1B86614(0LL, v5);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v6,
                                   (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
}


bool __fastcall BattleSequenceManager__get_ExistChangeFieldAfter(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  return this->fields.changeFieldAfter != 0LL;
}


bool __fastcall BattleSequenceManager__get_FarClippingLock(BattleSequenceManager_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  UnityEngine_Object_o *v8; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4A50DA5 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v5);
    byte_4A50DA5 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BD6A48(v2);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BD6A48(v2);
  v8 = **(UnityEngine_Object_o ***)(v7 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v10);
  return BYTE1(Instance[8].monitor) != 0;
}


bool __fastcall BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleData_o *v10; // x8

  if ( (byte_4A50DA3 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A50DA3 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( v4 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_14;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v4 )
    return 0;
  v9 = this->fields.performance;
  if ( !v9 || (v10 = v9->fields.data) == 0LL )
LABEL_14:
    sub_1B86614(v4, v5);
  return v10->fields.systemflg_acceleration > 1;
}


bool __fastcall BattleSequenceManager__get_IsDemoMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.DemoMode;
}


float __fastcall BattleSequenceManager__get_NowTargetAlpha(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.nowTargetAlpha;
}


BattlePerformance_o *__fastcall BattleSequenceManager__get_Performance(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  return this->fields.performance;
}


int32_t __fastcall BattleSequenceManager__get_TreasureDeviceId(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.treasureDeviceId;
}


bool __fastcall BattleSequenceManager__get_isAuthTDAccelerate(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *performance; // x20
  void *Component_object; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v10; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v12; // x20
  struct BattlePerformance_o *v14; // x8

  if ( (byte_4A50DA4 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A50DA4 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 0;
  v7 = this->fields.performance;
  if ( !v7 )
    goto LABEL_27;
  data = (UnityEngine_Object_o *)v7->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
    goto LABEL_22;
  Component_object = this->fields.actor;
  if ( !Component_object )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Component_object,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_object )
    goto LABEL_27;
  v10 = this->fields.performance;
  if ( !v10 )
    goto LABEL_27;
  nowAction = v10->fields.nowAction;
  v12 = (BattleServantData_o *)*((_QWORD *)Component_object + 64);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v12 )
LABEL_27:
    sub_1B86614(Component_object, v6);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_object + 64), 0LL) )
    return 0;
  Component_object = (void *)BattleServantData__IsFixNpFastSpeed(v12, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 1;
LABEL_22:
  v14 = this->fields.performance;
  if ( !v14 )
    goto LABEL_27;
  Component_object = v14->fields.data;
  if ( !Component_object )
    goto LABEL_27;
  if ( *((_BYTE *)Component_object + 643) )
    return 0;
  return BattleData__IsHighSpeedOption((BattleData_o *)Component_object, 0LL);
}


void __fastcall BattleSequenceManager__init(
        BattleSequenceManager_o *this,
        BattlePerformance_o *performance,
        UnityEngine_GameObject_o *actor,
        UnityEngine_GameObject_array *players,
        UnityEngine_GameObject_array *enemies,
        UnityEngine_Camera_o *camera,
        UnityEngine_GameObject_o *bg,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x1
  System_Collections_Generic_Dictionary_object__int__o *v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Collections_Generic_HashSet_T__o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3

  if ( (byte_4A50DB8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, performance);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_string___ctor__, v16);
    sub_1B863B8(&System_Collections_Generic_HashSet_string__TypeInfo, v17);
    byte_4A50DB8 = 1;
  }
  this->fields.performance = performance;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.performance,
    (int32_t)performance,
    (int32_t)actor,
    (const MethodInfo *)players);
  this->fields.actor = actor;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.actor, (int32_t)actor, v18, v19);
  this->fields.playerActors = players;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playerActors, (int32_t)players, v20, v21);
  this->fields.enemyActors = enemies;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.enemyActors, (int32_t)enemies, v22, v23);
  this->fields.actorCamera = camera;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.actorCamera, (int32_t)camera, v24, v25);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.effectCamera, (int32_t)middleCamera, v28, v29);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cutInCamera, (int32_t)cutIncamera, v32, v33);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_1B86614(actorCamera, v27);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.originalCameraRoot, (int32_t)parent, v35, v36);
  this->fields.bgObject = bg;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bgObject, (int32_t)bg, v37, v38);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v39);
  v40 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v40,
    (const MethodInfo_32C4FFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v40;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v40, v41, v42);
  v43 = (System_Collections_Generic_HashSet_T__o *)sub_1B86604(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v43,
    (const MethodInfo_34BDC34 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v43;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v43, v44, v45);
}


bool __fastcall BattleSequenceManager__isFixedWithNoVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_String_o *fixedVoice; // x8

  fixedVoice = this->fields.fixedVoice;
  return fixedVoice && fixedVoice->fields._stringLength == 0;
}


bool __fastcall BattleSequenceManager__isNotPlaySoundLimitCount(
        BattleSequenceManager_o *this,
        System_Int32_array *limitCounts,
        const MethodInfo *method)
{
  if ( (byte_4A50DD2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, limitCounts);
    byte_4A50DD2 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_4A50DB5 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_2144/*"Actor"*/, name);
    sub_1B863B8(&StringLiteral_16539/*"animCamLoc"*/, v4);
    byte_4A50DB5 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2144/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16539/*"animCamLoc"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__loadSequence(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x20
  UnityEngine_GameObject_o *actor; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  AssetLoader_LoadEndDataHandler_o *v32; // x19

  if ( (byte_4A50DA7 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, *(_QWORD *)&chrId);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_1B863B8(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__, v19);
    sub_1B863B8(&BattleSequenceManager___c__DisplayClass75_0_TypeInfo, v20);
    sub_1B863B8(&StringLiteral_9361/*"NoblePhantasm/CutIns"*/, v21);
    byte_4A50DA7 = 1;
  }
  v22 = sub_1B86604(BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass75_0___ctor((BattleSequenceManager___c__DisplayClass75_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_10;
  *(_QWORD *)(v22 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v22 + 16), (int32_t)this, v25, v26);
  *(_QWORD *)(v22 + 56) = onComplete;
  *(_DWORD *)(v22 + 24) = chrId;
  *(_DWORD *)(v22 + 28) = limitCount;
  *(_DWORD *)(v22 + 32) = treasureDeviceId;
  *(_DWORD *)(v22 + 36) = treasureDeviceLv;
  *(_DWORD *)(v22 + 40) = npChargeStage;
  *(_DWORD *)(v22 + 44) = overwriteSvtVoiceId;
  sub_1B8635C((CGThumbnailListItem_o *)(v22 + 56), (int32_t)onComplete, v27, v28);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v22 + 24);
  this->fields.limitCount = *(_DWORD *)(v22 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v22 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v22 + 44);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v22 + 48) = Component_object;
  sub_1B8635C((CGThumbnailListItem_o *)(v22 + 48), (int32_t)Component_object, v30, v31);
  actor = *(UnityEngine_GameObject_o **)(v22 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v22 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v22 + 48)) == 0LL) )
  {
LABEL_10:
    sub_1B86614(actor, v24);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v22,
    Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9361/*"NoblePhantasm/CutIns"*/, v32, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__play(
        BattleSequenceManager_o *this,
        bool isOpponent,
        bool isDemoMode,
        System_Action_USSequencer__o *callback,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x8
  __int64 v33; // x0
  struct UnityEngine_GameObject_array **p_saveWaitPlayer; // x24
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct BattlePerformance_o *v37; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_Object_o *seqObject; // x23
  int32_t chrId; // w23
  struct BattlePerformance_o *v44; // x8
  struct BattlePerformance_o *v45; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w25
  char v48; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v50; // w25
  char v51; // w0
  System_Collections_Generic_List_bool__o *v52; // x25
  BattleSequenceManager_o **p_ActorActiveList; // x23
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct BattlePerformance_o *v56; // x8
  struct UnityEngine_GameObject_array *v57; // x29
  __int64 v58; // x8
  unsigned __int64 v59; // x20
  UnityEngine_Object_o *v60; // x25
  const MethodInfo *v61; // x2
  BattleServantData_o *enemyActors; // x26
  System_Collections_Generic_List_bool__o *v63; // x27
  struct System_Boolean_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct UnityEngine_GameObject_array *v72; // x8
  __int64 v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct BattlePerformance_o *v76; // x8
  struct UnityEngine_GameObject_array *v77; // x8
  __int64 v78; // x0
  struct BattlePerformance_o *v79; // x8
  struct UnityEngine_GameObject_array *v80; // x27
  __int64 v81; // x8
  unsigned __int64 v82; // x20
  UnityEngine_Object_o *v83; // x24
  const MethodInfo *v84; // x2
  BattleServantData_o *v85; // x25
  System_Collections_Generic_List_bool__o *v86; // x26
  struct System_Boolean_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  struct UnityEngine_GameObject_array *v95; // x8
  __int64 v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct BattlePerformance_o *v99; // x8
  struct UnityEngine_GameObject_array *v100; // x8
  __int64 v101; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  BattleSequenceManager_o *v105; // x22
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  BattleSequenceManager_o *v111; // x23
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  BattleSequenceManager_c *v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  BattleSequenceManager_o *v120; // x23
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  BattleSequenceManager_o *v128; // x23
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  System_Collections_Hashtable_o *v133; // x0
  System_String_o *BgmName; // x0
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  const MethodInfo *v137; // x2
  BattleSequenceManager_o *v138; // x21
  CGThumbnailListItem_o *p_actorCamera; // x22
  System_Delegate_o *v140; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v141; // x24
  System_Delegate_o *v142; // x0
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  System_Delegate_o *v145; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v146; // x1
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  const MethodInfo *v149; // x2
  __int64 v150; // x0
  System_Action_USSequencer__o *v151; // [xsp+8h] [xbp-88h]
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // [xsp+18h] [xbp-78h]
  int v153; // [xsp+24h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-68h] BYREF
  int v155; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4A50DBA & 1) == 0 )
  {
    sub_1B863B8(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__, isOpponent);
    sub_1B863B8(&BattleSequenceManager_TypeInfo, v8);
    sub_1B863B8(&CommonUI_TypeInfo, v9);
    sub_1B863B8(&FSUtility_TypeInfo, v10);
    sub_1B863B8(&UnityEngine_GameObject___TypeInfo, v11);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v13);
    sub_1B863B8(&int_TypeInfo, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_bool__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_1B863B8(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_1B863B8(&object___TypeInfo, v18);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B863B8(&WellFired_USSequencer_PlaybackDelegate_TypeInfo, v20);
    sub_1B863B8(&float_TypeInfo, v21);
    sub_1B863B8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v22);
    sub_1B863B8(&StringLiteral_12642/*"ShowNobleInfo"*/, v23);
    sub_1B863B8(&StringLiteral_19437/*"from"*/, v24);
    sub_1B863B8(&StringLiteral_9685/*"OnChangeBgmVolume"*/, v25);
    sub_1B863B8(&StringLiteral_23770/*"time"*/, v26);
    sub_1B863B8(&StringLiteral_22117/*"onupdate"*/, v27);
    sub_1B863B8(&StringLiteral_3134/*"Battle2D"*/, v28);
    sub_1B863B8(&StringLiteral_23809/*"to"*/, v29);
    this = (BattleSequenceManager_o *)sub_1B863B8(&iTween_TypeInfo, v30);
    byte_4A50DBA = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_142;
  p_actorlist = performance->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_142;
  v33 = sub_1B86460(UnityEngine_GameObject___TypeInfo, p_actorlist->max_length);
  p_saveWaitPlayer = &v7->fields.saveWaitPlayer;
  v7->fields.saveWaitPlayer = (struct UnityEngine_GameObject_array *)v33;
  sub_1B8635C((CGThumbnailListItem_o *)&v7->fields.saveWaitPlayer, v33, v35, v36);
  v37 = v7->fields.performance;
  if ( !v37 )
    goto LABEL_142;
  e_actorlist = v37->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_142;
  v39 = sub_1B86460(UnityEngine_GameObject___TypeInfo, e_actorlist->max_length);
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v39;
  sub_1B8635C((CGThumbnailListItem_o *)&v7->fields.saveWaitEnemy, v39, v40, v41);
  seqObject = (UnityEngine_Object_o *)v7->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    chrId = v7->fields.chrId;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, 0LL);
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
        CommonUI__SetForceObi_16_9(1, 0LL);
      }
    }
    if ( !isDemoMode )
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)v7,
        (System_String_o *)StringLiteral_12642/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v44 = v7->fields.performance;
    if ( !v44 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v44->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v45 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v45 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v45->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_142;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v48 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3134/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v48), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_142;
    v50 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v51 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3134/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v51) | v50, 0LL);
    v52 = (System_Collections_Generic_List_bool__o *)sub_1B86604(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v52,
      (const MethodInfo_35B5D14 *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v52;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1B8635C((CGThumbnailListItem_o *)&v7->fields.ActorActiveList, (int32_t)v52, v54, v55);
    v56 = v7->fields.performance;
    if ( !v56 )
      goto LABEL_142;
    v57 = v56->fields.p_actorlist;
    v151 = callback;
    if ( !v57 )
      goto LABEL_142;
    v58 = *(_QWORD *)&v57->max_length;
    if ( (int)v58 >= 1 )
    {
      v59 = 0LL;
      while ( v59 < (unsigned int)v58 )
      {
        v60 = (UnityEngine_Object_o *)v57->m_Items[v59];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v60 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v60,
                                              (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          enemyActors = (BattleServantData_o *)this[1].fields.enemyActors;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v61);
          v63 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v60, 0LL);
          if ( !v63 )
            goto LABEL_142;
          items = v63->fields._items;
          v65 = Method_System_Collections_Generic_List_bool__Add__;
          ++v63->fields._version;
          if ( !items )
            goto LABEL_142;
          size = v63->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v63,
              (unsigned __int8)this & 1,
              *(const MethodInfo_35B6578 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            v63->fields._size = size + 1;
            items->m_Items[size + 4] = (unsigned __int8)this & 1;
          }
          if ( !enemyActors )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(enemyActors, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 || enemyActors->fields.isAnimPlayedWithdraw )
          {
            v72 = *p_saveWaitPlayer;
            if ( !*p_saveWaitPlayer )
              goto LABEL_142;
            if ( v59 >= v72->max_length )
              break;
            v73 = (__int64)v72 + 8 * v59;
            *(_QWORD *)(v73 + 32) = v60;
            sub_1B8635C((CGThumbnailListItem_o *)(v73 + 32), (int32_t)v60, v70, v71);
            v76 = v7->fields.performance;
            if ( !v76 )
              goto LABEL_142;
            v77 = v76->fields.p_actorlist;
            if ( !v77 )
              goto LABEL_142;
            if ( v59 >= v77->max_length )
              break;
            v78 = (__int64)v77 + 8 * v59;
            *(_QWORD *)(v78 + 32) = 0LL;
            sub_1B8635C((CGThumbnailListItem_o *)(v78 + 32), 0, v74, v75);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v60, 0, 0LL);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v67 = *(_QWORD *)&this->fields.m_CachedPtr;
          v68 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v67 )
            goto LABEL_142;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v67 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_35B6578 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(v67 + m_CancellationTokenSource_low + 32) = 0;
          }
        }
        LODWORD(v58) = v57->max_length;
        if ( (__int64)++v59 >= (int)v58 )
          goto LABEL_57;
      }
LABEL_143:
      sub_1B8661C(this, isOpponent);
    }
LABEL_57:
    v79 = v7->fields.performance;
    if ( !v79 )
      goto LABEL_142;
    v80 = v79->fields.e_actorlist;
    p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
    if ( !v80 )
      goto LABEL_142;
    v81 = *(_QWORD *)&v80->max_length;
    if ( (int)v81 >= 1 )
    {
      v82 = 0LL;
      while ( v82 < (unsigned int)v81 )
      {
        v83 = (UnityEngine_Object_o *)v80->m_Items[v82];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v83 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v83,
                                              (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v85 = (BattleServantData_o *)this[1].fields.enemyActors;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v84);
          v86 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v83, 0LL);
          if ( !v86 )
            goto LABEL_142;
          v87 = v86->fields._items;
          v88 = Method_System_Collections_Generic_List_bool__Add__;
          ++v86->fields._version;
          if ( !v87 )
            goto LABEL_142;
          v89 = v86->fields._size;
          if ( (unsigned int)v89 >= v87->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v86,
              (unsigned __int8)this & 1,
              *(const MethodInfo_35B6578 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v86->fields._size = v89 + 1;
            v87->m_Items[v89 + 4] = (unsigned __int8)this & 1;
          }
          if ( !v85 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v85, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 || v85->fields.isAnimPlayedWithdraw )
          {
            v95 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_142;
            if ( v82 >= v95->max_length )
              goto LABEL_143;
            v96 = (__int64)v95 + 8 * v82;
            *(_QWORD *)(v96 + 32) = v83;
            sub_1B8635C((CGThumbnailListItem_o *)(v96 + 32), (int32_t)v83, v93, v94);
            v99 = v7->fields.performance;
            if ( !v99 )
              goto LABEL_142;
            v100 = v99->fields.e_actorlist;
            if ( !v100 )
              goto LABEL_142;
            if ( v82 >= v100->max_length )
              goto LABEL_143;
            v101 = (__int64)v100 + 8 * v82;
            *(_QWORD *)(v101 + 32) = 0LL;
            sub_1B8635C((CGThumbnailListItem_o *)(v101 + 32), 0, v97, v98);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v83, 0, 0LL);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v90 = *(_QWORD *)&this->fields.m_CachedPtr;
          v91 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v90 )
            goto LABEL_142;
          v92 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_35B6578 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = v92 + 1;
            *(_BYTE *)(v90 + v92 + 32) = 0;
          }
        }
        LODWORD(v81) = v80->max_length;
        if ( (__int64)++v82 >= (int)v81 )
          goto LABEL_87;
      }
      goto LABEL_143;
    }
LABEL_87:
    if ( !isDemoMode )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_1B86460(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_142;
    v105 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19437/*"from"*/;
    if ( StringLiteral_19437/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1B864F4(StringLiteral_19437/*"from"*/, v105->klass->_1.element_class);
      if ( !this )
        goto LABEL_144;
      *(_QWORD *)&isOpponent = StringLiteral_19437/*"from"*/;
    }
    else
    {
      *(_QWORD *)&isOpponent = 0LL;
    }
    if ( !LODWORD(v105->fields.m_CancellationTokenSource) )
      goto LABEL_143;
    v105->fields.sequenceManager = (struct UnityEngine_GameObject_o *)isOpponent;
    sub_1B8635C((CGThumbnailListItem_o *)&v105->fields.sequenceManager, isOpponent, v103, v104);
    v155 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v155, v106, v107, v108);
    v111 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1B864F4(this, v105->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v105->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_143;
      *(_QWORD *)&v105->fields.servantId = v111;
      sub_1B8635C((CGThumbnailListItem_o *)&v105->fields.servantId, (int32_t)v111, v109, v110);
      this = (BattleSequenceManager_o *)StringLiteral_23809/*"to"*/;
      if ( StringLiteral_23809/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1B864F4(StringLiteral_23809/*"to"*/, v105->klass->_1.element_class);
        if ( !this )
          goto LABEL_144;
        *(_QWORD *)&isOpponent = StringLiteral_23809/*"to"*/;
      }
      else
      {
        *(_QWORD *)&isOpponent = 0LL;
      }
      if ( LODWORD(v105->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_143;
      *(_QWORD *)&v105->fields.testNpPer = isOpponent;
      sub_1B8635C((CGThumbnailListItem_o *)&v105->fields.testNpPer, isOpponent, v112, v113);
      v117 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v117 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v117->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(
                                          float_TypeInfo,
                                          &NoblePhantasmBgmVolumeRate,
                                          v114,
                                          v115,
                                          v116);
      v120 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1B864F4(this, v105->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v105->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_143;
        v105->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v120;
        sub_1B8635C((CGThumbnailListItem_o *)&v105->fields.ReleaseSoundNames, (int32_t)v120, v118, v119);
        this = (BattleSequenceManager_o *)StringLiteral_23770/*"time"*/;
        if ( StringLiteral_23770/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1B864F4(StringLiteral_23770/*"time"*/, v105->klass->_1.element_class);
          if ( !this )
            goto LABEL_144;
          *(_QWORD *)&isOpponent = StringLiteral_23770/*"time"*/;
        }
        else
        {
          *(_QWORD *)&isOpponent = 0LL;
        }
        if ( LODWORD(v105->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_143;
        v105->fields.performance = (struct BattlePerformance_o *)isOpponent;
        sub_1B8635C((CGThumbnailListItem_o *)&v105->fields.performance, isOpponent, v121, v122);
        v153 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v153, v123, v124, v125);
        v128 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1B864F4(this, v105->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v105->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_143;
          v105->fields.seqObject = (struct UnityEngine_GameObject_o *)v128;
          sub_1B8635C((CGThumbnailListItem_o *)&v105->fields.seqObject, (int32_t)v128, v126, v127);
          this = (BattleSequenceManager_o *)StringLiteral_22117/*"onupdate"*/;
          if ( StringLiteral_22117/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1B864F4(StringLiteral_22117/*"onupdate"*/, v105->klass->_1.element_class);
            if ( !this )
              goto LABEL_144;
            *(_QWORD *)&isOpponent = StringLiteral_22117/*"onupdate"*/;
          }
          else
          {
            *(_QWORD *)&isOpponent = 0LL;
          }
          if ( LODWORD(v105->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_143;
          v105->fields.actor = (struct UnityEngine_GameObject_o *)isOpponent;
          sub_1B8635C((CGThumbnailListItem_o *)&v105->fields.actor, isOpponent, v129, v130);
          this = (BattleSequenceManager_o *)StringLiteral_9685/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9685/*"OnChangeBgmVolume"*/ )
          {
            *(_QWORD *)&isOpponent = 0LL;
LABEL_125:
            if ( LODWORD(v105->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_143;
            v105->fields.CutInRoot = (struct UnityEngine_GameObject_o *)isOpponent;
            sub_1B8635C((CGThumbnailListItem_o *)&v105->fields.CutInRoot, isOpponent, v131, v132);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v133 = iTween__Hash((System_Object_array *)v105, 0LL);
            iTween__ValueTo(gameObject, v133, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              v7->fields.BackupBgmName = BgmName;
              sub_1B8635C((CGThumbnailListItem_o *)&v7->fields.BackupBgmName, (int32_t)BgmName, v135, v136);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v137);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v138 = this;
                    p_actorCamera = (CGThumbnailListItem_o *)&this->fields.actorCamera;
                    v140 = (System_Delegate_o *)this->fields.actorCamera;
                    v141 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1B86604(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v141,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v142 = System_Delegate__Combine(v140, (System_Delegate_o *)v141, 0LL);
                    v145 = v142;
                    if ( v142 )
                    {
                      v146 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v142->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_actorCamera->klass = (CGThumbnailListItem_c *)v142;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v142->klass == v146 )
                          goto LABEL_137;
                      }
                      sub_1B868D4(v142);
                    }
                    p_actorCamera->klass = (CGThumbnailListItem_c *)v145;
LABEL_137:
                    sub_1B8635C(p_actorCamera, (int32_t)v145, v143, v144);
                    v7->fields.OnCompleteActorCallback = v151;
                    sub_1B8635C((CGThumbnailListItem_o *)&v7->fields.OnCompleteActorCallback, (int32_t)v151, v147, v148);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v138, 0LL);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                    if ( CommonUI__GetForceObi_16_9(0LL) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v149);
                    return;
                  }
                }
              }
            }
LABEL_142:
            sub_1B86614(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_1B864F4(StringLiteral_9685/*"OnChangeBgmVolume"*/, v105->klass->_1.element_class);
          if ( this )
          {
            *(_QWORD *)&isOpponent = StringLiteral_9685/*"OnChangeBgmVolume"*/;
            goto LABEL_125;
          }
        }
      }
    }
LABEL_144:
    v150 = sub_1B86638(this);
    sub_1B864E0(v150, 0LL);
  }
}


void __fastcall BattleSequenceManager__registNobleVoiceRandomPlay(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x20
  Il2CppClass *klass; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v11; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v13; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v15; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  VoiceMaster_o *v19; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v22; // x4
  __int64 v23; // x8
  unsigned __int64 v24; // x22

  if ( (byte_4A50DD3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B863B8(&Voice_TypeInfo, v6);
    byte_4A50DD3 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_31;
    if ( LOBYTE(Component_object[33].monitor) )
      return;
    klass = Component_object[32].klass;
    if ( !klass )
      goto LABEL_31;
    if ( !HIDWORD(klass->vtable[2].methodPtr)
      && !BattleActorControl__isNoVoice((BattleActorControl_o *)Component_object, 0LL) )
    {
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)actor & 1) != 0 )
      {
        v11 = this->fields.performance;
        if ( !v11 )
          goto LABEL_31;
        data = (UnityEngine_Object_o *)v11->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v13);
          if ( PlayedSoundList )
          {
            v15 = PlayedSoundList;
            if ( *(_QWORD *)&PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_VoiceMaster___);
                v19 = (VoiceMaster_o *)MasterData_object;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( !Voice_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v19, chrId, FileName, v22);
                }
                v23 = *(_QWORD *)&v15->max_length;
                if ( (int)v23 >= 1 )
                {
                  v24 = 0LL;
                  do
                  {
                    if ( v24 >= (unsigned int)v23 )
                      sub_1B8661C(MasterData_object, v17);
                    BattleSequenceManager__addServantVoicePlayed(this, v19, this->fields.chrId, v15->m_Items[v24], v18);
                    LODWORD(v23) = v15->max_length;
                    ++v24;
                  }
                  while ( (__int64)v24 < (int)v23 );
                }
                return;
              }
LABEL_31:
              sub_1B86614(actor, method);
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleSequenceManager__removeServantVoicePlayed(
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

  if ( (byte_4A50DB2 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15886/*"_"*/, voiceMaster);
    byte_4A50DB2 = 1;
  }
  FlagRequestNumber = System_String__Concat_61645176((System_String_o *)StringLiteral_15886/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__removeServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B86614(FlagRequestNumber, v10);
  }
}


void __fastcall BattleSequenceManager__restoreBattleActorTransform(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A50DCE & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v3);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v6);
    byte_4A50DCE = 1;
  }
  memset(&v12, 0, sizeof(v12));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    battleTargetList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B86614(0LL, v8);
    BattleSequenceManager_BattleTarget__restoreTransform(
      (BattleSequenceManager_BattleTarget_o *)v12.fields._current,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v9 = this->fields.battleTargetList;
  if ( !v9 )
LABEL_13:
    sub_1B86614(battleTargetList, method);
  size = v9->fields._size;
  v11 = v9->fields._version + 1;
  v9->fields._size = 0;
  v9->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0LL);
}


WellFired_USTimelineContainer_o *__fastcall BattleSequenceManager__searchTimeline(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  Il2CppObject *Component_object; // x0
  __int64 v26; // x1
  WellFired_USTimelineContainer_o *v27; // x21
  System_String_o *monitor; // x22
  System_String_o *v29; // x1
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x19
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0

  if ( (byte_4A50DB7 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, seq);
    sub_1B863B8(&System_IDisposable_TypeInfo, v6);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B863B8(&UnityEngine_Transform_TypeInfo, v8);
    this = (BattleSequenceManager_o *)sub_1B863B8(&StringLiteral_1058/*"/"*/, v9);
    byte_4A50DB7 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_1B86614(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1B86614(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_17:
      v19 = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1B86614(0LL, v21);
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B868D4(v20);
LABEL_37:
      sub_1B86614(Component_object, v26);
    }
    gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !gameObject )
      sub_1B86614(0LL, v24);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v27 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v29 = System_String__Concat_61645176((System_String_o *)StringLiteral_1058/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(monitor, v29, 0LL) )
      goto LABEL_27;
  }
  v27 = 0LL;
LABEL_27:
  v30 = sub_1B864F4(Enumerator, System_IDisposable_TypeInfo);
  if ( v30 )
  {
    v31 = *(_QWORD *)v30;
    v32 = v30;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_32;
      }
      v35 = v31 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_32:
      v35 = sub_1BD6B4C(v30, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  }
  return v27;
}


void __fastcall BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4A50DD0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, groupName);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_string__Add__, v9);
    byte_4A50DD0 = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_32C599C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1B86614(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


void __fastcall BattleSequenceManager__set_NowTargetAlpha(
        BattleSequenceManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields.nowTargetAlpha = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__setup(
        BattleSequenceManager_o *this,
        System_Action_o *callback,
        bool isDemoMode,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 seqObject; // x0
  Il2CppObject *Component_object; // x28
  const MethodInfo *v89; // x3
  UnityEngine_Object_o *v90; // x19
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__49697072; // x0
  BattleSequenceManager___c_c *v92; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x19
  System_Func_object__bool__o *_9__88_0; // x21
  Il2CppObject *v95; // x22
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  System_Collections_Generic_IEnumerable_T__o *v99; // x20
  System_Action_object__o *v100; // x21
  BattleSequenceManager_o *v101; // x0
  const MethodInfo *v102; // x3
  WellFired_USTimelineContainer_o *v103; // x26
  System_Collections_Generic_List_object__o *v104; // x21
  System_Collections_Generic_List_object__o *v105; // x29
  Il2CppObject *klass; // x27
  System_Collections_Generic_List_object__o *monitor; // x27
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  struct System_Object_array *items; // x8
  _QWORD *v111; // x9
  __int64 size; // x10
  __int64 v113; // x1
  Il2CppClass **v114; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  Il2CppClass *v117; // x1
  __int64 v118; // x27
  void *v119; // x1
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  Il2CppClass *v122; // x1
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  Il2CppClass *v127; // x8
  const MethodInfo *v128; // x1
  __int64 v129; // x1
  Il2CppObject *v130; // x28
  struct UnityEngine_Vector3_StaticFields *v131; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v135; // x0
  CGThumbnailListItem_o *v136; // x27
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  const MethodInfo *v139; // x1
  const MethodInfo *v140; // x2
  int v141; // w8
  __int64 v142; // x20
  int v143; // w22
  UnityEngine_Object_o *v144; // x26
  __int64 v145; // x8
  __int64 v146; // x27
  unsigned __int64 v147; // x20
  __int64 v148; // x28
  System_String_o *name; // x0
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  int32_t klass_high; // w26
  int32_t monitor_high; // w29
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x26
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  System_Collections_Generic_List_object__o *v157; // x8
  struct System_Object_array *v158; // x9
  _QWORD *v159; // x10
  __int64 v160; // x11
  Il2CppClass **v161; // x0
  System_String_o *v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  __int64 v165; // x10
  System_String_o *v166; // x0
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  __int64 v169; // x9
  Il2CppClass *v170; // x1
  UnityEngine_Transform_o *parent; // x0
  CGThumbnailListItem_o *v172; // x0
  System_String_o *v173; // x0
  __int64 v174; // x9
  System_String_o **v175; // x29
  System_String_o *v176; // x0
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  System_String_o *v179; // x0
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  Il2CppClass *v182; // x1
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  struct System_Object_array *v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  Il2CppClass **v188; // x0
  __int64 methodPtr_low; // x9
  Il2CppClass *v190; // x1
  __int64 v191; // x28
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  UnityEngine_Transform_o *v194; // x28
  int v195; // s0
  System_Collections_Generic_List_object__o *v198; // x25
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  struct System_Object_array *v201; // x8
  _QWORD *v202; // x9
  __int64 v203; // x10
  Il2CppClass **v204; // x0
  BattleSequenceManager_o *v205; // x0
  const MethodInfo *v206; // x3
  int32_t v207; // w2
  const MethodInfo *v208; // x3
  struct System_Object_array *v209; // x8
  _QWORD *v210; // x9
  __int64 v211; // x10
  __int64 v212; // x1
  Il2CppClass **v213; // x0
  Il2CppObject *current; // x24
  _BOOL8 v215; // x0
  __int64 v216; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v218; // x1
  void *v219; // x24
  int v220; // w8
  int i; // w27
  WellFired_USTimelineEvent_o *v222; // x0
  _QWORD *v223; // x25
  __int64 v224; // x8
  unsigned __int64 v225; // x28
  __int64 v226; // x26
  System_String_o *v227; // x0
  __int64 v228; // x9
  _BOOL8 v229; // x0
  __int64 v230; // x1
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  UnityEngine_Component_o *v233; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v235; // w2
  const MethodInfo *v236; // x3
  struct System_Object_array *v237; // x8
  _QWORD *v238; // x9
  __int64 v239; // x10
  Il2CppClass **v240; // x0
  __int64 v241; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  int v243; // w19
  System_Collections_IEnumerator_c *v244; // x8
  __int64 v245; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v248; // x8
  __int64 v249; // x9
  System_Collections_IEnumerator_c **v250; // x10
  __int64 v251; // x0
  UnityEngine_Component_o *v252; // x0
  __int64 v253; // x1
  __int64 v254; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v256; // x1
  Il2CppObject *v257; // x0
  __int64 v258; // x1
  Il2CppObject *v259; // x25
  System_String_o *v260; // x0
  __int64 v261; // x1
  System_String_o *v262; // x0
  __int64 v263; // x1
  System_String_o *v264; // x0
  System_String_o *v265; // x0
  __int64 v266; // x0
  __int64 v267; // x8
  __int64 v268; // x24
  __int64 v269; // x9
  int *v270; // x10
  __int64 v271; // x0
  __int64 v272; // x1
  System_Collections_IEnumerator_c *v273; // x8
  __int64 v274; // x9
  int32_t *v275; // x10
  __int64 v276; // x0
  System_Collections_IEnumerator_c *v277; // x8
  __int64 v278; // x9
  System_Collections_IEnumerator_c **v279; // x10
  __int64 v280; // x0
  UnityEngine_Component_o *v281; // x0
  __int64 v282; // x1
  __int64 v283; // x9
  UnityEngine_GameObject_o *v284; // x0
  __int64 v285; // x1
  Il2CppObject *v286; // x0
  __int64 v287; // x1
  WellFired_USTimelineContainer_o *v288; // x24
  System_String_o *v289; // x0
  __int64 v290; // x1
  bool v291; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v293; // x27
  System_String_o *v294; // x0
  __int64 v295; // x1
  bool v296; // w28
  System_String_o *v297; // x0
  System_String_o *v298; // x0
  __int64 v299; // x1
  System_String_o *v300; // x0
  UnityEngine_Component_o *v301; // x0
  UnityEngine_Transform_o *v302; // x0
  System_String_o *v303; // x0
  __int64 v304; // x1
  UnityEngine_GameObject_o *v305; // x0
  __int64 v306; // x1
  UnityEngine_Transform_o *v307; // x25
  System_String_o *v308; // x0
  System_String_o *v309; // x0
  UnityEngine_Transform_o *v310; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v312; // x1
  System_String_o *v313; // x0
  bool v314; // w0
  __int64 v315; // x1
  __int64 *v316; // x8
  System_String_o *v317; // x0
  bool v318; // w0
  System_String_o *v319; // x28
  UnityEngine_GameObject_o *v320; // x0
  System_String_o *v321; // x27
  UnityEngine_Transform_o *v322; // x0
  __int64 v323; // x1
  UnityEngine_Object_o *v324; // x25
  _BOOL8 v325; // x0
  __int64 v326; // x1
  __int64 v327; // x1
  System_Collections_IEnumerator_o *v328; // x26
  System_Collections_IEnumerator_c *v329; // x8
  __int64 v330; // x9
  int32_t *v331; // x10
  __int64 v332; // x0
  System_Collections_IEnumerator_c *v333; // x8
  __int64 v334; // x9
  System_Collections_IEnumerator_c **v335; // x10
  __int64 v336; // x0
  UnityEngine_Component_o *v337; // x0
  __int64 v338; // x1
  UnityEngine_Object_o *v339; // x25
  __int64 v340; // x9
  UnityEngine_Object_o *v341; // x0
  __int64 v342; // x1
  System_String_o *v343; // x0
  __int64 v344; // x1
  System_String_o *v345; // x0
  _BOOL8 v346; // x0
  const MethodInfo *v347; // x2
  __int64 v348; // x1
  __int64 v349; // x1
  int32_t v350; // w25
  System_String_o *v351; // x26
  __int64 v352; // x0
  __int64 v353; // x25
  __int64 v354; // x8
  __int64 v355; // x9
  int *v356; // x10
  __int64 v357; // x0
  System_String_o *v358; // x25
  System_String_o *v359; // x0
  __int64 v360; // x1
  System_String_o *v361; // x0
  __int64 v362; // x1
  System_String_array *v363; // x0
  __int64 v364; // x1
  __int64 v365; // x1
  System_String_o *v366; // x26
  UnityEngine_GameObject_o *v367; // x0
  __int64 v368; // x1
  UnityEngine_Transform_o *v369; // x25
  System_String_o *v370; // x0
  System_String_o *v371; // x0
  __int64 v372; // x1
  System_String_o *v373; // x0
  UnityEngine_Transform_o *v374; // x0
  Il2CppObject *v375; // x25
  System_Collections_Generic_List_object__o *v376; // x0
  _BOOL8 v377; // x0
  __int64 v378; // x1
  System_String_o *v379; // x0
  __int64 v380; // x1
  System_String_o *v381; // x1
  const MethodInfo *v382; // x3
  __int64 v383; // x1
  int32_t v384; // w2
  const MethodInfo *v385; // x3
  System_Collections_Generic_List_object__o *v386; // x0
  struct System_Object_array *v387; // x8
  _QWORD *v388; // x9
  __int64 v389; // x10
  Il2CppClass **v390; // x8
  __int64 v391; // x0
  __int64 v392; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v394; // x1
  UnityEngine_Transform_o *v395; // x0
  UnityEngine_Transform_o *v396; // x0
  __int64 v397; // x1
  float v398; // s8
  float v399; // s9
  float v400; // s10
  __int64 v401; // x1
  UnityEngine_Transform_o *v402; // x26
  UnityEngine_GameObject_o *v403; // x0
  UnityEngine_Transform_o *v404; // x0
  UnityEngine_Transform_o *v405; // x0
  __int64 v406; // x1
  BattleSequenceManager_o *v407; // x0
  const MethodInfo *v408; // x4
  int32_t v409; // w26
  UnityEngine_Transform_o *v410; // x0
  __int64 v411; // x1
  UnityEngine_Transform_o *v412; // x0
  System_String_o *v413; // x0
  __int64 v414; // x1
  System_String_o *v415; // x0
  System_String_o *v416; // x0
  const MethodInfo *v417; // x3
  int32_t v418; // w2
  const MethodInfo *v419; // x3
  System_Object_array *EventCount; // x0
  __int64 v421; // x1
  System_Object_array *v422; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v425; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v427; // x0
  __int64 v428; // x1
  Il2CppObject *v429; // x27
  System_String_o *v430; // x0
  __int64 v431; // x9
  _BOOL8 v432; // x0
  __int64 v433; // x1
  int32_t v434; // w2
  const MethodInfo *v435; // x3
  UnityEngine_Component_o *v436; // x0
  UnityEngine_Transform_o *v437; // x0
  int32_t v438; // w2
  const MethodInfo *v439; // x3
  struct System_Object_array *v440; // x8
  _QWORD *v441; // x9
  __int64 v442; // x10
  Il2CppClass **v443; // x0
  int32_t layer; // w26
  __int64 v445; // x22
  __int64 v446; // x8
  __int64 v447; // x20
  __int64 v448; // x9
  int *v449; // x10
  __int64 v450; // x0
  __int64 v451; // x1
  Il2CppClass *v452; // x8
  UnityEngine_Object_o *v453; // x21
  Il2CppClass *v454; // x8
  UnityEngine_Object_o *v455; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t v457; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v459; // x4
  int32_t v460; // w22
  System_String_o *v461; // x0
  const MethodInfo *v462; // x4
  Il2CppClass *v463; // x8
  int v464; // w20
  BalanceConfig_c *v465; // x0
  int32_t v466; // w20
  System_String_o *v467; // x0
  const MethodInfo *v468; // x4
  __int64 v469; // x0
  __int64 v470; // x22
  __int64 v471; // x8
  __int64 v472; // x9
  int *v473; // x10
  __int64 v474; // x0
  int v475; // w1
  int v476; // w19
  void *v477; // x0
  void *v478; // x25
  __int64 v479; // x0
  __int64 v480; // x19
  __int64 v481; // x8
  __int64 v482; // x9
  int *v483; // x10
  __int64 v484; // x0
  System_String_o *v485; // [xsp+8h] [xbp-138h]
  System_String_o *v486; // [xsp+10h] [xbp-130h]
  Il2CppObject *v487; // [xsp+18h] [xbp-128h]
  Il2CppObject *item; // [xsp+20h] [xbp-120h]
  UnityEngine_Component_o *v489; // [xsp+28h] [xbp-118h]
  char v490; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs; // [xsp+30h] [xbp-110h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evsa; // [xsp+30h] [xbp-110h]
  bool v493; // [xsp+38h] [xbp-108h]
  __int64 v494; // [xsp+38h] [xbp-108h]
  System_Collections_IEnumerator_o *v495; // [xsp+38h] [xbp-108h]
  Il2CppObject *object; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v497; // [xsp+48h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+60h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+7Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v500; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v501; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v503; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v505; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A50DB0 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo, callback);
    sub_1B863B8(&BalanceConfig_TypeInfo, v7);
    sub_1B863B8(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___, v8);
    sub_1B863B8(&Method_BattleSequenceManager__setup_b__88_1__, v9);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___, v10);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___, v11);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___, v12);
    sub_1B863B8(&Method_DataManager_GetMasterData_VoiceMaster___, v13);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__, v23);
    sub_1B863B8(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo, v24);
    sub_1B863B8(&System_GC_TypeInfo, v25);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v26);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v27);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, v28);
    sub_1B863B8(&System_IDisposable_TypeInfo, v29);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v30);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Add__, v31);
    sub_1B863B8(&Method_System_Collections_Generic_List_USTimelineContainer__Add__, v32);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__, v33);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__, v34);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__, v35);
    sub_1B863B8(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__, v36);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v37);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__, v38);
    sub_1B863B8(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__, v39);
    sub_1B863B8(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__, v40);
    sub_1B863B8(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo, v41);
    sub_1B863B8(&System_Collections_Generic_List_USTimelineContainer__TypeInfo, v42);
    sub_1B863B8(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo, v43);
    sub_1B863B8(&NGUITools_TypeInfo, v44);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v45);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169448, v46);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v47);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v48);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49);
    sub_1B863B8(&UnityEngine_Transform_TypeInfo, v50);
    sub_1B863B8(&Method_BattleSequenceManager___c__setup_b__88_0__, v51);
    sub_1B863B8(&BattleSequenceManager___c_TypeInfo, v52);
    sub_1B863B8(&WellFired_USFGOAnimationCameraEvent_TypeInfo, v53);
    sub_1B863B8(&WellFired_USFGOAttachToParentEvent_TypeInfo, v54);
    sub_1B863B8(&WellFired_USFGOChangeBgEvent_TypeInfo, v55);
    sub_1B863B8(&WellFired_USFGOPlayCutInEvent_TypeInfo, v56);
    sub_1B863B8(&WellFired_USFGOSetCameraEvent_TypeInfo, v57);
    sub_1B863B8(&Voice_TypeInfo, v58);
    sub_1B863B8(&StringLiteral_1066/*"/Actor/chr/"*/, v59);
    sub_1B863B8(&StringLiteral_3136/*"BattleBG"*/, v60);
    sub_1B863B8(&StringLiteral_1076/*"/BattleActors/"*/, v61);
    sub_1B863B8(&StringLiteral_3138/*"BattleCamera"*/, v62);
    sub_1B863B8(&StringLiteral_3142/*"BattleCutIn"*/, v63);
    sub_1B863B8(&StringLiteral_14643/*"USFGOSetCameraEvent"*/, v64);
    sub_1B863B8(&StringLiteral_2144/*"Actor"*/, v65);
    sub_1B863B8(&StringLiteral_17114/*"body_level_"*/, v66);
    sub_1B863B8(&StringLiteral_1068/*"/Actor/chr/weapon_level_"*/, v67);
    sub_1B863B8(&StringLiteral_1067/*"/Actor/chr/body_level_"*/, v68);
    sub_1B863B8(&StringLiteral_6338/*"FGOSequenceManager"*/, v69);
    sub_1B863B8(&StringLiteral_1070/*"/AllEffects/"*/, v70);
    sub_1B863B8(&StringLiteral_17731/*"chr(Clone)"*/, v71);
    sub_1B863B8(&StringLiteral_3954/*"Cameras/BattleCamera"*/, v72);
    sub_1B863B8(&StringLiteral_14641/*"USFGOChangeBgEvent"*/, v73);
    sub_1B863B8(&StringLiteral_1088/*"/BattleCamera"*/, v74);
    sub_1B863B8(&StringLiteral_1091/*"/CutIns/"*/, v75);
    sub_1B863B8(&StringLiteral_3134/*"Battle2D"*/, v76);
    sub_1B863B8(&StringLiteral_1090/*"/Cameras/BattleCamera"*/, v77);
    sub_1B863B8(&StringLiteral_16539/*"animCamLoc"*/, v78);
    sub_1B863B8(&StringLiteral_24511/*"weapon_level_"*/, v79);
    sub_1B863B8(&StringLiteral_684/*"(Clone)"*/, v80);
    sub_1B863B8(&StringLiteral_14640/*"USFGOAttachToParentEvent"*/, v81);
    sub_1B863B8(&StringLiteral_1/*""*/, v82);
    sub_1B863B8(&StringLiteral_1065/*"/Actor/chr"*/, v83);
    sub_1B863B8(&StringLiteral_14639/*"USFGOAnimationCameraEvent"*/, v84);
    sub_1B863B8(&StringLiteral_1139/*"0"*/, v85);
    sub_1B863B8(&StringLiteral_14642/*"USFGOPlayCutInEvent"*/, v86);
    byte_4A50DB0 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v501, 0, sizeof(v501));
  memset(&v500, 0, sizeof(v500));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  object = (Il2CppObject *)this;
  if ( !seqObject )
    goto LABEL_418;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v90 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  (BattleSequenceManager_o *)Component_object,
                                  (WellFired_USSequencer_o *)Component_object,
                                  (System_String_o *)StringLiteral_2144/*"Actor"*/,
                                  v89);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v90, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    seqObject = (__int64)object[5].klass;
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v90 )
      goto LABEL_418;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v90,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  if ( !Component_object )
    goto LABEL_418;
  ComponentsInChildren_object__49697072 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__49697072(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_2F65130 *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v92 = BattleSequenceManager___c_TypeInfo;
  item = (Il2CppObject *)v90;
  v493 = isDemoMode;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    v93 = ComponentsInChildren_object__49697072;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v92 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__49697072 = v93;
  }
  _9__88_0 = (System_Func_object__bool__o *)v92->static_fields->__9__88_0;
  v489 = (UnityEngine_Component_o *)Component_object;
  if ( !_9__88_0 )
  {
    evs = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)ComponentsInChildren_object__49697072;
    if ( !v92->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v92);
      v92 = BattleSequenceManager___c_TypeInfo;
    }
    v95 = (Il2CppObject *)v92->static_fields->__9;
    _9__88_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__88_0, v95, Method_BattleSequenceManager___c__setup_b__88_0__, 0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__88_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__88_0, (int32_t)_9__88_0, v97, v98);
    ComponentsInChildren_object__49697072 = (System_Collections_Generic_IEnumerable_TSource__o *)evs;
  }
  v99 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         ComponentsInChildren_object__49697072,
                                                         (System_Func_TSource__bool__o *)_9__88_0,
                                                         (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v100 = (System_Action_object__o *)sub_1B86604(System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
  System_Action_object____ctor(v100, object, Method_BattleSequenceManager__setup_b__88_1__, 0LL);
  BasicHelper__ForEach_object_(
    v99,
    (System_Action_T__o *)v100,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v103 = BattleSequenceManager__searchTimeline(
           v101,
           (WellFired_USSequencer_o *)Component_object,
           (System_String_o *)StringLiteral_6338/*"FGOSequenceManager"*/,
           v102);
  v104 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v104,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v105 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v105,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)object[5].klass;
  if ( !seqObject )
LABEL_418:
    sub_1B86614(seqObject, callback);
  v487 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)seqObject,
           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  evsa = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v105;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v103, 0LL, 0LL) )
  {
    klass = (Il2CppObject *)object[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           klass,
                           (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v103 )
      goto LABEL_418;
    WellFired_USTimelineContainer__set_AffectedObject(v103, (UnityEngine_Transform_o *)seqObject, 0LL);
    monitor = (System_Collections_Generic_List_object__o *)object[20].monitor;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v103, 0LL);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !monitor )
      goto LABEL_418;
    items = monitor->fields._items;
    v111 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_418;
    size = monitor->fields._size;
    v113 = seqObject;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
    }
    else
    {
      v114 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v114[4] = (Il2CppClass *)v113;
      sub_1B8635C((CGThumbnailListItem_o *)(v114 + 4), v113, v108, v109);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v103, 0LL);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_418;
    v117 = object[7].klass;
    v118 = seqObject;
    *(_QWORD *)(seqObject + 32) = v117;
    sub_1B8635C((CGThumbnailListItem_o *)(seqObject + 32), (int32_t)v117, v115, v116);
    v119 = object[7].monitor;
    *(_QWORD *)(v118 + 40) = v119;
    sub_1B8635C((CGThumbnailListItem_o *)(v118 + 40), (int32_t)v119, v120, v121);
    v122 = object[8].klass;
    *(_QWORD *)(v118 + 48) = v122;
    sub_1B8635C((CGThumbnailListItem_o *)(v118 + 48), (int32_t)v122, v123, v124);
    v127 = object[4].klass;
    if ( !v127 )
      goto LABEL_418;
    v128 = v127->vtable[7].method;
    *(_QWORD *)(v118 + 96) = v128;
    sub_1B8635C((CGThumbnailListItem_o *)(v118 + 96), (int32_t)v128, v125, v126);
    v130 = (Il2CppObject *)object[21].klass;
    if ( !byte_4A487E1 )
    {
      sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v129);
      byte_4A487E1 = 1;
    }
    v131 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v131->zeroVector.fields.x;
    y = v131->zeroVector.fields.y;
    z = v131->zeroVector.fields.z;
    if ( !byte_4A487E7 )
    {
      sub_1B863B8(&UnityEngine_Quaternion_TypeInfo, v129);
      byte_4A487E7 = 1;
    }
    v503.fields.x = x;
    v503.fields.y = y;
    v503.fields.z = z;
    v135 = UnityEngine_Object__Instantiate_object__50290720(
             v130,
             v503,
             UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
             (const MethodInfo_2FF6020 *)Method_UnityEngine_Object_Instantiate_GameObject____76169448);
    *(_QWORD *)(v118 + 72) = v135;
    v136 = (CGThumbnailListItem_o *)(v118 + 72);
    sub_1B8635C(v136, (int32_t)v135, v137, v138);
    seqObject = (__int64)v136->klass;
    if ( !v136->klass )
      goto LABEL_418;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !v493 )
    {
      BattleSequenceManager__SetupTargetInfo((BattleSequenceManager_o *)object, v139);
      BattleSequenceManager__SetShaderNoblePhantasmMode((BattleSequenceManager_o *)object, 1, v140);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v103,
                           1,
                           (const MethodInfo_2F651AC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_418;
    v141 = *(_DWORD *)(seqObject + 24);
    v142 = seqObject;
    if ( v141 >= 1 )
    {
      v143 = 0;
      v144 = 0LL;
      v494 = seqObject;
      while ( 1 )
      {
        if ( v143 >= (unsigned int)v141 )
LABEL_422:
          sub_1B8661C(seqObject, callback);
        seqObject = *(_QWORD *)(v142 + 8LL * v143 + 32);
        if ( !seqObject )
          goto LABEL_418;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_418;
        v145 = *(_QWORD *)(seqObject + 24);
        v146 = seqObject;
        if ( (int)v145 >= 1 )
          break;
LABEL_102:
        v142 = v494;
        ++v143;
        v141 = *(_DWORD *)(v494 + 24);
        if ( v143 >= v141 )
          goto LABEL_103;
      }
      v147 = 0LL;
      while ( 1 )
      {
        if ( v147 >= (unsigned int)v145 )
          goto LABEL_422;
        v148 = *(_QWORD *)(v146 + 32 + 8 * v147);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v148, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v148 )
            goto LABEL_418;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v148, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14639/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v144, 0LL, 0LL) )
            {
              klass_high = HIDWORD(object[10].klass);
              monitor_high = HIDWORD(object[2].monitor);
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                                   klass_high,
                                                                   monitor_high,
                                                                   (System_String_o *)StringLiteral_16539/*"animCamLoc"*/,
                                                                   0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__LoadNoblePhantasmEffect,
                                     (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v157 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              v105 = (System_Collections_Generic_List_object__o *)evsa;
              if ( !v157 )
                goto LABEL_418;
              v158 = v157->fields._items;
              v159 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v157->fields._version;
              if ( !v158 )
                goto LABEL_418;
              v160 = v157->fields._size;
              v144 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v160 >= v158->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v157,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
              }
              else
              {
                v161 = &v158->obj.klass + v160;
                v157->fields._size = v160 + 1;
                v161[4] = (Il2CppClass *)v144;
                sub_1B8635C((CGThumbnailListItem_o *)(v161 + 4), (int32_t)v144, v155, v156);
              }
            }
            methodPtr_low = LOBYTE(WellFired_USFGOAnimationCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v148 + 304LL) < (unsigned int)methodPtr_low
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v148 + 200LL) + 8 * methodPtr_low - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_423:
              sub_1B868D4(v148);
LABEL_424:
              sub_1B868D4(v252);
LABEL_425:
              sub_1B86614(v427, v428);
            }
            *(_QWORD *)(v148 + 56) = v144;
            sub_1B8635C((CGThumbnailListItem_o *)(v148 + 56), (int32_t)v144, v150, v151);
            v190 = object[7].klass;
            *(_QWORD *)(v148 + 64) = v190;
            v191 = v148 + 64;
            sub_1B8635C((CGThumbnailListItem_o *)v191, (int32_t)v190, v192, v193);
            *(_BYTE *)(v191 + 28) = 0;
            if ( !v144 )
              goto LABEL_418;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v144, 0LL);
            if ( !object[5].klass )
              goto LABEL_418;
            v194 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)object[5].klass, 0LL);
            if ( !seqObject )
              goto LABEL_418;
            *(UnityEngine_Vector3_o *)&v195 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v194 )
              goto LABEL_418;
            UnityEngine_Transform__set_position(v194, *(UnityEngine_Vector3_o *)&v195, 0LL);
          }
          else
          {
            v162 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v148, 0LL);
            seqObject = System_String__op_Equality(v162, (System_String_o *)StringLiteral_14642/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v105 )
                goto LABEL_418;
              v165 = LOBYTE(WellFired_USFGOPlayCutInEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v148 + 304LL) >= (unsigned int)v165 )
                callback = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v148 + 200LL) + 8 * v165 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                         ? (System_Action_o *)v148
                         : 0LL;
              else
                callback = 0LL;
              v185 = v105->fields._items;
              v186 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
              ++v105->fields._version;
              if ( !v185 )
                goto LABEL_418;
              v187 = v105->fields._size;
              if ( (unsigned int)v187 >= v185->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v105,
                  (Il2CppObject *)callback,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
                goto LABEL_101;
              }
              v188 = &v185->obj.klass + v187;
              v105->fields._size = v187 + 1;
              v188[4] = (Il2CppClass *)callback;
              v172 = (CGThumbnailListItem_o *)(v188 + 4);
              goto LABEL_91;
            }
            v166 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v148, 0LL);
            if ( System_String__op_Equality(v166, (System_String_o *)StringLiteral_14643/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v169 = LOBYTE(WellFired_USFGOSetCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v148 + 304LL) < (unsigned int)v169
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v148 + 200LL) + 8 * v169 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_423;
              }
              v170 = object[7].klass;
              *(_QWORD *)(v148 + 56) = v170;
              sub_1B8635C((CGThumbnailListItem_o *)(v148 + 56), (int32_t)v170, v167, v168);
              seqObject = (__int64)object[7].klass;
              if ( !seqObject )
                goto LABEL_418;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_418;
              parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              *(_QWORD *)(v148 + 64) = parent;
              LODWORD(callback) = (_DWORD)parent;
              v172 = (CGThumbnailListItem_o *)(v148 + 64);
LABEL_91:
              sub_1B8635C(v172, (int32_t)callback, v163, v164);
              goto LABEL_101;
            }
            v173 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v148, 0LL);
            seqObject = System_String__op_Equality(v173, (System_String_o *)StringLiteral_14641/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v174 = LOBYTE(WellFired_USFGOChangeBgEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v148 + 304LL) < (unsigned int)v174
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v148 + 200LL) + 8 * v174 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_423;
              }
              v175 = (System_String_o **)(v148 + 64);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v148 + 64),
                     (System_String_o *)StringLiteral_1139/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v175, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)object[4].klass;
                if ( !seqObject )
                  goto LABEL_418;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                v176 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v175 = v176;
                sub_1B8635C((CGThumbnailListItem_o *)(v148 + 64), (int32_t)v176, v177, v178);
                seqObject = (__int64)object[4].klass;
                if ( !seqObject )
                  goto LABEL_418;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                v179 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v148 + 72) = v179;
                sub_1B8635C((CGThumbnailListItem_o *)(v148 + 72), (int32_t)v179, v180, v181);
                v182 = object[25].klass;
                *(_QWORD *)(v148 + 136) = v182;
                sub_1B8635C((CGThumbnailListItem_o *)(v148 + 136), (int32_t)v182, v183, v184);
              }
              v105 = (System_Collections_Generic_List_object__o *)evsa;
            }
          }
        }
LABEL_101:
        LODWORD(v145) = *(_DWORD *)(v146 + 24);
        if ( (__int64)++v147 >= (int)v145 )
          goto LABEL_102;
      }
    }
  }
LABEL_103:
  v198 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v198,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v198 )
    goto LABEL_418;
  v201 = v198->fields._items;
  v202 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v198->fields._version;
  if ( !v201 )
    goto LABEL_418;
  v203 = v198->fields._size;
  if ( (unsigned int)v203 >= v201->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v198,
      item,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
  }
  else
  {
    v204 = &v201->obj.klass + v203;
    v198->fields._size = v203 + 1;
    v204[4] = (Il2CppClass *)item;
    sub_1B8635C((CGThumbnailListItem_o *)(v204 + 4), (int32_t)item, v199, v200);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(
                         v205,
                         (WellFired_USSequencer_o *)v489,
                         (System_String_o *)StringLiteral_3954/*"Cameras/BattleCamera"*/,
                         v206);
  v209 = v198->fields._items;
  v210 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v198->fields._version;
  if ( !v209 )
    goto LABEL_418;
  v211 = v198->fields._size;
  v212 = seqObject;
  if ( (unsigned int)v211 >= v209->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v198,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
  }
  else
  {
    v213 = &v209->obj.klass + v211;
    v198->fields._size = v211 + 1;
    v213[4] = (Il2CppClass *)v212;
    sub_1B8635C((CGThumbnailListItem_o *)(v213 + 4), v212, v207, v208);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v497,
    v198,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v501 = v497;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v501,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v501.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v215 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v215 )
    {
      if ( !current )
        sub_1B86614(v215, v216);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_2F651AC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v219 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1B86614(0LL, v218);
      v220 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v220 >= 1 )
      {
        for ( i = 0; i < v220; ++i )
        {
          if ( i >= (unsigned int)v220 )
            sub_1B8661C(ComponentsInChildren_object, v218);
          v222 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v219 + i + 4);
          if ( !v222 )
            sub_1B86614(0LL, v218);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v222, 0LL);
          v223 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1B86614(0LL, v218);
          v224 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v224 >= 1 )
          {
            v225 = 0LL;
            do
            {
              if ( v225 >= (unsigned int)v224 )
                sub_1B8661C(ComponentsInChildren_object, v218);
              v226 = v223[v225 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v226,
                                                      0LL,
                                                      0LL);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v226 )
                  sub_1B86614(ComponentsInChildren_object, v218);
                v227 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v226, 0LL);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v227,
                                                        (System_String_o *)StringLiteral_14640/*"USFGOAttachToParentEvent"*/,
                                                        0LL);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v228 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v226 + 304LL) < (unsigned int)v228
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v226 + 200LL) + 8 * v228 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1B868D4(v226);
LABEL_415:
                    sub_1B86614(v229, v230);
                  }
                  v229 = System_String__op_Equality(
                           *(System_String_o **)(v226 + 80),
                           (System_String_o *)StringLiteral_3138/*"BattleCamera"*/,
                           0LL);
                  if ( v229 )
                  {
                    v233 = (UnityEngine_Component_o *)object[7].klass;
                    if ( !v233 )
                      sub_1B86614(0LL, v230);
                    transform = UnityEngine_Component__get_transform(v233, 0LL);
                    *(_QWORD *)(v226 + 64) = transform;
                    sub_1B8635C((CGThumbnailListItem_o *)(v226 + 64), (int32_t)transform, v235, v236);
                  }
                  else
                  {
                    if ( !v104 )
                      goto LABEL_415;
                    v237 = v104->fields._items;
                    v238 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v104->fields._version;
                    if ( !v237 )
                      sub_1B86614(v229, v230);
                    v239 = v104->fields._size;
                    if ( (unsigned int)v239 >= v237->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v104,
                        (Il2CppObject *)v226,
                        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v238[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v240 = &v237->obj.klass + v239;
                      v104->fields._size = v239 + 1;
                      v240[4] = (Il2CppClass *)v226;
                      sub_1B8635C((CGThumbnailListItem_o *)(v240 + 4), v226, v231, v232);
                    }
                  }
                }
              }
              LODWORD(v224) = *((_DWORD *)v223 + 6);
              ++v225;
            }
            while ( (__int64)v225 < (int)v224 );
          }
          v220 = *((_DWORD *)v219 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v501,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)UnityEngine_Component__get_transform(v489, 0LL);
  if ( !seqObject )
    goto LABEL_418;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_1B86614(0LL, v241);
  v243 = 0;
  while ( 1 )
  {
    v244 = Enumerator->klass;
    v245 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v244->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v245;
        p_offset += 4;
        if ( !v245 )
          goto LABEL_152;
      }
      p_method = (__int64)&v244->vtable[*p_offset].method;
    }
    else
    {
LABEL_152:
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v248 = Enumerator->klass;
    v249 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v250 = (System_Collections_IEnumerator_c **)&v248->_1.interfaceOffsets->offset;
      while ( *(v250 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v249;
        v250 += 2;
        if ( !v249 )
          goto LABEL_159;
      }
      v251 = (__int64)&v248->vtable[*(_DWORD *)v250 + 1].method;
    }
    else
    {
LABEL_159:
      v251 = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v252 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v251)(
                                        Enumerator,
                                        *(_QWORD *)(v251 + 8));
    if ( !v252 )
      sub_1B86614(0LL, v253);
    v254 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v252->klass->vtable._0_Equals.methodPtr) < (unsigned int)v254
      || (UnityEngine_Transform_c *)v252->klass->_2.typeHierarchy[v254 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_424;
    }
    gameObject = UnityEngine_Component__get_gameObject(v252, 0LL);
    if ( !gameObject )
      sub_1B86614(0LL, v256);
    v257 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v259 = v257;
    if ( !v257 )
      goto LABEL_428;
    v260 = (System_String_o *)v257[2].monitor;
    if ( !v260 )
      sub_1B86614(0LL, v258);
    if ( System_String__StartsWith(v260, (System_String_o *)StringLiteral_1076/*"/BattleActors/"*/, 0LL) && v259[2].monitor )
    {
      v262 = (System_String_o *)v259[2].monitor;
      if ( !v262 )
        sub_1B86614(0LL, v261);
      if ( System_String__StartsWith(v262, (System_String_o *)StringLiteral_1076/*"/BattleActors/"*/, 0LL) )
      {
        v264 = (System_String_o *)v259[2].monitor;
        if ( !v264 )
          sub_1B86614(0LL, v263);
        v265 = System_String__Substring_61691100(v264, v264->fields._stringLength - 1, 1, 0LL);
        result[0] = 1;
        v243 += System_Int32__TryParse(v265, result, 0LL);
      }
    }
  }
  v266 = sub_1B864F4(Enumerator, System_IDisposable_TypeInfo);
  if ( v266 )
  {
    v267 = *(_QWORD *)v266;
    v268 = v266;
    v269 = *(unsigned __int16 *)(*(_QWORD *)v266 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v266 + 302LL) )
    {
      v270 = (int *)(*(_QWORD *)(v267 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v270 - 1) != System_IDisposable_TypeInfo )
      {
        --v269;
        v270 += 4;
        if ( !v269 )
          goto LABEL_178;
      }
      v271 = v267 + 16LL * *v270 + 312;
    }
    else
    {
LABEL_178:
      v271 = sub_1BD6B4C(v266, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v271)(v268, *(_QWORD *)(v271 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform(v489, 0LL);
  if ( !seqObject )
    goto LABEL_418;
  v495 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v495 )
    sub_1B86614(0LL, v272);
  v490 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v273 = v495->klass;
          v274 = *(unsigned __int16 *)(&v495->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v495->klass->_2.bitflags2 + 3) )
          {
            v275 = &v273->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v275 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v274;
              v275 += 4;
              if ( !v274 )
                goto LABEL_188;
            }
            v276 = (__int64)&v273->vtable[*v275].method;
          }
          else
          {
LABEL_188:
            v276 = sub_1BD6B4C(v495, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v276)(
                  v495,
                  *(_QWORD *)(v276 + 8)) & 1) == 0 )
          {
            v445 = 0LL;
            goto LABEL_366;
          }
          v277 = v495->klass;
          v278 = *(unsigned __int16 *)(&v495->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v495->klass->_2.bitflags2 + 3) )
          {
            v279 = (System_Collections_IEnumerator_c **)&v277->_1.interfaceOffsets->offset;
            while ( *(v279 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v278;
              v279 += 2;
              if ( !v278 )
                goto LABEL_195;
            }
            v280 = (__int64)&v277->vtable[*(_DWORD *)v279 + 1].method;
          }
          else
          {
LABEL_195:
            v280 = sub_1BD6B4C(v495, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v281 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v280)(
                                              v495,
                                              *(_QWORD *)(v280 + 8));
          if ( !v281 )
            sub_1B86614(0LL, v282);
          v283 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v281->klass->vtable._0_Equals.methodPtr) < (unsigned int)v283
            || (UnityEngine_Transform_c *)v281->klass->_2.typeHierarchy[v283 - 1] != UnityEngine_Transform_TypeInfo )
          {
LABEL_427:
            sub_1B868D4(v281);
LABEL_428:
            sub_1B86614(v257, v258);
          }
          v284 = UnityEngine_Component__get_gameObject(v281, 0LL);
          if ( !v284 )
            sub_1B86614(0LL, v285);
          v286 = UnityEngine_GameObject__GetComponent_object_(
                   v284,
                   (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
          v288 = (WellFired_USTimelineContainer_o *)v286;
          if ( !v286 )
            sub_1B86614(0LL, v287);
          v289 = (System_String_o *)v286[2].monitor;
          if ( !v289 )
            sub_1B86614(0LL, v287);
          v291 = System_String__StartsWith(v289, (System_String_o *)StringLiteral_1070/*"/AllEffects/"*/, 0LL);
          if ( v291 )
          {
            affectedObjectPath = v288->fields.affectedObjectPath;
            if ( !affectedObjectPath )
              sub_1B86614(0LL, v290);
            v293 = System_String__Substring(affectedObjectPath, 12, 0LL);
          }
          else
          {
            v293 = 0LL;
          }
          v294 = v288->fields.affectedObjectPath;
          if ( !v294 )
            sub_1B86614(0LL, v290);
          v296 = System_String__StartsWith(v294, (System_String_o *)StringLiteral_1091/*"/CutIns/"*/, 0LL);
          if ( v296 )
          {
            v297 = v288->fields.affectedObjectPath;
            if ( !v297 )
              sub_1B86614(0LL, v295);
            v293 = System_String__Substring(v297, 8, 0LL);
          }
          v298 = v288->fields.affectedObjectPath;
          if ( !v298 )
            sub_1B86614(0LL, v295);
          if ( !System_String__StartsWith(v298, (System_String_o *)StringLiteral_1088/*"/BattleCamera"*/, 0LL) )
          {
            v300 = v288->fields.affectedObjectPath;
            if ( !v300 )
              sub_1B86614(0LL, v299);
            if ( !System_String__StartsWith(v300, (System_String_o *)StringLiteral_1090/*"/Cameras/BattleCamera"*/, 0LL) )
              break;
          }
          v301 = (UnityEngine_Component_o *)object[7].klass;
          if ( !v301 )
            sub_1B86614(0LL, v299);
          v302 = UnityEngine_Component__get_transform(v301, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v288, v302, 0LL);
        }
        v303 = v288->fields.affectedObjectPath;
        if ( !v303 )
          sub_1B86614(0LL, v299);
        if ( System_String__StartsWith(v303, (System_String_o *)StringLiteral_1065/*"/Actor/chr"*/, 0LL) )
          break;
        v345 = v288->fields.affectedObjectPath;
        if ( !v345 )
          sub_1B86614(0LL, v304);
        v346 = System_String__StartsWith(v345, (System_String_o *)StringLiteral_1076/*"/BattleActors/"*/, 0LL);
        if ( v346 )
          v293 = v288->fields.affectedObjectPath;
        if ( v293 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v346, v293, v347) )
            goto LABEL_326;
          if ( v291 )
          {
            v350 = System_String__IndexOf(v293, 0x2Fu, 0LL);
            if ( (v350 & 0x80000000) == 0 )
            {
              v351 = System_String__Substring(v293, v350 + 1, 0LL);
              v293 = System_String__Substring_61691100(v293, 0, v350, 0LL);
              goto LABEL_287;
            }
            if ( (v490 & 1) != 0 )
            {
              v351 = 0LL;
LABEL_287:
              v376 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              if ( !v376 )
                sub_1B86614(0LL, v349);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v497,
                v376,
                (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v486 = v351;
              v500 = v497;
              while ( 1 )
              {
                v377 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v500,
                         (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v377 )
                  break;
                v375 = v500.fields._current;
                if ( !v500.fields._current )
                  sub_1B86614(v377, v378);
                v379 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v500.fields._current, 0LL);
                if ( !v379 )
                  sub_1B86614(0LL, v380);
                v381 = System_String__Replace_61691724(
                         v379,
                         (System_String_o *)StringLiteral_684/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v293, v381, 0LL) )
                  goto LABEL_295;
              }
              v375 = 0LL;
LABEL_295:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v500,
                (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v490 = 1;
              goto LABEL_297;
            }
            v351 = 0LL;
            v375 = 0LL;
            v490 = 0;
          }
          else
          {
            v351 = 0LL;
            v375 = 0LL;
          }
LABEL_297:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v375, 0LL, 0LL) )
          {
            v375 = (Il2CppObject *)BattleSequenceManager__SearchPrefab(
                                     (BattleSequenceManager_o *)object,
                                     HIDWORD(object[10].klass),
                                     v293,
                                     v382);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v375, 0LL, 0LL) )
            {
              v386 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              if ( !v386 )
                sub_1B86614(0LL, v383);
              v387 = v386->fields._items;
              v388 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v386->fields._version;
              if ( !v387 )
                sub_1B86614(v386, v383);
              v389 = v386->fields._size;
              if ( (unsigned int)v389 >= v387->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v386,
                  v375,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v388[4] + 192LL) + 112LL));
              }
              else
              {
                v390 = &v387->obj.klass + v389;
                v386->fields._size = v389 + 1;
                v390[4] = (Il2CppClass *)v375;
                sub_1B8635C((CGThumbnailListItem_o *)(v390 + 4), (int32_t)v375, v384, v385);
              }
              if ( !v375 )
                sub_1B86614(v391, v392);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v375, 0, 0LL);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v375, 0LL, 0LL) )
            goto LABEL_326;
          IsNullOrEmpty = System_String__IsNullOrEmpty(v351, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v375 )
              sub_1B86614(IsNullOrEmpty, v394);
            v410 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v375, 0LL);
            if ( !v410 )
              sub_1B86614(0LL, v411);
            v412 = UnityEngine_Transform__Find(v410, v351, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v288, v412, 0LL);
            goto LABEL_326;
          }
          if ( !v375 )
            sub_1B86614(IsNullOrEmpty, v394);
          v395 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v375, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v288, v395, 0LL);
          if ( v296 )
          {
            v396 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v375, 0LL);
            if ( !v396 )
              sub_1B86614(0LL, v397);
            localPosition = UnityEngine_Transform__get_localPosition(v396, 0LL);
            v398 = localPosition.fields.x;
            v399 = localPosition.fields.y;
            v400 = localPosition.fields.z;
            v402 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v375, 0LL);
            v403 = (UnityEngine_GameObject_o *)object[5].monitor;
            if ( !v403 )
              sub_1B86614(0LL, v401);
            v404 = UnityEngine_GameObject__get_transform(v403, 0LL);
            if ( !v402 )
              sub_1B86614(v404, v404);
            UnityEngine_Transform__set_parent(v402, v404, 0LL);
            v405 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v375, 0LL);
            if ( !v405 )
              sub_1B86614(0LL, v406);
            v505.fields.x = v398;
            v505.fields.y = v399;
            v505.fields.z = v400;
            UnityEngine_Transform__set_localPosition(v405, v505, 0LL);
            BattleSequenceManager__updateCutInEvents(v407, evsa, v293, (UnityEngine_GameObject_o *)v375, v408);
            v409 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3142/*"BattleCutIn"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v375, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3136/*"BattleBG"*/, 0LL) )
              goto LABEL_326;
            v409 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3134/*"Battle2D"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v375, v409, 0LL);
LABEL_326:
          v413 = v288->fields.affectedObjectPath;
          if ( !v413 )
            sub_1B86614(0LL, v348);
          if ( System_String__StartsWith(v413, (System_String_o *)StringLiteral_1076/*"/BattleActors/"*/, 0LL) )
          {
            v415 = v288->fields.affectedObjectPath;
            if ( !v415 )
              sub_1B86614(0LL, v414);
            v416 = System_String__Substring_61691100(v415, v415->fields._stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v416, &targetPosIndex, 0LL);
            v418 = --targetPosIndex;
            if ( v243 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach((BattleSequenceManager_o *)object, v288, v418, v417);
              BattleSequenceManager__SyncAttachedTargetPair(
                (BattleSequenceManager_o *)object,
                v288,
                targetPosIndex,
                v419);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach((BattleSequenceManager_o *)object, v288, v418, v417);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v288,
                         1,
                         (const MethodInfo_2F651AC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v422 = EventCount;
          if ( !EventCount )
            sub_1B86614(0LL, v421);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1B8661C(EventCount, v421);
              v425 = (WellFired_USTimelineEvent_o *)v422->m_Items[j];
              if ( !v425 )
                sub_1B86614(EventCount, v421);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v425, 0LL);
                if ( k >= (int)EventCount )
                  break;
                v427 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v425, k, 0LL);
                v429 = (Il2CppObject *)v427;
                if ( !v427 )
                  goto LABEL_425;
                v430 = UnityEngine_Object__get_name(v427, 0LL);
                if ( System_String__op_Equality(v430, (System_String_o *)StringLiteral_14640/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v431 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(v429->klass->vtable[0].methodPtr) < (unsigned int)v431
                    || (WellFired_USFGOAttachToParentEvent_c *)v429->klass->_2.typeHierarchy[v431 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1B868D4(v429);
                    goto LABEL_427;
                  }
                  v432 = System_String__op_Equality(
                           (System_String_o *)v429[5].klass,
                           (System_String_o *)StringLiteral_3138/*"BattleCamera"*/,
                           0LL);
                  if ( v432 )
                  {
                    v436 = (UnityEngine_Component_o *)object[7].klass;
                    if ( !v436 )
                      sub_1B86614(0LL, v433);
                    v437 = UnityEngine_Component__get_transform(v436, 0LL);
                    v429[4].klass = (Il2CppClass *)v437;
                    sub_1B8635C((CGThumbnailListItem_o *)&v429[4], (int32_t)v437, v438, v439);
                  }
                  else
                  {
                    if ( !v104 )
                      sub_1B86614(v432, v433);
                    v440 = v104->fields._items;
                    v441 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v104->fields._version;
                    if ( !v440 )
                      sub_1B86614(v432, v433);
                    v442 = v104->fields._size;
                    if ( (unsigned int)v442 >= v440->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v104,
                        v429,
                        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v441[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v443 = &v440->obj.klass + v442;
                      v104->fields._size = v442 + 1;
                      v443[4] = (Il2CppClass *)v429;
                      sub_1B8635C((CGThumbnailListItem_o *)(v443 + 4), (int32_t)v429, v434, v435);
                    }
                  }
                }
              }
              max_length = v422->max_length;
            }
          }
        }
      }
      v305 = (UnityEngine_GameObject_o *)object[5].klass;
      if ( !v305 )
        sub_1B86614(0LL, v304);
      v307 = UnityEngine_GameObject__get_transform(v305, 0LL);
      v308 = v288->fields.affectedObjectPath;
      if ( !v308 )
        sub_1B86614(0LL, v306);
      v309 = System_String__Replace_61691724(
               v308,
               (System_String_o *)StringLiteral_1065/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_17731/*"chr(Clone)"*/,
               0LL);
      if ( !v307 )
        sub_1B86614(v309, v309);
      v310 = UnityEngine_Transform__Find(v307, v309, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v288, v310, 0LL);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v288, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
      {
        v313 = v288->fields.affectedObjectPath;
        if ( !v313 )
          sub_1B86614(0LL, v312);
        v314 = System_String__StartsWith(v313, (System_String_o *)StringLiteral_1067/*"/Actor/chr/body_level_"*/, 0LL);
        v316 = &StringLiteral_17114/*"body_level_"*/;
        if ( v314 )
          goto LABEL_229;
        v317 = v288->fields.affectedObjectPath;
        if ( !v317 )
          sub_1B86614(0LL, v315);
        v318 = System_String__StartsWith(v317, (System_String_o *)StringLiteral_1068/*"/Actor/chr/weapon_level_"*/, 0LL);
        v316 = &StringLiteral_24511/*"weapon_level_"*/;
        if ( v318 )
        {
LABEL_229:
          v319 = (System_String_o *)*v316;
          if ( *v316 )
            break;
        }
      }
    }
    v320 = (UnityEngine_GameObject_o *)object[5].klass;
    if ( !v320 )
      sub_1B86614(0LL, v315);
    v321 = (System_String_o *)StringLiteral_1/*""*/;
    v322 = UnityEngine_GameObject__get_transform(v320, 0LL);
    if ( !v322 )
      sub_1B86614(0LL, v323);
    v324 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v322, (System_String_o *)StringLiteral_17731/*"chr(Clone)"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v325 = UnityEngine_Object__op_Inequality(v324, 0LL, 0LL);
    if ( v325 )
      break;
LABEL_274:
    v358 = v288->fields.affectedObjectPath;
    v359 = System_String__Concat_61645176((System_String_o *)StringLiteral_1066/*"/Actor/chr/"*/, v319, 0LL);
    if ( !v359 )
      sub_1B86614(0LL, v360);
    if ( !v358 )
      sub_1B86614(v359, v360);
    v361 = System_String__Substring(v358, v359->fields._stringLength, 0LL);
    if ( !v361 )
      sub_1B86614(0LL, v362);
    v363 = System_String__Split(v361, 0x2Fu, 0, 0LL);
    if ( !v363 )
      sub_1B86614(0LL, v364);
    if ( !v363->max_length )
      sub_1B8661C(v363, v364);
    v366 = System_String__Concat_61645176(v319, v363->m_Items[0], 0LL);
    v367 = (UnityEngine_GameObject_o *)object[5].klass;
    if ( !v367 )
      sub_1B86614(0LL, v365);
    v369 = UnityEngine_GameObject__get_transform(v367, 0LL);
    v370 = v288->fields.affectedObjectPath;
    if ( !v370 )
      sub_1B86614(0LL, v368);
    v371 = System_String__Replace_61691724(
             v370,
             (System_String_o *)StringLiteral_1065/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_17731/*"chr(Clone)"*/,
             0LL);
    if ( !v371 )
      sub_1B86614(0LL, v372);
    v373 = System_String__Replace_61691724(v371, v366, v321, 0LL);
    if ( !v369 )
      sub_1B86614(v373, v373);
    v374 = UnityEngine_Transform__Find(v369, v373, 0LL);
    WellFired_USTimelineContainer__set_AffectedObject(v288, v374, 0LL);
  }
  if ( !v324 )
    sub_1B86614(v325, v326);
  v328 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v324, 0LL);
  if ( !v328 )
    sub_1B86614(0LL, v327);
  while ( 2 )
  {
    v329 = v328->klass;
    v330 = *(unsigned __int16 *)(&v328->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v328->klass->_2.bitflags2 + 3) )
    {
      v331 = &v329->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v331 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v330;
        v331 += 4;
        if ( !v330 )
          goto LABEL_241;
      }
      v332 = (__int64)&v329->vtable[*v331].method;
    }
    else
    {
LABEL_241:
      v332 = sub_1BD6B4C(v328, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v332)(v328, *(_QWORD *)(v332 + 8)) & 1) == 0 )
    {
      v485 = v321;
      v486 = 0LL;
      goto LABEL_266;
    }
    v333 = v328->klass;
    v334 = *(unsigned __int16 *)(&v328->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v328->klass->_2.bitflags2 + 3) )
    {
      v335 = (System_Collections_IEnumerator_c **)&v333->_1.interfaceOffsets->offset;
      while ( *(v335 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v334;
        v335 += 2;
        if ( !v334 )
          goto LABEL_248;
      }
      v336 = (__int64)&v333->vtable[*(_DWORD *)v335 + 1].method;
    }
    else
    {
LABEL_248:
      v336 = sub_1BD6B4C(v328, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v337 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v336)(
                                        v328,
                                        *(_QWORD *)(v336 + 8));
    v339 = (UnityEngine_Object_o *)v337;
    if ( !v337 )
      sub_1B86614(0LL, v338);
    v340 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v337->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v340
      && (UnityEngine_Transform_c *)v337->klass->_2.typeHierarchy[v340 - 1] == UnityEngine_Transform_TypeInfo )
    {
      v341 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v337, 0LL);
      if ( !v341 )
        sub_1B86614(0LL, v342);
      v343 = UnityEngine_Object__get_name(v341, 0LL);
      if ( !v343 )
        sub_1B86614(0LL, v344);
      if ( !System_String__StartsWith(v343, v319, 0LL) )
        continue;
      v485 = UnityEngine_Object__get_name(v339, 0LL);
      v486 = 0LL;
LABEL_266:
      v352 = sub_1B864F4(v328, System_IDisposable_TypeInfo);
      v321 = v485;
      v353 = v352;
      if ( v352 )
      {
        v354 = *(_QWORD *)v352;
        v355 = *(unsigned __int16 *)(*(_QWORD *)v352 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v352 + 302LL) )
        {
          v356 = (int *)(*(_QWORD *)(v354 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v356 - 1) != System_IDisposable_TypeInfo )
          {
            --v355;
            v356 += 4;
            if ( !v355 )
              goto LABEL_271;
          }
          v357 = v354 + 16LL * *v356 + 312;
        }
        else
        {
LABEL_271:
          v357 = sub_1BD6B4C(v352, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v357)(v353, *(_QWORD *)(v357 + 8));
      }
      goto LABEL_274;
    }
    break;
  }
  sub_1B868D4(v337);
  v476 = v475;
  v478 = v477;
  v469 = sub_1B864F4(v328, System_IDisposable_TypeInfo);
  v470 = v469;
  if ( v469 )
  {
    v471 = *(_QWORD *)v469;
    v472 = *(unsigned __int16 *)(*(_QWORD *)v469 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v469 + 302LL) )
    {
      v473 = (int *)(*(_QWORD *)(v471 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v473 - 1) != System_IDisposable_TypeInfo )
      {
        --v472;
        v473 += 4;
        if ( !v472 )
          goto LABEL_459;
      }
      v474 = v471 + 16LL * *v473 + 312;
    }
    else
    {
LABEL_459:
      v474 = sub_1BD6B4C(v469, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v474)(v470, *(_QWORD *)(v474 + 8));
  }
  if ( v486 )
    sub_1B8660C(v486);
  if ( v476 != 1 )
  {
    v479 = sub_1B864F4(v495, System_IDisposable_TypeInfo);
    v480 = v479;
    if ( v479 )
    {
      v481 = *(_QWORD *)v479;
      v482 = *(unsigned __int16 *)(*(_QWORD *)v479 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v479 + 302LL) )
      {
        v483 = (int *)(*(_QWORD *)(v481 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v483 - 1) != System_IDisposable_TypeInfo )
        {
          --v482;
          v483 += 4;
          if ( !v482 )
            goto LABEL_506;
        }
        v484 = v481 + 16LL * *v483 + 312;
      }
      else
      {
LABEL_506:
        v484 = sub_1BD6B4C(v479, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v484)(v480, *(_QWORD *)(v484 + 8));
    }
    sub_1C6F44C();
  }
  v445 = *(_QWORD *)__cxa_begin_catch(v478);
  __cxa_end_catch();
LABEL_366:
  seqObject = sub_1B864F4(v495, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v446 = *(_QWORD *)seqObject;
    v447 = seqObject;
    v448 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v449 = (int *)(*(_QWORD *)(v446 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v449 - 1) != System_IDisposable_TypeInfo )
      {
        --v448;
        v449 += 4;
        if ( !v448 )
          goto LABEL_371;
      }
      v450 = v446 + 16LL * *v449 + 312;
    }
    else
    {
LABEL_371:
      v450 = sub_1BD6B4C(seqObject, System_IDisposable_TypeInfo, 0LL);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v450)(v447, *(_QWORD *)(v450 + 8));
  }
  if ( v445 )
    sub_1B8660C(v445);
  if ( !v104 )
    goto LABEL_418;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v497,
    v104,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v497;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          (BattlePerformance_o *)object[4].klass,
          (UnityEngine_GameObject_o *)object[5].klass,
          (System_Collections_Generic_List_GameObject__o *)object[20].monitor,
          0LL) )
  {
    if ( !m.fields._current )
      sub_1B86614(0LL, v451);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v487, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v487 )
      goto LABEL_418;
    if ( LOBYTE(v487[33].monitor) )
      goto LABEL_409;
    v452 = v487[32].klass;
    if ( !v452 )
      goto LABEL_418;
    if ( !HIDWORD(v452->vtable[2].methodPtr) && !BattleActorControl__isNoVoice((BattleActorControl_o *)v487, 0LL) )
    {
      v453 = (UnityEngine_Object_o *)object[4].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v453, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v454 = object[4].klass;
        if ( !v454 )
          goto LABEL_418;
        v455 = *(UnityEngine_Object_o **)&v454->_1.byval_arg.bits;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v455, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_VoiceMaster___);
            LOBYTE(object[22].monitor) = 0;
            v457 = (int32_t)object[10].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   (BattleSequenceManager_o *)object,
                   (VoiceMaster_o *)MasterData_object,
                   v457,
                   FileName,
                   v459) )
            {
              LOBYTE(object[22].monitor) = 1;
            }
            v460 = (int32_t)object[10].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v461 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(
              (BattleSequenceManager_o *)object,
              (VoiceMaster_o *)MasterData_object,
              v460,
              v461,
              v462);
            v463 = v487[32].klass;
            if ( v463 )
            {
              v464 = (int)v463->vtable[25].method;
              v465 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v465 = BalanceConfig_TypeInfo;
              }
              if ( v464 == v465->static_fields->TreasureDeviceIdMashu3 )
              {
                v466 = (int32_t)object[10].klass;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v467 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(
                  (BattleSequenceManager_o *)object,
                  (VoiceMaster_o *)MasterData_object,
                  v466,
                  v467,
                  v468);
              }
              goto LABEL_409;
            }
          }
          goto LABEL_418;
        }
      }
    }
  }
LABEL_409:
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0LL);
}


void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  int size; // w8
  int v10; // w24
  int32_t v11; // w22

  if ( (byte_4A50DC9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, tlcont);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v7);
    byte_4A50DC9 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      v10 = size - 1;
      if ( size < 1 )
      {
LABEL_12:
        if ( tlcont )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)tlcont,
                                                                            0LL);
          if ( battleTargetList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleTargetList, 0, 0LL);
            return;
          }
        }
      }
      else
      {
        v11 = 0;
        while ( 1 )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v11,
                                                                            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( !battleTargetList )
            goto LABEL_21;
          if ( HIDWORD(battleTargetList[1].fields._items) == targetIndex )
            break;
          if ( v10 == v11 )
            goto LABEL_12;
          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
          ++v11;
          if ( !battleTargetList )
            goto LABEL_21;
        }
        battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v11,
                                                                            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( battleTargetList )
          {
            battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                              (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                              0LL);
            if ( battleTargetList )
            {
              battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                                (UnityEngine_GameObject_o *)battleTargetList,
                                                                                0LL);
              if ( tlcont )
              {
                WellFired_USTimelineContainer__set_AffectedObject(
                  tlcont,
                  (UnityEngine_Transform_o *)battleTargetList,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B86614(battleTargetList, tlcont);
  }
}


void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  if ( (byte_4A50DCD & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_GameObject_TypeInfo, tlcont);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v8);
    sub_1B863B8(&StringLiteral_14292/*"Tmp_Target"*/, v9);
    byte_4A50DCD = 1;
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
                                                                        (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
      if ( battleTargetList )
      {
        battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                          (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                          0LL);
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)battleTargetList,
                                                                            0LL);
          if ( tlcont )
          {
            WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)battleTargetList, 0LL);
            return;
          }
        }
      }
LABEL_15:
      sub_1B86614(battleTargetList, tlcont);
    }
    v11 = (UnityEngine_GameObject_o *)sub_1B86604(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_14292/*"Tmp_Target"*/, 0LL);
    if ( !v11 )
      goto LABEL_15;
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !tlcont )
      goto LABEL_15;
    WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)battleTargetList, 0LL);
    AffectedObject = WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)tlcont,
                                                                      0LL);
    if ( !AffectedObject )
      goto LABEL_15;
    UnityEngine_Transform__SetParent(AffectedObject, (UnityEngine_Transform_o *)battleTargetList, 0LL);
  }
}


bool __fastcall BattleSequenceManager__updateCutInEvents(
        BattleSequenceManager_o *this,
        System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs,
        System_String_o *cutInName,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  bool v13; // w21
  Il2CppObject *current; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int v17; // w19
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A50DB4 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__, evs);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__, v9);
    this = (BattleSequenceManager_o *)sub_1B863B8(
                                        &Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__,
                                        v10);
    byte_4A50DB4 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !evs )
    sub_1B86614(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v13 = v11;
    if ( !v11 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1B86614(v11, v12);
    if ( System_String__op_Equality((System_String_o *)v19.fields._current[4].klass, cutInName, 0LL) )
    {
      current[3].monitor = obj;
      sub_1B8635C((CGThumbnailListItem_o *)&current[3].monitor, (int32_t)obj, v15, v16);
      v17 = 4;
      goto LABEL_10;
    }
  }
  v17 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v13 && v17 == 4;
}


void __fastcall BattleSequenceManager_BattleTarget___ctor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A487E1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_4A487E7 )
  {
    sub_1B863B8(&UnityEngine_Quaternion_TypeInfo, method);
    byte_4A487E7 = 1;
  }
  this->fields.originalRotation = UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActorControl_o *__fastcall BattleSequenceManager_BattleTarget__getBattleActor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  return this->fields.targetActor;
}


int32_t __fastcall BattleSequenceManager_BattleTarget__get_positionIndex(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  return this->fields._positionIndex_k__BackingField;
}


void __fastcall BattleSequenceManager_BattleTarget__restoreTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UnityEngine_Component_o *targetActor; // x0

  if ( this->fields.isSave )
  {
    targetActor = (UnityEngine_Component_o *)this->fields.targetActor;
    if ( !targetActor
      || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL
      || (UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)targetActor,
            this->fields.originalRotation,
            0LL),
          (targetActor = (UnityEngine_Component_o *)this->fields.targetActor) == 0LL)
      || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL )
    {
      sub_1B86614(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0LL);
  }
  this->fields.targetActor = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.targetActor, 0, v2, v3);
}


UnityEngine_GameObject_o *__fastcall BattleSequenceManager_BattleTarget__saveTransform(
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
  targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL);
  if ( !targetActor
    || (localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)targetActor, 0LL),
        targetActor = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalRotation = localRotation,
        !targetActor)
    || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetActor, 0LL),
        targetActor = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalScale = localScale,
        !targetActor) )
  {
LABEL_7:
    sub_1B86614(targetActor, method);
  }
  return UnityEngine_Component__get_gameObject(targetActor, 0LL);
}


void __fastcall BattleSequenceManager_BattleTarget__set_positionIndex(
        BattleSequenceManager_BattleTarget_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._positionIndex_k__BackingField = value;
}


void __fastcall BattleSequenceManager_BattleTarget__setup(
        BattleSequenceManager_BattleTarget_o *this,
        BattleActorControl_o *bac,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleActorControl_o **p_targetActor; // x20

  this->fields.targetActor = bac;
  p_targetActor = &this->fields.targetActor;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.targetActor, (int32_t)bac, index, method);
  *((_DWORD *)p_targetActor + 9) = index;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__108___ctor(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleSequenceManager__WaitEndSequence_d__108__MoveNext(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleSequenceManager__WaitEndSequence_d__108_o *v4; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *wait_5__2; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4A50FCA & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__108_o *)sub_1B863B8(
                                                                &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                method);
    byte_4A50FCA = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    v4->fields._wait_5__2 = v7;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1B86614(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1B8635C(p__2__current, (int32_t)wait_5__2, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__108__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleSequenceManager__WaitEndSequence_d__108__System_Collections_IEnumerator_Reset(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_BattleSequenceManager__WaitEndSequence_d__108_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__108__System_Collections_IEnumerator_get_Current(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__108__System_IDisposable_Dispose(
        BattleSequenceManager__WaitEndSequence_d__108_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleSequenceManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A50FC4 & 1) == 0 )
  {
    sub_1B863B8(&BattleSequenceManager___c_TypeInfo, v1);
    byte_4A50FC4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)BattleSequenceManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleSequenceManager___c___ctor(BattleSequenceManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__76_0(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x1,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1B86614(this, x1);
  return System_Single__CompareTo_63244176(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__76_2(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOPlayAudioEvent_o *x1,
        WellFired_USFGOPlayAudioEvent_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1B86614(this, x1);
  return System_Single__CompareTo_63244176(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool __fastcall BattleSequenceManager___c___setup_b__88_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B86614(this, 0LL);
  return SwitchActiveBaseConditionComponent__IsTimingBeforeTreasureDevice(comp, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass114_0___ctor(
        BattleSequenceManager___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass114_0___OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0(
        BattleSequenceManager___c__DisplayClass114_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  struct BgmPlayArgs_o *args; // x8

  if ( !x || (args = this->fields.args) == 0LL )
    sub_1B86614(this, x);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, args->fields._BgmName_k__BackingField, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass117_0___ctor(
        BattleSequenceManager___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass117_0___SetupTargetInfo_b__0(
        BattleSequenceManager___c__DisplayClass117_0_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass117_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A50FC5 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass117_0_o *)sub_1B863B8(
                                                               &Method_System_Collections_Generic_HashSet_int__Add__,
                                                               x);
    byte_4A50FC5 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass117_0_o *)v4->fields.targetList) == 0LL )
    sub_1B86614(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleSequenceManager___c__DisplayClass124_0___ctor(
        BattleSequenceManager___c__DisplayClass124_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass124_0___GetTargetPosIndexTransform_b__0(
        BattleSequenceManager___c__DisplayClass124_0_o *this,
        BattleSequenceManager_BattleTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields._positionIndex_k__BackingField == this->fields.posIndex;
}


void __fastcall BattleSequenceManager___c__DisplayClass143_0___ctor(
        BattleSequenceManager___c__DisplayClass143_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass143_0___ExistBackupBgmPlayGroup_b__0(
        BattleSequenceManager___c__DisplayClass143_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, this->fields.checkBgmName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass75_0___ctor(
        BattleSequenceManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass75_0___loadSequence_b__0(
        BattleSequenceManager___c__DisplayClass75_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass75_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager_o *_4__this; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v14; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_4A50FC6 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, data);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1B863B8(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__, v6);
    sub_1B863B8(&StringLiteral_12816/*"StandardCutIn"*/, v7);
    this = (BattleSequenceManager___c__DisplayClass75_0_o *)sub_1B863B8(
                                                              &ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                              v8);
    byte_4A50FC6 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass75_0_o *)AssetData__GetObject_object__49610244(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_12816/*"StandardCutIn"*/,
                                                                  (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.CutInPrefab, (int32_t)this, v10, v11),
        (this = (BattleSequenceManager___c__DisplayClass75_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1B86614(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v14 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1B86604(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v20, v21);
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
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass75_0___loadSequence_b__1(
        BattleSequenceManager___c__DisplayClass75_0_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  void *_4__this; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  struct BattleSequenceManager_o *v22; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x22
  System_Action_o *v26; // x23
  struct BattleSequenceManager_o *v27; // x8
  struct BattleSequenceManager_o *v28; // x8
  _DWORD *v29; // x20
  int v30; // w8
  int v31; // w9
  __int64 v32; // x10
  struct BattleSequenceManager_o *v33; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A50FC7 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, obj);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7);
    sub_1B863B8(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__, v8);
    sub_1B863B8(&BattleSequenceManager___c__DisplayClass75_1_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_9364/*"NoblePhantasm_"*/, v10);
    byte_4A50FC7 = 1;
  }
  v11 = sub_1B86604(BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_26;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 16) = obj;
  v16 = (__int64 *)(v11 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)obj, v17, v18);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  v21 = *v16;
  *((_QWORD *)_4__this + 9) = *v16;
  sub_1B8635C((CGThumbnailListItem_o *)((char *)_4__this + 72), v21, v19, v20);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_26;
  _4__this = (void *)ServantAssetLoadManager__getVoiceId(
                       (ServantAssetLoadManager_o *)_4__this,
                       this->fields.chrId,
                       this->fields.limitCount,
                       0LL);
  overwriteSvtVoiceId = (int)_4__this;
  if ( this->fields.overwriteSvtVoiceId )
  {
    v22 = this->fields.__4__this;
    if ( !v22 )
      goto LABEL_26;
    overwriteSvtVoiceId = v22->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v24 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v25 = System_String__Concat_61645176((System_String_o *)StringLiteral_9364/*"NoblePhantasm_"*/, v24, 0LL);
  v26 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v11,
    Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__,
    0LL);
  if ( !Instance )
    goto LABEL_26;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v25, v26, 1, 0LL);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_26;
  _4__this = v27->fields.seqObject;
  if ( !_4__this )
    goto LABEL_26;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_26;
  v29 = _4__this;
  v28->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v29 )
    goto LABEL_26;
  v30 = v29[6];
  if ( v30 < 1 )
    return;
  v31 = 0;
  while ( 1 )
  {
    if ( v30 == v31 )
      sub_1B8661C(_4__this, v13);
    v32 = *(_QWORD *)&v29[2 * v31 + 8];
    if ( !v32 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v32 + 64) && *(_BYTE *)(v32 + 69) )
      break;
    if ( v30 == ++v31 )
      return;
  }
  v33 = this->fields.__4__this;
  if ( !v33 )
LABEL_26:
    sub_1B86614(_4__this, v13);
  v33->fields.isNoDamageMotionInDamageNoble = 1;
}


void __fastcall BattleSequenceManager___c__DisplayClass75_1___ctor(
        BattleSequenceManager___c__DisplayClass75_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass75_1___loadSequence_b__2(
        BattleSequenceManager___c__DisplayClass75_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass75_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleSequenceManager___c__DisplayClass75_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  System_String_o *v8; // x20
  int v9; // w8
  BattleSequenceManager___c__DisplayClass75_1_o *v10; // x21
  unsigned int v11; // w23
  int v12; // w24
  UnityEngine_Behaviour_o *v13; // x22
  struct BattleSequenceManager___c__DisplayClass75_0_o *v14; // x8
  BattleSequenceManager_o *v15; // x21
  System_Action_o *_9__3; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v2 = this;
  if ( (byte_4A50FC8 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___, v3);
    sub_1B863B8(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__, v4);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A50FC8 = 1;
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
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  v9 = (int)this->fields.CS___8__locals1;
  v10 = this;
  if ( v9 >= 1 )
  {
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      if ( v11 >= v9 )
        sub_1B8661C(this, method);
      v13 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v10->fields.__9__4 + (int)v11);
      if ( !v13 )
        break;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v13->klass[1]._2.typeHierarchy)(
                                                                v13,
                                                                v13->klass[1]._2.unity_user_data);
      if ( (v12 & (unsigned int)this & 1) != 0 )
      {
        v8 = *(System_String_o **)&v13[2].fields.m_CachedPtr;
        v12 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v13, 0, 0LL);
      }
      v9 = (int)v10->fields.CS___8__locals1;
      if ( (int)++v11 >= v9 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1B86614(this, method);
  }
LABEL_15:
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_20;
  v15 = v14->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v17, v18);
  }
  if ( !v15 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v15, v8, _9__3, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass75_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass75_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass75_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager___c__DisplayClass75_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass75_0_o *v11; // x8
  struct BattleSequenceManager_o *v12; // x8
  BattleSequenceManager___c__DisplayClass75_1_o *v13; // x20
  struct BattleSequenceManager___c__DisplayClass75_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x8
  UnityEngine_Object_o *v16; // x21
  Il2CppObject *ComponentInChildren_object; // x22
  struct BattleSequenceManager___c__DisplayClass75_0_o *v18; // x8
  struct BattleSequenceManager_o *v19; // x21
  struct BattleSequenceManager___c__DisplayClass75_0_o *v20; // x8
  struct BattleSequenceManager_o *v21; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v23; // x22
  UIStandFigureM_o *MeshLocal; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
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
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct BattleSequenceManager___c__DisplayClass75_0_o *v60; // x8

  v2 = this;
  if ( (byte_4A50FC9 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___, v3);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___, v4);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v7);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_1B863B8(
                                                              &Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__,
                                                              v8);
    byte_4A50FC9 = 1;
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
                                                            (const MethodInfo_2FC1054 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_73;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_73;
  v13 = this;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)v12->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2FC1054 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_73;
  v15 = v14->fields.__4__this;
  if ( !v15 )
    goto LABEL_73;
  v16 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)v15->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2FC1054 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v13,
                                                            0LL,
                                                            0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = v2->fields.CS___8__locals1;
    if ( !v18 )
      goto LABEL_73;
    if ( !v13 )
      goto LABEL_73;
    v19 = v18->fields.__4__this;
    if ( !v19 )
      goto LABEL_73;
    v19->fields.faceType = (int32_t)v13[1].fields.obj;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    v20 = v2->fields.CS___8__locals1;
    if ( !v20 )
      goto LABEL_73;
    v21 = v20->fields.__4__this;
    if ( !v21 )
      goto LABEL_73;
    performance = v21->fields.performance;
    if ( !performance )
      goto LABEL_73;
    v23 = (StandFigureManager_o *)this;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)performance->fields.root_field;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !v23 )
      goto LABEL_73;
    MeshLocal = StandFigureManager__CreateMeshLocal(v23, (UnityEngine_GameObject_o *)this, 0LL);
    v19->fields.standFigure = MeshLocal;
    sub_1B8635C((CGThumbnailListItem_o *)&v19->fields.standFigure, (int32_t)MeshLocal, v25, v26);
    v27 = v2->fields.CS___8__locals1;
    if ( !v27 )
      goto LABEL_73;
    v28 = v27->fields.__4__this;
    if ( !v28 )
      goto LABEL_73;
    standFigure = (UnityEngine_Object_o *)v28->fields.standFigure;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
    v30 = v2->fields.CS___8__locals1;
    if ( !v30 )
      goto LABEL_73;
    v31 = v30->fields.__4__this;
    if ( !v31 )
      goto LABEL_73;
    monitor = (int32_t)v13[1].monitor;
    v31->fields.loadStandFigureId = monitor;
    battleActor = v30->fields.battleActor;
    if ( !battleActor )
      goto LABEL_73;
    battleSvtData = battleActor->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)battleSvtData->fields.svtdata;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)ServantEntity__GetTrueSvtId((ServantEntity_o *)this, 0LL);
    if ( monitor == (_DWORD)this || (monitor_high = HIDWORD(v13[1].monitor), monitor_high == -1) )
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
                                                                0LL);
      if ( !v44 )
        goto LABEL_73;
      v44->fields.loadStandFigureLimitCount = (int)this;
      v36 = v2->fields.CS___8__locals1;
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
                                                              0LL);
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
                                                              0LL);
    if ( !v48 )
      goto LABEL_73;
    UnityEngine_Object__set_name(v48, (System_String_o *)this, 0LL);
    v49 = v2->fields.CS___8__locals1;
    if ( !v49 )
      goto LABEL_73;
    v50 = v49->fields.__4__this;
    if ( !v50 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)v50->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
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
      _9__4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__,
        0LL);
      v2->fields.__9__4 = _9__4;
      sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v58, v59);
    }
    if ( !v53 )
LABEL_73:
      sub_1B86614(this, method);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UIStandFigureM__SetCharacter_42091484(
                                                              v53,
                                                              loadStandFigureId,
                                                              loadStandFigureLimitCount,
                                                              faceType,
                                                              _9__4,
                                                              1,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_70:
      v60 = v2->fields.CS___8__locals1;
      if ( v60 )
      {
        this = (BattleSequenceManager___c__DisplayClass75_1_o *)v60->fields.__4__this;
        if ( this )
        {
          BattleSequenceManager__LoadEndStandFigure(
            (BattleSequenceManager_o *)this,
            v2->fields.obj,
            v60->fields.onComplete,
            0LL);
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
                                                              0LL,
                                                              0LL);
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
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
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
      v41 = (WellFired_USFGOPlayCutInBase_o *)v16;
    }
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v41,
                                                              obj,
                                                              onComplete,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
  }
}


void __fastcall BattleSequenceManager___c__DisplayClass75_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass75_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass75_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_1B86614(this, method);
  BattleSequenceManager__LoadEndStandFigure(
    CS___8__locals1->fields.__4__this,
    this->fields.obj,
    CS___8__locals1->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass76_0___ctor(
        BattleSequenceManager___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass76_0___FixSyncGroupRandomAudioPlayIndex_b__1(
        BattleSequenceManager___c__DisplayClass76_0_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return WellFired_USFGOSetAudioGroupIndexConditional__FixSyncAudioGroupIndex(x, this->fields.syncGroupName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass79_0___ctor(
        BattleSequenceManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass79_0___CreateCutInStandFigure_b__0(
        BattleSequenceManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  BattleSequenceManager__LoadEndStandFigure(_4__this, this->fields.obj, this->fields.onComplete, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager_onGameObjectLoadComplete___ctor(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D5518;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D54F8;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D54B0;
}


System_IAsyncResult_o *__fastcall BattleSequenceManager_onGameObjectLoadComplete__BeginInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = obj;
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__Invoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    obj,
    *(_QWORD *)&this->fields.extra_arg);
}
void BattleSequenceManager___cctor(const MethodInfo *method)
{
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4C59966 & 1) == 0 )
  {
    sub_1C3E564(&BattleSequenceManager_TypeInfo);
    byte_4C59966 = 1;
  }
  static_fields = BattleSequenceManager_TypeInfo->static_fields;
  static_fields->defaultForceObi_16_9 = 1;
  static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_Dictionary_object__int__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_HashSet_T__o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4C59965 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_Object__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_Action__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
    sub_1C3E564(&StringLiteral_9373/*"N_{0}{1}"*/);
    byte_4C59965 = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.ReleaseSoundNames, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.DelayInvokeMethodList, (int32_t)v6, v7, v8);
  v9 = StringLiteral_9373/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9373/*"N_{0}{1}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.PosNodeFormatNP, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.npEndDeleteObjects, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
  System_Collections_Generic_Dictionary_object__Color____ctor(
    v15,
    (const MethodInfo_3465F24 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
  this->fields.rendererBaseAddColorsDict = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__o *)v15;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.rendererBaseAddColorsDict, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v18;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.battleTargetList, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.createdObjects, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v24,
    (const MethodInfo_346C0FC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v24;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v27,
    (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v27;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v27, v28, v29);
  this->fields.nowTargetAlpha = 1.0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39FFA90 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
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

  if ( (byte_4C59945 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_24738/*"wait"*/);
    byte_4C59945 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v5 )
  {
    if ( !actor )
      sub_1C3E7C0(v5, v6);
    BattleActorControl__RevertDefaultAnimation(actor, 0);
    BattleActorControl__playAnimation_47217028(actor, (System_String_o *)StringLiteral_24738/*"wait"*/, 0, 0);
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
  const MethodInfo *v3; // x3

  this->fields.executingTdInfoCache = info;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.executingTdInfoCache, (int32_t)info, (int32_t)method, v3);
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

  if ( (byte_4C59963 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C3E564(&Method_System_Nullable_Color__get_Value__);
    byte_4C59963 = 1;
  }
  entity = 0;
  memset(&v38, 0, sizeof(v38));
  performance = this->fields.performance;
  if ( !performance
    || (performance = (BattlePerformance_o *)BattlePerformance__EnumerateActorControls(performance, 0)) == 0 )
  {
    sub_1C3E7C0(performance, method);
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
    v8 = sub_1C8ED7C(performance, System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(BattlePerformance_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  if ( !v10 )
    sub_1C3E7C0(0, v9);
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
      v14 = sub_1C8ED7C(v10, System_Collections_IEnumerator_TypeInfo, 0);
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
      v18 = sub_1C8ED7C(v10, System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
    v21 = (BattleActorControl_o *)v19;
    if ( !v19 )
      sub_1C3E7C0(0, v20);
    v22 = *(BattleServantData_o **)(v19 + 528);
    if ( !v22 )
      sub_1C3E7C0(0, v20);
    if ( BattleServantData__TryGetDisplayTypeDetailEntity(v22, &entity, 0) )
    {
      if ( !entity )
        sub_1C3E7C0(0, v23);
      NpcServantDisplayTypeDetailEntity__get_AddColor(&v37, entity, 0);
      v38 = v37;
      if ( v37.fields.hasValue )
      {
        RendererArray = BattleActorControl__GetRendererArray(v21, 1, 0);
        v26 = RendererArray;
        if ( !RendererArray )
          sub_1C3E7C0(0, v25);
        max_length = RendererArray->max_length;
        if ( (int)max_length >= 1 )
        {
          v28 = 0;
          do
          {
            if ( v28 >= (unsigned int)max_length )
              sub_1C3E7C8(RendererArray, v25);
            v29 = (Il2CppObject *)v26->m_Items[v28];
            rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
            Value = System_Nullable_Color___get_Value(
                      &v38,
                      (const MethodInfo_38D8138 *)Method_System_Nullable_Color__get_Value__);
            if ( !rendererBaseAddColorsDict )
              sub_1C3E7C0(v31, v32);
            System_Collections_Generic_Dictionary_object__Color___set_Item(
              rendererBaseAddColorsDict,
              v29,
              Value,
              (const MethodInfo_34668E0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
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
    v36 = sub_1C8ED7C(v10, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v10, *(_QWORD *)(v36 + 8));
}


bool BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_4C5995B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4C5995B = 1;
  }
  if ( System_String__Equals_63672500(bgmName, this->fields.BackupBgmName, 0) )
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
              (const MethodInfo_3116DF0 *)Method_System_Linq_Enumerable_Contains_string___);
  }
}


void BattleSequenceManager__ClearExecutingTdInfoCache(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.executingTdInfoCache = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.executingTdInfoCache, 0, v2, v3);
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
    sub_1C3E7C0(this, 0);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, const MethodInfo *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.methodPtr)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_46238772(this, obj, onComplete, v8);
}


bool BattleSequenceManager__CreateCutInStandFigure_46238772(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v17; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v24; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v28; // x24

  if ( (byte_4C5992E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__);
    sub_1C3E564(&BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
    byte_4C5992E = 1;
  }
  v7 = sub_1C3E7B0(BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass79_0___ctor((BattleSequenceManager___c__DisplayClass79_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = obj;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), (int32_t)obj, v12, v13);
  *(_QWORD *)(v7 + 32) = onComplete;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)onComplete, v14, v15);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_16;
  v17 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_16;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0);
  if ( !v17 )
    goto LABEL_16;
  MeshLocal = StandFigureManager__CreateMeshLocal(v17, (UnityEngine_GameObject_o *)Instance, 0);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.standFigure, (int32_t)MeshLocal, v20, v21);
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
          v24 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v28 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(
            v28,
            (Il2CppObject *)v7,
            Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__,
            0);
          if ( v24 )
            return UIStandFigureM__SetCharacter_44097436(
                     v24,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v28,
                     1,
                     0);
        }
      }
    }
LABEL_16:
    sub_1C3E7C0(Instance, v9);
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
  const MethodInfo *v8; // x3
  _BOOL4 v9; // w21
  struct System_String_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL4 v13; // w22
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x23
  System_String_o *BgmName; // x0
  const MethodInfo *v20; // x3
  BgmPlayArgsGroup_o *v21; // x19
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x20
  float v25; // s0
  int v26; // w28
  System_Nullable_float__o v27; // x0
  System_Nullable_float__o v28; // x21
  const MethodInfo_38DB36C *v29; // x3
  System_Nullable_float__o v30; // x1
  System_Nullable_float__o v31; // x2
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x20
  __int64 v36; // x0
  __int64 v37; // x1
  struct BattlePerformance_o *v38; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v40; // x8
  struct BattlePerformance_o *v41; // x8
  System_String_o *v42; // x19
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  BattleSequenceManager_c *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x5
  __int64 v59; // x6
  __int64 v60; // x7
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  __int64 v63; // x21
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  __int64 v74; // x21
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  System_Collections_Hashtable_o *v79; // x0
  __int64 v80; // x0
  int v81; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v82; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_long__o v86; // 0:x0.16

  if ( (byte_4C59946 & 1) == 0 )
  {
    sub_1C3E564(&BattleSequenceManager_TypeInfo);
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
    sub_1C3E564(&Method_System_Nullable_long___ctor__);
    sub_1C3E564(&Method_System_Nullable_float___ctor__);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_9836/*"OnChangeBgmVolume"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C59946 = 1;
  }
  changeBgm = 0;
  memset(&v84, 0, sizeof(v84));
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_90;
  FieldEnvData = BattlePerformance__get_FieldEnvData((BattlePerformance_o *)performance, 0);
  v5 = FieldEnvData ? BattleFieldEnvironmentData__get_CurBGMName(FieldEnvData, 0) : 0LL;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( BasicHelper__EqualExceptNullOrEmpty(v5, this->fields.BackupBgmName, 0) || this->fields.DemoMode )
  {
    v9 = 0;
  }
  else
  {
    *p_BackupBgmName = v5;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.BackupBgmName, (int32_t)v5, (int32_t)v7, v8);
    v9 = 1;
  }
  if ( BattleSequenceManager__TryGetAfterChangeBgm(this, &changeBgm, v7) )
  {
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v10 = BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
            changeBgm,
            this->fields.performance,
            this->fields.BackupBgmName,
            0);
    this->fields.BackupBgmName = v10;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.BackupBgmName, (int32_t)v10, v11, v12);
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v13 = BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(changeBgm, 0);
    v9 = 1;
  }
  else
  {
    v13 = 0;
  }
  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
  {
    v15 = BattleActionData_AfterChangeField__GetPriorityBgmName(
            changeFieldAfter,
            this->fields.performance,
            this->fields.BackupBgmName,
            0);
    this->fields.BackupBgmName = v15;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.BackupBgmName, (int32_t)v15, v16, v17);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v13 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0);
    v9 = 1;
  }
  v18 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1C3E7C0(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0);
  if ( ((v13 | System_String__op_Inequality(v18, BgmName, 0)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    performance = sub_1C3E60C(object___TypeInfo, 8);
    if ( !performance )
      goto LABEL_90;
    v35 = performance;
    v36 = StringLiteral_19710/*"from"*/;
    if ( StringLiteral_19710/*"from"*/ )
    {
      v36 = sub_1C3E6A0(StringLiteral_19710/*"from"*/, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
      if ( !v36 )
        goto LABEL_92;
      v37 = StringLiteral_19710/*"from"*/;
    }
    else
    {
      v37 = 0;
    }
    if ( !*(_DWORD *)(v35 + 24) )
      goto LABEL_91;
    *(_QWORD *)(v35 + 32) = v37;
    sub_1C3E508((CGThumbnailListItem_o *)(v35 + 32), v37, v33, v34);
    v49 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v49 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v83.fields._list = v49->static_fields->NoblePhantasmBgmVolumeRate;
    v36 = j_il2cpp_value_box_0(float_TypeInfo, &v83, v43, v44, v45, v46, v47, v48);
    v52 = v36;
    if ( !v36 || (v36 = sub_1C3E6A0(v36, *(_QWORD *)(*(_QWORD *)v35 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v35 + 24) <= 1u )
        goto LABEL_91;
      *(_QWORD *)(v35 + 40) = v52;
      sub_1C3E508((CGThumbnailListItem_o *)(v35 + 40), v52, v50, v51);
      v36 = StringLiteral_24130/*"to"*/;
      if ( StringLiteral_24130/*"to"*/ )
      {
        v36 = sub_1C3E6A0(StringLiteral_24130/*"to"*/, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
        if ( !v36 )
          goto LABEL_92;
        v37 = StringLiteral_24130/*"to"*/;
      }
      else
      {
        v37 = 0;
      }
      if ( *(_DWORD *)(v35 + 24) <= 2u )
        goto LABEL_91;
      *(_QWORD *)(v35 + 48) = v37;
      sub_1C3E508((CGThumbnailListItem_o *)(v35 + 48), v37, v53, v54);
      *(_DWORD *)&v82.fields.hasValue = 1;
      v36 = j_il2cpp_value_box_0(int_TypeInfo, &v82, v55, v56, v57, v58, v59, v60);
      v63 = v36;
      if ( !v36 || (v36 = sub_1C3E6A0(v36, *(_QWORD *)(*(_QWORD *)v35 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v35 + 24) <= 3u )
          goto LABEL_91;
        *(_QWORD *)(v35 + 56) = v63;
        sub_1C3E508((CGThumbnailListItem_o *)(v35 + 56), v63, v61, v62);
        v36 = StringLiteral_24091/*"time"*/;
        if ( StringLiteral_24091/*"time"*/ )
        {
          v36 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
          if ( !v36 )
            goto LABEL_92;
          v37 = StringLiteral_24091/*"time"*/;
        }
        else
        {
          v37 = 0;
        }
        if ( *(_DWORD *)(v35 + 24) <= 4u )
          goto LABEL_91;
        *(_QWORD *)(v35 + 64) = v37;
        sub_1C3E508((CGThumbnailListItem_o *)(v35 + 64), v37, v64, v65);
        v81 = 1056964608;
        v36 = j_il2cpp_value_box_0(float_TypeInfo, &v81, v66, v67, v68, v69, v70, v71);
        v74 = v36;
        if ( !v36 || (v36 = sub_1C3E6A0(v36, *(_QWORD *)(*(_QWORD *)v35 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v35 + 24) <= 5u )
            goto LABEL_91;
          *(_QWORD *)(v35 + 72) = v74;
          sub_1C3E508((CGThumbnailListItem_o *)(v35 + 72), v74, v72, v73);
          v36 = StringLiteral_22456/*"onupdate"*/;
          if ( StringLiteral_22456/*"onupdate"*/ )
          {
            v36 = sub_1C3E6A0(StringLiteral_22456/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
            if ( !v36 )
              goto LABEL_92;
            v37 = StringLiteral_22456/*"onupdate"*/;
          }
          else
          {
            v37 = 0;
          }
          if ( *(_DWORD *)(v35 + 24) <= 6u )
            goto LABEL_91;
          *(_QWORD *)(v35 + 80) = v37;
          sub_1C3E508((CGThumbnailListItem_o *)(v35 + 80), v37, v75, v76);
          v36 = StringLiteral_9836/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9836/*"OnChangeBgmVolume"*/ )
          {
            v37 = 0;
LABEL_84:
            if ( *(_DWORD *)(v35 + 24) > 7u )
            {
              *(_QWORD *)(v35 + 88) = v37;
              sub_1C3E508((CGThumbnailListItem_o *)(v35 + 88), v37, v77, v78);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v79 = iTween__Hash((System_Object_array *)v35, 0);
              iTween__ValueTo(gameObject, v79, 0);
              return;
            }
LABEL_91:
            sub_1C3E7C8(v36, v37);
          }
          v36 = sub_1C3E6A0(StringLiteral_9836/*"OnChangeBgmVolume"*/, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
          if ( v36 )
          {
            v37 = StringLiteral_9836/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v80 = sub_1C3E7E4(v36);
    sub_1C3E68C(v80, 0);
  }
  performance = BattleSequenceManager__ExistBackupBgmPlayGroup(this, v9, this->fields.BackupBgmName, v20);
  if ( (performance & 1) != 0 )
  {
    performance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( performance )
    {
      performance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)performance, 0);
      if ( performance )
      {
        v21 = (BgmPlayArgsGroup_o *)performance;
        performance = *(_QWORD *)(performance + 16);
        if ( performance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v83,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v84 = v83;
          while ( 1 )
          {
            v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v84,
                    (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v22 )
              break;
            current = v84.fields._current;
            if ( !v84.fields._current )
              sub_1C3E7C0(v22, v23);
            v25 = (float)(__int64)v84.fields._current[2].klass + -800.0;
            if ( v25 == INFINITY )
              v26 = 0x80000000;
            else
              v26 = (int)v25;
            v82 = 0;
            v27 = (System_Nullable_float__o)&v82;
            System_Nullable_float____ctor(v27, 0.5, (const MethodInfo_38DD2E0 *)Method_System_Nullable_float___ctor__);
            v28 = v82;
            v86.fields.value = v26 & (unsigned int)~(v26 >> 31);
            *(_OWORD *)&v83.fields._list = 0u;
            *(_QWORD *)&v86.fields.hasValue = &v83;
            System_Nullable_long____ctor(v86, Method_System_Nullable_long___ctor__, v29);
            v30 = 0;
            v31 = v28;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v30, v31, *(System_Nullable_long__o *)&v83.fields._list, 0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v84,
            (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_41238520(v21, 0, 0);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v9 )
  {
    v38 = this->fields.performance;
    if ( !v38 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v38->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    performance = UnityEngine_Object__op_Inequality(logic, 0, 0);
    if ( (performance & 1) != 0 )
    {
      v40 = this->fields.performance;
      if ( v40 )
      {
        performance = (__int64)v40->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0, 0);
          v41 = this->fields.performance;
          if ( v41 )
          {
            performance = (__int64)v41->fields.logic;
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
  v42 = *p_BackupBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v42, 0);
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
  const MethodInfo *v11; // x3
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4C5995D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
    sub_1C3E564(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__);
    sub_1C3E564(&BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
    byte_4C5995D = 1;
  }
  v7 = sub_1C3E7B0(BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass143_0___ctor((BattleSequenceManager___c__DisplayClass143_0_o *)v7, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  *(_QWORD *)(v7 + 16) = checkBgmName;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)checkBgmName, v10, v11);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0;
  v13 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0);
  v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51410108(
           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_31074BC *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
    sub_1C3E7C0(0, method);
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
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__51715312; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x21
  BattleSequenceManager___c_c *v12; // x0
  System_Comparison_T__o *_9__76_0; // x23
  Il2CppObject *v14; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Func_object__bool__o *v18; // x23
  System_Collections_Generic_List_object__o *v19; // x21
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  BattleSequenceManager___c_c *v21; // x0
  System_Comparison_T__o *_9__76_2; // x19
  Il2CppObject *v23; // x22
  struct BattleSequenceManager___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C5992D & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___);
    sub_1C3E564(&System_Comparison_USFGOPlayAudioEvent__TypeInfo);
    sub_1C3E564(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__);
    sub_1C3E564(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1C3E564(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__);
    sub_1C3E564(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__);
    sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__);
    sub_1C3E564(&BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
    sub_1C3E564(&BattleSequenceManager___c_TypeInfo);
    byte_4C5992D = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v6 = sub_1C3E7B0(BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass76_0___ctor((BattleSequenceManager___c__DisplayClass76_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_27;
  *(_QWORD *)(v6 + 16) = syncGroupName;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 16), (int32_t)syncGroupName, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__51715312 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                                                                                           sequence,
                                                                                           (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v11 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v11,
    ComponentsInChildren_object__51715312,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v12 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v12 = BattleSequenceManager___c_TypeInfo;
  }
  _9__76_0 = (System_Comparison_T__o *)v12->static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleSequenceManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__76_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__76_0,
      v14,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__,
      0);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__76_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__76_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__76_0, (int32_t)_9__76_0, v16, v17);
  }
  System_Collections_Generic_List_object___Sort_58421028(
    v11,
    _9__76_0,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v18 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v11,
          (System_Func_T__bool__o *)v18,
          (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__51715312 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                                                                                             sequence,
                                                                                             (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v19 )
    {
      System_Collections_Generic_List_object___AddRange(
        v19,
        ComponentsInChildren_object__51715312,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v20 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                                                             sequence,
                                                             (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v19,
        v20,
        (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v21 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v21 = BattleSequenceManager___c_TypeInfo;
      }
      _9__76_2 = (System_Comparison_T__o *)v21->static_fields->__9__76_2;
      if ( !_9__76_2 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = BattleSequenceManager___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v21->static_fields->__9;
        _9__76_2 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__76_2,
          v23,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__,
          0);
        v24 = BattleSequenceManager___c_TypeInfo->static_fields;
        v24->__9__76_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__76_2;
        sub_1C3E508((CGThumbnailListItem_o *)&v24->__9__76_2, (int32_t)_9__76_2, v25, v26);
      }
      System_Collections_Generic_List_object___Sort_58421028(
        v19,
        _9__76_2,
        (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        v19,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v28.fields._current )
          sub_1C3E7C0(0, v27);
      }
      while ( (((__int64 (*)(void))v28.fields._current->klass->vtable[16].methodPtr)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1C3E7C0(ComponentsInChildren_object__51715312, v8);
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

  if ( (byte_4C59931 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59931 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1C3E7C0(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0);
}


UnityEngine_Color_o BattleSequenceManager__GetRendererBaseAddColor(
        BattleSequenceManager_o *this,
        UnityEngine_SkinnedMeshRenderer_o *inputRenderer,
        const MethodInfo *method)
{
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C59962 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
    byte_4C59962 = 1;
  }
  v5.fields.r = 0.0;
  v5.fields.g = 0.0;
  v5.fields.b = 0.0;
  v5.fields.a = 0.0;
  return BasicHelper__GetValue_object__Color_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.rendererBaseAddColorsDict,
           (Il2CppObject *)inputRenderer,
           v5,
           (const MethodInfo_30E7AF0 *)Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C59950 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C3E564(&StringLiteral_6042/*"Enemy"*/);
    sub_1C3E564(&StringLiteral_10681/*"Player"*/);
    byte_4C59950 = 1;
  }
  if ( isEnemy )
    v8 = &StringLiteral_6042/*"Enemy"*/;
  else
    v8 = &StringLiteral_10681/*"Player"*/;
  v9 = (Il2CppObject *)*v8;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v21 = pos;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13, v14, v15, v16);
  v18 = System_String__Format_63677760(format, v9, v17, 0);
  if ( !Instance )
    sub_1C3E7C0(v18, v19);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v18, 0);
}


UnityEngine_Transform_o *BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass124_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v9; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4C59951 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
    sub_1C3E564(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass124_0__GetTargetPosIndexTransform_b__0__);
    sub_1C3E564(&BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
    byte_4C59951 = 1;
  }
  v5 = (BattleSequenceManager___c__DisplayClass124_0_o *)sub_1C3E7B0(BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass124_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.posIndex = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v9 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
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
                                        (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v6 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0);
    if ( v6 )
      return UnityEngine_GameObject__get_transform(v6, 0);
LABEL_9:
    sub_1C3E7C0(v6, v7);
  }
  return result;
}


bool BattleSequenceManager__HasFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o **fxdVoice,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *fixedVoice; // x20

  *fxdVoice = 0;
  sub_1C3E508((CGThumbnailListItem_o *)fxdVoice, 0, (int32_t)method, v3);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_1C3E508((CGThumbnailListItem_o *)fxdVoice, (int32_t)fixedVoice, v6, v7);
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

  if ( (byte_4C5995C & 1) == 0 )
  {
    sub_1C3E564(&BattleSequenceManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5995C = 1;
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
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1C3E7C0(ExecutingTdInfo, v7);
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

  if ( (byte_4C5995E & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C5995E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  monitor = (UnityEngine_Object_o *)v2[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  v2 = (UnityEngine_GameObject_o *)v2[3].monitor;
  if ( !v2 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1C3E7C0(v2, v3);
  return LOBYTE(Component_object[34].monitor) == 0;
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

  if ( (byte_4C59960 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59960 = 1;
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4C5992F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&SoundManager_TypeInfo);
    byte_4C5992F = 1;
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
    sub_1C3E7C0(IsNullOrEmpty, v8);
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_14;
  items = IsNullOrEmpty->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++IsNullOrEmpty->fields._version;
  if ( !items )
    goto LABEL_14;
  size = IsNullOrEmpty->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IsNullOrEmpty,
      (Il2CppObject *)bgmName,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v14[4] = (Il2CppClass *)bgmName;
    sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)bgmName, v9, v10);
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

  if ( (byte_4C59930 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59930 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0, 0) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_1C3E7C0(0, v8);
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
  UnityEngine_GameObject_o *klass; // x0
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

  if ( (byte_4C5994C & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_18999/*"en_Parts_Up01"*/);
    sub_1C3E564(&StringLiteral_18998/*"en_Parts_Under01"*/);
    byte_4C5994C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CoreObj, 0, 0) && this->fields.IsPlaying )
  {
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0, 0);
    if ( ((unsigned __int8)klass & 1) == 0 )
    {
      v8 = this->fields.performance;
      if ( !v8 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v8->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0, 0);
      if ( ((unsigned __int8)klass & 1) == 0 )
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
                                                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_object, 0, 0);
          if ( ((unsigned __int8)klass & 1) == 0 )
          {
            if ( !Component_object )
              goto LABEL_54;
            klass = (UnityEngine_GameObject_o *)Component_object[22].klass;
            if ( !klass )
              goto LABEL_54;
            if ( BattleServantData__isMultiTargetCore((BattleServantData_o *)klass, 0) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0, 0) )
              {
                klass = this->fields.SingleTarget;
                if ( !klass )
                  goto LABEL_54;
                v14 = UnityEngine_GameObject__GetComponent_object_(
                        klass,
                        (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0, 0);
                if ( ((unsigned __int8)klass & 1) == 0 )
                {
                  if ( !v14 )
                    goto LABEL_54;
                  if ( LOBYTE(v14[34].monitor) )
                  {
                    klass = (UnityEngine_GameObject_o *)v14[33].klass;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)klass, 0) )
                      goto LABEL_37;
                    klass = (UnityEngine_GameObject_o *)v14[33].klass;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)klass, 0) )
                    {
LABEL_37:
                      klass = (UnityEngine_GameObject_o *)v14[33].klass;
                      if ( !klass )
                        goto LABEL_54;
                      klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                            (BattleServantData_o *)klass,
                                                            0);
                      if ( ((unsigned __int8)klass & 1) != 0 )
                      {
                        v15 = &StringLiteral_18999/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        klass = (UnityEngine_GameObject_o *)v14[33].klass;
                        if ( !klass )
                          goto LABEL_54;
                        klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                              (BattleServantData_o *)klass,
                                                              0);
                        if ( ((unsigned __int8)klass & 1) == 0 )
                          return 0;
                        v15 = &StringLiteral_18998/*"en_Parts_Under01"*/;
                      }
                      v16 = this->fields.performance;
                      if ( !v16 )
                        goto LABEL_54;
                      v17 = (System_String_o *)*v15;
                      v18 = v16->fields.data;
                      klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Component_object,
                                                            0);
                      if ( !v18 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v18,
                                                                    (UnityEngine_Transform_o *)klass,
                                                                    v17,
                                                                    0);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                            x = position.fields.x;
                            y = position.fields.y;
                            z = position.fields.z;
                            klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(TransformChild, 0);
                            if ( klass )
                            {
                              v28 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)klass, 0);
                              v23 = v28.fields.x;
                              v24 = v28.fields.y;
                              v25 = v28.fields.z;
                              klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)Component_object,
                                                                    0);
                              if ( klass )
                              {
                                v29.fields.z = z - v25;
                                v29.fields.y = y - v24;
                                v29.fields.x = x - v23;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v29, 0);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1C3E7C0(klass, v7);
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
  CGThumbnailListItem_o *p_BgChangedCallback; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  performance = this->fields.performance;
  this->fields.IsBgBusy = 0;
  if ( !performance || (v3 = this, (this = (BattleSequenceManager_o *)performance->fields.bgPerf) == 0) )
    sub_1C3E7C0(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (CGThumbnailListItem_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(intptr_t, intptr_t))BgChangedCallback->fields.invoke_impl)(
      BgChangedCallback->fields.method_code,
      BgChangedCallback->fields.method);
    p_BgChangedCallback->klass = 0;
    sub_1C3E508(p_BgChangedCallback, 0, v6, v7);
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

  if ( (byte_4C59941 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    byte_4C59941 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v6 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0);
    if ( !v6 )
      sub_1C3E7C0(0, v7);
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
      v12 = sub_1C8ED7C(v6, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))v12)(
            v9,
            *(_QWORD *)(v12 + 8));
    if ( !v14 )
      sub_1C3E7C0(0, v13);
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
        v18 = sub_1C8ED7C(v14, System_Collections_IEnumerator_TypeInfo, 0);
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
        v22 = sub_1C8ED7C(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
      if ( !v23 )
        sub_1C3E7C0(0, v24);
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
      v30 = sub_1C8ED7C(v14, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  }
}


void BattleSequenceManager__OnEndNoblePhantasm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x0

  if ( (byte_4C59961 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
    byte_4C59961 = 1;
  }
  rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
  if ( !rendererBaseAddColorsDict )
    sub_1C3E7C0(0, method);
  System_Collections_Generic_Dictionary_object__Color___Clear(
    rendererBaseAddColorsDict,
    (const MethodInfo_3466AA0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
}


void BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v4, 0);
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
  const MethodInfo *v27; // x3
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  BattlePerformance_o *v29; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x10
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  struct UnityEngine_GameObject_array *saveWaitPlayer; // x9
  __int64 v33; // x20
  __int64 v34; // x22
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v36; // x23
  UnityEngine_Object_o *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct UnityEngine_GameObject_array *v40; // x8
  struct UnityEngine_GameObject_array *v41; // x9
  Il2CppClass *v42; // x1
  struct UnityEngine_GameObject_array *v43; // x27
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v45; // x21
  UnityEngine_Object_o *v46; // x23
  char v47; // w22
  UnityEngine_Object_o *Component_object; // x23
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v50; // x20
  __int64 v51; // x23
  unsigned __int64 v52; // x9
  unsigned __int64 v53; // x27
  UnityEngine_Object_o *v54; // x22
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct UnityEngine_GameObject_array *v57; // x8
  struct UnityEngine_GameObject_array *v58; // x9
  Il2CppClass *v59; // x1
  struct UnityEngine_GameObject_array *v60; // x23
  il2cpp_array_size_t v61; // x8
  unsigned __int64 v62; // x27
  int v63; // w28
  UnityEngine_Object_o *v64; // x22
  char v65; // w21
  UnityEngine_Object_o *v66; // x22
  UnityEngine_Object_o *data; // x21
  struct UnityEngine_GameObject_array *v68; // x20
  il2cpp_array_size_t v69; // x8
  unsigned __int64 v70; // x22
  UnityEngine_Object_o *v71; // x21
  Il2CppObject *v72; // x0
  const MethodInfo *v73; // x2
  struct UnityEngine_GameObject_array *v74; // x20
  il2cpp_array_size_t v75; // x8
  unsigned __int64 v76; // x22
  UnityEngine_Object_o *v77; // x21
  Il2CppObject *v78; // x0
  const MethodInfo *v79; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v82; // x2
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  UnityEngine_Camera_o *v85; // x21
  int32_t cullingMask; // w22
  char v87; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v89; // w22
  char v90; // w0
  struct System_Action_USSequencer__o **p_OnCompleteActorCallback; // x19
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // t1
  UnityEngine_Object_o *v93; // x21
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  UnityEngine_Component_o *v96; // x19
  CGThumbnailListItem_o *v97; // x20
  UnityEngine_Object_o *klass; // x21
  UnityEngine_Object_o *v99; // x21
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  BattlePerformance_o *v102; // x19
  int32_t v103; // w20
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C59943 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&CommonUI_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Object__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Object__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C3E564(&StringLiteral_9516/*"NoblePhantasm/CutIns"*/);
    sub_1C3E564(&StringLiteral_3106/*"Battle2D"*/);
    byte_4C59943 = 1;
  }
  entity = 0;
  memset(&v107, 0, sizeof(v107));
  memset(&v106, 0, sizeof(v106));
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
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_106;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v105,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v107 = v105;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v107,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v107.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v107,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v105,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v106 = v105;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v106,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v19 = v106.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)v19, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v106,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    UnityEngine_Object__Destroy_71341564(v25, 0);
    *p_seqObject = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.seqObject, 0, v26, v27);
  }
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_106;
  v29 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  p_actorlist = v29->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_106;
  e_actorlist = v29->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_106;
  if ( ActorActiveList->fields._size == LODWORD(e_actorlist->max_length) + LODWORD(p_actorlist->max_length) )
  {
    saveWaitPlayer = this->fields.saveWaitPlayer;
    if ( saveWaitPlayer )
    {
      v33 = 4;
      v34 = 32;
      while ( 1 )
      {
        max_length_low = LODWORD(saveWaitPlayer->max_length);
        v36 = v33 - 4;
        if ( v33 - 4 >= (int)max_length_low )
          break;
        if ( v36 >= max_length_low )
          goto LABEL_192;
        v37 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitPlayer->obj.klass + v33);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v37, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v40 = this->fields.saveWaitPlayer;
          if ( !v40 )
            goto LABEL_106;
          if ( v36 >= LODWORD(v40->max_length) )
            goto LABEL_192;
          v41 = (*p_performance)->fields.p_actorlist;
          if ( !v41 )
            goto LABEL_106;
          if ( v36 >= LODWORD(v41->max_length) )
            goto LABEL_192;
          v42 = (Il2CppClass *)*((_QWORD *)&v40->obj.klass + v33);
          *(Il2CppClass **)((char *)&v41->obj.klass + v34) = v42;
          sub_1C3E508((CGThumbnailListItem_o *)((char *)v41 + v34), (int32_t)v42, v38, v39);
        }
        saveWaitPlayer = this->fields.saveWaitPlayer;
        ++v33;
        v34 += 8;
        if ( !saveWaitPlayer )
          goto LABEL_106;
      }
      v29 = *p_performance;
      if ( !*p_performance )
        goto LABEL_106;
    }
    v43 = v29->fields.p_actorlist;
    if ( !v43 )
      goto LABEL_106;
    max_length = v43->max_length;
    if ( (int)max_length >= 1 )
    {
      v45 = 0;
      while ( v45 < (unsigned int)max_length )
      {
        v46 = (UnityEngine_Object_o *)v43->m_Items[v45];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v46, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v45,
                                                   (const MethodInfo_376ED80 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v46 )
            goto LABEL_106;
          v47 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, (unsigned __int8)transform & 1, 0);
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)v46,
                                                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v47 & 1, 0);
          }
        }
        LODWORD(max_length) = v43->max_length;
        if ( (__int64)++v45 >= (int)max_length )
          goto LABEL_92;
      }
LABEL_192:
      sub_1C3E7C8(transform, v5);
    }
    LODWORD(v45) = 0;
LABEL_92:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( saveWaitEnemy )
    {
      v50 = 4;
      v51 = 32;
      while ( 1 )
      {
        v52 = LODWORD(saveWaitEnemy->max_length);
        v53 = v50 - 4;
        if ( v50 - 4 >= (int)v52 )
          break;
        if ( v53 >= v52 )
          goto LABEL_192;
        v54 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v50);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v54, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v57 = this->fields.saveWaitEnemy;
          if ( !v57 )
            goto LABEL_106;
          if ( v53 >= LODWORD(v57->max_length) )
            goto LABEL_192;
          v58 = (*p_performance)->fields.e_actorlist;
          if ( !v58 )
            goto LABEL_106;
          if ( v53 >= LODWORD(v58->max_length) )
            goto LABEL_192;
          v59 = (Il2CppClass *)*((_QWORD *)&v57->obj.klass + v50);
          *(Il2CppClass **)((char *)&v58->obj.klass + v51) = v59;
          sub_1C3E508((CGThumbnailListItem_o *)((char *)v58 + v51), (int32_t)v59, v55, v56);
        }
        saveWaitEnemy = this->fields.saveWaitEnemy;
        ++v50;
        v51 += 8;
        if ( !saveWaitEnemy )
          goto LABEL_106;
      }
    }
    if ( !*p_performance )
      goto LABEL_106;
    v60 = (*p_performance)->fields.e_actorlist;
    if ( !v60 )
      goto LABEL_106;
    v61 = v60->max_length;
    if ( (int)v61 >= 1 )
    {
      v62 = 0;
      v63 = v45;
      while ( v62 < (unsigned int)v61 )
      {
        v64 = (UnityEngine_Object_o *)v60->m_Items[v62];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v64, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v63 + v62,
                                                   (const MethodInfo_376ED80 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v64 )
            goto LABEL_106;
          v65 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v64, (unsigned __int8)transform & 1, 0);
          v66 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v64,
                                          (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v66, 0, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v66 )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)v66[2].klass;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v65 & 1, 0);
          }
        }
        LODWORD(v61) = v60->max_length;
        if ( (__int64)++v62 >= (int)v61 )
          goto LABEL_124;
      }
      goto LABEL_192;
    }
LABEL_124:
    v29 = *p_performance;
    p_seqObject = &this->fields.seqObject;
    if ( !*p_performance )
      goto LABEL_106;
  }
  data = (UnityEngine_Object_o *)v29->fields.data;
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
  v68 = (*p_performance)->fields.p_actorlist;
  if ( !v68 )
    goto LABEL_106;
  v69 = v68->max_length;
  if ( (int)v69 >= 1 )
  {
    v70 = 0;
    while ( v70 < (unsigned int)v69 )
    {
      v71 = (UnityEngine_Object_o *)v68->m_Items[v70];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v71, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v71 )
          goto LABEL_106;
        v72 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v71,
                (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v72, v73);
      }
      LODWORD(v69) = v68->max_length;
      if ( (__int64)++v70 >= (int)v69 )
        goto LABEL_144;
    }
    goto LABEL_192;
  }
LABEL_144:
  if ( !*p_performance )
    goto LABEL_106;
  v74 = (*p_performance)->fields.e_actorlist;
  if ( !v74 )
    goto LABEL_106;
  v75 = v74->max_length;
  if ( (int)v75 >= 1 )
  {
    v76 = 0;
    while ( v76 < (unsigned int)v75 )
    {
      v77 = (UnityEngine_Object_o *)v74->m_Items[v76];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v77, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v77 )
          goto LABEL_106;
        v78 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v77,
                (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v78, v79);
      }
      LODWORD(v75) = v74->max_length;
      if ( (__int64)++v76 >= (int)v75 )
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.standFigure, 0, v83, v84);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v82) )
    BattleSequenceManager__ReleaseCpk(this, v5);
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0);
  v85 = this->fields.actorCamera;
  if ( !v85 )
    goto LABEL_106;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0);
  v87 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3106/*"Battle2D"*/, 0);
  UnityEngine_Camera__set_cullingMask(v85, (1 << v87) | cullingMask, 0);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_106;
  v89 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0);
  v90 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3106/*"Battle2D"*/, 0);
  UnityEngine_Camera__set_cullingMask(effectCamera, v89 & ~(1 << v90), 0);
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
    v93 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v93, 0, 0);
    v5 = 0;
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UnityEngine_Component_o *)*p_seqObject;
      if ( !*p_seqObject )
        goto LABEL_106;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)transform,
                                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
      v5 = (const MethodInfo *)transform;
    }
    if ( *p_OnCompleteActorCallback )
    {
      ((void (__fastcall *)(intptr_t, const MethodInfo *, intptr_t))(*p_OnCompleteActorCallback)->fields.invoke_impl)(
        (*p_OnCompleteActorCallback)->fields.method_code,
        v5,
        (*p_OnCompleteActorCallback)->fields.method);
      *p_OnCompleteActorCallback = 0;
      sub_1C3E508((CGThumbnailListItem_o *)p_OnCompleteActorCallback, 0, v94, v95);
      goto LABEL_176;
    }
LABEL_106:
    sub_1C3E7C0(transform, v5);
  }
LABEL_176:
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_106;
  v96 = transform;
  v97 = (CGThumbnailListItem_o *)&transform[3];
  klass = (UnityEngine_Object_o *)transform[3].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
  {
    v99 = (UnityEngine_Object_o *)v97->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v99, 0);
    v97->klass = 0;
    sub_1C3E508(v97, 0, v100, v101);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9516/*"NoblePhantasm/CutIns"*/, 0);
  BYTE1(v96[5].fields.m_CachedPtr) = 0;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)(*p_performance)->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0);
  v102 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(*p_performance, 0);
  if ( !*p_performance )
    goto LABEL_106;
  v103 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(*p_performance, 0);
  BattlePerformance__UpdateCameraClippingRange(v102, v103, CurrentGroundType, 0, 0);
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
  const MethodInfo *v26; // x3
  System_Func_object__bool__o *v27; // x23
  Il2CppObject *object; // x0
  const MethodInfo_38DB36C *v29; // x3
  System_Nullable_long__o v30; // x0
  BgmPlayArgs_o *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  System_Nullable_float__o v34; // x1
  System_Nullable_float__o v35; // x2
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_Nullable_long__o v40; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4C59948 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Find_BgmPlayArgs___);
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C3E564(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_long___ctor__);
    sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__);
    sub_1C3E564(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
    byte_4C59948 = 1;
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
             (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v7 = v5,
            (v5 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                           this->fields.backupBgmPlayArgsGroup,
                                           0)) == 0) )
      {
        sub_1C3E7C0(v5, v6);
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
        v12 = sub_1C8ED7C(v5, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
      }
      v14 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v12)(v9, *(_QWORD *)(v12 + 8));
      if ( !v14 )
        sub_1C3E7C0(0, v13);
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
          v18 = sub_1C8ED7C(v14, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
          break;
        v19 = sub_1C3E7B0(BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass114_0___ctor((BattleSequenceManager___c__DisplayClass114_0_o *)v19, 0);
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
          v23 = sub_1C8ED7C(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v14, *(_QWORD *)(v23 + 8));
        if ( !v19 )
          sub_1C3E7C0(v24, v24);
        *(_QWORD *)(v19 + 16) = v24;
        sub_1C3E508((CGThumbnailListItem_o *)(v19 + 16), v24, v25, v26);
        v27 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v19,
          Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0);
        object = BasicHelper__Find_object_(
                   v7,
                   (System_Func_T__bool__o *)v27,
                   (const MethodInfo_30E39DC *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v30.fields.value = (int64_t)object[2].klass;
        else
          v30.fields.value = 0;
        v31 = *(BgmPlayArgs_o **)(v19 + 16);
        *(_QWORD *)&v40.fields.hasValue = 0;
        v40.fields.value = 0;
        *(_QWORD *)&v30.fields.hasValue = &v40;
        System_Nullable_long____ctor(v30, Method_System_Nullable_long___ctor__, v29);
        if ( !v31 )
          sub_1C3E7C0(v32, v33);
        v34 = 0;
        v35 = 0;
        BgmPlayArgs__Update(v31, v34, v35, v40, 0);
      }
      v36 = *(_QWORD *)v14;
      v37 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_39;
        }
        v39 = v36 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_39:
        v39 = sub_1C8ED7C(v14, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v39)(v14, *(_QWORD *)(v39 + 8));
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

  if ( (byte_4C59944 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59944 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v4 )
  {
    if ( !actor )
      sub_1C3E7C0(v4, v5);
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v14; // x1
  Il2CppClass **v15; // x0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C59949 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BattleSequenceManager__ReleaseCpk_b__115_0__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Action__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C3E564(&StringLiteral_9519/*"NoblePhantasm_"*/);
    byte_4C59949 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v24 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v8 = System_Int32__ToString((int32_t)&v24, 0);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_63636468((System_String_o *)StringLiteral_9519/*"NoblePhantasm_"*/, v8, 0);
  if ( !ReleaseSoundNames )
    goto LABEL_17;
  items = ReleaseSoundNames->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++ReleaseSoundNames->fields._version;
  if ( !items )
    goto LABEL_17;
  size = ReleaseSoundNames->fields._size;
  v14 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ReleaseSoundNames,
      (Il2CppObject *)Instance,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v14;
    sub_1C3E508((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v17 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__115_0__, 0);
  if ( !DelayInvokeMethodList
    || (v20 = DelayInvokeMethodList->fields._items,
        v21 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v20) )
  {
LABEL_17:
    sub_1C3E7C0(Instance, v4);
  }
  v22 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v17,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    DelayInvokeMethodList->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v17;
    sub_1C3E508((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
  }
  this->fields.delayInvokeTimer = 1.0;
}


void BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.fixedVoice = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fixedVoice, 0, v2, v3);
}


void BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.intactBgmList = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.intactBgmList, 0, v2, v3);
}


ExecutingTdInfo_o *BattleSequenceManager__SafeGetExecutingTdInfo(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0
  __int64 v3; // x1

  if ( (byte_4C59964 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C59964 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !v2 )
      goto LABEL_11;
    if ( v2[23].monitor )
    {
      v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( v2 )
        return (ExecutingTdInfo_o *)v2[23].monitor;
LABEL_11:
      sub_1C3E7C0(v2, v3);
    }
  }
  return ExecutingTdInfo__GetDefault(0);
}


void BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C59947 & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    byte_4C59947 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.backupBgmPlayArgsGroup, (int32_t)v3, v4, v5);
}


UnityEngine_GameObject_o *BattleSequenceManager__SearchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t limitCount; // w21
  UnityEngine_Object_o *Manager__LoadNoblePhantasmEffect; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  UnityEngine_Object_o *v11; // x0
  UnityEngine_Object_o *v12; // x19

  if ( (byte_4C5993B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    sub_1C3E564(&StringLiteral_3097/*"Battle/Prefab/"*/);
    byte_4C5993B = 1;
  }
  limitCount = this->fields.limitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadNoblePhantasmEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                               tdId,
                                                               limitCount,
                                                               name,
                                                               0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Manager__LoadNoblePhantasmEffect, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (Il2CppObject *)Manager__LoadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v9,
                                         (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v10 = System_String__Concat_63636468((System_String_o *)StringLiteral_3097/*"Battle/Prefab/"*/, name, 0);
  v11 = UnityEngine_Resources__Load(v10, 0);
  if ( v11 )
  {
    if ( (UnityEngine_GameObject_c *)v11->klass == UnityEngine_GameObject_TypeInfo )
      v12 = v11;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (Il2CppObject *)v12;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v9,
                                         (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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

  if ( (byte_4C5994D & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C3E564(&StringLiteral_9371/*"N_Enemy2"*/);
    sub_1C3E564(&StringLiteral_9372/*"N_Player2"*/);
    byte_4C5994D = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                                        (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v9 = actor;
  v10 = (System_String_o **)((LOBYTE(actor[23].klass) != 0) != (LOBYTE(Component_object[34].monitor) != 0)
                           ? &StringLiteral_9371/*"N_Enemy2"*/
                           : &StringLiteral_9372/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v11 = 368;
  if ( LOBYTE(actor[23].klass) )
    v11 = 376;
  v12 = *(__int64 *)((char *)&performance->klass + v11);
  if ( !v12 )
LABEL_55:
    sub_1C3E7C0(actor, method);
  if ( (int)*(_QWORD *)(v12 + 24) >= 1 )
  {
    v13 = *v10;
    v14 = 0;
    v15 = *(_QWORD *)(v12 + 24);
    do
    {
      if ( v14 >= v15 )
        sub_1C3E7C8(actor, method);
      v16 = *(UnityEngine_GameObject_o **)(v12 + 32 + 8 * v14);
      v17 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, v17, 0) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
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
        if ( BYTE2(actor[30].fields.m_CachedPtr) && LOBYTE(v9[23].klass) )
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
          if ( data->fields.isMultiTargetBattle && LOBYTE(v9[23].klass) )
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
  const MethodInfo *v3; // x3

  if ( actionData )
    actionData = (BattleActionData_o *)actionData->fields._ChangeField_k__BackingField;
  if ( !this )
    sub_1C3E7C0(0, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.changeFieldAfter, (int32_t)actionData, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  void *battleTargetList; // x0
  int32_t v6; // w21

  if ( (byte_4C59959 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4C59959 = 1;
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
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
            *((_BYTE *)battleTargetList + 552),
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
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0);
        return;
      }
    }
LABEL_18:
    sub_1C3E7C0(battleTargetList, isReset);
  }
}


void BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.fixedVoice = voiceId;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fixedVoice, (int32_t)voiceId, (int32_t)method, v3);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C5995A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5995A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v6);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.intactBgmList, (int32_t)BgmNameListWithIds, v8, v9);
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
  if ( (byte_4C5994B & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5994B = 1;
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
    sub_1C3E7C0(this, targetActor);
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
            if ( !byte_4C506A1 )
            {
              this = (BattleSequenceManager_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
              byte_4C506A1 = 1;
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

  if ( (byte_4C59933 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4C59933 = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v7),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0) )
  {
LABEL_10:
    sub_1C3E7C0(actor, isStart);
  }
  v8 = 0;
  while ( v8 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v8,
                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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

  if ( (byte_4C59934 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_16629/*"_y0"*/);
    byte_4C59934 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0, 0);
  if ( v6 )
  {
    if ( !fbx )
      sub_1C3E7C0(v6, v7);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16629/*"_y0"*/, 0);
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

  if ( (byte_4C59932 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_2137/*"Actors/Actor"*/);
    byte_4C59932 = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1C3E7C0(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v9 = 0;
  do
  {
    v10 = v9 + 1;
    v22 = v9 + 1;
    v11 = System_Int32__ToString((int32_t)&v22, 0);
    v12 = (BattleSequenceManager_o *)System_String__Concat_63636468((System_String_o *)StringLiteral_2137/*"Actors/Actor"*/, v11, 0);
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
          sub_1C3E7C8(seqObject, playerList);
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
    v18 = (BattleSequenceManager_o *)System_String__Concat_63636468((System_String_o *)StringLiteral_2137/*"Actors/Actor"*/, v17, 0);
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
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  void *actor; // x0
  Il2CppObject *Component_object; // x23
  BattleActionData_o *klass; // x24
  System_Collections_Generic_HashSet_int__o *v10; // x25
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CGThumbnailListItem_o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x25
  BattleSequenceManager___c_c *v15; // x8
  System_Func_object__bool__o *_9__117_0; // x26
  Il2CppObject *v17; // x27
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  int v22; // w8
  void *v23; // x25
  unsigned int v24; // w26
  __int64 v25; // x8
  BattleActionData_BuffData_array *BuffList; // x0
  BattleSequenceManager___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x25
  System_Func_object__bool__o *_9__117_1; // x26
  Il2CppObject *v30; // x27
  struct BattleSequenceManager___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  int v35; // w8
  void *v36; // x25
  unsigned int v37; // w26
  __int64 v38; // x8
  BattleActionData_HealData_array *HealList; // x0
  BattleSequenceManager___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x25
  System_Func_object__bool__o *_9__117_2; // x26
  Il2CppObject *v43; // x27
  struct BattleSequenceManager___c_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  int v48; // w8
  void *v49; // x25
  unsigned int v50; // w20
  __int64 v51; // x8
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x24
  System_Action_object__o *v53; // x25
  int monitor_low; // w24
  System_Collections_Generic_HashSet_int__o *v55; // x22
  int v56; // w20
  int i; // w27
  __int64 v58; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x0
  __int64 v64; // x1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w21
  struct UnityEngine_GameObject_o *v68; // x21
  Il2CppObject *v69; // x23
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x2
  __int64 v73; // x1
  BattlePerformance_o *v74; // x0
  int32_t v75; // w20
  UnityEngine_Object_o *v76; // x21
  _BOOL8 v77; // x0
  __int64 v78; // x1
  Il2CppObject *v79; // x22
  BattleSequenceManager_BattleTarget_o *v80; // x21
  __int64 v81; // x1
  BattlePerformance_o *v82; // x0
  __int64 ServantPosIndex; // x0
  __int64 v84; // x1
  __int64 v85; // x1
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  Il2CppClass **v92; // x8
  int v93; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v94; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C5994A & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    sub_1C3E564(&BattleSequenceManager_BattleTarget_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleActionData_BuffData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleActionData_DamageData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C3E564(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_1C3E564(&System_Func_BattleActionData_HealData__bool__TypeInfo);
    sub_1C3E564(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_0__);
    sub_1C3E564(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_1__);
    sub_1C3E564(&Method_BattleSequenceManager___c__SetupTargetInfo_b__117_2__);
    sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__3__);
    sub_1C3E564(&BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
    sub_1C3E564(&BattleSequenceManager___c_TypeInfo);
    byte_4C5994A = 1;
  }
  memset(&j, 0, sizeof(j));
  v3 = sub_1C3E7B0(BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass117_0___ctor((BattleSequenceManager___c__DisplayClass117_0_o *)v3, 0);
  this->fields.SingleTarget = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.SingleTarget, 0, v4, v5);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_96;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      klass = (BattleActionData_o *)Component_object[31].klass;
      v10 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v10,
        (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v3 )
      {
        *(_QWORD *)(v3 + 16) = v10;
        v13 = (CGThumbnailListItem_o *)(v3 + 16);
        sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v10, v11, v12);
        if ( klass )
        {
          DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                              klass,
                                                                              -1,
                                                                              0);
          v15 = BattleSequenceManager___c_TypeInfo;
          if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
            v15 = BattleSequenceManager___c_TypeInfo;
          }
          _9__117_0 = (System_Func_object__bool__o *)v15->static_fields->__9__117_0;
          if ( !_9__117_0 )
          {
            if ( !v15->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v15);
              v15 = BattleSequenceManager___c_TypeInfo;
            }
            v17 = (Il2CppObject *)v15->static_fields->__9;
            _9__117_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_DamageData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__117_0,
              v17,
              Method_BattleSequenceManager___c__SetupTargetInfo_b__117_0__,
              0);
            static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
            static_fields->__9__117_0 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__117_0;
            sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__117_0, (int32_t)_9__117_0, v19, v20);
          }
          v21 = System_Linq_Enumerable__Where_object_(
                  DamageList,
                  (System_Func_TSource__bool__o *)_9__117_0,
                  (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
          actor = System_Linq_Enumerable__ToArray_object_(
                    v21,
                    (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_DamageData___);
          if ( actor )
          {
            v22 = *((_DWORD *)actor + 6);
            v23 = actor;
            if ( v22 >= 1 )
            {
              v24 = 0;
              while ( v24 < v22 )
              {
                v25 = *((_QWORD *)v23 + (int)v24 + 4);
                if ( !v25 )
                  goto LABEL_96;
                v6 = *(unsigned int *)(v25 + 32);
                if ( (_DWORD)v6 )
                {
                  actor = v13->klass;
                  if ( !v13->klass )
                    goto LABEL_96;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v6,
                                    (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v22 = *((_DWORD *)v23 + 6);
                if ( (int)++v24 >= v22 )
                  goto LABEL_25;
              }
LABEL_97:
              sub_1C3E7C8(actor, v6);
            }
LABEL_25:
            BuffList = BattleActionData__getBuffList(klass, -1, 0);
            v27 = BattleSequenceManager___c_TypeInfo;
            v28 = (System_Collections_Generic_IEnumerable_TSource__o *)BuffList;
            if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
              v27 = BattleSequenceManager___c_TypeInfo;
            }
            _9__117_1 = (System_Func_object__bool__o *)v27->static_fields->__9__117_1;
            if ( !_9__117_1 )
            {
              if ( !v27->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v27);
                v27 = BattleSequenceManager___c_TypeInfo;
              }
              v30 = (Il2CppObject *)v27->static_fields->__9;
              _9__117_1 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_BuffData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                _9__117_1,
                v30,
                Method_BattleSequenceManager___c__SetupTargetInfo_b__117_1__,
                0);
              v31 = BattleSequenceManager___c_TypeInfo->static_fields;
              v31->__9__117_1 = (struct System_Func_BattleActionData_BuffData__bool__o *)_9__117_1;
              sub_1C3E508((CGThumbnailListItem_o *)&v31->__9__117_1, (int32_t)_9__117_1, v32, v33);
            }
            v34 = System_Linq_Enumerable__Where_object_(
                    v28,
                    (System_Func_TSource__bool__o *)_9__117_1,
                    (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleActionData_BuffData___);
            actor = System_Linq_Enumerable__ToArray_object_(
                      v34,
                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_BuffData___);
            if ( actor )
            {
              v35 = *((_DWORD *)actor + 6);
              v36 = actor;
              if ( v35 >= 1 )
              {
                v37 = 0;
                while ( v37 < v35 )
                {
                  v38 = *((_QWORD *)v36 + (int)v37 + 4);
                  if ( !v38 )
                    goto LABEL_96;
                  v6 = *(unsigned int *)(v38 + 44);
                  if ( (_DWORD)v6 )
                  {
                    actor = v13->klass;
                    if ( !v13->klass )
                      goto LABEL_96;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v6,
                                      (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v35 = *((_DWORD *)v36 + 6);
                  if ( (int)++v37 >= v35 )
                    goto LABEL_40;
                }
                goto LABEL_97;
              }
LABEL_40:
              HealList = BattleActionData__getHealList(klass, -1, 0);
              v40 = BattleSequenceManager___c_TypeInfo;
              v41 = (System_Collections_Generic_IEnumerable_TSource__o *)HealList;
              if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
                v40 = BattleSequenceManager___c_TypeInfo;
              }
              _9__117_2 = (System_Func_object__bool__o *)v40->static_fields->__9__117_2;
              if ( !_9__117_2 )
              {
                if ( !v40->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v40);
                  v40 = BattleSequenceManager___c_TypeInfo;
                }
                v43 = (Il2CppObject *)v40->static_fields->__9;
                _9__117_2 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleActionData_HealData__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__117_2,
                  v43,
                  Method_BattleSequenceManager___c__SetupTargetInfo_b__117_2__,
                  0);
                v44 = BattleSequenceManager___c_TypeInfo->static_fields;
                v44->__9__117_2 = (struct System_Func_BattleActionData_HealData__bool__o *)_9__117_2;
                sub_1C3E508((CGThumbnailListItem_o *)&v44->__9__117_2, (int32_t)_9__117_2, v45, v46);
              }
              v47 = System_Linq_Enumerable__Where_object_(
                      v41,
                      (System_Func_TSource__bool__o *)_9__117_2,
                      (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleActionData_HealData___);
              actor = System_Linq_Enumerable__ToArray_object_(
                        v47,
                        (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_HealData___);
              if ( actor )
              {
                v48 = *((_DWORD *)actor + 6);
                v49 = actor;
                if ( v48 >= 1 )
                {
                  v50 = 0;
                  while ( v50 < v48 )
                  {
                    v51 = *((_QWORD *)v49 + (int)v50 + 4);
                    if ( !v51 )
                      goto LABEL_96;
                    v6 = *(unsigned int *)(v51 + 32);
                    if ( (_DWORD)v6 )
                    {
                      actor = v13->klass;
                      if ( !v13->klass )
                        goto LABEL_96;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v6,
                                        (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v48 = *((_DWORD *)v49 + 6);
                    if ( (int)++v50 >= v48 )
                      goto LABEL_55;
                  }
                  goto LABEL_97;
                }
LABEL_55:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)klass->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v53 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v53,
                    (Il2CppObject *)v3,
                    Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__3__,
                    0);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v53,
                    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                monitor_low = LOBYTE(Component_object[34].monitor);
                v55 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v55,
                  (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v13->klass;
                if ( v13->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v94,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_3666A4C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v93 = 0;
                  j = v94;
                  v56 = 0;
LABEL_59:
                  for ( i = v56; ; ++i )
                  {
                    v56 = i;
                    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &j,
                            (const MethodInfo_353BBCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      break;
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1C3E7C0(0, v58);
                    current = (int32_t)j.fields._current;
                    ServantGameObject = BattlePerformance__getServantGameObject(
                                          performance,
                                          (int32_t)j.fields._current,
                                          0);
                    if ( !ServantGameObject )
                      sub_1C3E7C0(0, v62);
                    v63 = UnityEngine_GameObject__GetComponent_object_(
                            ServantGameObject,
                            (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                    if ( !v63 )
                      sub_1C3E7C0(0, v64);
                    if ( (monitor_low != 0) == (LOBYTE(v63[34].monitor) != 0) )
                    {
                      ++v93;
                      goto LABEL_59;
                    }
                    if ( !v55 )
                      sub_1C3E7C0(v63, v64);
                    System_Collections_Generic_HashSet_int___Add(
                      v55,
                      current,
                      (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &j,
                    (const MethodInfo_353BBC8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v93 && i == 1 )
                  {
                    v13->klass = (CGThumbnailListItem_c *)v55;
                    sub_1C3E508(v13, (int32_t)v55, v65, v66);
                  }
                  actor = v13->klass;
                  if ( v13->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v94,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_3666A4C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v67 = -1;
                      for ( j = v94;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &j,
                              (const MethodInfo_353BBCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v67 = (int32_t)j.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_353BBC8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_96;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v67, 0);
                      if ( !actor )
                        goto LABEL_96;
                      v68 = (struct UnityEngine_GameObject_o *)actor;
                      v69 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v68;
                      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.SingleTarget, (int32_t)v68, v70, v71);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v69, v72);
                    }
                    if ( v55 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v94,
                        v55,
                        (const MethodInfo_3666A4C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      j = v94;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &j,
                                (const MethodInfo_353BBCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v74 = this->fields.performance;
                        if ( !v74 )
                          sub_1C3E7C0(0, v73);
                        v75 = (int32_t)j.fields._current;
                        v76 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                        v74,
                                                        (int32_t)j.fields._current,
                                                        0);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v77 = UnityEngine_Object__op_Equality(v76, 0, 0);
                        if ( !v77 )
                        {
                          if ( !v76 )
                            sub_1C3E7C0(v77, v78);
                          v79 = UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v76,
                                  (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v80 = (BattleSequenceManager_BattleTarget_o *)sub_1C3E7B0(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor(v80, 0);
                          v82 = this->fields.performance;
                          if ( !v82 )
                            sub_1C3E7C0(0, v81);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v82, v75, 0);
                          if ( !v80 )
                            sub_1C3E7C0(ServantPosIndex, v84);
                          BattleSequenceManager_BattleTarget__setup(
                            v80,
                            (BattleActorControl_o *)v79,
                            ServantPosIndex,
                            0);
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1C3E7C0(0, v85);
                          items = battleTargetList->fields._items;
                          v90 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1C3E7C0(battleTargetList, v85);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= LODWORD(items->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v80,
                              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v92 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v92[4] = (Il2CppClass *)v80;
                            sub_1C3E508((CGThumbnailListItem_o *)(v92 + 4), (int32_t)v80, v86, v87);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_353BBC8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
LABEL_96:
    sub_1C3E7C0(actor, v6);
  }
}


void BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1C3E7C0(0, method);
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
  if ( (byte_4C59940 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59940 = 1;
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
    sub_1C3E7C0(this, isFullScreen);
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
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  BattleSequenceManager_o *v24; // x1
  Il2CppClass **v25; // x0
  int v26; // w22
  UnityEngine_Component_o *v27; // x0
  BattleSyncTransformComponent_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  intptr_t v31; // x8
  _QWORD *v32; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v34; // x8

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_4C5994F & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Object__Add__);
    this = (BattleSequenceManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5994F = 1;
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
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
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
        v22 = Method_System_Collections_Generic_List_Object__Add__;
        ++npEndDeleteObjects->fields._version;
        if ( !items )
          goto LABEL_43;
        size = npEndDeleteObjects->fields._size;
        v24 = this;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            npEndDeleteObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1C3E508((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
        }
        v26 = 0;
      }
      else
      {
        v26 = 1;
      }
      v27 = (UnityEngine_Component_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                         (WellFired_USTimelineContainer_o *)v5,
                                         0);
      this = (BattleSequenceManager_o *)BasicHelper__GetOrAddComponent_object_(
                                          v27,
                                          (const MethodInfo_30E7174 *)Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_43;
      v28 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0);
      if ( v26 )
      {
        tlcont = (WellFired_USTimelineContainer_o *)v28;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_43;
        v31 = this->fields.m_CachedPtr;
        v32 = Method_System_Collections_Generic_List_Object__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v31 )
          goto LABEL_43;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v31 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)tlcont,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = v31 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v34 + 32) = tlcont;
          sub_1C3E508((CGThumbnailListItem_o *)(v34 + 32), (int32_t)tlcont, v29, v30);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        return;
      }
LABEL_43:
      sub_1C3E7C0(this, tlcont);
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
  const MethodInfo *v28; // x3
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 TargetOfTreasureDevice; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C5995F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
    byte_4C5995F = 1;
  }
  memset(&v34, 0, sizeof(v34));
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
      sub_1C3E7C0(BattleActor, v6);
    }
    nowAction = performance->fields.nowAction;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      BattleActor,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v34 = v33;
    while ( 1 )
    {
      v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v10 )
        break;
      if ( !v34.fields._current )
        sub_1C3E7C0(v10, v11);
      monitor = v34.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0, 0);
      if ( !v13 )
      {
        if ( !monitor )
          sub_1C3E7C0(v13, v14);
        v15 = (UnityEngine_Object_o *)*((_QWORD *)monitor + 5);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v15, 0, 0) )
        {
          v17 = (UnityEngine_GameObject_o *)*((_QWORD *)monitor + 5);
          if ( !v17 )
            sub_1C3E7C0(0, v16);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v17,
                                                                    (const MethodInfo_3151A28 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1C3E7C0(IsNullOrEmpty, v20);
            v21 = Components_object[1].monitor;
            if ( (int)v21 >= 1 )
            {
              v22 = 0;
              do
              {
                if ( v22 >= (unsigned int)v21 )
                  sub_1C3E7C8(IsNullOrEmpty, v20);
                v23 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v22);
                v24 = sub_1C3E7B0(NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
                NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo___ctor(
                  (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v24,
                  0);
                if ( !v24 )
                  sub_1C3E7C0(v25, v26);
                *(_QWORD *)(v24 + 16) = monitor;
                sub_1C3E508((CGThumbnailListItem_o *)(v24 + 16), (int32_t)monitor, v27, v28);
                if ( !nowAction )
                  sub_1C3E7C0(v29, v30);
                *(_DWORD *)(v24 + 24) = BattleActionData__GetTargetSideFunctionRange(
                                          nowAction,
                                          *((_BYTE *)monitor + 552),
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
                    sub_1C3E7C0(TargetOfTreasureDevice, v32);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
                    v23,
                    (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v24,
                    0);
                }
                else
                {
                  if ( !v23 )
                    sub_1C3E7C0(TargetOfTreasureDevice, v32);
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
      &v34,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
  const MethodInfo *v3; // x3
  struct BattlePerformance_o *performance; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleActionData_TreasureDvcAfterChangeBgm_o *TdAfterChangeBgm_k__BackingField; // x19

  performance = this->fields.performance;
  if ( !performance )
    sub_1C3E7C0(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1C3E508((CGThumbnailListItem_o *)changeBgm, (int32_t)TdAfterChangeBgm_k__BackingField, (int32_t)method, v3);
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

  if ( (byte_4C5992B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    byte_4C5992B = 1;
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
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v10,
                (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v10.fields._current )
          (*(void (__fastcall **)(_QWORD, _QWORD))((char *)&v10.fields._current->klass + (unsigned __int64)&off_18))(
            *(Il2CppClass **)((char *)&v10.fields._current->klass + (unsigned __int64)&dword_40),
            *(Il2CppClass **)((char *)&v10.fields._current->klass + (unsigned __int64)&qword_28));
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v10,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v7 = this->fields.DelayInvokeMethodList;
      if ( !v7 )
LABEL_14:
        sub_1C3E7C0(DelayInvokeMethodList, v4);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C59942 & 1) == 0 )
  {
    sub_1C3E564(&BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
    byte_4C59942 = 1;
  }
  v3 = sub_1C3E7B0(BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__108___ctor((BattleSequenceManager__WaitEndSequence_d__108_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C3E7C0(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4C59967 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C59967 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v11.fields._current, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1C3E7C0(0, v6);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v7 = this->fields.ReleaseSoundNames;
  if ( !v7 )
LABEL_14:
    sub_1C3E7C0(ReleaseSoundNames, method);
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
    sub_1C3E7C0(this, comp);
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

  if ( (byte_4C59936 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    byte_4C59936 = 1;
  }
  FlagRequestNumber = System_String__Concat_63636468((System_String_o *)StringLiteral_16119/*"_"*/, labelName, 0);
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
        BattleData__AddServantVoicePlayed_45746548((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0);
        return;
      }
    }
LABEL_9:
    sub_1C3E7C0(FlagRequestNumber, v10);
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
  float z; // s8
  float y; // s9
  float x; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  BattlePerformance_o *performance; // x23
  System_Action_o *v20; // x24
  __int64 v21; // x0
  __int64 v22; // x1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_4C5993E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BattleSequenceManager_OnBgChanged__);
    byte_4C5993E = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.BgChangedCallback,
    (int32_t)callback,
    tp,
    (const MethodInfo *)parentCamera);
  performance = this->fields.performance;
  v20 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0);
  if ( !performance )
    sub_1C3E7C0(v21, v22);
  v23.fields.z = v13;
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  v23.fields.x = v15;
  v23.fields.y = v14;
  BattlePerformance__ForceChangeBg(performance, id, tp, v23, v24, 1, parentCamera, v20, 0);
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

  if ( (byte_4C59938 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    byte_4C59938 = 1;
  }
  FlagRequestNumber = System_String__Concat_63636468((System_String_o *)StringLiteral_16119/*"_"*/, labelName, 0);
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
    sub_1C3E7C0(FlagRequestNumber, v10);
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

  if ( (byte_4C59954 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4C59954 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_346CCA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1C3E7C0(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *BattleSequenceManager__getPlayedSoundList(BattleSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C59956 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_string___);
    byte_4C59956 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *BattleSequenceManager__get_BattleActor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4C59927 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59927 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0, 0) )
    return 0;
  v5 = this->fields.actor;
  if ( !v5 )
    sub_1C3E7C0(0, v4);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v5,
                                   (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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

  if ( (byte_4C5992A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    byte_4C5992A = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8EC78(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8EC78(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v8);
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

  if ( (byte_4C59928 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59928 = 1;
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
    sub_1C3E7C0(v4, v5);
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

  if ( (byte_4C59929 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59929 = 1;
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
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_object )
    goto LABEL_27;
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_27;
  nowAction = v9->fields.nowAction;
  v11 = (BattleServantData_o *)*((_QWORD *)Component_object + 66);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v11 )
LABEL_27:
    sub_1C3E7C0(Component_object, v5);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_object + 66), 0) )
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
  if ( *((_BYTE *)Component_object + 655) )
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
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x1
  System_Collections_Generic_Dictionary_object__int__o *v37; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_HashSet_T__o *v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3

  if ( (byte_4C5993D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4C5993D = 1;
  }
  this->fields.performance = performance;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.performance,
    (int32_t)performance,
    (int32_t)actor,
    (const MethodInfo *)players);
  this->fields.actor = actor;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.actor, (int32_t)actor, v15, v16);
  this->fields.playerActors = players;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.playerActors, (int32_t)players, v17, v18);
  this->fields.enemyActors = enemies;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.enemyActors, (int32_t)enemies, v19, v20);
  this->fields.actorCamera = camera;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.actorCamera, (int32_t)camera, v21, v22);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.effectCamera, (int32_t)middleCamera, v25, v26);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.cutInCamera, (int32_t)cutIncamera, v29, v30);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0)) == 0 )
  {
LABEL_7:
    sub_1C3E7C0(actorCamera, v24);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0);
  this->fields.originalCameraRoot = parent;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.originalCameraRoot, (int32_t)parent, v32, v33);
  this->fields.bgObject = bg;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bgObject, (int32_t)bg, v34, v35);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v36);
  v37 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v37,
    (const MethodInfo_346C0FC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v37;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v37, v38, v39);
  v40 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v40,
    (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v40;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v40, v41, v42);
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
  if ( (byte_4C59957 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C59957 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
}


bool BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_4C5993A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_2133/*"Actor"*/);
    sub_1C3E564(&StringLiteral_16791/*"animCamLoc"*/);
    byte_4C5993A = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2133/*"Actor"*/, 0)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16791/*"animCamLoc"*/, 0);
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
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  AssetLoader_LoadEndDataHandler_o *v27; // x19

  if ( (byte_4C5992C & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__);
    sub_1C3E564(&BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
    sub_1C3E564(&StringLiteral_9516/*"NoblePhantasm/CutIns"*/);
    byte_4C5992C = 1;
  }
  v17 = sub_1C3E7B0(BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass75_0___ctor((BattleSequenceManager___c__DisplayClass75_0_o *)v17, 0);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 56) = onComplete;
  *(_DWORD *)(v17 + 24) = chrId;
  *(_DWORD *)(v17 + 28) = limitCount;
  *(_DWORD *)(v17 + 32) = treasureDeviceId;
  *(_DWORD *)(v17 + 36) = treasureDeviceLv;
  *(_DWORD *)(v17 + 40) = npChargeStage;
  *(_DWORD *)(v17 + 44) = overwriteSvtVoiceId;
  sub_1C3E508((CGThumbnailListItem_o *)(v17 + 56), (int32_t)onComplete, v22, v23);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v17 + 24);
  this->fields.limitCount = *(_DWORD *)(v17 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v17 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v17 + 44);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v17 + 48) = Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)(v17 + 48), (int32_t)Component_object, v25, v26);
  actor = *(UnityEngine_GameObject_o **)(v17 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v17 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v17 + 48)) == 0) )
  {
LABEL_10:
    sub_1C3E7C0(actor, v19);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v17,
    Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9516/*"NoblePhantasm/CutIns"*/, v27, 1, 0);
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
  const MethodInfo *v13; // x3
  struct BattlePerformance_o *v14; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  __int64 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *seqObject; // x23
  int32_t chrId; // w23
  struct BattlePerformance_o *v21; // x8
  struct BattlePerformance_o *v22; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w25
  char v25; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v27; // w25
  char v28; // w0
  System_Collections_Generic_List_bool__o *v29; // x25
  BattleSequenceManager_o **p_ActorActiveList; // x23
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct BattlePerformance_o *v33; // x8
  struct UnityEngine_GameObject_array *v34; // x29
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v36; // x20
  UnityEngine_Object_o *v37; // x25
  const MethodInfo *v38; // x2
  BattleServantData_o *v39; // x26
  System_Collections_Generic_List_bool__o *v40; // x27
  struct System_Boolean_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  intptr_t m_CachedPtr; // x8
  _QWORD *v45; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct UnityEngine_GameObject_array *v49; // x8
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct BattlePerformance_o *v53; // x8
  struct UnityEngine_GameObject_array *v54; // x8
  __int64 v55; // x0
  struct BattlePerformance_o *v56; // x8
  struct UnityEngine_GameObject_array *v57; // x27
  il2cpp_array_size_t v58; // x8
  unsigned __int64 v59; // x20
  UnityEngine_Object_o *v60; // x24
  const MethodInfo *v61; // x2
  BattleServantData_o *v62; // x25
  System_Collections_Generic_List_bool__o *v63; // x26
  struct System_Boolean_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  intptr_t v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct UnityEngine_GameObject_array *v72; // x8
  __int64 v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct BattlePerformance_o *v76; // x8
  struct UnityEngine_GameObject_array *v77; // x8
  __int64 v78; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  BattleSequenceManager_o *v82; // x22
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  __int64 v86; // x5
  __int64 v87; // x6
  __int64 v88; // x7
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  BattleSequenceManager_o *v91; // x23
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  __int64 v97; // x5
  __int64 v98; // x6
  __int64 v99; // x7
  BattleSequenceManager_c *v100; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  BattleSequenceManager_o *v103; // x23
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  __int64 v109; // x5
  __int64 v110; // x6
  __int64 v111; // x7
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  BattleSequenceManager_o *v114; // x23
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  System_Collections_Hashtable_o *v119; // x0
  System_String_o *BgmName; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  const MethodInfo *v123; // x2
  BattleSequenceManager_o *v124; // x21
  CGThumbnailListItem_o *p_actorCamera; // x22
  System_Delegate_o *v126; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v127; // x24
  System_Delegate_o *v128; // x0
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  System_Delegate_o *v131; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v132; // x1
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  const MethodInfo *v135; // x2
  __int64 v136; // x0
  System_Action_USSequencer__o *v137; // [xsp+8h] [xbp-88h]
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // [xsp+18h] [xbp-78h]
  int v139; // [xsp+24h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-68h] BYREF
  int v141; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4C5993F & 1) == 0 )
  {
    sub_1C3E564(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__);
    sub_1C3E564(&BattleSequenceManager_TypeInfo);
    sub_1C3E564(&CommonUI_TypeInfo);
    sub_1C3E564(&FSUtility_TypeInfo);
    sub_1C3E564(&UnityEngine_GameObject___TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&WellFired_USSequencer_PlaybackDelegate_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C3E564(&StringLiteral_12874/*"ShowNobleInfo"*/);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_9836/*"OnChangeBgmVolume"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_3106/*"Battle2D"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    this = (BattleSequenceManager_o *)sub_1C3E564(&iTween_TypeInfo);
    byte_4C5993F = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_142;
  p_actorlist = performance->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_142;
  v10 = sub_1C3E60C(UnityEngine_GameObject___TypeInfo, LODWORD(p_actorlist->max_length));
  p_saveWaitPlayer = &v7->fields.saveWaitPlayer;
  v7->fields.saveWaitPlayer = (struct UnityEngine_GameObject_array *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&v7->fields.saveWaitPlayer, v10, v12, v13);
  v14 = v7->fields.performance;
  if ( !v14 )
    goto LABEL_142;
  e_actorlist = v14->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_142;
  v16 = sub_1C3E60C(UnityEngine_GameObject___TypeInfo, LODWORD(e_actorlist->max_length));
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v16;
  sub_1C3E508((CGThumbnailListItem_o *)&v7->fields.saveWaitEnemy, v16, v17, v18);
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
        (System_String_o *)StringLiteral_12874/*"ShowNobleInfo"*/,
        0.7,
        0);
    v21 = v7->fields.performance;
    if ( !v21 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v21->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0);
    v22 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v22 )
      goto LABEL_142;
    this = (BattleSequenceManager_o *)v22->fields.actioncamera;
    if ( !this )
      goto LABEL_142;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_142;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0);
    v25 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3106/*"Battle2D"*/, 0);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v25), 0);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_142;
    p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
    v27 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0);
    v28 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3106/*"Battle2D"*/, 0);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v28) | v27, 0);
    v29 = (System_Collections_Generic_List_bool__o *)sub_1C3E7B0(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v29,
      (const MethodInfo_376E81C *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v29;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1C3E508((CGThumbnailListItem_o *)&v7->fields.ActorActiveList, (int32_t)v29, v31, v32);
    v33 = v7->fields.performance;
    if ( !v33 )
      goto LABEL_142;
    v34 = v33->fields.p_actorlist;
    v137 = callback;
    if ( !v34 )
      goto LABEL_142;
    max_length = v34->max_length;
    if ( (int)max_length >= 1 )
    {
      v36 = 0;
      while ( v36 < (unsigned int)max_length )
      {
        v37 = (UnityEngine_Object_o *)v34->m_Items[v36];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v37, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v37 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v37,
                                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v39 = (BattleServantData_o *)this[1].fields.effectCamera;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v38);
          v40 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v37, 0);
          if ( !v40 )
            goto LABEL_142;
          items = v40->fields._items;
          v42 = Method_System_Collections_Generic_List_bool__Add__;
          ++v40->fields._version;
          if ( !items )
            goto LABEL_142;
          size = v40->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v40,
              (unsigned __int8)this & 1,
              *(const MethodInfo_376F080 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v40->fields._size = size + 1;
            items->m_Items[size] = (unsigned __int8)this & 1;
          }
          if ( !v39 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v39, 0);
          if ( ((unsigned __int8)this & 1) != 0 || v39->fields.isAnimPlayedWithdraw )
          {
            v49 = *p_saveWaitPlayer;
            if ( !*p_saveWaitPlayer )
              goto LABEL_142;
            if ( v36 >= LODWORD(v49->max_length) )
              break;
            v50 = (__int64)v49 + 8 * v36;
            *(_QWORD *)(v50 + 32) = v37;
            sub_1C3E508((CGThumbnailListItem_o *)(v50 + 32), (int32_t)v37, v47, v48);
            v53 = v7->fields.performance;
            if ( !v53 )
              goto LABEL_142;
            v54 = v53->fields.p_actorlist;
            if ( !v54 )
              goto LABEL_142;
            if ( v36 >= LODWORD(v54->max_length) )
              break;
            v55 = (__int64)v54 + 8 * v36;
            *(_QWORD *)(v55 + 32) = 0;
            sub_1C3E508((CGThumbnailListItem_o *)(v55 + 32), 0, v51, v52);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v37, 0, 0);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          m_CachedPtr = this->fields.m_CachedPtr;
          v45 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_142;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_376F080 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(m_CachedPtr + m_CancellationTokenSource_low + 32) = 0;
          }
        }
        LODWORD(max_length) = v34->max_length;
        if ( (__int64)++v36 >= (int)max_length )
          goto LABEL_57;
      }
LABEL_143:
      sub_1C3E7C8(this, isOpponent);
    }
LABEL_57:
    v56 = v7->fields.performance;
    if ( !v56 )
      goto LABEL_142;
    v57 = v56->fields.e_actorlist;
    if ( !v57 )
      goto LABEL_142;
    v58 = v57->max_length;
    if ( (int)v58 >= 1 )
    {
      v59 = 0;
      while ( v59 < (unsigned int)v58 )
      {
        v60 = (UnityEngine_Object_o *)v57->m_Items[v59];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v60, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v60 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v60,
                                              (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v62 = (BattleServantData_o *)this[1].fields.effectCamera;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v61);
          v63 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v60, 0);
          if ( !v63 )
            goto LABEL_142;
          v64 = v63->fields._items;
          v65 = Method_System_Collections_Generic_List_bool__Add__;
          ++v63->fields._version;
          if ( !v64 )
            goto LABEL_142;
          v66 = v63->fields._size;
          if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v63,
              (unsigned __int8)this & 1,
              *(const MethodInfo_376F080 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            v63->fields._size = v66 + 1;
            v64->m_Items[v66] = (unsigned __int8)this & 1;
          }
          if ( !v62 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v62, 0);
          if ( ((unsigned __int8)this & 1) != 0 || v62->fields.isAnimPlayedWithdraw )
          {
            v72 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_142;
            if ( v59 >= LODWORD(v72->max_length) )
              goto LABEL_143;
            v73 = (__int64)v72 + 8 * v59;
            *(_QWORD *)(v73 + 32) = v60;
            sub_1C3E508((CGThumbnailListItem_o *)(v73 + 32), (int32_t)v60, v70, v71);
            v76 = v7->fields.performance;
            if ( !v76 )
              goto LABEL_142;
            v77 = v76->fields.e_actorlist;
            if ( !v77 )
              goto LABEL_142;
            if ( v59 >= LODWORD(v77->max_length) )
              goto LABEL_143;
            v78 = (__int64)v77 + 8 * v59;
            *(_QWORD *)(v78 + 32) = 0;
            sub_1C3E508((CGThumbnailListItem_o *)(v78 + 32), 0, v74, v75);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v60, 0, 0);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v67 = this->fields.m_CachedPtr;
          v68 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v67 )
            goto LABEL_142;
          v69 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_376F080 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = v69 + 1;
            *(_BYTE *)(v67 + v69 + 32) = 0;
          }
        }
        LODWORD(v58) = v57->max_length;
        if ( (__int64)++v59 >= (int)v58 )
          goto LABEL_87;
      }
      goto LABEL_143;
    }
LABEL_87:
    if ( !isDemoMode )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
    this = (BattleSequenceManager_o *)sub_1C3E60C(object___TypeInfo, 8);
    if ( !this )
      goto LABEL_142;
    v82 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19710/*"from"*/;
    if ( StringLiteral_19710/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1C3E6A0(StringLiteral_19710/*"from"*/, v82->klass->_1.element_class);
      if ( !this )
        goto LABEL_144;
      *(_QWORD *)&isOpponent = StringLiteral_19710/*"from"*/;
    }
    else
    {
      *(_QWORD *)&isOpponent = 0;
    }
    if ( !LODWORD(v82->fields.m_CancellationTokenSource) )
      goto LABEL_143;
    v82->fields.sequenceManager = (struct UnityEngine_GameObject_o *)isOpponent;
    sub_1C3E508((CGThumbnailListItem_o *)&v82->fields.sequenceManager, isOpponent, v80, v81);
    v141 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v141, v83, v84, v85, v86, v87, v88);
    v91 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1C3E6A0(this, v82->klass->_1.element_class)) != 0 )
    {
      if ( LODWORD(v82->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_143;
      *(_QWORD *)&v82->fields.servantId = v91;
      sub_1C3E508((CGThumbnailListItem_o *)&v82->fields.servantId, (int32_t)v91, v89, v90);
      this = (BattleSequenceManager_o *)StringLiteral_24130/*"to"*/;
      if ( StringLiteral_24130/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1C3E6A0(StringLiteral_24130/*"to"*/, v82->klass->_1.element_class);
        if ( !this )
          goto LABEL_144;
        *(_QWORD *)&isOpponent = StringLiteral_24130/*"to"*/;
      }
      else
      {
        *(_QWORD *)&isOpponent = 0;
      }
      if ( LODWORD(v82->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_143;
      *(_QWORD *)&v82->fields.testNpPer = isOpponent;
      sub_1C3E508((CGThumbnailListItem_o *)&v82->fields.testNpPer, isOpponent, v92, v93);
      v100 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v100 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v100->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(
                                          float_TypeInfo,
                                          &NoblePhantasmBgmVolumeRate,
                                          v94,
                                          v95,
                                          v96,
                                          v97,
                                          v98,
                                          v99);
      v103 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1C3E6A0(this, v82->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v82->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_143;
        v82->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v103;
        sub_1C3E508((CGThumbnailListItem_o *)&v82->fields.ReleaseSoundNames, (int32_t)v103, v101, v102);
        this = (BattleSequenceManager_o *)StringLiteral_24091/*"time"*/;
        if ( StringLiteral_24091/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1C3E6A0(StringLiteral_24091/*"time"*/, v82->klass->_1.element_class);
          if ( !this )
            goto LABEL_144;
          *(_QWORD *)&isOpponent = StringLiteral_24091/*"time"*/;
        }
        else
        {
          *(_QWORD *)&isOpponent = 0;
        }
        if ( LODWORD(v82->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_143;
        v82->fields.performance = (struct BattlePerformance_o *)isOpponent;
        sub_1C3E508((CGThumbnailListItem_o *)&v82->fields.performance, isOpponent, v104, v105);
        v139 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(
                                            float_TypeInfo,
                                            &v139,
                                            v106,
                                            v107,
                                            v108,
                                            v109,
                                            v110,
                                            v111);
        v114 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1C3E6A0(this, v82->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v82->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_143;
          v82->fields.seqObject = (struct UnityEngine_GameObject_o *)v114;
          sub_1C3E508((CGThumbnailListItem_o *)&v82->fields.seqObject, (int32_t)v114, v112, v113);
          this = (BattleSequenceManager_o *)StringLiteral_22456/*"onupdate"*/;
          if ( StringLiteral_22456/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1C3E6A0(StringLiteral_22456/*"onupdate"*/, v82->klass->_1.element_class);
            if ( !this )
              goto LABEL_144;
            *(_QWORD *)&isOpponent = StringLiteral_22456/*"onupdate"*/;
          }
          else
          {
            *(_QWORD *)&isOpponent = 0;
          }
          if ( LODWORD(v82->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_143;
          v82->fields.actor = (struct UnityEngine_GameObject_o *)isOpponent;
          sub_1C3E508((CGThumbnailListItem_o *)&v82->fields.actor, isOpponent, v115, v116);
          this = (BattleSequenceManager_o *)StringLiteral_9836/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9836/*"OnChangeBgmVolume"*/ )
          {
            *(_QWORD *)&isOpponent = 0;
LABEL_125:
            if ( LODWORD(v82->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_143;
            v82->fields.CutInRoot = (struct UnityEngine_GameObject_o *)isOpponent;
            sub_1C3E508((CGThumbnailListItem_o *)&v82->fields.CutInRoot, isOpponent, v117, v118);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v119 = iTween__Hash((System_Object_array *)v82, 0);
            iTween__ValueTo(gameObject, v119, 0);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0);
              v7->fields.BackupBgmName = BgmName;
              sub_1C3E508((CGThumbnailListItem_o *)&v7->fields.BackupBgmName, (int32_t)BgmName, v121, v122);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v123);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v124 = this;
                    p_actorCamera = (CGThumbnailListItem_o *)&this->fields.actorCamera;
                    v126 = (System_Delegate_o *)this->fields.actorCamera;
                    v127 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1C3E7B0(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v127,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0);
                    v128 = System_Delegate__Combine(v126, (System_Delegate_o *)v127, 0);
                    v131 = v128;
                    if ( v128 )
                    {
                      v132 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v128->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_actorCamera->klass = (CGThumbnailListItem_c *)v128;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v128->klass == v132 )
                          goto LABEL_137;
                      }
                      sub_1C3EA80(v128);
                    }
                    p_actorCamera->klass = (CGThumbnailListItem_c *)v131;
LABEL_137:
                    sub_1C3E508(p_actorCamera, (int32_t)v131, v129, v130);
                    v7->fields.OnCompleteActorCallback = v137;
                    sub_1C3E508((CGThumbnailListItem_o *)&v7->fields.OnCompleteActorCallback, (int32_t)v137, v133, v134);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v124, 0);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                    if ( CommonUI__GetForceObi_16_9(0) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v135);
                    return;
                  }
                }
              }
            }
LABEL_142:
            sub_1C3E7C0(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_1C3E6A0(StringLiteral_9836/*"OnChangeBgmVolume"*/, v82->klass->_1.element_class);
          if ( this )
          {
            *(_QWORD *)&isOpponent = StringLiteral_9836/*"OnChangeBgmVolume"*/;
            goto LABEL_125;
          }
        }
      }
    }
LABEL_144:
    v136 = sub_1C3E7E4(this);
    sub_1C3E68C(v136, 0);
  }
}


void BattleSequenceManager__registNobleVoiceRandomPlay(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x20
  Il2CppClass *klass; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v9; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v11; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  VoiceMaster_o *v15; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v18; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v20; // x22

  if ( (byte_4C59958 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Voice_TypeInfo);
    byte_4C59958 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_31;
    if ( LOBYTE(Component_object[34].monitor) )
      return;
    klass = Component_object[33].klass;
    if ( !klass )
      goto LABEL_31;
    if ( !HIDWORD(klass->vtable[2].methodPtr)
      && !BattleActorControl__isNoVoice((BattleActorControl_o *)Component_object, 0) )
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
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_VoiceMaster___);
                v15 = (VoiceMaster_o *)MasterData_object;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( !Voice_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  FileName = Voice__getFileName(111, 0);
                  BattleSequenceManager__removeServantVoicePlayed(this, v15, chrId, FileName, v18);
                }
                max_length = v11->max_length;
                if ( (int)max_length >= 1 )
                {
                  v20 = 0;
                  do
                  {
                    if ( v20 >= (unsigned int)max_length )
                      sub_1C3E7C8(MasterData_object, v13);
                    BattleSequenceManager__addServantVoicePlayed(this, v15, this->fields.chrId, v11->m_Items[v20], v14);
                    LODWORD(max_length) = v11->max_length;
                    ++v20;
                  }
                  while ( (__int64)v20 < (int)max_length );
                }
                return;
              }
LABEL_31:
              sub_1C3E7C0(actor, method);
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

  if ( (byte_4C59937 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_16119/*"_"*/);
    byte_4C59937 = 1;
  }
  FlagRequestNumber = System_String__Concat_63636468((System_String_o *)StringLiteral_16119/*"_"*/, labelName, 0);
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
    sub_1C3E7C0(FlagRequestNumber, v10);
  }
}


void BattleSequenceManager__restoreBattleActorTransform(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C59953 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    byte_4C59953 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    battleTargetList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C3E7C0(0, v4);
    BattleSequenceManager_BattleTarget__restoreTransform((BattleSequenceManager_BattleTarget_o *)v8.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v5 = this->fields.battleTargetList;
  if ( !v5 )
LABEL_13:
    sub_1C3E7C0(battleTargetList, method);
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

  if ( (byte_4C5993C & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    this = (BattleSequenceManager_o *)sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C5993C = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0)) == 0 )
  {
    sub_1C3E7C0(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0);
  if ( !Enumerator )
    sub_1C3E7C0(0, v6);
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
      v11 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v15 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1C3E7C0(0, v17);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v16->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C3EA80(v16);
LABEL_37:
      sub_1C3E7C0(Component_object, v22);
    }
    gameObject = UnityEngine_Component__get_gameObject(v16, 0);
    if ( !gameObject )
      sub_1C3E7C0(0, v20);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v23 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v25 = System_String__Concat_63636468((System_String_o *)StringLiteral_1048/*"/"*/, name, 0);
    if ( System_String__op_Equality(monitor, v25, 0) )
      goto LABEL_27;
  }
  v23 = 0;
LABEL_27:
  v26 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
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
      v31 = sub_1C8ED7C(v26, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4C59955 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4C59955 = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_346CA9C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1C3E7C0(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
        const MethodInfo *method)
{
  __int64 seqObject; // x0
  Il2CppObject *Component_object; // x28
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__51318504; // x0
  BattleSequenceManager___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *_9__88_0; // x21
  Il2CppObject *v15; // x22
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_T__o *v19; // x20
  System_Action_object__o *v20; // x21
  BattleSequenceManager_o *v21; // x0
  const MethodInfo *v22; // x3
  WellFired_USTimelineContainer_o *v23; // x26
  System_Collections_Generic_List_object__o *v24; // x21
  System_Collections_Generic_List_object__o *v25; // x29
  Il2CppObject *klass; // x27
  System_Collections_Generic_List_object__o *monitor; // x27
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  __int64 v33; // x1
  Il2CppClass **v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppClass *v37; // x1
  __int64 v38; // x27
  void *v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppClass *v42; // x1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppClass *v47; // x8
  const MethodInfo *v48; // x1
  Il2CppObject *v49; // x28
  struct UnityEngine_Vector3_StaticFields *v50; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v54; // x0
  CGThumbnailListItem_o *v55; // x27
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x1
  const MethodInfo *v59; // x2
  int v60; // w8
  __int64 v61; // x20
  int v62; // w22
  UnityEngine_Object_o *v63; // x26
  __int64 v64; // x8
  __int64 v65; // x27
  unsigned __int64 v66; // x20
  __int64 v67; // x28
  System_String_o *name; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int32_t klass_high; // w26
  int32_t monitor_high; // w29
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x26
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_Collections_Generic_List_object__o *v76; // x8
  struct System_Object_array *v77; // x9
  _QWORD *v78; // x10
  __int64 v79; // x11
  Il2CppClass **v80; // x0
  System_String_o *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x10
  System_String_o *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  __int64 v88; // x9
  Il2CppClass *v89; // x1
  UnityEngine_Transform_o *parent; // x0
  CGThumbnailListItem_o *v91; // x0
  System_String_o *v92; // x0
  __int64 v93; // x9
  CGThumbnailListItem_o *v94; // x29
  System_String_o *v95; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  System_String_o *v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  Il2CppClass *v101; // x1
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  __int64 naturalAligment; // x9
  Il2CppClass *v109; // x1
  __int64 v110; // x28
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  UnityEngine_Transform_o *v113; // x28
  System_Collections_Generic_List_object__o *v114; // x25
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  struct System_Object_array *v117; // x8
  __int64 v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  BattleSequenceManager_o *v121; // x0
  const MethodInfo *v122; // x3
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  struct System_Object_array *v125; // x8
  __int64 v126; // x9
  __int64 v127; // x10
  __int64 v128; // x1
  Il2CppClass **v129; // x0
  Il2CppObject *current; // x24
  _BOOL8 v131; // x0
  __int64 v132; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v134; // x1
  void *v135; // x24
  int v136; // w8
  int i; // w27
  WellFired_USTimelineEvent_o *v138; // x0
  _QWORD *v139; // x25
  __int64 v140; // x8
  unsigned __int64 v141; // x28
  __int64 v142; // x26
  System_String_o *v143; // x0
  __int64 v144; // x9
  _BOOL8 v145; // x0
  __int64 v146; // x1
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  UnityEngine_Component_o *v149; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  struct System_Object_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  Il2CppClass **v156; // x0
  __int64 v157; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  int v159; // w19
  System_Collections_IEnumerator_c *v160; // x8
  __int64 v161; // x9
  int32_t *p_offset; // x10
  __int64 v163; // x0
  System_Collections_IEnumerator_c *v164; // x8
  __int64 v165; // x9
  System_Collections_IEnumerator_c **v166; // x10
  __int64 v167; // x0
  UnityEngine_Component_o *v168; // x0
  __int64 v169; // x1
  __int64 v170; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v172; // x1
  Il2CppObject *v173; // x0
  __int64 v174; // x1
  Il2CppObject *v175; // x25
  System_String_o *v176; // x0
  __int64 v177; // x1
  System_String_o *v178; // x0
  __int64 v179; // x1
  System_String_o *v180; // x0
  System_String_o *v181; // x0
  __int64 v182; // x0
  __int64 v183; // x8
  __int64 v184; // x24
  __int64 v185; // x9
  int *v186; // x10
  __int64 v187; // x0
  __int64 v188; // x1
  System_Collections_IEnumerator_c *v189; // x8
  __int64 v190; // x9
  int32_t *v191; // x10
  __int64 v192; // x0
  System_Collections_IEnumerator_c *v193; // x8
  __int64 v194; // x9
  System_Collections_IEnumerator_c **v195; // x10
  __int64 v196; // x0
  UnityEngine_Component_o *v197; // x0
  __int64 v198; // x1
  __int64 v199; // x9
  UnityEngine_GameObject_o *v200; // x0
  __int64 v201; // x1
  Il2CppObject *v202; // x0
  __int64 v203; // x1
  WellFired_USTimelineContainer_o *v204; // x24
  System_String_o *v205; // x0
  __int64 v206; // x1
  bool v207; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v209; // x27
  System_String_o *v210; // x0
  __int64 v211; // x1
  bool v212; // w28
  System_String_o *v213; // x0
  System_String_o *v214; // x0
  __int64 v215; // x1
  System_String_o *v216; // x0
  UnityEngine_Component_o *v217; // x0
  UnityEngine_Transform_o *v218; // x0
  System_String_o *v219; // x0
  __int64 v220; // x1
  UnityEngine_GameObject_o *v221; // x0
  __int64 v222; // x1
  UnityEngine_Transform_o *v223; // x25
  System_String_o *v224; // x0
  System_String_o *v225; // x0
  UnityEngine_Transform_o *v226; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v228; // x1
  System_String_o *v229; // x0
  bool v230; // w0
  __int64 v231; // x1
  __int64 *v232; // x8
  System_String_o *v233; // x0
  bool v234; // w0
  System_String_o *v235; // x28
  UnityEngine_GameObject_o *v236; // x0
  System_String_o *v237; // x27
  UnityEngine_Transform_o *v238; // x0
  __int64 v239; // x1
  UnityEngine_Object_o *v240; // x25
  _BOOL8 v241; // x0
  __int64 v242; // x1
  __int64 v243; // x1
  System_Collections_IEnumerator_o *v244; // x26
  System_Collections_IEnumerator_c *v245; // x8
  __int64 v246; // x9
  int32_t *v247; // x10
  __int64 v248; // x0
  System_Collections_IEnumerator_c *v249; // x8
  __int64 v250; // x9
  System_Collections_IEnumerator_c **v251; // x10
  __int64 v252; // x0
  UnityEngine_Component_o *v253; // x0
  __int64 v254; // x1
  UnityEngine_Object_o *v255; // x25
  __int64 v256; // x9
  UnityEngine_Object_o *v257; // x0
  __int64 v258; // x1
  System_String_o *v259; // x0
  __int64 v260; // x1
  System_String_o *v261; // x0
  _BOOL8 v262; // x0
  const MethodInfo *v263; // x2
  __int64 v264; // x1
  __int64 v265; // x1
  int32_t v266; // w25
  System_String_o *v267; // x26
  __int64 v268; // x0
  __int64 v269; // x25
  __int64 v270; // x8
  __int64 v271; // x9
  int *v272; // x10
  __int64 v273; // x0
  System_String_o *v274; // x25
  System_String_o *v275; // x0
  __int64 v276; // x1
  System_String_o *v277; // x0
  __int64 v278; // x1
  System_String_array *v279; // x0
  __int64 v280; // x1
  __int64 v281; // x1
  System_String_o *v282; // x26
  UnityEngine_GameObject_o *v283; // x0
  __int64 v284; // x1
  UnityEngine_Transform_o *v285; // x25
  System_String_o *v286; // x0
  System_String_o *v287; // x0
  __int64 v288; // x1
  System_String_o *v289; // x0
  UnityEngine_Transform_o *v290; // x0
  Il2CppObject *v291; // x25
  System_Collections_Generic_List_object__o *v292; // x0
  _BOOL8 v293; // x0
  __int64 v294; // x1
  System_String_o *v295; // x0
  __int64 v296; // x1
  System_String_o *v297; // x1
  const MethodInfo *v298; // x3
  __int64 v299; // x1
  int32_t v300; // w2
  const MethodInfo *v301; // x3
  System_Collections_Generic_List_object__o *v302; // x0
  struct System_Object_array *v303; // x8
  _QWORD *v304; // x9
  __int64 v305; // x10
  Il2CppClass **v306; // x8
  __int64 v307; // x0
  __int64 v308; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v310; // x1
  UnityEngine_Transform_o *v311; // x0
  UnityEngine_Transform_o *v312; // x0
  __int64 v313; // x1
  float v314; // s8
  float v315; // s9
  float v316; // s10
  __int64 v317; // x1
  UnityEngine_Transform_o *v318; // x26
  UnityEngine_GameObject_o *v319; // x0
  UnityEngine_Transform_o *v320; // x0
  UnityEngine_Transform_o *v321; // x0
  __int64 v322; // x1
  BattleSequenceManager_o *v323; // x0
  const MethodInfo *v324; // x4
  int32_t v325; // w26
  UnityEngine_Transform_o *v326; // x0
  __int64 v327; // x1
  UnityEngine_Transform_o *v328; // x0
  System_String_o *v329; // x0
  __int64 v330; // x1
  System_String_o *v331; // x0
  System_String_o *v332; // x0
  const MethodInfo *v333; // x3
  int32_t v334; // w2
  const MethodInfo *v335; // x3
  System_Object_array *EventCount; // x0
  __int64 v337; // x1
  System_Object_array *v338; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v341; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v343; // x0
  __int64 v344; // x1
  Il2CppObject *v345; // x27
  System_String_o *v346; // x0
  __int64 v347; // x9
  _BOOL8 v348; // x0
  __int64 v349; // x1
  int32_t v350; // w2
  const MethodInfo *v351; // x3
  UnityEngine_Component_o *v352; // x0
  UnityEngine_Transform_o *v353; // x0
  int32_t v354; // w2
  const MethodInfo *v355; // x3
  struct System_Object_array *v356; // x8
  _QWORD *v357; // x9
  __int64 v358; // x10
  Il2CppClass **v359; // x0
  int32_t layer; // w26
  __int64 v361; // x22
  __int64 v362; // x8
  __int64 v363; // x20
  __int64 v364; // x9
  int *v365; // x10
  __int64 v366; // x0
  __int64 v367; // x1
  Il2CppClass *v368; // x8
  UnityEngine_Object_o *v369; // x21
  Il2CppClass *v370; // x8
  UnityEngine_Object_o *v371; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t v373; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v375; // x4
  int32_t v376; // w22
  System_String_o *v377; // x0
  const MethodInfo *v378; // x4
  Il2CppClass *v379; // x8
  int v380; // w20
  BalanceConfig_c *v381; // x0
  int32_t v382; // w20
  System_String_o *v383; // x0
  const MethodInfo *v384; // x4
  __int64 v385; // x0
  __int64 v386; // x22
  __int64 v387; // x8
  __int64 v388; // x9
  int *v389; // x10
  __int64 v390; // x0
  int v391; // w1
  int v392; // w19
  void *v393; // x0
  void *v394; // x25
  __int64 v395; // x0
  __int64 v396; // x19
  __int64 v397; // x8
  __int64 v398; // x9
  int *v399; // x10
  __int64 v400; // x0
  System_String_o *v401; // [xsp+8h] [xbp-138h]
  System_String_o *v402; // [xsp+10h] [xbp-130h]
  Il2CppObject *v403; // [xsp+18h] [xbp-128h]
  Il2CppObject *item; // [xsp+20h] [xbp-120h]
  UnityEngine_Component_o *v405; // [xsp+28h] [xbp-118h]
  char v406; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs; // [xsp+30h] [xbp-110h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evsa; // [xsp+30h] [xbp-110h]
  bool v409; // [xsp+38h] [xbp-108h]
  __int64 v410; // [xsp+38h] [xbp-108h]
  System_Collections_IEnumerator_o *v411; // [xsp+38h] [xbp-108h]
  Il2CppObject *object; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v413; // [xsp+48h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+60h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+7Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v416; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v417; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v419; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v422; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C59935 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
    sub_1C3E564(&Method_BattleSequenceManager__setup_b__88_1__);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    sub_1C3E564(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__);
    sub_1C3E564(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    sub_1C3E564(&System_GC_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564((char *)&xmmword_4A87FEC + 12);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
    sub_1C3E564((char *)&xmmword_4A87FFC + 4);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
    sub_1C3E564((char *)&xmmword_4A87FEC + 4);
    sub_1C3E564(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_USTimelineContainer__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78273040);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&UnityEngine_Transform_TypeInfo);
    sub_1C3E564(&Method_BattleSequenceManager___c__setup_b__88_0__);
    sub_1C3E564(&BattleSequenceManager___c_TypeInfo);
    sub_1C3E564(&WellFired_USFGOAnimationCameraEvent_TypeInfo);
    sub_1C3E564(&WellFired_USFGOAttachToParentEvent_TypeInfo);
    sub_1C3E564(&WellFired_USFGOChangeBgEvent_TypeInfo);
    sub_1C3E564(&WellFired_USFGOPlayCutInEvent_TypeInfo);
    sub_1C3E564(&WellFired_USFGOSetCameraEvent_TypeInfo);
    sub_1C3E564(&Voice_TypeInfo);
    sub_1C3E564(&StringLiteral_1056/*"/Actor/chr/"*/);
    sub_1C3E564(&StringLiteral_3108/*"BattleBG"*/);
    sub_1C3E564(&StringLiteral_1066/*"/BattleActors/"*/);
    sub_1C3E564(&StringLiteral_3110/*"BattleCamera"*/);
    sub_1C3E564(&StringLiteral_3114/*"BattleCutIn"*/);
    sub_1C3E564(&StringLiteral_14884/*"USFGOSetCameraEvent"*/);
    sub_1C3E564(&StringLiteral_2133/*"Actor"*/);
    sub_1C3E564(&StringLiteral_17343/*"body_level_"*/);
    sub_1C3E564(&StringLiteral_1058/*"/Actor/chr/weapon_level_"*/);
    sub_1C3E564(&StringLiteral_1057/*"/Actor/chr/body_level_"*/);
    sub_1C3E564(&StringLiteral_6406/*"FGOSequenceManager"*/);
    sub_1C3E564(&StringLiteral_1060/*"/AllEffects/"*/);
    sub_1C3E564(&StringLiteral_17979/*"chr(Clone)"*/);
    sub_1C3E564(&StringLiteral_3973/*"Cameras/BattleCamera"*/);
    sub_1C3E564(&StringLiteral_14882/*"USFGOChangeBgEvent"*/);
    sub_1C3E564(&StringLiteral_1078/*"/BattleCamera"*/);
    sub_1C3E564(&StringLiteral_1081/*"/CutIns/"*/);
    sub_1C3E564(&StringLiteral_3106/*"Battle2D"*/);
    sub_1C3E564(&StringLiteral_1080/*"/Cameras/BattleCamera"*/);
    sub_1C3E564(&StringLiteral_16791/*"animCamLoc"*/);
    sub_1C3E564(&StringLiteral_24815/*"weapon_level_"*/);
    sub_1C3E564(&StringLiteral_685/*"(Clone)"*/);
    sub_1C3E564(&StringLiteral_14881/*"USFGOAttachToParentEvent"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_1055/*"/Actor/chr"*/);
    sub_1C3E564(&StringLiteral_14880/*"USFGOAnimationCameraEvent"*/);
    sub_1C3E564(&StringLiteral_1122/*"0"*/);
    sub_1C3E564(&StringLiteral_14883/*"USFGOPlayCutInEvent"*/);
    byte_4C59935 = 1;
  }
  *(_QWORD *)result = 0;
  memset(&v417, 0, sizeof(v417));
  memset(&v416, 0, sizeof(v416));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  object = (Il2CppObject *)this;
  if ( !seqObject )
    goto LABEL_418;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v10 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  (BattleSequenceManager_o *)Component_object,
                                  (WellFired_USSequencer_o *)Component_object,
                                  (System_String_o *)StringLiteral_2133/*"Actor"*/,
                                  v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v10, 0, 0);
  if ( (seqObject & 1) != 0 )
  {
    seqObject = (__int64)object[5].klass;
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0);
    if ( !v10 )
      goto LABEL_418;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v10,
      (UnityEngine_Transform_o *)seqObject,
      0);
  }
  if ( !Component_object )
    goto LABEL_418;
  ComponentsInChildren_object__51318504 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__51318504(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v12 = BattleSequenceManager___c_TypeInfo;
  item = (Il2CppObject *)v10;
  v409 = isDemoMode;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    v13 = ComponentsInChildren_object__51318504;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v12 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__51318504 = v13;
  }
  _9__88_0 = (System_Func_object__bool__o *)v12->static_fields->__9__88_0;
  v405 = (UnityEngine_Component_o *)Component_object;
  if ( !_9__88_0 )
  {
    evs = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)ComponentsInChildren_object__51318504;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleSequenceManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__88_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__88_0, v15, Method_BattleSequenceManager___c__setup_b__88_0__, 0);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__88_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__88_0, (int32_t)_9__88_0, v17, v18);
    ComponentsInChildren_object__51318504 = (System_Collections_Generic_IEnumerable_TSource__o *)evs;
  }
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         ComponentsInChildren_object__51318504,
                                                         (System_Func_TSource__bool__o *)_9__88_0,
                                                         (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v20 = (System_Action_object__o *)sub_1C3E7B0(System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
  System_Action_object____ctor(v20, object, Method_BattleSequenceManager__setup_b__88_1__, 0);
  BasicHelper__ForEach_object_(
    v19,
    (System_Action_T__o *)v20,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v23 = BattleSequenceManager__searchTimeline(
          v21,
          (WellFired_USSequencer_o *)Component_object,
          (System_String_o *)StringLiteral_6406/*"FGOSequenceManager"*/,
          v22);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)object[5].klass;
  if ( !seqObject )
LABEL_418:
    sub_1C3E7C0(seqObject, callback);
  v403 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)seqObject,
           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  evsa = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v25;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0) )
  {
    klass = (Il2CppObject *)object[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           klass,
                           (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0);
    if ( !v23 )
      goto LABEL_418;
    WellFired_USTimelineContainer__set_AffectedObject(v23, (UnityEngine_Transform_o *)seqObject, 0);
    monitor = (System_Collections_Generic_List_object__o *)object[20].monitor;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v23, 0);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0);
    if ( !monitor )
      goto LABEL_418;
    items = monitor->fields._items;
    v31 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++monitor->fields._version;
    if ( !items )
      goto LABEL_418;
    size = monitor->fields._size;
    v33 = seqObject;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        monitor,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v33;
      sub_1C3E508((CGThumbnailListItem_o *)(v34 + 4), v33, v28, v29);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v23, 0);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_418;
    v37 = object[7].klass;
    v38 = seqObject;
    *(_QWORD *)(seqObject + 32) = v37;
    sub_1C3E508((CGThumbnailListItem_o *)(seqObject + 32), (int32_t)v37, v35, v36);
    v39 = object[7].monitor;
    *(_QWORD *)(v38 + 40) = v39;
    sub_1C3E508((CGThumbnailListItem_o *)(v38 + 40), (int32_t)v39, v40, v41);
    v42 = object[8].klass;
    *(_QWORD *)(v38 + 48) = v42;
    sub_1C3E508((CGThumbnailListItem_o *)(v38 + 48), (int32_t)v42, v43, v44);
    v47 = object[4].klass;
    if ( !v47 )
      goto LABEL_418;
    v48 = v47->vtable[7].method;
    *(_QWORD *)(v38 + 96) = v48;
    sub_1C3E508((CGThumbnailListItem_o *)(v38 + 96), (int32_t)v48, v45, v46);
    v49 = (Il2CppObject *)object[21].klass;
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    v50 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v50->zeroVector.fields.x;
    y = v50->zeroVector.fields.y;
    z = v50->zeroVector.fields.z;
    if ( !byte_4C506A7 )
    {
      sub_1C3E564(&UnityEngine_Quaternion_TypeInfo);
      byte_4C506A7 = 1;
    }
    v419.fields.x = x;
    v419.fields.y = y;
    v419.fields.z = z;
    v54 = UnityEngine_Object__Instantiate_object__51929360(
            v49,
            v419,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            (const MethodInfo_3186110 *)Method_UnityEngine_Object_Instantiate_GameObject____78273040);
    *(_QWORD *)(v38 + 72) = v54;
    v55 = (CGThumbnailListItem_o *)(v38 + 72);
    sub_1C3E508(v55, (int32_t)v54, v56, v57);
    seqObject = (__int64)v55->klass;
    if ( !v55->klass )
      goto LABEL_418;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0);
    if ( !v409 )
    {
      BattleSequenceManager__SetupTargetInfo((BattleSequenceManager_o *)object, v58);
      BattleSequenceManager__SetShaderNoblePhantasmMode((BattleSequenceManager_o *)object, 1, v59);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v23,
                           1,
                           (const MethodInfo_30F0F64 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_418;
    v60 = *(_DWORD *)(seqObject + 24);
    v61 = seqObject;
    if ( v60 >= 1 )
    {
      v62 = 0;
      v63 = 0;
      v410 = seqObject;
      while ( 1 )
      {
        if ( v62 >= (unsigned int)v60 )
LABEL_422:
          sub_1C3E7C8(seqObject, callback);
        seqObject = *(_QWORD *)(v61 + 8LL * v62 + 32);
        if ( !seqObject )
          goto LABEL_418;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0);
        if ( !seqObject )
          goto LABEL_418;
        v64 = *(_QWORD *)(seqObject + 24);
        v65 = seqObject;
        if ( (int)v64 >= 1 )
          break;
LABEL_102:
        v61 = v410;
        ++v62;
        v60 = *(_DWORD *)(v410 + 24);
        if ( v62 >= v60 )
          goto LABEL_103;
      }
      v66 = 0;
      while ( 1 )
      {
        if ( v66 >= (unsigned int)v64 )
          goto LABEL_422;
        v67 = *(_QWORD *)(v65 + 32 + 8 * v66);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v67, 0, 0);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v67 )
            goto LABEL_418;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v67, 0);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14880/*"USFGOAnimationCameraEvent"*/, 0) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v63, 0, 0) )
            {
              klass_high = HIDWORD(object[10].klass);
              monitor_high = HIDWORD(object[2].monitor);
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                                   klass_high,
                                                                   monitor_high,
                                                                   (System_String_o *)StringLiteral_16791/*"animCamLoc"*/,
                                                                   0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__LoadNoblePhantasmEffect,
                                     (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v76 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              v25 = (System_Collections_Generic_List_object__o *)evsa;
              if ( !v76 )
                goto LABEL_418;
              v77 = v76->fields._items;
              v78 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v76->fields._version;
              if ( !v77 )
                goto LABEL_418;
              v79 = v76->fields._size;
              v63 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v76,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
              }
              else
              {
                v80 = &v77->obj.klass + v79;
                v76->fields._size = v79 + 1;
                v80[4] = (Il2CppClass *)v63;
                sub_1C3E508((CGThumbnailListItem_o *)(v80 + 4), (int32_t)v63, v74, v75);
              }
            }
            naturalAligment = WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v67 + 304LL) < (unsigned int)naturalAligment
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_423:
              sub_1C3EA80(v67);
LABEL_424:
              sub_1C3EA80(v168);
LABEL_425:
              sub_1C3E7C0(v343, v344);
            }
            *(_QWORD *)(v67 + 56) = v63;
            sub_1C3E508((CGThumbnailListItem_o *)(v67 + 56), (int32_t)v63, v69, v70);
            v109 = object[7].klass;
            *(_QWORD *)(v67 + 64) = v109;
            v110 = v67 + 64;
            sub_1C3E508((CGThumbnailListItem_o *)v110, (int32_t)v109, v111, v112);
            *(_BYTE *)(v110 + 28) = 0;
            if ( !v63 )
              goto LABEL_418;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v63, 0);
            if ( !object[5].klass )
              goto LABEL_418;
            v113 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)object[5].klass, 0);
            if ( !seqObject )
              goto LABEL_418;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)seqObject, 0);
            if ( !v113 )
              goto LABEL_418;
            UnityEngine_Transform__set_position(v113, position, 0);
          }
          else
          {
            v81 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v67, 0);
            seqObject = System_String__op_Equality(v81, (System_String_o *)StringLiteral_14883/*"USFGOPlayCutInEvent"*/, 0);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_418;
              v84 = WellFired_USFGOPlayCutInEvent_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)v67 + 304LL) >= (unsigned int)v84 )
                callback = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL) + 8 * v84 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                         ? (System_Action_o *)v67
                         : 0LL;
              else
                callback = 0;
              v104 = v25->fields._items;
              v105 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
              ++v25->fields._version;
              if ( !v104 )
                goto LABEL_418;
              v106 = v25->fields._size;
              if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v25,
                  (Il2CppObject *)callback,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
                goto LABEL_101;
              }
              v107 = &v104->obj.klass + v106;
              v25->fields._size = v106 + 1;
              v107[4] = (Il2CppClass *)callback;
              v91 = (CGThumbnailListItem_o *)(v107 + 4);
              goto LABEL_91;
            }
            v85 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v67, 0);
            if ( System_String__op_Equality(v85, (System_String_o *)StringLiteral_14884/*"USFGOSetCameraEvent"*/, 0) )
            {
              v88 = WellFired_USFGOSetCameraEvent_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)v67 + 304LL) < (unsigned int)v88
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL) + 8 * v88 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_423;
              }
              v89 = object[7].klass;
              *(_QWORD *)(v67 + 56) = v89;
              sub_1C3E508((CGThumbnailListItem_o *)(v67 + 56), (int32_t)v89, v86, v87);
              seqObject = (__int64)object[7].klass;
              if ( !seqObject )
                goto LABEL_418;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0);
              if ( !seqObject )
                goto LABEL_418;
              parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0);
              *(_QWORD *)(v67 + 64) = parent;
              LODWORD(callback) = (_DWORD)parent;
              v91 = (CGThumbnailListItem_o *)(v67 + 64);
LABEL_91:
              sub_1C3E508(v91, (int32_t)callback, v82, v83);
              goto LABEL_101;
            }
            v92 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v67, 0);
            seqObject = System_String__op_Equality(v92, (System_String_o *)StringLiteral_14882/*"USFGOChangeBgEvent"*/, 0);
            if ( (seqObject & 1) != 0 )
            {
              v93 = WellFired_USFGOChangeBgEvent_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)v67 + 304LL) < (unsigned int)v93
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL) + 8 * v93 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_423;
              }
              v94 = (CGThumbnailListItem_o *)(v67 + 64);
              if ( System_String__op_Equality(*(System_String_o **)(v67 + 64), (System_String_o *)StringLiteral_1122/*"0"*/, 0)
                || (seqObject = System_String__op_Equality(
                                  (System_String_o *)v94->klass,
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)object[4].klass;
                if ( !seqObject )
                  goto LABEL_418;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0);
                v95 = System_Int32__ToString((int32_t)&result[1], 0);
                v94->klass = (CGThumbnailListItem_c *)v95;
                sub_1C3E508(v94, (int32_t)v95, v96, v97);
                seqObject = (__int64)object[4].klass;
                if ( !seqObject )
                  goto LABEL_418;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0);
                v98 = System_Int32__ToString((int32_t)&result[1], 0);
                *(_QWORD *)(v67 + 72) = v98;
                sub_1C3E508((CGThumbnailListItem_o *)(v67 + 72), (int32_t)v98, v99, v100);
                v101 = object[25].klass;
                *(_QWORD *)(v67 + 136) = v101;
                sub_1C3E508((CGThumbnailListItem_o *)(v67 + 136), (int32_t)v101, v102, v103);
              }
              v25 = (System_Collections_Generic_List_object__o *)evsa;
            }
          }
        }
LABEL_101:
        LODWORD(v64) = *(_DWORD *)(v65 + 24);
        if ( (__int64)++v66 >= (int)v64 )
          goto LABEL_102;
      }
    }
  }
LABEL_103:
  v114 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(v114, *(const MethodInfo_37B4C2C **)((char *)&xmmword_4A87FEC + 4));
  if ( !v114 )
    goto LABEL_418;
  v117 = v114->fields._items;
  v118 = *(_QWORD *)((char *)&xmmword_4A87FEC + 12);
  ++v114->fields._version;
  if ( !v117 )
    goto LABEL_418;
  v119 = v114->fields._size;
  if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v114,
      item,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(*(_QWORD *)(v118 + 32) + 192LL) + 112LL));
  }
  else
  {
    v120 = &v117->obj.klass + v119;
    v114->fields._size = v119 + 1;
    v120[4] = (Il2CppClass *)item;
    sub_1C3E508((CGThumbnailListItem_o *)(v120 + 4), (int32_t)item, v115, v116);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(
                         v121,
                         (WellFired_USSequencer_o *)v405,
                         (System_String_o *)StringLiteral_3973/*"Cameras/BattleCamera"*/,
                         v122);
  v125 = v114->fields._items;
  v126 = *(_QWORD *)((char *)&xmmword_4A87FEC + 12);
  ++v114->fields._version;
  if ( !v125 )
    goto LABEL_418;
  v127 = v114->fields._size;
  v128 = seqObject;
  if ( (unsigned int)v127 >= LODWORD(v125->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v114,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(*(_QWORD *)(v126 + 32) + 192LL) + 112LL));
  }
  else
  {
    v129 = &v125->obj.klass + v127;
    v114->fields._size = v127 + 1;
    v129[4] = (Il2CppClass *)v128;
    sub_1C3E508((CGThumbnailListItem_o *)(v129 + 4), v128, v123, v124);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v413,
    v114,
    *(const MethodInfo_37B5F58 **)((char *)&xmmword_4A87FFC + 4));
  v417 = v413;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v417,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v417.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v131 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v131 )
    {
      if ( !current )
        sub_1C3E7C0(v131, v132);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_30F0F64 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v135 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1C3E7C0(0, v134);
      v136 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v136 >= 1 )
      {
        for ( i = 0; i < v136; ++i )
        {
          if ( i >= (unsigned int)v136 )
            sub_1C3E7C8(ComponentsInChildren_object, v134);
          v138 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v135 + i + 4);
          if ( !v138 )
            sub_1C3E7C0(0, v134);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v138, 0);
          v139 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1C3E7C0(0, v134);
          v140 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v140 >= 1 )
          {
            v141 = 0;
            do
            {
              if ( v141 >= (unsigned int)v140 )
                sub_1C3E7C8(ComponentsInChildren_object, v134);
              v142 = v139[v141 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v142, 0, 0);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v142 )
                  sub_1C3E7C0(ComponentsInChildren_object, v134);
                v143 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v142, 0);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v143,
                                                        (System_String_o *)StringLiteral_14881/*"USFGOAttachToParentEvent"*/,
                                                        0);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v144 = WellFired_USFGOAttachToParentEvent_TypeInfo->_2.naturalAligment;
                  if ( *(unsigned __int8 *)(*(_QWORD *)v142 + 304LL) < (unsigned int)v144
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v142 + 200LL) + 8 * v144 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1C3EA80(v142);
LABEL_415:
                    sub_1C3E7C0(v145, v146);
                  }
                  v145 = System_String__op_Equality(
                           *(System_String_o **)(v142 + 80),
                           (System_String_o *)StringLiteral_3110/*"BattleCamera"*/,
                           0);
                  if ( v145 )
                  {
                    v149 = (UnityEngine_Component_o *)object[7].klass;
                    if ( !v149 )
                      sub_1C3E7C0(0, v146);
                    transform = UnityEngine_Component__get_transform(v149, 0);
                    *(_QWORD *)(v142 + 64) = transform;
                    sub_1C3E508((CGThumbnailListItem_o *)(v142 + 64), (int32_t)transform, v151, v152);
                  }
                  else
                  {
                    if ( !v24 )
                      goto LABEL_415;
                    v153 = v24->fields._items;
                    v154 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v24->fields._version;
                    if ( !v153 )
                      sub_1C3E7C0(v145, v146);
                    v155 = v24->fields._size;
                    if ( (unsigned int)v155 >= LODWORD(v153->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v24,
                        (Il2CppObject *)v142,
                        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v156 = &v153->obj.klass + v155;
                      v24->fields._size = v155 + 1;
                      v156[4] = (Il2CppClass *)v142;
                      sub_1C3E508((CGThumbnailListItem_o *)(v156 + 4), v142, v147, v148);
                    }
                  }
                }
              }
              LODWORD(v140) = *((_DWORD *)v139 + 6);
              ++v141;
            }
            while ( (__int64)v141 < (int)v140 );
          }
          v136 = *((_DWORD *)v135 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v417,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)UnityEngine_Component__get_transform(v405, 0);
  if ( !seqObject )
    goto LABEL_418;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0);
  if ( !Enumerator )
    sub_1C3E7C0(0, v157);
  v159 = 0;
  while ( 1 )
  {
    v160 = Enumerator->klass;
    v161 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &v160->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v161;
        p_offset += 4;
        if ( !v161 )
          goto LABEL_152;
      }
      v163 = (__int64)&v160->vtable[*p_offset];
    }
    else
    {
LABEL_152:
      v163 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v163)(
            Enumerator,
            *(_QWORD *)(v163 + 8))
        & 1) == 0 )
      break;
    v164 = Enumerator->klass;
    v165 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v166 = (System_Collections_IEnumerator_c **)&v164->_1.interfaceOffsets->offset;
      while ( *(v166 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v165;
        v166 += 2;
        if ( !v165 )
          goto LABEL_159;
      }
      v167 = (__int64)&v164->vtable[*(_DWORD *)v166 + 1];
    }
    else
    {
LABEL_159:
      v167 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v168 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v167)(
                                        Enumerator,
                                        *(_QWORD *)(v167 + 8));
    if ( !v168 )
      sub_1C3E7C0(0, v169);
    v170 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v168->klass->_2.naturalAligment < (unsigned int)v170
      || (UnityEngine_Transform_c *)v168->klass->_2.typeHierarchy[v170 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_424;
    }
    gameObject = UnityEngine_Component__get_gameObject(v168, 0);
    if ( !gameObject )
      sub_1C3E7C0(0, v172);
    v173 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v175 = v173;
    if ( !v173 )
      goto LABEL_428;
    v176 = (System_String_o *)v173[2].monitor;
    if ( !v176 )
      sub_1C3E7C0(0, v174);
    if ( System_String__StartsWith(v176, (System_String_o *)StringLiteral_1066/*"/BattleActors/"*/, 0) && v175[2].monitor )
    {
      v178 = (System_String_o *)v175[2].monitor;
      if ( !v178 )
        sub_1C3E7C0(0, v177);
      if ( System_String__StartsWith(v178, (System_String_o *)StringLiteral_1066/*"/BattleActors/"*/, 0) )
      {
        v180 = (System_String_o *)v175[2].monitor;
        if ( !v180 )
          sub_1C3E7C0(0, v179);
        v181 = System_String__Substring_63682392(v180, v180->fields._stringLength - 1, 1, 0);
        result[0] = 1;
        v159 += System_Int32__TryParse(v181, result, 0);
      }
    }
  }
  v182 = sub_1C3E6A0(Enumerator, System_IDisposable_TypeInfo);
  if ( v182 )
  {
    v183 = *(_QWORD *)v182;
    v184 = v182;
    v185 = *(unsigned __int16 *)(*(_QWORD *)v182 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v182 + 302LL) )
    {
      v186 = (int *)(*(_QWORD *)(v183 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v186 - 1) != System_IDisposable_TypeInfo )
      {
        --v185;
        v186 += 4;
        if ( !v185 )
          goto LABEL_178;
      }
      v187 = v183 + 16LL * *v186 + 312;
    }
    else
    {
LABEL_178:
      v187 = sub_1C8ED7C(v182, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v187)(v184, *(_QWORD *)(v187 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform(v405, 0);
  if ( !seqObject )
    goto LABEL_418;
  v411 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0);
  if ( !v411 )
    sub_1C3E7C0(0, v188);
  v406 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v189 = v411->klass;
          v190 = *(unsigned __int16 *)&v411->klass->_2.rank;
          if ( *(_WORD *)&v411->klass->_2.rank )
          {
            v191 = &v189->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v191 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v190;
              v191 += 4;
              if ( !v190 )
                goto LABEL_188;
            }
            v192 = (__int64)&v189->vtable[*v191];
          }
          else
          {
LABEL_188:
            v192 = sub_1C8ED7C(v411, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v192)(
                  v411,
                  *(_QWORD *)(v192 + 8))
              & 1) == 0 )
          {
            v361 = 0;
            goto LABEL_366;
          }
          v193 = v411->klass;
          v194 = *(unsigned __int16 *)&v411->klass->_2.rank;
          if ( *(_WORD *)&v411->klass->_2.rank )
          {
            v195 = (System_Collections_IEnumerator_c **)&v193->_1.interfaceOffsets->offset;
            while ( *(v195 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v194;
              v195 += 2;
              if ( !v194 )
                goto LABEL_195;
            }
            v196 = (__int64)&v193->vtable[*(_DWORD *)v195 + 1];
          }
          else
          {
LABEL_195:
            v196 = sub_1C8ED7C(v411, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v197 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v196)(
                                              v411,
                                              *(_QWORD *)(v196 + 8));
          if ( !v197 )
            sub_1C3E7C0(0, v198);
          v199 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
          if ( v197->klass->_2.naturalAligment < (unsigned int)v199
            || (UnityEngine_Transform_c *)v197->klass->_2.typeHierarchy[v199 - 1] != UnityEngine_Transform_TypeInfo )
          {
LABEL_427:
            sub_1C3EA80(v197);
LABEL_428:
            sub_1C3E7C0(v173, v174);
          }
          v200 = UnityEngine_Component__get_gameObject(v197, 0);
          if ( !v200 )
            sub_1C3E7C0(0, v201);
          v202 = UnityEngine_GameObject__GetComponent_object_(
                   v200,
                   (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
          v204 = (WellFired_USTimelineContainer_o *)v202;
          if ( !v202 )
            sub_1C3E7C0(0, v203);
          v205 = (System_String_o *)v202[2].monitor;
          if ( !v205 )
            sub_1C3E7C0(0, v203);
          v207 = System_String__StartsWith(v205, (System_String_o *)StringLiteral_1060/*"/AllEffects/"*/, 0);
          if ( v207 )
          {
            affectedObjectPath = v204->fields.affectedObjectPath;
            if ( !affectedObjectPath )
              sub_1C3E7C0(0, v206);
            v209 = System_String__Substring(affectedObjectPath, 12, 0);
          }
          else
          {
            v209 = 0;
          }
          v210 = v204->fields.affectedObjectPath;
          if ( !v210 )
            sub_1C3E7C0(0, v206);
          v212 = System_String__StartsWith(v210, (System_String_o *)StringLiteral_1081/*"/CutIns/"*/, 0);
          if ( v212 )
          {
            v213 = v204->fields.affectedObjectPath;
            if ( !v213 )
              sub_1C3E7C0(0, v211);
            v209 = System_String__Substring(v213, 8, 0);
          }
          v214 = v204->fields.affectedObjectPath;
          if ( !v214 )
            sub_1C3E7C0(0, v211);
          if ( !System_String__StartsWith(v214, (System_String_o *)StringLiteral_1078/*"/BattleCamera"*/, 0) )
          {
            v216 = v204->fields.affectedObjectPath;
            if ( !v216 )
              sub_1C3E7C0(0, v215);
            if ( !System_String__StartsWith(v216, (System_String_o *)StringLiteral_1080/*"/Cameras/BattleCamera"*/, 0) )
              break;
          }
          v217 = (UnityEngine_Component_o *)object[7].klass;
          if ( !v217 )
            sub_1C3E7C0(0, v215);
          v218 = UnityEngine_Component__get_transform(v217, 0);
          WellFired_USTimelineContainer__set_AffectedObject(v204, v218, 0);
        }
        v219 = v204->fields.affectedObjectPath;
        if ( !v219 )
          sub_1C3E7C0(0, v215);
        if ( System_String__StartsWith(v219, (System_String_o *)StringLiteral_1055/*"/Actor/chr"*/, 0) )
          break;
        v261 = v204->fields.affectedObjectPath;
        if ( !v261 )
          sub_1C3E7C0(0, v220);
        v262 = System_String__StartsWith(v261, (System_String_o *)StringLiteral_1066/*"/BattleActors/"*/, 0);
        if ( v262 )
          v209 = v204->fields.affectedObjectPath;
        if ( v209 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v262, v209, v263) )
            goto LABEL_326;
          if ( v207 )
          {
            v266 = System_String__IndexOf(v209, 0x2Fu, 0);
            if ( (v266 & 0x80000000) == 0 )
            {
              v267 = System_String__Substring(v209, v266 + 1, 0);
              v209 = System_String__Substring_63682392(v209, 0, v266, 0);
              goto LABEL_287;
            }
            if ( (v406 & 1) != 0 )
            {
              v267 = 0;
LABEL_287:
              v292 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              if ( !v292 )
                sub_1C3E7C0(0, v265);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v413,
                v292,
                (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v402 = v267;
              v416 = v413;
              while ( 1 )
              {
                v293 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v416,
                         (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v293 )
                  break;
                v291 = v416.fields._current;
                if ( !v416.fields._current )
                  sub_1C3E7C0(v293, v294);
                v295 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v416.fields._current, 0);
                if ( !v295 )
                  sub_1C3E7C0(0, v296);
                v297 = System_String__Replace_63683016(
                         v295,
                         (System_String_o *)StringLiteral_685/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0);
                if ( System_String__op_Equality(v209, v297, 0) )
                  goto LABEL_295;
              }
              v291 = 0;
LABEL_295:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v416,
                (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v406 = 1;
              goto LABEL_297;
            }
            v267 = 0;
            v291 = 0;
            v406 = 0;
          }
          else
          {
            v267 = 0;
            v291 = 0;
          }
LABEL_297:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v291, 0, 0) )
          {
            v291 = (Il2CppObject *)BattleSequenceManager__SearchPrefab(
                                     (BattleSequenceManager_o *)object,
                                     HIDWORD(object[10].klass),
                                     v209,
                                     v298);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v291, 0, 0) )
            {
              v302 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              if ( !v302 )
                sub_1C3E7C0(0, v299);
              v303 = v302->fields._items;
              v304 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v302->fields._version;
              if ( !v303 )
                sub_1C3E7C0(v302, v299);
              v305 = v302->fields._size;
              if ( (unsigned int)v305 >= LODWORD(v303->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v302,
                  v291,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v304[4] + 192LL) + 112LL));
              }
              else
              {
                v306 = &v303->obj.klass + v305;
                v302->fields._size = v305 + 1;
                v306[4] = (Il2CppClass *)v291;
                sub_1C3E508((CGThumbnailListItem_o *)(v306 + 4), (int32_t)v291, v300, v301);
              }
              if ( !v291 )
                sub_1C3E7C0(v307, v308);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v291, 0, 0);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v291, 0, 0) )
            goto LABEL_326;
          IsNullOrEmpty = System_String__IsNullOrEmpty(v267, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !v291 )
              sub_1C3E7C0(IsNullOrEmpty, v310);
            v326 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v291, 0);
            if ( !v326 )
              sub_1C3E7C0(0, v327);
            v328 = UnityEngine_Transform__Find(v326, v267, 0);
            WellFired_USTimelineContainer__set_AffectedObject(v204, v328, 0);
            goto LABEL_326;
          }
          if ( !v291 )
            sub_1C3E7C0(IsNullOrEmpty, v310);
          v311 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v291, 0);
          WellFired_USTimelineContainer__set_AffectedObject(v204, v311, 0);
          if ( v212 )
          {
            v312 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v291, 0);
            if ( !v312 )
              sub_1C3E7C0(0, v313);
            localPosition = UnityEngine_Transform__get_localPosition(v312, 0);
            v314 = localPosition.fields.x;
            v315 = localPosition.fields.y;
            v316 = localPosition.fields.z;
            v318 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v291, 0);
            v319 = (UnityEngine_GameObject_o *)object[5].monitor;
            if ( !v319 )
              sub_1C3E7C0(0, v317);
            v320 = UnityEngine_GameObject__get_transform(v319, 0);
            if ( !v318 )
              sub_1C3E7C0(v320, v320);
            UnityEngine_Transform__set_parent(v318, v320, 0);
            v321 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v291, 0);
            if ( !v321 )
              sub_1C3E7C0(0, v322);
            v422.fields.x = v314;
            v422.fields.y = v315;
            v422.fields.z = v316;
            UnityEngine_Transform__set_localPosition(v321, v422, 0);
            BattleSequenceManager__updateCutInEvents(v323, evsa, v209, (UnityEngine_GameObject_o *)v291, v324);
            v325 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3114/*"BattleCutIn"*/, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v291, 0);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3108/*"BattleBG"*/, 0) )
              goto LABEL_326;
            v325 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3106/*"Battle2D"*/, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v291, v325, 0);
LABEL_326:
          v329 = v204->fields.affectedObjectPath;
          if ( !v329 )
            sub_1C3E7C0(0, v264);
          if ( System_String__StartsWith(v329, (System_String_o *)StringLiteral_1066/*"/BattleActors/"*/, 0) )
          {
            v331 = v204->fields.affectedObjectPath;
            if ( !v331 )
              sub_1C3E7C0(0, v330);
            v332 = System_String__Substring_63682392(v331, v331->fields._stringLength - 1, 1, 0);
            targetPosIndex = 1;
            System_Int32__TryParse(v332, &targetPosIndex, 0);
            v334 = --targetPosIndex;
            if ( v159 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach((BattleSequenceManager_o *)object, v204, v334, v333);
              BattleSequenceManager__SyncAttachedTargetPair(
                (BattleSequenceManager_o *)object,
                v204,
                targetPosIndex,
                v335);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach((BattleSequenceManager_o *)object, v204, v334, v333);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v204,
                         1,
                         (const MethodInfo_30F0F64 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v338 = EventCount;
          if ( !EventCount )
            sub_1C3E7C0(0, v337);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1C3E7C8(EventCount, v337);
              v341 = (WellFired_USTimelineEvent_o *)v338->m_Items[j];
              if ( !v341 )
                sub_1C3E7C0(EventCount, v337);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v341, 0);
                if ( k >= (int)EventCount )
                  break;
                v343 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v341, k, 0);
                v345 = (Il2CppObject *)v343;
                if ( !v343 )
                  goto LABEL_425;
                v346 = UnityEngine_Object__get_name(v343, 0);
                if ( System_String__op_Equality(v346, (System_String_o *)StringLiteral_14881/*"USFGOAttachToParentEvent"*/, 0) )
                {
                  v347 = WellFired_USFGOAttachToParentEvent_TypeInfo->_2.naturalAligment;
                  if ( v345->klass->_2.naturalAligment < (unsigned int)v347
                    || (WellFired_USFGOAttachToParentEvent_c *)v345->klass->_2.typeHierarchy[v347 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1C3EA80(v345);
                    goto LABEL_427;
                  }
                  v348 = System_String__op_Equality(
                           (System_String_o *)v345[5].klass,
                           (System_String_o *)StringLiteral_3110/*"BattleCamera"*/,
                           0);
                  if ( v348 )
                  {
                    v352 = (UnityEngine_Component_o *)object[7].klass;
                    if ( !v352 )
                      sub_1C3E7C0(0, v349);
                    v353 = UnityEngine_Component__get_transform(v352, 0);
                    v345[4].klass = (Il2CppClass *)v353;
                    sub_1C3E508((CGThumbnailListItem_o *)&v345[4], (int32_t)v353, v354, v355);
                  }
                  else
                  {
                    if ( !v24 )
                      sub_1C3E7C0(v348, v349);
                    v356 = v24->fields._items;
                    v357 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v24->fields._version;
                    if ( !v356 )
                      sub_1C3E7C0(v348, v349);
                    v358 = v24->fields._size;
                    if ( (unsigned int)v358 >= LODWORD(v356->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v24,
                        v345,
                        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v357[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v359 = &v356->obj.klass + v358;
                      v24->fields._size = v358 + 1;
                      v359[4] = (Il2CppClass *)v345;
                      sub_1C3E508((CGThumbnailListItem_o *)(v359 + 4), (int32_t)v345, v350, v351);
                    }
                  }
                }
              }
              max_length = v338->max_length;
            }
          }
        }
      }
      v221 = (UnityEngine_GameObject_o *)object[5].klass;
      if ( !v221 )
        sub_1C3E7C0(0, v220);
      v223 = UnityEngine_GameObject__get_transform(v221, 0);
      v224 = v204->fields.affectedObjectPath;
      if ( !v224 )
        sub_1C3E7C0(0, v222);
      v225 = System_String__Replace_63683016(
               v224,
               (System_String_o *)StringLiteral_1055/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_17979/*"chr(Clone)"*/,
               0);
      if ( !v223 )
        sub_1C3E7C0(v225, v225);
      v226 = UnityEngine_Transform__Find(v223, v225, 0);
      WellFired_USTimelineContainer__set_AffectedObject(v204, v226, 0);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v204, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(AffectedObject, 0, 0) )
      {
        v229 = v204->fields.affectedObjectPath;
        if ( !v229 )
          sub_1C3E7C0(0, v228);
        v230 = System_String__StartsWith(v229, (System_String_o *)StringLiteral_1057/*"/Actor/chr/body_level_"*/, 0);
        v232 = &StringLiteral_17343/*"body_level_"*/;
        if ( v230 )
          goto LABEL_229;
        v233 = v204->fields.affectedObjectPath;
        if ( !v233 )
          sub_1C3E7C0(0, v231);
        v234 = System_String__StartsWith(v233, (System_String_o *)StringLiteral_1058/*"/Actor/chr/weapon_level_"*/, 0);
        v232 = &StringLiteral_24815/*"weapon_level_"*/;
        if ( v234 )
        {
LABEL_229:
          v235 = (System_String_o *)*v232;
          if ( *v232 )
            break;
        }
      }
    }
    v236 = (UnityEngine_GameObject_o *)object[5].klass;
    if ( !v236 )
      sub_1C3E7C0(0, v231);
    v237 = (System_String_o *)StringLiteral_1/*""*/;
    v238 = UnityEngine_GameObject__get_transform(v236, 0);
    if ( !v238 )
      sub_1C3E7C0(0, v239);
    v240 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v238, (System_String_o *)StringLiteral_17979/*"chr(Clone)"*/, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v241 = UnityEngine_Object__op_Inequality(v240, 0, 0);
    if ( v241 )
      break;
LABEL_274:
    v274 = v204->fields.affectedObjectPath;
    v275 = System_String__Concat_63636468((System_String_o *)StringLiteral_1056/*"/Actor/chr/"*/, v235, 0);
    if ( !v275 )
      sub_1C3E7C0(0, v276);
    if ( !v274 )
      sub_1C3E7C0(v275, v276);
    v277 = System_String__Substring(v274, v275->fields._stringLength, 0);
    if ( !v277 )
      sub_1C3E7C0(0, v278);
    v279 = System_String__Split(v277, 0x2Fu, 0, 0);
    if ( !v279 )
      sub_1C3E7C0(0, v280);
    if ( !LODWORD(v279->max_length) )
      sub_1C3E7C8(v279, v280);
    v282 = System_String__Concat_63636468(v235, v279->m_Items[0], 0);
    v283 = (UnityEngine_GameObject_o *)object[5].klass;
    if ( !v283 )
      sub_1C3E7C0(0, v281);
    v285 = UnityEngine_GameObject__get_transform(v283, 0);
    v286 = v204->fields.affectedObjectPath;
    if ( !v286 )
      sub_1C3E7C0(0, v284);
    v287 = System_String__Replace_63683016(
             v286,
             (System_String_o *)StringLiteral_1055/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_17979/*"chr(Clone)"*/,
             0);
    if ( !v287 )
      sub_1C3E7C0(0, v288);
    v289 = System_String__Replace_63683016(v287, v282, v237, 0);
    if ( !v285 )
      sub_1C3E7C0(v289, v289);
    v290 = UnityEngine_Transform__Find(v285, v289, 0);
    WellFired_USTimelineContainer__set_AffectedObject(v204, v290, 0);
  }
  if ( !v240 )
    sub_1C3E7C0(v241, v242);
  v244 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v240, 0);
  if ( !v244 )
    sub_1C3E7C0(0, v243);
  while ( 2 )
  {
    v245 = v244->klass;
    v246 = *(unsigned __int16 *)&v244->klass->_2.rank;
    if ( *(_WORD *)&v244->klass->_2.rank )
    {
      v247 = &v245->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v247 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v246;
        v247 += 4;
        if ( !v246 )
          goto LABEL_241;
      }
      v248 = (__int64)&v245->vtable[*v247];
    }
    else
    {
LABEL_241:
      v248 = sub_1C8ED7C(v244, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v248)(v244, *(_QWORD *)(v248 + 8)) & 1) == 0 )
    {
      v401 = v237;
      v402 = 0;
      goto LABEL_266;
    }
    v249 = v244->klass;
    v250 = *(unsigned __int16 *)&v244->klass->_2.rank;
    if ( *(_WORD *)&v244->klass->_2.rank )
    {
      v251 = (System_Collections_IEnumerator_c **)&v249->_1.interfaceOffsets->offset;
      while ( *(v251 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v250;
        v251 += 2;
        if ( !v250 )
          goto LABEL_248;
      }
      v252 = (__int64)&v249->vtable[*(_DWORD *)v251 + 1];
    }
    else
    {
LABEL_248:
      v252 = sub_1C8ED7C(v244, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v253 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v252)(
                                        v244,
                                        *(_QWORD *)(v252 + 8));
    v255 = (UnityEngine_Object_o *)v253;
    if ( !v253 )
      sub_1C3E7C0(0, v254);
    v256 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v253->klass->_2.naturalAligment >= (unsigned int)v256
      && (UnityEngine_Transform_c *)v253->klass->_2.typeHierarchy[v256 - 1] == UnityEngine_Transform_TypeInfo )
    {
      v257 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v253, 0);
      if ( !v257 )
        sub_1C3E7C0(0, v258);
      v259 = UnityEngine_Object__get_name(v257, 0);
      if ( !v259 )
        sub_1C3E7C0(0, v260);
      if ( !System_String__StartsWith(v259, v235, 0) )
        continue;
      v401 = UnityEngine_Object__get_name(v255, 0);
      v402 = 0;
LABEL_266:
      v268 = sub_1C3E6A0(v244, System_IDisposable_TypeInfo);
      v237 = v401;
      v269 = v268;
      if ( v268 )
      {
        v270 = *(_QWORD *)v268;
        v271 = *(unsigned __int16 *)(*(_QWORD *)v268 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v268 + 302LL) )
        {
          v272 = (int *)(*(_QWORD *)(v270 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v272 - 1) != System_IDisposable_TypeInfo )
          {
            --v271;
            v272 += 4;
            if ( !v271 )
              goto LABEL_271;
          }
          v273 = v270 + 16LL * *v272 + 312;
        }
        else
        {
LABEL_271:
          v273 = sub_1C8ED7C(v268, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v273)(v269, *(_QWORD *)(v273 + 8));
      }
      goto LABEL_274;
    }
    break;
  }
  sub_1C3EA80(v253);
  v392 = v391;
  v394 = v393;
  v385 = sub_1C3E6A0(v244, System_IDisposable_TypeInfo);
  v386 = v385;
  if ( v385 )
  {
    v387 = *(_QWORD *)v385;
    v388 = *(unsigned __int16 *)(*(_QWORD *)v385 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v385 + 302LL) )
    {
      v389 = (int *)(*(_QWORD *)(v387 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v389 - 1) != System_IDisposable_TypeInfo )
      {
        --v388;
        v389 += 4;
        if ( !v388 )
          goto LABEL_459;
      }
      v390 = v387 + 16LL * *v389 + 312;
    }
    else
    {
LABEL_459:
      v390 = sub_1C8ED7C(v385, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v390)(v386, *(_QWORD *)(v390 + 8));
  }
  if ( v402 )
    sub_1C3E7B8(v402);
  if ( v392 != 1 )
  {
    v395 = sub_1C3E6A0(v411, System_IDisposable_TypeInfo);
    v396 = v395;
    if ( v395 )
    {
      v397 = *(_QWORD *)v395;
      v398 = *(unsigned __int16 *)(*(_QWORD *)v395 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v395 + 302LL) )
      {
        v399 = (int *)(*(_QWORD *)(v397 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v399 - 1) != System_IDisposable_TypeInfo )
        {
          --v398;
          v399 += 4;
          if ( !v398 )
            goto LABEL_506;
        }
        v400 = v397 + 16LL * *v399 + 312;
      }
      else
      {
LABEL_506:
        v400 = sub_1C8ED7C(v395, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v400)(v396, *(_QWORD *)(v400 + 8));
    }
    sub_1D27698();
  }
  v361 = *(_QWORD *)__cxa_begin_catch(v394);
  __cxa_end_catch();
LABEL_366:
  seqObject = sub_1C3E6A0(v411, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v362 = *(_QWORD *)seqObject;
    v363 = seqObject;
    v364 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v365 = (int *)(*(_QWORD *)(v362 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v365 - 1) != System_IDisposable_TypeInfo )
      {
        --v364;
        v365 += 4;
        if ( !v364 )
          goto LABEL_371;
      }
      v366 = v362 + 16LL * *v365 + 312;
    }
    else
    {
LABEL_371:
      v366 = sub_1C8ED7C(seqObject, System_IDisposable_TypeInfo, 0);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v366)(v363, *(_QWORD *)(v366 + 8));
  }
  if ( v361 )
    sub_1C3E7B8(v361);
  if ( !v24 )
    goto LABEL_418;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v413,
    v24,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v413;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          (BattlePerformance_o *)object[4].klass,
          (UnityEngine_GameObject_o *)object[5].klass,
          (System_Collections_Generic_List_GameObject__o *)object[20].monitor,
          0) )
  {
    if ( !m.fields._current )
      sub_1C3E7C0(0, v367);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v403, 0, 0);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v403 )
      goto LABEL_418;
    if ( LOBYTE(v403[34].monitor) )
      goto LABEL_409;
    v368 = v403[33].klass;
    if ( !v368 )
      goto LABEL_418;
    if ( !HIDWORD(v368->vtable[2].methodPtr) && !BattleActorControl__isNoVoice((BattleActorControl_o *)v403, 0) )
    {
      v369 = (UnityEngine_Object_o *)object[4].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v369, 0, 0);
      if ( (seqObject & 1) != 0 )
      {
        v370 = object[4].klass;
        if ( !v370 )
          goto LABEL_418;
        v371 = *(UnityEngine_Object_o **)&v370->_1.byval_arg.bits;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v371, 0, 0) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_VoiceMaster___);
            LOBYTE(object[22].monitor) = 0;
            v373 = (int32_t)object[10].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   (BattleSequenceManager_o *)object,
                   (VoiceMaster_o *)MasterData_object,
                   v373,
                   FileName,
                   v375) )
            {
              LOBYTE(object[22].monitor) = 1;
            }
            v376 = (int32_t)object[10].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v377 = Voice__getFileName(111, 0);
            BattleSequenceManager__addServantVoicePlayed(
              (BattleSequenceManager_o *)object,
              (VoiceMaster_o *)MasterData_object,
              v376,
              v377,
              v378);
            v379 = v403[33].klass;
            if ( v379 )
            {
              v380 = (int)v379->vtable[26].method;
              v381 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v381 = BalanceConfig_TypeInfo;
              }
              if ( v380 == v381->static_fields->TreasureDeviceIdMashu3 )
              {
                v382 = (int32_t)object[10].klass;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v383 = Voice__getFileName(121, 0);
                BattleSequenceManager__addServantVoicePlayed(
                  (BattleSequenceManager_o *)object,
                  (VoiceMaster_o *)MasterData_object,
                  v382,
                  v383,
                  v384);
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

  if ( (byte_4C5994E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4C5994E = 1;
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
                                                                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
                                                                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
    sub_1C3E7C0(battleTargetList, tlcont);
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

  if ( (byte_4C59952 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_GameObject_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    sub_1C3E564(&StringLiteral_14532/*"Tmp_Target"*/);
    byte_4C59952 = 1;
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
                                                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
      sub_1C3E7C0(battleTargetList, tlcont);
    }
    v8 = (UnityEngine_GameObject_o *)sub_1C3E7B0(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v8, (System_String_o *)StringLiteral_14532/*"Tmp_Target"*/, 0);
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
  const MethodInfo *v13; // x3
  int v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C59939 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__);
    this = (BattleSequenceManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
    byte_4C59939 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !evs )
    sub_1C3E7C0(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C3E7C0(v8, v9);
    if ( System_String__op_Equality(
           *(System_String_o **)((char *)&v16.fields._current->klass + (unsigned __int64)&dword_40),
           cutInName,
           0) )
    {
      *(_QWORD *)((char *)&word_38 + (_QWORD)current) = obj;
      sub_1C3E508((CGThumbnailListItem_o *)((char *)&word_38 + (_QWORD)current), (int32_t)obj, v12, v13);
      v14 = 4;
      goto LABEL_10;
    }
  }
  v14 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v10 && v14 == 4;
}


void BattleSequenceManager_BattleTarget___ctor(BattleSequenceManager_BattleTarget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_4C506A7 )
  {
    sub_1C3E564(&UnityEngine_Quaternion_TypeInfo);
    byte_4C506A7 = 1;
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
  const MethodInfo *v3; // x3
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
      sub_1C3E7C0(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0);
  }
  this->fields.targetActor = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetActor, 0, v2, v3);
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
    sub_1C3E7C0(targetActor, method);
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
  struct BattleActorControl_o **p_targetActor; // x20

  this->fields.targetActor = bac;
  p_targetActor = &this->fields.targetActor;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.targetActor, (int32_t)bac, index, method);
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
  if ( (byte_4C59AA2 & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__108_o *)sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C59AA2 = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0);
    v4->fields._wait_5__2 = v7;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C3E508(p__2__current, (int32_t)wait_5__2, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleSequenceManager__WaitEndSequence_d__108_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C59A9C & 1) == 0 )
  {
    sub_1C3E564(&BattleSequenceManager___c_TypeInfo);
    byte_4C59A9C = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)BattleSequenceManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, x1);
  return System_Single__CompareTo_65231100(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
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
    sub_1C3E7C0(this, x1);
  return System_Single__CompareTo_65231100(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_0(
        BattleSequenceManager___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_1(
        BattleSequenceManager___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___SetupTargetInfo_b__117_2(
        BattleSequenceManager___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return !x->fields._IsSubstituteBuffSkill_k__BackingField;
}


bool BattleSequenceManager___c___setup_b__88_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, x);
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
  if ( (byte_4C59A9D & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass117_0_o *)sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C59A9D = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass117_0_o *)v4->fields.targetList) == 0 )
    sub_1C3E7C0(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
  const MethodInfo *v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v10; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  v4 = this;
  if ( (byte_4C59A9E & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GameObject____78185152);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__);
    sub_1C3E564(&StringLiteral_13045/*"StandardCutIn"*/);
    this = (BattleSequenceManager___c__DisplayClass75_0_o *)sub_1C3E564(&ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    byte_4C59A9E = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass75_0_o *)AssetData__GetObject_object__51228128(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13045/*"StandardCutIn"*/,
                                                                  (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GameObject____78185152),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1C3E508((CGThumbnailListItem_o *)&_4__this->fields.CutInPrefab, (int32_t)this, v6, v7),
        (this = (BattleSequenceManager___c__DisplayClass75_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1C3E7C0(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  _9__1 = v4->fields.__9__1;
  v10 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1C3E7B0(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v16, v17);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__LoadNoblePhantasm(
    v10,
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
  const MethodInfo *v9; // x3
  __int64 *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  struct BattleSequenceManager_o *v16; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x22
  System_Action_o *v20; // x23
  struct BattleSequenceManager_o *v21; // x8
  struct BattleSequenceManager_o *v22; // x8
  _DWORD *v23; // x20
  int v24; // w8
  int v25; // w9
  __int64 v26; // x10
  struct BattleSequenceManager_o *v27; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C59A9F & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__);
    sub_1C3E564(&BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
    sub_1C3E564(&StringLiteral_9519/*"NoblePhantasm_"*/);
    byte_4C59A9F = 1;
  }
  v5 = sub_1C3E7B0(BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 16) = obj;
  v10 = (__int64 *)(v5 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)obj, v11, v12);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  v15 = *v10;
  *((_QWORD *)_4__this + 9) = *v10;
  sub_1C3E508((CGThumbnailListItem_o *)((char *)_4__this + 72), v15, v13, v14);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v16 = this->fields.__4__this;
    if ( !v16 )
      goto LABEL_26;
    overwriteSvtVoiceId = v16->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v18 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0);
  v19 = System_String__Concat_63636468((System_String_o *)StringLiteral_9519/*"NoblePhantasm_"*/, v18, 0);
  v20 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__,
    0);
  if ( !Instance )
    goto LABEL_26;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v19, v20, 1, 0);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_26;
  _4__this = v21->fields.seqObject;
  if ( !_4__this )
    goto LABEL_26;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_26;
  v23 = _4__this;
  v22->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v23 )
    goto LABEL_26;
  v24 = v23[6];
  if ( v24 < 1 )
    return;
  v25 = 0;
  while ( 1 )
  {
    if ( v24 == v25 )
      sub_1C3E7C8(_4__this, v7);
    v26 = *(_QWORD *)&v23[2 * v25 + 8];
    if ( !v26 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v26 + 64) && *(_BYTE *)(v26 + 69) )
      break;
    if ( v24 == ++v25 )
      return;
  }
  v27 = this->fields.__4__this;
  if ( !v27 )
LABEL_26:
    sub_1C3E7C0(_4__this, v7);
  v27->fields.isNoDamageMotionInDamageNoble = 1;
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
  System_Action_o *_9__3; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v2 = this;
  if ( (byte_4C59AA0 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
    sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C59AA0 = 1;
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
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
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
        sub_1C3E7C8(this, method);
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
    sub_1C3E7C0(this, method);
  }
LABEL_15:
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v14, v15);
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
  Il2CppObject *ComponentInChildren_object; // x22
  struct BattleSequenceManager___c__DisplayClass75_0_o *v12; // x8
  struct BattleSequenceManager_o *v13; // x21
  struct BattleSequenceManager___c__DisplayClass75_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v17; // x22
  UIStandFigureM_o *MeshLocal; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct BattleSequenceManager___c__DisplayClass75_0_o *v21; // x8
  struct BattleSequenceManager_o *v22; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass75_0_o *v24; // x8
  struct BattleSequenceManager_o *v25; // x9
  int32_t monitor; // w21
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int32_t monitor_high; // w9
  struct BattleSequenceManager___c__DisplayClass75_0_o *v30; // x8
  struct BattleSequenceManager_o *v31; // x10
  struct BattleSequenceManager___c__DisplayClass75_0_o *v32; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v35; // x1
  struct BattleSequenceManager___c__DisplayClass75_0_o *v36; // x8
  struct BattleSequenceManager___c__DisplayClass75_0_o *v37; // x8
  struct BattleSequenceManager_o *v38; // x20
  struct BattleSequenceManager_o *v39; // x8
  struct BattleSequenceManager___c__DisplayClass75_0_o *v40; // x8
  struct BattleSequenceManager_o *v41; // x8
  UnityEngine_Object_o *v42; // x20
  struct BattleSequenceManager___c__DisplayClass75_0_o *v43; // x8
  struct BattleSequenceManager_o *v44; // x8
  struct BattleSequenceManager___c__DisplayClass75_0_o *v45; // x8
  struct BattleSequenceManager_o *v46; // x8
  UIStandFigureM_o *v47; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct BattleSequenceManager___c__DisplayClass75_0_o *v54; // x8

  v2 = this;
  if ( (byte_4C59AA1 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_1C3E564(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__);
    byte_4C59AA1 = 1;
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
                                                            (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
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
                                                            (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
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
                                 (const MethodInfo_3151330 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
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
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
    sub_1C3E508((CGThumbnailListItem_o *)&v13->fields.standFigure, (int32_t)MeshLocal, v19, v20);
    v21 = v2->fields.CS___8__locals1;
    if ( !v21 )
      goto LABEL_73;
    v22 = v21->fields.__4__this;
    if ( !v22 )
      goto LABEL_73;
    standFigure = (UnityEngine_Object_o *)v22->fields.standFigure;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
    v24 = v2->fields.CS___8__locals1;
    if ( !v24 )
      goto LABEL_73;
    v25 = v24->fields.__4__this;
    if ( !v25 )
      goto LABEL_73;
    monitor = (int32_t)v7[1].monitor;
    v25->fields.loadStandFigureId = monitor;
    battleActor = v24->fields.battleActor;
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
      v37 = v2->fields.CS___8__locals1;
      if ( !v37 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)v37->fields.battleActor;
      if ( !this )
        goto LABEL_73;
      v38 = v37->fields.__4__this;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                (BattleActorControl_o *)this,
                                                                0);
      if ( !v38 )
        goto LABEL_73;
      v38->fields.loadStandFigureLimitCount = (int)this;
      v30 = v2->fields.CS___8__locals1;
      if ( !v30 )
        goto LABEL_73;
    }
    else
    {
      v30 = v2->fields.CS___8__locals1;
      if ( !v30 )
        goto LABEL_73;
      v31 = v30->fields.__4__this;
      if ( !v31 )
        goto LABEL_73;
      v31->fields.loadStandFigureLimitCount = monitor_high;
    }
    v39 = v30->fields.__4__this;
    if ( !v39 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)v39->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
    v40 = v2->fields.CS___8__locals1;
    if ( !v40 )
      goto LABEL_73;
    v41 = v40->fields.__4__this;
    if ( !v41 )
      goto LABEL_73;
    v42 = (UnityEngine_Object_o *)this;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)StandFigureManager__CreateStandFigureMName(
                                                              v41->fields.loadStandFigureId,
                                                              v41->fields.loadStandFigureLimitCount,
                                                              0);
    if ( !v42 )
      goto LABEL_73;
    UnityEngine_Object__set_name(v42, (System_String_o *)this, 0);
    v43 = v2->fields.CS___8__locals1;
    if ( !v43 )
      goto LABEL_73;
    v44 = v43->fields.__4__this;
    if ( !v44 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)v44->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0);
    v45 = v2->fields.CS___8__locals1;
    if ( !v45 )
      goto LABEL_73;
    v46 = v45->fields.__4__this;
    if ( !v46 )
      goto LABEL_73;
    v47 = v46->fields.standFigure;
    loadStandFigureId = v46->fields.loadStandFigureId;
    loadStandFigureLimitCount = v46->fields.loadStandFigureLimitCount;
    faceType = v46->fields.faceType;
    _9__4 = v2->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__,
        0);
      v2->fields.__9__4 = _9__4;
      sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v52, v53);
    }
    if ( !v47 )
LABEL_73:
      sub_1C3E7C0(this, method);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UIStandFigureM__SetCharacter_44097436(
                                                              v47,
                                                              loadStandFigureId,
                                                              loadStandFigureLimitCount,
                                                              faceType,
                                                              _9__4,
                                                              1,
                                                              0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_70:
      v54 = v2->fields.CS___8__locals1;
      if ( v54 )
      {
        this = (BattleSequenceManager___c__DisplayClass75_1_o *)v54->fields.__4__this;
        if ( this )
        {
          BattleSequenceManager__LoadEndStandFigure(
            (BattleSequenceManager_o *)this,
            v2->fields.obj,
            v54->fields.onComplete,
            0);
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
      v32 = v2->fields.CS___8__locals1;
      if ( !v32 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)v32->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v32->fields.onComplete;
      obj = v2->fields.obj;
      v35 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_object;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_70;
      v36 = v2->fields.CS___8__locals1;
      if ( !v36 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass75_1_o *)v36->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v36->fields.onComplete;
      obj = v2->fields.obj;
      v35 = (WellFired_USFGOPlayCutInBase_o *)v10;
    }
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v35,
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
    sub_1C3E7C0(this, method);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(0, method);
  BattleSequenceManager__LoadEndStandFigure(_4__this, this->fields.obj, this->fields.onComplete, 0);
}


void BattleSequenceManager_onGameObjectLoadComplete___ctor(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A85694;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A85674;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A8562C;
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
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v6, callback, object);
}


void BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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
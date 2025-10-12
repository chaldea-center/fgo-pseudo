void BattleSequenceManager___cctor(const MethodInfo *method)
{
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4C3A57C & 1) == 0 )
  {
    sub_1C32C20(&BattleSequenceManager_TypeInfo);
    byte_4C3A57C = 1;
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

  if ( (byte_4C3A57B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Object__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_Action__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
    sub_1C32C20(&StringLiteral_9372/*"N_{0}{1}"*/);
    byte_4C3A57B = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ReleaseSoundNames, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.DelayInvokeMethodList, (int32_t)v6, v7, v8);
  v9 = StringLiteral_9372/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9372/*"N_{0}{1}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.PosNodeFormatNP, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.npEndDeleteObjects, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__TypeInfo);
  System_Collections_Generic_Dictionary_object__Color____ctor(
    v15,
    (const MethodInfo_344950C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color___ctor__);
  this->fields.rendererBaseAddColorsDict = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__o *)v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rendererBaseAddColorsDict, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v18;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.battleTargetList, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.createdObjects, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v24,
    (const MethodInfo_344F6E4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v27,
    (const MethodInfo_364F828 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v27;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v27, v28, v29);
  this->fields.nowTargetAlpha = 1.0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3A55B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_24713/*"wait"*/);
    byte_4C3A55B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v5 )
  {
    if ( !actor )
      sub_1C32E7C(v5);
    BattleActorControl__RevertDefaultAnimation(actor, 0);
    BattleActorControl__playAnimation_47034604(actor, (System_String_o *)StringLiteral_24713/*"wait"*/, 0, 0);
    if ( !this->fields.DemoMode )
    {
      v6.fields.r = 0.0;
      v6.fields.g = 0.0;
      v6.fields.b = 0.0;
      v6.fields.a = 0.0;
      BattleActorControl__ChangeShadowColor(actor, v6, 0.3, 0);
    }
    v7.fields.r = 0.0;
    v7.fields.g = 0.0;
    v7.fields.b = 0.0;
    v7.fields.a = 1.0;
    BattleActorControl__SetMaterialColor(actor, v7, 0.0, 0);
  }
}


void BattleSequenceManager__CacheExecutingTdInfo(
        BattleSequenceManager_o *this,
        ExecutingTdInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.executingTdInfoCache = info;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.executingTdInfoCache, (int32_t)info, (int32_t)method, v3);
}


void BattleSequenceManager__CacheRendererBaseAddColor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0
  BattlePerformance_c *klass; // x8
  BattlePerformance_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  __int64 v9; // x19
  __int64 v10; // x8
  __int64 v11; // x9
  int *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  BattleActorControl_o *v19; // x21
  BattleServantData_o *v20; // x0
  UnityEngine_SkinnedMeshRenderer_array *RendererArray; // x0
  UnityEngine_SkinnedMeshRenderer_array *v22; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x29
  Il2CppObject *v25; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x23
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  System_Nullable_Color__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Nullable_Color__o v33; // [xsp+20h] [xbp-80h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3A579 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C32C20(&Method_System_Nullable_Color__get_Value__);
    byte_4C3A579 = 1;
  }
  entity = 0;
  memset(&v33, 0, sizeof(v33));
  performance = this->fields.performance;
  if ( !performance
    || (performance = (BattlePerformance_o *)BattlePerformance__EnumerateActorControls(performance, 0)) == 0 )
  {
    sub_1C32E7C(performance);
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
    v8 = sub_1C83438(performance, System_Collections_Generic_IEnumerable_BattleActorControl__TypeInfo, 0);
  }
  v9 = (*(__int64 (__fastcall **)(BattlePerformance_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  if ( !v9 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v10 = *(_QWORD *)v9;
    v11 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
    {
      v12 = (int *)(*(_QWORD *)(v10 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = v10 + 16LL * *v12 + 312;
    }
    else
    {
LABEL_16:
      v13 = sub_1C83438(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v13)(v9, *(_QWORD *)(v13 + 8)) & 1) == 0 )
      break;
    v14 = *(_QWORD *)v9;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleActorControl__c **)v16 - 1) != System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_23;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_23:
      v17 = sub_1C83438(v9, System_Collections_Generic_IEnumerator_BattleActorControl__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v9, *(_QWORD *)(v17 + 8));
    v19 = (BattleActorControl_o *)v18;
    if ( !v18 )
      sub_1C32E7C(0);
    v20 = *(BattleServantData_o **)(v18 + 528);
    if ( !v20 )
      sub_1C32E7C(0);
    if ( BattleServantData__TryGetDisplayTypeDetailEntity(v20, &entity, 0) )
    {
      if ( !entity )
        sub_1C32E7C(0);
      NpcServantDisplayTypeDetailEntity__get_AddColor(&v32, entity, 0);
      v33 = v32;
      if ( v32.fields.hasValue )
      {
        RendererArray = BattleActorControl__GetRendererArray(v19, 1, 0);
        v22 = RendererArray;
        if ( !RendererArray )
          sub_1C32E7C(0);
        max_length = RendererArray->max_length;
        if ( (int)max_length >= 1 )
        {
          v24 = 0;
          do
          {
            if ( v24 >= (unsigned int)max_length )
              sub_1C32E84(RendererArray);
            v25 = (Il2CppObject *)v22->m_Items[v24];
            rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
            Value = System_Nullable_Color___get_Value(
                      &v33,
                      (const MethodInfo_38BB494 *)Method_System_Nullable_Color__get_Value__);
            if ( !rendererBaseAddColorsDict )
              sub_1C32E7C(v27);
            System_Collections_Generic_Dictionary_object__Color___set_Item(
              rendererBaseAddColorsDict,
              v25,
              Value,
              (const MethodInfo_3449EC8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__set_Item__);
            LODWORD(max_length) = v22->max_length;
            ++v24;
          }
          while ( (__int64)v24 < (int)max_length );
        }
      }
    }
  }
  v28 = *(_QWORD *)v9;
  v29 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
  {
    v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_41;
    }
    v31 = v28 + 16LL * *v30 + 312;
  }
  else
  {
LABEL_41:
    v31 = sub_1C83438(v9, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v31)(v9, *(_QWORD *)(v31 + 8));
}


bool BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_4C3A571 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4C3A571 = 1;
  }
  if ( System_String__Equals_63554576(bgmName, this->fields.BackupBgmName, 0) )
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
              (const MethodInfo_30FA694 *)Method_System_Linq_Enumerable_Contains_string___);
  }
}


void BattleSequenceManager__ClearExecutingTdInfoCache(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.executingTdInfoCache = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.executingTdInfoCache, 0, v2, v3);
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
    sub_1C32E7C(this);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, const MethodInfo *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.methodPtr)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_46063940(this, obj, onComplete, v8);
}


bool BattleSequenceManager__CreateCutInStandFigure_46063940(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Component_o *Instance; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v16; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v23; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v27; // x24

  if ( (byte_4C3A544 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__);
    sub_1C32C20(&BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
    byte_4C3A544 = 1;
  }
  v7 = sub_1C32E6C(BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass79_0___ctor((BattleSequenceManager___c__DisplayClass79_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = obj;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)obj, v11, v12);
  *(_QWORD *)(v7 + 32) = onComplete;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)onComplete, v13, v14);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_16;
  v16 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_16;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0);
  if ( !v16 )
    goto LABEL_16;
  MeshLocal = StandFigureManager__CreateMeshLocal(v16, (UnityEngine_GameObject_o *)Instance, 0);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.standFigure, (int32_t)MeshLocal, v19, v20);
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
          v23 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v27 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            v27,
            (Il2CppObject *)v7,
            Method_BattleSequenceManager___c__DisplayClass79_0__CreateCutInStandFigure_b__0__,
            0);
          if ( v23 )
            return UIStandFigureM__SetCharacter_43939848(
                     v23,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v27,
                     1,
                     0);
        }
      }
    }
LABEL_16:
    sub_1C32E7C(Instance);
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
  Il2CppObject *current; // x20
  float v24; // s0
  int v25; // w28
  System_Nullable_float__o v26; // x0
  System_Nullable_float__o v27; // x21
  const MethodInfo_38BE6C8 *v28; // x3
  System_Nullable_float__o v29; // x1
  System_Nullable_float__o v30; // x2
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x20
  __int64 v35; // x0
  __int64 v36; // x1
  struct BattlePerformance_o *v37; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v39; // x8
  struct BattlePerformance_o *v40; // x8
  System_String_o *v41; // x19
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  BattleSequenceManager_c *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x21
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x1
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
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  __int64 v75; // x21
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  __int64 v78; // x1
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  __int64 v81; // x1
  System_Collections_Hashtable_o *v82; // x0
  __int64 v83; // x0
  int v84; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v85; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_long__o v89; // 0:x0.16

  if ( (byte_4C3A55C & 1) == 0 )
  {
    sub_1C32C20(&BattleSequenceManager_TypeInfo);
    sub_1C32C20(&BgmManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
    sub_1C32C20(&Method_System_Nullable_long___ctor__);
    sub_1C32C20(&Method_System_Nullable_float___ctor__);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_9835/*"OnChangeBgmVolume"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3A55C = 1;
  }
  changeBgm = 0;
  memset(&v87, 0, sizeof(v87));
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.BackupBgmName, (int32_t)v5, (int32_t)v7, v8);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.BackupBgmName, (int32_t)v10, v11, v12);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.BackupBgmName, (int32_t)v15, v16, v17);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v13 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0);
    v9 = 1;
  }
  v18 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1C32E7C(performance);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0);
  if ( ((v13 | System_String__op_Inequality(v18, BgmName, 0)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    performance = sub_1C32CC8(object___TypeInfo, 8);
    if ( !performance )
      goto LABEL_90;
    v34 = performance;
    v35 = StringLiteral_19689/*"from"*/;
    if ( StringLiteral_19689/*"from"*/ )
    {
      v35 = sub_1C32D5C(StringLiteral_19689/*"from"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
      if ( !v35 )
        goto LABEL_92;
      v36 = StringLiteral_19689/*"from"*/;
    }
    else
    {
      v36 = 0;
    }
    if ( !*(_DWORD *)(v34 + 24) )
      goto LABEL_91;
    *(_QWORD *)(v34 + 32) = v36;
    sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 32), v36, v32, v33);
    v48 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v48 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v86.fields._list = v48->static_fields->NoblePhantasmBgmVolumeRate;
    v35 = j_il2cpp_value_box_0(float_TypeInfo, &v86, v42, v43, v44, v45, v46, v47);
    v51 = v35;
    if ( !v35 || (v35 = sub_1C32D5C(v35, *(_QWORD *)(*(_QWORD *)v34 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v34 + 24) <= 1u )
        goto LABEL_91;
      *(_QWORD *)(v34 + 40) = v51;
      sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 40), v51, v49, v50);
      v35 = StringLiteral_24106/*"to"*/;
      if ( StringLiteral_24106/*"to"*/ )
      {
        v35 = sub_1C32D5C(StringLiteral_24106/*"to"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
        if ( !v35 )
          goto LABEL_92;
        v54 = StringLiteral_24106/*"to"*/;
      }
      else
      {
        v54 = 0;
      }
      if ( *(_DWORD *)(v34 + 24) <= 2u )
        goto LABEL_91;
      *(_QWORD *)(v34 + 48) = v54;
      sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 48), v54, v52, v53);
      *(_DWORD *)&v85.fields.hasValue = 1;
      v35 = j_il2cpp_value_box_0(int_TypeInfo, &v85, v55, v56, v57, v58, v59, v60);
      v63 = v35;
      if ( !v35 || (v35 = sub_1C32D5C(v35, *(_QWORD *)(*(_QWORD *)v34 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v34 + 24) <= 3u )
          goto LABEL_91;
        *(_QWORD *)(v34 + 56) = v63;
        sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 56), v63, v61, v62);
        v35 = StringLiteral_24067/*"time"*/;
        if ( StringLiteral_24067/*"time"*/ )
        {
          v35 = sub_1C32D5C(StringLiteral_24067/*"time"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
          if ( !v35 )
            goto LABEL_92;
          v66 = StringLiteral_24067/*"time"*/;
        }
        else
        {
          v66 = 0;
        }
        if ( *(_DWORD *)(v34 + 24) <= 4u )
          goto LABEL_91;
        *(_QWORD *)(v34 + 64) = v66;
        sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 64), v66, v64, v65);
        v84 = 1056964608;
        v35 = j_il2cpp_value_box_0(float_TypeInfo, &v84, v67, v68, v69, v70, v71, v72);
        v75 = v35;
        if ( !v35 || (v35 = sub_1C32D5C(v35, *(_QWORD *)(*(_QWORD *)v34 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v34 + 24) <= 5u )
            goto LABEL_91;
          *(_QWORD *)(v34 + 72) = v75;
          sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 72), v75, v73, v74);
          v35 = StringLiteral_22435/*"onupdate"*/;
          if ( StringLiteral_22435/*"onupdate"*/ )
          {
            v35 = sub_1C32D5C(StringLiteral_22435/*"onupdate"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
            if ( !v35 )
              goto LABEL_92;
            v78 = StringLiteral_22435/*"onupdate"*/;
          }
          else
          {
            v78 = 0;
          }
          if ( *(_DWORD *)(v34 + 24) <= 6u )
            goto LABEL_91;
          *(_QWORD *)(v34 + 80) = v78;
          sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 80), v78, v76, v77);
          v35 = StringLiteral_9835/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9835/*"OnChangeBgmVolume"*/ )
          {
            v81 = 0;
LABEL_84:
            if ( *(_DWORD *)(v34 + 24) > 7u )
            {
              *(_QWORD *)(v34 + 88) = v81;
              sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 88), v81, v79, v80);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v82 = iTween__Hash((System_Object_array *)v34, 0);
              iTween__ValueTo(gameObject, v82, 0);
              return;
            }
LABEL_91:
            sub_1C32E84(v35);
          }
          v35 = sub_1C32D5C(StringLiteral_9835/*"OnChangeBgmVolume"*/, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
          if ( v35 )
          {
            v81 = StringLiteral_9835/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v83 = sub_1C32EA0(v35);
    sub_1C32D48(v83, 0);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v86,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v87 = v86;
          while ( 1 )
          {
            v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v87,
                    (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v22 )
              break;
            current = v87.fields._current;
            if ( !v87.fields._current )
              sub_1C32E7C(v22);
            v24 = (float)(__int64)v87.fields._current[2].klass + -800.0;
            if ( v24 == INFINITY )
              v25 = 0x80000000;
            else
              v25 = (int)v24;
            v85 = 0;
            v26 = (System_Nullable_float__o)&v85;
            System_Nullable_float____ctor(v26, 0.5, (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
            v27 = v85;
            v89.fields.value = v25 & (unsigned int)~(v25 >> 31);
            *(_OWORD *)&v86.fields._list = 0u;
            *(_QWORD *)&v89.fields.hasValue = &v86;
            System_Nullable_long____ctor(v89, Method_System_Nullable_long___ctor__, v28);
            v29 = 0;
            v30 = v27;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v29, v30, *(System_Nullable_long__o *)&v86.fields._list, 0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v87,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_41090512(v21, 0, 0);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v9 )
  {
    v37 = this->fields.performance;
    if ( !v37 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v37->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    performance = UnityEngine_Object__op_Inequality(logic, 0, 0);
    if ( (performance & 1) != 0 )
    {
      v39 = this->fields.performance;
      if ( v39 )
      {
        performance = (__int64)v39->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0, 0);
          v40 = this->fields.performance;
          if ( v40 )
          {
            performance = (__int64)v40->fields.logic;
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
  v41 = *p_BackupBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v41, 0);
}


bool BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v12; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4C3A573 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
    sub_1C32C20(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__);
    sub_1C32C20(&BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
    byte_4C3A573 = 1;
  }
  v7 = sub_1C32E6C(BattleSequenceManager___c__DisplayClass143_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass143_0___ctor((BattleSequenceManager___c__DisplayClass143_0_o *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_QWORD *)(v7 + 16) = checkBgmName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)checkBgmName, v9, v10);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0;
  v12 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0);
  v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass143_0__ExistBackupBgmPlayGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__51293756(
           (System_Collections_Generic_IEnumerable_TSource__o *)v12,
           (System_Func_TSource__bool__o *)v13,
           (const MethodInfo_30EAE3C *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
    sub_1C32E7C(0);
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
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__51598740; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x21
  BattleSequenceManager___c_c *v11; // x0
  System_Comparison_T__o *_9__76_0; // x23
  Il2CppObject *v13; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Func_object__bool__o *v17; // x23
  System_Collections_Generic_List_object__o *v18; // x21
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  BattleSequenceManager___c_c *v20; // x0
  System_Comparison_T__o *_9__76_2; // x19
  Il2CppObject *v22; // x22
  struct BattleSequenceManager___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C3A543 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___);
    sub_1C32C20(&System_Comparison_USFGOPlayAudioEvent__TypeInfo);
    sub_1C32C20(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__);
    sub_1C32C20(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1C32C20(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__);
    sub_1C32C20(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__);
    sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__);
    sub_1C32C20(&BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
    sub_1C32C20(&BattleSequenceManager___c_TypeInfo);
    byte_4C3A543 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v6 = sub_1C32E6C(BattleSequenceManager___c__DisplayClass76_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass76_0___ctor((BattleSequenceManager___c__DisplayClass76_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_27;
  *(_QWORD *)(v6 + 16) = syncGroupName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 16), (int32_t)syncGroupName, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__51598740 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                                                                           sequence,
                                                                                           (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v10 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v10,
    ComponentsInChildren_object__51598740,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v11 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v11 = BattleSequenceManager___c_TypeInfo;
  }
  _9__76_0 = (System_Comparison_T__o *)v11->static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleSequenceManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__76_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__76_0,
      v13,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_0__,
      0);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__76_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__76_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__76_0, (int32_t)_9__76_0, v15, v16);
  }
  System_Collections_Generic_List_object___Sort_58303104(
    v10,
    _9__76_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v17 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v6,
    Method_BattleSequenceManager___c__DisplayClass76_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v10,
          (System_Func_T__bool__o *)v17,
          (const MethodInfo_30C6790 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__51598740 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                                                                             sequence,
                                                                                             (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v18 )
    {
      System_Collections_Generic_List_object___AddRange(
        v18,
        ComponentsInChildren_object__51598740,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v19 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                                             sequence,
                                                             (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v18,
        v19,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v20 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v20 = BattleSequenceManager___c_TypeInfo;
      }
      _9__76_2 = (System_Comparison_T__o *)v20->static_fields->__9__76_2;
      if ( !_9__76_2 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = BattleSequenceManager___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__76_2 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__76_2,
          v22,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__76_2__,
          0);
        v23 = BattleSequenceManager___c_TypeInfo->static_fields;
        v23->__9__76_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__76_2;
        sub_1C32BC4((CGThumbnailListItem_o *)&v23->__9__76_2, (int32_t)_9__76_2, v24, v25);
      }
      System_Collections_Generic_List_object___Sort_58303104(
        v18,
        _9__76_2,
        (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v26,
        v18,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v26,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v26.fields._current )
          sub_1C32E7C(0);
      }
      while ( (((__int64 (*)(void))v26.fields._current->klass->vtable[16].methodPtr)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1C32E7C(ComponentsInChildren_object__51598740);
  }
}


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

  if ( (byte_4C3A547 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A547 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1C32E7C(actor);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0);
}


UnityEngine_Color_o BattleSequenceManager__GetRendererBaseAddColor(
        BattleSequenceManager_o *this,
        UnityEngine_SkinnedMeshRenderer_o *inputRenderer,
        const MethodInfo *method)
{
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3A578 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
    byte_4C3A578 = 1;
  }
  v5.fields.r = 0.0;
  v5.fields.g = 0.0;
  v5.fields.b = 0.0;
  v5.fields.a = 0.0;
  return BasicHelper__GetValue_object__Color_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.rendererBaseAddColorsDict,
           (Il2CppObject *)inputRenderer,
           v5,
           (const MethodInfo_30CB470 *)Method_BasicHelper_GetValue_SkinnedMeshRenderer__Color___);
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
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3A566 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C32C20(&StringLiteral_6041/*"Enemy"*/);
    sub_1C32C20(&StringLiteral_10678/*"Player"*/);
    byte_4C3A566 = 1;
  }
  if ( isEnemy )
    v8 = &StringLiteral_6041/*"Enemy"*/;
  else
    v8 = &StringLiteral_10678/*"Player"*/;
  v9 = (Il2CppObject *)*v8;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v20 = pos;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v11, v12, v13, v14, v15, v16);
  v18 = System_String__Format_63559836(format, v9, v17, 0);
  if ( !Instance )
    sub_1C32E7C(v18);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v18, 0);
}


UnityEngine_Transform_o *BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass124_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v8; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4C3A567 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
    sub_1C32C20(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass124_0__GetTargetPosIndexTransform_b__0__);
    sub_1C32C20(&BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
    byte_4C3A567 = 1;
  }
  v5 = (BattleSequenceManager___c__DisplayClass124_0_o *)sub_1C32E6C(BattleSequenceManager___c__DisplayClass124_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass124_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.posIndex = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v8 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_object____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass124_0__GetTargetPosIndexTransform_b__0__,
    0);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___Find(
                                        battleTargetList,
                                        (System_Predicate_T__o *)v8,
                                        (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v6 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0);
    if ( v6 )
      return UnityEngine_GameObject__get_transform(v6, 0);
LABEL_9:
    sub_1C32E7C(v6);
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
  sub_1C32BC4((CGThumbnailListItem_o *)fxdVoice, 0, (int32_t)method, v3);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_1C32BC4((CGThumbnailListItem_o *)fxdVoice, (int32_t)fixedVoice, v6, v7);
  return 1;
}


bool BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  void *ExecutingTdInfo; // x0
  Il2CppObject *Component_object; // x19
  BattleSequenceManager_c *v9; // x0

  if ( (byte_4C3A572 & 1) == 0 )
  {
    sub_1C32C20(&BattleSequenceManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A572 = 1;
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
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return 0;
  v9 = BattleSequenceManager_TypeInfo;
  if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
  ExecutingTdInfo = BattleSequenceManager__SafeGetExecutingTdInfo((const MethodInfo *)v9);
  if ( !ExecutingTdInfo || !Component_object )
LABEL_19:
    sub_1C32E7C(ExecutingTdInfo);
  return BattleActorControl__IsDelayEndSequence(
           (BattleActorControl_o *)Component_object,
           *((_DWORD *)ExecutingTdInfo + 4),
           0);
}


bool BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v2; // x0
  UnityEngine_Object_o *monitor; // x19
  Il2CppObject *Component_object; // x19

  if ( (byte_4C3A574 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C3A574 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  monitor = (UnityEngine_Object_o *)v2[3].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  v2 = (UnityEngine_GameObject_o *)v2[3].monitor;
  if ( !v2 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1C32E7C(v2);
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

  if ( (byte_4C3A576 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A576 = 1;
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x8

  if ( (byte_4C3A545 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C3A545 = 1;
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
    sub_1C32E7C(IsNullOrEmpty);
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_14;
  items = IsNullOrEmpty->fields._items;
  v11 = Method_System_Collections_Generic_List_string__Add__;
  ++IsNullOrEmpty->fields._version;
  if ( !items )
    goto LABEL_14;
  size = IsNullOrEmpty->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IsNullOrEmpty,
      (Il2CppObject *)bgmName,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v13[4] = (Il2CppClass *)bgmName;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)bgmName, v8, v9);
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
  UIStandFigureRender_o *v8; // x0

  if ( (byte_4C3A546 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A546 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0, 0) )
  {
    v8 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v8 )
      sub_1C32E7C(0);
    UIStandFigureRender__SetActive(v8, 0, 0);
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
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v9; // x8
  struct BattleData_o *v10; // x8
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  Il2CppObject *v13; // x21
  __int64 *v14; // x8
  struct BattlePerformance_o *v15; // x9
  System_String_o *v16; // x19
  BattleData_o *v17; // x21
  UnityEngine_Component_o *TransformChild; // x19
  float x; // s8
  float y; // s9
  float z; // s10
  float v22; // s11
  float v23; // s12
  float v24; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3A562 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_18978/*"en_Parts_Up01"*/);
    sub_1C32C20(&StringLiteral_18977/*"en_Parts_Under01"*/);
    byte_4C3A562 = 1;
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
      v7 = this->fields.performance;
      if ( !v7 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v7->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0, 0);
      if ( ((unsigned __int8)klass & 1) == 0 )
      {
        v9 = this->fields.performance;
        if ( !v9 )
          goto LABEL_54;
        v10 = v9->fields.data;
        if ( !v10 )
          goto LABEL_54;
        if ( v10->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_54;
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CoreObj,
                                                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                v13 = UnityEngine_GameObject__GetComponent_object_(
                        klass,
                        (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0);
                if ( ((unsigned __int8)klass & 1) == 0 )
                {
                  if ( !v13 )
                    goto LABEL_54;
                  if ( LOBYTE(v13[34].monitor) )
                  {
                    klass = (UnityEngine_GameObject_o *)v13[33].klass;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)klass, 0) )
                      goto LABEL_37;
                    klass = (UnityEngine_GameObject_o *)v13[33].klass;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)klass, 0) )
                    {
LABEL_37:
                      klass = (UnityEngine_GameObject_o *)v13[33].klass;
                      if ( !klass )
                        goto LABEL_54;
                      klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                            (BattleServantData_o *)klass,
                                                            0);
                      if ( ((unsigned __int8)klass & 1) != 0 )
                      {
                        v14 = &StringLiteral_18978/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        klass = (UnityEngine_GameObject_o *)v13[33].klass;
                        if ( !klass )
                          goto LABEL_54;
                        klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                              (BattleServantData_o *)klass,
                                                              0);
                        if ( ((unsigned __int8)klass & 1) == 0 )
                          return 0;
                        v14 = &StringLiteral_18977/*"en_Parts_Under01"*/;
                      }
                      v15 = this->fields.performance;
                      if ( !v15 )
                        goto LABEL_54;
                      v16 = (System_String_o *)*v14;
                      v17 = v15->fields.data;
                      klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Component_object,
                                                            0);
                      if ( !v17 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v17,
                                                                    (UnityEngine_Transform_o *)klass,
                                                                    v16,
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
                              v27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)klass, 0);
                              v22 = v27.fields.x;
                              v23 = v27.fields.y;
                              v24 = v27.fields.z;
                              klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)Component_object,
                                                                    0);
                              if ( klass )
                              {
                                v28.fields.z = z - v24;
                                v28.fields.y = y - v23;
                                v28.fields.x = x - v22;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v28, 0);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1C32E7C(klass);
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
    sub_1C32E7C(this);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (CGThumbnailListItem_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(intptr_t, intptr_t))BgChangedCallback->fields.invoke_impl)(
      BgChangedCallback->fields.method_code,
      BgChangedCallback->fields.method);
    p_BgChangedCallback->klass = 0;
    sub_1C32BC4(p_BgChangedCallback, 0, v6, v7);
  }
}


void BattleSequenceManager__OnChangeBgmVolume(BattleSequenceManager_o *this, float newValue, const MethodInfo *method)
{
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v6; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v8; // x19
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_String_o *v22; // x20
  float v23; // s9
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( (byte_4C3A557 & 1) == 0 )
  {
    sub_1C32C20(&BgmManager_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C3A557 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v6 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0);
    if ( !v6 )
      sub_1C32E7C(0);
    klass = v6->klass;
    v8 = v6;
    v9 = *(unsigned __int16 *)&v6->klass->_2.rank;
    if ( *(_WORD *)&v6->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C83438(v6, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))v11)(
            v8,
            *(_QWORD *)(v11 + 8));
    if ( !v12 )
      sub_1C32E7C(0);
    while ( 1 )
    {
      v13 = *(_QWORD *)v12;
      v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v14;
          v15 += 4;
          if ( !v14 )
            goto LABEL_16;
        }
        v16 = v13 + 16LL * *v15 + 312;
      }
      else
      {
LABEL_16:
        v16 = sub_1C83438(v12, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
        break;
      v17 = *(_QWORD *)v12;
      v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v19 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_23;
        }
        v20 = v17 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_23:
        v20 = sub_1C83438(v12, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
      }
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
      if ( !v21 )
        sub_1C32E7C(0);
      v22 = *(System_String_o **)(v21 + 16);
      v23 = *(float *)(v21 + 24);
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v22, v23 * newValue, 0);
    }
    v24 = *(_QWORD *)v12;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_33;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_33:
      v27 = sub_1C83438(v12, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v12, *(_QWORD *)(v27 + 8));
  }
}


void BattleSequenceManager__OnEndNoblePhantasm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *rendererBaseAddColorsDict; // x0

  if ( (byte_4C3A577 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
    byte_4C3A577 = 1;
  }
  rendererBaseAddColorsDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.rendererBaseAddColorsDict;
  if ( !rendererBaseAddColorsDict )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_object__Color___Clear(
    rendererBaseAddColorsDict,
    (const MethodInfo_344A088 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Color__Clear__);
}


void BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(BattleSequenceManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Object_o *actorCamera; // x20
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformance_o **p_performance; // x25
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x8
  int32_t size; // w2
  int v17; // w9
  Il2CppObject *v18; // x20
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x8
  int32_t v20; // w2
  int v21; // w9
  UnityEngine_Object_o *seqObject; // x21
  struct UnityEngine_GameObject_o **p_seqObject; // x27
  UnityEngine_Object_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  BattlePerformance_o *v28; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x10
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  struct UnityEngine_GameObject_array *saveWaitPlayer; // x9
  __int64 v32; // x20
  __int64 v33; // x22
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v35; // x23
  UnityEngine_Object_o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct UnityEngine_GameObject_array *v39; // x8
  struct UnityEngine_GameObject_array *v40; // x9
  Il2CppClass *v41; // x1
  struct UnityEngine_GameObject_array *v42; // x27
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v44; // x21
  UnityEngine_Object_o *v45; // x23
  char v46; // w22
  UnityEngine_Object_o *Component_object; // x23
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v49; // x20
  __int64 v50; // x23
  unsigned __int64 v51; // x9
  unsigned __int64 v52; // x27
  UnityEngine_Object_o *v53; // x22
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct UnityEngine_GameObject_array *v56; // x8
  struct UnityEngine_GameObject_array *v57; // x9
  Il2CppClass *v58; // x1
  struct UnityEngine_GameObject_array *v59; // x23
  il2cpp_array_size_t v60; // x8
  unsigned __int64 v61; // x27
  int v62; // w28
  UnityEngine_Object_o *v63; // x22
  char v64; // w21
  UnityEngine_Object_o *v65; // x22
  UnityEngine_Object_o *data; // x21
  struct UnityEngine_GameObject_array *v67; // x20
  il2cpp_array_size_t v68; // x8
  unsigned __int64 v69; // x22
  UnityEngine_Object_o *v70; // x21
  Il2CppObject *v71; // x0
  const MethodInfo *v72; // x2
  struct UnityEngine_GameObject_array *v73; // x20
  il2cpp_array_size_t v74; // x8
  unsigned __int64 v75; // x22
  UnityEngine_Object_o *v76; // x21
  Il2CppObject *v77; // x0
  const MethodInfo *v78; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v81; // x2
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // x1
  UnityEngine_Camera_o *v85; // x21
  int32_t cullingMask; // w22
  char v87; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v89; // w22
  char v90; // w0
  struct System_Action_USSequencer__o **p_OnCompleteActorCallback; // x19
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // t1
  UnityEngine_Object_o *v93; // x21
  UnityEngine_Component_o *v94; // x1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  UnityEngine_Component_o *v97; // x19
  CGThumbnailListItem_o *v98; // x20
  UnityEngine_Object_o *klass; // x21
  UnityEngine_Object_o *v100; // x21
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  BattlePerformance_o *v103; // x19
  int32_t v104; // w20
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v108; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C3A559 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&CommonUI_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Object__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Object__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C32C20(&StringLiteral_9515/*"NoblePhantasm/CutIns"*/);
    sub_1C32C20(&StringLiteral_3106/*"Battle2D"*/);
    byte_4C3A559 = 1;
  }
  entity = 0;
  memset(&v108, 0, sizeof(v108));
  memset(&v107, 0, sizeof(v107));
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
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v5);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v7);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v8);
  BattleSequenceManager__restoreBattleActorTransform(this, v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_106;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_3396884 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v10) )
    BattleSequenceManager__CrossFadeBgm(this, v11);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v11);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v106,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v108 = v106;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v108,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v108.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v108,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_106;
  size = npEndDeleteObjects->fields._size;
  v17 = npEndDeleteObjects->fields._version + 1;
  npEndDeleteObjects->fields._size = 0;
  npEndDeleteObjects->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)npEndDeleteObjects->fields._items, 0, size, 0);
  transform = (UnityEngine_Component_o *)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_106;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v106,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v107 = v106;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v107,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v18 = v107.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)v18, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v107,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_106;
  v20 = createdObjects->fields._size;
  v21 = createdObjects->fields._version + 1;
  createdObjects->fields._size = 0;
  createdObjects->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)createdObjects->fields._items, 0, v20, 0);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0, 0) )
  {
    v24 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v24, 0);
    *p_seqObject = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.seqObject, 0, v25, v26);
  }
  transform = (UnityEngine_Component_o *)*p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_106;
  v28 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  p_actorlist = v28->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_106;
  e_actorlist = v28->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_106;
  if ( ActorActiveList->fields._size == LODWORD(e_actorlist->max_length) + LODWORD(p_actorlist->max_length) )
  {
    saveWaitPlayer = this->fields.saveWaitPlayer;
    if ( saveWaitPlayer )
    {
      v32 = 4;
      v33 = 32;
      while ( 1 )
      {
        max_length_low = LODWORD(saveWaitPlayer->max_length);
        v35 = v32 - 4;
        if ( v32 - 4 >= (int)max_length_low )
          break;
        if ( v35 >= max_length_low )
          goto LABEL_192;
        v36 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitPlayer->obj.klass + v32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v36, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v39 = this->fields.saveWaitPlayer;
          if ( !v39 )
            goto LABEL_106;
          if ( v35 >= LODWORD(v39->max_length) )
            goto LABEL_192;
          v40 = (*p_performance)->fields.p_actorlist;
          if ( !v40 )
            goto LABEL_106;
          if ( v35 >= LODWORD(v40->max_length) )
            goto LABEL_192;
          v41 = (Il2CppClass *)*((_QWORD *)&v39->obj.klass + v32);
          *(Il2CppClass **)((char *)&v40->obj.klass + v33) = v41;
          sub_1C32BC4((CGThumbnailListItem_o *)((char *)v40 + v33), (int32_t)v41, v37, v38);
        }
        saveWaitPlayer = this->fields.saveWaitPlayer;
        ++v32;
        v33 += 8;
        if ( !saveWaitPlayer )
          goto LABEL_106;
      }
      v28 = *p_performance;
      if ( !*p_performance )
        goto LABEL_106;
    }
    v42 = v28->fields.p_actorlist;
    if ( !v42 )
      goto LABEL_106;
    max_length = v42->max_length;
    if ( (int)max_length >= 1 )
    {
      v44 = 0;
      while ( v44 < (unsigned int)max_length )
      {
        v45 = (UnityEngine_Object_o *)v42->m_Items[v44];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v45, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v44,
                                                   (const MethodInfo_37520DC *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v45 )
            goto LABEL_106;
          v46 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v45, (unsigned __int8)transform & 1, 0);
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)v45,
                                                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v46 & 1, 0);
          }
        }
        LODWORD(max_length) = v42->max_length;
        if ( (__int64)++v44 >= (int)max_length )
          goto LABEL_92;
      }
LABEL_192:
      sub_1C32E84(transform);
    }
    LODWORD(v44) = 0;
LABEL_92:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( saveWaitEnemy )
    {
      v49 = 4;
      v50 = 32;
      while ( 1 )
      {
        v51 = LODWORD(saveWaitEnemy->max_length);
        v52 = v49 - 4;
        if ( v49 - 4 >= (int)v51 )
          break;
        if ( v52 >= v51 )
          goto LABEL_192;
        v53 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v49);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v53, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          if ( !*p_performance )
            goto LABEL_106;
          v56 = this->fields.saveWaitEnemy;
          if ( !v56 )
            goto LABEL_106;
          if ( v52 >= LODWORD(v56->max_length) )
            goto LABEL_192;
          v57 = (*p_performance)->fields.e_actorlist;
          if ( !v57 )
            goto LABEL_106;
          if ( v52 >= LODWORD(v57->max_length) )
            goto LABEL_192;
          v58 = (Il2CppClass *)*((_QWORD *)&v56->obj.klass + v49);
          *(Il2CppClass **)((char *)&v57->obj.klass + v50) = v58;
          sub_1C32BC4((CGThumbnailListItem_o *)((char *)v57 + v50), (int32_t)v58, v54, v55);
        }
        saveWaitEnemy = this->fields.saveWaitEnemy;
        ++v49;
        v50 += 8;
        if ( !saveWaitEnemy )
          goto LABEL_106;
      }
    }
    if ( !*p_performance )
      goto LABEL_106;
    v59 = (*p_performance)->fields.e_actorlist;
    if ( !v59 )
      goto LABEL_106;
    v60 = v59->max_length;
    if ( (int)v60 >= 1 )
    {
      v61 = 0;
      v62 = v44;
      while ( v61 < (unsigned int)v60 )
      {
        v63 = (UnityEngine_Object_o *)v59->m_Items[v61];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v63, 0, 0);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_106;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v62 + v61,
                                                   (const MethodInfo_37520DC *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v63 )
            goto LABEL_106;
          v64 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v63, (unsigned __int8)transform & 1, 0);
          v65 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v63,
                                          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v65, 0, 0);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v65 )
              goto LABEL_106;
            transform = (UnityEngine_Component_o *)v65[2].klass;
            if ( !transform )
              goto LABEL_106;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v64 & 1, 0);
          }
        }
        LODWORD(v60) = v59->max_length;
        if ( (__int64)++v61 >= (int)v60 )
          goto LABEL_124;
      }
      goto LABEL_192;
    }
LABEL_124:
    v28 = *p_performance;
    p_seqObject = &this->fields.seqObject;
    if ( !*p_performance )
      goto LABEL_106;
  }
  data = (UnityEngine_Object_o *)v28->fields.data;
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
  v67 = (*p_performance)->fields.p_actorlist;
  if ( !v67 )
    goto LABEL_106;
  v68 = v67->max_length;
  if ( (int)v68 >= 1 )
  {
    v69 = 0;
    while ( v69 < (unsigned int)v68 )
    {
      v70 = (UnityEngine_Object_o *)v67->m_Items[v69];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v70, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v70 )
          goto LABEL_106;
        v71 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v70,
                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v71, v72);
      }
      LODWORD(v68) = v67->max_length;
      if ( (__int64)++v69 >= (int)v68 )
        goto LABEL_144;
    }
    goto LABEL_192;
  }
LABEL_144:
  if ( !*p_performance )
    goto LABEL_106;
  v73 = (*p_performance)->fields.e_actorlist;
  if ( !v73 )
    goto LABEL_106;
  v74 = v73->max_length;
  if ( (int)v74 >= 1 )
  {
    v75 = 0;
    while ( v75 < (unsigned int)v74 )
    {
      v76 = (UnityEngine_Object_o *)v73->m_Items[v75];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v76, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v76 )
          goto LABEL_106;
        v77 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v76,
                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v77, v78);
      }
      LODWORD(v74) = v73->max_length;
      if ( (__int64)++v75 >= (int)v74 )
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.standFigure, 0, v82, v83);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v81) )
    BattleSequenceManager__ReleaseCpk(this, v84);
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
    v94 = 0;
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      transform = (UnityEngine_Component_o *)*p_seqObject;
      if ( !*p_seqObject )
        goto LABEL_106;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)transform,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
      v94 = transform;
    }
    if ( *p_OnCompleteActorCallback )
    {
      ((void (__fastcall *)(intptr_t, UnityEngine_Component_o *, intptr_t))(*p_OnCompleteActorCallback)->fields.invoke_impl)(
        (*p_OnCompleteActorCallback)->fields.method_code,
        v94,
        (*p_OnCompleteActorCallback)->fields.method);
      *p_OnCompleteActorCallback = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)p_OnCompleteActorCallback, 0, v95, v96);
      goto LABEL_176;
    }
LABEL_106:
    sub_1C32E7C(transform);
  }
LABEL_176:
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_106;
  v97 = transform;
  v98 = (CGThumbnailListItem_o *)&transform[3];
  klass = (UnityEngine_Object_o *)transform[3].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
  {
    v100 = (UnityEngine_Object_o *)v98->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v100, 0);
    v98->klass = 0;
    sub_1C32BC4(v98, 0, v101, v102);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9515/*"NoblePhantasm/CutIns"*/, 0);
  BYTE1(v97[5].fields.m_CachedPtr) = 0;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)(*p_performance)->fields.actioncamera;
  if ( !transform )
    goto LABEL_106;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0);
  v103 = *p_performance;
  if ( !*p_performance )
    goto LABEL_106;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(*p_performance, 0);
  if ( !*p_performance )
    goto LABEL_106;
  v104 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(*p_performance, 0);
  BattlePerformance__UpdateCameraClippingRange(v103, v104, CurrentGroundType, 0, 0);
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
  System_Object_array *v6; // x20
  Il2CppClass *klass; // x8
  System_Object_array *v8; // x19
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x19
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x21
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Func_object__bool__o *v25; // x23
  Il2CppObject *object; // x0
  const MethodInfo_38BE6C8 *v27; // x3
  System_Nullable_long__o v28; // x0
  BgmPlayArgs_o *v29; // x21
  __int64 v30; // x0
  System_Nullable_float__o v31; // x1
  System_Nullable_float__o v32; // x2
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Nullable_long__o v37; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_4C3A55E & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_BgmPlayArgs___);
    sub_1C32C20(&BgmManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C32C20(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_long___ctor__);
    sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__);
    sub_1C32C20(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
    byte_4C3A55E = 1;
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
             (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v6 = v5,
            (v5 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                           this->fields.backupBgmPlayArgsGroup,
                                           0)) == 0) )
      {
        sub_1C32E7C(v5);
      }
      klass = v5->obj.klass;
      v8 = v5;
      v9 = *(unsigned __int16 *)&v5->obj.klass->_2.rank;
      if ( *(_WORD *)&v5->obj.klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v9;
          p_offset += 4;
          if ( !v9 )
            goto LABEL_13;
        }
        v11 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_13:
        v11 = sub_1C83438(v5, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0);
      }
      v12 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8));
      if ( !v12 )
        sub_1C32E7C(0);
      while ( 1 )
      {
        v13 = *(_QWORD *)v12;
        v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
        {
          v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v14;
            v15 += 4;
            if ( !v14 )
              goto LABEL_20;
          }
          v16 = v13 + 16LL * *v15 + 312;
        }
        else
        {
LABEL_20:
          v16 = sub_1C83438(v12, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
          break;
        v17 = sub_1C32E6C(BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass114_0___ctor((BattleSequenceManager___c__DisplayClass114_0_o *)v17, 0);
        v18 = *(_QWORD *)v12;
        v19 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
        {
          v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v20 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v19;
            v20 += 4;
            if ( !v19 )
              goto LABEL_27;
          }
          v21 = v18 + 16LL * *v20 + 312;
        }
        else
        {
LABEL_27:
          v21 = sub_1C83438(v12, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0);
        }
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v12, *(_QWORD *)(v21 + 8));
        if ( !v17 )
          sub_1C32E7C(v22);
        *(_QWORD *)(v17 + 16) = v22;
        sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 16), v22, v23, v24);
        v25 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v25,
          (Il2CppObject *)v17,
          Method_BattleSequenceManager___c__DisplayClass114_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0);
        object = BasicHelper__Find_object_(
                   v6,
                   (System_Func_T__bool__o *)v25,
                   (const MethodInfo_30C735C *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v28.fields.value = (int64_t)object[2].klass;
        else
          v28.fields.value = 0;
        v29 = *(BgmPlayArgs_o **)(v17 + 16);
        *(_QWORD *)&v37.fields.hasValue = 0;
        v37.fields.value = 0;
        *(_QWORD *)&v28.fields.hasValue = &v37;
        System_Nullable_long____ctor(v28, Method_System_Nullable_long___ctor__, v27);
        if ( !v29 )
          sub_1C32E7C(v30);
        v31 = 0;
        v32 = 0;
        BgmPlayArgs__Update(v29, v31, v32, v37, 0);
      }
      v33 = *(_QWORD *)v12;
      v34 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
      {
        v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_39;
        }
        v36 = v33 + 16LL * *v35 + 312;
      }
      else
      {
LABEL_39:
        v36 = sub_1C83438(v12, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v36)(v12, *(_QWORD *)(v36 + 8));
    }
  }
}


void BattleSequenceManager__PrevPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0

  if ( (byte_4C3A55A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A55A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v4 )
  {
    if ( !actor )
      sub_1C32E7C(v4);
    BattleActorControl__SetTempDefaultAnimation(actor, 0);
  }
}


void BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  System_Collections_Generic_List_object__o *ReleaseSoundNames; // x20
  System_String_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v13; // x1
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3A55F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleSequenceManager__ReleaseCpk_b__115_0__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Action__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C32C20(&StringLiteral_9518/*"NoblePhantasm_"*/);
    byte_4C3A55F = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v23 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v7 = System_Int32__ToString((int32_t)&v23, 0);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_63518544((System_String_o *)StringLiteral_9518/*"NoblePhantasm_"*/, v7, 0);
  if ( !ReleaseSoundNames )
    goto LABEL_17;
  items = ReleaseSoundNames->fields._items;
  v11 = Method_System_Collections_Generic_List_string__Add__;
  ++ReleaseSoundNames->fields._version;
  if ( !items )
    goto LABEL_17;
  size = ReleaseSoundNames->fields._size;
  v13 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ReleaseSoundNames,
      (Il2CppObject *)Instance,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v13;
    sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__115_0__, 0);
  if ( !DelayInvokeMethodList
    || (v19 = DelayInvokeMethodList->fields._items,
        v20 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v19) )
  {
LABEL_17:
    sub_1C32E7C(Instance);
  }
  v21 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v16,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->obj.klass + v21;
    DelayInvokeMethodList->fields._size = v21 + 1;
    v22[4] = (Il2CppClass *)v16;
    sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v16, v17, v18);
  }
  this->fields.delayInvokeTimer = 1.0;
}


void BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.fixedVoice = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fixedVoice, 0, v2, v3);
}


void BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.intactBgmList = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.intactBgmList, 0, v2, v3);
}


ExecutingTdInfo_o *BattleSequenceManager__SafeGetExecutingTdInfo(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  Il2CppObject *v2; // x0

  if ( (byte_4C3A57A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C3A57A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !v2 )
      goto LABEL_11;
    if ( v2[23].monitor )
    {
      v2 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( v2 )
        return (ExecutingTdInfo_o *)v2[23].monitor;
LABEL_11:
      sub_1C32E7C(v2);
    }
  }
  return ExecutingTdInfo__GetDefault(0);
}


void BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3A55D & 1) == 0 )
  {
    sub_1C32C20(&BgmManager_TypeInfo);
    byte_4C3A55D = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.backupBgmPlayArgsGroup, (int32_t)v3, v4, v5);
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

  if ( (byte_4C3A551 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3097/*"Battle/Prefab/"*/);
    byte_4C3A551 = 1;
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
                                         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v10 = System_String__Concat_63518544((System_String_o *)StringLiteral_3097/*"Battle/Prefab/"*/, name, 0);
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
                                         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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

  if ( (byte_4C3A563 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1C32C20(&StringLiteral_9370/*"N_Enemy2"*/);
    sub_1C32C20(&StringLiteral_9371/*"N_Player2"*/);
    byte_4C3A563 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                                        (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v9 = actor;
  v10 = (System_String_o **)((LOBYTE(actor[23].klass) != 0) != (LOBYTE(Component_object[34].monitor) != 0)
                           ? &StringLiteral_9370/*"N_Enemy2"*/
                           : &StringLiteral_9371/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v11 = 360;
  if ( LOBYTE(actor[23].klass) )
    v11 = 368;
  v12 = *(__int64 *)((char *)&performance->klass + v11);
  if ( !v12 )
LABEL_55:
    sub_1C32E7C(actor);
  if ( (int)*(_QWORD *)(v12 + 24) >= 1 )
  {
    v13 = *v10;
    v14 = 0;
    v15 = *(_QWORD *)(v12 + 24);
    do
    {
      if ( v14 >= v15 )
        sub_1C32E84(actor);
      v16 = *(UnityEngine_GameObject_o **)(v12 + 32 + 8 * v14);
      v17 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, v17, 0) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
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
    sub_1C32E7C(0);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.changeFieldAfter, (int32_t)actionData, (int32_t)method, v3);
}


void BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  void *battleTargetList; // x0
  int32_t v6; // w21

  if ( (byte_4C3A56F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4C3A56F = 1;
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
                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0);
        return;
      }
    }
LABEL_18:
    sub_1C32E7C(battleTargetList);
  }
}


void BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.fixedVoice = voiceId;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fixedVoice, (int32_t)voiceId, (int32_t)method, v3);
}


void BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct System_String_array *BgmNameListWithIds; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3A570 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3A570 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.intactBgmList, (int32_t)BgmNameListWithIds, v7, v8);
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
  if ( (byte_4C3A561 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A561 = 1;
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
    sub_1C32E7C(this);
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
            if ( !byte_4C313D1 )
            {
              this = (BattleSequenceManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
              byte_4C313D1 = 1;
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

  if ( (byte_4C3A549 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4C3A549 = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v7),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0) )
  {
LABEL_10:
    sub_1C32E7C(actor);
  }
  v8 = 0;
  while ( v8 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v8,
                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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

  if ( (byte_4C3A54A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_16617/*"_y0"*/);
    byte_4C3A54A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0, 0);
  if ( v6 )
  {
    if ( !fbx )
      sub_1C32E7C(v6);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16617/*"_y0"*/, 0);
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

  if ( (byte_4C3A548 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_2137/*"Actors/Actor"*/);
    byte_4C3A548 = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1C32E7C(seqObject);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v9 = 0;
  do
  {
    v10 = v9 + 1;
    v22 = v9 + 1;
    v11 = System_Int32__ToString((int32_t)&v22, 0);
    v12 = (BattleSequenceManager_o *)System_String__Concat_63518544((System_String_o *)StringLiteral_2137/*"Actors/Actor"*/, v11, 0);
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
          sub_1C32E84(seqObject);
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
    v18 = (BattleSequenceManager_o *)System_String__Concat_63518544((System_String_o *)StringLiteral_2137/*"Actors/Actor"*/, v17, 0);
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
  void *actor; // x0
  Il2CppObject *Component_object; // x23
  BattleActionData_o *klass; // x24
  System_Collections_Generic_HashSet_int__o *v9; // x25
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CGThumbnailListItem_o *v12; // x21
  int v13; // w8
  void *v14; // x25
  unsigned int v15; // w20
  __int64 v16; // x8
  int32_t v17; // w1
  int v18; // w8
  void *v19; // x25
  unsigned int v20; // w20
  __int64 v21; // x8
  int32_t v22; // w1
  int v23; // w8
  void *v24; // x25
  unsigned int v25; // w20
  __int64 v26; // x8
  int32_t v27; // w1
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x24
  System_Action_object__o *v29; // x25
  int monitor_low; // w28
  System_Collections_Generic_HashSet_int__o *v31; // x22
  int v32; // w29
  int i; // w24
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w21
  struct UnityEngine_GameObject_o *v41; // x21
  Il2CppObject *v42; // x23
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x2
  BattlePerformance_o *v46; // x0
  int32_t v47; // w20
  UnityEngine_Object_o *v48; // x21
  _BOOL8 v49; // x0
  Il2CppObject *v50; // x22
  BattleSequenceManager_BattleTarget_o *v51; // x21
  BattlePerformance_o *v52; // x0
  __int64 ServantPosIndex; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x8
  int v61; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v62; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C3A560 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    sub_1C32C20(&BattleSequenceManager_BattleTarget_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__0__);
    sub_1C32C20(&BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
    byte_4C3A560 = 1;
  }
  memset(&j, 0, sizeof(j));
  v3 = sub_1C32E6C(BattleSequenceManager___c__DisplayClass117_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass117_0___ctor((BattleSequenceManager___c__DisplayClass117_0_o *)v3, 0);
  this->fields.SingleTarget = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.SingleTarget, 0, v4, v5);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      klass = (BattleActionData_o *)Component_object[31].klass;
      v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v9,
        (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v3 )
      {
        *(_QWORD *)(v3 + 16) = v9;
        v12 = (CGThumbnailListItem_o *)(v3 + 16);
        sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v9, v10, v11);
        if ( klass )
        {
          actor = BattleActionData__getDamageList(klass, -1, 0);
          if ( actor )
          {
            v13 = *((_DWORD *)actor + 6);
            v14 = actor;
            if ( v13 >= 1 )
            {
              v15 = 0;
              while ( v15 < v13 )
              {
                v16 = *((_QWORD *)v14 + (int)v15 + 4);
                if ( !v16 )
                  goto LABEL_78;
                v17 = *(_DWORD *)(v16 + 28);
                if ( v17 )
                {
                  actor = v12->klass;
                  if ( !v12->klass )
                    goto LABEL_78;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v17,
                                    (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v13 = *((_DWORD *)v14 + 6);
                if ( (int)++v15 >= v13 )
                  goto LABEL_19;
              }
LABEL_79:
              sub_1C32E84(actor);
            }
LABEL_19:
            actor = BattleActionData__getBuffList(klass, -1, 0);
            if ( actor )
            {
              v18 = *((_DWORD *)actor + 6);
              v19 = actor;
              if ( v18 >= 1 )
              {
                v20 = 0;
                while ( v20 < v18 )
                {
                  v21 = *((_QWORD *)v19 + (int)v20 + 4);
                  if ( !v21 )
                    goto LABEL_78;
                  v22 = *(_DWORD *)(v21 + 40);
                  if ( v22 )
                  {
                    actor = v12->klass;
                    if ( !v12->klass )
                      goto LABEL_78;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v22,
                                      (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v18 = *((_DWORD *)v19 + 6);
                  if ( (int)++v20 >= v18 )
                    goto LABEL_28;
                }
                goto LABEL_79;
              }
LABEL_28:
              actor = BattleActionData__getHealList(klass, -1, 0);
              if ( actor )
              {
                v23 = *((_DWORD *)actor + 6);
                v24 = actor;
                if ( v23 >= 1 )
                {
                  v25 = 0;
                  while ( v25 < v23 )
                  {
                    v26 = *((_QWORD *)v24 + (int)v25 + 4);
                    if ( !v26 )
                      goto LABEL_78;
                    v27 = *(_DWORD *)(v26 + 28);
                    if ( v27 )
                    {
                      actor = v12->klass;
                      if ( !v12->klass )
                        goto LABEL_78;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v27,
                                        (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v23 = *((_DWORD *)v24 + 6);
                    if ( (int)++v25 >= v23 )
                      goto LABEL_37;
                  }
                  goto LABEL_79;
                }
LABEL_37:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)klass->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v29 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v29,
                    (Il2CppObject *)v3,
                    Method_BattleSequenceManager___c__DisplayClass117_0__SetupTargetInfo_b__0__,
                    0);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v29,
                    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                monitor_low = LOBYTE(Component_object[34].monitor);
                v31 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v31,
                  (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v12->klass;
                if ( v12->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v62,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_3649DA8 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v61 = 0;
                  j = v62;
                  v32 = 0;
LABEL_41:
                  for ( i = v32; ; ++i )
                  {
                    v32 = i;
                    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &j,
                            (const MethodInfo_351EF28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      break;
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1C32E7C(0);
                    current = (int32_t)j.fields._current;
                    ServantGameObject = BattlePerformance__getServantGameObject(
                                          performance,
                                          (int32_t)j.fields._current,
                                          0);
                    if ( !ServantGameObject )
                      sub_1C32E7C(0);
                    v37 = UnityEngine_GameObject__GetComponent_object_(
                            ServantGameObject,
                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                    if ( !v37 )
                      sub_1C32E7C(0);
                    if ( (monitor_low != 0) == (LOBYTE(v37[34].monitor) != 0) )
                    {
                      ++v61;
                      goto LABEL_41;
                    }
                    if ( !v31 )
                      sub_1C32E7C(v37);
                    System_Collections_Generic_HashSet_int___Add(
                      v31,
                      current,
                      (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &j,
                    (const MethodInfo_351EF24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v61 && i == 1 )
                  {
                    v12->klass = (CGThumbnailListItem_c *)v31;
                    sub_1C32BC4(v12, (int32_t)v31, v38, v39);
                  }
                  actor = v12->klass;
                  if ( v12->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v62,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_3649DA8 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v40 = -1;
                      for ( j = v62;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &j,
                              (const MethodInfo_351EF28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v40 = (int32_t)j.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_351EF24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_78;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v40, 0);
                      if ( !actor )
                        goto LABEL_78;
                      v41 = (struct UnityEngine_GameObject_o *)actor;
                      v42 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v41;
                      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.SingleTarget, (int32_t)v41, v43, v44);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v42, v45);
                    }
                    if ( v31 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v62,
                        v31,
                        (const MethodInfo_3649DA8 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      j = v62;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &j,
                                (const MethodInfo_351EF28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v46 = this->fields.performance;
                        if ( !v46 )
                          sub_1C32E7C(0);
                        v47 = (int32_t)j.fields._current;
                        v48 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                        v46,
                                                        (int32_t)j.fields._current,
                                                        0);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v49 = UnityEngine_Object__op_Equality(v48, 0, 0);
                        if ( !v49 )
                        {
                          if ( !v48 )
                            sub_1C32E7C(v49);
                          v50 = UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v48,
                                  (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v51 = (BattleSequenceManager_BattleTarget_o *)sub_1C32E6C(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor(v51, 0);
                          v52 = this->fields.performance;
                          if ( !v52 )
                            sub_1C32E7C(0);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v52, v47, 0);
                          if ( !v51 )
                            sub_1C32E7C(ServantPosIndex);
                          BattleSequenceManager_BattleTarget__setup(
                            v51,
                            (BattleActorControl_o *)v50,
                            ServantPosIndex,
                            0);
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1C32E7C(0);
                          items = battleTargetList->fields._items;
                          v58 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1C32E7C(battleTargetList);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= LODWORD(items->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v51,
                              *(const MethodInfo_37987BC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v60 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v60[4] = (Il2CppClass *)v51;
                            sub_1C32BC4((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v51, v54, v55);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_351EF24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
    sub_1C32E7C(actor);
  }
}


void BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1C32E7C(0);
  BattlePerformance__showNobleInfo(performance, -1, 1, 100, 0, 0);
}


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
  if ( (byte_4C3A556 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A556 = 1;
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
    sub_1C32E7C(this);
  }
}


void BattleSequenceManager__SyncAttachedTargetPair(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetPosIndex,
        const MethodInfo *method)
{
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
  Il2CppObject *v31; // x1
  intptr_t v32; // x8
  _QWORD *v33; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v35; // x8

  v6 = this;
  if ( (byte_4C3A565 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Object__Add__);
    this = (BattleSequenceManager_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A565 = 1;
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
    if ( !tlcont )
      goto LABEL_43;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)tlcont,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
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
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0);
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
        WellFired_USTimelineContainer__set_AffectedObject(tlcont, transform, 0);
        npEndDeleteObjects = (System_Collections_Generic_List_object__o *)v6->fields.npEndDeleteObjects;
        this = (BattleSequenceManager_o *)WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0);
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
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
        }
        v26 = 0;
      }
      else
      {
        v26 = 1;
      }
      v27 = (UnityEngine_Component_o *)WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0);
      this = (BattleSequenceManager_o *)BasicHelper__GetOrAddComponent_object_(
                                          v27,
                                          (const MethodInfo_30CAAF4 *)Method_BasicHelper_GetOrAddComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_43;
      v28 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0);
      if ( v26 )
      {
        v31 = (Il2CppObject *)v28;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_43;
        v32 = this->fields.m_CachedPtr;
        v33 = Method_System_Collections_Generic_List_Object__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v32 )
          goto LABEL_43;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v32 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v31,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = v32 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v35 + 32) = v31;
          sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 32), (int32_t)v31, v29, v30);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tlcont, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        return;
      }
LABEL_43:
      sub_1C32E7C(this);
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
  struct BattlePerformance_o *performance; // x8
  BattleActorControl_o *v7; // x20
  BattleActionData_o *nowAction; // x21
  _BOOL8 v9; // x0
  void *monitor; // x22
  _BOOL8 v11; // x0
  UnityEngine_Object_o *v12; // x23
  UnityEngine_GameObject_o *v13; // x0
  System_Collections_ICollection_o *Components_object; // x23
  _BOOL8 IsNullOrEmpty; // x0
  void *v16; // x8
  unsigned __int64 v17; // x29
  NoblePhantasmTargetOverwriteTransform_o *v18; // x24
  __int64 v19; // x25
  __int64 v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x0
  __int64 TargetOfTreasureDevice; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3A575 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
    byte_4C3A575 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  if ( this->fields.battleTargetList )
  {
    BattleActor = (System_Collections_Generic_List_object__o *)BattleSequenceManager__get_BattleActor(
                                                                 this,
                                                                 (const MethodInfo *)isOverwrite);
    performance = this->fields.performance;
    if ( !performance
      || (v7 = (BattleActorControl_o *)BattleActor,
          (BattleActor = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList) == 0) )
    {
      sub_1C32E7C(BattleActor);
    }
    nowAction = performance->fields.nowAction;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      BattleActor,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v26,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v9 )
        break;
      if ( !v26.fields._current )
        sub_1C32E7C(v9);
      monitor = v26.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0, 0);
      if ( !v11 )
      {
        if ( !monitor )
          sub_1C32E7C(v11);
        v12 = (UnityEngine_Object_o *)*((_QWORD *)monitor + 5);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
        {
          v13 = (UnityEngine_GameObject_o *)*((_QWORD *)monitor + 5);
          if ( !v13 )
            sub_1C32E7C(0);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v13,
                                                                    (const MethodInfo_31352CC *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1C32E7C(IsNullOrEmpty);
            v16 = Components_object[1].monitor;
            if ( (int)v16 >= 1 )
            {
              v17 = 0;
              do
              {
                if ( v17 >= (unsigned int)v16 )
                  sub_1C32E84(IsNullOrEmpty);
                v18 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v17);
                v19 = sub_1C32E6C(NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_TypeInfo);
                NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo___ctor(
                  (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v19,
                  0);
                if ( !v19 )
                  sub_1C32E7C(v20);
                *(_QWORD *)(v19 + 16) = monitor;
                sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 16), (int32_t)monitor, v21, v22);
                if ( !nowAction )
                  sub_1C32E7C(v23);
                *(_DWORD *)(v19 + 24) = BattleActionData__GetTargetSideFunctionRange(
                                          nowAction,
                                          *((_BYTE *)monitor + 552),
                                          0);
                TargetOfTreasureDevice = BattleActionData__GetTargetOfTreasureDevice(
                                           nowAction,
                                           (BattleActorControl_o *)monitor,
                                           v7,
                                           0);
                *(_DWORD *)(v19 + 28) = TargetOfTreasureDevice;
                if ( isOverwrite )
                {
                  if ( !v18 )
                    sub_1C32E7C(TargetOfTreasureDevice);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(
                    v18,
                    (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v19,
                    0);
                }
                else
                {
                  if ( !v18 )
                    sub_1C32E7C(TargetOfTreasureDevice);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(
                    v18,
                    (NoblePhantasmTargetOverwriteTransform_OverwriteTransformInfo_o *)v19,
                    0);
                }
                LODWORD(v16) = Components_object[1].monitor;
                ++v17;
              }
              while ( (__int64)v17 < (int)v16 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
    sub_1C32E7C(this);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)changeBgm, (int32_t)TdAfterChangeBgm_k__BackingField, (int32_t)method, v3);
  return TdAfterChangeBgm_k__BackingField != 0;
}


void BattleSequenceManager__Update(BattleSequenceManager_o *this, const MethodInfo *method)
{
  float delayInvokeTimer; // s8
  float v4; // s0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x0
  struct System_Collections_Generic_List_Action__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3A541 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    byte_4C3A541 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v4 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0);
    this->fields.delayInvokeTimer = v4;
    if ( v4 <= 0.0 )
    {
      DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_14;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v9,
        DelayInvokeMethodList,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v9,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v9.fields._current )
          (*(void (__fastcall **)(_QWORD, _QWORD))((char *)&v9.fields._current->klass + (unsigned __int64)&off_18))(
            *(Il2CppClass **)((char *)&v9.fields._current->klass + (unsigned __int64)&dword_40),
            *(Il2CppClass **)((char *)&v9.fields._current->klass + (unsigned __int64)&qword_28));
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v9,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v6 = this->fields.DelayInvokeMethodList;
      if ( !v6 )
LABEL_14:
        sub_1C32E7C(DelayInvokeMethodList);
      size = v6->fields._size;
      v8 = v6->fields._version + 1;
      v6->fields._size = 0;
      v6->fields._version = v8;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3A558 & 1) == 0 )
  {
    sub_1C32C20(&BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
    byte_4C3A558 = 1;
  }
  v3 = sub_1C32E6C(BattleSequenceManager__WaitEndSequence_d__108_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__108___ctor((BattleSequenceManager__WaitEndSequence_d__108_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleSequenceManager___ReleaseCpk_b__115_0(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  struct System_Collections_Generic_List_string__o *v6; // x8
  int32_t size; // w2
  int v8; // w9
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3A57D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C3A57D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v10 = v9;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v10.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v10.fields._current, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1C32E7C(0);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v6 = this->fields.ReleaseSoundNames;
  if ( !v6 )
LABEL_14:
    sub_1C32E7C(ReleaseSoundNames);
  size = v6->fields._size;
  v8 = v6->fields._version + 1;
  v6->fields._size = 0;
  v6->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
}


void BattleSequenceManager___setup_b__88_1(
        BattleSequenceManager_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance || !comp )
    sub_1C32E7C(this);
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
  struct BattlePerformance_o *performance; // x8
  int32_t v11; // w2

  if ( (byte_4C3A54C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C3A54C = 1;
  }
  FlagRequestNumber = System_String__Concat_63518544((System_String_o *)StringLiteral_16107/*"_"*/, labelName, 0);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(voiceMaster, chrId, FlagRequestNumber, 0, 0);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v11 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__AddServantVoicePlayed_45559396((BattleData_o *)FlagRequestNumber, chrId, v11, 0, 0);
        return;
      }
    }
LABEL_9:
    sub_1C32E7C(FlagRequestNumber);
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
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_4C3A554 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleSequenceManager_OnBgChanged__);
    byte_4C3A554 = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.BgChangedCallback,
    (int32_t)callback,
    tp,
    (const MethodInfo *)parentCamera);
  performance = this->fields.performance;
  v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0);
  if ( !performance )
    sub_1C32E7C(v21);
  v22.fields.z = v13;
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  v22.fields.x = v15;
  v22.fields.y = v14;
  BattlePerformance__ForceChangeBg(performance, id, tp, v22, v23, 1, parentCamera, v20, 0);
}


bool BattleSequenceManager__checkServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  struct BattlePerformance_o *performance; // x8
  int32_t v11; // w2

  if ( (byte_4C3A54E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C3A54E = 1;
  }
  FlagRequestNumber = System_String__Concat_63518544((System_String_o *)StringLiteral_16107/*"_"*/, labelName, 0);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(voiceMaster, chrId, FlagRequestNumber, 0, 0);
  if ( !(_DWORD)FlagRequestNumber )
    return (char)FlagRequestNumber;
  performance = this->fields.performance;
  if ( !performance
    || (v11 = (int)FlagRequestNumber, (FlagRequestNumber = (System_String_o *)performance->fields.data) == 0) )
  {
LABEL_9:
    sub_1C32E7C(FlagRequestNumber);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v11, 0);
  return (char)FlagRequestNumber;
}


int32_t BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4C3A56A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4C3A56A = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_345028C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_3450018 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1C32E7C(playAudioSyncGroupIndexDict);
  }
  return -1;
}


System_String_array *BattleSequenceManager__getPlayedSoundList(BattleSequenceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C3A56C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_string___);
    byte_4C3A56C = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *BattleSequenceManager__get_BattleActor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C3A53D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A53D = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0, 0) )
    return 0;
  v4 = this->fields.actor;
  if ( !v4 )
    sub_1C32E7C(0);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v4,
                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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

  if ( (byte_4C3A540 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    byte_4C3A540 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C83334(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C83334(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v6, 0, 0) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return BYTE1(Instance[8].monitor) != 0;
}


bool BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  struct BattlePerformance_o *v5; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v8; // x8
  struct BattleData_o *v9; // x8

  if ( (byte_4C3A53E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A53E = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(performance, 0, 0);
  if ( v4 )
    return 0;
  v5 = this->fields.performance;
  if ( !v5 )
    goto LABEL_14;
  data = (UnityEngine_Object_o *)v5->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(data, 0, 0);
  if ( v4 )
    return 0;
  v8 = this->fields.performance;
  if ( !v8 || (v9 = v8->fields.data) == 0 )
LABEL_14:
    sub_1C32E7C(v4);
  return v9->fields.systemflg_acceleration > 1;
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
  struct BattlePerformance_o *v5; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v8; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v10; // x20
  struct BattlePerformance_o *v12; // x8

  if ( (byte_4C3A53F & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A53F = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Equality(performance, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 0;
  v5 = this->fields.performance;
  if ( !v5 )
    goto LABEL_27;
  data = (UnityEngine_Object_o *)v5->fields.data;
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
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_object )
    goto LABEL_27;
  v8 = this->fields.performance;
  if ( !v8 )
    goto LABEL_27;
  nowAction = v8->fields.nowAction;
  v10 = (BattleServantData_o *)*((_QWORD *)Component_object + 66);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v10 )
LABEL_27:
    sub_1C32E7C(Component_object);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_object + 66), 0) )
    return 0;
  Component_object = (void *)BattleServantData__IsFixNpFastSpeed(v10, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 1;
LABEL_22:
  v12 = this->fields.performance;
  if ( !v12 )
    goto LABEL_27;
  Component_object = v12->fields.data;
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1
  System_Collections_Generic_Dictionary_object__int__o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_HashSet_T__o *v39; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3

  if ( (byte_4C3A553 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4C3A553 = 1;
  }
  this->fields.performance = performance;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.performance,
    (int32_t)performance,
    (int32_t)actor,
    (const MethodInfo *)players);
  this->fields.actor = actor;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.actor, (int32_t)actor, v15, v16);
  this->fields.playerActors = players;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playerActors, (int32_t)players, v17, v18);
  this->fields.enemyActors = enemies;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.enemyActors, (int32_t)enemies, v19, v20);
  this->fields.actorCamera = camera;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.actorCamera, (int32_t)camera, v21, v22);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.effectCamera, (int32_t)middleCamera, v24, v25);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cutInCamera, (int32_t)cutIncamera, v28, v29);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0)) == 0 )
  {
LABEL_7:
    sub_1C32E7C(actorCamera);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0);
  this->fields.originalCameraRoot = parent;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.originalCameraRoot, (int32_t)parent, v31, v32);
  this->fields.bgObject = bg;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bgObject, (int32_t)bg, v33, v34);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v35);
  v36 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v36,
    (const MethodInfo_344F6E4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v36;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v36, v37, v38);
  v39 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v39,
    (const MethodInfo_364F828 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v39;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v39, v40, v41);
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
  if ( (byte_4C3A56D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C3A56D = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_4C3A550 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_2133/*"Actor"*/);
    sub_1C32C20(&StringLiteral_16774/*"animCamLoc"*/);
    byte_4C3A550 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2133/*"Actor"*/, 0)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16774/*"animCamLoc"*/, 0);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  AssetLoader_LoadEndDataHandler_o *v26; // x19

  if ( (byte_4C3A542 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__);
    sub_1C32C20(&BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
    sub_1C32C20(&StringLiteral_9515/*"NoblePhantasm/CutIns"*/);
    byte_4C3A542 = 1;
  }
  v17 = sub_1C32E6C(BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass75_0___ctor((BattleSequenceManager___c__DisplayClass75_0_o *)v17, 0);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v19, v20);
  *(_QWORD *)(v17 + 56) = onComplete;
  *(_DWORD *)(v17 + 24) = chrId;
  *(_DWORD *)(v17 + 28) = limitCount;
  *(_DWORD *)(v17 + 32) = treasureDeviceId;
  *(_DWORD *)(v17 + 36) = treasureDeviceLv;
  *(_DWORD *)(v17 + 40) = npChargeStage;
  *(_DWORD *)(v17 + 44) = overwriteSvtVoiceId;
  sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 56), (int32_t)onComplete, v21, v22);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v17 + 24);
  this->fields.limitCount = *(_DWORD *)(v17 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v17 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v17 + 44);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v17 + 48) = Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 48), (int32_t)Component_object, v24, v25);
  actor = *(UnityEngine_GameObject_o **)(v17 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v17 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v17 + 48)) == 0) )
  {
LABEL_10:
    sub_1C32E7C(actor);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v17,
    Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9515/*"NoblePhantasm/CutIns"*/, v26, 1, 0);
}


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
  const MethodInfo *v33; // x1
  struct BattlePerformance_o *v34; // x8
  struct UnityEngine_GameObject_array *v35; // x29
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v37; // x20
  UnityEngine_Object_o *v38; // x25
  const MethodInfo *v39; // x2
  BattleServantData_o *v40; // x26
  System_Collections_Generic_List_bool__o *v41; // x27
  struct System_Boolean_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  intptr_t m_CachedPtr; // x8
  _QWORD *v46; // x9
  __int64 m_CancellationTokenSource_low; // x10
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct UnityEngine_GameObject_array *v50; // x8
  __int64 v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct BattlePerformance_o *v54; // x8
  struct UnityEngine_GameObject_array *v55; // x8
  __int64 v56; // x0
  struct BattlePerformance_o *v57; // x8
  struct UnityEngine_GameObject_array *v58; // x27
  il2cpp_array_size_t v59; // x8
  unsigned __int64 v60; // x20
  UnityEngine_Object_o *v61; // x24
  const MethodInfo *v62; // x2
  BattleServantData_o *v63; // x25
  System_Collections_Generic_List_bool__o *v64; // x26
  struct System_Boolean_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  intptr_t v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct UnityEngine_GameObject_array *v73; // x8
  __int64 v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct BattlePerformance_o *v77; // x8
  struct UnityEngine_GameObject_array *v78; // x8
  __int64 v79; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  BattleSequenceManager_o *v83; // x22
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  __int64 v88; // x5
  __int64 v89; // x6
  __int64 v90; // x7
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  BattleSequenceManager_o *v93; // x23
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  __int64 v100; // x5
  __int64 v101; // x6
  __int64 v102; // x7
  BattleSequenceManager_c *v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  BattleSequenceManager_o *v106; // x23
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  __int64 v113; // x5
  __int64 v114; // x6
  __int64 v115; // x7
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  BattleSequenceManager_o *v118; // x23
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  __int64 v121; // x1
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  __int64 v124; // x1
  System_Collections_Hashtable_o *v125; // x0
  System_String_o *BgmName; // x0
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  const MethodInfo *v129; // x2
  BattleSequenceManager_o *v130; // x21
  CGThumbnailListItem_o *p_actorCamera; // x22
  System_Delegate_o *v132; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v133; // x24
  System_Delegate_o *v134; // x0
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  System_Delegate_o *v137; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v138; // x1
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  const MethodInfo *v141; // x2
  __int64 v142; // x0
  System_Action_USSequencer__o *v143; // [xsp+8h] [xbp-88h]
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // [xsp+18h] [xbp-78h]
  int v145; // [xsp+24h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-68h] BYREF
  int v147; // [xsp+2Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4C3A555 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__);
    sub_1C32C20(&BattleSequenceManager_TypeInfo);
    sub_1C32C20(&CommonUI_TypeInfo);
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&UnityEngine_GameObject___TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&WellFired_USSequencer_PlaybackDelegate_TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C32C20(&StringLiteral_12865/*"ShowNobleInfo"*/);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_9835/*"OnChangeBgmVolume"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_3106/*"Battle2D"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    this = (BattleSequenceManager_o *)sub_1C32C20(&iTween_TypeInfo);
    byte_4C3A555 = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_142;
  p_actorlist = performance->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_142;
  v10 = sub_1C32CC8(UnityEngine_GameObject___TypeInfo, LODWORD(p_actorlist->max_length));
  p_saveWaitPlayer = &v7->fields.saveWaitPlayer;
  v7->fields.saveWaitPlayer = (struct UnityEngine_GameObject_array *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->fields.saveWaitPlayer, v10, v12, v13);
  v14 = v7->fields.performance;
  if ( !v14 )
    goto LABEL_142;
  e_actorlist = v14->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_142;
  v16 = sub_1C32CC8(UnityEngine_GameObject___TypeInfo, LODWORD(e_actorlist->max_length));
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->fields.saveWaitEnemy, v16, v17, v18);
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
        (System_String_o *)StringLiteral_12865/*"ShowNobleInfo"*/,
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
    v29 = (System_Collections_Generic_List_bool__o *)sub_1C32E6C(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v29,
      (const MethodInfo_3751B78 *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v29;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1C32BC4((CGThumbnailListItem_o *)&v7->fields.ActorActiveList, (int32_t)v29, v31, v32);
    v34 = v7->fields.performance;
    if ( !v34 )
      goto LABEL_142;
    v35 = v34->fields.p_actorlist;
    v143 = callback;
    if ( !v35 )
      goto LABEL_142;
    max_length = v35->max_length;
    if ( (int)max_length >= 1 )
    {
      v37 = 0;
      while ( v37 < (unsigned int)max_length )
      {
        v38 = (UnityEngine_Object_o *)v35->m_Items[v37];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v38, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v38 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v38,
                                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v40 = (BattleServantData_o *)this[1].fields.effectCamera;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v39);
          v41 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v38, 0);
          if ( !v41 )
            goto LABEL_142;
          items = v41->fields._items;
          v43 = Method_System_Collections_Generic_List_bool__Add__;
          ++v41->fields._version;
          if ( !items )
            goto LABEL_142;
          size = v41->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v41,
              (unsigned __int8)this & 1,
              *(const MethodInfo_37523DC **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v41->fields._size = size + 1;
            items->m_Items[size] = (unsigned __int8)this & 1;
          }
          if ( !v40 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v40, 0);
          if ( ((unsigned __int8)this & 1) != 0 || v40->fields.isAnimPlayedWithdraw )
          {
            v50 = *p_saveWaitPlayer;
            if ( !*p_saveWaitPlayer )
              goto LABEL_142;
            if ( v37 >= LODWORD(v50->max_length) )
              break;
            v51 = (__int64)v50 + 8 * v37;
            *(_QWORD *)(v51 + 32) = v38;
            sub_1C32BC4((CGThumbnailListItem_o *)(v51 + 32), (int32_t)v38, v48, v49);
            v54 = v7->fields.performance;
            if ( !v54 )
              goto LABEL_142;
            v55 = v54->fields.p_actorlist;
            if ( !v55 )
              goto LABEL_142;
            if ( v37 >= LODWORD(v55->max_length) )
              break;
            v56 = (__int64)v55 + 8 * v37;
            *(_QWORD *)(v56 + 32) = 0;
            sub_1C32BC4((CGThumbnailListItem_o *)(v56 + 32), 0, v52, v53);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v38, 0, 0);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          m_CachedPtr = this->fields.m_CachedPtr;
          v46 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_142;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_37523DC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(m_CachedPtr + m_CancellationTokenSource_low + 32) = 0;
          }
        }
        LODWORD(max_length) = v35->max_length;
        if ( (__int64)++v37 >= (int)max_length )
          goto LABEL_57;
      }
LABEL_143:
      sub_1C32E84(this);
    }
LABEL_57:
    v57 = v7->fields.performance;
    if ( !v57 )
      goto LABEL_142;
    v58 = v57->fields.e_actorlist;
    if ( !v58 )
      goto LABEL_142;
    v59 = v58->max_length;
    if ( (int)v59 >= 1 )
    {
      v60 = 0;
      while ( v60 < (unsigned int)v59 )
      {
        v61 = (UnityEngine_Object_o *)v58->m_Items[v60];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v61, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v61 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v61,
                                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_142;
          v63 = (BattleServantData_o *)this[1].fields.effectCamera;
          BattleSequenceManager__PrevPlayTargetActorProc(this, (BattleActorControl_o *)this, v62);
          v64 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v61, 0);
          if ( !v64 )
            goto LABEL_142;
          v65 = v64->fields._items;
          v66 = Method_System_Collections_Generic_List_bool__Add__;
          ++v64->fields._version;
          if ( !v65 )
            goto LABEL_142;
          v67 = v64->fields._size;
          if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v64,
              (unsigned __int8)this & 1,
              *(const MethodInfo_37523DC **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v64->fields._size = v67 + 1;
            v65->m_Items[v67] = (unsigned __int8)this & 1;
          }
          if ( !v63 )
            goto LABEL_142;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive(v63, 0);
          if ( ((unsigned __int8)this & 1) != 0 || v63->fields.isAnimPlayedWithdraw )
          {
            v73 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_142;
            if ( v60 >= LODWORD(v73->max_length) )
              goto LABEL_143;
            v74 = (__int64)v73 + 8 * v60;
            *(_QWORD *)(v74 + 32) = v61;
            sub_1C32BC4((CGThumbnailListItem_o *)(v74 + 32), (int32_t)v61, v71, v72);
            v77 = v7->fields.performance;
            if ( !v77 )
              goto LABEL_142;
            v78 = v77->fields.e_actorlist;
            if ( !v78 )
              goto LABEL_142;
            if ( v60 >= LODWORD(v78->max_length) )
              goto LABEL_143;
            v79 = (__int64)v78 + 8 * v60;
            *(_QWORD *)(v79 + 32) = 0;
            sub_1C32BC4((CGThumbnailListItem_o *)(v79 + 32), 0, v75, v76);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v61, 0, 0);
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_142;
          v68 = this->fields.m_CachedPtr;
          v69 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v68 )
            goto LABEL_142;
          v70 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              0,
              *(const MethodInfo_37523DC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.m_CancellationTokenSource) = v70 + 1;
            *(_BYTE *)(v68 + v70 + 32) = 0;
          }
        }
        LODWORD(v59) = v58->max_length;
        if ( (__int64)++v60 >= (int)v59 )
          goto LABEL_87;
      }
      goto LABEL_143;
    }
LABEL_87:
    if ( !isDemoMode )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, v33);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, v33);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
    this = (BattleSequenceManager_o *)sub_1C32CC8(object___TypeInfo, 8);
    if ( !this )
      goto LABEL_142;
    v83 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19689/*"from"*/;
    if ( StringLiteral_19689/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1C32D5C(StringLiteral_19689/*"from"*/, v83->klass->_1.element_class);
      if ( !this )
        goto LABEL_144;
      v84 = StringLiteral_19689/*"from"*/;
    }
    else
    {
      v84 = 0;
    }
    if ( !LODWORD(v83->fields.m_CancellationTokenSource) )
      goto LABEL_143;
    v83->fields.sequenceManager = (struct UnityEngine_GameObject_o *)v84;
    sub_1C32BC4((CGThumbnailListItem_o *)&v83->fields.sequenceManager, v84, v81, v82);
    v147 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v147, v85, v86, v87, v88, v89, v90);
    v93 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1C32D5C(this, v83->klass->_1.element_class)) != 0 )
    {
      if ( LODWORD(v83->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_143;
      *(_QWORD *)&v83->fields.servantId = v93;
      sub_1C32BC4((CGThumbnailListItem_o *)&v83->fields.servantId, (int32_t)v93, v91, v92);
      this = (BattleSequenceManager_o *)StringLiteral_24106/*"to"*/;
      if ( StringLiteral_24106/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1C32D5C(StringLiteral_24106/*"to"*/, v83->klass->_1.element_class);
        if ( !this )
          goto LABEL_144;
        v96 = StringLiteral_24106/*"to"*/;
      }
      else
      {
        v96 = 0;
      }
      if ( LODWORD(v83->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_143;
      *(_QWORD *)&v83->fields.testNpPer = v96;
      sub_1C32BC4((CGThumbnailListItem_o *)&v83->fields.testNpPer, v96, v94, v95);
      v103 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v103 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v103->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(
                                          float_TypeInfo,
                                          &NoblePhantasmBgmVolumeRate,
                                          v97,
                                          v98,
                                          v99,
                                          v100,
                                          v101,
                                          v102);
      v106 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1C32D5C(this, v83->klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v83->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_143;
        v83->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v106;
        sub_1C32BC4((CGThumbnailListItem_o *)&v83->fields.ReleaseSoundNames, (int32_t)v106, v104, v105);
        this = (BattleSequenceManager_o *)StringLiteral_24067/*"time"*/;
        if ( StringLiteral_24067/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1C32D5C(StringLiteral_24067/*"time"*/, v83->klass->_1.element_class);
          if ( !this )
            goto LABEL_144;
          v109 = StringLiteral_24067/*"time"*/;
        }
        else
        {
          v109 = 0;
        }
        if ( LODWORD(v83->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_143;
        v83->fields.performance = (struct BattlePerformance_o *)v109;
        sub_1C32BC4((CGThumbnailListItem_o *)&v83->fields.performance, v109, v107, v108);
        v145 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(
                                            float_TypeInfo,
                                            &v145,
                                            v110,
                                            v111,
                                            v112,
                                            v113,
                                            v114,
                                            v115);
        v118 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1C32D5C(this, v83->klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v83->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_143;
          v83->fields.seqObject = (struct UnityEngine_GameObject_o *)v118;
          sub_1C32BC4((CGThumbnailListItem_o *)&v83->fields.seqObject, (int32_t)v118, v116, v117);
          this = (BattleSequenceManager_o *)StringLiteral_22435/*"onupdate"*/;
          if ( StringLiteral_22435/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1C32D5C(StringLiteral_22435/*"onupdate"*/, v83->klass->_1.element_class);
            if ( !this )
              goto LABEL_144;
            v121 = StringLiteral_22435/*"onupdate"*/;
          }
          else
          {
            v121 = 0;
          }
          if ( LODWORD(v83->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_143;
          v83->fields.actor = (struct UnityEngine_GameObject_o *)v121;
          sub_1C32BC4((CGThumbnailListItem_o *)&v83->fields.actor, v121, v119, v120);
          this = (BattleSequenceManager_o *)StringLiteral_9835/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9835/*"OnChangeBgmVolume"*/ )
          {
            v124 = 0;
LABEL_125:
            if ( LODWORD(v83->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_143;
            v83->fields.CutInRoot = (struct UnityEngine_GameObject_o *)v124;
            sub_1C32BC4((CGThumbnailListItem_o *)&v83->fields.CutInRoot, v124, v122, v123);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v125 = iTween__Hash((System_Object_array *)v83, 0);
            iTween__ValueTo(gameObject, v125, 0);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0);
              v7->fields.BackupBgmName = BgmName;
              sub_1C32BC4((CGThumbnailListItem_o *)&v7->fields.BackupBgmName, (int32_t)BgmName, v127, v128);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v129);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v130 = this;
                    p_actorCamera = (CGThumbnailListItem_o *)&this->fields.actorCamera;
                    v132 = (System_Delegate_o *)this->fields.actorCamera;
                    v133 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1C32E6C(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v133,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0);
                    v134 = System_Delegate__Combine(v132, (System_Delegate_o *)v133, 0);
                    v137 = v134;
                    if ( v134 )
                    {
                      v138 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v134->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_actorCamera->klass = (CGThumbnailListItem_c *)v134;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v134->klass == v138 )
                          goto LABEL_137;
                      }
                      sub_1C3313C(v134);
                    }
                    p_actorCamera->klass = (CGThumbnailListItem_c *)v137;
LABEL_137:
                    sub_1C32BC4(p_actorCamera, (int32_t)v137, v135, v136);
                    v7->fields.OnCompleteActorCallback = v143;
                    sub_1C32BC4((CGThumbnailListItem_o *)&v7->fields.OnCompleteActorCallback, (int32_t)v143, v139, v140);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v130, 0);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                    if ( CommonUI__GetForceObi_16_9(0) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v141);
                    return;
                  }
                }
              }
            }
LABEL_142:
            sub_1C32E7C(this);
          }
          this = (BattleSequenceManager_o *)sub_1C32D5C(StringLiteral_9835/*"OnChangeBgmVolume"*/, v83->klass->_1.element_class);
          if ( this )
          {
            v124 = StringLiteral_9835/*"OnChangeBgmVolume"*/;
            goto LABEL_125;
          }
        }
      }
    }
LABEL_144:
    v142 = sub_1C32EA0(this);
    sub_1C32D48(v142, 0);
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
  const MethodInfo *v13; // x4
  VoiceMaster_o *v14; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v17; // x4
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x22

  if ( (byte_4C3A56E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Voice_TypeInfo);
    byte_4C3A56E = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
                      sub_1C32E84(MasterData_object);
                    BattleSequenceManager__addServantVoicePlayed(this, v14, this->fields.chrId, v11->m_Items[v19], v13);
                    LODWORD(max_length) = v11->max_length;
                    ++v19;
                  }
                  while ( (__int64)v19 < (int)max_length );
                }
                return;
              }
LABEL_31:
              sub_1C32E7C(actor);
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
  struct BattlePerformance_o *performance; // x8
  int32_t v11; // w2

  if ( (byte_4C3A54D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C3A54D = 1;
  }
  FlagRequestNumber = System_String__Concat_63518544((System_String_o *)StringLiteral_16107/*"_"*/, labelName, 0);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(voiceMaster, chrId, FlagRequestNumber, 0, 0);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v11 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__removeServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v11, 0);
        return;
      }
    }
LABEL_9:
    sub_1C32E7C(FlagRequestNumber);
  }
}


void BattleSequenceManager__restoreBattleActorTransform(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v4; // x8
  int32_t size; // w2
  int v6; // w9
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3A569 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    byte_4C3A569 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    battleTargetList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v7.fields._current )
      sub_1C32E7C(0);
    BattleSequenceManager_BattleTarget__restoreTransform((BattleSequenceManager_BattleTarget_o *)v7.fields._current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v4 = this->fields.battleTargetList;
  if ( !v4 )
LABEL_13:
    sub_1C32E7C(battleTargetList);
  size = v4->fields._size;
  v6 = v4->fields._version + 1;
  v4->fields._size = 0;
  v4->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v4->fields._items, 0, size, 0);
}


WellFired_USTimelineContainer_o *BattleSequenceManager__searchTimeline(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  UnityEngine_Component_o *v15; // x0
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  WellFired_USTimelineContainer_o *v19; // x21
  System_String_o *monitor; // x22
  System_String_o *v21; // x1
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x19
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( (byte_4C3A552 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    this = (BattleSequenceManager_o *)sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C3A552 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0)) == 0 )
  {
    sub_1C32E7C(this);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v10)(Enumerator, *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1];
    }
    else
    {
LABEL_17:
      v14 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v15 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    if ( !v15 )
      sub_1C32E7C(0);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v15->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C3313C(v15);
LABEL_37:
      sub_1C32E7C(Component_object);
    }
    gameObject = UnityEngine_Component__get_gameObject(v15, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v19 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v21 = System_String__Concat_63518544((System_String_o *)StringLiteral_1048/*"/"*/, name, 0);
    if ( System_String__op_Equality(monitor, v21, 0) )
      goto LABEL_27;
  }
  v19 = 0;
LABEL_27:
  v22 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_32;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_32:
      v27 = sub_1C83438(v22, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  return v19;
}


void BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4C3A56B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4C3A56B = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_3450084 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1C32E7C(playAudioSyncGroupIndexDict);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_3650A0C *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__51202152; // x0
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
  Il2CppMethodPointer methodPtr; // x1
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
  Il2CppObject *v85; // x1
  System_String_o *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  __int64 v89; // x9
  Il2CppClass *v90; // x1
  UnityEngine_Transform_o *parent; // x0
  CGThumbnailListItem_o *v92; // x0
  System_String_o *v93; // x0
  __int64 v94; // x9
  CGThumbnailListItem_o *v95; // x29
  System_String_o *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  System_String_o *v99; // x0
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  Il2CppClass *v102; // x1
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  __int64 naturalAligment; // x9
  Il2CppClass *v110; // x1
  __int64 v111; // x28
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  UnityEngine_Transform_o *v114; // x28
  System_Collections_Generic_List_object__o *v115; // x25
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  struct System_Object_array *v118; // x8
  __int64 v119; // x9
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  BattleSequenceManager_o *v122; // x0
  const MethodInfo *v123; // x3
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  struct System_Object_array *v126; // x8
  __int64 v127; // x9
  __int64 v128; // x10
  __int64 v129; // x1
  Il2CppClass **v130; // x0
  Il2CppObject *current; // x24
  _BOOL8 v132; // x0
  void *ComponentsInChildren_object; // x0
  void *v134; // x24
  int v135; // w8
  int i; // w27
  WellFired_USTimelineEvent_o *v137; // x0
  _QWORD *v138; // x25
  __int64 v139; // x8
  unsigned __int64 v140; // x28
  __int64 v141; // x26
  System_String_o *v142; // x0
  __int64 v143; // x9
  _BOOL8 v144; // x0
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  UnityEngine_Component_o *v147; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v149; // w2
  const MethodInfo *v150; // x3
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  Il2CppClass **v154; // x0
  System_Collections_IEnumerator_o *Enumerator; // x24
  int v156; // w19
  System_Collections_IEnumerator_c *v157; // x8
  __int64 v158; // x9
  int32_t *p_offset; // x10
  __int64 v160; // x0
  System_Collections_IEnumerator_c *v161; // x8
  __int64 v162; // x9
  System_Collections_IEnumerator_c **v163; // x10
  __int64 v164; // x0
  UnityEngine_Component_o *v165; // x0
  __int64 v166; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v168; // x0
  Il2CppObject *v169; // x25
  System_String_o *v170; // x0
  System_String_o *v171; // x0
  System_String_o *v172; // x0
  System_String_o *v173; // x0
  __int64 v174; // x0
  __int64 v175; // x8
  __int64 v176; // x24
  __int64 v177; // x9
  int *v178; // x10
  __int64 v179; // x0
  System_Collections_IEnumerator_c *v180; // x8
  __int64 v181; // x9
  int32_t *v182; // x10
  __int64 v183; // x0
  System_Collections_IEnumerator_c *v184; // x8
  __int64 v185; // x9
  System_Collections_IEnumerator_c **v186; // x10
  __int64 v187; // x0
  UnityEngine_Component_o *v188; // x0
  __int64 v189; // x9
  UnityEngine_GameObject_o *v190; // x0
  Il2CppObject *v191; // x0
  WellFired_USTimelineContainer_o *v192; // x24
  System_String_o *v193; // x0
  bool v194; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v196; // x27
  System_String_o *v197; // x0
  bool v198; // w28
  System_String_o *v199; // x0
  System_String_o *v200; // x0
  System_String_o *v201; // x0
  UnityEngine_Component_o *v202; // x0
  UnityEngine_Transform_o *v203; // x0
  System_String_o *v204; // x0
  UnityEngine_GameObject_o *v205; // x0
  UnityEngine_Transform_o *v206; // x25
  System_String_o *v207; // x0
  System_String_o *v208; // x0
  UnityEngine_Transform_o *v209; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  System_String_o *v211; // x0
  bool v212; // w0
  __int64 *v213; // x8
  System_String_o *v214; // x0
  bool v215; // w0
  System_String_o *v216; // x28
  UnityEngine_GameObject_o *v217; // x0
  System_String_o *v218; // x27
  UnityEngine_Transform_o *v219; // x0
  UnityEngine_Object_o *v220; // x25
  _BOOL8 v221; // x0
  System_Collections_IEnumerator_o *v222; // x26
  System_Collections_IEnumerator_c *v223; // x8
  __int64 v224; // x9
  int32_t *v225; // x10
  __int64 v226; // x0
  System_Collections_IEnumerator_c *v227; // x8
  __int64 v228; // x9
  System_Collections_IEnumerator_c **v229; // x10
  __int64 v230; // x0
  UnityEngine_Component_o *v231; // x0
  UnityEngine_Object_o *v232; // x25
  __int64 v233; // x9
  UnityEngine_Object_o *v234; // x0
  System_String_o *v235; // x0
  System_String_o *v236; // x0
  _BOOL8 v237; // x0
  const MethodInfo *v238; // x2
  int32_t v239; // w25
  System_String_o *v240; // x26
  __int64 v241; // x0
  __int64 v242; // x25
  __int64 v243; // x8
  __int64 v244; // x9
  int *v245; // x10
  __int64 v246; // x0
  System_String_o *v247; // x25
  System_String_o *v248; // x0
  System_String_o *v249; // x0
  System_String_array *v250; // x0
  System_String_o *v251; // x26
  UnityEngine_GameObject_o *v252; // x0
  UnityEngine_Transform_o *v253; // x25
  System_String_o *v254; // x0
  System_String_o *v255; // x0
  System_String_o *v256; // x0
  UnityEngine_Transform_o *v257; // x0
  Il2CppObject *v258; // x25
  System_Collections_Generic_List_object__o *v259; // x0
  _BOOL8 v260; // x0
  System_String_o *v261; // x0
  System_String_o *v262; // x1
  const MethodInfo *v263; // x3
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  System_Collections_Generic_List_object__o *v266; // x0
  struct System_Object_array *v267; // x8
  _QWORD *v268; // x9
  __int64 v269; // x10
  Il2CppClass **v270; // x8
  __int64 v271; // x0
  _BOOL8 IsNullOrEmpty; // x0
  UnityEngine_Transform_o *v273; // x0
  UnityEngine_Transform_o *v274; // x0
  float v275; // s8
  float v276; // s9
  float v277; // s10
  UnityEngine_Transform_o *v278; // x26
  UnityEngine_GameObject_o *v279; // x0
  UnityEngine_Transform_o *v280; // x0
  UnityEngine_Transform_o *v281; // x0
  BattleSequenceManager_o *v282; // x0
  const MethodInfo *v283; // x4
  int32_t v284; // w26
  UnityEngine_Transform_o *v285; // x0
  UnityEngine_Transform_o *v286; // x0
  System_String_o *v287; // x0
  System_String_o *v288; // x0
  System_String_o *v289; // x0
  const MethodInfo *v290; // x3
  int32_t v291; // w2
  const MethodInfo *v292; // x3
  System_Object_array *EventCount; // x0
  System_Object_array *v294; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v297; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v299; // x0
  Il2CppObject *v300; // x27
  System_String_o *v301; // x0
  __int64 v302; // x9
  _BOOL8 v303; // x0
  int32_t v304; // w2
  const MethodInfo *v305; // x3
  UnityEngine_Component_o *v306; // x0
  UnityEngine_Transform_o *v307; // x0
  int32_t v308; // w2
  const MethodInfo *v309; // x3
  struct System_Object_array *v310; // x8
  _QWORD *v311; // x9
  __int64 v312; // x10
  Il2CppClass **v313; // x0
  int32_t layer; // w26
  __int64 v315; // x22
  __int64 v316; // x8
  __int64 v317; // x20
  __int64 v318; // x9
  int *v319; // x10
  __int64 v320; // x0
  Il2CppClass *v321; // x8
  UnityEngine_Object_o *v322; // x21
  Il2CppClass *v323; // x8
  UnityEngine_Object_o *v324; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t v326; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v328; // x4
  int32_t v329; // w22
  System_String_o *v330; // x0
  const MethodInfo *v331; // x4
  Il2CppClass *v332; // x8
  int v333; // w20
  BalanceConfig_c *v334; // x0
  int32_t v335; // w20
  System_String_o *v336; // x0
  const MethodInfo *v337; // x4
  __int64 v338; // x0
  __int64 v339; // x22
  __int64 v340; // x8
  __int64 v341; // x9
  int *v342; // x10
  __int64 v343; // x0
  int v344; // w1
  int v345; // w19
  void *v346; // x0
  void *v347; // x25
  __int64 v348; // x0
  __int64 v349; // x19
  __int64 v350; // x8
  __int64 v351; // x9
  int *v352; // x10
  __int64 v353; // x0
  System_String_o *v354; // [xsp+8h] [xbp-138h]
  System_String_o *v355; // [xsp+10h] [xbp-130h]
  Il2CppObject *v356; // [xsp+18h] [xbp-128h]
  Il2CppObject *item; // [xsp+20h] [xbp-120h]
  UnityEngine_Component_o *v358; // [xsp+28h] [xbp-118h]
  char v359; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs; // [xsp+30h] [xbp-110h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evsa; // [xsp+30h] [xbp-110h]
  bool v362; // [xsp+38h] [xbp-108h]
  __int64 v363; // [xsp+38h] [xbp-108h]
  System_Collections_IEnumerator_o *v364; // [xsp+38h] [xbp-108h]
  Il2CppObject *object; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v366; // [xsp+48h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+60h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+7Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v369; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v370; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v372; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v375; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3A54B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
    sub_1C32C20(&Method_BattleSequenceManager__setup_b__88_1__);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    sub_1C32C20(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__);
    sub_1C32C20(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    sub_1C32C20(&System_GC_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20((char *)&xmmword_4A694EC + 12);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
    sub_1C32C20((char *)&xmmword_4A694FC + 4);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
    sub_1C32C20((char *)&xmmword_4A694EC + 4);
    sub_1C32C20(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_USTimelineContainer__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147232);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    sub_1C32C20(&Method_BattleSequenceManager___c__setup_b__88_0__);
    sub_1C32C20(&BattleSequenceManager___c_TypeInfo);
    sub_1C32C20(&WellFired_USFGOAnimationCameraEvent_TypeInfo);
    sub_1C32C20(&WellFired_USFGOAttachToParentEvent_TypeInfo);
    sub_1C32C20(&WellFired_USFGOChangeBgEvent_TypeInfo);
    sub_1C32C20(&WellFired_USFGOPlayCutInEvent_TypeInfo);
    sub_1C32C20(&WellFired_USFGOSetCameraEvent_TypeInfo);
    sub_1C32C20(&Voice_TypeInfo);
    sub_1C32C20(&StringLiteral_1056/*"/Actor/chr/"*/);
    sub_1C32C20(&StringLiteral_3108/*"BattleBG"*/);
    sub_1C32C20(&StringLiteral_1066/*"/BattleActors/"*/);
    sub_1C32C20(&StringLiteral_3110/*"BattleCamera"*/);
    sub_1C32C20(&StringLiteral_3114/*"BattleCutIn"*/);
    sub_1C32C20(&StringLiteral_14872/*"USFGOSetCameraEvent"*/);
    sub_1C32C20(&StringLiteral_2133/*"Actor"*/);
    sub_1C32C20(&StringLiteral_17325/*"body_level_"*/);
    sub_1C32C20(&StringLiteral_1058/*"/Actor/chr/weapon_level_"*/);
    sub_1C32C20(&StringLiteral_1057/*"/Actor/chr/body_level_"*/);
    sub_1C32C20(&StringLiteral_6405/*"FGOSequenceManager"*/);
    sub_1C32C20(&StringLiteral_1060/*"/AllEffects/"*/);
    sub_1C32C20(&StringLiteral_17960/*"chr(Clone)"*/);
    sub_1C32C20(&StringLiteral_3973/*"Cameras/BattleCamera"*/);
    sub_1C32C20(&StringLiteral_14870/*"USFGOChangeBgEvent"*/);
    sub_1C32C20(&StringLiteral_1078/*"/BattleCamera"*/);
    sub_1C32C20(&StringLiteral_1081/*"/CutIns/"*/);
    sub_1C32C20(&StringLiteral_3106/*"Battle2D"*/);
    sub_1C32C20(&StringLiteral_1080/*"/Cameras/BattleCamera"*/);
    sub_1C32C20(&StringLiteral_16774/*"animCamLoc"*/);
    sub_1C32C20(&StringLiteral_24790/*"weapon_level_"*/);
    sub_1C32C20(&StringLiteral_685/*"(Clone)"*/);
    sub_1C32C20(&StringLiteral_14869/*"USFGOAttachToParentEvent"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_1055/*"/Actor/chr"*/);
    sub_1C32C20(&StringLiteral_14868/*"USFGOAnimationCameraEvent"*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    sub_1C32C20(&StringLiteral_14871/*"USFGOPlayCutInEvent"*/);
    byte_4C3A54B = 1;
  }
  *(_QWORD *)result = 0;
  memset(&v370, 0, sizeof(v370));
  memset(&v369, 0, sizeof(v369));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  object = (Il2CppObject *)this;
  if ( !seqObject )
    goto LABEL_418;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
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
  ComponentsInChildren_object__51202152 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__51202152(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_30D4868 *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v12 = BattleSequenceManager___c_TypeInfo;
  item = (Il2CppObject *)v10;
  v362 = isDemoMode;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    v13 = ComponentsInChildren_object__51202152;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v12 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__51202152 = v13;
  }
  _9__88_0 = (System_Func_object__bool__o *)v12->static_fields->__9__88_0;
  v358 = (UnityEngine_Component_o *)Component_object;
  if ( !_9__88_0 )
  {
    evs = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)ComponentsInChildren_object__51202152;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleSequenceManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__88_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__88_0, v15, Method_BattleSequenceManager___c__setup_b__88_0__, 0);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__88_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__88_0, (int32_t)_9__88_0, v17, v18);
    ComponentsInChildren_object__51202152 = (System_Collections_Generic_IEnumerable_TSource__o *)evs;
  }
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         ComponentsInChildren_object__51202152,
                                                         (System_Func_TSource__bool__o *)_9__88_0,
                                                         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v20 = (System_Action_object__o *)sub_1C32E6C(System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
  System_Action_object____ctor(v20, object, Method_BattleSequenceManager__setup_b__88_1__, 0);
  BasicHelper__ForEach_object_(
    v19,
    (System_Action_T__o *)v20,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v23 = BattleSequenceManager__searchTimeline(
          v21,
          (WellFired_USSequencer_o *)Component_object,
          (System_String_o *)StringLiteral_6405/*"FGOSequenceManager"*/,
          v22);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)object[5].klass;
  if ( !seqObject )
LABEL_418:
    sub_1C32E7C(seqObject);
  v356 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)seqObject,
           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                           (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      monitor->fields._size = size + 1;
      v34[4] = (Il2CppClass *)v33;
      sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), v33, v28, v29);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v23, 0);
    if ( !seqObject )
      goto LABEL_418;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_418;
    v37 = object[7].klass;
    v38 = seqObject;
    *(_QWORD *)(seqObject + 32) = v37;
    sub_1C32BC4((CGThumbnailListItem_o *)(seqObject + 32), (int32_t)v37, v35, v36);
    v39 = object[7].monitor;
    *(_QWORD *)(v38 + 40) = v39;
    sub_1C32BC4((CGThumbnailListItem_o *)(v38 + 40), (int32_t)v39, v40, v41);
    v42 = object[8].klass;
    *(_QWORD *)(v38 + 48) = v42;
    sub_1C32BC4((CGThumbnailListItem_o *)(v38 + 48), (int32_t)v42, v43, v44);
    v47 = object[4].klass;
    if ( !v47 )
      goto LABEL_418;
    methodPtr = v47->vtable[7].methodPtr;
    *(_QWORD *)(v38 + 96) = methodPtr;
    sub_1C32BC4((CGThumbnailListItem_o *)(v38 + 96), (int32_t)methodPtr, v45, v46);
    v49 = (Il2CppObject *)object[21].klass;
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    v50 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v50->zeroVector.fields.x;
    y = v50->zeroVector.fields.y;
    z = v50->zeroVector.fields.z;
    if ( !byte_4C313D7 )
    {
      sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
      byte_4C313D7 = 1;
    }
    v372.fields.x = x;
    v372.fields.y = y;
    v372.fields.z = z;
    v54 = UnityEngine_Object__Instantiate_object__51812788(
            v49,
            v372,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            (const MethodInfo_31699B4 *)Method_UnityEngine_Object_Instantiate_GameObject____78147232);
    *(_QWORD *)(v38 + 72) = v54;
    v55 = (CGThumbnailListItem_o *)(v38 + 72);
    sub_1C32BC4(v55, (int32_t)v54, v56, v57);
    seqObject = (__int64)v55->klass;
    if ( !v55->klass )
      goto LABEL_418;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0);
    if ( !v362 )
    {
      BattleSequenceManager__SetupTargetInfo((BattleSequenceManager_o *)object, v58);
      BattleSequenceManager__SetShaderNoblePhantasmMode((BattleSequenceManager_o *)object, 1, v59);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v23,
                           1,
                           (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_418;
    v60 = *(_DWORD *)(seqObject + 24);
    v61 = seqObject;
    if ( v60 >= 1 )
    {
      v62 = 0;
      v63 = 0;
      v363 = seqObject;
      while ( 1 )
      {
        if ( v62 >= (unsigned int)v60 )
LABEL_422:
          sub_1C32E84(seqObject);
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
        v61 = v363;
        ++v62;
        v60 = *(_DWORD *)(v363 + 24);
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
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14868/*"USFGOAnimationCameraEvent"*/, 0) )
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
                                                                   (System_String_o *)StringLiteral_16774/*"animCamLoc"*/,
                                                                   0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__LoadNoblePhantasmEffect,
                                     (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
              }
              else
              {
                v80 = &v77->obj.klass + v79;
                v76->fields._size = v79 + 1;
                v80[4] = (Il2CppClass *)v63;
                sub_1C32BC4((CGThumbnailListItem_o *)(v80 + 4), (int32_t)v63, v74, v75);
              }
            }
            naturalAligment = WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.naturalAligment;
            if ( *(unsigned __int8 *)(*(_QWORD *)v67 + 304LL) < (unsigned int)naturalAligment
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL)
                                                           + 8 * naturalAligment
                                                           - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_423:
              sub_1C3313C(v67);
LABEL_424:
              sub_1C3313C(v165);
LABEL_425:
              sub_1C32E7C(v299);
            }
            *(_QWORD *)(v67 + 56) = v63;
            sub_1C32BC4((CGThumbnailListItem_o *)(v67 + 56), (int32_t)v63, v69, v70);
            v110 = object[7].klass;
            *(_QWORD *)(v67 + 64) = v110;
            v111 = v67 + 64;
            sub_1C32BC4((CGThumbnailListItem_o *)v111, (int32_t)v110, v112, v113);
            *(_BYTE *)(v111 + 28) = 0;
            if ( !v63 )
              goto LABEL_418;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v63, 0);
            if ( !object[5].klass )
              goto LABEL_418;
            v114 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)object[5].klass, 0);
            if ( !seqObject )
              goto LABEL_418;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)seqObject, 0);
            if ( !v114 )
              goto LABEL_418;
            UnityEngine_Transform__set_position(v114, position, 0);
          }
          else
          {
            v81 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v67, 0);
            seqObject = System_String__op_Equality(v81, (System_String_o *)StringLiteral_14871/*"USFGOPlayCutInEvent"*/, 0);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_418;
              v84 = WellFired_USFGOPlayCutInEvent_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)v67 + 304LL) >= (unsigned int)v84 )
                v85 = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL) + 8 * v84 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                    ? (Il2CppObject *)v67
                    : 0LL;
              else
                v85 = 0;
              v105 = v25->fields._items;
              v106 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
              ++v25->fields._version;
              if ( !v105 )
                goto LABEL_418;
              v107 = v25->fields._size;
              if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v25,
                  v85,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
                goto LABEL_101;
              }
              v108 = &v105->obj.klass + v107;
              v25->fields._size = v107 + 1;
              v108[4] = (Il2CppClass *)v85;
              v92 = (CGThumbnailListItem_o *)(v108 + 4);
              goto LABEL_91;
            }
            v86 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v67, 0);
            if ( System_String__op_Equality(v86, (System_String_o *)StringLiteral_14872/*"USFGOSetCameraEvent"*/, 0) )
            {
              v89 = WellFired_USFGOSetCameraEvent_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)v67 + 304LL) < (unsigned int)v89
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL) + 8 * v89 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_423;
              }
              v90 = object[7].klass;
              *(_QWORD *)(v67 + 56) = v90;
              sub_1C32BC4((CGThumbnailListItem_o *)(v67 + 56), (int32_t)v90, v87, v88);
              seqObject = (__int64)object[7].klass;
              if ( !seqObject )
                goto LABEL_418;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0);
              if ( !seqObject )
                goto LABEL_418;
              parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0);
              *(_QWORD *)(v67 + 64) = parent;
              LODWORD(v85) = (_DWORD)parent;
              v92 = (CGThumbnailListItem_o *)(v67 + 64);
LABEL_91:
              sub_1C32BC4(v92, (int32_t)v85, v82, v83);
              goto LABEL_101;
            }
            v93 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v67, 0);
            seqObject = System_String__op_Equality(v93, (System_String_o *)StringLiteral_14870/*"USFGOChangeBgEvent"*/, 0);
            if ( (seqObject & 1) != 0 )
            {
              v94 = WellFired_USFGOChangeBgEvent_TypeInfo->_2.naturalAligment;
              if ( *(unsigned __int8 *)(*(_QWORD *)v67 + 304LL) < (unsigned int)v94
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v67 + 200LL) + 8 * v94 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_423;
              }
              v95 = (CGThumbnailListItem_o *)(v67 + 64);
              if ( System_String__op_Equality(*(System_String_o **)(v67 + 64), (System_String_o *)StringLiteral_1122/*"0"*/, 0)
                || (seqObject = System_String__op_Equality(
                                  (System_String_o *)v95->klass,
                                  (System_String_o *)StringLiteral_1/*""*/,
                                  0),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)object[4].klass;
                if ( !seqObject )
                  goto LABEL_418;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0);
                v96 = System_Int32__ToString((int32_t)&result[1], 0);
                v95->klass = (CGThumbnailListItem_c *)v96;
                sub_1C32BC4(v95, (int32_t)v96, v97, v98);
                seqObject = (__int64)object[4].klass;
                if ( !seqObject )
                  goto LABEL_418;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0);
                v99 = System_Int32__ToString((int32_t)&result[1], 0);
                *(_QWORD *)(v67 + 72) = v99;
                sub_1C32BC4((CGThumbnailListItem_o *)(v67 + 72), (int32_t)v99, v100, v101);
                v102 = object[25].klass;
                *(_QWORD *)(v67 + 136) = v102;
                sub_1C32BC4((CGThumbnailListItem_o *)(v67 + 136), (int32_t)v102, v103, v104);
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
  v115 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(v115, *(const MethodInfo_3797F88 **)((char *)&xmmword_4A694EC + 4));
  if ( !v115 )
    goto LABEL_418;
  v118 = v115->fields._items;
  v119 = *(_QWORD *)((char *)&xmmword_4A694EC + 12);
  ++v115->fields._version;
  if ( !v118 )
    goto LABEL_418;
  v120 = v115->fields._size;
  if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v115,
      item,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(*(_QWORD *)(v119 + 32) + 192LL) + 112LL));
  }
  else
  {
    v121 = &v118->obj.klass + v120;
    v115->fields._size = v120 + 1;
    v121[4] = (Il2CppClass *)item;
    sub_1C32BC4((CGThumbnailListItem_o *)(v121 + 4), (int32_t)item, v116, v117);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(
                         v122,
                         (WellFired_USSequencer_o *)v358,
                         (System_String_o *)StringLiteral_3973/*"Cameras/BattleCamera"*/,
                         v123);
  v126 = v115->fields._items;
  v127 = *(_QWORD *)((char *)&xmmword_4A694EC + 12);
  ++v115->fields._version;
  if ( !v126 )
    goto LABEL_418;
  v128 = v115->fields._size;
  v129 = seqObject;
  if ( (unsigned int)v128 >= LODWORD(v126->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v115,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(*(_QWORD *)(v127 + 32) + 192LL) + 112LL));
  }
  else
  {
    v130 = &v126->obj.klass + v128;
    v115->fields._size = v128 + 1;
    v130[4] = (Il2CppClass *)v129;
    sub_1C32BC4((CGThumbnailListItem_o *)(v130 + 4), v129, v124, v125);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v366,
    v115,
    *(const MethodInfo_37992B4 **)((char *)&xmmword_4A694FC + 4));
  v370 = v366;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v370,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v370.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v132 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v132 )
    {
      if ( !current )
        sub_1C32E7C(v132);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v134 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1C32E7C(0);
      v135 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v135 >= 1 )
      {
        for ( i = 0; i < v135; ++i )
        {
          if ( i >= (unsigned int)v135 )
            sub_1C32E84(ComponentsInChildren_object);
          v137 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v134 + i + 4);
          if ( !v137 )
            sub_1C32E7C(0);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v137, 0);
          v138 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1C32E7C(0);
          v139 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v139 >= 1 )
          {
            v140 = 0;
            do
            {
              if ( v140 >= (unsigned int)v139 )
                sub_1C32E84(ComponentsInChildren_object);
              v141 = v138[v140 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v141, 0, 0);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v141 )
                  sub_1C32E7C(ComponentsInChildren_object);
                v142 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v141, 0);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v142,
                                                        (System_String_o *)StringLiteral_14869/*"USFGOAttachToParentEvent"*/,
                                                        0);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v143 = WellFired_USFGOAttachToParentEvent_TypeInfo->_2.naturalAligment;
                  if ( *(unsigned __int8 *)(*(_QWORD *)v141 + 304LL) < (unsigned int)v143
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v141 + 200LL) + 8 * v143 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1C3313C(v141);
LABEL_415:
                    sub_1C32E7C(v144);
                  }
                  v144 = System_String__op_Equality(
                           *(System_String_o **)(v141 + 80),
                           (System_String_o *)StringLiteral_3110/*"BattleCamera"*/,
                           0);
                  if ( v144 )
                  {
                    v147 = (UnityEngine_Component_o *)object[7].klass;
                    if ( !v147 )
                      sub_1C32E7C(0);
                    transform = UnityEngine_Component__get_transform(v147, 0);
                    *(_QWORD *)(v141 + 64) = transform;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v141 + 64), (int32_t)transform, v149, v150);
                  }
                  else
                  {
                    if ( !v24 )
                      goto LABEL_415;
                    v151 = v24->fields._items;
                    v152 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v24->fields._version;
                    if ( !v151 )
                      sub_1C32E7C(v144);
                    v153 = v24->fields._size;
                    if ( (unsigned int)v153 >= LODWORD(v151->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v24,
                        (Il2CppObject *)v141,
                        *(const MethodInfo_37987BC **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v154 = &v151->obj.klass + v153;
                      v24->fields._size = v153 + 1;
                      v154[4] = (Il2CppClass *)v141;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v154 + 4), v141, v145, v146);
                    }
                  }
                }
              }
              LODWORD(v139) = *((_DWORD *)v138 + 6);
              ++v140;
            }
            while ( (__int64)v140 < (int)v139 );
          }
          v135 = *((_DWORD *)v134 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v370,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)UnityEngine_Component__get_transform(v358, 0);
  if ( !seqObject )
    goto LABEL_418;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  v156 = 0;
  while ( 1 )
  {
    v157 = Enumerator->klass;
    v158 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &v157->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v158;
        p_offset += 4;
        if ( !v158 )
          goto LABEL_152;
      }
      v160 = (__int64)&v157->vtable[*p_offset];
    }
    else
    {
LABEL_152:
      v160 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v160)(
            Enumerator,
            *(_QWORD *)(v160 + 8))
        & 1) == 0 )
      break;
    v161 = Enumerator->klass;
    v162 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v163 = (System_Collections_IEnumerator_c **)&v161->_1.interfaceOffsets->offset;
      while ( *(v163 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v162;
        v163 += 2;
        if ( !v162 )
          goto LABEL_159;
      }
      v164 = (__int64)&v161->vtable[*(_DWORD *)v163 + 1];
    }
    else
    {
LABEL_159:
      v164 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v165 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v164)(
                                        Enumerator,
                                        *(_QWORD *)(v164 + 8));
    if ( !v165 )
      sub_1C32E7C(0);
    v166 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v165->klass->_2.naturalAligment < (unsigned int)v166
      || (UnityEngine_Transform_c *)v165->klass->_2.typeHierarchy[v166 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_424;
    }
    gameObject = UnityEngine_Component__get_gameObject(v165, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    v168 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v169 = v168;
    if ( !v168 )
      goto LABEL_428;
    v170 = (System_String_o *)v168[2].monitor;
    if ( !v170 )
      sub_1C32E7C(0);
    if ( System_String__StartsWith(v170, (System_String_o *)StringLiteral_1066/*"/BattleActors/"*/, 0) && v169[2].monitor )
    {
      v171 = (System_String_o *)v169[2].monitor;
      if ( !v171 )
        sub_1C32E7C(0);
      if ( System_String__StartsWith(v171, (System_String_o *)StringLiteral_1066/*"/BattleActors/"*/, 0) )
      {
        v172 = (System_String_o *)v169[2].monitor;
        if ( !v172 )
          sub_1C32E7C(0);
        v173 = System_String__Substring_63564468(v172, v172->fields._stringLength - 1, 1, 0);
        result[0] = 1;
        v156 += System_Int32__TryParse(v173, result, 0);
      }
    }
  }
  v174 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v174 )
  {
    v175 = *(_QWORD *)v174;
    v176 = v174;
    v177 = *(unsigned __int16 *)(*(_QWORD *)v174 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v174 + 302LL) )
    {
      v178 = (int *)(*(_QWORD *)(v175 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v178 - 1) != System_IDisposable_TypeInfo )
      {
        --v177;
        v178 += 4;
        if ( !v177 )
          goto LABEL_178;
      }
      v179 = v175 + 16LL * *v178 + 312;
    }
    else
    {
LABEL_178:
      v179 = sub_1C83438(v174, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v179)(v176, *(_QWORD *)(v179 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform(v358, 0);
  if ( !seqObject )
    goto LABEL_418;
  v364 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0);
  if ( !v364 )
    sub_1C32E7C(0);
  v359 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v180 = v364->klass;
          v181 = *(unsigned __int16 *)&v364->klass->_2.rank;
          if ( *(_WORD *)&v364->klass->_2.rank )
          {
            v182 = &v180->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v182 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v181;
              v182 += 4;
              if ( !v181 )
                goto LABEL_188;
            }
            v183 = (__int64)&v180->vtable[*v182];
          }
          else
          {
LABEL_188:
            v183 = sub_1C83438(v364, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v183)(
                  v364,
                  *(_QWORD *)(v183 + 8))
              & 1) == 0 )
          {
            v315 = 0;
            goto LABEL_366;
          }
          v184 = v364->klass;
          v185 = *(unsigned __int16 *)&v364->klass->_2.rank;
          if ( *(_WORD *)&v364->klass->_2.rank )
          {
            v186 = (System_Collections_IEnumerator_c **)&v184->_1.interfaceOffsets->offset;
            while ( *(v186 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v185;
              v186 += 2;
              if ( !v185 )
                goto LABEL_195;
            }
            v187 = (__int64)&v184->vtable[*(_DWORD *)v186 + 1];
          }
          else
          {
LABEL_195:
            v187 = sub_1C83438(v364, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v188 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v187)(
                                              v364,
                                              *(_QWORD *)(v187 + 8));
          if ( !v188 )
            sub_1C32E7C(0);
          v189 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
          if ( v188->klass->_2.naturalAligment < (unsigned int)v189
            || (UnityEngine_Transform_c *)v188->klass->_2.typeHierarchy[v189 - 1] != UnityEngine_Transform_TypeInfo )
          {
LABEL_427:
            sub_1C3313C(v188);
LABEL_428:
            sub_1C32E7C(v168);
          }
          v190 = UnityEngine_Component__get_gameObject(v188, 0);
          if ( !v190 )
            sub_1C32E7C(0);
          v191 = UnityEngine_GameObject__GetComponent_object_(
                   v190,
                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
          v192 = (WellFired_USTimelineContainer_o *)v191;
          if ( !v191 )
            sub_1C32E7C(0);
          v193 = (System_String_o *)v191[2].monitor;
          if ( !v193 )
            sub_1C32E7C(0);
          v194 = System_String__StartsWith(v193, (System_String_o *)StringLiteral_1060/*"/AllEffects/"*/, 0);
          if ( v194 )
          {
            affectedObjectPath = v192->fields.affectedObjectPath;
            if ( !affectedObjectPath )
              sub_1C32E7C(0);
            v196 = System_String__Substring(affectedObjectPath, 12, 0);
          }
          else
          {
            v196 = 0;
          }
          v197 = v192->fields.affectedObjectPath;
          if ( !v197 )
            sub_1C32E7C(0);
          v198 = System_String__StartsWith(v197, (System_String_o *)StringLiteral_1081/*"/CutIns/"*/, 0);
          if ( v198 )
          {
            v199 = v192->fields.affectedObjectPath;
            if ( !v199 )
              sub_1C32E7C(0);
            v196 = System_String__Substring(v199, 8, 0);
          }
          v200 = v192->fields.affectedObjectPath;
          if ( !v200 )
            sub_1C32E7C(0);
          if ( !System_String__StartsWith(v200, (System_String_o *)StringLiteral_1078/*"/BattleCamera"*/, 0) )
          {
            v201 = v192->fields.affectedObjectPath;
            if ( !v201 )
              sub_1C32E7C(0);
            if ( !System_String__StartsWith(v201, (System_String_o *)StringLiteral_1080/*"/Cameras/BattleCamera"*/, 0) )
              break;
          }
          v202 = (UnityEngine_Component_o *)object[7].klass;
          if ( !v202 )
            sub_1C32E7C(0);
          v203 = UnityEngine_Component__get_transform(v202, 0);
          WellFired_USTimelineContainer__set_AffectedObject(v192, v203, 0);
        }
        v204 = v192->fields.affectedObjectPath;
        if ( !v204 )
          sub_1C32E7C(0);
        if ( System_String__StartsWith(v204, (System_String_o *)StringLiteral_1055/*"/Actor/chr"*/, 0) )
          break;
        v236 = v192->fields.affectedObjectPath;
        if ( !v236 )
          sub_1C32E7C(0);
        v237 = System_String__StartsWith(v236, (System_String_o *)StringLiteral_1066/*"/BattleActors/"*/, 0);
        if ( v237 )
          v196 = v192->fields.affectedObjectPath;
        if ( v196 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v237, v196, v238) )
            goto LABEL_326;
          if ( v194 )
          {
            v239 = System_String__IndexOf(v196, 0x2Fu, 0);
            if ( (v239 & 0x80000000) == 0 )
            {
              v240 = System_String__Substring(v196, v239 + 1, 0);
              v196 = System_String__Substring_63564468(v196, 0, v239, 0);
              goto LABEL_287;
            }
            if ( (v359 & 1) != 0 )
            {
              v240 = 0;
LABEL_287:
              v259 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              if ( !v259 )
                sub_1C32E7C(0);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v366,
                v259,
                (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v355 = v240;
              v369 = v366;
              while ( 1 )
              {
                v260 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v369,
                         (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v260 )
                  break;
                v258 = v369.fields._current;
                if ( !v369.fields._current )
                  sub_1C32E7C(v260);
                v261 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v369.fields._current, 0);
                if ( !v261 )
                  sub_1C32E7C(0);
                v262 = System_String__Replace_63565092(
                         v261,
                         (System_String_o *)StringLiteral_685/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0);
                if ( System_String__op_Equality(v196, v262, 0) )
                  goto LABEL_295;
              }
              v258 = 0;
LABEL_295:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v369,
                (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v359 = 1;
              goto LABEL_297;
            }
            v240 = 0;
            v258 = 0;
            v359 = 0;
          }
          else
          {
            v240 = 0;
            v258 = 0;
          }
LABEL_297:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v258, 0, 0) )
          {
            v258 = (Il2CppObject *)BattleSequenceManager__SearchPrefab(
                                     (BattleSequenceManager_o *)object,
                                     HIDWORD(object[10].klass),
                                     v196,
                                     v263);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v258, 0, 0) )
            {
              v266 = (System_Collections_Generic_List_object__o *)object[20].monitor;
              if ( !v266 )
                sub_1C32E7C(0);
              v267 = v266->fields._items;
              v268 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v266->fields._version;
              if ( !v267 )
                sub_1C32E7C(v266);
              v269 = v266->fields._size;
              if ( (unsigned int)v269 >= LODWORD(v267->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v266,
                  v258,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v268[4] + 192LL) + 112LL));
              }
              else
              {
                v270 = &v267->obj.klass + v269;
                v266->fields._size = v269 + 1;
                v270[4] = (Il2CppClass *)v258;
                sub_1C32BC4((CGThumbnailListItem_o *)(v270 + 4), (int32_t)v258, v264, v265);
              }
              if ( !v258 )
                sub_1C32E7C(v271);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v258, 0, 0);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v258, 0, 0) )
            goto LABEL_326;
          IsNullOrEmpty = System_String__IsNullOrEmpty(v240, 0);
          if ( !IsNullOrEmpty )
          {
            if ( !v258 )
              sub_1C32E7C(IsNullOrEmpty);
            v285 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v258, 0);
            if ( !v285 )
              sub_1C32E7C(0);
            v286 = UnityEngine_Transform__Find(v285, v240, 0);
            WellFired_USTimelineContainer__set_AffectedObject(v192, v286, 0);
            goto LABEL_326;
          }
          if ( !v258 )
            sub_1C32E7C(IsNullOrEmpty);
          v273 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v258, 0);
          WellFired_USTimelineContainer__set_AffectedObject(v192, v273, 0);
          if ( v198 )
          {
            v274 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v258, 0);
            if ( !v274 )
              sub_1C32E7C(0);
            localPosition = UnityEngine_Transform__get_localPosition(v274, 0);
            v275 = localPosition.fields.x;
            v276 = localPosition.fields.y;
            v277 = localPosition.fields.z;
            v278 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v258, 0);
            v279 = (UnityEngine_GameObject_o *)object[5].monitor;
            if ( !v279 )
              sub_1C32E7C(0);
            v280 = UnityEngine_GameObject__get_transform(v279, 0);
            if ( !v278 )
              sub_1C32E7C(v280);
            UnityEngine_Transform__set_parent(v278, v280, 0);
            v281 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v258, 0);
            if ( !v281 )
              sub_1C32E7C(0);
            v375.fields.x = v275;
            v375.fields.y = v276;
            v375.fields.z = v277;
            UnityEngine_Transform__set_localPosition(v281, v375, 0);
            BattleSequenceManager__updateCutInEvents(v282, evsa, v196, (UnityEngine_GameObject_o *)v258, v283);
            v284 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3114/*"BattleCutIn"*/, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v258, 0);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3108/*"BattleBG"*/, 0) )
              goto LABEL_326;
            v284 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3106/*"Battle2D"*/, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v258, v284, 0);
LABEL_326:
          v287 = v192->fields.affectedObjectPath;
          if ( !v287 )
            sub_1C32E7C(0);
          if ( System_String__StartsWith(v287, (System_String_o *)StringLiteral_1066/*"/BattleActors/"*/, 0) )
          {
            v288 = v192->fields.affectedObjectPath;
            if ( !v288 )
              sub_1C32E7C(0);
            v289 = System_String__Substring_63564468(v288, v288->fields._stringLength - 1, 1, 0);
            targetPosIndex = 1;
            System_Int32__TryParse(v289, &targetPosIndex, 0);
            v291 = --targetPosIndex;
            if ( v156 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach((BattleSequenceManager_o *)object, v192, v291, v290);
              BattleSequenceManager__SyncAttachedTargetPair(
                (BattleSequenceManager_o *)object,
                v192,
                targetPosIndex,
                v292);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach((BattleSequenceManager_o *)object, v192, v291, v290);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v192,
                         1,
                         (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v294 = EventCount;
          if ( !EventCount )
            sub_1C32E7C(0);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1C32E84(EventCount);
              v297 = (WellFired_USTimelineEvent_o *)v294->m_Items[j];
              if ( !v297 )
                sub_1C32E7C(EventCount);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v297, 0);
                if ( k >= (int)EventCount )
                  break;
                v299 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v297, k, 0);
                v300 = (Il2CppObject *)v299;
                if ( !v299 )
                  goto LABEL_425;
                v301 = UnityEngine_Object__get_name(v299, 0);
                if ( System_String__op_Equality(v301, (System_String_o *)StringLiteral_14869/*"USFGOAttachToParentEvent"*/, 0) )
                {
                  v302 = WellFired_USFGOAttachToParentEvent_TypeInfo->_2.naturalAligment;
                  if ( v300->klass->_2.naturalAligment < (unsigned int)v302
                    || (WellFired_USFGOAttachToParentEvent_c *)v300->klass->_2.typeHierarchy[v302 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1C3313C(v300);
                    goto LABEL_427;
                  }
                  v303 = System_String__op_Equality(
                           (System_String_o *)v300[5].klass,
                           (System_String_o *)StringLiteral_3110/*"BattleCamera"*/,
                           0);
                  if ( v303 )
                  {
                    v306 = (UnityEngine_Component_o *)object[7].klass;
                    if ( !v306 )
                      sub_1C32E7C(0);
                    v307 = UnityEngine_Component__get_transform(v306, 0);
                    v300[4].klass = (Il2CppClass *)v307;
                    sub_1C32BC4((CGThumbnailListItem_o *)&v300[4], (int32_t)v307, v308, v309);
                  }
                  else
                  {
                    if ( !v24 )
                      sub_1C32E7C(v303);
                    v310 = v24->fields._items;
                    v311 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v24->fields._version;
                    if ( !v310 )
                      sub_1C32E7C(v303);
                    v312 = v24->fields._size;
                    if ( (unsigned int)v312 >= LODWORD(v310->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v24,
                        v300,
                        *(const MethodInfo_37987BC **)(*(_QWORD *)(v311[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v313 = &v310->obj.klass + v312;
                      v24->fields._size = v312 + 1;
                      v313[4] = (Il2CppClass *)v300;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v313 + 4), (int32_t)v300, v304, v305);
                    }
                  }
                }
              }
              max_length = v294->max_length;
            }
          }
        }
      }
      v205 = (UnityEngine_GameObject_o *)object[5].klass;
      if ( !v205 )
        sub_1C32E7C(0);
      v206 = UnityEngine_GameObject__get_transform(v205, 0);
      v207 = v192->fields.affectedObjectPath;
      if ( !v207 )
        sub_1C32E7C(0);
      v208 = System_String__Replace_63565092(
               v207,
               (System_String_o *)StringLiteral_1055/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_17960/*"chr(Clone)"*/,
               0);
      if ( !v206 )
        sub_1C32E7C(v208);
      v209 = UnityEngine_Transform__Find(v206, v208, 0);
      WellFired_USTimelineContainer__set_AffectedObject(v192, v209, 0);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v192, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(AffectedObject, 0, 0) )
      {
        v211 = v192->fields.affectedObjectPath;
        if ( !v211 )
          sub_1C32E7C(0);
        v212 = System_String__StartsWith(v211, (System_String_o *)StringLiteral_1057/*"/Actor/chr/body_level_"*/, 0);
        v213 = &StringLiteral_17325/*"body_level_"*/;
        if ( v212 )
          goto LABEL_229;
        v214 = v192->fields.affectedObjectPath;
        if ( !v214 )
          sub_1C32E7C(0);
        v215 = System_String__StartsWith(v214, (System_String_o *)StringLiteral_1058/*"/Actor/chr/weapon_level_"*/, 0);
        v213 = &StringLiteral_24790/*"weapon_level_"*/;
        if ( v215 )
        {
LABEL_229:
          v216 = (System_String_o *)*v213;
          if ( *v213 )
            break;
        }
      }
    }
    v217 = (UnityEngine_GameObject_o *)object[5].klass;
    if ( !v217 )
      sub_1C32E7C(0);
    v218 = (System_String_o *)StringLiteral_1/*""*/;
    v219 = UnityEngine_GameObject__get_transform(v217, 0);
    if ( !v219 )
      sub_1C32E7C(0);
    v220 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v219, (System_String_o *)StringLiteral_17960/*"chr(Clone)"*/, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v221 = UnityEngine_Object__op_Inequality(v220, 0, 0);
    if ( v221 )
      break;
LABEL_274:
    v247 = v192->fields.affectedObjectPath;
    v248 = System_String__Concat_63518544((System_String_o *)StringLiteral_1056/*"/Actor/chr/"*/, v216, 0);
    if ( !v248 )
      sub_1C32E7C(0);
    if ( !v247 )
      sub_1C32E7C(v248);
    v249 = System_String__Substring(v247, v248->fields._stringLength, 0);
    if ( !v249 )
      sub_1C32E7C(0);
    v250 = System_String__Split(v249, 0x2Fu, 0, 0);
    if ( !v250 )
      sub_1C32E7C(0);
    if ( !LODWORD(v250->max_length) )
      sub_1C32E84(v250);
    v251 = System_String__Concat_63518544(v216, v250->m_Items[0], 0);
    v252 = (UnityEngine_GameObject_o *)object[5].klass;
    if ( !v252 )
      sub_1C32E7C(0);
    v253 = UnityEngine_GameObject__get_transform(v252, 0);
    v254 = v192->fields.affectedObjectPath;
    if ( !v254 )
      sub_1C32E7C(0);
    v255 = System_String__Replace_63565092(
             v254,
             (System_String_o *)StringLiteral_1055/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_17960/*"chr(Clone)"*/,
             0);
    if ( !v255 )
      sub_1C32E7C(0);
    v256 = System_String__Replace_63565092(v255, v251, v218, 0);
    if ( !v253 )
      sub_1C32E7C(v256);
    v257 = UnityEngine_Transform__Find(v253, v256, 0);
    WellFired_USTimelineContainer__set_AffectedObject(v192, v257, 0);
  }
  if ( !v220 )
    sub_1C32E7C(v221);
  v222 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v220, 0);
  if ( !v222 )
    sub_1C32E7C(0);
  while ( 2 )
  {
    v223 = v222->klass;
    v224 = *(unsigned __int16 *)&v222->klass->_2.rank;
    if ( *(_WORD *)&v222->klass->_2.rank )
    {
      v225 = &v223->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v225 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v224;
        v225 += 4;
        if ( !v224 )
          goto LABEL_241;
      }
      v226 = (__int64)&v223->vtable[*v225];
    }
    else
    {
LABEL_241:
      v226 = sub_1C83438(v222, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v226)(v222, *(_QWORD *)(v226 + 8)) & 1) == 0 )
    {
      v354 = v218;
      v355 = 0;
      goto LABEL_266;
    }
    v227 = v222->klass;
    v228 = *(unsigned __int16 *)&v222->klass->_2.rank;
    if ( *(_WORD *)&v222->klass->_2.rank )
    {
      v229 = (System_Collections_IEnumerator_c **)&v227->_1.interfaceOffsets->offset;
      while ( *(v229 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v228;
        v229 += 2;
        if ( !v228 )
          goto LABEL_248;
      }
      v230 = (__int64)&v227->vtable[*(_DWORD *)v229 + 1];
    }
    else
    {
LABEL_248:
      v230 = sub_1C83438(v222, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v231 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v230)(
                                        v222,
                                        *(_QWORD *)(v230 + 8));
    v232 = (UnityEngine_Object_o *)v231;
    if ( !v231 )
      sub_1C32E7C(0);
    v233 = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v231->klass->_2.naturalAligment >= (unsigned int)v233
      && (UnityEngine_Transform_c *)v231->klass->_2.typeHierarchy[v233 - 1] == UnityEngine_Transform_TypeInfo )
    {
      v234 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v231, 0);
      if ( !v234 )
        sub_1C32E7C(0);
      v235 = UnityEngine_Object__get_name(v234, 0);
      if ( !v235 )
        sub_1C32E7C(0);
      if ( !System_String__StartsWith(v235, v216, 0) )
        continue;
      v354 = UnityEngine_Object__get_name(v232, 0);
      v355 = 0;
LABEL_266:
      v241 = sub_1C32D5C(v222, System_IDisposable_TypeInfo);
      v218 = v354;
      v242 = v241;
      if ( v241 )
      {
        v243 = *(_QWORD *)v241;
        v244 = *(unsigned __int16 *)(*(_QWORD *)v241 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v241 + 302LL) )
        {
          v245 = (int *)(*(_QWORD *)(v243 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v245 - 1) != System_IDisposable_TypeInfo )
          {
            --v244;
            v245 += 4;
            if ( !v244 )
              goto LABEL_271;
          }
          v246 = v243 + 16LL * *v245 + 312;
        }
        else
        {
LABEL_271:
          v246 = sub_1C83438(v241, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v246)(v242, *(_QWORD *)(v246 + 8));
      }
      goto LABEL_274;
    }
    break;
  }
  sub_1C3313C(v231);
  v345 = v344;
  v347 = v346;
  v338 = sub_1C32D5C(v222, System_IDisposable_TypeInfo);
  v339 = v338;
  if ( v338 )
  {
    v340 = *(_QWORD *)v338;
    v341 = *(unsigned __int16 *)(*(_QWORD *)v338 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v338 + 302LL) )
    {
      v342 = (int *)(*(_QWORD *)(v340 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v342 - 1) != System_IDisposable_TypeInfo )
      {
        --v341;
        v342 += 4;
        if ( !v341 )
          goto LABEL_459;
      }
      v343 = v340 + 16LL * *v342 + 312;
    }
    else
    {
LABEL_459:
      v343 = sub_1C83438(v338, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v343)(v339, *(_QWORD *)(v343 + 8));
  }
  if ( v355 )
    sub_1C32E74(v355);
  if ( v345 != 1 )
  {
    v348 = sub_1C32D5C(v364, System_IDisposable_TypeInfo);
    v349 = v348;
    if ( v348 )
    {
      v350 = *(_QWORD *)v348;
      v351 = *(unsigned __int16 *)(*(_QWORD *)v348 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v348 + 302LL) )
      {
        v352 = (int *)(*(_QWORD *)(v350 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v352 - 1) != System_IDisposable_TypeInfo )
        {
          --v351;
          v352 += 4;
          if ( !v351 )
            goto LABEL_506;
        }
        v353 = v350 + 16LL * *v352 + 312;
      }
      else
      {
LABEL_506:
        v353 = sub_1C83438(v348, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v353)(v349, *(_QWORD *)(v353 + 8));
    }
    sub_1D1BD54();
  }
  v315 = *(_QWORD *)__cxa_begin_catch(v347);
  __cxa_end_catch();
LABEL_366:
  seqObject = sub_1C32D5C(v364, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v316 = *(_QWORD *)seqObject;
    v317 = seqObject;
    v318 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v319 = (int *)(*(_QWORD *)(v316 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v319 - 1) != System_IDisposable_TypeInfo )
      {
        --v318;
        v319 += 4;
        if ( !v318 )
          goto LABEL_371;
      }
      v320 = v316 + 16LL * *v319 + 312;
    }
    else
    {
LABEL_371:
      v320 = sub_1C83438(seqObject, System_IDisposable_TypeInfo, 0);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v320)(v317, *(_QWORD *)(v320 + 8));
  }
  if ( v315 )
    sub_1C32E74(v315);
  if ( !v24 )
    goto LABEL_418;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v366,
    v24,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v366;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          (BattlePerformance_o *)object[4].klass,
          (UnityEngine_GameObject_o *)object[5].klass,
          (System_Collections_Generic_List_GameObject__o *)object[20].monitor,
          0) )
  {
    if ( !m.fields._current )
      sub_1C32E7C(0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v356, 0, 0);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v356 )
      goto LABEL_418;
    if ( LOBYTE(v356[34].monitor) )
      goto LABEL_409;
    v321 = v356[33].klass;
    if ( !v321 )
      goto LABEL_418;
    if ( !HIDWORD(v321->vtable[2].methodPtr) && !BattleActorControl__isNoVoice((BattleActorControl_o *)v356, 0) )
    {
      v322 = (UnityEngine_Object_o *)object[4].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v322, 0, 0);
      if ( (seqObject & 1) != 0 )
      {
        v323 = object[4].klass;
        if ( !v323 )
          goto LABEL_418;
        v324 = *(UnityEngine_Object_o **)&v323->_1.byval_arg.bits;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v324, 0, 0) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoiceMaster___);
            LOBYTE(object[22].monitor) = 0;
            v326 = (int32_t)object[10].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   (BattleSequenceManager_o *)object,
                   (VoiceMaster_o *)MasterData_object,
                   v326,
                   FileName,
                   v328) )
            {
              LOBYTE(object[22].monitor) = 1;
            }
            v329 = (int32_t)object[10].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v330 = Voice__getFileName(111, 0);
            BattleSequenceManager__addServantVoicePlayed(
              (BattleSequenceManager_o *)object,
              (VoiceMaster_o *)MasterData_object,
              v329,
              v330,
              v331);
            v332 = v356[33].klass;
            if ( v332 )
            {
              v333 = (int)v332->vtable[26].method;
              v334 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v334 = BalanceConfig_TypeInfo;
              }
              if ( v333 == v334->static_fields->TreasureDeviceIdMashu3 )
              {
                v335 = (int32_t)object[10].klass;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v336 = Voice__getFileName(121, 0);
                BattleSequenceManager__addServantVoicePlayed(
                  (BattleSequenceManager_o *)object,
                  (VoiceMaster_o *)MasterData_object,
                  v335,
                  v336,
                  v337);
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


void BattleSequenceManager__startFadeBattleUI(
        BattleSequenceManager_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  BattleSequenceManager__FadeBattleUI(this, time, targetAlpha, method);
  if ( targetAlpha >= 1.0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_1C32E7C(0);
    BattlePerformance__OnFadeInBattleUI(performance, 0);
  }
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

  if ( (byte_4C3A564 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4C3A564 = 1;
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
                                                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
                                                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
    sub_1C32E7C(battleTargetList);
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

  if ( (byte_4C3A568 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    sub_1C32C20(&StringLiteral_14521/*"Tmp_Target"*/);
    byte_4C3A568 = 1;
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
                                                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
      sub_1C32E7C(battleTargetList);
    }
    v8 = (UnityEngine_GameObject_o *)sub_1C32E6C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v8, (System_String_o *)StringLiteral_14521/*"Tmp_Target"*/, 0);
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
  bool v9; // w21
  Il2CppObject *current; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int v13; // w19
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3A54F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__);
    this = (BattleSequenceManager_o *)sub_1C32C20(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
    byte_4C3A54F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !evs )
    sub_1C32E7C(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v9 = v8;
    if ( !v8 )
      break;
    current = v15.fields._current;
    if ( !v15.fields._current )
      sub_1C32E7C(v8);
    if ( System_String__op_Equality(
           *(System_String_o **)((char *)&v15.fields._current->klass + (unsigned __int64)&dword_40),
           cutInName,
           0) )
    {
      *(_QWORD *)((char *)&word_38 + (_QWORD)current) = obj;
      sub_1C32BC4((CGThumbnailListItem_o *)((char *)&word_38 + (_QWORD)current), (int32_t)obj, v11, v12);
      v13 = 4;
      goto LABEL_10;
    }
  }
  v13 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v9 && v13 == 4;
}


void BattleSequenceManager_BattleTarget___ctor(BattleSequenceManager_BattleTarget_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_4C313D7 )
  {
    sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
    byte_4C313D7 = 1;
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
      sub_1C32E7C(targetActor);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0);
  }
  this->fields.targetActor = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetActor, 0, v2, v3);
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
    sub_1C32E7C(targetActor);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetActor, (int32_t)bac, index, method);
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
  if ( (byte_4C3A6B8 & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__108_o *)sub_1C32C20(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C3A6B8 = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C32E6C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0);
    v4->fields._wait_5__2 = v7;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1C32E7C(this);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C32BC4(p__2__current, (int32_t)wait_5__2, v2, v3);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BattleSequenceManager__WaitEndSequence_d__108_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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

  if ( (byte_4C3A6B2 & 1) == 0 )
  {
    sub_1C32C20(&BattleSequenceManager___c_TypeInfo);
    byte_4C3A6B2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleSequenceManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return System_Single__CompareTo_65113176(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
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
    sub_1C32E7C(this);
  return System_Single__CompareTo_65113176(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool BattleSequenceManager___c___setup_b__88_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, args->fields._BgmName_k__BackingField, 0);
}


void BattleSequenceManager___c__DisplayClass117_0___ctor(
        BattleSequenceManager___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSequenceManager___c__DisplayClass117_0___SetupTargetInfo_b__0(
        BattleSequenceManager___c__DisplayClass117_0_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass117_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C3A6B3 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass117_0_o *)sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C3A6B3 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass117_0_o *)v4->fields.targetList) == 0 )
    sub_1C32E7C(this);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  if ( (byte_4C3A6B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__);
    sub_1C32C20(&StringLiteral_13036/*"StandardCutIn"*/);
    this = (BattleSequenceManager___c__DisplayClass75_0_o *)sub_1C32C20(&ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    byte_4C3A6B4 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass75_0_o *)AssetData__GetObject_object__51111776(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13036/*"StandardCutIn"*/,
                                                                  (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.CutInPrefab, (int32_t)this, v6, v7),
        (this = (BattleSequenceManager___c__DisplayClass75_0_o *)v4->fields.__4__this) == 0) )
  {
    sub_1C32E7C(this);
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
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1C32E6C(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass75_0__loadSequence_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v16, v17);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  struct BattleSequenceManager_o *v15; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x22
  System_Action_o *v19; // x23
  struct BattleSequenceManager_o *v20; // x8
  struct BattleSequenceManager_o *v21; // x8
  _DWORD *v22; // x20
  int v23; // w8
  int v24; // w9
  __int64 v25; // x10
  struct BattleSequenceManager_o *v26; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3A6B5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__);
    sub_1C32C20(&BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
    sub_1C32C20(&StringLiteral_9518/*"NoblePhantasm_"*/);
    byte_4C3A6B5 = 1;
  }
  v5 = sub_1C32E6C(BattleSequenceManager___c__DisplayClass75_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 16) = obj;
  v9 = (__int64 *)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)obj, v10, v11);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  v14 = *v9;
  *((_QWORD *)_4__this + 9) = *v9;
  sub_1C32BC4((CGThumbnailListItem_o *)((char *)_4__this + 72), v14, v12, v13);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v15 = this->fields.__4__this;
    if ( !v15 )
      goto LABEL_26;
    overwriteSvtVoiceId = v15->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v17 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0);
  v18 = System_String__Concat_63518544((System_String_o *)StringLiteral_9518/*"NoblePhantasm_"*/, v17, 0);
  v19 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__2__,
    0);
  if ( !Instance )
    goto LABEL_26;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v18, v19, 1, 0);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_26;
  _4__this = v20->fields.seqObject;
  if ( !_4__this )
    goto LABEL_26;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_26;
  v22 = _4__this;
  v21->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v22 )
    goto LABEL_26;
  v23 = v22[6];
  if ( v23 < 1 )
    return;
  v24 = 0;
  while ( 1 )
  {
    if ( v23 == v24 )
      sub_1C32E84(_4__this);
    v25 = *(_QWORD *)&v22[2 * v24 + 8];
    if ( !v25 )
      goto LABEL_26;
    if ( !*(_DWORD *)(v25 + 64) && *(_BYTE *)(v25 + 69) )
      break;
    if ( v23 == ++v24 )
      return;
  }
  v26 = this->fields.__4__this;
  if ( !v26 )
LABEL_26:
    sub_1C32E7C(_4__this);
  v26->fields.isNoDamageMotionInDamageNoble = 1;
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
  if ( (byte_4C3A6B6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
    sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A6B6 = 1;
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
  this = (BattleSequenceManager___c__DisplayClass75_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
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
        sub_1C32E84(this);
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
    sub_1C32E7C(this);
  }
LABEL_15:
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v14, v15);
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
  if ( (byte_4C3A6B7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)sub_1C32C20(&Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__);
    byte_4C3A6B7 = 1;
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
                                                            (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
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
                                                            (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
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
                                 (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
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
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&v13->fields.standFigure, (int32_t)MeshLocal, v19, v20);
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
      _9__4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass75_1__loadSequence_b__4__,
        0);
      v2->fields.__9__4 = _9__4;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v52, v53);
    }
    if ( !v47 )
LABEL_73:
      sub_1C32E7C(this);
    this = (BattleSequenceManager___c__DisplayClass75_1_o *)UIStandFigureM__SetCharacter_43939848(
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A79F9C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A79F7C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A79F34;
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
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
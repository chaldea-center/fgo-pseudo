void __fastcall SelectGrandServantComponent___ctor(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *v8; // x20
  System_Collections_Generic_List_object__o *v9; // x20

  if ( (byte_4B172BB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect____ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_GrandServantIconComponent__TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_5839/*"Effect/SelectGrandServant"*/, v6);
    sub_1BCAFF8(&StringLiteral_17139/*"bit_select_grand_servant"*/, v7);
    byte_4B172BB = 1;
  }
  this->fields.figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_BE30E0;
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect____ctor__);
  this->fields.figureCollectDictionary = (struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *)v8;
  sub_1BCAF9C(&this->fields.figureCollectDictionary);
  this->fields.GrandServantSelectEffectPrefabFolderPath = (struct System_String_o *)StringLiteral_5839/*"Effect/SelectGrandServant"*/;
  sub_1BCAF9C(&this->fields.GrandServantSelectEffectPrefabFolderPath);
  this->fields.GrandServantSelectEffectPrefabName = (struct System_String_o *)StringLiteral_17139/*"bit_select_grand_servant"*/;
  sub_1BCAF9C(&this->fields.GrandServantSelectEffectPrefabName);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GrandServantIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GrandServantIconComponent___ctor__);
  this->fields.cachedIconList = (struct System_Collections_Generic_List_GrandServantIconComponent__o *)v9;
  sub_1BCAF9C(&this->fields.cachedIconList);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SelectGrandServantComponent__Awake(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SelectGrandServantComponent__CleanUpStandFigures(
        SelectGrandServantComponent_o *this,
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
  struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *figureCollectDictionary; // x0
  __int64 v15; // x1
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  UIStandFigureR_o *monitor; // x0
  __int64 v20; // x1
  UIStandFigureR_o *v21; // x0
  Il2CppObject *Instance; // x20
  UnityEngine_Coroutine_o *waitLoadCoroutine; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4B172A8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___GetEnumerator__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___get_Current__,
      v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__List_StandFigureCollect___get_Value__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v12);
    sub_1BCAFF8(&StandFigureCamera_TypeInfo, v13);
    byte_4B172A8 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  memset(&v26, 0, sizeof(v26));
  figureCollectDictionary = this->fields.figureCollectDictionary;
  if ( !figureCollectDictionary )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v24,
    (System_Collections_Generic_Dictionary_int__object__o *)figureCollectDictionary,
    (const MethodInfo_332171C *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___GetEnumerator__);
  v26 = v24;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v26,
            (const MethodInfo_3472D10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___MoveNext__) )
  {
    if ( !v26.fields._current.fields.value )
      sub_1BCB254(0LL, v15);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)v26.fields._current.fields.value,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    *(_OWORD *)&v25.fields._list = *(_OWORD *)&v24.fields._dictionary;
    v25.fields._current = v24.fields._current.fields.key;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v16 )
        break;
      current = v25.fields._current;
      if ( !v25.fields._current )
        sub_1BCB254(v16, v17);
      monitor = (UIStandFigureR_o *)v25.fields._current[1].monitor;
      if ( !monitor )
        sub_1BCB254(0LL, v17);
      UIStandFigureR__ReleaseBodyRenderTexture(monitor, 0LL);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)current[1].monitor, 0, 0LL);
      v21 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v21 )
        sub_1BCB254(0LL, v20);
      UIStandFigureR__KillLoading(v21, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v26,
    (const MethodInfo_3472E34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___Dispose__);
  StandFigureManager__ReleaseCharaFigure(0LL);
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
  StandFigureCamera__ReleaseRenderTexturesForEffects(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  figureCollectDictionary = (struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)figureCollectDictionary & 1) != 0 )
  {
    if ( Instance )
    {
      StandFigureManager__Reboot((StandFigureManager_o *)Instance, 0LL);
      StandFigureManager__ResetCameraRenderState((StandFigureManager_o *)Instance, 0LL);
      goto LABEL_24;
    }
LABEL_28:
    sub_1BCB254(figureCollectDictionary, method);
  }
LABEL_24:
  waitLoadCoroutine = this->fields.waitLoadCoroutine;
  if ( waitLoadCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_70122268((UnityEngine_MonoBehaviour_o *)this, waitLoadCoroutine, 0LL);
    this->fields.waitLoadCoroutine = 0LL;
    sub_1BCAF9C(&this->fields.waitLoadCoroutine);
  }
}


int32_t __fastcall SelectGrandServantComponent__CompareUserServant(
        SelectGrandServantComponent_o *this,
        UserServantEntity_o *servantEntityA,
        UserServantEntity_o *servantEntityB,
        const MethodInfo *method)
{
  int32_t result; // w0
  int32_t lv; // w8
  int32_t v8; // w9
  int32_t SkillMaxCount; // w21
  int32_t CollectionNo; // w20

  if ( !servantEntityB
    || (this = (SelectGrandServantComponent_o *)UserServantEntity__getFriendshipRank(servantEntityB, 0LL),
        !servantEntityA) )
  {
    sub_1BCB254(this, servantEntityA);
  }
  result = (_DWORD)this - UserServantEntity__getFriendshipRank(servantEntityA, 0LL);
  if ( !result )
  {
    lv = servantEntityB->fields.lv;
    v8 = servantEntityA->fields.lv;
    result = lv - v8;
    if ( lv == v8 )
    {
      SkillMaxCount = UserServantEntity__GetSkillMaxCount(servantEntityB, 0LL);
      result = SkillMaxCount - UserServantEntity__GetSkillMaxCount(servantEntityA, 0LL);
      if ( !result )
      {
        CollectionNo = UserServantEntity__getCollectionNo(servantEntityA, 0LL);
        return CollectionNo - UserServantEntity__getCollectionNo(servantEntityB, 0LL);
      }
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectGrandServantComponent__DisplayFigureWithEffect(
        SelectGrandServantComponent_o *this,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *figureCollectDictionary; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *shinyInstance; // x20
  Il2CppObject *v15; // x19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_4B172AB & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__,
      *(_QWORD *)&needNum);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&StandFigureCamera_TypeInfo, v10);
    byte_4B172AB = 1;
  }
  value = 0LL;
  memset(&i, 0, sizeof(i));
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.figureCollectDictionary;
  if ( !figureCollectDictionary )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          figureCollectDictionary,
          needNum,
          &value,
          (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__) )
    return;
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  for ( i = v16; ; BasicHelper__SetActiveSafely((UnityEngine_Component_o *)i.fields._current[1].monitor, 1, 0LL) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v12 )
      break;
    if ( !i.fields._current )
      sub_1BCB254(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  shinyInstance = (UnityEngine_Object_o *)this->fields.shinyInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Implicit(shinyInstance, 0LL) )
    goto LABEL_16;
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.shinyInstance;
  if ( !figureCollectDictionary
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)figureCollectDictionary, 0, 0LL),
        (figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.shinyInstance) == 0LL) )
  {
LABEL_21:
    sub_1BCB254(figureCollectDictionary, *(_QWORD *)&needNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)figureCollectDictionary, 1, 0LL);
LABEL_16:
  v15 = value;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
  StandFigureCamera__SetupEffects((System_Collections_Generic_List_StandFigureCollect__o *)v15, 0LL);
}


void __fastcall SelectGrandServantComponent__EndGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Action_UserServantEntity__o *effectEndCallback; // x8

  SelectGrandServantComponent__ReleaseGrandServantSelectEffect(this, method);
  effectEndCallback = this->fields.effectEndCallback;
  if ( !effectEndCallback )
    sub_1BCB254(v3, v4);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct UserServantEntity_o *, _QWORD))effectEndCallback->fields.m_target)(
    effectEndCallback->fields.original_method_info,
    this->fields.selectUserServantEntity,
    *(_QWORD *)&effectEndCallback->fields.extra_arg);
}


void __fastcall SelectGrandServantComponent__LoadGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *GrandServantSelectEffectPrefabFolderPath; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4B172B4 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    sub_1BCAFF8(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_1BCAFF8(&Method_SelectGrandServantComponent__LoadGrandServantSelectEffect_b__63_0__, v4);
    byte_4B172B4 = 1;
  }
  GrandServantSelectEffectPrefabFolderPath = this->fields.GrandServantSelectEffectPrefabFolderPath;
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCB244(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v6,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent__LoadGrandServantSelectEffect_b__63_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(GrandServantSelectEffectPrefabFolderPath, v6, 1, 0LL) )
    SelectGrandServantComponent__EndGrandServantSelectEffect(this, v7);
}


void __fastcall SelectGrandServantComponent__OnAfterGenerateFigure(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x19

  if ( (byte_4B172AA & 1) == 0 )
  {
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4B172AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1BCB254(Instance, v4);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SelectGrandServantComponent__OnCenterFinished(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  SelectGrandServantComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8
  const MethodInfo *v9; // x2
  struct UICenterOnChild_o *centerChild; // x8
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *currentIcon; // x20
  struct GrandServantIconComponent_o **p_currentIcon; // x20
  System_Collections_Generic_List_object__o *v14; // x21
  System_Action_object__o *v15; // x22
  const MethodInfo *v16; // x2

  v2 = this;
  if ( (byte_4B172A7 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_GrandServantIconComponent__TypeInfo, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_GrandServantIconComponent___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    this = (SelectGrandServantComponent_o *)sub_1BCAFF8(
                                              &Method_SelectGrandServantComponent__OnCenterFinished_b__48_0__,
                                              v7);
    byte_4B172A7 = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_17;
  this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
  if ( !this )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, cachedIconList->fields._size > 1, 0LL);
  SelectGrandServantComponent__SetBackButtonColliderEnable(v2, 1, v9);
  centerChild = v2->fields.centerChild;
  if ( !centerChild )
    goto LABEL_17;
  this = (SelectGrandServantComponent_o *)centerChild->fields.mCenteredObject;
  if ( !this )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_GrandServantIconComponent___);
  if ( v2->fields.isDragging )
    goto LABEL_11;
  currentIcon = (UnityEngine_Object_o *)v2->fields.currentIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, currentIcon, 0LL) )
  {
LABEL_11:
    v2->fields.currentIcon = (struct GrandServantIconComponent_o *)Component_object;
    p_currentIcon = &v2->fields.currentIcon;
    v2->fields.isDragging = 0;
    sub_1BCAF9C(&v2->fields.currentIcon);
    this = (SelectGrandServantComponent_o *)v2->fields.currentIcon;
    if ( this )
    {
      GrandServantIconComponent__OnSelected((GrandServantIconComponent_o *)this, method);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v2->fields.glowEffect, 1, 0LL);
      this = (SelectGrandServantComponent_o *)v2->fields.glowEffect;
      if ( this )
      {
        NGUIGlow__UpdateTexture((NGUIGlow_o *)this, 0LL);
        v14 = (System_Collections_Generic_List_object__o *)v2->fields.cachedIconList;
        v15 = (System_Action_object__o *)sub_1BCB244(System_Action_GrandServantIconComponent__TypeInfo);
        System_Action_object____ctor(
          v15,
          (Il2CppObject *)v2,
          Method_SelectGrandServantComponent__OnCenterFinished_b__48_0__,
          0LL);
        if ( v14 )
        {
          System_Collections_Generic_List_object___ForEach(
            v14,
            (System_Action_T__o *)v15,
            (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
          this = (SelectGrandServantComponent_o *)v2->fields.figureRoot;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            if ( *p_currentIcon )
            {
              SelectGrandServantComponent__SetFigure(
                v2,
                (*p_currentIcon)->fields._UserServantEntity_k__BackingField,
                v16);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_1BCB254(this, method);
  }
}


void __fastcall SelectGrandServantComponent__OnClickBack(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B172AE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SelectGrandServantComponent_OnClickBack__, method);
    byte_4B172AE = 1;
  }
  v3 = Method_SelectGrandServantComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_SelectGrandServantComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  ActionExtensions__Call(this->fields.onClickBackAction, 0LL);
}


void __fastcall SelectGrandServantComponent__OnClickDecide(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  SelectGrandConfirmServantDialog_o *confirmServantDialog; // x20
  const MethodInfo *v8; // x1
  UserServantEntity_o *CurrentUserServantEntity; // x21
  SelectGrandConfirmServantDialog_ClickDelegate_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B172B1 & 1) == 0 )
  {
    sub_1BCAFF8(&SelectGrandConfirmServantDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&Method_SelectGrandServantComponent_OnClickDecide__, v3);
    sub_1BCAFF8(&Method_SelectGrandServantComponent__OnClickDecide_b__60_0__, v4);
    byte_4B172B1 = 1;
  }
  v5 = Method_SelectGrandServantComponent_OnClickDecide__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_SelectGrandServantComponent_OnClickDecide__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  confirmServantDialog = this->fields.confirmServantDialog;
  CurrentUserServantEntity = SelectGrandServantComponent__get_CurrentUserServantEntity(this, v8);
  v10 = (SelectGrandConfirmServantDialog_ClickDelegate_o *)sub_1BCB244(SelectGrandConfirmServantDialog_ClickDelegate_TypeInfo);
  SelectGrandConfirmServantDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent__OnClickDecide_b__60_0__,
    0LL);
  if ( !confirmServantDialog )
    sub_1BCB254(v11, v12);
  SelectGrandConfirmServantDialog__OpenConfirm(confirmServantDialog, CurrentUserServantEntity, v10, 0LL);
}


void __fastcall SelectGrandServantComponent__OnClickLeftArrow(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  SelectGrandServantComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t v11; // w20
  struct System_Collections_Generic_List_GrandServantIconComponent__o *v12; // x8
  UICenterOnChild_o *centerChild; // x19

  v2 = this;
  if ( (byte_4B172B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__, v4);
    this = (SelectGrandServantComponent_o *)sub_1BCAFF8(&Method_SelectGrandServantComponent_OnClickLeftArrow__, v5);
    byte_4B172B0 = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_21;
  if ( cachedIconList->fields._size > 1 && !v2->fields.isDragging )
  {
    this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
    if ( this )
    {
      UIScrollView__Press((UIScrollView_o *)this, 0, 0LL);
      this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        v9 = Method_SelectGrandServantComponent_OnClickLeftArrow__;
        if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickLeftArrow__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1BCB010(Method_SelectGrandServantComponent_OnClickLeftArrow__);
        v10 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0LL);
        this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
        if ( this )
        {
          this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___IndexOf(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)v2->fields.currentIcon,
                                                    (const MethodInfo_36BA870 *)Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
          v11 = (_DWORD)this - 1;
          if ( (int)this - 1 < 0 )
          {
            v12 = v2->fields.cachedIconList;
            if ( !v12 )
              goto LABEL_21;
            v11 = v12->fields._size - 1;
          }
          SelectGrandServantComponent__ResetDisplay(v2, method);
          this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
          if ( this )
          {
            centerChild = v2->fields.centerChild;
            this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v11,
                                                      (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
            if ( this )
            {
              this = (SelectGrandServantComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
              if ( centerChild )
              {
                UICenterOnChild__CenterOn_48341632(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BCB254(this, method);
  }
  v7 = Method_SelectGrandServantComponent_OnClickLeftArrow__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickLeftArrow__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCB010(Method_SelectGrandServantComponent_OnClickLeftArrow__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0LL);
}


void __fastcall SelectGrandServantComponent__OnClickRightArrow(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  SelectGrandServantComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct System_Collections_Generic_List_GrandServantIconComponent__o *v11; // x8
  int32_t size; // w21
  int v13; // w20
  UICenterOnChild_o *centerChild; // x19

  v2 = this;
  if ( (byte_4B172AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__, v4);
    this = (SelectGrandServantComponent_o *)sub_1BCAFF8(&Method_SelectGrandServantComponent_OnClickRightArrow__, v5);
    byte_4B172AF = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_19;
  if ( cachedIconList->fields._size > 1 && !v2->fields.isDragging )
  {
    this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
    if ( this )
    {
      UIScrollView__Press((UIScrollView_o *)this, 0, 0LL);
      this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        v9 = Method_SelectGrandServantComponent_OnClickRightArrow__;
        if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickRightArrow__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1BCB010(Method_SelectGrandServantComponent_OnClickRightArrow__);
        v10 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0LL);
        this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
        if ( this )
        {
          this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___IndexOf(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)v2->fields.currentIcon,
                                                    (const MethodInfo_36BA870 *)Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
          v11 = v2->fields.cachedIconList;
          if ( v11 )
          {
            size = v11->fields._size;
            v13 = (int)this;
            SelectGrandServantComponent__ResetDisplay(v2, method);
            this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
            if ( this )
            {
              centerChild = v2->fields.centerChild;
              this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        (v13 + 1) % size,
                                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
              if ( this )
              {
                this = (SelectGrandServantComponent_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
                if ( centerChild )
                {
                  UICenterOnChild__CenterOn_48341632(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BCB254(this, method);
  }
  v7 = Method_SelectGrandServantComponent_OnClickRightArrow__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickRightArrow__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCB010(Method_SelectGrandServantComponent_OnClickRightArrow__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0LL);
}


void __fastcall SelectGrandServantComponent__OnDecideGrandServantSelect(
        SelectGrandServantComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  UnityEngine_GameObject_o *bitEffectRoot; // x0
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v13; // x8
  CommonUI_o *v14; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_4B172B3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, userServantEntity);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_SelectGrandServantComponent___c__DisplayClass62_0__OnDecideGrandServantSelect_b__0__, v7);
    sub_1BCAFF8(&SelectGrandServantComponent___c__DisplayClass62_0_TypeInfo, v8);
    byte_4B172B3 = 1;
  }
  v9 = (Il2CppObject *)sub_1BCB244(SelectGrandServantComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v9[1]);
  v9[1].monitor = userServantEntity;
  sub_1BCAF9C(&v9[1].monitor);
  bitEffectRoot = this->fields.bitEffectRoot;
  if ( !bitEffectRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(bitEffectRoot, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    v9,
    Method_SelectGrandServantComponent___c__DisplayClass62_0__OnDecideGrandServantSelect_b__0__,
    0LL);
  if ( !v14 )
LABEL_9:
    sub_1BCB254(bitEffectRoot, v11);
  CommonUI__maskFadeout(v14, 1, DEFAULT_FADE_TIME, v16, 0LL);
}


void __fastcall SelectGrandServantComponent__OnDisable(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_auroraInstance; // x20
  UnityEngine_Object_o *auroraInstance; // x21
  UnityEngine_Object_o *v5; // x21
  struct UnityEngine_GameObject_o **p_shinyInstance; // x20
  UnityEngine_Object_o *shinyInstance; // x21
  UnityEngine_Object_o *v8; // x21
  struct UnityEngine_GameObject_o **p_particleInstanceBack; // x20
  UnityEngine_Object_o *particleInstanceBack; // x21
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_GameObject_o **p_particleInstanceFront; // x20
  UnityEngine_Object_o *particleInstanceFront; // x21
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *confirmServantDialog; // x20
  struct SelectGrandConfirmServantDialog_o **p_confirmServantDialog; // x19
  UnityEngine_Object_o *v17; // x20

  if ( (byte_4B172B9 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B172B9 = 1;
  }
  SelectGrandServantComponent__CleanUpStandFigures(this, method);
  p_auroraInstance = &this->fields.auroraInstance;
  auroraInstance = (UnityEngine_Object_o *)this->fields.auroraInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(auroraInstance, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)*p_auroraInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v5, 0LL);
    *p_auroraInstance = 0LL;
    sub_1BCAF9C(&this->fields.auroraInstance);
  }
  p_shinyInstance = &this->fields.shinyInstance;
  shinyInstance = (UnityEngine_Object_o *)this->fields.shinyInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shinyInstance, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)*p_shinyInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v8, 0LL);
    *p_shinyInstance = 0LL;
    sub_1BCAF9C(&this->fields.shinyInstance);
  }
  p_particleInstanceBack = &this->fields.particleInstanceBack;
  particleInstanceBack = (UnityEngine_Object_o *)this->fields.particleInstanceBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(particleInstanceBack, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Object_o *)*p_particleInstanceBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v11, 0LL);
    *p_particleInstanceBack = 0LL;
    sub_1BCAF9C(&this->fields.particleInstanceBack);
  }
  p_particleInstanceFront = &this->fields.particleInstanceFront;
  particleInstanceFront = (UnityEngine_Object_o *)this->fields.particleInstanceFront;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(particleInstanceFront, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Object_o *)*p_particleInstanceFront;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v14, 0LL);
    *p_particleInstanceFront = 0LL;
    sub_1BCAF9C(&this->fields.particleInstanceFront);
  }
  confirmServantDialog = (UnityEngine_Object_o *)this->fields.confirmServantDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmServantDialog, 0LL, 0LL) )
  {
    p_confirmServantDialog = &this->fields.confirmServantDialog;
    v17 = (UnityEngine_Object_o *)*p_confirmServantDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v17, 0LL);
    *p_confirmServantDialog = 0LL;
    sub_1BCAF9C(p_confirmServantDialog);
  }
}


void __fastcall SelectGrandServantComponent__OnDragStarted(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  this->fields.isDragging = 1;
  SelectGrandServantComponent__ResetDisplay(this, method);
}


void __fastcall SelectGrandServantComponent__OnEnable(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  Il2CppObject *ComponentInChildren_object; // x20
  UnityEngine_Transform_o *Child; // x20
  Il2CppObject *auroraEffect; // x21

  if ( (byte_4B172BA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentInChildren_UIStandFigureRender___, method);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v5);
    byte_4B172BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_19;
    ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                   (UnityEngine_Component_o *)Instance,
                                   1,
                                   (const MethodInfo_30116F8 *)Method_UnityEngine_Component_GetComponentInChildren_UIStandFigureRender___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)ComponentInChildren_object,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
      if ( ComponentInChildren_object )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0LL);
        if ( transform )
        {
          Child = UnityEngine_Transform__GetChild(transform, 0, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Child, 0LL, 0LL) )
          {
            auroraEffect = (Il2CppObject *)this->fields.auroraEffect;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this->fields.auroraInstance = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51002592(
                                                                               auroraEffect,
                                                                               Child,
                                                                               (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
            sub_1BCAF9C(&this->fields.auroraInstance);
            this->fields.shinyInstance = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51002592(
                                                                              (Il2CppObject *)this->fields.shinyEffect,
                                                                              Child,
                                                                              (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
            sub_1BCAF9C(&this->fields.shinyInstance);
            this->fields.particleInstanceFront = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51002592(
                                                                                      (Il2CppObject *)this->fields.particleEffectFront,
                                                                                      Child,
                                                                                      (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
            sub_1BCAF9C(&this->fields.particleInstanceFront);
            this->fields.particleInstanceBack = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51002592(
                                                                                     (Il2CppObject *)this->fields.particleEffectBack,
                                                                                     Child,
                                                                                     (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
            sub_1BCAF9C(&this->fields.particleInstanceBack);
          }
          return;
        }
      }
LABEL_19:
      sub_1BCB254(transform, v8);
    }
  }
}


void __fastcall SelectGrandServantComponent__OnEndGrandSetupRequest(
        SelectGrandServantComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  BaseDialog_o *confirmServantDialog; // x20
  System_Action_o *v11; // x21

  if ( (byte_4B172B2 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, result);
    sub_1BCAFF8(&Method_SelectGrandServantComponent__OnEndGrandSetupRequest_b__61_0__, v5);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v7);
    byte_4B172B2 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL) )
  {
    confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
    v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SelectGrandServantComponent__OnEndGrandSetupRequest_b__61_0__,
      0LL);
    if ( confirmServantDialog )
      goto LABEL_8;
LABEL_9:
    sub_1BCB254(Instance, v9);
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
  if ( !confirmServantDialog )
    goto LABEL_9;
  v11 = 0LL;
LABEL_8:
  BaseDialog__SafeClose(confirmServantDialog, v11, 0LL);
}


void __fastcall SelectGrandServantComponent__OnValidate(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B172A3 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, method);
    byte_4B172A3 = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__get_isPlaying(0LL);
}


void __fastcall SelectGrandServantComponent__PlayGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *grandServantSelectEffectAssetData; // x0
  Il2CppObject *Object_object__50315216; // x20
  UnityEngine_GameObject_o *bitEffectRoot; // x0
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v12; // x4
  struct SelectGrandServantEffectComponent_o *selectGrandServantEffectComponent; // x20
  System_Action_o *v14; // x21
  struct System_Action_o **p_endAct; // x20

  if ( (byte_4B172B5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, v3);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SelectGrandServantEffectComponent___, v4);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&Method_SelectGrandServantComponent_EndGrandServantSelectEffect__, v7);
    byte_4B172B5 = 1;
  }
  grandServantSelectEffectAssetData = this->fields.grandServantSelectEffectAssetData;
  if ( !grandServantSelectEffectAssetData )
    goto LABEL_7;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              grandServantSelectEffectAssetData,
                              this->fields.GrandServantSelectEffectPrefabName,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50315216, 0LL, 0LL) )
  {
    bitEffectRoot = this->fields.bitEffectRoot;
    if ( !bitEffectRoot )
      goto LABEL_15;
    transform = UnityEngine_GameObject__get_transform(bitEffectRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this->fields.grandServantSelectEffectObj = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51002592(
                                                                                    Object_object__50315216,
                                                                                    transform,
                                                                                    (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
    sub_1BCAF9C(&this->fields.grandServantSelectEffectObj);
    bitEffectRoot = this->fields.grandServantSelectEffectObj;
    if ( !bitEffectRoot
      || (this->fields.selectGrandServantEffectComponent = (struct SelectGrandServantEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(bitEffectRoot, (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SelectGrandServantEffectComponent___),
          sub_1BCAF9C(&this->fields.selectGrandServantEffectComponent),
          (bitEffectRoot = (UnityEngine_GameObject_o *)this->fields.selectGrandServantEffectComponent) == 0LL)
      || (SelectGrandServantEffectComponent__Setup(
            (SelectGrandServantEffectComponent_o *)bitEffectRoot,
            this->fields.beforeUserServantEntity,
            this->fields.selectUserServantEntity,
            this->fields.grandGraphId,
            v12),
          selectGrandServantEffectComponent = this->fields.selectGrandServantEffectComponent,
          v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
          System_Action___ctor(
            v14,
            (Il2CppObject *)this,
            Method_SelectGrandServantComponent_EndGrandServantSelectEffect__,
            0LL),
          !selectGrandServantEffectComponent) )
    {
LABEL_15:
      sub_1BCB254(bitEffectRoot, method);
    }
    selectGrandServantEffectComponent->fields.endAct = v14;
    p_endAct = &selectGrandServantEffectComponent->fields.endAct;
    *((_BYTE *)p_endAct - 8) = 1;
    sub_1BCAF9C(p_endAct);
  }
  else
  {
LABEL_7:
    SelectGrandServantComponent__EndGrandServantSelectEffect(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectGrandServantComponent__RefreshDisplayAfterEndShowServantStatus(
        SelectGrandServantComponent_o *this,
        bool isModify,
        int32_t questId,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
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
  Il2CppObject *v20; // x24
  CommonUI_o *Instance; // x0
  __int64 v22; // x1
  UserServantEntity_o **v23; // x20
  SelectGrandServantComponent___c_c *v24; // x8
  CommonUI_o *v25; // x19
  System_Action_o *_9__67_0; // x20
  Il2CppObject *v27; // x21
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x21
  System_Func_object__bool__o *v30; // x22
  CommonUI_c *klass; // x8
  CommonUI_o *v32; // x21
  __int64 v33; // x9
  int *p_offset; // x10
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x21
  bool IsSelected_k__BackingField; // w10
  __int64 v39; // x8
  bool v40; // w24
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  GrandServantIconComponent_o *v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x2
  GrandServantIconComponent_o *v51; // x22
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  const MethodInfo *v56; // x2

  if ( (byte_4B172B7 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isModify);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_GrandServantIconComponent___, v9);
    sub_1BCAFF8(&System_Func_GrandServantIconComponent__bool__TypeInfo, v10);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo, v13);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BCAFF8(&Method_SelectGrandServantComponent___c__RefreshDisplayAfterEndShowServantStatus_b__67_0__, v16);
    sub_1BCAFF8(
      &Method_SelectGrandServantComponent___c__DisplayClass67_0__RefreshDisplayAfterEndShowServantStatus_b__1__,
      v17);
    sub_1BCAFF8(&SelectGrandServantComponent___c__DisplayClass67_0_TypeInfo, v18);
    sub_1BCAFF8(&SelectGrandServantComponent___c_TypeInfo, v19);
    byte_4B172B7 = 1;
  }
  v20 = (Il2CppObject *)sub_1BCB244(SelectGrandServantComponent___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_49;
  v20[1].klass = (Il2CppClass *)userServantEntity;
  v23 = (UserServantEntity_o **)&v20[1];
  sub_1BCAF9C(&v20[1]);
  if ( questId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = SelectGrandServantComponent___c_TypeInfo;
    v25 = Instance;
    if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
      v24 = SelectGrandServantComponent___c_TypeInfo;
    }
    _9__67_0 = v24->static_fields->__9__67_0;
    if ( !_9__67_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = SelectGrandServantComponent___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v24->static_fields->__9;
      _9__67_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        _9__67_0,
        v27,
        Method_SelectGrandServantComponent___c__RefreshDisplayAfterEndShowServantStatus_b__67_0__,
        0LL);
      static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
      static_fields->__9__67_0 = _9__67_0;
      Instance = (CommonUI_o *)sub_1BCAF9C(&static_fields->__9__67_0);
    }
    if ( v25 )
    {
      CommonUI__CloseServantStatusDialog(v25, _9__67_0, 0LL);
      return;
    }
LABEL_49:
    sub_1BCB254(Instance, v22);
  }
  if ( isModify )
  {
    cachedIconList = this->fields.cachedIconList;
    v30 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GrandServantIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v30,
      v20,
      Method_SelectGrandServantComponent___c__DisplayClass67_0__RefreshDisplayAfterEndShowServantStatus_b__1__,
      0LL);
    Instance = (CommonUI_o *)System_Linq_Enumerable__Where_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)cachedIconList,
                               (System_Func_TSource__bool__o *)v30,
                               (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_GrandServantIconComponent___);
    if ( !Instance )
      goto LABEL_49;
    klass = Instance->klass;
    v32 = Instance;
    v33 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_GrandServantIconComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo )
      {
        --v33;
        p_offset += 4;
        if ( !v33 )
          goto LABEL_19;
      }
      v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_19:
      v35 = sub_1C1B560(Instance, System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(CommonUI_o *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
    if ( !v37 )
      sub_1BCB254(0LL, v36);
    IsSelected_k__BackingField = 0;
    while ( 1 )
    {
      v39 = *(_QWORD *)v37;
      v40 = IsSelected_k__BackingField;
      v41 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_27;
        }
        v43 = v39 + 16LL * *v42 + 312;
      }
      else
      {
LABEL_27:
        v43 = sub_1C1B560(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v37, *(_QWORD *)(v43 + 8)) & 1) == 0 )
        break;
      v44 = *(_QWORD *)v37;
      v45 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_GrandServantIconComponent__c **)v46 - 1) != System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_34;
        }
        v47 = v44 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_34:
        v47 = sub_1C1B560(v37, System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo, 0LL);
      }
      v48 = (GrandServantIconComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
      v51 = v48;
      if ( !v48 )
        sub_1BCB254(0LL, v49);
      GrandServantIconComponent__SetServant(v48, *v23, v50);
      IsSelected_k__BackingField = 1;
      if ( !v40 )
        IsSelected_k__BackingField = v51->fields._IsSelected_k__BackingField;
    }
    v52 = *(_QWORD *)v37;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_43;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_43:
      v55 = sub_1C1B560(v37, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v55)(v37, *(_QWORD *)(v55 + 8));
    if ( v40 )
      SelectGrandServantComponent__SetFigure(this, *v23, v56);
  }
}


void __fastcall SelectGrandServantComponent__ReleaseGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *GrandServantSelectEffectPrefabFolderPath; // x19

  if ( (byte_4B172B6 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, method);
    byte_4B172B6 = 1;
  }
  this->fields.selectGrandServantEffectComponent = 0LL;
  sub_1BCAF9C(&this->fields.selectGrandServantEffectComponent);
  GrandServantSelectEffectPrefabFolderPath = this->fields.GrandServantSelectEffectPrefabFolderPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(GrandServantSelectEffectPrefabFolderPath, 0LL);
}


void __fastcall SelectGrandServantComponent__ResetDisplay(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *currentIcon; // x0
  System_Collections_Generic_List_object__o *cachedIconList; // x20
  System_Action_object__o *v8; // x21
  Il2CppObject *v9; // x22
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4B172AC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_GrandServantIconComponent__TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__, v3);
    sub_1BCAFF8(&Method_SelectGrandServantComponent___c__ResetDisplay_b__54_0__, v4);
    sub_1BCAFF8(&SelectGrandServantComponent___c_TypeInfo, v5);
    byte_4B172AC = 1;
  }
  currentIcon = this->fields.currentIcon;
  if ( !currentIcon )
    goto LABEL_13;
  GrandServantIconComponent__OnUnselected((GrandServantIconComponent_o *)currentIcon, method);
  currentIcon = SelectGrandServantComponent___c_TypeInfo;
  cachedIconList = (System_Collections_Generic_List_object__o *)this->fields.cachedIconList;
  if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
    currentIcon = SelectGrandServantComponent___c_TypeInfo;
  }
  v8 = *(System_Action_object__o **)(*((_QWORD *)currentIcon + 23) + 8LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)currentIcon + 56) )
    {
      j_il2cpp_runtime_class_init_0(currentIcon);
      currentIcon = SelectGrandServantComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)currentIcon + 23);
    v8 = (System_Action_object__o *)sub_1BCB244(System_Action_GrandServantIconComponent__TypeInfo);
    System_Action_object____ctor(v8, v9, Method_SelectGrandServantComponent___c__ResetDisplay_b__54_0__, 0LL);
    static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Action_GrandServantIconComponent__o *)v8;
    currentIcon = (void *)sub_1BCAF9C(&static_fields->__9__54_0);
  }
  if ( !cachedIconList
    || (System_Collections_Generic_List_object___ForEach(
          cachedIconList,
          (System_Action_T__o *)v8,
          (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.glowEffect, 0, 0LL),
        (currentIcon = this->fields.scrollView) == 0LL) )
  {
LABEL_13:
    sub_1BCB254(currentIcon, method);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)currentIcon, 0LL);
  SelectGrandServantComponent__SetBackButtonColliderEnable(this, 0, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectGrandServantComponent__SetBackButtonColliderEnable(
        SelectGrandServantComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *backButtonObject; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v9; // x19

  if ( (byte_4B172AD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    byte_4B172AD = 1;
  }
  backButtonObject = this->fields.backButtonObject;
  if ( !backButtonObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       backButtonObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  backButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)backButtonObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_16;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
  }
  backButtonObject = this->fields.backButtonObject;
  if ( !backButtonObject )
LABEL_16:
    sub_1BCB254(backButtonObject, isEnable);
  v9 = UnityEngine_GameObject__GetComponent_object_(
         backButtonObject,
         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  backButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v9, 0LL);
  if ( ((unsigned __int8)backButtonObject & 1) != 0 )
  {
    if ( v9 )
    {
      UIButtonColor__set_state((UIButtonColor_o *)v9, 0, 0LL);
      return;
    }
    goto LABEL_16;
  }
}


void __fastcall SelectGrandServantComponent__SetFigure(
        SelectGrandServantComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
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
  __int64 v25; // x1
  __int64 v26; // x1
  Il2CppObject *Master_object; // x23
  void *FigureImageLimitCount; // x0
  __int64 v29; // x1
  SvtMultiPortraitMaster_o *v30; // x21
  __int64 v31; // x22
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x27
  __int64 v33; // x24
  int32_t v34; // w22
  int32_t ServantImageLimitSealAfter; // w22
  int32_t v36; // w24
  int32_t FigureLimitCount; // w0
  int32_t ServantLimitCountSealAfter; // w0
  BalanceConfig_c *v39; // x8
  int32_t v40; // w23
  Il2CppObject *v41; // x0
  __int64 v42; // x24
  __int64 v43; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x23
  __int64 v45; // x23
  __int64 v46; // x24
  int32_t v47; // w0
  int32_t v48; // w23
  int32_t v49; // w24
  __int64 v50; // x23
  __int64 v51; // x24
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x21
  UIStandFigureR_o *v53; // x21
  __int64 v54; // x20
  __int64 v55; // x23
  UnityEngine_Object_o *v56; // x20
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x0
  const MethodInfo *v61; // x2
  int32_t size; // w20
  SelectGrandServantComponent_o *v63; // x0
  const MethodInfo *v64; // x2
  char v65; // w22
  System_Collections_Generic_List_object__o *v66; // x23
  int32_t v67; // w23
  SvtMultiPortraitEntity_o *v68; // x24
  int32_t v69; // w25
  __int64 v70; // x26
  UnityEngine_Object_o *gameObject; // x25
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x0
  struct System_Int32_array *commonPosition; // x8
  __int64 v77; // x2
  struct System_Int32_array *v78; // x8
  UnityEngine_GameObject_o *figureRoot; // x27
  int32_t v80; // w26
  System_Action_o *v81; // x28
  UnityEngine_Component_o *v82; // x25
  struct System_Int32_array *v83; // x8
  struct System_Int32_array *v84; // x8
  System_Collections_Generic_List_object__o *v85; // x26
  StandFigureCollect_o *v86; // x27
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  System_Collections_IEnumerator_o *MultiPortrait; // x0
  UnityEngine_GameObject_o *v92; // x21
  __int64 v93; // x20
  __int64 v94; // x23
  int32_t v95; // w20
  System_Action_o *v96; // x23
  UIStandFigureR_o *RenderPrefabWithEffect; // x22
  System_Collections_Generic_List_object__o *v98; // x21
  StandFigureCollect_o *v99; // x20
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *v105; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *v106; // [xsp+48h] [xbp-78h] BYREF
  int32_t value[2]; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4B172A9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, userServantEntity);
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SvtMultiPortraitMaster___, v8);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__, v12);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_First_StandFigureCollect___, v13);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v14);
    sub_1BCAFF8(&int_TypeInfo, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Count__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Item__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v21);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1BCAFF8(&Method_SelectGrandServantComponent_OnAfterGenerateFigure__, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v24);
    sub_1BCAFF8(&StandFigureCollect_TypeInfo, v25);
    sub_1BCAFF8(&StringLiteral_12922/*"StandFigureR({0})"*/, v26);
    byte_4B172A9 = 1;
  }
  *(_QWORD *)value = 0LL;
  entity = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  SelectGrandServantComponent__CleanUpStandFigures(this, (const MethodInfo *)userServantEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  FigureImageLimitCount = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
  if ( !userServantEntity )
    goto LABEL_83;
  v30 = (SvtMultiPortraitMaster_o *)FigureImageLimitCount;
  p_svtId = &userServantEntity->fields.svtId;
  v31 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = v31;
  *(_QWORD *)&v109.fields.fakeValue = v33;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v109, 0LL);
  FigureImageLimitCount = (void *)UserServantEntity__getFigureImageLimitCount(userServantEntity, 0, 0LL);
  if ( !Master_object )
    goto LABEL_83;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 v34,
                                 (int32_t)FigureImageLimitCount,
                                 0LL);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(userServantEntity->fields.svtId, 0LL);
  FigureLimitCount = UserServantEntity__getFigureLimitCount(userServantEntity, 0, 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 v36,
                                 FigureLimitCount,
                                 0LL);
  v39 = BalanceConfig_TypeInfo;
  v40 = ServantLimitCountSealAfter;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  if ( v40 == v39->static_fields->ServantLimitMax )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v41 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
    v43 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v42 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)v41;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v110.fields.currentCryptoKey = v43;
    *(_QWORD *)&v110.fields.fakeValue = v42;
    FigureImageLimitCount = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v110, 0LL);
    if ( !v44 )
      goto LABEL_83;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v44,
           &entity,
           (int32_t)FigureImageLimitCount,
           (const MethodInfo_32C7E4C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      FigureImageLimitCount = entity;
      if ( !entity )
        goto LABEL_83;
      if ( ServantEntity__IsContainOverwriteGrandGraphImageLimitCount((ServantEntity_o *)entity, &value[1], 0LL) )
      {
        v46 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v45 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v111.fields.currentCryptoKey = v46;
        *(_QWORD *)&v111.fields.fakeValue = v45;
        v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v111, 0LL);
        v48 = value[1];
        v49 = v47;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        if ( ImageLimitCount__TryGetGrandImageLimitCount(v49, v48, value, 0LL) )
          ServantImageLimitSealAfter = value[0];
      }
    }
  }
  v51 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v51;
  *(_QWORD *)&v112.fields.fakeValue = v50;
  FigureImageLimitCount = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v112, 0LL);
  if ( !v30 )
    goto LABEL_83;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        v30,
                        (int32_t)FigureImageLimitCount,
                        ServantImageLimitSealAfter,
                        3,
                        0LL);
  GameObjectHelper__SetActiveSafely(this->fields.figureRoot, 1, 0LL);
  FigureImageLimitCount = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntityListOrderBy, 0LL);
  if ( ((unsigned __int8)FigureImageLimitCount & 1) == 0 )
  {
    if ( EntityListOrderBy )
    {
      size = EntityListOrderBy->fields._size;
      FigureImageLimitCount = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
      if ( FigureImageLimitCount )
      {
        *((_DWORD *)FigureImageLimitCount + 18) = size;
        FigureImageLimitCount = this->fields.figureCollectDictionary;
        if ( FigureImageLimitCount )
        {
          v63 = (SelectGrandServantComponent_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                   (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
                                                   size,
                                                   &v106,
                                                   (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
          v65 = (char)v63;
          if ( ((unsigned __int8)v63 & 1) == 0 )
          {
            v66 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v66,
              (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
            v106 = (Il2CppObject *)v66;
            FigureImageLimitCount = this->fields.figureCollectDictionary;
            if ( !FigureImageLimitCount )
              goto LABEL_83;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
              size,
              (Il2CppObject *)v66,
              (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
          }
          if ( EntityListOrderBy->fields._size < 1 )
          {
LABEL_72:
            MultiPortrait = SelectGrandServantComponent__WaitLoadMultiPortrait(
                              v63,
                              (System_Collections_Generic_List_StandFigureCollect__o *)v106,
                              v64);
            this->fields.waitLoadCoroutine = UnityEngine_MonoBehaviour__StartCoroutine_70121648(
                                               (UnityEngine_MonoBehaviour_o *)this,
                                               MultiPortrait,
                                               0LL);
            sub_1BCAF9C(&this->fields.waitLoadCoroutine);
            goto LABEL_82;
          }
          v67 = 0;
          while ( 1 )
          {
            FigureImageLimitCount = System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)EntityListOrderBy,
                                      v67,
                                      (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Item__);
            if ( !FigureImageLimitCount )
              break;
            v68 = (SvtMultiPortraitEntity_o *)FigureImageLimitCount;
            v69 = *((_DWORD *)FigureImageLimitCount + 9) + 1;
            if ( (v65 & 1) != 0 )
            {
              FigureImageLimitCount = v106;
              if ( !v106 )
                break;
              FigureImageLimitCount = System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)v106,
                                        v67,
                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( !FigureImageLimitCount )
                break;
              v70 = *((_QWORD *)FigureImageLimitCount + 3);
              BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v70, 1, 0LL);
              if ( !v70 )
                break;
              UIStandFigureR__SetCharacterForImageIdWithEffect(
                (UIStandFigureR_o *)v70,
                v68->fields.portraitImageId,
                8,
                0,
                0,
                v67,
                0LL,
                0,
                1,
                1,
                0LL);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)v70, v69, 0LL);
              *(_QWORD *)(v70 + 136) = v68;
              sub_1BCAF9C(v70 + 136);
              gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v70,
                                                     0LL);
              v104.fields.currentCryptoKey = v68->fields.portraitImageId;
              v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v72, v73, v74);
              FigureImageLimitCount = System_String__Format((System_String_o *)StringLiteral_12922/*"StandFigureR({0})"*/, v75, 0LL);
              if ( !gameObject )
                break;
              UnityEngine_Object__set_name(gameObject, (System_String_o *)FigureImageLimitCount, 0LL);
              commonPosition = v68->fields.commonPosition;
              if ( commonPosition && (int)commonPosition->max_length >= 2 )
              {
                FigureImageLimitCount = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v70, 0LL);
                v78 = v68->fields.commonPosition;
                if ( !v78 )
                  break;
                if ( v78->max_length < 2 )
                  goto LABEL_84;
                GameObjectExtensions__SetLocalPosition_35356848(
                  (UnityEngine_GameObject_o *)FigureImageLimitCount,
                  (float)v78->m_Items[1],
                  (float)v78->m_Items[2],
                  0LL);
              }
            }
            else
            {
              figureRoot = this->fields.figureRoot;
              v80 = *((_DWORD *)FigureImageLimitCount + 8);
              if ( v67 == EntityListOrderBy->fields._size - 1 )
              {
                v81 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                System_Action___ctor(
                  v81,
                  (Il2CppObject *)this,
                  Method_SelectGrandServantComponent_OnAfterGenerateFigure__,
                  0LL);
              }
              else
              {
                v81 = 0LL;
              }
              FigureImageLimitCount = StandFigureManager__CreatePrefabForImageIdWithEffect(
                                        figureRoot,
                                        v80,
                                        8,
                                        0,
                                        v69,
                                        v67,
                                        v81,
                                        0,
                                        -1,
                                        0LL,
                                        0,
                                        1,
                                        0LL);
              if ( !FigureImageLimitCount )
                break;
              v82 = (UnityEngine_Component_o *)FigureImageLimitCount;
              *((_QWORD *)FigureImageLimitCount + 17) = v68;
              sub_1BCAF9C((char *)FigureImageLimitCount + 136);
              v83 = v68->fields.commonPosition;
              if ( v83 && (int)v83->max_length >= 2 )
              {
                FigureImageLimitCount = UnityEngine_Component__get_gameObject(v82, 0LL);
                v84 = v68->fields.commonPosition;
                if ( !v84 )
                  break;
                if ( v84->max_length < 2 )
LABEL_84:
                  sub_1BCB25C(FigureImageLimitCount, v29, v77);
                GameObjectExtensions__SetLocalPosition_35356848(
                  (UnityEngine_GameObject_o *)FigureImageLimitCount,
                  (float)v84->m_Items[1],
                  (float)v84->m_Items[2],
                  0LL);
              }
              v85 = (System_Collections_Generic_List_object__o *)v106;
              v86 = (StandFigureCollect_o *)sub_1BCB244(StandFigureCollect_TypeInfo);
              StandFigureCollect___ctor(v86, v68, (UIStandFigureR_o *)v82, 0LL);
              if ( !v85 )
                break;
              items = v85->fields._items;
              v88 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
              ++v85->fields._version;
              if ( !items )
                break;
              v89 = v85->fields._size;
              if ( (unsigned int)v89 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v85,
                  (Il2CppObject *)v86,
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
              }
              else
              {
                v90 = &items->obj.klass + v89;
                v85->fields._size = v89 + 1;
                v90[4] = (Il2CppClass *)v86;
                v63 = (SelectGrandServantComponent_o *)sub_1BCAF9C(v90 + 4);
              }
            }
            if ( ++v67 >= EntityListOrderBy->fields._size )
              goto LABEL_72;
          }
        }
      }
    }
LABEL_83:
    sub_1BCB254(FigureImageLimitCount, v29);
  }
  FigureImageLimitCount = this->fields.figureCollectDictionary;
  if ( !FigureImageLimitCount )
    goto LABEL_83;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
          1,
          &v105,
          (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__) )
  {
    v92 = this->fields.figureRoot;
    v94 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v93 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v114.fields.currentCryptoKey = v94;
    *(_QWORD *)&v114.fields.fakeValue = v93;
    v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v114, 0LL);
    v96 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v96, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnAfterGenerateFigure__, 0LL);
    RenderPrefabWithEffect = StandFigureManager__CreateRenderPrefabWithEffect(
                               v92,
                               v95,
                               ServantImageLimitSealAfter,
                               8,
                               0,
                               1,
                               v96,
                               0,
                               -1,
                               0LL,
                               0LL);
    v98 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v98,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    v99 = (StandFigureCollect_o *)sub_1BCB244(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v99, 0LL, RenderPrefabWithEffect, 0LL);
    if ( v98 )
    {
      v100 = v98->fields._items;
      v101 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v98->fields._version;
      if ( v100 )
      {
        v102 = v98->fields._size;
        if ( (unsigned int)v102 >= v100->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v98,
            (Il2CppObject *)v99,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
        }
        else
        {
          v103 = &v100->obj.klass + v102;
          v98->fields._size = v102 + 1;
          v103[4] = (Il2CppClass *)v99;
          sub_1BCAF9C(v103 + 4);
        }
        v105 = (Il2CppObject *)v98;
        FigureImageLimitCount = this->fields.figureCollectDictionary;
        if ( FigureImageLimitCount )
        {
          size = 1;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
            1,
            (Il2CppObject *)v98,
            (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
          goto LABEL_82;
        }
      }
    }
    goto LABEL_83;
  }
  FigureImageLimitCount = System_Linq_Enumerable__First_object_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)v105,
                            (const MethodInfo_303D3A4 *)Method_System_Linq_Enumerable_First_StandFigureCollect___);
  if ( !FigureImageLimitCount )
    goto LABEL_83;
  v53 = (UIStandFigureR_o *)*((_QWORD *)FigureImageLimitCount + 3);
  v55 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v113.fields.currentCryptoKey = v55;
  *(_QWORD *)&v113.fields.fakeValue = v54;
  FigureImageLimitCount = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v113, 0LL);
  if ( !v53 )
    goto LABEL_83;
  UIStandFigureR__SetCharacterWithEffect(
    v53,
    (int32_t)FigureImageLimitCount,
    ServantImageLimitSealAfter,
    8,
    0,
    0,
    0.0,
    0LL,
    0,
    0LL);
  UIStandFigureR__SetDepth(v53, 1, 0LL);
  v56 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53, 0LL);
  v104 = *p_svtId;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(
                          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                          &v104,
                          v57,
                          v58,
                          v59);
  FigureImageLimitCount = System_String__Format((System_String_o *)StringLiteral_12922/*"StandFigureR({0})"*/, v60, 0LL);
  if ( !v56 )
    goto LABEL_83;
  UnityEngine_Object__set_name(v56, (System_String_o *)FigureImageLimitCount, 0LL);
  size = 1;
LABEL_82:
  SelectGrandServantComponent__DisplayFigureWithEffect(this, size, v61);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectGrandServantComponent__SetUp(
        SelectGrandServantComponent_o *this,
        int32_t useGrandGraphId,
        System_Action_o *onClickBack,
        System_Action_UserServantEntity__o *onDecideGrand,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Action_object__o *v11; // x22
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  StandFigureCamera_c *v14; // x0
  struct UnityEngine_Color_o figureRenderGradientColor; // [xsp+0h] [xbp-60h]

  if ( (byte_4B172A4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_UserServantEntity__TypeInfo, *(_QWORD *)&useGrandGraphId);
    sub_1BCAFF8(&Method_SelectGrandServantComponent_OnDecideGrandServantSelect__, v9);
    sub_1BCAFF8(&StandFigureCamera_TypeInfo, v10);
    byte_4B172A4 = 1;
  }
  this->fields.onClickBackAction = onClickBack;
  sub_1BCAF9C(&this->fields.onClickBackAction);
  v11 = (System_Action_object__o *)sub_1BCB244(System_Action_UserServantEntity__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_OnDecideGrandServantSelect__,
    0LL);
  this->fields.onDecideGrandAction = (struct System_Action_UserServantEntity__o *)v11;
  sub_1BCAF9C(&this->fields.onDecideGrandAction);
  this->fields.effectEndCallback = onDecideGrand;
  sub_1BCAF9C(&this->fields.effectEndCallback);
  this->fields.selectUserServantEntity = 0LL;
  sub_1BCAF9C(&this->fields.selectUserServantEntity);
  this->fields.beforeUserServantEntity = 0LL;
  sub_1BCAF9C(&this->fields.beforeUserServantEntity);
  this->fields.grandGraphId = useGrandGraphId;
  SelectGrandServantComponent__SetUpServantInfo(this, v12);
  SelectGrandServantComponent__SetUpUI(this, v13);
  v14 = StandFigureCamera_TypeInfo;
  figureRenderGradientColor = this->fields.figureRenderGradientColor;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
    v14 = StandFigureCamera_TypeInfo;
  }
  v14->static_fields->figureRenderGradientColor = figureRenderGradientColor;
}


void __fastcall SelectGrandServantComponent__SetUpServantInfo(
        SelectGrandServantComponent_o *this,
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  UserServantMaster_o *Master_object; // x0
  Il2CppObject *v32; // x1
  System_Collections_Generic_IEnumerable_UserServantEntity__o *CanSelectToGrandList; // x0
  System_Collections_Generic_List_object__o *v34; // x20
  System_Comparison_T__o *v35; // x21
  System_Collections_Generic_List_object__o *v36; // x21
  System_Collections_Generic_List_object__o *v37; // x22
  int32_t v38; // w23
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  __int64 v46; // x8
  System_Collections_Generic_List_object__o *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  __int64 v51; // x2
  struct System_String_o *MasterName_k__BackingField; // x8
  int32_t minimumRequiredElementNum; // w9
  UserServantMaster_o *v54; // x20
  int v55; // w25
  float v56; // s8
  float v57; // s8
  unsigned int v58; // w9
  unsigned int v59; // w8
  int v60; // w29
  UserServantEntity_o *v61; // x22
  Il2CppObject *grandServantIconComponent; // x21
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v64; // x21
  System_Action_int__o *v65; // x23
  System_Action_T1__T2__T3__o *v66; // x24
  const MethodInfo *v67; // x5
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 MasterName_k__BackingField_low; // x10
  __int64 v71; // x8
  unsigned int v72; // w9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v74; // x0
  struct UICenterOnChild_o *centerChild; // x20
  _QWORD *p_onFinished; // x20
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v78; // x22
  System_Delegate_o *v79; // x0
  System_Delegate_o *v80; // x8
  SpringPanel_OnFinished_c *v81; // x1
  struct UIScrollView_o *scrollView; // x20
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v84; // x22
  System_Delegate_o *v85; // x0
  UIScrollView_OnDragNotification_c *v86; // x1
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8

  if ( (byte_4B172A6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, method);
    sub_1BCAFF8(&System_Action_bool__int__UserServantEntity__TypeInfo, v3);
    sub_1BCAFF8(&System_Comparison_UserServantEntity__TypeInfo, v4);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_AsEnumerable_UserServantEntity___, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Concat_UserServantEntity___, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Reverse_UserServantEntity___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v11);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_FixedSpringPanel___, v12);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_UICenterOnChild___, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GrandServantIconComponent___, v22);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v23);
    sub_1BCAFF8(&UIScrollView_OnDragNotification_TypeInfo, v24);
    sub_1BCAFF8(&SpringPanel_OnFinished_TypeInfo, v25);
    sub_1BCAFF8(&Method_SelectGrandServantComponent_CompareUserServant__, v26);
    sub_1BCAFF8(&Method_SelectGrandServantComponent_OnCenterFinished__, v27);
    sub_1BCAFF8(&Method_SelectGrandServantComponent_OnDragStarted__, v28);
    sub_1BCAFF8(&Method_SelectGrandServantComponent_RefreshDisplayAfterEndShowServantStatus__, v29);
    sub_1BCAFF8(&Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_47_0__, v30);
    byte_4B172A6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_67;
  CanSelectToGrandList = UserServantMaster__GetCanSelectToGrandList(Master_object, this->fields.grandGraphId, 0LL);
  v34 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)CanSelectToGrandList,
                                                       (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
  v35 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_UserServantEntity__TypeInfo);
  System_Comparison_object____ctor(
    v35,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_CompareUserServant__,
    0LL);
  if ( !v34 )
    goto LABEL_67;
  System_Collections_Generic_List_object___Sort_57390740(
    v34,
    v35,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( v34->fields._size >= 1 )
  {
    v38 = 0;
    do
    {
      Master_object = (UserServantMaster_o *)System_Collections_Generic_List_object___get_Item(
                                               v34,
                                               v38,
                                               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      v32 = (Il2CppObject *)Master_object;
      if ( !v38 || (v38 & 1) != 0 )
      {
        if ( !v36 )
          goto LABEL_67;
        items = v36->fields._items;
        v44 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v36->fields._version;
        if ( !items )
          goto LABEL_67;
        size = v36->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v46 = v44[4];
          v47 = v36;
          goto LABEL_22;
        }
        v42 = &items->obj.klass + size;
        v36->fields._size = size + 1;
      }
      else
      {
        if ( !v37 )
          goto LABEL_67;
        v39 = v37->fields._items;
        v40 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
        ++v37->fields._version;
        if ( !v39 )
          goto LABEL_67;
        v41 = v37->fields._size;
        if ( (unsigned int)v41 >= v39->max_length )
        {
          v46 = v40[4];
          v47 = v37;
LABEL_22:
          System_Collections_Generic_List_object___AddWithResize(
            v47,
            v32,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v46 + 192) + 112LL));
          continue;
        }
        v42 = &v39->obj.klass + v41;
        v37->fields._size = v41 + 1;
      }
      v42[4] = (Il2CppClass *)v32;
      sub_1BCAF9C(v42 + 4);
    }
    while ( ++v38 < v34->fields._size );
  }
  v48 = System_Linq_Enumerable__AsEnumerable_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (const MethodInfo_3029054 *)Method_System_Linq_Enumerable_AsEnumerable_UserServantEntity___);
  v49 = System_Linq_Enumerable__Reverse_object_(
          v48,
          (const MethodInfo_3047234 *)Method_System_Linq_Enumerable_Reverse_UserServantEntity___);
  v50 = System_Linq_Enumerable__Concat_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          v49,
          (const MethodInfo_30334D4 *)Method_System_Linq_Enumerable_Concat_UserServantEntity___);
  Master_object = (UserServantMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                           v50,
                                           (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !Master_object )
LABEL_67:
    sub_1BCB254(Master_object, v32);
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  minimumRequiredElementNum = this->fields.minimumRequiredElementNum;
  v54 = Master_object;
  v55 = (int)MasterName_k__BackingField;
  if ( minimumRequiredElementNum > (int)MasterName_k__BackingField && (int)MasterName_k__BackingField > 1 )
  {
    v56 = (float)minimumRequiredElementNum;
    if ( !byte_4B1684F )
    {
      sub_1BCAFF8(&System_Math_TypeInfo, v32);
      byte_4B1684F = 1;
    }
    v57 = v56 / (float)v55;
    Master_object = (UserServantMaster_o *)System_Math_TypeInfo;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    MasterName_k__BackingField = v54->fields._MasterName_k__BackingField;
    v58 = vcvtps_s32_f32(v57);
    if ( ceilf(v57) == INFINITY )
      v58 = 0x80000000;
    v55 = v58 * (_DWORD)MasterName_k__BackingField;
  }
  if ( v55 >= 1 )
  {
    if ( !(_DWORD)MasterName_k__BackingField )
LABEL_48:
      sub_1BCB25C(Master_object, v32, v51);
    v59 = 0;
    v60 = 1;
    while ( 1 )
    {
      Master_object = (UserServantMaster_o *)this->fields.wrapContent;
      if ( !Master_object )
        goto LABEL_67;
      v61 = (UserServantEntity_o *)*((_QWORD *)&v54->fields.revision + v59);
      grandServantIconComponent = (Il2CppObject *)this->fields.grandServantIconComponent;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_object, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v64 = UnityEngine_Object__Instantiate_object__51002592(
              grandServantIconComponent,
              transform,
              (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GrandServantIconComponent___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v64, 1, 0LL);
      v65 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v65,
        (Il2CppObject *)this,
        (intptr_t)Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_47_0__,
        0LL);
      v66 = (System_Action_T1__T2__T3__o *)sub_1BCB244(System_Action_bool__int__UserServantEntity__TypeInfo);
      System_Action_bool__int__object____ctor(
        v66,
        (Il2CppObject *)this,
        Method_SelectGrandServantComponent_RefreshDisplayAfterEndShowServantStatus__,
        0LL);
      if ( !v64 )
        goto LABEL_67;
      GrandServantIconComponent__Init(
        (GrandServantIconComponent_o *)v64,
        v61,
        v60 - 1,
        v65,
        (System_Action_bool__int__UserServantEntity__o *)v66,
        v67);
      Master_object = (UserServantMaster_o *)this->fields.cachedIconList;
      if ( !Master_object )
        goto LABEL_67;
      v68 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField;
      v69 = Method_System_Collections_Generic_List_GrandServantIconComponent__Add__;
      ++HIDWORD(Master_object->fields._MasterName_k__BackingField);
      if ( !v68 )
        goto LABEL_67;
      MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
      if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v68 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Master_object,
          v64,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = v68 + 8 * MasterName_k__BackingField_low;
        LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
        *(_QWORD *)(v71 + 32) = v64;
        Master_object = (UserServantMaster_o *)sub_1BCAF9C(v71 + 32);
      }
      if ( v55 == v60 )
        break;
      v72 = (unsigned int)v54->fields._MasterName_k__BackingField;
      v59 = v60 % (int)v72;
      ++v60;
      if ( v59 >= v72 )
        goto LABEL_48;
    }
  }
  Master_object = (UserServantMaster_o *)this->fields.scrollView;
  if ( !Master_object )
    goto LABEL_67;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  this->fields.springPanel = (struct FixedSpringPanel_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                            gameObject,
                                                            (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_FixedSpringPanel___);
  sub_1BCAF9C(&this->fields.springPanel);
  Master_object = (UserServantMaster_o *)this->fields.wrapContent;
  if ( !Master_object )
    goto LABEL_67;
  v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  this->fields.centerChild = (struct UICenterOnChild_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                           v74,
                                                           (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_UICenterOnChild___);
  Master_object = (UserServantMaster_o *)sub_1BCAF9C(&this->fields.centerChild);
  centerChild = this->fields.centerChild;
  if ( !centerChild )
    goto LABEL_67;
  onFinished = (System_Delegate_o *)centerChild->fields.onFinished;
  p_onFinished = &centerChild->fields.onFinished;
  v78 = (SpringPanel_OnFinished_o *)sub_1BCB244(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v78, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnCenterFinished__, 0LL);
  v79 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v78, 0LL);
  v80 = v79;
  if ( v79 )
  {
    v81 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v79->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_62;
    *p_onFinished = v79;
    if ( (SpringPanel_OnFinished_c *)v79->klass != v81 )
      goto LABEL_62;
  }
  else
  {
    *p_onFinished = 0LL;
  }
  sub_1BCAF9C(p_onFinished);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.wrapContent, 1, 0LL);
  Master_object = (UserServantMaster_o *)this->fields.wrapContent;
  if ( !Master_object )
    goto LABEL_67;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)Master_object, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_67;
  onDragStarted = (System_Delegate_o *)scrollView->fields.onDragStarted;
  p_onFinished = &scrollView->fields.onDragStarted;
  v84 = (UIScrollView_OnDragNotification_o *)sub_1BCB244(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v84,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_OnDragStarted__,
    0LL);
  v85 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v84, 0LL);
  v80 = v85;
  if ( !v85 )
    goto LABEL_63;
  v86 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v85->klass != UIScrollView_OnDragNotification_TypeInfo
    || (*p_onFinished = v85, (UIScrollView_OnDragNotification_c *)v85->klass != v86) )
  {
LABEL_62:
    sub_1BCB514(v80);
LABEL_63:
    *p_onFinished = v80;
  }
  Master_object = (UserServantMaster_o *)sub_1BCAF9C(p_onFinished);
  cachedIconList = this->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_67;
  Master_object = (UserServantMaster_o *)this->fields.scrollView;
  if ( !Master_object )
    goto LABEL_67;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Master_object, cachedIconList->fields._size > 1, 0LL);
}


void __fastcall SelectGrandServantComponent__SetUpUI(SelectGrandServantComponent_o *this, const MethodInfo *method)
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
  UILabel_o *headerMessageLabel; // x20
  System_String_o *bitEffectRoot; // x0
  __int64 v18; // x1
  UISprite_o *headerMessageBgSprite; // x20
  __int64 v20; // x2
  struct UISprite_array *arrowSprite; // x22
  __int64 v22; // x8
  unsigned __int64 v23; // x23
  UISprite_o *v24; // x20
  Il2CppObject *Object_object__50315216; // x20
  UnityEngine_Transform_o *transform; // x21

  if ( (byte_4B172A5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GameObject____76915336, method);
    sub_1BCAFF8(&AssetManager_TypeInfo, v3);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SelectGrandConfirmServantDialog___, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_20365/*"img_selected_frame"*/, v9);
    sub_1BCAFF8(&StringLiteral_7094/*"GrandServantList"*/, v10);
    sub_1BCAFF8(&StringLiteral_9315/*"Name_BG_Gradation"*/, v11);
    sub_1BCAFF8(&StringLiteral_11432/*"SELECT_GRAND_HEADER_MESSAGE"*/, v12);
    sub_1BCAFF8(&StringLiteral_20484/*"img_txt_grand_class"*/, v13);
    sub_1BCAFF8(&StringLiteral_12561/*"SelectGrandConfirmServantDialog"*/, v14);
    sub_1BCAFF8(&StringLiteral_20115/*"img_arrow"*/, v15);
    byte_4B172A5 = 1;
  }
  AndroidBackKeyManager__AddBackKeyTarget(this->fields.backButtonObject, 0LL);
  headerMessageLabel = this->fields.headerMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  bitEffectRoot = LocalizationManager__Get((System_String_o *)StringLiteral_11432/*"SELECT_GRAND_HEADER_MESSAGE"*/, 0LL);
  if ( !headerMessageLabel )
    goto LABEL_26;
  UILabel__set_text(headerMessageLabel, bitEffectRoot, 0LL);
  headerMessageBgSprite = this->fields.headerMessageBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(headerMessageBgSprite, (System_String_o *)StringLiteral_20484/*"img_txt_grand_class"*/, 0LL);
  bitEffectRoot = (System_String_o *)this->fields.headerMessageBgSprite;
  if ( !bitEffectRoot )
    goto LABEL_26;
  ((void (__fastcall *)(System_String_o *, void *))bitEffectRoot->klass[1]._1.typeMetadataHandle)(
    bitEffectRoot,
    bitEffectRoot->klass[1]._1.interopData);
  AtlasManager__SetGrandServantListImage(this->fields.nameBgSprite, (System_String_o *)StringLiteral_9315/*"Name_BG_Gradation"*/, 0LL);
  bitEffectRoot = (System_String_o *)AtlasManager__SetGrandServantListImage(
                                       this->fields.glowSprite,
                                       (System_String_o *)StringLiteral_20365/*"img_selected_frame"*/,
                                       0LL);
  arrowSprite = this->fields.arrowSprite;
  if ( !arrowSprite )
    goto LABEL_26;
  v22 = *(_QWORD *)&arrowSprite->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)v22 )
        sub_1BCB25C(bitEffectRoot, v18, v20);
      v24 = arrowSprite->m_Items[v23];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      bitEffectRoot = (System_String_o *)AtlasManager__SetGrandServantListImage(
                                           v24,
                                           (System_String_o *)StringLiteral_20115/*"img_arrow"*/,
                                           0LL);
      LODWORD(v22) = arrowSprite->max_length;
      ++v23;
    }
    while ( (__int64)v23 < (int)v22 );
  }
  bitEffectRoot = (System_String_o *)this->fields.bitEffectRoot;
  if ( !bitEffectRoot )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitEffectRoot, 0, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  bitEffectRoot = (System_String_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_7094/*"GrandServantList"*/, 0LL);
  if ( !bitEffectRoot )
    goto LABEL_26;
  Object_object__50315216 = AssetData__GetObject_object__50315216(
                              (AssetData_o *)bitEffectRoot,
                              (System_String_o *)StringLiteral_12561/*"SelectGrandConfirmServantDialog"*/,
                              (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GameObject____76915336);
  bitEffectRoot = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !bitEffectRoot )
    goto LABEL_26;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bitEffectRoot, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bitEffectRoot = (System_String_o *)UnityEngine_Object__Instantiate_object__51002592(
                                       Object_object__50315216,
                                       transform,
                                       (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
  if ( !bitEffectRoot )
LABEL_26:
    sub_1BCB254(bitEffectRoot, v18);
  this->fields.confirmServantDialog = (struct SelectGrandConfirmServantDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                    (UnityEngine_GameObject_o *)bitEffectRoot,
                                                                                    (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SelectGrandConfirmServantDialog___);
  sub_1BCAF9C(&this->fields.confirmServantDialog);
}


System_Collections_IEnumerator_o *__fastcall SelectGrandServantComponent__WaitLoadMultiPortrait(
        SelectGrandServantComponent_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        const MethodInfo *method)
{
  __int64 v4; // x20

  if ( (byte_4B172B8 & 1) == 0 )
  {
    sub_1BCAFF8(&SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_TypeInfo, collectList);
    byte_4B172B8 = 1;
  }
  v4 = sub_1BCB244(SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = collectList;
  sub_1BCAF9C(v4 + 32);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall SelectGrandServantComponent___LoadGrandServantSelectEffect_b__63_0(
        SelectGrandServantComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.grandServantSelectEffectAssetData = assetData;
  sub_1BCAF9C(&this->fields.grandServantSelectEffectAssetData);
  SelectGrandServantComponent__PlayGrandServantSelectEffect(this, v4);
}


void __fastcall SelectGrandServantComponent___OnCenterFinished_b__48_0(
        SelectGrandServantComponent_o *this,
        GrandServantIconComponent_o *elm,
        const MethodInfo *method)
{
  UnityEngine_Component_o *currentIcon; // x0
  const MethodInfo *v5; // x2

  currentIcon = (UnityEngine_Component_o *)this->fields.currentIcon;
  if ( !currentIcon
    || (currentIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(currentIcon, 0LL), !elm) )
  {
    sub_1BCB254(currentIcon, elm);
  }
  GrandServantIconComponent__ApplyOffset(elm, (UnityEngine_Transform_o *)currentIcon, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectGrandServantComponent___OnClickDecide_b__60_0(
        SelectGrandServantComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserServantEntity_o *CurrentUserServantEntity; // x20
  UserServantEntity_o *v12; // x21
  int64_t Instance; // x0
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  Il2CppObject *Request_object; // x0
  int32_t grandGraphId; // w20
  SetupGrandServantRequest_o *v17; // x21
  const MethodInfo *v18; // x1
  __int128 v19; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-50h]

  if ( (byte_4B172BD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_NetworkManager_getRequest_SetupGrandServantRequest___, isDecide);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BCAFF8(&Method_SelectGrandServantComponent_OnEndGrandSetupRequest__, v8);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_1BCAFF8(&UserServantEntity_TypeInfo, v10);
    byte_4B172BD = 1;
  }
  if ( isDecide )
  {
    CurrentUserServantEntity = SelectGrandServantComponent__get_CurrentUserServantEntity(
                                 this,
                                 (const MethodInfo *)isDecide);
    v12 = (UserServantEntity_o *)sub_1BCB244(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_42294652(v12, CurrentUserServantEntity, 0LL);
    this->fields.beforeUserServantEntity = v12;
    sub_1BCAF9C(&this->fields.beforeUserServantEntity);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SelectGrandServantComponent_OnEndGrandSetupRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
      grandGraphId = this->fields.grandGraphId;
      v17 = (SetupGrandServantRequest_o *)Request_object;
      Instance = (int64_t)SelectGrandServantComponent__get_CurrentUserServantEntity(this, v18);
      if ( Instance )
      {
        v19 = *(_OWORD *)(Instance + 32);
        *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
        *(_OWORD *)&v21.fields.fakeValue = v19;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v20 = v21;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v20, 0LL);
        if ( v17 )
        {
          SetupGrandServantRequest__beginRequest(v17, grandGraphId, Instance, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BCB254(Instance, isDecide);
  }
  Instance = (int64_t)this->fields.confirmServantDialog;
  if ( !Instance )
    goto LABEL_14;
  BaseDialog__SafeClose((BaseDialog_o *)Instance, 0LL, 0LL);
}


void __fastcall SelectGrandServantComponent___OnEndGrandSetupRequest_b__61_0(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *onDecideGrandAction; // x20
  Il2CppObject *CurrentUserServantEntity; // x1

  if ( (byte_4B172BE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_UserServantEntity___, method);
    byte_4B172BE = 1;
  }
  onDecideGrandAction = (System_Action_T__o *)this->fields.onDecideGrandAction;
  CurrentUserServantEntity = (Il2CppObject *)SelectGrandServantComponent__get_CurrentUserServantEntity(this, method);
  ActionExtensions__Call_object_(
    onDecideGrandAction,
    CurrentUserServantEntity,
    (const MethodInfo_2F6A0EC *)Method_ActionExtensions_Call_UserServantEntity___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectGrandServantComponent___SetUpServantInfo_g__OnClickIcon_47_0(
        SelectGrandServantComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *currentIcon; // x21
  UIScrollView_o *scrollView; // x0
  __int64 v9; // x1
  struct GrandServantIconComponent_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x1
  UICenterOnChild_o *centerChild; // x20

  if ( (byte_4B172BC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__, *(_QWORD *)&index);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_47_0__, v6);
    byte_4B172BC = 1;
  }
  if ( !this->fields.isDragging )
  {
    currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    scrollView = (UIScrollView_o *)UnityEngine_Object__op_Inequality(currentIcon, 0LL, 0LL);
    if ( ((unsigned __int8)scrollView & 1) != 0 )
    {
      v10 = this->fields.currentIcon;
      if ( !v10 )
        goto LABEL_18;
      if ( v10->fields._Index_k__BackingField == index )
        return;
    }
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      UIScrollView__Press(scrollView, 0, 0LL);
      scrollView = this->fields.scrollView;
      if ( scrollView )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 0, 0LL);
        v11 = Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_47_0__;
        if ( (*((_BYTE *)Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_47_0__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_1BCB010(Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_47_0__);
        v12 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v11, v11[4]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0LL);
        SelectGrandServantComponent__ResetDisplay(this, v13);
        scrollView = (UIScrollView_o *)this->fields.cachedIconList;
        if ( scrollView )
        {
          centerChild = this->fields.centerChild;
          scrollView = (UIScrollView_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)scrollView,
                                           index,
                                           (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
          if ( scrollView )
          {
            scrollView = (UIScrollView_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)scrollView,
                                             0LL);
            if ( centerChild )
            {
              UICenterOnChild__CenterOn_48341632(centerChild, (UnityEngine_Transform_o *)scrollView, 1, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1BCB254(scrollView, v9);
  }
}


UserServantEntity_o *__fastcall SelectGrandServantComponent__get_CurrentUserServantEntity(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentIcon; // x20
  __int64 v4; // x1
  bool v5; // w8
  UserServantEntity_o *result; // x0
  struct GrandServantIconComponent_o *v7; // x8

  if ( (byte_4B172A2 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B172A2 = 1;
  }
  currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(currentIcon, 0LL, 0LL);
  result = 0LL;
  if ( v5 )
  {
    v7 = this->fields.currentIcon;
    if ( !v7 )
      sub_1BCB254(0LL, v4);
    return v7->fields._UserServantEntity_k__BackingField;
  }
  return result;
}


void __fastcall SelectGrandServantComponent__WaitLoadMultiPortrait_d__69___ctor(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SelectGrandServantComponent__WaitLoadMultiPortrait_d__69__MoveNext(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *this,
        const MethodInfo *method)
{
  SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x20
  System_Func_bool__o *v11; // x21
  UnityEngine_WaitUntil_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct SelectGrandServantComponent___c__DisplayClass69_0_o *_8__1; // x8
  int32_t v16; // w20

  v2 = this;
  if ( (byte_4B172C3 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v4);
    sub_1BCAFF8(&Method_SelectGrandServantComponent___c__DisplayClass69_0__WaitLoadMultiPortrait_b__0__, v5);
    sub_1BCAFF8(&SelectGrandServantComponent___c__DisplayClass69_0_TypeInfo, v6);
    this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *)sub_1BCAFF8(
                                                                           &UnityEngine_WaitUntil_TypeInfo,
                                                                           v7);
    byte_4B172C3 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _8__1 = v2->fields.__8__1;
    v2->fields.__1__state = -1;
    if ( _8__1 )
    {
      v16 = 0;
      do
      {
        this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *)_8__1->fields.collectList;
        if ( !this )
          break;
        if ( v16 >= SLODWORD(this->fields.__2__current) )
          return 0;
        this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *)System_Collections_Generic_List_object___get_Item(
                                                                               (System_Collections_Generic_List_object__o *)this,
                                                                               v16,
                                                                               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !this )
          break;
        this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *)this->fields.__2__current;
        if ( !this )
          break;
        UIStandFigureR__EnqueueRenderInfo((UIStandFigureR_o *)this, 0LL);
        _8__1 = v2->fields.__8__1;
        ++v16;
      }
      while ( _8__1 );
    }
    goto LABEL_14;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v9 = (Il2CppObject *)sub_1BCB244(SelectGrandServantComponent___c__DisplayClass69_0_TypeInfo);
    System_Object___ctor(v9, 0LL);
    v2->fields.__8__1 = (struct SelectGrandServantComponent___c__DisplayClass69_0_o *)v9;
    sub_1BCAF9C(&v2->fields.__8__1);
    this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *)v2->fields.__8__1;
    if ( this )
    {
      *(_QWORD *)&this->fields.__1__state = v2->fields.collectList;
      sub_1BCAF9C(&this->fields);
      v10 = (Il2CppObject *)v2->fields.__8__1;
      v11 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v11,
        v10,
        Method_SelectGrandServantComponent___c__DisplayClass69_0__WaitLoadMultiPortrait_b__0__,
        0LL);
      v12 = (UnityEngine_WaitUntil_o *)sub_1BCB244(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v12, v11, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v12;
      p__2__current = &v2->fields.__2__current;
      sub_1BCAF9C(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_14:
    sub_1BCB254(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall SelectGrandServantComponent__WaitLoadMultiPortrait_d__69__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SelectGrandServantComponent__WaitLoadMultiPortrait_d__69__System_Collections_IEnumerator_Reset(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall SelectGrandServantComponent__WaitLoadMultiPortrait_d__69__System_Collections_IEnumerator_get_Current(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SelectGrandServantComponent__WaitLoadMultiPortrait_d__69__System_IDisposable_Dispose(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__69_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelectGrandServantComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B172BF & 1) == 0 )
  {
    sub_1BCAFF8(&SelectGrandServantComponent___c_TypeInfo, v1);
    byte_4B172BF = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(SelectGrandServantComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SelectGrandServantComponent___c_TypeInfo->static_fields->__9 = (struct SelectGrandServantComponent___c_o *)v2;
  sub_1BCAF9C(SelectGrandServantComponent___c_TypeInfo->static_fields);
}


void __fastcall SelectGrandServantComponent___c___ctor(
        SelectGrandServantComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectGrandServantComponent___c___RefreshDisplayAfterEndShowServantStatus_b__67_0(
        SelectGrandServantComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B172C0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B172C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall SelectGrandServantComponent___c___ResetDisplay_b__54_0(
        SelectGrandServantComponent___c_o *this,
        GrandServantIconComponent_o *elm,
        const MethodInfo *method)
{
  if ( !elm )
    sub_1BCB254(this, 0LL);
  GrandServantIconComponent__ResetOffset(elm, (const MethodInfo *)elm);
}


bool __fastcall SelectGrandServantComponent___c___WaitLoadMultiPortrait_b__69_1(
        SelectGrandServantComponent___c_o *this,
        StandFigureCollect_o *x,
        const MethodInfo *method)
{
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8

  if ( !x || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0LL )
    sub_1BCB254(this, x);
  return standFigure_k__BackingField->fields.isQueuerable;
}


void __fastcall SelectGrandServantComponent___c__DisplayClass62_0___ctor(
        SelectGrandServantComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectGrandServantComponent___c__DisplayClass62_0___OnDecideGrandServantSelect_b__0(
        SelectGrandServantComponent___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  struct SelectGrandServantComponent_o *_4__this; // x8
  SelectGrandServantComponent___c__DisplayClass62_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        _4__this->fields.selectUserServantEntity = this->fields.userServantEntity,
        sub_1BCAF9C(&_4__this->fields.selectUserServantEntity),
        (this = (SelectGrandServantComponent___c__DisplayClass62_0_o *)v3->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(this, method);
  }
  SelectGrandServantComponent__LoadGrandServantSelectEffect((SelectGrandServantComponent_o *)this, method);
}


void __fastcall SelectGrandServantComponent___c__DisplayClass67_0___ctor(
        SelectGrandServantComponent___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SelectGrandServantComponent___c__DisplayClass67_0___RefreshDisplayAfterEndShowServantStatus_b__1(
        SelectGrandServantComponent___c__DisplayClass67_0_o *this,
        GrandServantIconComponent_o *icon,
        const MethodInfo *method)
{
  SelectGrandServantComponent___c__DisplayClass67_0_o *v4; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v6; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v8; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  v4 = this;
  if ( (byte_4B172C1 & 1) == 0 )
  {
    this = (SelectGrandServantComponent___c__DisplayClass67_0_o *)sub_1BCAFF8(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    icon);
    byte_4B172C1 = 1;
  }
  if ( !icon )
    goto LABEL_9;
  UserServantEntity_k__BackingField = icon->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_9;
  v6 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  this = (SelectGrandServantComponent___c__DisplayClass67_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                                                  &v11,
                                                                  0LL);
  userServantEntity = v4->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_9:
    sub_1BCB254(this, icon);
  v8 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v8;
  return this == (SelectGrandServantComponent___c__DisplayClass67_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(
                                                                          &v10,
                                                                          0LL);
}


void __fastcall SelectGrandServantComponent___c__DisplayClass69_0___ctor(
        SelectGrandServantComponent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SelectGrandServantComponent___c__DisplayClass69_0___WaitLoadMultiPortrait_b__0(
        SelectGrandServantComponent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SelectGrandServantComponent___c_c *v6; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *collectList; // x19
  System_Func_object__bool__o *_9__69_1; // x20
  Il2CppObject *v9; // x21
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4B172C2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_All_StandFigureCollect___, method);
    sub_1BCAFF8(&System_Func_StandFigureCollect__bool__TypeInfo, v3);
    sub_1BCAFF8(&Method_SelectGrandServantComponent___c__WaitLoadMultiPortrait_b__69_1__, v4);
    sub_1BCAFF8(&SelectGrandServantComponent___c_TypeInfo, v5);
    byte_4B172C2 = 1;
  }
  v6 = SelectGrandServantComponent___c_TypeInfo;
  collectList = this->fields.collectList;
  if ( !SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo);
    v6 = SelectGrandServantComponent___c_TypeInfo;
  }
  _9__69_1 = (System_Func_object__bool__o *)v6->static_fields->__9__69_1;
  if ( !_9__69_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = SelectGrandServantComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__69_1 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_StandFigureCollect__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__69_1,
      v9,
      Method_SelectGrandServantComponent___c__WaitLoadMultiPortrait_b__69_1__,
      0LL);
    static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    static_fields->__9__69_1 = (struct System_Func_StandFigureCollect__bool__o *)_9__69_1;
    sub_1BCAF9C(&static_fields->__9__69_1);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)collectList,
           (System_Func_TSource__bool__o *)_9__69_1,
           (const MethodInfo_3024F54 *)Method_System_Linq_Enumerable_All_StandFigureCollect___);
}
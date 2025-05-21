void __fastcall SelectGrandServantComponent___ctor(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *v8; // x20
  System_Collections_Generic_List_object__o *v9; // x20

  if ( (byte_4B3F7C7 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect____ctor__, method);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_GrandServantIconComponent__TypeInfo, v5);
    sub_1BDB878(&StringLiteral_5899/*"Effect/SelectGrandServant"*/, v6);
    sub_1BDB878(&StringLiteral_17293/*"bit_select_grand_servant"*/, v7);
    byte_4B3F7C7 = 1;
  }
  this->fields.figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_BEBC90;
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_333A94C *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect____ctor__);
  this->fields.figureCollectDictionary = (struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *)v8;
  sub_1BDB81C(&this->fields.figureCollectDictionary);
  this->fields.GrandServantSelectEffectPrefabFolderPath = (struct System_String_o *)StringLiteral_5899/*"Effect/SelectGrandServant"*/;
  sub_1BDB81C(&this->fields.GrandServantSelectEffectPrefabFolderPath);
  this->fields.GrandServantSelectEffectPrefabName = (struct System_String_o *)StringLiteral_17293/*"bit_select_grand_servant"*/;
  sub_1BDB81C(&this->fields.GrandServantSelectEffectPrefabName);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GrandServantIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GrandServantIconComponent___ctor__);
  this->fields.cachedIconList = (struct System_Collections_Generic_List_GrandServantIconComponent__o *)v9;
  sub_1BDB81C(&this->fields.cachedIconList);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SelectGrandServantComponent__Awake(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  ;
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
    sub_1BDBAD4(this, servantEntityA);
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


void __fastcall SelectGrandServantComponent__DeactivateRenderer(
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
  struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *figureCollectDictionary; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x19
  UIStandFigureR_o *monitor; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4B3F7B5 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___GetEnumerator__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6);
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___get_Current__,
      v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_int__List_StandFigureCollect___get_Value__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v10);
    byte_4B3F7B5 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  memset(&v19, 0, sizeof(v19));
  figureCollectDictionary = this->fields.figureCollectDictionary;
  if ( !figureCollectDictionary )
    sub_1BDBAD4(0LL, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_int__object__o *)figureCollectDictionary,
    (const MethodInfo_333B758 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___GetEnumerator__);
  v19 = v17;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_348DA98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___MoveNext__) )
  {
    if ( !v19.fields._current.fields.value )
      sub_1BDBAD4(0LL, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)v19.fields._current.fields.value,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    *(_OWORD *)&v18.fields._list = *(_OWORD *)&v17.fields._dictionary;
    v18.fields._current = v17.fields._current.fields.key;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v13 )
        break;
      current = v18.fields._current;
      if ( !v18.fields._current )
        sub_1BDBAD4(v13, v14);
      monitor = (UIStandFigureR_o *)v18.fields._current[1].monitor;
      if ( !monitor )
        sub_1BDBAD4(0LL, v14);
      UIStandFigureR__ReleaseBodyRenderTexture(monitor, 0LL);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)current[1].monitor, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_348DBBC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___Dispose__);
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

  if ( (byte_4B3F7B8 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__,
      *(_QWORD *)&needNum);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__, v8);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&StandFigureCamera_TypeInfo, v10);
    byte_4B3F7B8 = 1;
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
          (const MethodInfo_333CAAC *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__) )
    return;
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  for ( i = v16; ; BasicHelper__SetActiveSafely((UnityEngine_Component_o *)i.fields._current[1].monitor, 1, 0LL) )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v12 )
      break;
    if ( !i.fields._current )
      sub_1BDBAD4(v12, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  GameObjectHelper__SetActiveSafely(this->fields.figureRoot, 1, 0LL);
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
    sub_1BDBAD4(figureCollectDictionary, *(_QWORD *)&needNum);
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
    sub_1BDBAD4(v3, v4);
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

  if ( (byte_4B3F7C1 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v3);
    sub_1BDB878(&Method_SelectGrandServantComponent__LoadGrandServantSelectEffect_b__63_0__, v4);
    byte_4B3F7C1 = 1;
  }
  GrandServantSelectEffectPrefabFolderPath = this->fields.GrandServantSelectEffectPrefabFolderPath;
  v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
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

  if ( (byte_4B3F7B7 & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4B3F7B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1BDBAD4(Instance, v4);
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
  if ( (byte_4B3F7B4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_GrandServantIconComponent__TypeInfo, method);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_GrandServantIconComponent___, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    this = (SelectGrandServantComponent_o *)sub_1BDB878(
                                              &Method_SelectGrandServantComponent__OnCenterFinished_b__48_0__,
                                              v7);
    byte_4B3F7B4 = 1;
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
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_GrandServantIconComponent___);
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
    sub_1BDB81C(&v2->fields.currentIcon);
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
        v15 = (System_Action_object__o *)sub_1BDBAC4(System_Action_GrandServantIconComponent__TypeInfo);
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
            (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
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
    sub_1BDBAD4(this, method);
  }
}


void __fastcall SelectGrandServantComponent__OnClickBack(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B3F7BB & 1) == 0 )
  {
    sub_1BDB878(&Method_SelectGrandServantComponent_OnClickBack__, method);
    byte_4B3F7BB = 1;
  }
  v3 = Method_SelectGrandServantComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_SelectGrandServantComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
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

  if ( (byte_4B3F7BE & 1) == 0 )
  {
    sub_1BDB878(&SelectGrandConfirmServantDialog_ClickDelegate_TypeInfo, method);
    sub_1BDB878(&Method_SelectGrandServantComponent_OnClickDecide__, v3);
    sub_1BDB878(&Method_SelectGrandServantComponent__OnClickDecide_b__60_0__, v4);
    byte_4B3F7BE = 1;
  }
  v5 = Method_SelectGrandServantComponent_OnClickDecide__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BDB890(Method_SelectGrandServantComponent_OnClickDecide__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  confirmServantDialog = this->fields.confirmServantDialog;
  CurrentUserServantEntity = SelectGrandServantComponent__get_CurrentUserServantEntity(this, v8);
  v10 = (SelectGrandConfirmServantDialog_ClickDelegate_o *)sub_1BDBAC4(SelectGrandConfirmServantDialog_ClickDelegate_TypeInfo);
  SelectGrandConfirmServantDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent__OnClickDecide_b__60_0__,
    0LL);
  if ( !confirmServantDialog )
    sub_1BDBAD4(v11, v12);
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
  if ( (byte_4B3F7BD & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__, v4);
    this = (SelectGrandServantComponent_o *)sub_1BDB878(&Method_SelectGrandServantComponent_OnClickLeftArrow__, v5);
    byte_4B3F7BD = 1;
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
          v9 = (_QWORD *)sub_1BDB890(Method_SelectGrandServantComponent_OnClickLeftArrow__);
        v10 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0LL);
        this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
        if ( this )
        {
          this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___IndexOf(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)v2->fields.currentIcon,
                                                    (const MethodInfo_36D6A64 *)Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
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
                                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
            if ( this )
            {
              this = (SelectGrandServantComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
              if ( centerChild )
              {
                UICenterOnChild__CenterOn_48443604(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BDBAD4(this, method);
  }
  v7 = Method_SelectGrandServantComponent_OnClickLeftArrow__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickLeftArrow__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BDB890(Method_SelectGrandServantComponent_OnClickLeftArrow__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
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
  if ( (byte_4B3F7BC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__, v4);
    this = (SelectGrandServantComponent_o *)sub_1BDB878(&Method_SelectGrandServantComponent_OnClickRightArrow__, v5);
    byte_4B3F7BC = 1;
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
          v9 = (_QWORD *)sub_1BDB890(Method_SelectGrandServantComponent_OnClickRightArrow__);
        v10 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0LL);
        this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
        if ( this )
        {
          this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___IndexOf(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)v2->fields.currentIcon,
                                                    (const MethodInfo_36D6A64 *)Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
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
                                                        (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
              if ( this )
              {
                this = (SelectGrandServantComponent_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
                if ( centerChild )
                {
                  UICenterOnChild__CenterOn_48443604(centerChild, (UnityEngine_Transform_o *)this, 1, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BDBAD4(this, method);
  }
  v7 = Method_SelectGrandServantComponent_OnClickRightArrow__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickRightArrow__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BDB890(Method_SelectGrandServantComponent_OnClickRightArrow__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
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

  if ( (byte_4B3F7C0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, userServantEntity);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BDB878(&Method_SelectGrandServantComponent___c__DisplayClass62_0__OnDecideGrandServantSelect_b__0__, v7);
    sub_1BDB878(&SelectGrandServantComponent___c__DisplayClass62_0_TypeInfo, v8);
    byte_4B3F7C0 = 1;
  }
  v9 = (Il2CppObject *)sub_1BDBAC4(SelectGrandServantComponent___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9[1].klass = (Il2CppClass *)this;
  sub_1BDB81C(&v9[1]);
  v9[1].monitor = userServantEntity;
  sub_1BDB81C(&v9[1].monitor);
  bitEffectRoot = this->fields.bitEffectRoot;
  if ( !bitEffectRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(bitEffectRoot, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = AvalonSceneManager_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v13 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v13->static_fields->DEFAULT_FADE_TIME;
  v16 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    v9,
    Method_SelectGrandServantComponent___c__DisplayClass62_0__OnDecideGrandServantSelect_b__0__,
    0LL);
  if ( !v14 )
LABEL_9:
    sub_1BDBAD4(bitEffectRoot, v11);
  CommonUI__maskFadeout(v14, 1, DEFAULT_FADE_TIME, v16, 0LL);
}


void __fastcall SelectGrandServantComponent__OnDisable(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct UnityEngine_GameObject_o **p_auroraInstance; // x20
  UnityEngine_Object_o *auroraInstance; // x21
  UnityEngine_Object_o *v8; // x21
  struct UnityEngine_GameObject_o **p_shinyInstance; // x20
  UnityEngine_Object_o *shinyInstance; // x21
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_GameObject_o **p_particleInstanceBack; // x20
  UnityEngine_Object_o *particleInstanceBack; // x21
  UnityEngine_Object_o *v14; // x21
  struct UnityEngine_GameObject_o **p_particleInstanceFront; // x20
  UnityEngine_Object_o *particleInstanceFront; // x21
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *confirmServantDialog; // x20
  struct SelectGrandConfirmServantDialog_o **p_confirmServantDialog; // x19
  UnityEngine_Object_o *v20; // x20

  if ( (byte_4B3F7C5 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v3);
    byte_4B3F7C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v5);
  StandFigureManager__ResetCameraRenderState((StandFigureManager_o *)Instance, 0LL);
  StandFigureManager__ReleaseStandFigureRenderInstances(0LL);
  p_auroraInstance = &this->fields.auroraInstance;
  auroraInstance = (UnityEngine_Object_o *)this->fields.auroraInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(auroraInstance, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Object_o *)*p_auroraInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v8, 0LL);
    *p_auroraInstance = 0LL;
    sub_1BDB81C(&this->fields.auroraInstance);
  }
  p_shinyInstance = &this->fields.shinyInstance;
  shinyInstance = (UnityEngine_Object_o *)this->fields.shinyInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shinyInstance, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Object_o *)*p_shinyInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v11, 0LL);
    *p_shinyInstance = 0LL;
    sub_1BDB81C(&this->fields.shinyInstance);
  }
  p_particleInstanceBack = &this->fields.particleInstanceBack;
  particleInstanceBack = (UnityEngine_Object_o *)this->fields.particleInstanceBack;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(particleInstanceBack, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Object_o *)*p_particleInstanceBack;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v14, 0LL);
    *p_particleInstanceBack = 0LL;
    sub_1BDB81C(&this->fields.particleInstanceBack);
  }
  p_particleInstanceFront = &this->fields.particleInstanceFront;
  particleInstanceFront = (UnityEngine_Object_o *)this->fields.particleInstanceFront;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(particleInstanceFront, 0LL, 0LL) )
  {
    v17 = (UnityEngine_Object_o *)*p_particleInstanceFront;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v17, 0LL);
    *p_particleInstanceFront = 0LL;
    sub_1BDB81C(&this->fields.particleInstanceFront);
  }
  confirmServantDialog = (UnityEngine_Object_o *)this->fields.confirmServantDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(confirmServantDialog, 0LL, 0LL) )
  {
    p_confirmServantDialog = &this->fields.confirmServantDialog;
    v20 = (UnityEngine_Object_o *)*p_confirmServantDialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v20, 0LL);
    *p_confirmServantDialog = 0LL;
    sub_1BDB81C(p_confirmServantDialog);
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

  if ( (byte_4B3F7C6 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentInChildren_UIStandFigureRender___, method);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject____77160024, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v5);
    byte_4B3F7C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
                                   (const MethodInfo_302A5B0 *)Method_UnityEngine_Component_GetComponentInChildren_UIStandFigureRender___);
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
            this->fields.auroraInstance = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51108816(
                                                                               auroraEffect,
                                                                               Child,
                                                                               (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GameObject____77160024);
            sub_1BDB81C(&this->fields.auroraInstance);
            this->fields.shinyInstance = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51108816(
                                                                              (Il2CppObject *)this->fields.shinyEffect,
                                                                              Child,
                                                                              (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GameObject____77160024);
            sub_1BDB81C(&this->fields.shinyInstance);
            this->fields.particleInstanceFront = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51108816(
                                                                                      (Il2CppObject *)this->fields.particleEffectFront,
                                                                                      Child,
                                                                                      (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GameObject____77160024);
            sub_1BDB81C(&this->fields.particleInstanceFront);
            this->fields.particleInstanceBack = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51108816(
                                                                                     (Il2CppObject *)this->fields.particleEffectBack,
                                                                                     Child,
                                                                                     (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GameObject____77160024);
            sub_1BDB81C(&this->fields.particleInstanceBack);
          }
          return;
        }
      }
LABEL_19:
      sub_1BDBAD4(transform, v8);
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

  if ( (byte_4B3F7BF & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, result);
    sub_1BDB878(&Method_SelectGrandServantComponent__OnEndGrandSetupRequest_b__61_0__, v5);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v7);
    byte_4B3F7BF = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0LL) )
  {
    confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
    v11 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SelectGrandServantComponent__OnEndGrandSetupRequest_b__61_0__,
      0LL);
    if ( confirmServantDialog )
      goto LABEL_8;
LABEL_9:
    sub_1BDBAD4(Instance, v9);
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  if ( (byte_4B3F7B0 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Application_TypeInfo, method);
    byte_4B3F7B0 = 1;
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
  Il2CppObject *Object_object__50417328; // x20
  UnityEngine_GameObject_o *bitEffectRoot; // x0
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v12; // x4
  struct SelectGrandServantEffectComponent_o *selectGrandServantEffectComponent; // x20
  System_Action_o *v14; // x21
  struct System_Action_o **p_endAct; // x20

  if ( (byte_4B3F7C2 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, v3);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_SelectGrandServantEffectComponent___, v4);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject____77160024, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&Method_SelectGrandServantComponent_EndGrandServantSelectEffect__, v7);
    byte_4B3F7C2 = 1;
  }
  grandServantSelectEffectAssetData = this->fields.grandServantSelectEffectAssetData;
  if ( !grandServantSelectEffectAssetData )
    goto LABEL_7;
  Object_object__50417328 = AssetData__GetObject_object__50417328(
                              grandServantSelectEffectAssetData,
                              this->fields.GrandServantSelectEffectPrefabName,
                              (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50417328, 0LL, 0LL) )
  {
    bitEffectRoot = this->fields.bitEffectRoot;
    if ( !bitEffectRoot )
      goto LABEL_15;
    transform = UnityEngine_GameObject__get_transform(bitEffectRoot, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this->fields.grandServantSelectEffectObj = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51108816(
                                                                                    Object_object__50417328,
                                                                                    transform,
                                                                                    (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GameObject____77160024);
    sub_1BDB81C(&this->fields.grandServantSelectEffectObj);
    bitEffectRoot = this->fields.grandServantSelectEffectObj;
    if ( !bitEffectRoot
      || (this->fields.selectGrandServantEffectComponent = (struct SelectGrandServantEffectComponent_o *)UnityEngine_GameObject__GetComponent_object_(bitEffectRoot, (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_SelectGrandServantEffectComponent___),
          sub_1BDB81C(&this->fields.selectGrandServantEffectComponent),
          (bitEffectRoot = (UnityEngine_GameObject_o *)this->fields.selectGrandServantEffectComponent) == 0LL)
      || (SelectGrandServantEffectComponent__Setup(
            (SelectGrandServantEffectComponent_o *)bitEffectRoot,
            this->fields.beforeUserServantEntity,
            this->fields.selectUserServantEntity,
            this->fields.grandGraphId,
            v12),
          selectGrandServantEffectComponent = this->fields.selectGrandServantEffectComponent,
          v14 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
          System_Action___ctor(
            v14,
            (Il2CppObject *)this,
            Method_SelectGrandServantComponent_EndGrandServantSelectEffect__,
            0LL),
          !selectGrandServantEffectComponent) )
    {
LABEL_15:
      sub_1BDBAD4(bitEffectRoot, method);
    }
    selectGrandServantEffectComponent->fields.endAct = v14;
    p_endAct = &selectGrandServantEffectComponent->fields.endAct;
    *((_BYTE *)p_endAct - 8) = 1;
    sub_1BDB81C(p_endAct);
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

  if ( (byte_4B3F7C4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isModify);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_GrandServantIconComponent___, v9);
    sub_1BDB878(&System_Func_GrandServantIconComponent__bool__TypeInfo, v10);
    sub_1BDB878(&System_IDisposable_TypeInfo, v11);
    sub_1BDB878(&System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo, v12);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo, v13);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BDB878(&Method_SelectGrandServantComponent___c__RefreshDisplayAfterEndShowServantStatus_b__67_0__, v16);
    sub_1BDB878(
      &Method_SelectGrandServantComponent___c__DisplayClass67_0__RefreshDisplayAfterEndShowServantStatus_b__1__,
      v17);
    sub_1BDB878(&SelectGrandServantComponent___c__DisplayClass67_0_TypeInfo, v18);
    sub_1BDB878(&SelectGrandServantComponent___c_TypeInfo, v19);
    byte_4B3F7C4 = 1;
  }
  v20 = (Il2CppObject *)sub_1BDBAC4(SelectGrandServantComponent___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_49;
  v20[1].klass = (Il2CppClass *)userServantEntity;
  v23 = (UserServantEntity_o **)&v20[1];
  sub_1BDB81C(&v20[1]);
  if ( questId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__67_0 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__67_0,
        v27,
        Method_SelectGrandServantComponent___c__RefreshDisplayAfterEndShowServantStatus_b__67_0__,
        0LL);
      static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
      static_fields->__9__67_0 = _9__67_0;
      Instance = (CommonUI_o *)sub_1BDB81C(&static_fields->__9__67_0);
    }
    if ( v25 )
    {
      CommonUI__CloseServantStatusDialog(v25, _9__67_0, 0LL);
      return;
    }
LABEL_49:
    sub_1BDBAD4(Instance, v22);
  }
  if ( isModify )
  {
    cachedIconList = this->fields.cachedIconList;
    v30 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_GrandServantIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v30,
      v20,
      Method_SelectGrandServantComponent___c__DisplayClass67_0__RefreshDisplayAfterEndShowServantStatus_b__1__,
      0LL);
    Instance = (CommonUI_o *)System_Linq_Enumerable__Where_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)cachedIconList,
                               (System_Func_TSource__bool__o *)v30,
                               (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_GrandServantIconComponent___);
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
      v35 = sub_1C2C00C(Instance, System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(CommonUI_o *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
    if ( !v37 )
      sub_1BDBAD4(0LL, v36);
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
        v43 = sub_1C2C00C(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v47 = sub_1C2C00C(v37, System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo, 0LL);
      }
      v48 = (GrandServantIconComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
      v51 = v48;
      if ( !v48 )
        sub_1BDBAD4(0LL, v49);
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
      v55 = sub_1C2C00C(v37, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4B3F7C3 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    byte_4B3F7C3 = 1;
  }
  this->fields.selectGrandServantEffectComponent = 0LL;
  sub_1BDB81C(&this->fields.selectGrandServantEffectComponent);
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

  if ( (byte_4B3F7B9 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_GrandServantIconComponent__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__, v3);
    sub_1BDB878(&Method_SelectGrandServantComponent___c__ResetDisplay_b__54_0__, v4);
    sub_1BDB878(&SelectGrandServantComponent___c_TypeInfo, v5);
    byte_4B3F7B9 = 1;
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
    v8 = (System_Action_object__o *)sub_1BDBAC4(System_Action_GrandServantIconComponent__TypeInfo);
    System_Action_object____ctor(v8, v9, Method_SelectGrandServantComponent___c__ResetDisplay_b__54_0__, 0LL);
    static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Action_GrandServantIconComponent__o *)v8;
    currentIcon = (void *)sub_1BDB81C(&static_fields->__9__54_0);
  }
  if ( !cachedIconList
    || (System_Collections_Generic_List_object___ForEach(
          cachedIconList,
          (System_Action_T__o *)v8,
          (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.glowEffect, 0, 0LL),
        (currentIcon = this->fields.scrollView) == 0LL) )
  {
LABEL_13:
    sub_1BDBAD4(currentIcon, method);
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

  if ( (byte_4B3F7BA & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, isEnable);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    byte_4B3F7BA = 1;
  }
  backButtonObject = this->fields.backButtonObject;
  if ( !backButtonObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       backButtonObject,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1BDBAD4(backButtonObject, isEnable);
  v9 = UnityEngine_GameObject__GetComponent_object_(
         backButtonObject,
         (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
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
  __int64 v27; // x1
  Il2CppObject *Master_object; // x23
  void *FigureImageLimitCount; // x0
  const MethodInfo *v30; // x1
  SvtMultiPortraitMaster_o *v31; // x21
  __int64 v32; // x22
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_svtId; // x27
  __int64 v34; // x24
  int32_t v35; // w22
  int32_t ServantImageLimitSealAfter; // w22
  int32_t v37; // w24
  int32_t FigureLimitCount; // w0
  int32_t ServantLimitCountSealAfter; // w0
  BalanceConfig_c *v40; // x8
  int32_t v41; // w23
  Il2CppObject *v42; // x0
  __int64 v43; // x24
  __int64 v44; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x23
  __int64 v46; // x23
  __int64 v47; // x24
  int32_t v48; // w0
  int32_t v49; // w23
  int32_t v50; // w24
  __int64 v51; // x23
  __int64 v52; // x24
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x21
  int32_t size; // w8
  UIStandFigureR_o *v55; // x21
  __int64 v56; // x20
  __int64 v57; // x23
  UnityEngine_Object_o *gameObject; // x20
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x0
  const MethodInfo *v63; // x2
  int32_t v64; // w20
  bool v65; // w22
  System_Collections_Generic_List_object__o *v66; // x23
  int32_t v67; // w23
  SvtMultiPortraitEntity_o *v68; // x24
  int32_t v69; // w25
  UIStandFigureR_o *v70; // x26
  UnityEngine_Object_o *v71; // x25
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  Il2CppObject *v75; // x0
  struct System_Int32_array *commonPosition; // x8
  __int64 v77; // x2
  struct System_Int32_array *v78; // x8
  UnityEngine_GameObject_o *v79; // x27
  int32_t v80; // w26
  System_Action_o *v81; // x28
  UnityEngine_Component_o *v82; // x25
  struct System_Int32_array *v83; // x8
  struct System_Int32_array *v84; // x8
  System_Collections_Generic_List_object__o *v85; // x26
  StandFigureCollect_o *v86; // x27
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  Il2CppObject *v91; // x21
  UnityEngine_GameObject_o *figureRoot; // x21
  __int64 v93; // x20
  __int64 v94; // x23
  int32_t v95; // w20
  System_Action_o *v96; // x23
  UIStandFigureR_o *RenderPrefabWithEffect; // x22
  System_Collections_Generic_List_object__o *v98; // x21
  StandFigureCollect_o *v99; // x20
  struct System_Object_array *items; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *v105; // [xsp+30h] [xbp-80h] BYREF
  Il2CppObject *v106; // [xsp+38h] [xbp-78h] BYREF
  int32_t value[2]; // [xsp+40h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4B3F7B6 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, userServantEntity);
    sub_1BDB878(&BalanceConfig_TypeInfo, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_SvtMultiPortraitMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__, v12);
    sub_1BDB878(&Method_System_Linq_Enumerable_First_StandFigureCollect___, v13);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v14);
    sub_1BDB878(&int_TypeInfo, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_StandFigureCollect__Add__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Count__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Item__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__, v20);
    sub_1BDB878(&System_Collections_Generic_List_StandFigureCollect__TypeInfo, v21);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1BDB878(&Method_SelectGrandServantComponent_OnAfterGenerateFigure__, v23);
    sub_1BDB878(&StandFigureCamera_TypeInfo, v24);
    sub_1BDB878(&StandFigureCollect_TypeInfo, v25);
    sub_1BDB878(&StandFigureManager_TypeInfo, v26);
    sub_1BDB878(&StringLiteral_13006/*"StandFigureR({0})"*/, v27);
    byte_4B3F7B6 = 1;
  }
  *(_QWORD *)value = 0LL;
  entity = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  FigureImageLimitCount = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
  if ( !userServantEntity )
    goto LABEL_87;
  v31 = (SvtMultiPortraitMaster_o *)FigureImageLimitCount;
  p_svtId = &userServantEntity->fields.svtId;
  v32 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = v32;
  *(_QWORD *)&v109.fields.fakeValue = v34;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v109, 0LL);
  FigureImageLimitCount = (void *)UserServantEntity__getFigureImageLimitCount(userServantEntity, 0, 0LL);
  if ( !Master_object )
    goto LABEL_87;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 v35,
                                 (int32_t)FigureImageLimitCount,
                                 0LL);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(userServantEntity->fields.svtId, 0LL);
  FigureLimitCount = UserServantEntity__getFigureLimitCount(userServantEntity, 0, 0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 v37,
                                 FigureLimitCount,
                                 0LL);
  v40 = BalanceConfig_TypeInfo;
  v41 = ServantLimitCountSealAfter;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  if ( v41 == v40->static_fields->ServantLimitMax )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v42 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
    v44 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v43 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)v42;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v110.fields.currentCryptoKey = v44;
    *(_QWORD *)&v110.fields.fakeValue = v43;
    FigureImageLimitCount = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v110, 0LL);
    if ( !v45 )
      goto LABEL_87;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v45,
           &entity,
           (int32_t)FigureImageLimitCount,
           (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      FigureImageLimitCount = entity;
      if ( !entity )
        goto LABEL_87;
      if ( ServantEntity__IsContainOverwriteGrandGraphImageLimitCount((ServantEntity_o *)entity, &value[1], 0LL) )
      {
        v47 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v46 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v111.fields.currentCryptoKey = v47;
        *(_QWORD *)&v111.fields.fakeValue = v46;
        v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v111, 0LL);
        v49 = value[1];
        v50 = v48;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        if ( ImageLimitCount__TryGetGrandImageLimitCount(v50, v49, value, 0LL) )
          ServantImageLimitSealAfter = value[0];
      }
    }
  }
  SelectGrandServantComponent__DeactivateRenderer(this, v30);
  v52 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v52;
  *(_QWORD *)&v112.fields.fakeValue = v51;
  FigureImageLimitCount = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v112, 0LL);
  if ( !v31 )
    goto LABEL_87;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(
                        v31,
                        (int32_t)FigureImageLimitCount,
                        ServantImageLimitSealAfter,
                        3,
                        0LL);
  StandFigureManager__ReleaseStandFigureRenderInstances(0LL);
  if ( EntityListOrderBy )
    size = EntityListOrderBy->fields._size;
  else
    size = 1;
  StandFigureManager_TypeInfo->static_fields->numberServantPortrait = size;
  FigureImageLimitCount = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntityListOrderBy, 0LL);
  if ( ((unsigned __int8)FigureImageLimitCount & 1) != 0 )
  {
    FigureImageLimitCount = this->fields.figureCollectDictionary;
    if ( FigureImageLimitCount )
    {
      if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
             (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
             1,
             &v105,
             (const MethodInfo_333CAAC *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__) )
      {
        FigureImageLimitCount = System_Linq_Enumerable__First_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v105,
                                  (const MethodInfo_3056768 *)Method_System_Linq_Enumerable_First_StandFigureCollect___);
        if ( FigureImageLimitCount )
        {
          v55 = (UIStandFigureR_o *)*((_QWORD *)FigureImageLimitCount + 3);
          v57 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v56 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v113.fields.currentCryptoKey = v57;
          *(_QWORD *)&v113.fields.fakeValue = v56;
          FigureImageLimitCount = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v113, 0LL);
          if ( v55 )
          {
            UIStandFigureR__SetCharacterWithEffect(
              v55,
              (int32_t)FigureImageLimitCount,
              ServantImageLimitSealAfter,
              8,
              0,
              0,
              0.0,
              0LL,
              0LL);
            UIStandFigureR__SetDepth(v55, 1, 0LL);
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v55,
                                                   0LL);
            v104 = *p_svtId;
            v62 = (Il2CppObject *)j_il2cpp_value_box_0(
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    &v104,
                                    v59,
                                    v60,
                                    v61);
            FigureImageLimitCount = System_String__Format((System_String_o *)StringLiteral_13006/*"StandFigureR({0})"*/, v62, 0LL);
            if ( gameObject )
            {
              UnityEngine_Object__set_name(gameObject, (System_String_o *)FigureImageLimitCount, 0LL);
              v64 = 1;
              goto LABEL_86;
            }
          }
        }
      }
      else
      {
        figureRoot = this->fields.figureRoot;
        v94 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v93 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v114.fields.currentCryptoKey = v94;
        *(_QWORD *)&v114.fields.fakeValue = v93;
        v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v114, 0LL);
        v96 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(v96, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnAfterGenerateFigure__, 0LL);
        RenderPrefabWithEffect = StandFigureManager__CreateRenderPrefabWithEffect(
                                   figureRoot,
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
        v98 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v98,
          (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
        v99 = (StandFigureCollect_o *)sub_1BDBAC4(StandFigureCollect_TypeInfo);
        StandFigureCollect___ctor(v99, 0LL, RenderPrefabWithEffect, 0LL);
        if ( v98 )
        {
          items = v98->fields._items;
          v101 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
          ++v98->fields._version;
          if ( items )
          {
            v102 = v98->fields._size;
            if ( (unsigned int)v102 >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v98,
                (Il2CppObject *)v99,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v103 = &items->obj.klass + v102;
              v98->fields._size = v102 + 1;
              v103[4] = (Il2CppClass *)v99;
              sub_1BDB81C(v103 + 4);
            }
            v105 = (Il2CppObject *)v98;
            FigureImageLimitCount = this->fields.figureCollectDictionary;
            if ( FigureImageLimitCount )
            {
              v64 = 1;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
                1,
                (Il2CppObject *)v98,
                (const MethodInfo_333B30C *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
              goto LABEL_86;
            }
          }
        }
      }
    }
LABEL_87:
    sub_1BDBAD4(FigureImageLimitCount, v30);
  }
  if ( !EntityListOrderBy )
    goto LABEL_87;
  FigureImageLimitCount = this->fields.figureCollectDictionary;
  if ( !FigureImageLimitCount )
    goto LABEL_87;
  v64 = EntityListOrderBy->fields._size;
  v65 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
          v64,
          &v106,
          (const MethodInfo_333CAAC *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
  if ( !v65 )
  {
    v66 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v66,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    v106 = (Il2CppObject *)v66;
    FigureImageLimitCount = this->fields.figureCollectDictionary;
    if ( !FigureImageLimitCount )
      goto LABEL_87;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      (System_Collections_Generic_Dictionary_int__object__o *)FigureImageLimitCount,
      v64,
      (Il2CppObject *)v66,
      (const MethodInfo_333B30C *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
  }
  if ( EntityListOrderBy->fields._size >= 1 )
  {
    v67 = 0;
    do
    {
      FigureImageLimitCount = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)EntityListOrderBy,
                                v67,
                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Item__);
      if ( !FigureImageLimitCount )
        goto LABEL_87;
      v68 = (SvtMultiPortraitEntity_o *)FigureImageLimitCount;
      v69 = *((_DWORD *)FigureImageLimitCount + 9) + 1;
      if ( v65 )
      {
        FigureImageLimitCount = v106;
        if ( !v106 )
          goto LABEL_87;
        FigureImageLimitCount = System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)v106,
                                  v67,
                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
        if ( !FigureImageLimitCount )
          goto LABEL_87;
        v70 = (UIStandFigureR_o *)*((_QWORD *)FigureImageLimitCount + 3);
        if ( !v70 )
          goto LABEL_87;
        UIStandFigureR__SetCharacterForImageIdWithEffect(
          *((UIStandFigureR_o **)FigureImageLimitCount + 3),
          v68->fields.portraitImageId,
          8,
          0,
          0,
          0LL,
          0,
          0LL);
        UIStandFigureR__SetDepth(v70, v69, 0LL);
        v70->fields.svtMultiPortraitEntity = v68;
        sub_1BDB81C(&v70->fields.svtMultiPortraitEntity);
        v71 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v70, 0LL);
        v104.fields.currentCryptoKey = v68->fields.portraitImageId;
        v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v72, v73, v74);
        FigureImageLimitCount = System_String__Format((System_String_o *)StringLiteral_13006/*"StandFigureR({0})"*/, v75, 0LL);
        if ( !v71 )
          goto LABEL_87;
        UnityEngine_Object__set_name(v71, (System_String_o *)FigureImageLimitCount, 0LL);
        commonPosition = v68->fields.commonPosition;
        if ( commonPosition && (int)commonPosition->max_length >= 2 )
        {
          FigureImageLimitCount = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v70, 0LL);
          v78 = v68->fields.commonPosition;
          if ( !v78 )
            goto LABEL_87;
          if ( v78->max_length < 2 )
            goto LABEL_88;
          GameObjectExtensions__SetLocalPosition_35211104(
            (UnityEngine_GameObject_o *)FigureImageLimitCount,
            (float)v78->m_Items[1],
            (float)v78->m_Items[2],
            0LL);
        }
      }
      else
      {
        v79 = this->fields.figureRoot;
        v80 = *((_DWORD *)FigureImageLimitCount + 8);
        if ( v67 == EntityListOrderBy->fields._size - 1 )
        {
          v81 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
                                  v79,
                                  v80,
                                  8,
                                  0,
                                  v69,
                                  v81,
                                  0,
                                  -1,
                                  0LL,
                                  0LL);
        if ( !FigureImageLimitCount )
          goto LABEL_87;
        v82 = (UnityEngine_Component_o *)FigureImageLimitCount;
        *((_QWORD *)FigureImageLimitCount + 17) = v68;
        sub_1BDB81C((char *)FigureImageLimitCount + 136);
        v83 = v68->fields.commonPosition;
        if ( v83 && (int)v83->max_length >= 2 )
        {
          FigureImageLimitCount = UnityEngine_Component__get_gameObject(v82, 0LL);
          v84 = v68->fields.commonPosition;
          if ( !v84 )
            goto LABEL_87;
          if ( v84->max_length < 2 )
LABEL_88:
            sub_1BDBADC(FigureImageLimitCount, v30, v77);
          GameObjectExtensions__SetLocalPosition_35211104(
            (UnityEngine_GameObject_o *)FigureImageLimitCount,
            (float)v84->m_Items[1],
            (float)v84->m_Items[2],
            0LL);
        }
        v85 = (System_Collections_Generic_List_object__o *)v106;
        v86 = (StandFigureCollect_o *)sub_1BDBAC4(StandFigureCollect_TypeInfo);
        StandFigureCollect___ctor(v86, v68, (UIStandFigureR_o *)v82, 0LL);
        if ( !v85 )
          goto LABEL_87;
        v87 = v85->fields._items;
        v88 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
        ++v85->fields._version;
        if ( !v87 )
          goto LABEL_87;
        v89 = v85->fields._size;
        if ( (unsigned int)v89 >= v87->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v85,
            (Il2CppObject *)v86,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v90 = &v87->obj.klass + v89;
          v85->fields._size = v89 + 1;
          v90[4] = (Il2CppClass *)v86;
          sub_1BDB81C(v90 + 4);
        }
      }
    }
    while ( ++v67 < EntityListOrderBy->fields._size );
  }
  v91 = v106;
  if ( !StandFigureCamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo);
  StandFigureCamera__SetupEffects((System_Collections_Generic_List_StandFigureCollect__o *)v91, 0LL);
LABEL_86:
  SelectGrandServantComponent__DisplayFigureWithEffect(this, v64, v63);
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

  if ( (byte_4B3F7B1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_UserServantEntity__TypeInfo, *(_QWORD *)&useGrandGraphId);
    sub_1BDB878(&Method_SelectGrandServantComponent_OnDecideGrandServantSelect__, v9);
    sub_1BDB878(&StandFigureCamera_TypeInfo, v10);
    byte_4B3F7B1 = 1;
  }
  this->fields.onClickBackAction = onClickBack;
  sub_1BDB81C(&this->fields.onClickBackAction);
  v11 = (System_Action_object__o *)sub_1BDBAC4(System_Action_UserServantEntity__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_OnDecideGrandServantSelect__,
    0LL);
  this->fields.onDecideGrandAction = (struct System_Action_UserServantEntity__o *)v11;
  sub_1BDB81C(&this->fields.onDecideGrandAction);
  this->fields.effectEndCallback = onDecideGrand;
  sub_1BDB81C(&this->fields.effectEndCallback);
  this->fields.selectUserServantEntity = 0LL;
  sub_1BDB81C(&this->fields.selectUserServantEntity);
  this->fields.beforeUserServantEntity = 0LL;
  sub_1BDB81C(&this->fields.beforeUserServantEntity);
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

  if ( (byte_4B3F7B3 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, method);
    sub_1BDB878(&System_Action_bool__int__UserServantEntity__TypeInfo, v3);
    sub_1BDB878(&System_Comparison_UserServantEntity__TypeInfo, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_AsEnumerable_UserServantEntity___, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Concat_UserServantEntity___, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_Reverse_UserServantEntity___, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v10);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v11);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_FixedSpringPanel___, v12);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_UICenterOnChild___, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__Add__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__Sort__, v16);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v20);
    sub_1BDB878(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GrandServantIconComponent___, v22);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v23);
    sub_1BDB878(&UIScrollView_OnDragNotification_TypeInfo, v24);
    sub_1BDB878(&SpringPanel_OnFinished_TypeInfo, v25);
    sub_1BDB878(&Method_SelectGrandServantComponent_CompareUserServant__, v26);
    sub_1BDB878(&Method_SelectGrandServantComponent_OnCenterFinished__, v27);
    sub_1BDB878(&Method_SelectGrandServantComponent_OnDragStarted__, v28);
    sub_1BDB878(&Method_SelectGrandServantComponent_RefreshDisplayAfterEndShowServantStatus__, v29);
    sub_1BDB878(&Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_47_0__, v30);
    byte_4B3F7B3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_67;
  CanSelectToGrandList = UserServantMaster__GetCanSelectToGrandList(Master_object, this->fields.grandGraphId, 0LL);
  v34 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)CanSelectToGrandList,
                                                       (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
  v35 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_UserServantEntity__TypeInfo);
  System_Comparison_object____ctor(
    v35,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_CompareUserServant__,
    0LL);
  if ( !v34 )
    goto LABEL_67;
  System_Collections_Generic_List_object___Sort_57505928(
    v34,
    v35,
    (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_UserServantEntity__Sort__);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v37 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( v34->fields._size >= 1 )
  {
    v38 = 0;
    do
    {
      Master_object = (UserServantMaster_o *)System_Collections_Generic_List_object___get_Item(
                                               v34,
                                               v38,
                                               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
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
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v46 + 192) + 112LL));
          continue;
        }
        v42 = &v39->obj.klass + v41;
        v37->fields._size = v41 + 1;
      }
      v42[4] = (Il2CppClass *)v32;
      sub_1BDB81C(v42 + 4);
    }
    while ( ++v38 < v34->fields._size );
  }
  v48 = System_Linq_Enumerable__AsEnumerable_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (const MethodInfo_3042028 *)Method_System_Linq_Enumerable_AsEnumerable_UserServantEntity___);
  v49 = System_Linq_Enumerable__Reverse_object_(
          v48,
          (const MethodInfo_30606EC *)Method_System_Linq_Enumerable_Reverse_UserServantEntity___);
  v50 = System_Linq_Enumerable__Concat_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          v49,
          (const MethodInfo_304C4A8 *)Method_System_Linq_Enumerable_Concat_UserServantEntity___);
  Master_object = (UserServantMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                           v50,
                                           (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
  if ( !Master_object )
LABEL_67:
    sub_1BDBAD4(Master_object, v32);
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  minimumRequiredElementNum = this->fields.minimumRequiredElementNum;
  v54 = Master_object;
  v55 = (int)MasterName_k__BackingField;
  if ( minimumRequiredElementNum > (int)MasterName_k__BackingField && (int)MasterName_k__BackingField > 1 )
  {
    v56 = (float)minimumRequiredElementNum;
    if ( !byte_4B3EFD1 )
    {
      sub_1BDB878(&System_Math_TypeInfo, v32);
      byte_4B3EFD1 = 1;
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
      sub_1BDBADC(Master_object, v32, v51);
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
      v64 = UnityEngine_Object__Instantiate_object__51108816(
              grandServantIconComponent,
              transform,
              (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GrandServantIconComponent___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v64, 1, 0LL);
      v65 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v65,
        (Il2CppObject *)this,
        (intptr_t)Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_47_0__,
        0LL);
      v66 = (System_Action_T1__T2__T3__o *)sub_1BDBAC4(System_Action_bool__int__UserServantEntity__TypeInfo);
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
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = v68 + 8 * MasterName_k__BackingField_low;
        LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
        *(_QWORD *)(v71 + 32) = v64;
        Master_object = (UserServantMaster_o *)sub_1BDB81C(v71 + 32);
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
                                                            (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_FixedSpringPanel___);
  sub_1BDB81C(&this->fields.springPanel);
  Master_object = (UserServantMaster_o *)this->fields.wrapContent;
  if ( !Master_object )
    goto LABEL_67;
  v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  this->fields.centerChild = (struct UICenterOnChild_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                           v74,
                                                           (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_UICenterOnChild___);
  Master_object = (UserServantMaster_o *)sub_1BDB81C(&this->fields.centerChild);
  centerChild = this->fields.centerChild;
  if ( !centerChild )
    goto LABEL_67;
  onFinished = (System_Delegate_o *)centerChild->fields.onFinished;
  p_onFinished = &centerChild->fields.onFinished;
  v78 = (SpringPanel_OnFinished_o *)sub_1BDBAC4(SpringPanel_OnFinished_TypeInfo);
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
  sub_1BDB81C(p_onFinished);
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
  v84 = (UIScrollView_OnDragNotification_o *)sub_1BDBAC4(UIScrollView_OnDragNotification_TypeInfo);
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
    sub_1BDBD94(v80);
LABEL_63:
    *p_onFinished = v80;
  }
  Master_object = (UserServantMaster_o *)sub_1BDB81C(p_onFinished);
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
  Il2CppObject *Object_object__50417328; // x20
  UnityEngine_Transform_o *transform; // x21

  if ( (byte_4B3F7B2 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, method);
    sub_1BDB878(&AssetManager_TypeInfo, v3);
    sub_1BDB878(&AtlasManager_TypeInfo, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_SelectGrandConfirmServantDialog___, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject____77160024, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_20559/*"img_selected_frame"*/, v9);
    sub_1BDB878(&StringLiteral_7153/*"GrandServantList"*/, v10);
    sub_1BDB878(&StringLiteral_9382/*"Name_BG_Gradation"*/, v11);
    sub_1BDB878(&StringLiteral_11506/*"SELECT_GRAND_HEADER_MESSAGE"*/, v12);
    sub_1BDB878(&StringLiteral_20678/*"img_txt_grand_class"*/, v13);
    sub_1BDB878(&StringLiteral_12639/*"SelectGrandConfirmServantDialog"*/, v14);
    sub_1BDB878(&StringLiteral_20312/*"img_arrow"*/, v15);
    byte_4B3F7B2 = 1;
  }
  AndroidBackKeyManager__AddBackKeyTarget(this->fields.backButtonObject, 0LL);
  headerMessageLabel = this->fields.headerMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  bitEffectRoot = LocalizationManager__Get((System_String_o *)StringLiteral_11506/*"SELECT_GRAND_HEADER_MESSAGE"*/, 0LL);
  if ( !headerMessageLabel )
    goto LABEL_26;
  UILabel__set_text(headerMessageLabel, bitEffectRoot, 0LL);
  headerMessageBgSprite = this->fields.headerMessageBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(headerMessageBgSprite, (System_String_o *)StringLiteral_20678/*"img_txt_grand_class"*/, 0LL);
  bitEffectRoot = (System_String_o *)this->fields.headerMessageBgSprite;
  if ( !bitEffectRoot )
    goto LABEL_26;
  ((void (__fastcall *)(System_String_o *, void *))bitEffectRoot->klass[1]._1.typeMetadataHandle)(
    bitEffectRoot,
    bitEffectRoot->klass[1]._1.interopData);
  AtlasManager__SetGrandServantListImage(this->fields.nameBgSprite, (System_String_o *)StringLiteral_9382/*"Name_BG_Gradation"*/, 0LL);
  bitEffectRoot = (System_String_o *)AtlasManager__SetGrandServantListImage(
                                       this->fields.glowSprite,
                                       (System_String_o *)StringLiteral_20559/*"img_selected_frame"*/,
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
        sub_1BDBADC(bitEffectRoot, v18, v20);
      v24 = arrowSprite->m_Items[v23];
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      bitEffectRoot = (System_String_o *)AtlasManager__SetGrandServantListImage(
                                           v24,
                                           (System_String_o *)StringLiteral_20312/*"img_arrow"*/,
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
  bitEffectRoot = (System_String_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_7153/*"GrandServantList"*/, 0LL);
  if ( !bitEffectRoot )
    goto LABEL_26;
  Object_object__50417328 = AssetData__GetObject_object__50417328(
                              (AssetData_o *)bitEffectRoot,
                              (System_String_o *)StringLiteral_12639/*"SelectGrandConfirmServantDialog"*/,
                              (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  bitEffectRoot = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !bitEffectRoot )
    goto LABEL_26;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bitEffectRoot, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bitEffectRoot = (System_String_o *)UnityEngine_Object__Instantiate_object__51108816(
                                       Object_object__50417328,
                                       transform,
                                       (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GameObject____77160024);
  if ( !bitEffectRoot )
LABEL_26:
    sub_1BDBAD4(bitEffectRoot, v18);
  this->fields.confirmServantDialog = (struct SelectGrandConfirmServantDialog_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                    (UnityEngine_GameObject_o *)bitEffectRoot,
                                                                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_SelectGrandConfirmServantDialog___);
  sub_1BDB81C(&this->fields.confirmServantDialog);
}


void __fastcall SelectGrandServantComponent___LoadGrandServantSelectEffect_b__63_0(
        SelectGrandServantComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  this->fields.grandServantSelectEffectAssetData = assetData;
  sub_1BDB81C(&this->fields.grandServantSelectEffectAssetData);
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
    sub_1BDBAD4(currentIcon, elm);
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

  if ( (byte_4B3F7C9 & 1) == 0 )
  {
    sub_1BDB878(&Method_NetworkManager_getRequest_SetupGrandServantRequest___, isDecide);
    sub_1BDB878(&NetworkManager_TypeInfo, v5);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BDB878(&Method_SelectGrandServantComponent_OnEndGrandSetupRequest__, v8);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_1BDB878(&UserServantEntity_TypeInfo, v10);
    byte_4B3F7C9 = 1;
  }
  if ( isDecide )
  {
    CurrentUserServantEntity = SelectGrandServantComponent__get_CurrentUserServantEntity(
                                 this,
                                 (const MethodInfo *)isDecide);
    v12 = (UserServantEntity_o *)sub_1BDBAC4(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_42095292(v12, CurrentUserServantEntity, 0LL);
    this->fields.beforeUserServantEntity = v12;
    sub_1BDB81C(&this->fields.beforeUserServantEntity);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SelectGrandServantComponent_OnEndGrandSetupRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
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
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v20, 0LL);
        if ( v17 )
        {
          SetupGrandServantRequest__beginRequest(v17, grandGraphId, Instance, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1BDBAD4(Instance, isDecide);
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

  if ( (byte_4B3F7CA & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_UserServantEntity___, method);
    byte_4B3F7CA = 1;
  }
  onDecideGrandAction = (System_Action_T__o *)this->fields.onDecideGrandAction;
  CurrentUserServantEntity = (Il2CppObject *)SelectGrandServantComponent__get_CurrentUserServantEntity(this, method);
  ActionExtensions__Call_object_(
    onDecideGrandAction,
    CurrentUserServantEntity,
    (const MethodInfo_2F82FCC *)Method_ActionExtensions_Call_UserServantEntity___);
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

  if ( (byte_4B3F7C8 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__, *(_QWORD *)&index);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_47_0__, v6);
    byte_4B3F7C8 = 1;
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
          v11 = (_QWORD *)sub_1BDB890(Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_47_0__);
        v12 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v11, v11[4]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0LL);
        SelectGrandServantComponent__ResetDisplay(this, v13);
        scrollView = (UIScrollView_o *)this->fields.cachedIconList;
        if ( scrollView )
        {
          centerChild = this->fields.centerChild;
          scrollView = (UIScrollView_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)scrollView,
                                           index,
                                           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
          if ( scrollView )
          {
            scrollView = (UIScrollView_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)scrollView,
                                             0LL);
            if ( centerChild )
            {
              UICenterOnChild__CenterOn_48443604(centerChild, (UnityEngine_Transform_o *)scrollView, 1, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_1BDBAD4(scrollView, v9);
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

  if ( (byte_4B3F7AF & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3F7AF = 1;
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
      sub_1BDBAD4(0LL, v4);
    return v7->fields._UserServantEntity_k__BackingField;
  }
  return result;
}


void __fastcall SelectGrandServantComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B3F7CB & 1) == 0 )
  {
    sub_1BDB878(&SelectGrandServantComponent___c_TypeInfo, v1);
    byte_4B3F7CB = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(SelectGrandServantComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SelectGrandServantComponent___c_TypeInfo->static_fields->__9 = (struct SelectGrandServantComponent___c_o *)v2;
  sub_1BDB81C(SelectGrandServantComponent___c_TypeInfo->static_fields);
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

  if ( (byte_4B3F7CC & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3F7CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall SelectGrandServantComponent___c___ResetDisplay_b__54_0(
        SelectGrandServantComponent___c_o *this,
        GrandServantIconComponent_o *elm,
        const MethodInfo *method)
{
  if ( !elm )
    sub_1BDBAD4(this, 0LL);
  GrandServantIconComponent__ResetOffset(elm, (const MethodInfo *)elm);
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
        sub_1BDB81C(&_4__this->fields.selectUserServantEntity),
        (this = (SelectGrandServantComponent___c__DisplayClass62_0_o *)v3->fields.__4__this) == 0LL) )
  {
    sub_1BDBAD4(this, method);
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
  if ( (byte_4B3F7CD & 1) == 0 )
  {
    this = (SelectGrandServantComponent___c__DisplayClass67_0_o *)sub_1BDB878(
                                                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                    icon);
    byte_4B3F7CD = 1;
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
  this = (SelectGrandServantComponent___c__DisplayClass67_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                                  &v11,
                                                                  0LL);
  userServantEntity = v4->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_9:
    sub_1BDBAD4(this, icon);
  v8 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v8;
  return this == (SelectGrandServantComponent___c__DisplayClass67_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                                          &v10,
                                                                          0LL);
}
void EventRecipeListViewManager___ctor(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventRecipeListViewManager__CheckOpenQuest(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewManager_resData_o *response,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 currentEventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  il2cpp_array_size_t max_length; // x9
  UserEventPointEntity_o *v9; // x8
  int64_t value; // x2

  if ( (byte_59328CA & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59328CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_11;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_11;
  max_length = oldUserEventPoint->max_length;
  currentEventId = (unsigned int)this->fields.currentEventId;
  if ( !max_length )
  {
    value = 0;
    if ( Instance )
      goto LABEL_9;
LABEL_11:
    sub_21FFECC(Instance, currentEventId);
  }
  if ( !(_DWORD)max_length )
    sub_21FFED4(Instance);
  v9 = oldUserEventPoint->m_Items[0];
  if ( !v9 )
    goto LABEL_11;
  value = v9->fields.value;
  if ( !Instance )
    goto LABEL_11;
LABEL_9:
  CommonUI__CheckOpenQuestByEventPoint(
    (CommonUI_o *)Instance,
    currentEventId,
    value,
    0,
    0,
    0.0,
    0,
    (System_String_o *)StringLiteral_1/*""*/,
    0);
}


void EventRecipeListViewManager__CreateList(
        EventRecipeListViewManager_o *this,
        EventRecipeEntity_array *eventRecipeEntities,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  unsigned int v10; // w26
  EventRecipeEntity_o *v11; // x23
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  int32_t id; // w24
  EventRecipeGiftEntity_array *v14; // x25
  EventRecipeListViewItem_o *v15; // x22
  const MethodInfo *v16; // x5
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_59328C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
    sub_21FFC50(&EventRecipeListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_5927/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_59328C1 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !eventRecipeEntities )
    goto LABEL_21;
  max_length = eventRecipeEntities->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_21FFED4(Instance);
      v11 = eventRecipeEntities->m_Items[v10];
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
      if ( !v11 )
        break;
      if ( !Instance )
        break;
      SortedEntityArray = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)Instance,
                            v11->fields.id,
                            0);
      id = v11->fields.id;
      v14 = SortedEntityArray;
      v15 = (EventRecipeListViewItem_o *)sub_21FFEBC(EventRecipeListViewItem_TypeInfo);
      EventRecipeListViewItem___ctor(v15, id, v11, v14, eventId, v16);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v15,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v26 + 32) = v15;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)v15, v17, v18, v19, v20, v21, v22);
      }
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_16;
    }
LABEL_21:
    sub_21FFECC(Instance, v8);
  }
LABEL_16:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
  if ( !eventRecipeEntities->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5927/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0);
    if ( !emptyMessageLabel )
      goto LABEL_21;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  }
}


void EventRecipeListViewManager__CreateRecipeResponse(
        EventRecipeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *touchPanel; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_object__bool__o *v15; // x23
  Il2CppObject *v16; // x0
  EventRecipeEntity_o **v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Action_int__string____Action__o *playVoiceAction; // x9
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *v27; // x22
  System_Object_array *v28; // x0
  __int64 *v29; // x22
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x8
  __int64 v43; // x8
  __int64 v44; // x1
  System_Int32_array *v45; // x22
  __int64 v46; // x8
  const MethodInfo *v47; // x1
  EventRecipeGiftEntity_o *v48; // x24
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x25
  BattleDropItem_array *v50; // x23
  EventRecipeEntity_o *v51; // x21
  System_Action_o *v52; // x26
  RecipeRewardDialogComponent_GetEffect_o *v53; // x20
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x7
  const MethodInfo *v56; // x1

  if ( (byte_59328C8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
    sub_21FFC50(&Method_EventRecipeListViewManager_GetEffect__);
    sub_21FFC50(&System_Func_EventRecipeEntity__bool__TypeInfo);
    sub_21FFC50(&RecipeRewardDialogComponent_GetEffect_TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__);
    sub_21FFC50(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__);
    sub_21FFC50(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_59328C8 = 1;
  }
  v5 = sub_21FFEBC(EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_27;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v15 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventRecipeEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          eventRecipeEntities,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  *(_QWORD *)(v5 + 32) = v16;
  v17 = (EventRecipeEntity_o **)(v5 + 32);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v16, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_27;
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_27;
  ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))playVoiceAction->fields.invoke_impl)(
    playVoiceAction->fields.method_code,
    (unsigned int)this->fields.svtId,
    *(_QWORD *)(*(_QWORD *)(v5 + 32) + 72LL),
    0,
    playVoiceAction->fields.method);
  v27 = (Il2CppObject *)System_String__Concat_75481624(
                          (System_String_o *)StringLiteral_16395/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16659/*"]"*/,
                          0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v25, v26);
  v28 = JsonManager__DeserializeArray_object_(
          v27,
          (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  *(_QWORD *)(v5 + 40) = v28;
  v29 = (__int64 *)(v5 + 40);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)v28, v30, v31, v32, v33, v34, v35);
  touchPanel = this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_27;
  touchPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)touchPanel, 0);
  if ( !touchPanel )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0);
  touchPanel = this->fields.maskPanel;
  if ( !touchPanel )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0);
  v42 = *v29;
  if ( !*v29 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v42 + 24) )
    goto LABEL_28;
  v43 = *(_QWORD *)(v42 + 32);
  if ( !v43 )
    goto LABEL_27;
  v45 = *(System_Int32_array **)(v43 + 16);
  v44 = *(_QWORD *)(v43 + 24);
  *(_QWORD *)(v5 + 24) = v44;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), v44, v36, v37, v38, v39, v40, v41);
  v46 = *(_QWORD *)(v5 + 40);
  if ( !v46 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v46 + 24) )
    goto LABEL_28;
  if ( !*(_QWORD *)(v46 + 32) )
    goto LABEL_27;
  touchPanel = this->fields.recipeRewardDialog;
  if ( !touchPanel
    || (RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)touchPanel, v7),
        (touchPanel = this->fields.recipePointRewardDialog) == 0)
    || (RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)touchPanel, v7),
        EventRecipeListViewManager__RequestListObject(this, v47),
        (touchPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (touchPanel = DataManager__GetMasterData_object_(
                       (DataManager_o *)touchPanel,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*v17)
    || !touchPanel
    || (touchPanel = EventRecipeGiftMaster__GetSortedEntityArray(
                       (EventRecipeGiftMaster_o *)touchPanel,
                       (*v17)->fields.id,
                       0)) == 0 )
  {
LABEL_27:
    sub_21FFECC(touchPanel, v7);
  }
  if ( !*((_DWORD *)touchPanel + 6) )
LABEL_28:
    sub_21FFED4(touchPanel);
  v48 = (EventRecipeGiftEntity_o *)*((_QWORD *)touchPanel + 4);
  recipeRewardDialog = this->fields.recipeRewardDialog;
  v50 = *(BattleDropItem_array **)(v5 + 24);
  v51 = *v17;
  v52 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v5,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__,
    0);
  v53 = (RecipeRewardDialogComponent_GetEffect_o *)sub_21FFEBC(RecipeRewardDialogComponent_GetEffect_TypeInfo);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v53,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    v54);
  if ( !recipeRewardDialog )
    goto LABEL_27;
  RecipeRewardDialogComponent__Open(recipeRewardDialog, v45, v50, v51, v48, v52, v53, v55);
  ActionExtensions__Call(this->fields.recipeCallback, 0);
  EventRecipeListViewManager__UpdateEventItemList(this, v56);
}


void EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *currencyInfoController; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Object_o *recipeRewardDialog; // x20
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_59328C2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59328C2 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    RecipeAssetManager__Release(assetManager, this->fields.currentEventId, v4);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(recipeConfirmDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    this->fields.recipeConfirmDialog = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.recipeConfirmDialog, 0, v13, v14, v15, v16, v17, v18);
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(recipeRewardDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
    UnityEngine_Object__Destroy_83246496(v23, 0);
    this->fields.recipeRewardDialog = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.recipeRewardDialog, 0, v24, v25, v26, v27, v28, v29);
  }
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v20);
  if ( UnityEngine_Object__op_Inequality(recipePointRewardDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipePointRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
    UnityEngine_Object__Destroy_83246496(v33, 0);
    this->fields.recipePointRewardDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.recipePointRewardDialog,
      0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_28:
    sub_21FFECC(currencyInfoController, v7);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0);
}


UnityEngine_GameObject_o *EventRecipeListViewManager__GetEffect(
        EventRecipeListViewManager_o *this,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  EventRecipeListViewManager_o *v4; // x19
  struct RecipeAssetManager_o *assetManager; // x8
  Il2CppObject *recipeDropEffetct_k__BackingField; // x19
  EventRecipeListViewManager_o *v7; // x19
  EventRecipeListViewManager_o *v8; // x20
  EventRecipeListViewManager_o *v9; // x20

  v4 = this;
  if ( (byte_59328C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EventRecipeListViewManager_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59328C9 = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_15;
  recipeDropEffetct_k__BackingField = (Il2CppObject *)assetManager->fields._recipeDropEffetct_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parentTransform, method);
  this = (EventRecipeListViewManager_o *)UnityEngine_Object__Instantiate_object_(
                                           recipeDropEffetct_k__BackingField,
                                           (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v7 = this;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parentTransform, 0);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
  v8 = this;
  if ( !byte_5931940 )
  {
    this = (EventRecipeListViewManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v8,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
  v9 = this;
  if ( !byte_5931945 )
  {
    this = (EventRecipeListViewManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_21FFECC(this, parentTransform);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  return (UnityEngine_GameObject_o *)v7;
}


void EventRecipeListViewManager__Init(
        EventRecipeListViewManager_o *this,
        int32_t eventId,
        int32_t svtId,
        System_Action_o *recipeCallback,
        System_Action_int__string____Action__o *playVoice,
        System_Action_BattleDropItem____int__Action__o *requestCallBack,
        UnityEngine_GameObject_o *maskPanle,
        PresentBoxOverDialog_o *boxOverDlg,
        System_Action_o *boxOverDlgCallBack,
        const MethodInfo *method)
{
  __int64 v17; // x21
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo_476E8C0 *v26; // x0
  System_Int32_array *EventItemList; // x28
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v30; // x29
  System_Collections_Generic_List_object__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  ShopCurrencyInfoController_o *v38; // x20
  int32_t v39; // w27
  int32_t v40; // w8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  RecipeAssetManager_o *assetManager; // x20
  RecipeAssetManager_o *v78; // x20
  const MethodInfo *v79; // x1
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  int32_t v86; // w19
  System_Action_o *v87; // x22
  const MethodInfo *v88; // x3
  struct System_Action_o *v89; // [xsp+10h] [xbp-70h]

  if ( (byte_59328C0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_21FFC50(&RecipeAssetManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__);
    sub_21FFC50(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
    byte_59328C0 = 1;
  }
  v17 = sub_21FFEBC(EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_19;
  *(_QWORD *)(v17 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)this, v20, v21, v22, v23, v24, v25);
  v26 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  *(_DWORD *)(v17 + 24) = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v26);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_19;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v17 + 24), 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v89 = recipeCallback;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v17 + 24),
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v30 = (EventDetailEntity_o *)Entity;
  v31 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v31;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&currencyInfoController->fields.objectList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( !v30 )
    goto LABEL_19;
  v38 = this->fields.currencyInfoController;
  v39 = *(_DWORD *)(v17 + 24);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v30, 0);
  if ( !v38 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v38, 6, v39, 1, EventItemList, (unsigned __int8)Instance & 1, 0);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v40 = *(_DWORD *)(v17 + 24);
  this->fields.recipeCallback = v89;
  this->fields.svtId = svtId;
  this->fields.currentEventId = v40;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.recipeCallback,
    (int32_t)v89,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.requestCallBack = requestCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestCallBack,
    (int32_t)requestCallBack,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.playVoiceAction = playVoice;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAction,
    (int32_t)playVoice,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.presentBoxOverDlg,
    (int32_t)boxOverDlg,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boxOverDlgCloseCallBack,
    (int32_t)boxOverDlgCallBack,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields.maskPanel = maskPanle;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.maskPanel,
    (int32_t)maskPanle,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  Instance = (DataManager_o *)this->fields.touchPanel;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    v78 = (RecipeAssetManager_o *)sub_21FFEBC(RecipeAssetManager_TypeInfo);
    RecipeAssetManager___ctor(v78, v79);
    this->fields.assetManager = v78;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.assetManager,
      (int32_t)v78,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    assetManager = this->fields.assetManager;
  }
  v86 = *(_DWORD *)(v17 + 24);
  v87 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v87,
    (Il2CppObject *)v17,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0);
  if ( !assetManager )
LABEL_19:
    sub_21FFECC(Instance, v19);
  RecipeAssetManager__GetAssets(assetManager, v86, v87, v88);
}


void EventRecipeListViewManager__LocateDialogToRecipePanel(
        EventRecipeListViewManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  EventRecipeListViewManager_o *v6; // x20

  if ( !dialog )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  this = (EventRecipeListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0);
  if ( !this )
    goto LABEL_9;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0);
  this = (EventRecipeListViewManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  v6 = this;
  if ( !byte_5931945 )
  {
    this = (EventRecipeListViewManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventRecipeListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)dialog,
                                                  0)) == 0) )
  {
LABEL_9:
    sub_21FFECC(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRecipeListViewManager__OnClickDecide(
        EventRecipeListViewManager_o *this,
        int32_t createNum,
        const MethodInfo *method)
{
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_59328C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventRecipeListViewManager_CreateRecipeResponse__);
    sub_21FFC50(&Method_NetworkManager_getRequest_CreateRecipeRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_59328C7 = 1;
  }
  recipeConfirmDialog = this->fields.recipeConfirmDialog;
  if ( !recipeConfirmDialog )
    goto LABEL_12;
  EventRecipeConfirmDialogComponent__Close(recipeConfirmDialog, *(const MethodInfo **)&createNum);
  recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( createNum > 0 )
  {
    if ( recipeConfirmDialog )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 1, 0);
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_EventRecipeListViewManager_CreateRecipeResponse__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
      recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                     v6,
                                                                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
      if ( recipeConfirmDialog )
      {
        CreateRecipeRequest__beginRequest(
          (CreateRecipeRequest_o *)recipeConfirmDialog,
          this->fields.selectRecipeId,
          createNum,
          0);
        return;
      }
    }
LABEL_12:
    sub_21FFECC(recipeConfirmDialog, *(_QWORD *)&createNum);
  }
  if ( !recipeConfirmDialog )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 0, 0);
}


void EventRecipeListViewManager__OnClickListView(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  int32_t dispMode; // w8
  UnityEngine_GameObject_o *v7; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_c *klass; // x8
  const MethodInfo_476E8C0 *v12; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_c *v15; // x8
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  Il2CppObject *v17; // x22
  EventRecipeGiftEntity_array *monitor; // x20
  System_Action_int__o *v19; // x23
  const MethodInfo *v20; // x6
  System_Reflection_MethodBase_o *v21; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59328C6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRecipeMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_EventRecipeListViewManager_OnClickDecide__);
    sub_21FFC50(&Method_EventRecipeListViewManager_OnClickListView__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59328C6 = 1;
  }
  maskPanel = this->fields.maskPanel;
  entity = 0;
  if ( !maskPanel )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !obj )
    goto LABEL_29;
  dispMode = obj->fields.dispMode;
  if ( !dispMode )
    goto LABEL_27;
  if ( (dispMode & 0xFFFFFFFE) != 2 )
    return;
  maskPanel = (UnityEngine_GameObject_o *)EventRecipeListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !maskPanel )
    goto LABEL_29;
  v7 = maskPanel;
  v8 = Method_EventRecipeListViewManager_OnClickListView__;
  if ( !LOBYTE(v7[6].klass) )
  {
    if ( (*((_BYTE *)Method_EventRecipeListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_21FFC68(Method_EventRecipeListViewManager_OnClickListView__);
    v21 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
LABEL_27:
    maskPanel = this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
      return;
    }
    goto LABEL_29;
  }
  if ( (*((_BYTE *)Method_EventRecipeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_21FFC68(Method_EventRecipeListViewManager_OnClickListView__);
  v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  maskPanel = (UnityEngine_GameObject_o *)EventRecipeListViewObject__GetItem(obj, v10);
  if ( !maskPanel )
    goto LABEL_29;
  klass = maskPanel[5].klass;
  if ( !klass )
    goto LABEL_29;
  v12 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.selectRecipeId = (int32_t)klass->_1.name;
  maskPanel = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance(v12);
  if ( !maskPanel )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)maskPanel,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  maskPanel = (UnityEngine_GameObject_o *)EventRecipeListViewObject__GetItem(obj, v14);
  if ( !maskPanel )
    goto LABEL_29;
  v15 = maskPanel[5].klass;
  if ( !v15 || !MasterData_object )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &entity,
          (int32_t)v15->_1.name,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
    goto LABEL_21;
  recipeConfirmDialog = this->fields.recipeConfirmDialog;
  v17 = entity;
  maskPanel = (UnityEngine_GameObject_o *)EventRecipeListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !maskPanel
    || (monitor = (EventRecipeGiftEntity_array *)maskPanel[5].monitor,
        v19 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v19, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnClickDecide__, 0),
        !recipeConfirmDialog) )
  {
LABEL_29:
    sub_21FFECC(maskPanel, obj);
  }
  EventRecipeConfirmDialogComponent__Open(
    recipeConfirmDialog,
    (EventRecipeEntity_o *)v17,
    monitor,
    v19,
    this->fields.presentBoxOverDlg,
    this->fields.boxOverDlgCloseCallBack,
    v20);
LABEL_21:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


void EventRecipeListViewManager__OnMoveEnd(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_59328C5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59328C5 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_21FFECC(0, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


void EventRecipeListViewManager__RequestListObject(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v6; // x1
  Il2CppObject *current; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v13; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59328C4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__);
    sub_21FFC50(&Method_EventRecipeListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59328C4 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRecipeListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_21FFECC(0, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v6 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      v6);
    v12 = 0;
    v13 = &v14;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v9, v10);
      EventRecipeListViewObject__Init_38572388((EventRecipeListViewObject_o *)current, 3, v8, 1.0, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
  }
}


void EventRecipeListViewManager__SetCallBack(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  EventRecipeListViewManager__RequestListObject(this, v3);
}


void EventRecipeListViewManager__SetObjectItem(
        EventRecipeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  System_Action_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  __int64 naturalAligment; // x10

  if ( (byte_59328C3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventRecipeListViewManager_OnMoveEnd__);
    sub_21FFC50(&EventRecipeListViewObject_TypeInfo);
    byte_59328C3 = 1;
  }
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0);
  if ( !obj
    || (naturalAligment = EventRecipeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_21FFECC(v7, v8);
  }
  EventRecipeListViewObject__Init_38572388((EventRecipeListViewObject_o *)obj, 3, v6, 1.0, v9);
}


void EventRecipeListViewManager__SetRecipeObject(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *recipeRewardDialog; // x20
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct RecipeAssetManager_o *assetManager; // x8
  Il2CppObject *recipeRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  __int64 v21; // x2
  struct RecipeAssetManager_o *v22; // x8
  Il2CppObject *recipePointRewardDialog_k__BackingField; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  const MethodInfo *v35; // x2
  struct RecipeAssetManager_o *v36; // x8
  Il2CppObject *recipeConfirmDialog_k__BackingField; // x20
  Il2CppObject *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  const MethodInfo *v45; // x2

  if ( (byte_59328BF & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59328BF = 1;
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_31;
    recipeRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._recipeRewardDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       recipeRewardDialog_k__BackingField,
                                       (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_31;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    this->fields.recipeRewardDialog = (struct RecipeRewardDialogComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.recipeRewardDialog,
      (int32_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v17);
  }
  v5 = (UnityEngine_GameObject_o *)this->fields.recipeRewardDialog;
  if ( !v5 )
    goto LABEL_31;
  RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)v5, v6);
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipePointRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v22 = this->fields.assetManager;
    if ( !v22 )
      goto LABEL_31;
    recipePointRewardDialog_k__BackingField = (Il2CppObject *)v22->fields._recipePointRewardDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v21);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       recipePointRewardDialog_k__BackingField,
                                       (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_31;
    v24 = UnityEngine_GameObject__GetComponent_object_(
            v5,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    this->fields.recipePointRewardDialog = (struct RecipePointRewardDialogComponent_o *)v24;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.recipePointRewardDialog,
      (int32_t)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    EventRecipeListViewManager__LocateDialogToRecipePanel(
      this,
      (BaseDialog_o *)this->fields.recipePointRewardDialog,
      v31);
  }
  v5 = (UnityEngine_GameObject_o *)this->fields.recipePointRewardDialog;
  if ( !v5 )
    goto LABEL_31;
  RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)v5, v6);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v36 = this->fields.assetManager;
    if ( v36 )
    {
      recipeConfirmDialog_k__BackingField = (Il2CppObject *)v36->fields._recipeConfirmDialog_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v35);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         recipeConfirmDialog_k__BackingField,
                                         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v38 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        this->fields.recipeConfirmDialog = (struct EventRecipeConfirmDialogComponent_o *)v38;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.recipeConfirmDialog,
          (int32_t)v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        EventRecipeListViewManager__LocateDialogToRecipePanel(
          this,
          (BaseDialog_o *)this->fields.recipeConfirmDialog,
          v45);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_21FFECC(v5, v6);
  }
LABEL_29:
  v5 = (UnityEngine_GameObject_o *)this->fields.recipeConfirmDialog;
  if ( !v5 )
    goto LABEL_31;
  EventRecipeConfirmDialogComponent__Init((EventRecipeConfirmDialogComponent_o *)v5, this->fields.currentEventId, v35);
}


void EventRecipeListViewManager__StopUpdateRemainTime(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_21FFECC(0, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0);
}


void EventRecipeListViewManager__UpdateEventItemList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_21FFECC(0, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0);
}


int32_t EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_21FFECC(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventRecipeListViewObject__o *EventRecipeListViewManager__get_ObjectList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_59328BE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59328BE = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRecipeListViewObject__o *)v3;
}


void EventRecipeListViewManager___c__DisplayClass24_0___ctor(
        EventRecipeListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRecipeListViewManager___c__DisplayClass24_0___Init_b__0(
        EventRecipeListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventRecipeListViewManager_o *_4__this; // x0
  struct EventRecipeListViewManager_o *v4; // x8
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct EventRecipeListViewManager_o *v11; // x8
  const MethodInfo *v12; // x3
  struct EventRecipeListViewManager_o *v13; // x19
  const MethodInfo *v14; // x1

  if ( (byte_59328CB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRecipeMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59328CB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, method);
  _4__this = (EventRecipeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (EventRecipeListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)_4__this,
                                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v4 = this->fields.__4__this;
  if ( !v4
    || !_4__this
    || (_4__this = (EventRecipeListViewManager_o *)EventRecipeMaster__GetRecipeEntityArray(
                                                     (EventRecipeMaster_o *)_4__this,
                                                     v4->fields.currentEventId,
                                                     0),
        (v11 = this->fields.__4__this) == 0)
    || (v11->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)_4__this,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v11->fields.eventRecipeEntities,
          (int32_t)_4__this,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (_4__this = this->fields.__4__this) == 0)
    || (EventRecipeListViewManager__CreateList(
          _4__this,
          _4__this->fields.eventRecipeEntities,
          this->fields.eventId,
          v12),
        (v13 = this->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_21FFECC(_4__this, method);
  }
  v13->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)v13, 0);
  EventRecipeListViewManager__RequestListObject(v13, v14);
}


void EventRecipeListViewManager___c__DisplayClass33_0___ctor(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__0(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        EventRecipeEntity_o *x,
        const MethodInfo *method)
{
  struct EventRecipeListViewManager_o *_4__this; // x8

  if ( !x || (_4__this = this->fields.__4__this) == 0 )
    sub_21FFECC(this, x);
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventRecipeListViewManager___c__DisplayClass33_0_o *v3; // x20
  BattleDropItem_array *resultEventRewardInfos; // x19
  struct EventRecipeListViewManager_o *_4__this; // x8
  RecipePointRewardDialogComponent_o *recipePointRewardDialog; // x22
  int32_t currentEventId; // w21
  System_Action_o *_9__2; // x24
  EventRecipeEntity_o *eventRecipeEntity; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  System_Action_o *_9__3; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  v3 = this;
  if ( (byte_59328CC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_21FFC50(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__);
    byte_59328CC = 1;
  }
  resultEventRewardInfos = v3->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_15;
  _4__this = v3->fields.__4__this;
  if ( resultEventRewardInfos->max_length )
  {
    if ( _4__this )
    {
      recipePointRewardDialog = _4__this->fields.recipePointRewardDialog;
      currentEventId = _4__this->fields.currentEventId;
      _9__2 = v3->fields.__9__2;
      eventRecipeEntity = v3->fields.eventRecipeEntity;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__2,
          (Il2CppObject *)v3,
          Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
          0);
        v3->fields.__9__2 = _9__2;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2,
          (int32_t)_9__2,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      if ( recipePointRewardDialog )
      {
        RecipePointRewardDialogComponent__Open(
          recipePointRewardDialog,
          eventRecipeEntity,
          resultEventRewardInfos,
          currentEventId,
          _9__2,
          v2);
        return;
      }
    }
LABEL_15:
    sub_21FFECC(this, method);
  }
  if ( !_4__this )
    goto LABEL_15;
  requestCallBack = _4__this->fields.requestCallBack;
  _9__3 = v3->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0);
    v3->fields.__9__3 = _9__3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v18, v19, v20, v21, v22, v23);
  }
  if ( !requestCallBack )
    goto LABEL_15;
  ((void (__fastcall *)(intptr_t, BattleDropItem_array *, _QWORD, System_Action_o *, intptr_t))requestCallBack->fields.invoke_impl)(
    requestCallBack->fields.method_code,
    resultEventRewardInfos,
    0,
    _9__3,
    requestCallBack->fields.method);
}


void EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__2(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  EventRecipeListViewManager___c__DisplayClass33_0_o *v2; // x19
  struct EventRecipeListViewManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  System_Action_o *_9__4; // x21
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v2 = this;
  if ( (byte_59328CD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_21FFC50(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__);
    byte_59328CD = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  requestCallBack = _4__this->fields.requestCallBack;
  _9__4 = v2->fields.__9__4;
  resultEventRewardInfos = v2->fields.resultEventRewardInfos;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0);
    v2->fields.__9__4 = _9__4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v7, v8, v9, v10, v11, v12);
  }
  if ( !requestCallBack )
LABEL_8:
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, struct BattleDropItem_array *, _QWORD, System_Action_o *, intptr_t))requestCallBack->fields.invoke_impl)(
    requestCallBack->fields.method_code,
    resultEventRewardInfos,
    0,
    _9__4,
    requestCallBack->fields.method);
}


void EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__3(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventRecipeListViewManager_resData_array *res; // x8

  res = this->fields.res;
  if ( !res )
    goto LABEL_5;
  if ( !LODWORD(res->max_length) )
    sub_21FFED4(this);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], v2);
}


void EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__4(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventRecipeListViewManager_resData_array *res; // x8

  res = this->fields.res;
  if ( !res )
    goto LABEL_5;
  if ( !LODWORD(res->max_length) )
    sub_21FFED4(this);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_21FFECC(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], v2);
}


void EventRecipeListViewManager_resData___ctor(EventRecipeListViewManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}
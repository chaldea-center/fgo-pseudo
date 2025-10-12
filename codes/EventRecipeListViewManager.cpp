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
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  il2cpp_array_size_t max_length; // x9
  UserEventPointEntity_o *v8; // x8
  int64_t value; // x2

  if ( (byte_4C31FDB & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31FDB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_11;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_11;
  max_length = oldUserEventPoint->max_length;
  if ( !max_length )
  {
    value = 0;
    if ( Instance )
      goto LABEL_9;
LABEL_11:
    sub_1C32E7C(Instance);
  }
  if ( !(_DWORD)max_length )
    sub_1C32E84(Instance);
  v8 = oldUserEventPoint->m_Items[0];
  if ( !v8 )
    goto LABEL_11;
  value = v8->fields.value;
  if ( !Instance )
    goto LABEL_11;
LABEL_9:
  CommonUI__CheckOpenQuestByEventPoint(
    (CommonUI_o *)Instance,
    this->fields.currentEventId,
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
  int max_length; // w8
  unsigned int v9; // w26
  EventRecipeEntity_o *v10; // x23
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  int32_t id; // w24
  EventRecipeGiftEntity_array *v13; // x25
  EventRecipeListViewItem_o *v14; // x22
  const MethodInfo *v15; // x5
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_4C31FD2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
    sub_1C32C20(&EventRecipeListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_5707/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_4C31FD2 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !eventRecipeEntities )
    goto LABEL_21;
  max_length = eventRecipeEntities->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C32E84(Instance);
      v10 = eventRecipeEntities->m_Items[v9];
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
      if ( !v10 )
        break;
      if ( !Instance )
        break;
      SortedEntityArray = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)Instance,
                            v10->fields.id,
                            0);
      id = v10->fields.id;
      v13 = SortedEntityArray;
      v14 = (EventRecipeListViewItem_o *)sub_1C32E6C(EventRecipeListViewItem_TypeInfo);
      EventRecipeListViewItem___ctor(v14, id, v10, v13, eventId, v15);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v14,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v19 + 32) = v14;
        Instance = (DataManager_o *)sub_1C32BC4(v19 + 32, v14);
      }
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
LABEL_21:
    sub_1C32E7C(Instance);
  }
LABEL_16:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
  if ( !eventRecipeEntities->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5707/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0);
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
  Il2CppObject *v5; // x20
  void *touchPanel; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_object__bool__o *v8; // x23
  Il2CppObject *v9; // x0
  EventRecipeEntity_o **v10; // x21
  struct System_Action_int__string____Action__o *playVoiceAction; // x9
  Il2CppObject *v12; // x22
  System_Object_array *v13; // x0
  void **p_monitor; // x22
  _DWORD *v15; // x8
  __int64 v16; // x8
  void *v17; // x1
  System_Int32_array *v18; // x22
  const MethodInfo *v19; // x1
  _DWORD *monitor; // x8
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x25
  BattleDropItem_array *v24; // x23
  EventRecipeEntity_o *v25; // x21
  EventRecipeGiftEntity_o *v26; // x24
  System_Action_o *v27; // x26
  RecipeRewardDialogComponent_GetEffect_o *v28; // x20
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x7
  const MethodInfo *v31; // x1

  if ( (byte_4C31FD9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
    sub_1C32C20(&Method_EventRecipeListViewManager_GetEffect__);
    sub_1C32C20(&System_Func_EventRecipeEntity__bool__TypeInfo);
    sub_1C32C20(&RecipeRewardDialogComponent_GetEffect_TypeInfo);
    sub_1C32C20(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__);
    sub_1C32C20(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__);
    sub_1C32C20(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C31FD9 = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_27;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v5[1], this);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventRecipeEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    v5,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    0);
  v9 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
         eventRecipeEntities,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  v5[2].klass = (Il2CppClass *)v9;
  v10 = (EventRecipeEntity_o **)&v5[2];
  touchPanel = (void *)sub_1C32BC4(&v5[2], v9);
  if ( !v5[2].klass )
    goto LABEL_27;
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_27;
  ((void (__fastcall *)(intptr_t, _QWORD, Il2CppClass *, _QWORD, intptr_t))playVoiceAction->fields.invoke_impl)(
    playVoiceAction->fields.method_code,
    (unsigned int)this->fields.svtId,
    v5[2].klass->_1.castClass,
    0,
    playVoiceAction->fields.method);
  v12 = (Il2CppObject *)System_String__Concat_63556792(
                          (System_String_o *)StringLiteral_15802/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16056/*"]"*/,
                          0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v13 = JsonManager__DeserializeArray_object_(
          v12,
          (const MethodInfo_314C85C *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  v5[2].monitor = v13;
  p_monitor = &v5[2].monitor;
  sub_1C32BC4(&v5[2].monitor, v13);
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
  v15 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_27;
  if ( !v15[6] )
    goto LABEL_28;
  v16 = *((_QWORD *)v15 + 4);
  if ( !v16 )
    goto LABEL_27;
  v18 = *(System_Int32_array **)(v16 + 16);
  v17 = *(void **)(v16 + 24);
  v5[1].monitor = v17;
  touchPanel = (void *)sub_1C32BC4(&v5[1].monitor, v17);
  monitor = v5[2].monitor;
  if ( !monitor )
    goto LABEL_27;
  if ( !monitor[6] )
    goto LABEL_28;
  if ( !*((_QWORD *)monitor + 4) )
    goto LABEL_27;
  touchPanel = this->fields.recipeRewardDialog;
  if ( !touchPanel
    || (RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)touchPanel, v19),
        (touchPanel = this->fields.recipePointRewardDialog) == 0)
    || (RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)touchPanel, v21),
        EventRecipeListViewManager__RequestListObject(this, v22),
        (touchPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (touchPanel = DataManager__GetMasterData_object_(
                       (DataManager_o *)touchPanel,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*v10)
    || !touchPanel
    || (touchPanel = EventRecipeGiftMaster__GetSortedEntityArray(
                       (EventRecipeGiftMaster_o *)touchPanel,
                       (*v10)->fields.id,
                       0)) == 0 )
  {
LABEL_27:
    sub_1C32E7C(touchPanel);
  }
  if ( !*((_DWORD *)touchPanel + 6) )
LABEL_28:
    sub_1C32E84(touchPanel);
  recipeRewardDialog = this->fields.recipeRewardDialog;
  v24 = (BattleDropItem_array *)v5[1].monitor;
  v25 = *v10;
  v26 = (EventRecipeGiftEntity_o *)*((_QWORD *)touchPanel + 4);
  v27 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v27, v5, Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__, 0);
  v28 = (RecipeRewardDialogComponent_GetEffect_o *)sub_1C32E6C(RecipeRewardDialogComponent_GetEffect_TypeInfo);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v28,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    v29);
  if ( !recipeRewardDialog )
    goto LABEL_27;
  RecipeRewardDialogComponent__Open(recipeRewardDialog, v18, v24, v25, v26, v27, v28, v30);
  ActionExtensions__Call(this->fields.recipeCallback, 0);
  EventRecipeListViewManager__UpdateEventItemList(this, v31);
}


void EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  UnityEngine_Component_o *currencyInfoController; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *recipeRewardDialog; // x20
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  UnityEngine_Object_o *v11; // x21

  if ( (byte_4C31FD3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31FD3 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    RecipeAssetManager__Release(assetManager, this->fields.currentEventId, v3);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recipeConfirmDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    this->fields.recipeConfirmDialog = 0;
    sub_1C32BC4(&this->fields.recipeConfirmDialog, 0);
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recipeRewardDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v9, 0);
    this->fields.recipeRewardDialog = 0;
    sub_1C32BC4(&this->fields.recipeRewardDialog, 0);
  }
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recipePointRewardDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipePointRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v11, 0);
    this->fields.recipePointRewardDialog = 0;
    sub_1C32BC4(&this->fields.recipePointRewardDialog, 0);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_28:
    sub_1C32E7C(currencyInfoController);
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
  if ( (byte_4C31FDA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EventRecipeListViewManager_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31FDA = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_15;
  recipeDropEffetct_k__BackingField = (Il2CppObject *)assetManager->fields._recipeDropEffetct_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventRecipeListViewManager_o *)UnityEngine_Object__Instantiate_object_(
                                           recipeDropEffetct_k__BackingField,
                                           (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v7 = this;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parentTransform, 0);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
  v8 = this;
  if ( !byte_4C313D1 )
  {
    this = (EventRecipeListViewManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v8,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
  v9 = this;
  if ( !byte_4C313D6 )
  {
    this = (EventRecipeListViewManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1C32E7C(this);
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
  struct System_Action_BattleDropItem____int__Action__o *v19; // x26
  System_Int32_array *EventItemList; // x28
  struct System_Action_int__string____Action__o *v21; // x25
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v24; // x29
  System_Collections_Generic_List_object__o *v25; // x20
  ShopCurrencyInfoController_o *v26; // x27
  int32_t v27; // w20
  int32_t v28; // w8
  RecipeAssetManager_o *assetManager; // x20
  struct RecipeAssetManager_o **p_assetManager; // x19
  RecipeAssetManager_o *v31; // x20
  const MethodInfo *v32; // x1
  int32_t v33; // w19
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x3
  struct System_Action_o *v36; // [xsp+8h] [xbp-78h]

  if ( (byte_4C31FD1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C32C20(&RecipeAssetManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__);
    sub_1C32C20(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
    byte_4C31FD1 = 1;
  }
  v17 = sub_1C32E6C(EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_19;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C32BC4(v17 + 16, this);
  *(_DWORD *)(v17 + 24) = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v36 = recipeCallback;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_19;
  v19 = requestCallBack;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v17 + 24), 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v21 = playVoice;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v17 + 24),
             (const MethodInfo_3396838 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v24 = (EventDetailEntity_o *)Entity;
  v25 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v25;
  Instance = (DataManager_o *)sub_1C32BC4(&currencyInfoController->fields.objectList, v25);
  if ( !v24 )
    goto LABEL_19;
  v26 = this->fields.currencyInfoController;
  v27 = *(_DWORD *)(v17 + 24);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v24, 0);
  if ( !v26 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v26, 6, v27, 1, EventItemList, (unsigned __int8)Instance & 1, 0);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  this->fields.svtId = svtId;
  v28 = *(_DWORD *)(v17 + 24);
  this->fields.recipeCallback = v36;
  this->fields.currentEventId = v28;
  sub_1C32BC4(&this->fields.recipeCallback, v36);
  this->fields.requestCallBack = v19;
  sub_1C32BC4(&this->fields.requestCallBack, v19);
  this->fields.playVoiceAction = v21;
  sub_1C32BC4(&this->fields.playVoiceAction, v21);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_1C32BC4(&this->fields.presentBoxOverDlg, boxOverDlg);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_1C32BC4(&this->fields.boxOverDlgCloseCallBack, boxOverDlgCallBack);
  this->fields.maskPanel = maskPanle;
  sub_1C32BC4(&this->fields.maskPanel, maskPanle);
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
    p_assetManager = &this->fields.assetManager;
    v31 = (RecipeAssetManager_o *)sub_1C32E6C(RecipeAssetManager_TypeInfo);
    RecipeAssetManager___ctor(v31, v32);
    *p_assetManager = v31;
    sub_1C32BC4(p_assetManager, v31);
    assetManager = *p_assetManager;
  }
  v33 = *(_DWORD *)(v17 + 24);
  v34 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v17,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0);
  if ( !assetManager )
LABEL_19:
    sub_1C32E7C(Instance);
  RecipeAssetManager__GetAssets(assetManager, v33, v34, v35);
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
  if ( !byte_4C313D6 )
  {
    this = (EventRecipeListViewManager_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
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
    sub_1C32E7C(this);
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

  if ( (byte_4C31FD8 & 1) == 0 )
  {
    sub_1C32C20(&Method_EventRecipeListViewManager_CreateRecipeResponse__);
    sub_1C32C20(&Method_NetworkManager_getRequest_CreateRecipeRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C31FD8 = 1;
  }
  recipeConfirmDialog = this->fields.recipeConfirmDialog;
  if ( !recipeConfirmDialog )
    goto LABEL_11;
  EventRecipeConfirmDialogComponent__Close(recipeConfirmDialog, *(const MethodInfo **)&createNum);
  recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !recipeConfirmDialog )
    goto LABEL_11;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 1, 0);
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager_CreateRecipeResponse__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                   v6,
                                                                   (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
    if ( recipeConfirmDialog )
    {
      CreateRecipeRequest__beginRequest(
        (CreateRecipeRequest_o *)recipeConfirmDialog,
        this->fields.selectRecipeId,
        createNum,
        0);
      return;
    }
LABEL_11:
    sub_1C32E7C(recipeConfirmDialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 0, 0);
}


void EventRecipeListViewManager__OnClickListView(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewObject_o *obj,
        const MethodInfo *method)
{
  unsigned __int8 *maskPanel; // x0
  const MethodInfo *v6; // x1
  int32_t dispMode; // w8
  int v8; // w21
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  __int64 v12; // x8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v14; // x1
  __int64 v15; // x8
  const MethodInfo *v16; // x1
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  Il2CppObject *v18; // x22
  EventRecipeGiftEntity_array *v19; // x20
  System_Action_int__o *v20; // x23
  const MethodInfo *v21; // x6
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C31FD7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRecipeMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_EventRecipeListViewManager_OnClickDecide__);
    sub_1C32C20(&Method_EventRecipeListViewManager_OnClickListView__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31FD7 = 1;
  }
  entity = 0;
  maskPanel = (unsigned __int8 *)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  if ( !obj )
    goto LABEL_25;
  dispMode = obj->fields.dispMode;
  if ( !dispMode )
    goto LABEL_22;
  if ( (dispMode & 0xFFFFFFFE) != 2 )
    return;
  maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, v6);
  if ( !maskPanel )
    goto LABEL_25;
  v8 = maskPanel[144];
  v9 = Method_EventRecipeListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRecipeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C32C38(Method_EventRecipeListViewManager_OnClickListView__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C32C04(v9, v9[4]);
  if ( v8 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, v11);
    if ( maskPanel )
    {
      v12 = *((_QWORD *)maskPanel + 15);
      if ( v12 )
      {
        this->fields.selectRecipeId = *(_DWORD *)(v12 + 16);
        maskPanel = (unsigned __int8 *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( maskPanel )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)maskPanel,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
          maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, v14);
          if ( maskPanel )
          {
            v15 = *((_QWORD *)maskPanel + 15);
            if ( v15 )
            {
              if ( MasterData_object )
              {
                if ( !DataMasterBase_object__object__int___TryGetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        &entity,
                        *(_DWORD *)(v15 + 16),
                        (const MethodInfo_3396884 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
                  goto LABEL_22;
                recipeConfirmDialog = this->fields.recipeConfirmDialog;
                v18 = entity;
                maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, v16);
                if ( maskPanel )
                {
                  v19 = (EventRecipeGiftEntity_array *)*((_QWORD *)maskPanel + 16);
                  v20 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
                  System_Action_int____ctor(
                    v20,
                    (Il2CppObject *)this,
                    Method_EventRecipeListViewManager_OnClickDecide__,
                    0);
                  if ( recipeConfirmDialog )
                  {
                    EventRecipeConfirmDialogComponent__Open(
                      recipeConfirmDialog,
                      (EventRecipeEntity_o *)v18,
                      v19,
                      v20,
                      this->fields.presentBoxOverDlg,
                      this->fields.boxOverDlgCloseCallBack,
                      v21);
                    goto LABEL_22;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C32E7C(maskPanel);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
LABEL_22:
  maskPanel = (unsigned __int8 *)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
}


void EventRecipeListViewManager__OnMoveEnd(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0

  if ( (byte_4C31FD6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31FD6 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_1C32E7C(0);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v7->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v7,
          1,
          v7->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


void EventRecipeListViewManager__RequestListObject(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C31FD5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__);
    sub_1C32C20(&Method_EventRecipeListViewManager_OnMoveEnd__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__);
    sub_1C32C20(&StringLiteral_9941/*"OnMoveEnd"*/);
    byte_4C31FD5 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRecipeListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C32E7C(0);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      ObjectList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v9.fields._current;
      v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C32E7C(v7);
      EventRecipeListViewObject__Init_31955592((EventRecipeListViewObject_o *)current, 3, v6, 1.0, v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
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
  const MethodInfo *v8; // x3
  __int64 naturalAligment; // x10

  if ( (byte_4C31FD4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventRecipeListViewManager_OnMoveEnd__);
    sub_1C32C20(&EventRecipeListViewObject_TypeInfo);
    byte_4C31FD4 = 1;
  }
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0);
  if ( !obj
    || (naturalAligment = EventRecipeListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_1C32E7C(v7);
  }
  EventRecipeListViewObject__Init_31955592((EventRecipeListViewObject_o *)obj, 3, v6, 1.0, v8);
}


void EventRecipeListViewManager__SetRecipeObject(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *recipeRewardDialog; // x21
  struct RecipeRewardDialogComponent_o **p_recipeRewardDialog; // x20
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x1
  struct RecipeAssetManager_o *assetManager; // x8
  Il2CppObject *recipeRewardDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *recipePointRewardDialog; // x21
  struct RecipePointRewardDialogComponent_o **p_recipePointRewardDialog; // x20
  const MethodInfo *v13; // x1
  struct RecipeAssetManager_o *v14; // x8
  Il2CppObject *recipePointRewardDialog_k__BackingField; // x21
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *recipeConfirmDialog; // x21
  struct EventRecipeConfirmDialogComponent_o **p_recipeConfirmDialog; // x20
  const MethodInfo *v20; // x2
  struct RecipeAssetManager_o *v21; // x8
  Il2CppObject *recipeConfirmDialog_k__BackingField; // x21
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2

  if ( (byte_4C31FD0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31FD0 = 1;
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipeRewardDialog = &this->fields.recipeRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_31;
    recipeRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._recipeRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       recipeRewardDialog_k__BackingField,
                                       (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_31;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    this->fields.recipeRewardDialog = (struct RecipeRewardDialogComponent_o *)Component_object;
    sub_1C32BC4(&this->fields.recipeRewardDialog, Component_object);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v10);
  }
  v5 = (UnityEngine_GameObject_o *)*p_recipeRewardDialog;
  if ( !*p_recipeRewardDialog )
    goto LABEL_31;
  RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)v5, v6);
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipePointRewardDialog = &this->fields.recipePointRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipePointRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v14 = this->fields.assetManager;
    if ( !v14 )
      goto LABEL_31;
    recipePointRewardDialog_k__BackingField = (Il2CppObject *)v14->fields._recipePointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       recipePointRewardDialog_k__BackingField,
                                       (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_31;
    v16 = UnityEngine_GameObject__GetComponent_object_(
            v5,
            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    this->fields.recipePointRewardDialog = (struct RecipePointRewardDialogComponent_o *)v16;
    sub_1C32BC4(&this->fields.recipePointRewardDialog, v16);
    EventRecipeListViewManager__LocateDialogToRecipePanel(
      this,
      (BaseDialog_o *)this->fields.recipePointRewardDialog,
      v17);
  }
  v5 = (UnityEngine_GameObject_o *)*p_recipePointRewardDialog;
  if ( !*p_recipePointRewardDialog )
    goto LABEL_31;
  RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)v5, v13);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipeConfirmDialog = &this->fields.recipeConfirmDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v21 = this->fields.assetManager;
    if ( v21 )
    {
      recipeConfirmDialog_k__BackingField = (Il2CppObject *)v21->fields._recipeConfirmDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         recipeConfirmDialog_k__BackingField,
                                         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v23 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        this->fields.recipeConfirmDialog = (struct EventRecipeConfirmDialogComponent_o *)v23;
        sub_1C32BC4(&this->fields.recipeConfirmDialog, v23);
        EventRecipeListViewManager__LocateDialogToRecipePanel(
          this,
          (BaseDialog_o *)this->fields.recipeConfirmDialog,
          v24);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_1C32E7C(v5);
  }
LABEL_29:
  v5 = (UnityEngine_GameObject_o *)*p_recipeConfirmDialog;
  if ( !*p_recipeConfirmDialog )
    goto LABEL_31;
  EventRecipeConfirmDialogComponent__Init((EventRecipeConfirmDialogComponent_o *)v5, this->fields.currentEventId, v20);
}


void EventRecipeListViewManager__StopUpdateRemainTime(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C32E7C(0);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0);
}


void EventRecipeListViewManager__UpdateEventItemList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C32E7C(0);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0);
}


int32_t EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1C32E7C(this);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventRecipeListViewObject__o *EventRecipeListViewManager__get_ObjectList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v8; // x1
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C31FCF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31FCF = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C32E7C(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      v8 = Component_object;
      if ( !v3 )
        sub_1C32E7C(Component_object);
      items = v3->fields._items;
      v10 = Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
      }
      else
      {
        v12 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v12[4] = (Il2CppClass *)v8;
        sub_1C32BC4(v12 + 4, v8);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  struct EventRecipeListViewManager_o *v5; // x8
  const MethodInfo *v6; // x3
  struct EventRecipeListViewManager_o *v7; // x19
  const MethodInfo *v8; // x1

  if ( (byte_4C31FDC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRecipeMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31FDC = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, method);
  _4__this = (EventRecipeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (EventRecipeListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)_4__this,
                                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v4 = this->fields.__4__this;
  if ( !v4
    || !_4__this
    || (_4__this = (EventRecipeListViewManager_o *)EventRecipeMaster__GetRecipeEntityArray(
                                                     (EventRecipeMaster_o *)_4__this,
                                                     v4->fields.currentEventId,
                                                     0),
        (v5 = this->fields.__4__this) == 0)
    || (v5->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)_4__this,
        sub_1C32BC4(&v5->fields.eventRecipeEntities, _4__this),
        (_4__this = this->fields.__4__this) == 0)
    || (EventRecipeListViewManager__CreateList(_4__this, _4__this->fields.eventRecipeEntities, this->fields.eventId, v6),
        (v7 = this->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_1C32E7C(_4__this);
  }
  v7->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)v7, 0);
  EventRecipeListViewManager__RequestListObject(v7, v8);
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
    sub_1C32E7C(this);
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  Il2CppObject *v3; // x20
  BattleDropItem_array *monitor; // x19
  Il2CppClass *klass; // x8
  RecipePointRewardDialogComponent_o *methodPtr; // x21
  System_Action_o *v7; // x24
  int32_t methodPtr_high; // w22
  EventRecipeEntity_o *v9; // x23
  const MethodInfo *v10; // x23
  System_Action_o *v11; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4C31FDD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1C32C20(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__);
    byte_4C31FDD = 1;
  }
  monitor = (BattleDropItem_array *)v3[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_14;
  if ( monitor->max_length )
  {
    methodPtr = (RecipePointRewardDialogComponent_o *)klass->vtable[5].methodPtr;
    v7 = (System_Action_o *)v3[3].monitor;
    methodPtr_high = HIDWORD(klass->vtable[3].methodPtr);
    v9 = (EventRecipeEntity_o *)v3[2].klass;
    if ( !v7 )
    {
      v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v7,
        v3,
        Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
        0);
      v3[3].monitor = v7;
      this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1C32BC4(&v3[3].monitor, v7);
    }
    if ( methodPtr )
    {
      RecipePointRewardDialogComponent__Open(methodPtr, v9, monitor, methodPtr_high, v7, v2);
      return;
    }
LABEL_14:
    sub_1C32E7C(this);
  }
  v10 = klass->vtable[2].method;
  v11 = (System_Action_o *)v3[4].klass;
  if ( !v11 )
  {
    v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      v3,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0);
    v3[4].klass = (Il2CppClass *)v11;
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1C32BC4(&v3[4], v11);
  }
  if ( !v10 )
    goto LABEL_14;
  ((void (__fastcall *)(const void *, BattleDropItem_array *, _QWORD, System_Action_o *, const Il2CppType *))v10->name)(
    v10->genericMethod,
    monitor,
    0,
    v11,
    v10->return_type);
}


void EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__2(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  const MethodInfo *v4; // x23
  System_Action_o *v5; // x21
  void *monitor; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4C31FDE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1C32C20(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__);
    byte_4C31FDE = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  v4 = klass->vtable[2].method;
  v5 = (System_Action_o *)v2[3].klass;
  monitor = v2[1].monitor;
  if ( !v5 )
  {
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      v2,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0);
    v2[3].klass = (Il2CppClass *)v5;
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1C32BC4(&v2[3], v5);
  }
  if ( !v4 )
LABEL_8:
    sub_1C32E7C(this);
  ((void (__fastcall *)(const void *, void *, _QWORD, System_Action_o *, const Il2CppType *))v4->name)(
    v4->genericMethod,
    monitor,
    0,
    v5,
    v4->return_type);
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
    sub_1C32E84(this);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1C32E7C(this);
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
    sub_1C32E84(this);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1C32E7C(this);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], v2);
}


void EventRecipeListViewManager_resData___ctor(EventRecipeListViewManager_resData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}
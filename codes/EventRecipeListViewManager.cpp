void __fastcall EventRecipeListViewManager___ctor(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventRecipeListViewManager__CheckOpenQuest(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewManager_resData_o *response,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 currentEventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v8; // x9
  UserEventPointEntity_o *v9; // x8
  int64_t value; // x2

  if ( (byte_4A5F166 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F166 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_11;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_11;
  v8 = *(_QWORD *)&oldUserEventPoint->max_length;
  currentEventId = (unsigned int)this->fields.currentEventId;
  if ( !v8 )
  {
    value = 0LL;
    if ( Instance )
      goto LABEL_9;
LABEL_11:
    sub_1B8880C(Instance, currentEventId);
  }
  if ( !(_DWORD)v8 )
    sub_1B88814(Instance, currentEventId);
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
    0LL,
    0,
    0.0,
    0,
    (System_String_o *)StringLiteral_1/*""*/,
    0LL);
}


void __fastcall EventRecipeListViewManager__CreateList(
        EventRecipeListViewManager_o *this,
        EventRecipeEntity_array *eventRecipeEntities,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  unsigned int v10; // w26
  EventRecipeEntity_o *v11; // x23
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  int32_t id; // w24
  EventRecipeGiftEntity_array *v14; // x25
  EventRecipeListViewItem_o *v15; // x22
  const MethodInfo *v16; // x5
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v22; // x8
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_4A5F15D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
    sub_1B885B0(&EventRecipeListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_5703/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_4A5F15D = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !eventRecipeEntities )
    goto LABEL_21;
  max_length = eventRecipeEntities->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1B88814(Instance, v8);
      v11 = eventRecipeEntities->m_Items[v10];
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
      if ( !v11 )
        break;
      if ( !Instance )
        break;
      SortedEntityArray = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)Instance,
                            v11->fields.id,
                            0LL);
      id = v11->fields.id;
      v14 = SortedEntityArray;
      v15 = (EventRecipeListViewItem_o *)sub_1B887FC(EventRecipeListViewItem_TypeInfo);
      EventRecipeListViewItem___ctor(v15, id, v11, v14, eventId, v16);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      v19 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v19 )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v19 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v15,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = v19 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v22 + 32) = v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v15, v17, v18);
      }
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_16;
    }
LABEL_21:
    sub_1B8880C(Instance, v8);
  }
LABEL_16:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  if ( !*(_QWORD *)&eventRecipeEntities->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_21;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall EventRecipeListViewManager__CreateRecipeResponse(
        EventRecipeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *touchPanel; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_object__bool__o *v11; // x23
  Il2CppObject *v12; // x0
  EventRecipeEntity_o **v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Action_int__string____Action__o *playVoiceAction; // x9
  Il2CppObject *v17; // x22
  System_Object_array *v18; // x0
  __int64 *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x1
  System_Int32_array *v27; // x22
  __int64 v28; // x8
  const MethodInfo *v29; // x1
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x25
  BattleDropItem_array *v31; // x23
  EventRecipeEntity_o *v32; // x21
  EventRecipeGiftEntity_o *v33; // x24
  System_Action_o *v34; // x26
  RecipeRewardDialogComponent_GetEffect_o *v35; // x20
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x7
  const MethodInfo *v38; // x1

  if ( (byte_4A5F164 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
    sub_1B885B0(&Method_EventRecipeListViewManager_GetEffect__);
    sub_1B885B0(&System_Func_EventRecipeEntity__bool__TypeInfo);
    sub_1B885B0(&RecipeRewardDialogComponent_GetEffect_TypeInfo);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__);
    sub_1B885B0(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__);
    sub_1B885B0(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5F164 = 1;
  }
  v5 = sub_1B887FC(EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_27;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventRecipeEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    0LL);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          eventRecipeEntities,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  *(_QWORD *)(v5 + 32) = v12;
  v13 = (EventRecipeEntity_o **)(v5 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v12, v14, v15);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_27;
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_27;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
    playVoiceAction->fields.original_method_info,
    (unsigned int)this->fields.svtId,
    *(_QWORD *)(*(_QWORD *)(v5 + 32) + 72LL),
    0LL,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
  v17 = (Il2CppObject *)System_String__Concat_61718292(
                          (System_String_o *)StringLiteral_15812/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16069/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v18 = JsonManager__DeserializeArray_object_(
          v17,
          (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  *(_QWORD *)(v5 + 40) = v18;
  v19 = (__int64 *)(v5 + 40);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)v18, v20, v21);
  touchPanel = this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_27;
  touchPanel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)touchPanel, 0LL);
  if ( !touchPanel )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL);
  touchPanel = this->fields.maskPanel;
  if ( !touchPanel )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touchPanel, 0, 0LL);
  v24 = *v19;
  if ( !*v19 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v24 + 24) )
    goto LABEL_28;
  v25 = *(_QWORD *)(v24 + 32);
  if ( !v25 )
    goto LABEL_27;
  v27 = *(System_Int32_array **)(v25 + 16);
  v26 = *(_QWORD *)(v25 + 24);
  *(_QWORD *)(v5 + 24) = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), v26, v22, v23);
  v28 = *(_QWORD *)(v5 + 40);
  if ( !v28 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v28 + 24) )
    goto LABEL_28;
  if ( !*(_QWORD *)(v28 + 32) )
    goto LABEL_27;
  touchPanel = this->fields.recipeRewardDialog;
  if ( !touchPanel
    || (RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)touchPanel, v7),
        (touchPanel = this->fields.recipePointRewardDialog) == 0LL)
    || (RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)touchPanel, v7),
        EventRecipeListViewManager__RequestListObject(this, v29),
        (touchPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (touchPanel = DataManager__GetMasterData_object_(
                       (DataManager_o *)touchPanel,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*v13)
    || !touchPanel
    || (touchPanel = EventRecipeGiftMaster__GetSortedEntityArray(
                       (EventRecipeGiftMaster_o *)touchPanel,
                       (*v13)->fields.id,
                       0LL)) == 0LL )
  {
LABEL_27:
    sub_1B8880C(touchPanel, v7);
  }
  if ( !*((_DWORD *)touchPanel + 6) )
LABEL_28:
    sub_1B88814(touchPanel, v7);
  recipeRewardDialog = this->fields.recipeRewardDialog;
  v31 = *(BattleDropItem_array **)(v5 + 24);
  v32 = *v13;
  v33 = (EventRecipeGiftEntity_o *)*((_QWORD *)touchPanel + 4);
  v34 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v5,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__,
    0LL);
  v35 = (RecipeRewardDialogComponent_GetEffect_o *)sub_1B887FC(RecipeRewardDialogComponent_GetEffect_TypeInfo);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v35,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    v36);
  if ( !recipeRewardDialog )
    goto LABEL_27;
  RecipeRewardDialogComponent__Open(recipeRewardDialog, v27, v31, v32, v33, v34, v35, v37);
  ActionExtensions__Call(this->fields.recipeCallback, 0LL);
  EventRecipeListViewManager__UpdateEventItemList(this, v38);
}


void __fastcall EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *currencyInfoController; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *recipeRewardDialog; // x20
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5F15E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F15E = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    RecipeAssetManager__Release(assetManager, this->fields.currentEventId, v3);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recipeConfirmDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    this->fields.recipeConfirmDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recipeConfirmDialog, 0, v9, v10);
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recipeRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v12, 0LL);
    this->fields.recipeRewardDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recipeRewardDialog, 0, v13, v14);
  }
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recipePointRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipePointRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v16, 0LL);
    this->fields.recipePointRewardDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recipePointRewardDialog, 0, v17, v18);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_28:
    sub_1B8880C(currencyInfoController, v6);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventRecipeListViewManager__GetEffect(
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
  if ( (byte_4A5F165 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EventRecipeListViewManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F165 = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_15;
  recipeDropEffetct_k__BackingField = (Il2CppObject *)assetManager->fields._recipeDropEffetct_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventRecipeListViewManager_o *)UnityEngine_Object__Instantiate_object_(
                                           recipeDropEffetct_k__BackingField,
                                           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v7 = this;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parentTransform, 0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
  v8 = this;
  if ( !byte_4A55CE1 )
  {
    this = (EventRecipeListViewManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v8,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
  v9 = this;
  if ( !byte_4A55CE6 )
  {
    this = (EventRecipeListViewManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1B8880C(this, parentTransform);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  return (UnityEngine_GameObject_o *)v7;
}


void __fastcall EventRecipeListViewManager__Init(
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
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Action_BattleDropItem____int__Action__o *v22; // x26
  System_Int32_array *EventItemList; // x28
  struct System_Action_int__string____Action__o *v24; // x25
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v27; // x29
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  ShopCurrencyInfoController_o *v31; // x27
  int32_t v32; // w20
  int32_t v33; // w8
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  RecipeAssetManager_o *assetManager; // x20
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  RecipeAssetManager_o *v48; // x20
  const MethodInfo *v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t v52; // w19
  System_Action_o *v53; // x22
  const MethodInfo *v54; // x3
  struct System_Action_o *v55; // [xsp+8h] [xbp-78h]

  if ( (byte_4A5F15C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1B885B0(&RecipeAssetManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__);
    sub_1B885B0(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
    byte_4A5F15C = 1;
  }
  v17 = sub_1B887FC(EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_19;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_DWORD *)(v17 + 24) = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v55 = recipeCallback;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_19;
  v22 = requestCallBack;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v17 + 24), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v24 = playVoice;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v17 + 24),
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v27 = (EventDetailEntity_o *)Entity;
  v28 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList, (int32_t)v28, v29, v30);
  if ( !v27 )
    goto LABEL_19;
  v31 = this->fields.currencyInfoController;
  v32 = *(_DWORD *)(v17 + 24);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v27, 0LL);
  if ( !v31 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v31, 6, v32, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.svtId = svtId;
  v33 = *(_DWORD *)(v17 + 24);
  this->fields.recipeCallback = v55;
  this->fields.currentEventId = v33;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recipeCallback, (int32_t)v55, v34, v35);
  this->fields.requestCallBack = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestCallBack, (int32_t)v22, v36, v37);
  this->fields.playVoiceAction = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAction, (int32_t)v24, v38, v39);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.presentBoxOverDlg, (int32_t)boxOverDlg, v40, v41);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.boxOverDlgCloseCallBack,
    (int32_t)boxOverDlgCallBack,
    v42,
    v43);
  this->fields.maskPanel = maskPanle;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)maskPanle, v44, v45);
  Instance = (DataManager_o *)this->fields.touchPanel;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
    v48 = (RecipeAssetManager_o *)sub_1B887FC(RecipeAssetManager_TypeInfo);
    RecipeAssetManager___ctor(v48, v49);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v48;
    sub_1B88554(p_assetManager, (int32_t)v48, v50, v51);
    assetManager = (RecipeAssetManager_o *)p_assetManager->klass;
  }
  v52 = *(_DWORD *)(v17 + 24);
  v53 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v17,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_19:
    sub_1B8880C(Instance, v19);
  RecipeAssetManager__GetAssets(assetManager, v52, v53, v54);
}


void __fastcall EventRecipeListViewManager__LocateDialogToRecipePanel(
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  v6 = this;
  if ( !byte_4A55CE6 )
  {
    this = (EventRecipeListViewManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventRecipeListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)dialog,
                                                  0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewManager__OnClickDecide(
        EventRecipeListViewManager_o *this,
        int32_t createNum,
        const MethodInfo *method)
{
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x21

  if ( (byte_4A5F163 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRecipeListViewManager_CreateRecipeResponse__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CreateRecipeRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F163 = 1;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 1, 0LL);
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager_CreateRecipeResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                   v6,
                                                                   (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
    if ( recipeConfirmDialog )
    {
      CreateRecipeRequest__beginRequest(
        (CreateRecipeRequest_o *)recipeConfirmDialog,
        this->fields.selectRecipeId,
        createNum,
        0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(recipeConfirmDialog, *(_QWORD *)&createNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 0, 0LL);
}


void __fastcall EventRecipeListViewManager__OnClickListView(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewObject_o *obj,
        const MethodInfo *method)
{
  unsigned __int8 *maskPanel; // x0
  int32_t dispMode; // w8
  int v7; // w21
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v13; // x1
  __int64 v14; // x8
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  Il2CppObject *v16; // x22
  EventRecipeGiftEntity_array *v17; // x20
  System_Action_int__o *v18; // x23
  const MethodInfo *v19; // x6
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5F162 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRecipeMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_EventRecipeListViewManager_OnClickDecide__);
    sub_1B885B0(&Method_EventRecipeListViewManager_OnClickListView__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F162 = 1;
  }
  entity = 0LL;
  maskPanel = (unsigned __int8 *)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_25;
  dispMode = obj->fields.dispMode;
  if ( !dispMode )
    goto LABEL_22;
  if ( (dispMode & 0xFFFFFFFE) != 2 )
    return;
  maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !maskPanel )
    goto LABEL_25;
  v7 = maskPanel[136];
  v8 = Method_EventRecipeListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRecipeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B885C8(Method_EventRecipeListViewManager_OnClickListView__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
  if ( v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, v10);
    if ( maskPanel )
    {
      v11 = *((_QWORD *)maskPanel + 14);
      if ( v11 )
      {
        this->fields.selectRecipeId = *(_DWORD *)(v11 + 16);
        maskPanel = (unsigned __int8 *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( maskPanel )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)maskPanel,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
          maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, v13);
          if ( maskPanel )
          {
            v14 = *((_QWORD *)maskPanel + 14);
            if ( v14 )
            {
              if ( MasterData_object )
              {
                if ( !DataMasterBase_object__object__int___TryGetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        &entity,
                        *(_DWORD *)(v14 + 16),
                        (const MethodInfo_311D988 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
                  goto LABEL_22;
                recipeConfirmDialog = this->fields.recipeConfirmDialog;
                v16 = entity;
                maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, (const MethodInfo *)obj);
                if ( maskPanel )
                {
                  v17 = (EventRecipeGiftEntity_array *)*((_QWORD *)maskPanel + 15);
                  v18 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
                  System_Action_int____ctor(
                    v18,
                    (Il2CppObject *)this,
                    Method_EventRecipeListViewManager_OnClickDecide__,
                    0LL);
                  if ( recipeConfirmDialog )
                  {
                    EventRecipeConfirmDialogComponent__Open(
                      recipeConfirmDialog,
                      (EventRecipeEntity_o *)v16,
                      v17,
                      v18,
                      this->fields.presentBoxOverDlg,
                      this->fields.boxOverDlgCloseCallBack,
                      v19);
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
    sub_1B8880C(maskPanel, obj);
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
LABEL_22:
  maskPanel = (unsigned __int8 *)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
}


void __fastcall EventRecipeListViewManager__OnMoveEnd(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4A5F161 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F161 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall EventRecipeListViewManager__RequestListObject(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5F160 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__);
    sub_1B885B0(&Method_EventRecipeListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5F160 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRecipeListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B8880C(0LL, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v8, v9);
      EventRecipeListViewObject__Init_45847440((EventRecipeListViewObject_o *)current, 3, v7, 1.0, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
  }
}


void __fastcall EventRecipeListViewManager__SetCallBack(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventRecipeListViewManager__RequestListObject(this, v3);
}


void __fastcall EventRecipeListViewManager__SetObjectItem(
        EventRecipeListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  System_Action_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  __int64 methodPtr_low; // x10

  if ( (byte_4A5F15F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventRecipeListViewManager_OnMoveEnd__);
    sub_1B885B0(&EventRecipeListViewObject_TypeInfo);
    byte_4A5F15F = 1;
  }
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(EventRecipeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_1B8880C(v7, v8);
  }
  EventRecipeListViewObject__Init_45847440((EventRecipeListViewObject_o *)obj, 3, v6, 1.0, v9);
}


void __fastcall EventRecipeListViewManager__SetRecipeObject(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *recipeRewardDialog; // x21
  struct RecipeRewardDialogComponent_o **p_recipeRewardDialog; // x20
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x1
  struct RecipeAssetManager_o *assetManager; // x8
  Il2CppObject *recipeRewardDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *recipePointRewardDialog; // x21
  struct RecipePointRewardDialogComponent_o **p_recipePointRewardDialog; // x20
  struct RecipeAssetManager_o *v15; // x8
  Il2CppObject *recipePointRewardDialog_k__BackingField; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *recipeConfirmDialog; // x21
  struct EventRecipeConfirmDialogComponent_o **p_recipeConfirmDialog; // x20
  const MethodInfo *v23; // x2
  struct RecipeAssetManager_o *v24; // x8
  Il2CppObject *recipeConfirmDialog_k__BackingField; // x21
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x2

  if ( (byte_4A5F15B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F15B = 1;
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipeRewardDialog = &this->fields.recipeRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeRewardDialog, 0LL, 0LL);
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
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_31;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v5,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    this->fields.recipeRewardDialog = (struct RecipeRewardDialogComponent_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.recipeRewardDialog,
      (int32_t)Component_object,
      v10,
      v11);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v12);
  }
  v5 = (UnityEngine_GameObject_o *)*p_recipeRewardDialog;
  if ( !*p_recipeRewardDialog )
    goto LABEL_31;
  RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)v5, v6);
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipePointRewardDialog = &this->fields.recipePointRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v15 = this->fields.assetManager;
    if ( !v15 )
      goto LABEL_31;
    recipePointRewardDialog_k__BackingField = (Il2CppObject *)v15->fields._recipePointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       recipePointRewardDialog_k__BackingField,
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_31;
    v17 = UnityEngine_GameObject__GetComponent_object_(
            v5,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    this->fields.recipePointRewardDialog = (struct RecipePointRewardDialogComponent_o *)v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recipePointRewardDialog, (int32_t)v17, v18, v19);
    EventRecipeListViewManager__LocateDialogToRecipePanel(
      this,
      (BaseDialog_o *)this->fields.recipePointRewardDialog,
      v20);
  }
  v5 = (UnityEngine_GameObject_o *)*p_recipePointRewardDialog;
  if ( !*p_recipePointRewardDialog )
    goto LABEL_31;
  RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)v5, v6);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipeConfirmDialog = &this->fields.recipeConfirmDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v24 = this->fields.assetManager;
    if ( v24 )
    {
      recipeConfirmDialog_k__BackingField = (Il2CppObject *)v24->fields._recipeConfirmDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         recipeConfirmDialog_k__BackingField,
                                         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v26 = UnityEngine_GameObject__GetComponent_object_(
                v5,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        this->fields.recipeConfirmDialog = (struct EventRecipeConfirmDialogComponent_o *)v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recipeConfirmDialog, (int32_t)v26, v27, v28);
        EventRecipeListViewManager__LocateDialogToRecipePanel(
          this,
          (BaseDialog_o *)this->fields.recipeConfirmDialog,
          v29);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_1B8880C(v5, v6);
  }
LABEL_29:
  v5 = (UnityEngine_GameObject_o *)*p_recipeConfirmDialog;
  if ( !*p_recipeConfirmDialog )
    goto LABEL_31;
  EventRecipeConfirmDialogComponent__Init((EventRecipeConfirmDialogComponent_o *)v5, this->fields.currentEventId, v23);
}


void __fastcall EventRecipeListViewManager__StopUpdateRemainTime(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B8880C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventRecipeListViewManager__UpdateEventItemList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B8880C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0LL);
}


int32_t __fastcall EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B8880C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventRecipeListViewObject__o *__fastcall EventRecipeListViewManager__get_ObjectList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5F15A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F15A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRecipeListViewObject__o *)v3;
}


void __fastcall EventRecipeListViewManager___c__DisplayClass24_0___ctor(
        EventRecipeListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass24_0___Init_b__0(
        EventRecipeListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  EventRecipeListViewManager_o *_4__this; // x0
  struct EventRecipeListViewManager_o *v4; // x8
  int32_t v5; // w2
  int32_t v6; // w3
  struct EventRecipeListViewManager_o *v7; // x8
  const MethodInfo *v8; // x3
  struct EventRecipeListViewManager_o *v9; // x19
  const MethodInfo *v10; // x1

  if ( (byte_4A5F167 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventRecipeMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F167 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, method);
  _4__this = (EventRecipeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (EventRecipeListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)_4__this,
                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v4 = this->fields.__4__this;
  if ( !v4
    || !_4__this
    || (_4__this = (EventRecipeListViewManager_o *)EventRecipeMaster__GetRecipeEntityArray(
                                                     (EventRecipeMaster_o *)_4__this,
                                                     v4->fields.currentEventId,
                                                     0LL),
        (v7 = this->fields.__4__this) == 0LL)
    || (v7->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)_4__this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields.eventRecipeEntities, (int32_t)_4__this, v5, v6),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventRecipeListViewManager__CreateList(_4__this, _4__this->fields.eventRecipeEntities, this->fields.eventId, v8),
        (v9 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(_4__this, method);
  }
  v9->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)v9, 0LL);
  EventRecipeListViewManager__RequestListObject(v9, v10);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___ctor(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__0(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        EventRecipeEntity_o *x,
        const MethodInfo *method)
{
  struct EventRecipeListViewManager_o *_4__this; // x8

  if ( !x || (_4__this = this->fields.__4__this) == 0LL )
    sub_1B8880C(this, x);
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventRecipeListViewManager___c__DisplayClass33_0_o *v3; // x20
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  struct EventRecipeListViewManager_o *_4__this; // x8
  RecipePointRewardDialogComponent_o *recipePointRewardDialog; // x21
  System_Action_o *_9__2; // x24
  int32_t currentEventId; // w22
  EventRecipeEntity_o *eventRecipeEntity; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  System_Action_o *_9__3; // x21
  int32_t v14; // w2
  int32_t v15; // w3

  v3 = this;
  if ( (byte_4A5F168 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1B885B0(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__);
    byte_4A5F168 = 1;
  }
  resultEventRewardInfos = v3->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_14;
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    recipePointRewardDialog = _4__this->fields.recipePointRewardDialog;
    _9__2 = v3->fields.__9__2;
    currentEventId = _4__this->fields.currentEventId;
    eventRecipeEntity = v3->fields.eventRecipeEntity;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v3,
        Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
        0LL);
      v3->fields.__9__2 = _9__2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v10, v11);
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
LABEL_14:
    sub_1B8880C(this, method);
  }
  requestCallBack = _4__this->fields.requestCallBack;
  _9__3 = v3->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v14, v15);
  }
  if ( !requestCallBack )
    goto LABEL_14;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleDropItem_array *, _QWORD, System_Action_o *, _QWORD))requestCallBack->fields.m_target)(
    requestCallBack->fields.original_method_info,
    resultEventRewardInfos,
    0LL,
    _9__3,
    *(_QWORD *)&requestCallBack->fields.extra_arg);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__2(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  EventRecipeListViewManager___c__DisplayClass33_0_o *v2; // x19
  struct EventRecipeListViewManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  System_Action_o *_9__4; // x21
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  v2 = this;
  if ( (byte_4A5F169 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1B885B0(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__);
    byte_4A5F169 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  requestCallBack = _4__this->fields.requestCallBack;
  _9__4 = v2->fields.__9__4;
  resultEventRewardInfos = v2->fields.resultEventRewardInfos;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0LL);
    v2->fields.__9__4 = _9__4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v7, v8);
  }
  if ( !requestCallBack )
LABEL_8:
    sub_1B8880C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleDropItem_array *, _QWORD, System_Action_o *, _QWORD))requestCallBack->fields.m_target)(
    requestCallBack->fields.original_method_info,
    resultEventRewardInfos,
    0LL,
    _9__4,
    *(_QWORD *)&requestCallBack->fields.extra_arg);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__3(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventRecipeListViewManager_resData_array *res; // x8

  res = this->fields.res;
  if ( !res )
    goto LABEL_5;
  if ( !res->max_length )
    sub_1B88814(this, method);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1B8880C(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], v2);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__4(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventRecipeListViewManager_resData_array *res; // x8

  res = this->fields.res;
  if ( !res )
    goto LABEL_5;
  if ( !res->max_length )
    sub_1B88814(this, method);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1B8880C(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], v2);
}


void __fastcall EventRecipeListViewManager_resData___ctor(
        EventRecipeListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
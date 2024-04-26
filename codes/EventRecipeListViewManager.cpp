void __fastcall EventRecipeListViewManager___ctor(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventRecipeListViewManager__CheckOpenQuest(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewManager_resData_o *response,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 currentEventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v8; // x9
  UserEventPointEntity_o *v9; // x8
  int64_t value; // x2
  __int64 v11; // x0

  if ( (byte_434E8B6 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434E8B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B7076C(Instance, currentEventId);
  }
  if ( !(_DWORD)v8 )
  {
    v11 = sub_B70798(Instance);
    sub_B70738(v11, 0LL);
  }
  v9 = oldUserEventPoint->m_Items[0];
  if ( !v9 )
    goto LABEL_11;
  value = v9->fields.value;
  if ( !Instance )
    goto LABEL_11;
LABEL_9:
  CommonUI__CheckOpenQuestByEventPoint(Instance, currentEventId, value, 0LL, 0, 0LL);
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
  EventRecipeEntity_o *v11; // x22
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  int32_t id; // w24
  EventRecipeGiftEntity_array *v14; // x25
  EventRecipeListViewItem_o *v15; // x23
  UILabel_o *emptyMessageLabel; // x19
  __int64 v17; // x0

  if ( (byte_434E8AD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
    sub_B70694(&EventRecipeListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_5799/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_434E8AD = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !eventRecipeEntities )
    goto LABEL_18;
  max_length = eventRecipeEntities->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v17 = sub_B70798(Instance);
        sub_B70738(v17, 0LL);
      }
      v11 = eventRecipeEntities->m_Items[v10];
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
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
      v15 = (EventRecipeListViewItem_o *)sub_B70764(EventRecipeListViewItem_TypeInfo);
      EventRecipeListViewItem___ctor(v15, id, v11, v14, eventId, 0LL);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_12;
    }
LABEL_18:
    sub_B7076C(Instance, v8);
  }
LABEL_12:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  if ( !*(_QWORD *)&eventRecipeEntities->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5799/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_18;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall EventRecipeListViewManager__CreateRecipeResponse(
        EventRecipeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventRecipeListViewManager___c__DisplayClass33_0_o *v5; // x20
  void *playVoiceAction; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x23
  WarBoardData_SquareRangeSearch_o *v10; // x0
  EventRecipeEntity_o **p_eventRecipeEntity; // x21
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  Il2CppObject *v13; // x22
  struct EventRecipeListViewManager_resData_array **p_res; // x22
  struct EventRecipeListViewManager_resData_array *v15; // x8
  EventRecipeListViewManager_resData_o *v16; // x8
  System_Int32_array *recipeGiftIds; // x22
  struct EventRecipeListViewManager_resData_array *res; // x8
  const MethodInfo *v19; // x1
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x25
  BattleDropItem_array *resultEventRewardInfos; // x23
  EventRecipeEntity_o *v22; // x21
  EventRecipeGiftEntity_o *v23; // x24
  System_Action_o *v24; // x26
  RecipeRewardDialogComponent_GetEffect_o *v25; // x20
  const MethodInfo *v26; // x1
  __int64 v27; // x0

  if ( (byte_434E8B4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int__string____Action__Invoke__);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
    sub_B70694(&Method_EventRecipeListViewManager_GetEffect__);
    sub_B70694(&Method_System_Func_EventRecipeEntity__bool___ctor__);
    sub_B70694(&System_Func_EventRecipeEntity__bool__TypeInfo);
    sub_B70694(&RecipeRewardDialogComponent_GetEffect_TypeInfo);
    sub_B70694(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__);
    sub_B70694(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__);
    sub_B70694(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_434E8B4 = 1;
  }
  v5 = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B70764(EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
  EventRecipeListViewManager___c__DisplayClass33_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_28;
  v5->fields.__4__this = this;
  sub_B70630(&v5->fields);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_EventRecipeEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_EventRecipeEntity__bool___ctor__);
  v10 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          eventRecipeEntities,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  p_eventRecipeEntity = &v5->fields.eventRecipeEntity;
  v5->fields.eventRecipeEntity = (struct EventRecipeEntity_o *)v10;
  sub_B70630(&v5->fields.eventRecipeEntity);
  eventRecipeEntity = v5->fields.eventRecipeEntity;
  if ( !eventRecipeEntity )
    goto LABEL_28;
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_28;
  System_Action_int__string__string___Invoke(
    (System_Action_int__string__string__o *)playVoiceAction,
    this->fields.svtId,
    (System_String_o *)eventRecipeEntity->fields.voiceIds,
    0LL,
    (const MethodInfo_265B5D8 *)Method_System_Action_int__string____Action__Invoke__);
  v13 = (Il2CppObject *)System_String__Concat_44760452(
                          (System_String_o *)StringLiteral_15855/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16092/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5->fields.res = (struct EventRecipeListViewManager_resData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                        v13,
                                                                        (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  p_res = &v5->fields.res;
  sub_B70630(&v5->fields.res);
  playVoiceAction = this->fields.touchPanel;
  if ( !playVoiceAction )
    goto LABEL_28;
  playVoiceAction = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)playVoiceAction, 0LL);
  if ( !playVoiceAction )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playVoiceAction, 0, 0LL);
  playVoiceAction = this->fields.maskPanel;
  if ( !playVoiceAction )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playVoiceAction, 0, 0LL);
  v15 = *p_res;
  if ( !*p_res )
    goto LABEL_28;
  if ( !v15->max_length )
    goto LABEL_29;
  v16 = v15->m_Items[0];
  if ( !v16 )
    goto LABEL_28;
  recipeGiftIds = v16->fields.recipeGiftIds;
  v5->fields.resultEventRewardInfos = v16->fields.resultEventRewardInfos;
  sub_B70630(&v5->fields.resultEventRewardInfos);
  res = v5->fields.res;
  if ( !res )
    goto LABEL_28;
  if ( !res->max_length )
    goto LABEL_29;
  if ( !res->m_Items[0] )
    goto LABEL_28;
  playVoiceAction = this->fields.recipeRewardDialog;
  if ( !playVoiceAction
    || (RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)playVoiceAction, 0LL),
        (playVoiceAction = this->fields.recipePointRewardDialog) == 0LL)
    || (RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)playVoiceAction, 0LL),
        EventRecipeListViewManager__RequestListObject(this, v19),
        (playVoiceAction = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (playVoiceAction = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)playVoiceAction,
                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*p_eventRecipeEntity)
    || !playVoiceAction
    || (playVoiceAction = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)playVoiceAction,
                            (*p_eventRecipeEntity)->fields.id,
                            0LL)) == 0LL )
  {
LABEL_28:
    sub_B7076C(playVoiceAction, v7);
  }
  if ( !*((_DWORD *)playVoiceAction + 6) )
  {
LABEL_29:
    v27 = sub_B70798(playVoiceAction);
    sub_B70738(v27, 0LL);
  }
  recipeRewardDialog = this->fields.recipeRewardDialog;
  resultEventRewardInfos = v5->fields.resultEventRewardInfos;
  v22 = *p_eventRecipeEntity;
  v23 = (EventRecipeGiftEntity_o *)*((_QWORD *)playVoiceAction + 4);
  v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__,
    0LL);
  v25 = (RecipeRewardDialogComponent_GetEffect_o *)sub_B70764(RecipeRewardDialogComponent_GetEffect_TypeInfo);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v25,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    0LL);
  if ( !recipeRewardDialog )
    goto LABEL_28;
  RecipeRewardDialogComponent__Open(recipeRewardDialog, recipeGiftIds, resultEventRewardInfos, v22, v23, v24, v25, 0LL);
  ActionExtensions__Call(this->fields.recipeCallback, 0LL);
  EventRecipeListViewManager__UpdateEventItemList(this, v26);
}


void __fastcall EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *currencyInfoController; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *recipeRewardDialog; // x20
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  UnityEngine_Object_o *v11; // x21

  if ( (byte_434E8AE & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E8AE = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    RecipeAssetManager__Release(assetManager, this->fields.currentEventId, 0LL);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(recipeConfirmDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
    this->fields.recipeConfirmDialog = 0LL;
    sub_B70630(&this->fields.recipeConfirmDialog);
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(recipeRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v9, 0LL);
    this->fields.recipeRewardDialog = 0LL;
    sub_B70630(&this->fields.recipeRewardDialog);
  }
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(recipePointRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipePointRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v11, 0LL);
    this->fields.recipePointRewardDialog = 0LL;
    sub_B70630(&this->fields.recipePointRewardDialog);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_34:
    sub_B7076C(currencyInfoController, v5);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventRecipeListViewManager__GetEffect(
        EventRecipeListViewManager_o *this,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  EventRecipeListViewManager_o *v4; // x19
  struct RecipeAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeDropEffetct_k__BackingField; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  UnityEngine_Transform_o *v12; // x20
  int v13; // s0

  v4 = this;
  if ( (byte_434E8B5 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EventRecipeListViewManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E8B5 = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_12;
  recipeDropEffetct_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._recipeDropEffetct_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventRecipeListViewManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           recipeDropEffetct_k__BackingField,
                                           (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_12;
  v7 = (UnityEngine_GameObject_o *)this;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parentTransform, 0LL),
        transform = UnityEngine_GameObject__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL),
        v12 = UnityEngine_GameObject__get_transform(v7, 0LL),
        *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_one(0LL),
        !v12) )
  {
LABEL_12:
    sub_B7076C(this, parentTransform);
  }
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
  return v7;
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
  EventRecipeListViewManager___c__DisplayClass24_0_o *v17; // x21
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  struct System_Action_BattleDropItem____int__Action__o *v20; // x26
  struct PresentBoxOverDialog_o *v21; // x24
  System_Int32_array *EventItemList; // x28
  struct System_Action_int__string____Action__o *v23; // x25
  struct UnityEngine_GameObject_o *v24; // x23
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x20
  EventDetailEntity_o *v27; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x22
  ShopCurrencyInfoController_o *v29; // x20
  int32_t v30; // w22
  int32_t v31; // w8
  RecipeAssetManager_o *assetManager; // x20
  struct RecipeAssetManager_o **p_assetManager; // x19
  RecipeAssetManager_o *v34; // x20
  int32_t v35; // w19
  System_Action_o *v36; // x22
  struct System_Action_o *v38; // [xsp+10h] [xbp-60h]

  if ( (byte_434E8AC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_B70694(&RecipeAssetManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__);
    sub_B70694(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
    byte_434E8AC = 1;
  }
  v17 = (EventRecipeListViewManager___c__DisplayClass24_0_o *)sub_B70764(EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
  EventRecipeListViewManager___c__DisplayClass24_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_19;
  v17->fields.__4__this = this;
  sub_B70630(&v17->fields);
  v17->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v38 = recipeCallback;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_19;
  v20 = requestCallBack;
  v21 = boxOverDlg;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, v17->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v23 = playVoice;
  v24 = maskPanle;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             v17->fields.eventId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v27 = (EventDetailEntity_o *)Entity;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v28;
  sub_B70630(&currencyInfoController->fields.objectList);
  if ( !v27 )
    goto LABEL_19;
  v29 = this->fields.currencyInfoController;
  v30 = v17->fields.eventId;
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v27, 0LL);
  if ( !v29 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v29, 6, v30, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.svtId = svtId;
  v31 = v17->fields.eventId;
  this->fields.recipeCallback = v38;
  this->fields.currentEventId = v31;
  sub_B70630(&this->fields.recipeCallback);
  this->fields.requestCallBack = v20;
  sub_B70630(&this->fields.requestCallBack);
  this->fields.playVoiceAction = v23;
  sub_B70630(&this->fields.playVoiceAction);
  this->fields.presentBoxOverDlg = v21;
  sub_B70630(&this->fields.presentBoxOverDlg);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_B70630(&this->fields.boxOverDlgCloseCallBack);
  this->fields.maskPanel = v24;
  sub_B70630(&this->fields.maskPanel);
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
    p_assetManager = &this->fields.assetManager;
    v34 = (RecipeAssetManager_o *)sub_B70764(RecipeAssetManager_TypeInfo);
    RecipeAssetManager___ctor(v34, 0LL);
    *p_assetManager = v34;
    sub_B70630(p_assetManager);
    assetManager = *p_assetManager;
  }
  v35 = v17->fields.eventId;
  v36 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v17,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_19:
    sub_B7076C(Instance, v19);
  RecipeAssetManager__GetAssets(assetManager, v35, v36, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewManager__LocateDialogToRecipePanel(
        EventRecipeListViewManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v6; // x20
  int v7; // s0

  if ( !dialog )
    goto LABEL_7;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this
    || (this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL),
        !transform)
    || (UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL),
        v6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL),
        *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_one(0LL),
        !v6)
    || (UnityEngine_Transform__set_localScale(v6, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (this = (EventRecipeListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)dialog,
                                                  0LL)) == 0LL) )
  {
LABEL_7:
    sub_B7076C(this, dialog);
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

  if ( (byte_434E8B3 & 1) == 0 )
  {
    sub_B70694(&Method_EventRecipeListViewManager_CreateRecipeResponse__);
    sub_B70694(&Method_NetworkManager_getRequest_CreateRecipeRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_434E8B3 = 1;
  }
  recipeConfirmDialog = this->fields.recipeConfirmDialog;
  if ( !recipeConfirmDialog )
    goto LABEL_12;
  EventRecipeConfirmDialogComponent__Close(recipeConfirmDialog, 0LL);
  recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !recipeConfirmDialog )
    goto LABEL_12;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 1, 0LL);
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager_CreateRecipeResponse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v6,
                                                                   (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
    if ( recipeConfirmDialog )
    {
      CreateRecipeRequest__beginRequest(
        (CreateRecipeRequest_o *)recipeConfirmDialog,
        this->fields.selectRecipeId,
        createNum,
        0LL);
      return;
    }
LABEL_12:
    sub_B7076C(recipeConfirmDialog, *(_QWORD *)&createNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 0, 0LL);
}


void __fastcall EventRecipeListViewManager__OnClickListView(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewObject_o *obj,
        const MethodInfo *method)
{
  void *maskPanel; // x0
  int32_t dispMode; // w8
  const MethodInfo *v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v9; // x1
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  EventRecipeEntity_o *v11; // x22
  EventRecipeGiftEntity_array *v12; // x20
  System_Action_int__o *v13; // x23
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434E8B2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventRecipeMaster___);
    sub_B70694(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__);
    sub_B70694(&Method_EventRecipeListViewManager_OnClickDecide__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434E8B2 = 1;
  }
  entity = 0LL;
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_27;
  dispMode = obj->fields.dispMode;
  if ( !dispMode )
    goto LABEL_24;
  if ( (dispMode & 0xFFFFFFFE) != 2 )
    return;
  maskPanel = EventRecipeListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !maskPanel )
    goto LABEL_27;
  if ( *((_BYTE *)maskPanel + 136) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    maskPanel = EventRecipeListViewObject__GetItem(obj, v7);
    if ( maskPanel )
    {
      this->fields.selectRecipeId = EventRecipeListViewItem__get_RecipeId((EventRecipeListViewItem_o *)maskPanel, 0LL);
      maskPanel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( maskPanel )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)maskPanel,
                                                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
        maskPanel = EventRecipeListViewObject__GetItem(obj, v9);
        if ( maskPanel )
        {
          maskPanel = (void *)EventRecipeListViewItem__get_RecipeId((EventRecipeListViewItem_o *)maskPanel, 0LL);
          if ( MasterData_WarQuestSelectionMaster )
          {
            if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    MasterData_WarQuestSelectionMaster,
                    &entity,
                    (int32_t)maskPanel,
                    (const MethodInfo_21C049C *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
              goto LABEL_24;
            recipeConfirmDialog = this->fields.recipeConfirmDialog;
            v11 = (EventRecipeEntity_o *)entity;
            maskPanel = EventRecipeListViewObject__GetItem(obj, (const MethodInfo *)obj);
            if ( maskPanel )
            {
              v12 = (EventRecipeGiftEntity_array *)*((_QWORD *)maskPanel + 15);
              v13 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v13,
                (Il2CppObject *)this,
                Method_EventRecipeListViewManager_OnClickDecide__,
                (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
              if ( recipeConfirmDialog )
              {
                EventRecipeConfirmDialogComponent__Open(
                  recipeConfirmDialog,
                  v11,
                  v12,
                  v13,
                  this->fields.presentBoxOverDlg,
                  this->fields.boxOverDlgCloseCallBack,
                  0LL);
                goto LABEL_24;
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_B7076C(maskPanel, obj);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(2, 0LL);
LABEL_24:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_27;
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

  if ( (byte_434E8B1 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E8B1 = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_B7076C(0LL, v7);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_434E8B0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__);
    sub_B70694(&Method_EventRecipeListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_434E8B0 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRecipeListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B7076C(0LL, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v11.fields.current;
      v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v8, v9);
      EventRecipeListViewObject__Init_19098124((EventRecipeListViewObject_o *)current, 3, v7, 1.0, v10);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
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
  __int64 v10; // x10

  if ( (byte_434E8AF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventRecipeListViewManager_OnMoveEnd__);
    sub_B70694(&EventRecipeListViewObject_TypeInfo);
    byte_434E8AF = 1;
  }
  v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v10 = *(&EventRecipeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v10)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[v10 - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_B7076C(v7, v8);
  }
  EventRecipeListViewObject__Init_19098124((EventRecipeListViewObject_o *)obj, 3, v6, 1.0, v9);
}


void __fastcall EventRecipeListViewManager__SetRecipeObject(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *recipeRewardDialog; // x21
  struct RecipeRewardDialogComponent_o **p_recipeRewardDialog; // x20
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  struct RecipeAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeRewardDialog_k__BackingField; // x21
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *recipePointRewardDialog; // x21
  struct RecipePointRewardDialogComponent_o **p_recipePointRewardDialog; // x20
  struct RecipeAssetManager_o *v12; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipePointRewardDialog_k__BackingField; // x21
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *recipeConfirmDialog; // x21
  struct EventRecipeConfirmDialogComponent_o **p_recipeConfirmDialog; // x20
  struct RecipeAssetManager_o *v17; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeConfirmDialog_k__BackingField; // x21
  const MethodInfo *v19; // x2

  if ( (byte_434E8AB & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E8AB = 1;
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipeRewardDialog = &this->fields.recipeRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_37;
    recipeRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._recipeRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       recipeRewardDialog_k__BackingField,
                                       (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_37;
    this->fields.recipeRewardDialog = (struct RecipeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                v5,
                                                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    sub_B70630(&this->fields.recipeRewardDialog);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v9);
  }
  v5 = (UnityEngine_GameObject_o *)*p_recipeRewardDialog;
  if ( !*p_recipeRewardDialog )
    goto LABEL_37;
  RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)v5, 0LL);
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipePointRewardDialog = &this->fields.recipePointRewardDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v12 = this->fields.assetManager;
    if ( !v12 )
      goto LABEL_37;
    recipePointRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v12->fields._recipePointRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       recipePointRewardDialog_k__BackingField,
                                       (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_37;
    this->fields.recipePointRewardDialog = (struct RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          v5,
                                                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    sub_B70630(&this->fields.recipePointRewardDialog);
    EventRecipeListViewManager__LocateDialogToRecipePanel(
      this,
      (BaseDialog_o *)this->fields.recipePointRewardDialog,
      v14);
  }
  v5 = (UnityEngine_GameObject_o *)*p_recipePointRewardDialog;
  if ( !*p_recipePointRewardDialog )
    goto LABEL_37;
  RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)v5, 0LL);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipeConfirmDialog = &this->fields.recipeConfirmDialog;
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v17 = this->fields.assetManager;
    if ( v17 )
    {
      recipeConfirmDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v17->fields._recipeConfirmDialog_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         recipeConfirmDialog_k__BackingField,
                                         (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        this->fields.recipeConfirmDialog = (struct EventRecipeConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v5,
                                                                                           (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        sub_B70630(&this->fields.recipeConfirmDialog);
        EventRecipeListViewManager__LocateDialogToRecipePanel(
          this,
          (BaseDialog_o *)this->fields.recipeConfirmDialog,
          v19);
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_B7076C(v5, v6);
  }
LABEL_35:
  v5 = (UnityEngine_GameObject_o *)*p_recipeConfirmDialog;
  if ( !*p_recipeConfirmDialog )
    goto LABEL_37;
  EventRecipeConfirmDialogComponent__Init((EventRecipeConfirmDialogComponent_o *)v5, this->fields.currentEventId, 0LL);
}


void __fastcall EventRecipeListViewManager__StopUpdateRemainTime(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B7076C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventRecipeListViewManager__UpdateEventItemList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B7076C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0LL);
}


int32_t __fastcall EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B7076C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventRecipeListViewObject__o *__fastcall EventRecipeListViewManager__get_ObjectList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_434E8AA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E8AA = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  struct EventRecipeListViewManager_o *v5; // x8

  if ( (byte_434EA36 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventRecipeMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434EA36 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, 0LL);
  _4__this = (EventRecipeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (EventRecipeListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)_4__this,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v4 = this->fields.__4__this;
  if ( !v4
    || !_4__this
    || (_4__this = (EventRecipeListViewManager_o *)EventRecipeMaster__GetRecipeEntityArray(
                                                     (EventRecipeMaster_o *)_4__this,
                                                     v4->fields.currentEventId,
                                                     0LL),
        (v5 = this->fields.__4__this) == 0LL)
    || (v5->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)_4__this,
        sub_B70630(&v5->fields.eventRecipeEntities),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventRecipeListViewManager__CreateList(
          _4__this,
          _4__this->fields.eventRecipeEntities,
          this->fields.eventId,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B7076C(_4__this, method);
  }
  EventRecipeListViewManager__SetCallBack(_4__this, 0LL);
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
    sub_B7076C(this, x);
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x20
  BattleDropItem_array *monitor; // x19
  Il2CppClass *klass; // x8
  RecipePointRewardDialogComponent_o *methodPtr; // x21
  System_Action_o *v6; // x24
  int32_t methodPtr_high; // w22
  EventRecipeEntity_o *v8; // x23
  System_Action_T1__T2__T3__o *v9; // x21
  System_Action_o *v10; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_434EA37 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleDropItem____int__Action__Invoke__);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B70694(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__);
    byte_434EA37 = 1;
  }
  monitor = (BattleDropItem_array *)v2[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_14;
  if ( *(_QWORD *)&monitor->max_length )
  {
    methodPtr = (RecipePointRewardDialogComponent_o *)klass->vtable[5].methodPtr;
    v6 = (System_Action_o *)v2[3].monitor;
    methodPtr_high = HIDWORD(klass->vtable[3].methodPtr);
    v8 = (EventRecipeEntity_o *)v2[2].klass;
    if ( !v6 )
    {
      v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v6,
        v2,
        Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
        0LL);
      v2[3].monitor = v6;
      sub_B70630(&v2[3].monitor);
    }
    if ( methodPtr )
    {
      RecipePointRewardDialogComponent__Open(methodPtr, v8, monitor, methodPtr_high, v6, 0LL);
      return;
    }
LABEL_14:
    sub_B7076C(this, method);
  }
  v9 = (System_Action_T1__T2__T3__o *)klass->vtable[2].method;
  v10 = (System_Action_o *)v2[4].klass;
  if ( !v10 )
  {
    v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      v2,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0LL);
    v2[4].klass = (Il2CppClass *)v10;
    sub_B70630(&v2[4]);
  }
  if ( !v9 )
    goto LABEL_14;
  System_Action_object__int__object___Invoke(
    v9,
    &monitor->obj,
    0,
    (Il2CppObject *)v10,
    (const MethodInfo_265C4F8 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__2(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  System_Action_T1__T2__T3__o *v4; // x20
  System_Action_o *v5; // x22
  Il2CppObject *monitor; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_434EA38 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleDropItem____int__Action__Invoke__);
    sub_B70694(&System_Action_TypeInfo);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B70694(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__);
    byte_434EA38 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  v4 = (System_Action_T1__T2__T3__o *)klass->vtable[2].method;
  v5 = (System_Action_o *)v2[3].klass;
  monitor = (Il2CppObject *)v2[1].monitor;
  if ( !v5 )
  {
    v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      v2,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0LL);
    v2[3].klass = (Il2CppClass *)v5;
    sub_B70630(&v2[3]);
  }
  if ( !v4 )
LABEL_8:
    sub_B7076C(this, method);
  System_Action_object__int__object___Invoke(
    v4,
    monitor,
    0,
    (Il2CppObject *)v5,
    (const MethodInfo_265C4F8 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__3(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  struct EventRecipeListViewManager_resData_array *res; // x8
  __int64 v3; // x0

  res = this->fields.res;
  if ( !res )
    goto LABEL_5;
  if ( !res->max_length )
  {
    v3 = sub_B70798(this);
    sub_B70738(v3, 0LL);
  }
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], 0LL);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__4(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  struct EventRecipeListViewManager_resData_array *res; // x8
  __int64 v3; // x0

  res = this->fields.res;
  if ( !res )
    goto LABEL_5;
  if ( !res->max_length )
  {
    v3 = sub_B70798(this);
    sub_B70738(v3, 0LL);
  }
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_B7076C(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], 0LL);
}


void __fastcall EventRecipeListViewManager_resData___ctor(
        EventRecipeListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
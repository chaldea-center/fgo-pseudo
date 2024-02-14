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
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v7; // x9
  UserEventPointEntity_o *v8; // x8
  int64_t value; // x2
  __int64 v10; // x0

  if ( (byte_42112EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    byte_42112EF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_11;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_11;
  v7 = *(_QWORD *)&oldUserEventPoint->max_length;
  if ( !v7 )
  {
    value = 0LL;
    if ( Instance )
      goto LABEL_9;
LABEL_11:
    sub_B0D97C(Instance);
  }
  if ( !(_DWORD)v7 )
  {
    v10 = sub_B0D9A8(Instance);
    sub_B0D948(v10, 0LL);
  }
  v8 = oldUserEventPoint->m_Items[0];
  if ( !v8 )
    goto LABEL_11;
  value = v8->fields.value;
  if ( !Instance )
    goto LABEL_11;
LABEL_9:
  CommonUI__CheckOpenQuestByEventPoint(Instance, this->fields.currentEventId, value, 0LL, 0, 0LL);
}


void __fastcall EventRecipeListViewManager__CreateList(
        EventRecipeListViewManager_o *this,
        EventRecipeEntity_array *eventRecipeEntities,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  signed int max_length; // w8
  unsigned int v14; // w26
  EventRecipeEntity_o *v15; // x22
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  int32_t id; // w24
  EventRecipeGiftEntity_array *v18; // x25
  __int64 v19; // x1
  __int64 v20; // x2
  EventRecipeListViewItem_o *v21; // x23
  UILabel_o *emptyMessageLabel; // x19
  __int64 v23; // x0

  if ( (byte_42112E6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, eventRecipeEntities);
    sub_B0D8A4(&EventRecipeListViewItem_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&StringLiteral_5726/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v11);
    byte_42112E6 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !eventRecipeEntities )
    goto LABEL_18;
  max_length = eventRecipeEntities->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        v23 = sub_B0D9A8(Instance);
        sub_B0D948(v23, 0LL);
      }
      v15 = eventRecipeEntities->m_Items[v14];
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
      if ( !v15 )
        break;
      if ( !Instance )
        break;
      SortedEntityArray = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)Instance,
                            v15->fields.id,
                            0LL);
      id = v15->fields.id;
      v18 = SortedEntityArray;
      v21 = (EventRecipeListViewItem_o *)sub_B0D974(EventRecipeListViewItem_TypeInfo, v19, v20);
      EventRecipeListViewItem___ctor(v21, id, v15, v18, eventId, 0LL);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_12;
    }
LABEL_18:
    sub_B0D97C(Instance);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5726/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
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
  EventRecipeListViewManager___c__DisplayClass33_0_o *v21; // x20
  void *playVoiceAction; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x23
  WarBoardData_SquareRangeSearch_o *v27; // x0
  EventRecipeEntity_o **p_eventRecipeEntity; // x21
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  Il2CppObject *v30; // x22
  UserPresentBoxWindow_resData_array *v31; // x0
  struct EventRecipeListViewManager_resData_array **p_res; // x22
  struct EventRecipeListViewManager_resData_array *v33; // x8
  EventRecipeListViewManager_resData_o *v34; // x8
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  System_Int32_array *recipeGiftIds; // x22
  struct EventRecipeListViewManager_resData_array *res; // x8
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  __int64 v40; // x2
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x25
  BattleDropItem_array *v42; // x23
  EventRecipeEntity_o *v43; // x21
  EventRecipeGiftEntity_o *v44; // x24
  System_Action_o *v45; // x26
  __int64 v46; // x1
  __int64 v47; // x2
  RecipeRewardDialogComponent_GetEffect_o *v48; // x20
  const MethodInfo *v49; // x1
  __int64 v50; // x0

  if ( (byte_42112ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__string____Action__Invoke__, result);
    sub_B0D8A4(&System_Action_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___, v7);
    sub_B0D8A4(&Method_EventRecipeListViewManager_GetEffect__, v8);
    sub_B0D8A4(&Method_System_Func_EventRecipeEntity__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_EventRecipeEntity__bool__TypeInfo, v10);
    sub_B0D8A4(&RecipeRewardDialogComponent_GetEffect_TypeInfo, v11);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___, v12);
    sub_B0D8A4(&JsonManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__, v15);
    sub_B0D8A4(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__, v16);
    sub_B0D8A4(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v18);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v19);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v20);
    byte_42112ED = 1;
  }
  v21 = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B0D974(
                                                                EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo,
                                                                result,
                                                                method);
  EventRecipeListViewManager___c__DisplayClass33_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_28;
  v21->fields.__4__this = this;
  sub_B0D840(&v21->fields, this);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_EventRecipeEntity__bool__TypeInfo,
                                                                             v23,
                                                                             v24);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v21,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_EventRecipeEntity__bool___ctor__);
  v27 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          eventRecipeEntities,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  p_eventRecipeEntity = &v21->fields.eventRecipeEntity;
  v21->fields.eventRecipeEntity = (struct EventRecipeEntity_o *)v27;
  sub_B0D840(&v21->fields.eventRecipeEntity, v27);
  eventRecipeEntity = v21->fields.eventRecipeEntity;
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
    (const MethodInfo_247DECC *)Method_System_Action_int__string____Action__Invoke__);
  v30 = (Il2CppObject *)System_String__Concat_43852188(
                          (System_String_o *)StringLiteral_15681/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15917/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v31 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
          v30,
          (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  v21->fields.res = (struct EventRecipeListViewManager_resData_array *)v31;
  p_res = &v21->fields.res;
  sub_B0D840(&v21->fields.res, v31);
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
  v33 = *p_res;
  if ( !*p_res )
    goto LABEL_28;
  if ( !v33->max_length )
    goto LABEL_29;
  v34 = v33->m_Items[0];
  if ( !v34 )
    goto LABEL_28;
  recipeGiftIds = v34->fields.recipeGiftIds;
  resultEventRewardInfos = v34->fields.resultEventRewardInfos;
  v21->fields.resultEventRewardInfos = resultEventRewardInfos;
  sub_B0D840(&v21->fields.resultEventRewardInfos, resultEventRewardInfos);
  res = v21->fields.res;
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
        EventRecipeListViewManager__RequestListObject(this, v38),
        (playVoiceAction = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (playVoiceAction = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)playVoiceAction,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*p_eventRecipeEntity)
    || !playVoiceAction
    || (playVoiceAction = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)playVoiceAction,
                            (*p_eventRecipeEntity)->fields.id,
                            0LL)) == 0LL )
  {
LABEL_28:
    sub_B0D97C(playVoiceAction);
  }
  if ( !*((_DWORD *)playVoiceAction + 6) )
  {
LABEL_29:
    v50 = sub_B0D9A8(playVoiceAction);
    sub_B0D948(v50, 0LL);
  }
  recipeRewardDialog = this->fields.recipeRewardDialog;
  v42 = v21->fields.resultEventRewardInfos;
  v43 = *p_eventRecipeEntity;
  v44 = (EventRecipeGiftEntity_o *)*((_QWORD *)playVoiceAction + 4);
  v45 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v39, v40);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v21,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__,
    0LL);
  v48 = (RecipeRewardDialogComponent_GetEffect_o *)sub_B0D974(RecipeRewardDialogComponent_GetEffect_TypeInfo, v46, v47);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v48,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    0LL);
  if ( !recipeRewardDialog )
    goto LABEL_28;
  RecipeRewardDialogComponent__Open(recipeRewardDialog, recipeGiftIds, v42, v43, v44, v45, v48, 0LL);
  ActionExtensions__Call(this->fields.recipeCallback, 0LL);
  EventRecipeListViewManager__UpdateEventItemList(this, v49);
}


void __fastcall EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  UnityEngine_Component_o *currencyInfoController; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *recipeRewardDialog; // x20
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  UnityEngine_Object_o *v10; // x21

  if ( (byte_42112E7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42112E7 = 1;
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    this->fields.recipeConfirmDialog = 0LL;
    sub_B0D840(&this->fields.recipeConfirmDialog, 0LL);
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
    v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v8, 0LL);
    this->fields.recipeRewardDialog = 0LL;
    sub_B0D840(&this->fields.recipeRewardDialog, 0LL);
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
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v10, 0LL);
    this->fields.recipePointRewardDialog = 0LL;
    sub_B0D840(&this->fields.recipePointRewardDialog, 0LL);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_34:
    sub_B0D97C(currencyInfoController);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventRecipeListViewManager__GetEffect(
        EventRecipeListViewManager_o *this,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  EventRecipeListViewManager_o *v4; // x19
  __int64 v5; // x1
  struct RecipeAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeDropEffetct_k__BackingField; // x19
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0

  v4 = this;
  if ( (byte_42112EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, parentTransform);
    this = (EventRecipeListViewManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42112EE = 1;
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
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_12;
  v8 = (UnityEngine_GameObject_o *)this;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parentTransform, 0LL),
        transform = UnityEngine_GameObject__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL),
        v13 = UnityEngine_GameObject__get_transform(v8, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL),
        !v13) )
  {
LABEL_12:
    sub_B0D97C(this);
  }
  UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
  return v8;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  EventRecipeListViewManager___c__DisplayClass24_0_o *v26; // x21
  DataManager_o *Instance; // x0
  struct System_Action_BattleDropItem____int__Action__o *v28; // x26
  struct PresentBoxOverDialog_o *v29; // x24
  System_Int32_array *EventItemList; // x28
  struct System_Action_int__string____Action__o *v31; // x25
  struct UnityEngine_GameObject_o *v32; // x23
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x20
  EventDetailEntity_o *v35; // x27
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x22
  ShopCurrencyInfoController_o *v39; // x20
  int32_t v40; // w22
  int32_t v41; // w8
  __int64 v42; // x1
  __int64 v43; // x2
  RecipeAssetManager_o *assetManager; // x20
  struct RecipeAssetManager_o **p_assetManager; // x19
  RecipeAssetManager_o *v46; // x20
  int32_t v47; // w19
  System_Action_o *v48; // x22
  struct System_Action_o *v50; // [xsp+10h] [xbp-60h]

  if ( (byte_42112E5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v18);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v21);
    sub_B0D8A4(&RecipeAssetManager_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__, v24);
    sub_B0D8A4(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo, v25);
    byte_42112E5 = 1;
  }
  v26 = (EventRecipeListViewManager___c__DisplayClass24_0_o *)sub_B0D974(
                                                                EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo,
                                                                *(_QWORD *)&eventId,
                                                                *(_QWORD *)&svtId);
  EventRecipeListViewManager___c__DisplayClass24_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_19;
  v26->fields.__4__this = this;
  sub_B0D840(&v26->fields, this);
  v26->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v50 = recipeCallback;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_19;
  v28 = requestCallBack;
  v29 = boxOverDlg;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, v26->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v31 = playVoice;
  v32 = maskPanle;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             v26->fields.eventId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v35 = (EventDetailEntity_o *)Entity;
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v38;
  sub_B0D840(&currencyInfoController->fields.objectList, v38);
  if ( !v35 )
    goto LABEL_19;
  v39 = this->fields.currencyInfoController;
  v40 = v26->fields.eventId;
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v35, 0LL);
  if ( !v39 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v39, 6, v40, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.svtId = svtId;
  v41 = v26->fields.eventId;
  this->fields.recipeCallback = v50;
  this->fields.currentEventId = v41;
  sub_B0D840(&this->fields.recipeCallback, v50);
  this->fields.requestCallBack = v28;
  sub_B0D840(&this->fields.requestCallBack, v28);
  this->fields.playVoiceAction = v31;
  sub_B0D840(&this->fields.playVoiceAction, v31);
  this->fields.presentBoxOverDlg = v29;
  sub_B0D840(&this->fields.presentBoxOverDlg, v29);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_B0D840(&this->fields.boxOverDlgCloseCallBack, boxOverDlgCallBack);
  this->fields.maskPanel = v32;
  sub_B0D840(&this->fields.maskPanel, v32);
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
    v46 = (RecipeAssetManager_o *)sub_B0D974(RecipeAssetManager_TypeInfo, v42, v43);
    RecipeAssetManager___ctor(v46, 0LL);
    *p_assetManager = v46;
    sub_B0D840(p_assetManager, v46);
    assetManager = *p_assetManager;
  }
  v47 = v26->fields.eventId;
  v48 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v42, v43);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v26,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_19:
    sub_B0D97C(Instance);
  RecipeAssetManager__GetAssets(assetManager, v47, v48, 0LL);
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
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewManager__OnClickDecide(
        EventRecipeListViewManager_o *this,
        int32_t createNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x21

  if ( (byte_42112EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventRecipeListViewManager_CreateRecipeResponse__, *(_QWORD *)&createNum);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CreateRecipeRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_42112EC = 1;
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
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager_CreateRecipeResponse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v11,
                                                                   (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
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
    sub_B0D97C(recipeConfirmDialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 0, 0LL);
}


void __fastcall EventRecipeListViewManager__OnClickListView(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *maskPanel; // x0
  const MethodInfo *v12; // x1
  int32_t dispMode; // w8
  const MethodInfo *v14; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  EventRecipeEntity_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  EventRecipeGiftEntity_array *v22; // x20
  System_Action_int__o *v23; // x23
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42112EB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, obj);
    sub_B0D8A4(&System_Action_int__TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRecipeMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_EventRecipeListViewManager_OnClickDecide__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    byte_42112EB = 1;
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
  maskPanel = EventRecipeListViewObject__GetItem(obj, v12);
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
    maskPanel = EventRecipeListViewObject__GetItem(obj, v14);
    if ( maskPanel )
    {
      this->fields.selectRecipeId = EventRecipeListViewItem__get_RecipeId((EventRecipeListViewItem_o *)maskPanel, 0LL);
      maskPanel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( maskPanel )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)maskPanel,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
        maskPanel = EventRecipeListViewObject__GetItem(obj, v16);
        if ( maskPanel )
        {
          maskPanel = (void *)EventRecipeListViewItem__get_RecipeId((EventRecipeListViewItem_o *)maskPanel, 0LL);
          if ( MasterData_WarQuestSelectionMaster )
          {
            if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    MasterData_WarQuestSelectionMaster,
                    &entity,
                    (int32_t)maskPanel,
                    (const MethodInfo_2669C30 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
              goto LABEL_24;
            recipeConfirmDialog = this->fields.recipeConfirmDialog;
            v19 = (EventRecipeEntity_o *)entity;
            maskPanel = EventRecipeListViewObject__GetItem(obj, v17);
            if ( maskPanel )
            {
              v22 = (EventRecipeGiftEntity_array *)*((_QWORD *)maskPanel + 15);
              v23 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v20, v21);
              System_Action_int____ctor(
                v23,
                (Il2CppObject *)this,
                Method_EventRecipeListViewManager_OnClickDecide__,
                (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
              if ( recipeConfirmDialog )
              {
                EventRecipeConfirmDialogComponent__Open(
                  recipeConfirmDialog,
                  v19,
                  v22,
                  v23,
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
    sub_B0D97C(maskPanel);
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
  struct UIScrollView_o *v7; // x0

  if ( (byte_42112EA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42112EA = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall EventRecipeListViewManager__RequestListObject(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  int32_t size; // w8
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *current; // x20
  System_Action_o *v15; // x21
  __int64 v16; // x0
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42112E9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__, v5);
    sub_B0D8A4(&Method_EventRecipeListViewManager_OnMoveEnd__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__, v8);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v9);
    byte_42112E9 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRecipeListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v18.fields.current;
      v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v16);
      EventRecipeListViewObject__Init_18268952((EventRecipeListViewObject_o *)current, 3, v15, 1.0, v17);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
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
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_o *v8; // x20
  __int64 v9; // x0
  const MethodInfo *v10; // x3
  __int64 v11; // x10

  if ( (byte_42112E8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&Method_EventRecipeListViewManager_OnMoveEnd__, v6);
    sub_B0D8A4(&EventRecipeListViewObject_TypeInfo, v7);
    byte_42112E8 = 1;
  }
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, obj, item);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v11 = *(&EventRecipeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[v11 - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_B0D97C(v9);
  }
  EventRecipeListViewObject__Init_18268952((EventRecipeListViewObject_o *)obj, 3, v8, 1.0, v10);
}


void __fastcall EventRecipeListViewManager__SetRecipeObject(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *recipeRewardDialog; // x21
  struct RecipeRewardDialogComponent_o **p_recipeRewardDialog; // x20
  UnityEngine_GameObject_o *v9; // x0
  struct RecipeAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeRewardDialog_k__BackingField; // x21
  struct RecipeRewardDialogComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *recipePointRewardDialog; // x21
  struct RecipePointRewardDialogComponent_o **p_recipePointRewardDialog; // x20
  struct RecipeAssetManager_o *v16; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipePointRewardDialog_k__BackingField; // x21
  struct RecipePointRewardDialogComponent_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *recipeConfirmDialog; // x21
  struct EventRecipeConfirmDialogComponent_o **p_recipeConfirmDialog; // x20
  struct RecipeAssetManager_o *v22; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeConfirmDialog_k__BackingField; // x21
  struct EventRecipeConfirmDialogComponent_o *v24; // x0
  const MethodInfo *v25; // x2

  if ( (byte_42112E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___, v4);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_42112E4 = 1;
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipeRewardDialog = &this->fields.recipeRewardDialog;
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
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
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       recipeRewardDialog_k__BackingField,
                                       (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_37;
    Component_srcLineSprite = (struct RecipeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v9,
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    this->fields.recipeRewardDialog = Component_srcLineSprite;
    sub_B0D840(&this->fields.recipeRewardDialog, Component_srcLineSprite);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v13);
  }
  v9 = (UnityEngine_GameObject_o *)*p_recipeRewardDialog;
  if ( !*p_recipeRewardDialog )
    goto LABEL_37;
  RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)v9, 0LL);
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipePointRewardDialog = &this->fields.recipePointRewardDialog;
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( !v16 )
      goto LABEL_37;
    recipePointRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v16->fields._recipePointRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       recipePointRewardDialog_k__BackingField,
                                       (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_37;
    v18 = (struct RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v9,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    this->fields.recipePointRewardDialog = v18;
    sub_B0D840(&this->fields.recipePointRewardDialog, v18);
    EventRecipeListViewManager__LocateDialogToRecipePanel(
      this,
      (BaseDialog_o *)this->fields.recipePointRewardDialog,
      v19);
  }
  v9 = (UnityEngine_GameObject_o *)*p_recipePointRewardDialog;
  if ( !*p_recipePointRewardDialog )
    goto LABEL_37;
  RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)v9, 0LL);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipeConfirmDialog = &this->fields.recipeConfirmDialog;
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v22 = this->fields.assetManager;
    if ( v22 )
    {
      recipeConfirmDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v22->fields._recipeConfirmDialog_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         recipeConfirmDialog_k__BackingField,
                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        v24 = (struct EventRecipeConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v9,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        this->fields.recipeConfirmDialog = v24;
        sub_B0D840(&this->fields.recipeConfirmDialog, v24);
        EventRecipeListViewManager__LocateDialogToRecipePanel(
          this,
          (BaseDialog_o *)this->fields.recipeConfirmDialog,
          v25);
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_B0D97C(v9);
  }
LABEL_35:
  v9 = (UnityEngine_GameObject_o *)*p_recipeConfirmDialog;
  if ( !*p_recipeConfirmDialog )
    goto LABEL_37;
  EventRecipeConfirmDialogComponent__Init((EventRecipeConfirmDialogComponent_o *)v9, this->fields.currentEventId, 0LL);
}


void __fastcall EventRecipeListViewManager__StopUpdateRemainTime(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B0D97C(0LL);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventRecipeListViewManager__UpdateEventItemList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B0D97C(0LL);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0LL);
}


int32_t __fastcall EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B0D97C(this);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventRecipeListViewObject__o *__fastcall EventRecipeListViewManager__get_ObjectList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42112E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_42112E3 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRecipeListViewObject__o *)v12;
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
  __int64 v3; // x1
  EventRecipeListViewManager_o *_4__this; // x0
  struct EventRecipeListViewManager_o *v5; // x8
  struct EventRecipeListViewManager_o *v6; // x8

  if ( (byte_4211BC9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRecipeMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4211BC9 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, 0LL);
  _4__this = (EventRecipeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (EventRecipeListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)_4__this,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v5 = this->fields.__4__this;
  if ( !v5
    || !_4__this
    || (_4__this = (EventRecipeListViewManager_o *)EventRecipeMaster__GetRecipeEntityArray(
                                                     (EventRecipeMaster_o *)_4__this,
                                                     v5->fields.currentEventId,
                                                     0LL),
        (v6 = this->fields.__4__this) == 0LL)
    || (v6->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)_4__this,
        sub_B0D840(&v6->fields.eventRecipeEntities, _4__this),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventRecipeListViewManager__CreateList(
          _4__this,
          _4__this->fields.eventRecipeEntities,
          this->fields.eventId,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(_4__this);
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
    sub_B0D97C(this);
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleDropItem_array *monitor; // x19
  Il2CppClass *klass; // x8
  RecipePointRewardDialogComponent_o *methodPtr; // x21
  System_Action_o *v10; // x24
  int32_t methodPtr_high; // w22
  EventRecipeEntity_o *v12; // x23
  System_Action_T1__T2__T3__o *v13; // x21
  System_Action_o *v14; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4211BCA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B0D8A4(&System_Action_TypeInfo, v4);
    sub_B0D8A4(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__, v5);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B0D8A4(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
                                                                   v6);
    byte_4211BCA = 1;
  }
  monitor = (BattleDropItem_array *)v3[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_14;
  if ( *(_QWORD *)&monitor->max_length )
  {
    methodPtr = (RecipePointRewardDialogComponent_o *)klass->vtable[5].methodPtr;
    v10 = (System_Action_o *)v3[3].monitor;
    methodPtr_high = HIDWORD(klass->vtable[3].methodPtr);
    v12 = (EventRecipeEntity_o *)v3[2].klass;
    if ( !v10 )
    {
      v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(
        v10,
        v3,
        Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
        0LL);
      v3[3].monitor = v10;
      sub_B0D840(&v3[3].monitor, v10);
    }
    if ( methodPtr )
    {
      RecipePointRewardDialogComponent__Open(methodPtr, v12, monitor, methodPtr_high, v10, 0LL);
      return;
    }
LABEL_14:
    sub_B0D97C(this);
  }
  v13 = (System_Action_T1__T2__T3__o *)klass->vtable[2].method;
  v14 = (System_Action_o *)v3[4].klass;
  if ( !v14 )
  {
    v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v14,
      v3,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0LL);
    v3[4].klass = (Il2CppClass *)v14;
    sub_B0D840(&v3[4], v14);
  }
  if ( !v13 )
    goto LABEL_14;
  System_Action_object__int__object___Invoke(
    v13,
    &monitor->obj,
    0,
    (Il2CppObject *)v14,
    (const MethodInfo_247EDEC *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__2(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  System_Action_T1__T2__T3__o *v7; // x20
  System_Action_o *v8; // x22
  Il2CppObject *monitor; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4211BCB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B0D8A4(&System_Action_TypeInfo, v4);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B0D8A4(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
                                                                   v5);
    byte_4211BCB = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_8;
  v7 = (System_Action_T1__T2__T3__o *)klass->vtable[2].method;
  v8 = (System_Action_o *)v3[3].klass;
  monitor = (Il2CppObject *)v3[1].monitor;
  if ( !v8 )
  {
    v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v8,
      v3,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0LL);
    v3[3].klass = (Il2CppClass *)v8;
    sub_B0D840(&v3[3], v8);
  }
  if ( !v7 )
LABEL_8:
    sub_B0D97C(this);
  System_Action_object__int__object___Invoke(
    v7,
    monitor,
    0,
    (Il2CppObject *)v8,
    (const MethodInfo_247EDEC *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
    v3 = sub_B0D9A8(this);
    sub_B0D948(v3, 0LL);
  }
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
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
    v3 = sub_B0D9A8(this);
    sub_B0D948(v3, 0LL);
  }
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_B0D97C(this);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], 0LL);
}


void __fastcall EventRecipeListViewManager_resData___ctor(
        EventRecipeListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
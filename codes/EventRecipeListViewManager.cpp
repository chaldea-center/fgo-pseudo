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

  if ( (byte_41887B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    byte_41887B4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B2C434(Instance, currentEventId);
  }
  if ( !(_DWORD)v8 )
  {
    v11 = sub_B2C460(Instance);
    sub_B2C400(v11, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  signed int max_length; // w8
  unsigned int v15; // w26
  EventRecipeEntity_o *v16; // x22
  const MethodInfo *v17; // x2
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  int32_t id; // w24
  EventRecipeGiftEntity_array *v20; // x25
  EventRecipeListViewItem_o *v21; // x23
  const MethodInfo *v22; // x5
  UILabel_o *emptyMessageLabel; // x19
  __int64 v24; // x0

  if ( (byte_41887AB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, eventRecipeEntities);
    sub_B2C35C(&EventRecipeListViewItem_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_5710/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v11);
    byte_41887AB = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !eventRecipeEntities )
    goto LABEL_18;
  max_length = eventRecipeEntities->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v24 = sub_B2C460(Instance);
        sub_B2C400(v24, 0LL);
      }
      v16 = eventRecipeEntities->m_Items[v15];
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
      if ( !v16 )
        break;
      if ( !Instance )
        break;
      SortedEntityArray = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)Instance,
                            v16->fields.id,
                            v17);
      id = v16->fields.id;
      v20 = SortedEntityArray;
      v21 = (EventRecipeListViewItem_o *)sub_B2C42C(EventRecipeListViewItem_TypeInfo);
      EventRecipeListViewItem___ctor(v21, id, v16, v20, eventId, v22);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_12;
    }
LABEL_18:
    sub_B2C434(Instance, v13);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5710/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
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
  __int64 v21; // x20
  void *playVoiceAction; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x23
  System_Int32_array **v32; // x0
  EventRecipeEntity_o **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x8
  Il2CppObject *v41; // x22
  System_Int32_array **v42; // x0
  __int64 *v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x8
  __int64 v57; // x8
  System_Int32_array **v58; // x1
  System_Int32_array *v59; // x22
  __int64 v60; // x8
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x2
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x25
  BattleDropItem_array *v64; // x23
  EventRecipeEntity_o *v65; // x21
  EventRecipeGiftEntity_o *v66; // x24
  System_Action_o *v67; // x26
  RecipeRewardDialogComponent_GetEffect_o *v68; // x20
  const MethodInfo *v69; // x1
  __int64 v70; // x0

  if ( (byte_41887B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int__string____Action__Invoke__, result);
    sub_B2C35C(&System_Action_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___, v7);
    sub_B2C35C(&Method_EventRecipeListViewManager_GetEffect__, v8);
    sub_B2C35C(&Method_System_Func_EventRecipeEntity__bool___ctor__, v9);
    sub_B2C35C(&System_Func_EventRecipeEntity__bool__TypeInfo, v10);
    sub_B2C35C(&RecipeRewardDialogComponent_GetEffect_TypeInfo, v11);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___, v12);
    sub_B2C35C(&JsonManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__, v15);
    sub_B2C35C(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__, v16);
    sub_B2C35C(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v18);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v19);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v20);
    byte_41887B2 = 1;
  }
  v21 = sub_B2C42C(EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
  EventRecipeListViewManager___c__DisplayClass33_0___ctor(
    (EventRecipeListViewManager___c__DisplayClass33_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_28;
  *(_QWORD *)(v21 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_EventRecipeEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v21,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_EventRecipeEntity__bool___ctor__);
  v32 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 eventRecipeEntities,
                                 (System_Func_TSource__bool__o *)v31,
                                 (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  v33 = (EventRecipeEntity_o **)(v21 + 32);
  *(_QWORD *)(v21 + 32) = v32;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 32), v32, v34, v35, v36, v37, v38, v39);
  v40 = *(_QWORD *)(v21 + 32);
  if ( !v40 )
    goto LABEL_28;
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_28;
  System_Action_int__string__string___Invoke(
    (System_Action_int__string__string__o *)playVoiceAction,
    this->fields.svtId,
    *(System_String_o **)(v40 + 72),
    0LL,
    (const MethodInfo_24CAF68 *)Method_System_Action_int__string____Action__Invoke__);
  v41 = (Il2CppObject *)System_String__Concat_44307816(
                          (System_String_o *)StringLiteral_15634/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15870/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v42 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v41,
                                 (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  *(_QWORD *)(v21 + 40) = v42;
  v43 = (__int64 *)(v21 + 40);
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 40), v42, v44, v45, v46, v47, v48, v49);
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
  v56 = *v43;
  if ( !*v43 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v56 + 24) )
    goto LABEL_29;
  v57 = *(_QWORD *)(v56 + 32);
  if ( !v57 )
    goto LABEL_28;
  v59 = *(System_Int32_array **)(v57 + 16);
  v58 = *(System_Int32_array ***)(v57 + 24);
  *(_QWORD *)(v21 + 24) = v58;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 24), v58, v50, v51, v52, v53, v54, v55);
  v60 = *(_QWORD *)(v21 + 40);
  if ( !v60 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v60 + 24) )
    goto LABEL_29;
  if ( !*(_QWORD *)(v60 + 32) )
    goto LABEL_28;
  playVoiceAction = this->fields.recipeRewardDialog;
  if ( !playVoiceAction
    || (RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)playVoiceAction, 0LL),
        (playVoiceAction = this->fields.recipePointRewardDialog) == 0LL)
    || (RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)playVoiceAction, 0LL),
        EventRecipeListViewManager__RequestListObject(this, v61),
        (playVoiceAction = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (playVoiceAction = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)playVoiceAction,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*v33)
    || !playVoiceAction
    || (playVoiceAction = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)playVoiceAction,
                            (*v33)->fields.id,
                            v62)) == 0LL )
  {
LABEL_28:
    sub_B2C434(playVoiceAction, v23);
  }
  if ( !*((_DWORD *)playVoiceAction + 6) )
  {
LABEL_29:
    v70 = sub_B2C460(playVoiceAction);
    sub_B2C400(v70, 0LL);
  }
  recipeRewardDialog = this->fields.recipeRewardDialog;
  v64 = *(BattleDropItem_array **)(v21 + 24);
  v65 = *v33;
  v66 = (EventRecipeGiftEntity_o *)*((_QWORD *)playVoiceAction + 4);
  v67 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v67,
    (Il2CppObject *)v21,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__,
    0LL);
  v68 = (RecipeRewardDialogComponent_GetEffect_o *)sub_B2C42C(RecipeRewardDialogComponent_GetEffect_TypeInfo);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v68,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    0LL);
  if ( !recipeRewardDialog )
    goto LABEL_28;
  RecipeRewardDialogComponent__Open(recipeRewardDialog, v59, v64, v65, v66, v67, v68, 0LL);
  ActionExtensions__Call(this->fields.recipeCallback, 0LL);
  EventRecipeListViewManager__UpdateEventItemList(this, v69);
}


void __fastcall EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *currencyInfoController; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *recipeRewardDialog; // x20
  UnityEngine_Object_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  UnityEngine_Object_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_41887AC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41887AC = 1;
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
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    this->fields.recipeConfirmDialog = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.recipeConfirmDialog, 0LL, v8, v9, v10, v11, v12, v13);
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
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v15, 0LL);
    this->fields.recipeRewardDialog = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.recipeRewardDialog, 0LL, v16, v17, v18, v19, v20, v21);
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
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v23, 0LL);
    this->fields.recipePointRewardDialog = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.recipePointRewardDialog, 0LL, v24, v25, v26, v27, v28, v29);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_34:
    sub_B2C434(currencyInfoController, v5);
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
  if ( (byte_41887B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, parentTransform);
    this = (EventRecipeListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_41887B3 = 1;
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
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
    sub_B2C434(this, parentTransform);
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
  __int64 v26; // x21
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Action_BattleDropItem____int__Action__o *v35; // x26
  struct PresentBoxOverDialog_o *v36; // x24
  System_Int32_array *EventItemList; // x28
  struct System_Action_int__string____Action__o *v38; // x25
  struct UnityEngine_GameObject_o *v39; // x23
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x20
  EventDetailEntity_o *v42; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x22
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  ShopCurrencyInfoController_o *v50; // x20
  int32_t v51; // w22
  int32_t v52; // w8
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  RecipeAssetManager_o *assetManager; // x20
  BattleServantConfConponent_o *p_assetManager; // x19
  RecipeAssetManager_o *v91; // x20
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  int32_t v98; // w19
  System_Action_o *v99; // x22
  struct System_Action_o *v101; // [xsp+10h] [xbp-60h]

  if ( (byte_41887AA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v18);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v20);
    sub_B2C35C(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v21);
    sub_B2C35C(&RecipeAssetManager_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__, v24);
    sub_B2C35C(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo, v25);
    byte_41887AA = 1;
  }
  v26 = sub_B2C42C(EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
  EventRecipeListViewManager___c__DisplayClass24_0___ctor(
    (EventRecipeListViewManager___c__DisplayClass24_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_19;
  *(_QWORD *)(v26 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v26 + 24) = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v101 = recipeCallback;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_19;
  v35 = requestCallBack;
  v36 = boxOverDlg;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v26 + 24), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v38 = playVoice;
  v39 = maskPanle;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             *(_DWORD *)(v26 + 24),
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v42 = (EventDetailEntity_o *)Entity;
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v43;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !v42 )
    goto LABEL_19;
  v50 = this->fields.currencyInfoController;
  v51 = *(_DWORD *)(v26 + 24);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v42, 0LL);
  if ( !v50 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v50, 6, v51, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.svtId = svtId;
  v52 = *(_DWORD *)(v26 + 24);
  this->fields.recipeCallback = v101;
  this->fields.currentEventId = v52;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.recipeCallback,
    (System_Int32_array **)v101,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.requestCallBack = v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)v35,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.playVoiceAction = v38;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAction,
    (System_Int32_array **)v38,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields.presentBoxOverDlg = v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.presentBoxOverDlg,
    (System_Int32_array **)v36,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.boxOverDlgCloseCallBack,
    (System_Int32_array **)boxOverDlgCallBack,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  this->fields.maskPanel = v39;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.maskPanel,
    (System_Int32_array **)v39,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
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
    p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
    v91 = (RecipeAssetManager_o *)sub_B2C42C(RecipeAssetManager_TypeInfo);
    RecipeAssetManager___ctor(v91, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v91;
    sub_B2C2F8(p_assetManager, (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
    assetManager = (RecipeAssetManager_o *)p_assetManager->klass;
  }
  v98 = *(_DWORD *)(v26 + 24);
  v99 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v99,
    (Il2CppObject *)v26,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_19:
    sub_B2C434(Instance, v28);
  RecipeAssetManager__GetAssets(assetManager, v98, v99, 0LL);
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
    sub_B2C434(this, dialog);
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
  NetworkManager_ResultCallbackFunc_o *v9; // x21

  if ( (byte_41887B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventRecipeListViewManager_CreateRecipeResponse__, *(_QWORD *)&createNum);
    sub_B2C35C(&Method_NetworkManager_getRequest_CreateRecipeRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_41887B1 = 1;
  }
  recipeConfirmDialog = this->fields.recipeConfirmDialog;
  if ( !recipeConfirmDialog )
    goto LABEL_12;
  EventRecipeConfirmDialogComponent__Close(recipeConfirmDialog, *(const MethodInfo **)&createNum);
  recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !recipeConfirmDialog )
    goto LABEL_12;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 1, 0LL);
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager_CreateRecipeResponse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v9,
                                                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
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
    sub_B2C434(recipeConfirmDialog, *(_QWORD *)&createNum);
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
  int32_t dispMode; // w8
  const MethodInfo *v13; // x1
  __int64 v14; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v16; // x1
  __int64 v17; // x8
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  EventRecipeEntity_o *v19; // x22
  EventRecipeGiftEntity_array *v20; // x20
  System_Action_int__o *v21; // x23
  const MethodInfo *v22; // x6
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41887B0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, obj);
    sub_B2C35C(&System_Action_int__TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRecipeMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_EventRecipeListViewManager_OnClickDecide__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_41887B0 = 1;
  }
  entity = 0LL;
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_29;
  dispMode = obj->fields.dispMode;
  if ( !dispMode )
    goto LABEL_26;
  if ( (dispMode & 0xFFFFFFFE) != 2 )
    return;
  maskPanel = EventRecipeListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !maskPanel )
    goto LABEL_29;
  if ( *((_BYTE *)maskPanel + 136) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    maskPanel = EventRecipeListViewObject__GetItem(obj, v13);
    if ( maskPanel )
    {
      v14 = *((_QWORD *)maskPanel + 14);
      if ( v14 )
      {
        this->fields.selectRecipeId = *(_DWORD *)(v14 + 16);
        maskPanel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( maskPanel )
        {
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)maskPanel,
                                                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRecipeMaster___);
          maskPanel = EventRecipeListViewObject__GetItem(obj, v16);
          if ( maskPanel )
          {
            v17 = *((_QWORD *)maskPanel + 14);
            if ( v17 )
            {
              if ( MasterData_WarQuestSelectionMaster )
              {
                if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                        MasterData_WarQuestSelectionMaster,
                        &entity,
                        *(_DWORD *)(v17 + 16),
                        (const MethodInfo_24E412C *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
                  goto LABEL_26;
                recipeConfirmDialog = this->fields.recipeConfirmDialog;
                v19 = (EventRecipeEntity_o *)entity;
                maskPanel = EventRecipeListViewObject__GetItem(obj, (const MethodInfo *)obj);
                if ( maskPanel )
                {
                  v20 = (EventRecipeGiftEntity_array *)*((_QWORD *)maskPanel + 15);
                  v21 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
                  System_Action_int____ctor(
                    v21,
                    (Il2CppObject *)this,
                    Method_EventRecipeListViewManager_OnClickDecide__,
                    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
                  if ( recipeConfirmDialog )
                  {
                    EventRecipeConfirmDialogComponent__Open(
                      recipeConfirmDialog,
                      v19,
                      v20,
                      v21,
                      this->fields.presentBoxOverDlg,
                      this->fields.boxOverDlgCloseCallBack,
                      v22);
                    goto LABEL_26;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B2C434(maskPanel, obj);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(2, 0LL);
LABEL_26:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_29;
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

  if ( (byte_41887AF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41887AF = 1;
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
          sub_B2C434(0LL, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v11; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_41887AE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__, v5);
    sub_B2C35C(&Method_EventRecipeListViewManager_OnMoveEnd__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__, v8);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v9);
    byte_41887AE = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRecipeListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B2C434(0LL, v11);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v18.fields.current;
      v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v15, v16);
      EventRecipeListViewObject__Init_26695196((EventRecipeListViewObject_o *)current, 3, v14, 1.0, v17);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // x10

  if ( (byte_41887AD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_EventRecipeListViewManager_OnMoveEnd__, v6);
    sub_B2C35C(&EventRecipeListViewObject_TypeInfo, v7);
    byte_41887AD = 1;
  }
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v12 = *(&EventRecipeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v12)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[v12 - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_B2C434(v9, v10);
  }
  EventRecipeListViewObject__Init_26695196((EventRecipeListViewObject_o *)obj, 3, v8, 1.0, v11);
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
  __int64 v10; // x1
  struct RecipeAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeRewardDialog_k__BackingField; // x21
  struct RecipeRewardDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *recipePointRewardDialog; // x21
  struct RecipePointRewardDialogComponent_o **p_recipePointRewardDialog; // x20
  struct RecipeAssetManager_o *v23; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipePointRewardDialog_k__BackingField; // x21
  struct RecipePointRewardDialogComponent_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *recipeConfirmDialog; // x21
  struct EventRecipeConfirmDialogComponent_o **p_recipeConfirmDialog; // x20
  const MethodInfo *v35; // x2
  struct RecipeAssetManager_o *v36; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeConfirmDialog_k__BackingField; // x21
  struct EventRecipeConfirmDialogComponent_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x2

  if ( (byte_41887A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___, v4);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_41887A9 = 1;
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
                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_37;
    Component_srcLineSprite = (struct RecipeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v9,
                                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    this->fields.recipeRewardDialog = Component_srcLineSprite;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.recipeRewardDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v20);
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
    v23 = this->fields.assetManager;
    if ( !v23 )
      goto LABEL_37;
    recipePointRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v23->fields._recipePointRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       recipePointRewardDialog_k__BackingField,
                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_37;
    v25 = (struct RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v9,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    this->fields.recipePointRewardDialog = v25;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.recipePointRewardDialog,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    EventRecipeListViewManager__LocateDialogToRecipePanel(
      this,
      (BaseDialog_o *)this->fields.recipePointRewardDialog,
      v32);
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
    v36 = this->fields.assetManager;
    if ( v36 )
    {
      recipeConfirmDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v36->fields._recipeConfirmDialog_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         recipeConfirmDialog_k__BackingField,
                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        v38 = (struct EventRecipeConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v9,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        this->fields.recipeConfirmDialog = v38;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.recipeConfirmDialog,
          (System_Int32_array **)v38,
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
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_B2C434(v9, v10);
  }
LABEL_35:
  v9 = (UnityEngine_GameObject_o *)*p_recipeConfirmDialog;
  if ( !*p_recipeConfirmDialog )
    goto LABEL_37;
  EventRecipeConfirmDialogComponent__Init((EventRecipeConfirmDialogComponent_o *)v9, this->fields.currentEventId, v35);
}


void __fastcall EventRecipeListViewManager__StopUpdateRemainTime(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B2C434(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventRecipeListViewManager__UpdateEventItemList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B2C434(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0LL);
}


int32_t __fastcall EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B2C434(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventRecipeListViewObject__o *__fastcall EventRecipeListViewManager__get_ObjectList(
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
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_41887A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41887A8 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRecipeListViewObject__o *)v11;
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

  if ( (byte_4184B62 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventRecipeMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4184B62 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, 0LL);
  _4__this = (EventRecipeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (EventRecipeListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)_4__this,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v5 = this->fields.__4__this;
  if ( !v5
    || !_4__this
    || (_4__this = (EventRecipeListViewManager_o *)EventRecipeMaster__GetRecipeEntityArray(
                                                     (EventRecipeMaster_o *)_4__this,
                                                     v5->fields.currentEventId,
                                                     0LL),
        (v6 = this->fields.__4__this) == 0LL)
    || (v6->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)_4__this,
        sub_B2C2F8(&v6->fields.eventRecipeEntities, _4__this),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventRecipeListViewManager__CreateList(
          _4__this,
          _4__this->fields.eventRecipeEntities,
          this->fields.eventId,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B2C434(_4__this, method);
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
    sub_B2C434(this, x);
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleDropItem_array *monitor; // x19
  Il2CppClass *klass; // x8
  RecipePointRewardDialogComponent_o *methodPtr; // x21
  System_Action_o *v9; // x24
  int32_t methodPtr_high; // w22
  EventRecipeEntity_o *v11; // x23
  System_Action_T1__T2__T3__o *v12; // x21
  System_Action_o *v13; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4184B63 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__, v4);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B2C35C(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
                                                                   v5);
    byte_4184B63 = 1;
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
    v9 = (System_Action_o *)v2[3].monitor;
    methodPtr_high = HIDWORD(klass->vtable[3].methodPtr);
    v11 = (EventRecipeEntity_o *)v2[2].klass;
    if ( !v9 )
    {
      v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v9,
        v2,
        Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
        0LL);
      v2[3].monitor = v9;
      sub_B2C2F8(&v2[3].monitor, v9);
    }
    if ( methodPtr )
    {
      RecipePointRewardDialogComponent__Open(methodPtr, v11, monitor, methodPtr_high, v9, 0LL);
      return;
    }
LABEL_14:
    sub_B2C434(this, method);
  }
  v12 = (System_Action_T1__T2__T3__o *)klass->vtable[2].method;
  v13 = (System_Action_o *)v2[4].klass;
  if ( !v13 )
  {
    v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      v2,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0LL);
    v2[4].klass = (Il2CppClass *)v13;
    sub_B2C2F8(&v2[4], v13);
  }
  if ( !v12 )
    goto LABEL_14;
  System_Action_object__int__object___Invoke(
    v12,
    &monitor->obj,
    0,
    (Il2CppObject *)v13,
    (const MethodInfo_24CBE88 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__2(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  System_Action_T1__T2__T3__o *v6; // x20
  System_Action_o *v7; // x22
  Il2CppObject *monitor; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4184B64 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B2C35C(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
                                                                   v4);
    byte_4184B64 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  v6 = (System_Action_T1__T2__T3__o *)klass->vtable[2].method;
  v7 = (System_Action_o *)v2[3].klass;
  monitor = (Il2CppObject *)v2[1].monitor;
  if ( !v7 )
  {
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      v2,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0LL);
    v2[3].klass = (Il2CppClass *)v7;
    sub_B2C2F8(&v2[3], v7);
  }
  if ( !v6 )
LABEL_8:
    sub_B2C434(this, method);
  System_Action_object__int__object___Invoke(
    v6,
    monitor,
    0,
    (Il2CppObject *)v7,
    (const MethodInfo_24CBE88 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
    v3 = sub_B2C460(this);
    sub_B2C400(v3, 0LL);
  }
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
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
    v3 = sub_B2C460(this);
    sub_B2C400(v3, 0LL);
  }
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_B2C434(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], 0LL);
}


void __fastcall EventRecipeListViewManager_resData___ctor(
        EventRecipeListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
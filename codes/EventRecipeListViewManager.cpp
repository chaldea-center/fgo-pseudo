void __fastcall EventRecipeListViewManager___ctor(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventRecipeListViewManager__CheckOpenQuest(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewManager_resData_o *response,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 currentEventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v9; // x9
  UserEventPointEntity_o *v10; // x8
  int64_t value; // x2
  __int64 v12; // x0

  if ( (byte_42E54F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)response, (_DWORD)method, v3);
    byte_42E54F6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_11;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_11;
  v9 = *(_QWORD *)&oldUserEventPoint->max_length;
  currentEventId = (unsigned int)this->fields.currentEventId;
  if ( !v9 )
  {
    value = 0LL;
    if ( Instance )
      goto LABEL_9;
LABEL_11:
    sub_B5D69C(Instance, currentEventId);
  }
  if ( !(_DWORD)v9 )
  {
    v12 = sub_B5D6C8(Instance);
    sub_B5D668(v12, 0LL);
  }
  v10 = oldUserEventPoint->m_Items[0];
  if ( !v10 )
    goto LABEL_11;
  value = v10->fields.value;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  signed int max_length; // w8
  unsigned int v25; // w26
  EventRecipeEntity_o *v26; // x22
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  int32_t id; // w24
  EventRecipeGiftEntity_array *v29; // x25
  EventRecipeListViewItem_o *v30; // x23
  UILabel_o *emptyMessageLabel; // x19
  __int64 v32; // x0

  if ( (byte_42E54ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, (_DWORD)eventRecipeEntities, eventId, method);
    sub_B5D5C4(&EventRecipeListViewItem_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v19, v20, v21);
    byte_42E54ED = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !eventRecipeEntities )
    goto LABEL_18;
  max_length = eventRecipeEntities->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        v32 = sub_B5D6C8(Instance);
        sub_B5D668(v32, 0LL);
      }
      v26 = eventRecipeEntities->m_Items[v25];
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
      if ( !v26 )
        break;
      if ( !Instance )
        break;
      SortedEntityArray = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)Instance,
                            v26->fields.id,
                            0LL);
      id = v26->fields.id;
      v29 = SortedEntityArray;
      v30 = (EventRecipeListViewItem_o *)sub_B5D694(EventRecipeListViewItem_TypeInfo);
      EventRecipeListViewItem___ctor(v30, id, v26, v29, eventId, 0LL);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_12;
    }
LABEL_18:
    sub_B5D69C(Instance, v23);
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
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  EventRecipeListViewManager___c__DisplayClass33_0_o *v54; // x20
  void *playVoiceAction; // x0
  __int64 v56; // x1
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x23
  WarBoardData_SquareRangeSearch_o *v59; // x0
  EventRecipeEntity_o **p_eventRecipeEntity; // x21
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  Il2CppObject *v62; // x22
  struct EventRecipeListViewManager_resData_array **p_res; // x22
  struct EventRecipeListViewManager_resData_array *v64; // x8
  EventRecipeListViewManager_resData_o *v65; // x8
  System_Int32_array *recipeGiftIds; // x22
  struct EventRecipeListViewManager_resData_array *res; // x8
  const MethodInfo *v68; // x1
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x25
  BattleDropItem_array *resultEventRewardInfos; // x23
  EventRecipeEntity_o *v71; // x21
  EventRecipeGiftEntity_o *v72; // x24
  System_Action_o *v73; // x26
  RecipeRewardDialogComponent_GetEffect_o *v74; // x20
  const MethodInfo *v75; // x1
  __int64 v76; // x0

  if ( (byte_42E54F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__string____Action__Invoke__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_EventRecipeListViewManager_GetEffect__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_EventRecipeEntity__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_EventRecipeEntity__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&RecipeRewardDialogComponent_GetEffect_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___, v27, v28, v29);
    sub_B5D5C4(&JsonManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__, v36, v37, v38);
    sub_B5D5C4(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__, v39, v40, v41);
    sub_B5D5C4(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v51, v52, v53);
    byte_42E54F4 = 1;
  }
  v54 = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B5D694(EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
  EventRecipeListViewManager___c__DisplayClass33_0___ctor(v54, 0LL);
  if ( !v54 )
    goto LABEL_28;
  v54->fields.__4__this = this;
  sub_B5D560(&v54->fields);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventRecipeEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v58,
    (Il2CppObject *)v54,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_EventRecipeEntity__bool___ctor__);
  v59 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          eventRecipeEntities,
          (System_Func_TSource__bool__o *)v58,
          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  p_eventRecipeEntity = &v54->fields.eventRecipeEntity;
  v54->fields.eventRecipeEntity = (struct EventRecipeEntity_o *)v59;
  sub_B5D560(&v54->fields.eventRecipeEntity);
  eventRecipeEntity = v54->fields.eventRecipeEntity;
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
    (const MethodInfo_259A7B0 *)Method_System_Action_int__string____Action__Invoke__);
  v62 = (Il2CppObject *)System_String__Concat_44580072(
                          (System_String_o *)StringLiteral_15824/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16061/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v54->fields.res = (struct EventRecipeListViewManager_resData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                         v62,
                                                                         (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  p_res = &v54->fields.res;
  sub_B5D560(&v54->fields.res);
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
  v64 = *p_res;
  if ( !*p_res )
    goto LABEL_28;
  if ( !v64->max_length )
    goto LABEL_29;
  v65 = v64->m_Items[0];
  if ( !v65 )
    goto LABEL_28;
  recipeGiftIds = v65->fields.recipeGiftIds;
  v54->fields.resultEventRewardInfos = v65->fields.resultEventRewardInfos;
  sub_B5D560(&v54->fields.resultEventRewardInfos);
  res = v54->fields.res;
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
        EventRecipeListViewManager__RequestListObject(this, v68),
        (playVoiceAction = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (playVoiceAction = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)playVoiceAction,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*p_eventRecipeEntity)
    || !playVoiceAction
    || (playVoiceAction = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)playVoiceAction,
                            (*p_eventRecipeEntity)->fields.id,
                            0LL)) == 0LL )
  {
LABEL_28:
    sub_B5D69C(playVoiceAction, v56);
  }
  if ( !*((_DWORD *)playVoiceAction + 6) )
  {
LABEL_29:
    v76 = sub_B5D6C8(playVoiceAction);
    sub_B5D668(v76, 0LL);
  }
  recipeRewardDialog = this->fields.recipeRewardDialog;
  resultEventRewardInfos = v54->fields.resultEventRewardInfos;
  v71 = *p_eventRecipeEntity;
  v72 = (EventRecipeGiftEntity_o *)*((_QWORD *)playVoiceAction + 4);
  v73 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v73,
    (Il2CppObject *)v54,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__,
    0LL);
  v74 = (RecipeRewardDialogComponent_GetEffect_o *)sub_B5D694(RecipeRewardDialogComponent_GetEffect_TypeInfo);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v74,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    0LL);
  if ( !recipeRewardDialog )
    goto LABEL_28;
  RecipeRewardDialogComponent__Open(recipeRewardDialog, recipeGiftIds, resultEventRewardInfos, v71, v72, v73, v74, 0LL);
  ActionExtensions__Call(this->fields.recipeCallback, 0LL);
  EventRecipeListViewManager__UpdateEventItemList(this, v75);
}


void __fastcall EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *currencyInfoController; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *recipeRewardDialog; // x20
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  UnityEngine_Object_o *v13; // x21

  if ( (byte_42E54EE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E54EE = 1;
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    this->fields.recipeConfirmDialog = 0LL;
    sub_B5D560(&this->fields.recipeConfirmDialog);
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
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v11, 0LL);
    this->fields.recipeRewardDialog = 0LL;
    sub_B5D560(&this->fields.recipeRewardDialog);
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
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v13, 0LL);
    this->fields.recipePointRewardDialog = 0LL;
    sub_B5D560(&this->fields.recipePointRewardDialog);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_34:
    sub_B5D69C(currencyInfoController, v7);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventRecipeListViewManager__GetEffect(
        EventRecipeListViewManager_o *this,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventRecipeListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct RecipeAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeDropEffetct_k__BackingField; // x19
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0

  v5 = this;
  if ( (byte_42E54F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, (_DWORD)parentTransform, (_DWORD)method, v3);
    this = (EventRecipeListViewManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E54F5 = 1;
  }
  assetManager = v5->fields.assetManager;
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
                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_12;
  v11 = (UnityEngine_GameObject_o *)this;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this
    || (UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parentTransform, 0LL),
        transform = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v13, 0LL),
        v16 = UnityEngine_GameObject__get_transform(v11, 0LL),
        *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_one(0LL),
        !v16) )
  {
LABEL_12:
    sub_B5D69C(this, parentTransform);
  }
  UnityEngine_Transform__set_localScale(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
  return v11;
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  EventRecipeListViewManager___c__DisplayClass24_0_o *v44; // x21
  DataManager_o *Instance; // x0
  __int64 v46; // x1
  struct System_Action_BattleDropItem____int__Action__o *v47; // x26
  struct PresentBoxOverDialog_o *v48; // x24
  System_Int32_array *EventItemList; // x28
  struct System_Action_int__string____Action__o *v50; // x25
  struct UnityEngine_GameObject_o *v51; // x23
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x20
  EventDetailEntity_o *v54; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x22
  ShopCurrencyInfoController_o *v56; // x20
  int32_t v57; // w22
  int32_t v58; // w8
  RecipeAssetManager_o *assetManager; // x20
  struct RecipeAssetManager_o **p_assetManager; // x19
  RecipeAssetManager_o *v61; // x20
  int32_t v62; // w19
  System_Action_o *v63; // x22
  struct System_Action_o *v65; // [xsp+10h] [xbp-60h]

  if ( (byte_42E54EC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, svtId, recipeCallback);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&RecipeAssetManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__, v38, v39, v40);
    sub_B5D5C4(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo, v41, v42, v43);
    byte_42E54EC = 1;
  }
  v44 = (EventRecipeListViewManager___c__DisplayClass24_0_o *)sub_B5D694(EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
  EventRecipeListViewManager___c__DisplayClass24_0___ctor(v44, 0LL);
  if ( !v44 )
    goto LABEL_19;
  v44->fields.__4__this = this;
  sub_B5D560(&v44->fields);
  v44->fields.eventId = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v65 = recipeCallback;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_19;
  v47 = requestCallBack;
  v48 = boxOverDlg;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, v44->fields.eventId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v50 = playVoice;
  v51 = maskPanle;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             v44->fields.eventId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v54 = (EventDetailEntity_o *)Entity;
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v55;
  sub_B5D560(&currencyInfoController->fields.objectList);
  if ( !v54 )
    goto LABEL_19;
  v56 = this->fields.currencyInfoController;
  v57 = v44->fields.eventId;
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v54, 0LL);
  if ( !v56 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v56, 6, v57, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.svtId = svtId;
  v58 = v44->fields.eventId;
  this->fields.recipeCallback = v65;
  this->fields.currentEventId = v58;
  sub_B5D560(&this->fields.recipeCallback);
  this->fields.requestCallBack = v47;
  sub_B5D560(&this->fields.requestCallBack);
  this->fields.playVoiceAction = v50;
  sub_B5D560(&this->fields.playVoiceAction);
  this->fields.presentBoxOverDlg = v48;
  sub_B5D560(&this->fields.presentBoxOverDlg);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_B5D560(&this->fields.boxOverDlgCloseCallBack);
  this->fields.maskPanel = v51;
  sub_B5D560(&this->fields.maskPanel);
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
    v61 = (RecipeAssetManager_o *)sub_B5D694(RecipeAssetManager_TypeInfo);
    RecipeAssetManager___ctor(v61, 0LL);
    *p_assetManager = v61;
    sub_B5D560(p_assetManager);
    assetManager = *p_assetManager;
  }
  v62 = v44->fields.eventId;
  v63 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v63,
    (Il2CppObject *)v44,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_19:
    sub_B5D69C(Instance, v46);
  RecipeAssetManager__GetAssets(assetManager, v62, v63, 0LL);
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
    sub_B5D69C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewManager__OnClickDecide(
        EventRecipeListViewManager_o *this,
        int32_t createNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v16; // x21

  if ( (byte_42E54F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventRecipeListViewManager_CreateRecipeResponse__, createNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CreateRecipeRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42E54F3 = 1;
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
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager_CreateRecipeResponse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v16,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
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
    sub_B5D69C(recipeConfirmDialog, *(_QWORD *)&createNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 0, 0LL);
}


void __fastcall EventRecipeListViewManager__OnClickListView(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  void *maskPanel; // x0
  int32_t dispMode; // w8
  const MethodInfo *v26; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v28; // x1
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  EventRecipeEntity_o *v30; // x22
  EventRecipeGiftEntity_array *v31; // x20
  System_Action_int__o *v32; // x23
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E54F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRecipeMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_EventRecipeListViewManager_OnClickDecide__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&SoundManager_TypeInfo, v21, v22, v23);
    byte_42E54F2 = 1;
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
    maskPanel = EventRecipeListViewObject__GetItem(obj, v26);
    if ( maskPanel )
    {
      this->fields.selectRecipeId = EventRecipeListViewItem__get_RecipeId((EventRecipeListViewItem_o *)maskPanel, 0LL);
      maskPanel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( maskPanel )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)maskPanel,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRecipeMaster___);
        maskPanel = EventRecipeListViewObject__GetItem(obj, v28);
        if ( maskPanel )
        {
          maskPanel = (void *)EventRecipeListViewItem__get_RecipeId((EventRecipeListViewItem_o *)maskPanel, 0LL);
          if ( MasterData_WarQuestSelectionMaster )
          {
            if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    MasterData_WarQuestSelectionMaster,
                    &entity,
                    (int32_t)maskPanel,
                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
              goto LABEL_24;
            recipeConfirmDialog = this->fields.recipeConfirmDialog;
            v30 = (EventRecipeEntity_o *)entity;
            maskPanel = EventRecipeListViewObject__GetItem(obj, (const MethodInfo *)obj);
            if ( maskPanel )
            {
              v31 = (EventRecipeGiftEntity_array *)*((_QWORD *)maskPanel + 15);
              v32 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
              System_Action_int____ctor(
                v32,
                (Il2CppObject *)this,
                Method_EventRecipeListViewManager_OnClickDecide__,
                (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
              if ( recipeConfirmDialog )
              {
                EventRecipeConfirmDialogComponent__Open(
                  recipeConfirmDialog,
                  v30,
                  v31,
                  v32,
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
    sub_B5D69C(maskPanel, obj);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_42E54F1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E54F1 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
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
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall EventRecipeListViewManager__RequestListObject(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v27; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E54F0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_EventRecipeListViewManager_OnMoveEnd__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v23, v24, v25);
    byte_42E54F0 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRecipeListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B5D69C(0LL, v27);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v34.fields.current;
      v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v31, v32);
      EventRecipeListViewObject__Init_19059644((EventRecipeListViewObject_o *)current, 3, v30, 1.0, v33);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Action_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  __int64 v16; // x10

  if ( (byte_42E54EF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)item, method);
    sub_B5D5C4(&Method_EventRecipeListViewManager_OnMoveEnd__, v6, v7, v8);
    sub_B5D5C4(&EventRecipeListViewObject_TypeInfo, v9, v10, v11);
    byte_42E54EF = 1;
  }
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v16 = *(&EventRecipeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v16)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[v16 - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_B5D69C(v13, v14);
  }
  EventRecipeListViewObject__Init_19059644((EventRecipeListViewObject_o *)obj, 3, v12, 1.0, v15);
}


void __fastcall EventRecipeListViewManager__SetRecipeObject(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *recipeRewardDialog; // x21
  struct RecipeRewardDialogComponent_o **p_recipeRewardDialog; // x20
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x1
  struct RecipeAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeRewardDialog_k__BackingField; // x21
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *recipePointRewardDialog; // x21
  struct RecipePointRewardDialogComponent_o **p_recipePointRewardDialog; // x20
  struct RecipeAssetManager_o *v26; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipePointRewardDialog_k__BackingField; // x21
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *recipeConfirmDialog; // x21
  struct EventRecipeConfirmDialogComponent_o **p_recipeConfirmDialog; // x20
  struct RecipeAssetManager_o *v31; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeConfirmDialog_k__BackingField; // x21
  const MethodInfo *v33; // x2

  if ( (byte_42E54EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E54EB = 1;
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipeRewardDialog = &this->fields.recipeRewardDialog;
  v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v19 & 1) != 0 )
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
    v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        recipeRewardDialog_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v19 )
      goto LABEL_37;
    this->fields.recipeRewardDialog = (struct RecipeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                v19,
                                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    sub_B5D560(&this->fields.recipeRewardDialog);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v23);
  }
  v19 = (UnityEngine_GameObject_o *)*p_recipeRewardDialog;
  if ( !*p_recipeRewardDialog )
    goto LABEL_37;
  RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)v19, 0LL);
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipePointRewardDialog = &this->fields.recipePointRewardDialog;
  v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v19 & 1) != 0 )
  {
    v26 = this->fields.assetManager;
    if ( !v26 )
      goto LABEL_37;
    recipePointRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v26->fields._recipePointRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        recipePointRewardDialog_k__BackingField,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v19 )
      goto LABEL_37;
    this->fields.recipePointRewardDialog = (struct RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          v19,
                                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    sub_B5D560(&this->fields.recipePointRewardDialog);
    EventRecipeListViewManager__LocateDialogToRecipePanel(
      this,
      (BaseDialog_o *)this->fields.recipePointRewardDialog,
      v28);
  }
  v19 = (UnityEngine_GameObject_o *)*p_recipePointRewardDialog;
  if ( !*p_recipePointRewardDialog )
    goto LABEL_37;
  RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)v19, 0LL);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipeConfirmDialog = &this->fields.recipeConfirmDialog;
  v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v19 & 1) != 0 )
  {
    v31 = this->fields.assetManager;
    if ( v31 )
    {
      recipeConfirmDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v31->fields._recipeConfirmDialog_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          recipeConfirmDialog_k__BackingField,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v19 )
      {
        this->fields.recipeConfirmDialog = (struct EventRecipeConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v19,
                                                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        sub_B5D560(&this->fields.recipeConfirmDialog);
        EventRecipeListViewManager__LocateDialogToRecipePanel(
          this,
          (BaseDialog_o *)this->fields.recipeConfirmDialog,
          v33);
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_B5D69C(v19, v20);
  }
LABEL_35:
  v19 = (UnityEngine_GameObject_o *)*p_recipeConfirmDialog;
  if ( !*p_recipeConfirmDialog )
    goto LABEL_37;
  EventRecipeConfirmDialogComponent__Init((EventRecipeConfirmDialogComponent_o *)v19, this->fields.currentEventId, 0LL);
}


void __fastcall EventRecipeListViewManager__StopUpdateRemainTime(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B5D69C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventRecipeListViewManager__UpdateEventItemList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B5D69C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0LL);
}


int32_t __fastcall EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B5D69C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventRecipeListViewObject__o *__fastcall EventRecipeListViewManager__get_ObjectList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E54EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E54EA = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRecipeListViewObject__o *)v29;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EventRecipeListViewManager_o *_4__this; // x0
  struct EventRecipeListViewManager_o *v9; // x8
  struct EventRecipeListViewManager_o *v10; // x8

  if ( (byte_42E5652 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRecipeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E5652 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, 0LL);
  _4__this = (EventRecipeListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (EventRecipeListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)_4__this,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v9 = this->fields.__4__this;
  if ( !v9
    || !_4__this
    || (_4__this = (EventRecipeListViewManager_o *)EventRecipeMaster__GetRecipeEntityArray(
                                                     (EventRecipeMaster_o *)_4__this,
                                                     v9->fields.currentEventId,
                                                     0LL),
        (v10 = this->fields.__4__this) == 0LL)
    || (v10->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)_4__this,
        sub_B5D560(&v10->fields.eventRecipeEntities),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventRecipeListViewManager__CreateList(
          _4__this,
          _4__this->fields.eventRecipeEntities,
          this->fields.eventId,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(this, x);
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleDropItem_array *monitor; // x19
  Il2CppClass *klass; // x8
  RecipePointRewardDialogComponent_o *methodPtr; // x21
  System_Action_o *v17; // x24
  int32_t methodPtr_high; // w22
  EventRecipeEntity_o *v19; // x23
  System_Action_T1__T2__T3__o *v20; // x21
  System_Action_o *v21; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5653 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleDropItem____int__Action__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__, v8, v9, v10);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B5D5C4(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
                                                                   v11,
                                                                   v12,
                                                                   v13);
    byte_42E5653 = 1;
  }
  monitor = (BattleDropItem_array *)v4[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_14;
  if ( *(_QWORD *)&monitor->max_length )
  {
    methodPtr = (RecipePointRewardDialogComponent_o *)klass->vtable[5].methodPtr;
    v17 = (System_Action_o *)v4[3].monitor;
    methodPtr_high = HIDWORD(klass->vtable[3].methodPtr);
    v19 = (EventRecipeEntity_o *)v4[2].klass;
    if ( !v17 )
    {
      v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        v4,
        Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
        0LL);
      v4[3].monitor = v17;
      sub_B5D560(&v4[3].monitor);
    }
    if ( methodPtr )
    {
      RecipePointRewardDialogComponent__Open(methodPtr, v19, monitor, methodPtr_high, v17, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(this, method);
  }
  v20 = (System_Action_T1__T2__T3__o *)klass->vtable[2].method;
  v21 = (System_Action_o *)v4[4].klass;
  if ( !v21 )
  {
    v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      v4,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0LL);
    v4[4].klass = (Il2CppClass *)v21;
    sub_B5D560(&v4[4]);
  }
  if ( !v20 )
    goto LABEL_14;
  System_Action_object__int__object___Invoke(
    v20,
    &monitor->obj,
    0,
    (Il2CppObject *)v21,
    (const MethodInfo_259B6D0 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__2(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppClass *klass; // x8
  System_Action_T1__T2__T3__o *v12; // x20
  System_Action_o *v13; // x22
  Il2CppObject *monitor; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5654 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleDropItem____int__Action__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_B5D5C4(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
                                                                   v8,
                                                                   v9,
                                                                   v10);
    byte_42E5654 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_8;
  v12 = (System_Action_T1__T2__T3__o *)klass->vtable[2].method;
  v13 = (System_Action_o *)v4[3].klass;
  monitor = (Il2CppObject *)v4[1].monitor;
  if ( !v13 )
  {
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      v4,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0LL);
    v4[3].klass = (Il2CppClass *)v13;
    sub_B5D560(&v4[3]);
  }
  if ( !v12 )
LABEL_8:
    sub_B5D69C(this, method);
  System_Action_object__int__object___Invoke(
    v12,
    monitor,
    0,
    (Il2CppObject *)v13,
    (const MethodInfo_259B6D0 *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
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
    v3 = sub_B5D6C8(this);
    sub_B5D668(v3, 0LL);
  }
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_B5D69C(this, method);
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
    v3 = sub_B5D6C8(this);
    sub_B5D668(v3, 0LL);
  }
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_B5D69C(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], 0LL);
}


void __fastcall EventRecipeListViewManager_resData___ctor(
        EventRecipeListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
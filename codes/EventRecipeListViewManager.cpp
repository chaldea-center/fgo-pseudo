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
  __int64 v6; // x2
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v8; // x9
  __int64 currentEventId; // x1
  UserEventPointEntity_o *v10; // x8
  int64_t value; // x2

  if ( (byte_40F6118 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    byte_40F6118 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B170D4();
  }
  if ( !(_DWORD)v8 )
  {
    sub_B17100(Instance, currentEventId, v6);
    sub_B170A0();
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  signed int max_length; // w8
  unsigned int v16; // w26
  EventRecipeEntity_o *v17; // x22
  WebViewManager_o *Instance; // x0
  EventRecipeGiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v20; // x2
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  int32_t id; // w24
  EventRecipeGiftEntity_array *v23; // x25
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  EventRecipeListViewItem_o *v28; // x23
  const MethodInfo *v29; // x5
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  UILabel_o *emptyMessageLabel; // x19
  System_String_o *v32; // x0

  if ( (byte_40F610F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, eventRecipeEntities);
    sub_B16FFC(&EventRecipeListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_5692, v11);
    byte_40F610F = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !eventRecipeEntities )
    goto LABEL_18;
  max_length = eventRecipeEntities->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      v17 = eventRecipeEntities->m_Items[v16];
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      MasterData_WarQuestSelectionMaster = (EventRecipeGiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
      if ( !v17 )
        break;
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      SortedEntityArray = EventRecipeGiftMaster__GetSortedEntityArray(
                            MasterData_WarQuestSelectionMaster,
                            v17->fields.id,
                            v20);
      id = v17->fields.id;
      v23 = SortedEntityArray;
      v28 = (EventRecipeListViewItem_o *)sub_B170CC(EventRecipeListViewItem_TypeInfo, v24, v25, v26, v27);
      EventRecipeListViewItem___ctor(v28, id, v17, v23, eventId, v29);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_12;
    }
LABEL_18:
    sub_B170D4();
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
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_5692, 0LL);
    if ( !emptyMessageLabel )
      goto LABEL_18;
    UILabel__set_text(emptyMessageLabel, v32, 0LL);
  }
}


void __fastcall EventRecipeListViewManager__CreateRecipeResponse(
        EventRecipeListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x23
  System_Int32_array **v36; // x0
  EventRecipeEntity_o **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x0
  Il2CppObject *v46; // x22
  System_Int32_array **v47; // x0
  __int64 *v48; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UnityEngine_Component_o *touchPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *maskPanel; // x0
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  __int64 v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x8
  __int64 v67; // x8
  System_Int32_array **v68; // x1
  System_Int32_array *v69; // x22
  __int64 v70; // x8
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x0
  RecipePointRewardDialogComponent_o *recipePointRewardDialog; // x0
  const MethodInfo *v73; // x1
  WebViewManager_o *Instance; // x0
  EventRecipeGiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  RecipeRewardDialogComponent_o *v79; // x25
  BattleDropItem_array *v80; // x23
  EventRecipeEntity_o *v81; // x21
  EventRecipeGiftEntity_o *v82; // x24
  System_Action_o *v83; // x26
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  RecipeRewardDialogComponent_GetEffect_o *v88; // x20
  const MethodInfo *v89; // x1

  if ( (byte_40F6116 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__string____Action__Invoke__, result);
    sub_B16FFC(&System_Action_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___, v9);
    sub_B16FFC(&Method_EventRecipeListViewManager_GetEffect__, v10);
    sub_B16FFC(&Method_System_Func_EventRecipeEntity__bool___ctor__, v11);
    sub_B16FFC(&System_Func_EventRecipeEntity__bool__TypeInfo, v12);
    sub_B16FFC(&RecipeRewardDialogComponent_GetEffect_TypeInfo, v13);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___, v14);
    sub_B16FFC(&JsonManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__, v17);
    sub_B16FFC(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__, v18);
    sub_B16FFC(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_20980, v20);
    sub_B16FFC(&StringLiteral_15571, v21);
    sub_B16FFC(&StringLiteral_15807, v22);
    byte_40F6116 = 1;
  }
  v23 = sub_B170CC(EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo, result, method, v3, v4);
  EventRecipeListViewManager___c__DisplayClass33_0___ctor(
    (EventRecipeListViewManager___c__DisplayClass33_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_28;
  *(_QWORD *)(v23 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_20980, 0LL) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_EventRecipeEntity__bool__TypeInfo,
                                                                             v30,
                                                                             v31,
                                                                             v32,
                                                                             v33);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v23,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_EventRecipeEntity__bool___ctor__);
  v36 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 eventRecipeEntities,
                                 (System_Func_TSource__bool__o *)v35,
                                 (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  v37 = (EventRecipeEntity_o **)(v23 + 32);
  *(_QWORD *)(v23 + 32) = v36;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 32), v36, v38, v39, v40, v41, v42, v43);
  v44 = *(_QWORD *)(v23 + 32);
  if ( !v44 )
    goto LABEL_28;
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_28;
  System_Action_int__string__string___Invoke(
    (System_Action_int__string__string__o *)playVoiceAction,
    this->fields.svtId,
    *(System_String_o **)(v44 + 72),
    0LL,
    (const MethodInfo_24C613C *)Method_System_Action_int__string____Action__Invoke__);
  v46 = (Il2CppObject *)System_String__Concat_43746016(
                          (System_String_o *)StringLiteral_15571,
                          result,
                          (System_String_o *)StringLiteral_15807,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v47 = (System_Int32_array **)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                 v46,
                                 (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  *(_QWORD *)(v23 + 40) = v47;
  v48 = (__int64 *)(v23 + 40);
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 40), v47, v49, v50, v51, v52, v53, v54);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject(touchPanel, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
  v66 = *v48;
  if ( !*v48 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v66 + 24) )
    goto LABEL_29;
  v67 = *(_QWORD *)(v66 + 32);
  if ( !v67 )
    goto LABEL_28;
  v69 = *(System_Int32_array **)(v67 + 16);
  v68 = *(System_Int32_array ***)(v67 + 24);
  *(_QWORD *)(v23 + 24) = v68;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 24), v68, v60, v61, v62, v63, v64, v65);
  v70 = *(_QWORD *)(v23 + 40);
  if ( !v70 )
    goto LABEL_28;
  if ( !*(_DWORD *)(v70 + 24) )
    goto LABEL_29;
  if ( !*(_QWORD *)(v70 + 32) )
    goto LABEL_28;
  recipeRewardDialog = this->fields.recipeRewardDialog;
  if ( !recipeRewardDialog
    || (RecipeRewardDialogComponent__Init(recipeRewardDialog, 0LL),
        (recipePointRewardDialog = this->fields.recipePointRewardDialog) == 0LL)
    || (RecipePointRewardDialogComponent__Init(recipePointRewardDialog, 0LL),
        EventRecipeListViewManager__RequestListObject(this, v73),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (EventRecipeGiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*v37)
    || !MasterData_WarQuestSelectionMaster
    || (SortedEntityArray = EventRecipeGiftMaster__GetSortedEntityArray(
                              MasterData_WarQuestSelectionMaster,
                              (*v37)->fields.id,
                              v76)) == 0LL )
  {
LABEL_28:
    sub_B170D4();
  }
  if ( !SortedEntityArray->max_length )
  {
LABEL_29:
    sub_B17100(SortedEntityArray, v59, v60);
    sub_B170A0();
  }
  v79 = this->fields.recipeRewardDialog;
  v80 = *(BattleDropItem_array **)(v23 + 24);
  v81 = *v37;
  v82 = SortedEntityArray->m_Items[0];
  v83 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v59, v60, v77, v78);
  System_Action___ctor(
    v83,
    (Il2CppObject *)v23,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__,
    0LL);
  v88 = (RecipeRewardDialogComponent_GetEffect_o *)sub_B170CC(
                                                     RecipeRewardDialogComponent_GetEffect_TypeInfo,
                                                     v84,
                                                     v85,
                                                     v86,
                                                     v87);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v88,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    0LL);
  if ( !v79 )
    goto LABEL_28;
  RecipeRewardDialogComponent__Open(v79, v69, v80, v81, v82, v83, v88, 0LL);
  ActionExtensions__Call(this->fields.recipeCallback, 0LL);
  EventRecipeListViewManager__UpdateEventItemList(this, v89);
}


void __fastcall EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Object_o *recipeRewardDialog; // x20
  UnityEngine_Component_o *v14; // x0
  UnityEngine_Object_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  UnityEngine_Component_o *v23; // x0
  UnityEngine_Object_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  if ( (byte_40F6110 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6110 = 1;
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
    v5 = (UnityEngine_Component_o *)this->fields.recipeConfirmDialog;
    if ( !v5 )
      goto LABEL_34;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    this->fields.recipeConfirmDialog = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.recipeConfirmDialog, 0LL, v7, v8, v9, v10, v11, v12);
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(recipeRewardDialog, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)this->fields.recipeRewardDialog;
    if ( !v14 )
      goto LABEL_34;
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v15, 0LL);
    this->fields.recipeRewardDialog = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.recipeRewardDialog, 0LL, v16, v17, v18, v19, v20, v21);
  }
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(recipePointRewardDialog, 0LL, 0LL) )
  {
    v23 = (UnityEngine_Component_o *)this->fields.recipePointRewardDialog;
    if ( !v23 )
      goto LABEL_34;
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v24, 0LL);
    this->fields.recipePointRewardDialog = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.recipePointRewardDialog, 0LL, v25, v26, v27, v28, v29, v30);
  }
  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_34:
    sub_B170D4();
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventRecipeListViewManager__GetEffect(
        EventRecipeListViewManager_o *this,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct RecipeAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeDropEffetct_k__BackingField; // x19
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v11; // x20
  int v12; // s0
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0

  if ( (byte_40F6117 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, parentTransform);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F6117 = 1;
  }
  assetManager = this->fields.assetManager;
  if ( !assetManager )
    goto LABEL_12;
  recipeDropEffetct_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._recipeDropEffetct_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     recipeDropEffetct_k__BackingField,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v8 )
    goto LABEL_12;
  v9 = v8;
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_parent(transform, parentTransform, 0LL),
        v11 = UnityEngine_GameObject__get_transform(v9, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL),
        !v11)
    || (UnityEngine_Transform__set_localPosition(v11, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_GameObject__get_transform(v9, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL),
        !v15) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
  return v9;
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
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Action_BattleDropItem____int__Action__o *v35; // x26
  struct PresentBoxOverDialog_o *v36; // x24
  System_Int32_array *EventItemList; // x28
  WebViewManager_o *v38; // x0
  struct System_Action_int__string____Action__o *v39; // x25
  struct UnityEngine_GameObject_o *v40; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x0
  WarEntity_o *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x20
  EventDetailEntity_o *v44; // x27
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  ShopCurrencyInfoController_o *v56; // x20
  int32_t v57; // w22
  bool IsForcedAdjustmentDialog; // w0
  UnityEngine_Component_o *v59; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v61; // w8
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  UnityEngine_Component_o *touchPanel; // x0
  UnityEngine_GameObject_o *v99; // x0
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  RecipeAssetManager_o *assetManager; // x20
  BattleServantConfConponent_o *p_assetManager; // x19
  RecipeAssetManager_o *v106; // x20
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  int32_t v113; // w19
  System_Action_o *v114; // x22
  struct System_Action_o *v116; // [xsp+10h] [xbp-60h]

  if ( (byte_40F610E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v18);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v20);
    sub_B16FFC(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v21);
    sub_B16FFC(&RecipeAssetManager_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__, v24);
    sub_B16FFC(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo, v25);
    byte_40F610E = 1;
  }
  v26 = sub_B170CC(
          EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&svtId,
          recipeCallback,
          playVoice);
  EventRecipeListViewManager___c__DisplayClass24_0___ctor(
    (EventRecipeListViewManager___c__DisplayClass24_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_19;
  *(_QWORD *)(v26 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_DWORD *)(v26 + 24) = eventId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v116 = recipeCallback;
  MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  v35 = requestCallBack;
  v36 = boxOverDlg;
  EventItemList = ShopMaster__GetEventItemList(MasterData_WarQuestSelectionMaster, *(_DWORD *)(v26 + 24), 0LL);
  v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v38 )
    goto LABEL_19;
  v39 = playVoice;
  v40 = maskPanle;
  v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v38,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !v41 )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v41,
             *(_DWORD *)(v26 + 24),
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v44 = (EventDetailEntity_o *)Entity;
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                                                                  v45,
                                                                                                  v46,
                                                                                                  v47,
                                                                                                  v48);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&currencyInfoController->fields.objectList,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( !v44 )
    goto LABEL_19;
  v56 = this->fields.currencyInfoController;
  v57 = *(_DWORD *)(v26 + 24);
  IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog(v44, 0LL);
  if ( !v56 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v56, 6, v57, 1, EventItemList, IsForcedAdjustmentDialog, 0LL);
  v59 = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !v59 )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(v59, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.svtId = svtId;
  v61 = *(_DWORD *)(v26 + 24);
  this->fields.recipeCallback = v116;
  this->fields.currentEventId = v61;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.recipeCallback,
    (System_Int32_array **)v116,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields.requestCallBack = v35;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.requestCallBack,
    (System_Int32_array **)v35,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.playVoiceAction = v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playVoiceAction,
    (System_Int32_array **)v39,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this->fields.presentBoxOverDlg = v36;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.presentBoxOverDlg,
    (System_Int32_array **)v36,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.boxOverDlgCloseCallBack,
    (System_Int32_array **)boxOverDlgCallBack,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  this->fields.maskPanel = v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.maskPanel,
    (System_Int32_array **)v40,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
  touchPanel = (UnityEngine_Component_o *)this->fields.touchPanel;
  if ( !touchPanel )
    goto LABEL_19;
  v99 = UnityEngine_Component__get_gameObject(touchPanel, 0LL);
  if ( !v99 )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(v99, 0, 0LL);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
    v106 = (RecipeAssetManager_o *)sub_B170CC(RecipeAssetManager_TypeInfo, v100, v101, v102, v103);
    RecipeAssetManager___ctor(v106, 0LL);
    p_assetManager->klass = (BattleServantConfConponent_c *)v106;
    sub_B16F98(p_assetManager, (System_Int32_array **)v106, v107, v108, v109, v110, v111, v112);
    assetManager = (RecipeAssetManager_o *)p_assetManager->klass;
  }
  v113 = *(_DWORD *)(v26 + 24);
  v114 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v100, v101, v102, v103);
  System_Action___ctor(
    v114,
    (Il2CppObject *)v26,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_19:
    sub_B170D4();
  RecipeAssetManager__GetAssets(assetManager, v113, v114, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewManager__LocateDialogToRecipePanel(
        EventRecipeListViewManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v7; // x0
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0
  UnityEngine_GameObject_o *v12; // x0

  if ( !dialog )
    goto LABEL_7;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (v7 = UnityEngine_GameObject__get_transform(gameObject, 0LL), !transform)
    || (UnityEngine_Transform__SetParent(transform, v7, 0LL),
        v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_one(0LL),
        !v8)
    || (UnityEngine_Transform__set_localScale(v8, *(UnityEngine_Vector3_o *)&v9, 0LL),
        (v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dialog, 0LL)) == 0LL) )
  {
LABEL_7:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v12, 0, 0LL);
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
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  NetworkManager_ResultCallbackFunc_o *v14; // x21
  CreateRecipeRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40F6115 & 1) == 0 )
  {
    sub_B16FFC(&Method_EventRecipeListViewManager_CreateRecipeResponse__, *(_QWORD *)&createNum);
    sub_B16FFC(&Method_NetworkManager_getRequest_CreateRecipeRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_40F6115 = 1;
  }
  recipeConfirmDialog = this->fields.recipeConfirmDialog;
  if ( !recipeConfirmDialog )
    goto LABEL_12;
  EventRecipeConfirmDialogComponent__Close(recipeConfirmDialog, *(const MethodInfo **)&createNum);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_12;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v10,
                                                   v11,
                                                   v12,
                                                   v13);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager_CreateRecipeResponse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CreateRecipeRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v14,
                                                                   (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      CreateRecipeRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.selectRecipeId, createNum, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
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
  UnityEngine_GameObject_o *maskPanel; // x0
  const MethodInfo *v12; // x1
  int32_t dispMode; // w8
  EventRecipeListViewItem_o *Item; // x0
  const MethodInfo *v15; // x1
  EventRecipeListViewItem_o *v16; // x0
  struct EventRecipeEntity_o *eventRecipeEntity; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v20; // x1
  EventRecipeListViewItem_o *v21; // x0
  struct EventRecipeEntity_o *v22; // x8
  const MethodInfo *v23; // x1
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  EventRecipeEntity_o *v25; // x22
  EventRecipeListViewItem_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  EventRecipeGiftEntity_array *eventRecipeGiftEntity; // x20
  System_Action_int__o *v32; // x23
  const MethodInfo *v33; // x6
  UnityEngine_GameObject_o *v34; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F6114 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, obj);
    sub_B16FFC(&System_Action_int__TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRecipeMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_EventRecipeListViewManager_OnClickDecide__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    byte_40F6114 = 1;
  }
  entity = 0LL;
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_29;
  dispMode = obj->fields.dispMode;
  if ( !dispMode )
    goto LABEL_26;
  if ( (dispMode & 0xFFFFFFFE) != 2 )
    return;
  Item = EventRecipeListViewObject__GetItem(obj, v12);
  if ( !Item )
    goto LABEL_29;
  if ( Item->fields.isRelease )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v16 = EventRecipeListViewObject__GetItem(obj, v15);
    if ( v16 )
    {
      eventRecipeEntity = v16->fields.eventRecipeEntity;
      if ( eventRecipeEntity )
      {
        this->fields.selectRecipeId = eventRecipeEntity->fields.id;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
          v21 = EventRecipeListViewObject__GetItem(obj, v20);
          if ( v21 )
          {
            v22 = v21->fields.eventRecipeEntity;
            if ( v22 )
            {
              if ( MasterData_WarQuestSelectionMaster )
              {
                if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                        MasterData_WarQuestSelectionMaster,
                        &entity,
                        v22->fields.id,
                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
                  goto LABEL_26;
                recipeConfirmDialog = this->fields.recipeConfirmDialog;
                v25 = (EventRecipeEntity_o *)entity;
                v26 = EventRecipeListViewObject__GetItem(obj, v23);
                if ( v26 )
                {
                  eventRecipeGiftEntity = v26->fields.eventRecipeGiftEntity;
                  v32 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v27, v28, v29, v30);
                  System_Action_int____ctor(
                    v32,
                    (Il2CppObject *)this,
                    Method_EventRecipeListViewManager_OnClickDecide__,
                    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
                  if ( recipeConfirmDialog )
                  {
                    EventRecipeConfirmDialogComponent__Open(
                      recipeConfirmDialog,
                      v25,
                      eventRecipeGiftEntity,
                      v32,
                      this->fields.presentBoxOverDlg,
                      this->fields.boxOverDlgCloseCallBack,
                      v33);
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
    sub_B170D4();
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(2, 0LL);
LABEL_26:
  v34 = this->fields.maskPanel;
  if ( !v34 )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(v34, 0, 0LL);
}


void __fastcall EventRecipeListViewManager__OnMoveEnd(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0

  if ( (byte_40F6113 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6113 = 1;
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
          sub_B170D4();
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
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *current; // x20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F6112 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__, v5);
    sub_B16FFC(&Method_EventRecipeListViewManager_OnMoveEnd__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__, v8);
    sub_B16FFC(&StringLiteral_10004, v9);
    byte_40F6112 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRecipeListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                method);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      EventRecipeListViewObject__Init_17484236((EventRecipeListViewObject_o *)current, 3, v17, 1.0, v18);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x3
  __int64 v11; // x10

  if ( (byte_40F6111 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_EventRecipeListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&EventRecipeListViewObject_TypeInfo, v8);
    byte_40F6111 = 1;
  }
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, obj, item, method, v4);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (v11 = *(&EventRecipeListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[v11 - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  EventRecipeListViewObject__Init_17484236((EventRecipeListViewObject_o *)obj, 3, v9, 1.0, v10);
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
  RecipeRewardDialogComponent_o **p_recipeRewardDialog; // x20
  struct RecipeAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeRewardDialog_k__BackingField; // x21
  UnityEngine_GameObject_o *v11; // x0
  struct RecipeRewardDialogComponent_o *Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *recipePointRewardDialog; // x21
  RecipePointRewardDialogComponent_o **p_recipePointRewardDialog; // x20
  struct RecipeAssetManager_o *v22; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipePointRewardDialog_k__BackingField; // x21
  UnityEngine_GameObject_o *v24; // x0
  struct RecipePointRewardDialogComponent_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *recipeConfirmDialog; // x21
  EventRecipeConfirmDialogComponent_o **p_recipeConfirmDialog; // x20
  const MethodInfo *v35; // x2
  struct RecipeAssetManager_o *v36; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *recipeConfirmDialog_k__BackingField; // x21
  UnityEngine_GameObject_o *v38; // x0
  struct EventRecipeConfirmDialogComponent_o *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x2

  if ( (byte_40F610D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___, v4);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F610D = 1;
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipeRewardDialog = &this->fields.recipeRewardDialog;
  if ( UnityEngine_Object__op_Equality(recipeRewardDialog, 0LL, 0LL) )
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
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        recipeRewardDialog_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v11 )
      goto LABEL_37;
    Component_srcLineSprite = (struct RecipeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        v11,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    this->fields.recipeRewardDialog = Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.recipeRewardDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v19);
  }
  if ( !*p_recipeRewardDialog )
    goto LABEL_37;
  RecipeRewardDialogComponent__Init(*p_recipeRewardDialog, 0LL);
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipePointRewardDialog = &this->fields.recipePointRewardDialog;
  if ( UnityEngine_Object__op_Equality(recipePointRewardDialog, 0LL, 0LL) )
  {
    v22 = this->fields.assetManager;
    if ( !v22 )
      goto LABEL_37;
    recipePointRewardDialog_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v22->fields._recipePointRewardDialog_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        recipePointRewardDialog_k__BackingField,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v24 )
      goto LABEL_37;
    v25 = (struct RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v24,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    this->fields.recipePointRewardDialog = v25;
    sub_B16F98(
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
  if ( !*p_recipePointRewardDialog )
    goto LABEL_37;
  RecipePointRewardDialogComponent__Init(*p_recipePointRewardDialog, 0LL);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_recipeConfirmDialog = &this->fields.recipeConfirmDialog;
  if ( UnityEngine_Object__op_Equality(recipeConfirmDialog, 0LL, 0LL) )
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
      v38 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          recipeConfirmDialog_k__BackingField,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v38 )
      {
        v39 = (struct EventRecipeConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v38,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        this->fields.recipeConfirmDialog = v39;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.recipeConfirmDialog,
          (System_Int32_array **)v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        EventRecipeListViewManager__LocateDialogToRecipePanel(
          this,
          (BaseDialog_o *)this->fields.recipeConfirmDialog,
          v46);
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_B170D4();
  }
LABEL_35:
  if ( !*p_recipeConfirmDialog )
    goto LABEL_37;
  EventRecipeConfirmDialogComponent__Init(*p_recipeConfirmDialog, this->fields.currentEventId, v35);
}


void __fastcall EventRecipeListViewManager__StopUpdateRemainTime(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B170D4();
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventRecipeListViewManager__UpdateEventItemList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B170D4();
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0LL);
}


int32_t __fastcall EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_B170D4();
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventRecipeListViewObject__o *__fastcall EventRecipeListViewManager__get_ObjectList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F610C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F610C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRecipeListViewObject__o *)v14;
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
  WebViewManager_o *Instance; // x0
  EventRecipeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventRecipeListViewManager_o *v7; // x8
  System_Int32_array **RecipeEntityArray; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct EventRecipeListViewManager_o *v15; // x8
  struct EventRecipeListViewManager_o *v16; // x0
  EventRecipeListViewManager_o *v17; // x0

  if ( (byte_40F702E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRecipeMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F702E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (EventRecipeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v7 = this->fields.__4__this;
  if ( !v7
    || !MasterData_WarQuestSelectionMaster
    || (RecipeEntityArray = (System_Int32_array **)EventRecipeMaster__GetRecipeEntityArray(
                                                     MasterData_WarQuestSelectionMaster,
                                                     v7->fields.currentEventId,
                                                     0LL),
        (v15 = this->fields.__4__this) == 0LL)
    || (v15->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)RecipeEntityArray,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v15->fields.eventRecipeEntities,
          RecipeEntityArray,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14),
        (v16 = this->fields.__4__this) == 0LL)
    || (EventRecipeListViewManager__CreateList(v16, v16->fields.eventRecipeEntities, this->fields.eventId, 0LL),
        (v17 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  EventRecipeListViewManager__SetCallBack(v17, 0LL);
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
    sub_B170D4();
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  struct EventRecipeListViewManager_o *_4__this; // x8
  RecipePointRewardDialogComponent_o *recipePointRewardDialog; // x21
  System_Action_o *_9__2; // x24
  int32_t currentEventId; // w22
  EventRecipeEntity_o *eventRecipeEntity; // x23
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_T1__T2__T3__o *requestCallBack; // x21
  System_Action_o *_9__3; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40F702F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B16FFC(&System_Action_TypeInfo, v6);
    sub_B16FFC(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__, v7);
    sub_B16FFC(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__, v8);
    byte_40F702F = 1;
  }
  resultEventRewardInfos = this->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_14;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    recipePointRewardDialog = _4__this->fields.recipePointRewardDialog;
    _9__2 = this->fields.__9__2;
    currentEventId = _4__this->fields.currentEventId;
    eventRecipeEntity = this->fields.eventRecipeEntity;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__2,
        (System_Int32_array **)_9__2,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    if ( recipePointRewardDialog )
    {
      RecipePointRewardDialogComponent__Open(
        recipePointRewardDialog,
        eventRecipeEntity,
        resultEventRewardInfos,
        currentEventId,
        _9__2,
        0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
  requestCallBack = (System_Action_T1__T2__T3__o *)_4__this->fields.requestCallBack;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !requestCallBack )
    goto LABEL_14;
  System_Action_object__int__object___Invoke(
    requestCallBack,
    &resultEventRewardInfos->obj,
    0,
    (Il2CppObject *)_9__3,
    (const MethodInfo_24C705C *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__2(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventRecipeListViewManager_o *_4__this; // x8
  System_Action_T1__T2__T3__o *requestCallBack; // x20
  System_Action_o *_9__4; // x22
  struct BattleDropItem_array *resultEventRewardInfos; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F7030 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleDropItem____int__Action__Invoke__, method);
    sub_B16FFC(&System_Action_TypeInfo, v6);
    sub_B16FFC(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__, v7);
    byte_40F7030 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  requestCallBack = (System_Action_T1__T2__T3__o *)_4__this->fields.requestCallBack;
  _9__4 = this->fields.__9__4;
  resultEventRewardInfos = this->fields.resultEventRewardInfos;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__4,
      (System_Int32_array **)_9__4,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !requestCallBack )
LABEL_8:
    sub_B170D4();
  System_Action_object__int__object___Invoke(
    requestCallBack,
    &resultEventRewardInfos->obj,
    0,
    (Il2CppObject *)_9__4,
    (const MethodInfo_24C705C *)Method_System_Action_BattleDropItem____int__Action__Invoke__);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__3(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventRecipeListViewManager_resData_array *res; // x8
  EventRecipeListViewManager_o *_4__this; // x0

  res = this->fields.res;
  if ( !res )
    goto LABEL_5;
  if ( !res->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_5:
    sub_B170D4();
  EventRecipeListViewManager__CheckOpenQuest(_4__this, res->m_Items[0], 0LL);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__4(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct EventRecipeListViewManager_resData_array *res; // x8
  EventRecipeListViewManager_o *_4__this; // x0

  res = this->fields.res;
  if ( !res )
    goto LABEL_5;
  if ( !res->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_5:
    sub_B170D4();
  EventRecipeListViewManager__CheckOpenQuest(_4__this, res->m_Items[0], 0LL);
}


void __fastcall EventRecipeListViewManager_resData___ctor(
        EventRecipeListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
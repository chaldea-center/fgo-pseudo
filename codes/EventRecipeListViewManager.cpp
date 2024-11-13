void __fastcall EventRecipeListViewManager___ctor(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventRecipeListViewManager__CheckOpenQuest(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewManager_resData_o *response,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 currentEventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v10; // x9
  UserEventPointEntity_o *v11; // x8
  int64_t value; // x2

  if ( (byte_4B1A358 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B1A358 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !response )
    goto LABEL_11;
  oldUserEventPoint = response->fields.oldUserEventPoint;
  if ( !oldUserEventPoint )
    goto LABEL_11;
  v10 = *(_QWORD *)&oldUserEventPoint->max_length;
  currentEventId = (unsigned int)this->fields.currentEventId;
  if ( !v10 )
  {
    value = 0LL;
    if ( Instance )
      goto LABEL_9;
LABEL_11:
    sub_1BCAA3C(Instance, currentEventId);
  }
  if ( !(_DWORD)v10 )
    sub_1BCAA44(Instance, currentEventId);
  v11 = oldUserEventPoint->m_Items[0];
  if ( !v11 )
    goto LABEL_11;
  value = v11->fields.value;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRecipeListViewManager__CreateList(
        EventRecipeListViewManager_o *this,
        EventRecipeEntity_array *eventRecipeEntities,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  signed int max_length; // w8
  unsigned int v20; // w26
  EventRecipeEntity_o *v21; // x23
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  int32_t id; // w24
  EventRecipeGiftEntity_array *v24; // x25
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  EventRecipeListViewItem_o *v28; // x22
  const MethodInfo *v29; // x5
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v39; // x8
  __int64 v40; // x1
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_4B1A34F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, eventRecipeEntities, *(_QWORD *)&eventId);
    sub_1BCA7E0(&EventRecipeListViewItem_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v15, v16);
    byte_4B1A34F = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !eventRecipeEntities )
    goto LABEL_21;
  max_length = eventRecipeEntities->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1BCAA44(Instance, v18);
      v21 = eventRecipeEntities->m_Items[v20];
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
      if ( !v21 )
        break;
      if ( !Instance )
        break;
      SortedEntityArray = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)Instance,
                            v21->fields.id,
                            0LL);
      id = v21->fields.id;
      v24 = SortedEntityArray;
      v28 = (EventRecipeListViewItem_o *)sub_1BCAA2C(EventRecipeListViewItem_TypeInfo, v25, v26, v27);
      EventRecipeListViewItem___ctor(v28, id, v21, v24, eventId, v29);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      v36 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v36 )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v28,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = v36 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v39 + 32) = v28;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v28, v30, v31, v32, v33, v34, v35);
      }
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_16;
    }
LABEL_21:
    sub_1BCAA3C(Instance, v18);
  }
LABEL_16:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  if ( !*(_QWORD *)&eventRecipeEntities->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x20
  void *touchPanel; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_object__bool__o *v47; // x23
  Il2CppObject *v48; // x0
  EventRecipeEntity_o **v49; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Action_int__string____Action__o *playVoiceAction; // x9
  __int64 v57; // x1
  Il2CppObject *v58; // x22
  System_Object_array *v59; // x0
  __int64 *v60; // x22
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x8
  __int64 v74; // x8
  int64_t v75; // x1
  System_Int32_array *v76; // x22
  __int64 v77; // x8
  const MethodInfo *v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x25
  BattleDropItem_array *v82; // x23
  EventRecipeEntity_o *v83; // x21
  EventRecipeGiftEntity_o *v84; // x24
  System_Action_o *v85; // x26
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  RecipeRewardDialogComponent_GetEffect_o *v89; // x20
  const MethodInfo *v90; // x1

  if ( (byte_4B1A356 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___, v8, v9);
    sub_1BCA7E0(&Method_EventRecipeListViewManager_GetEffect__, v10, v11);
    sub_1BCA7E0(&System_Func_EventRecipeEntity__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&RecipeRewardDialogComponent_GetEffect_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___, v16, v17);
    sub_1BCA7E0(&JsonManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__, v22, v23);
    sub_1BCA7E0(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__, v24, v25);
    sub_1BCA7E0(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo, v26, v27);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v32, v33);
    byte_4B1A356 = 1;
  }
  v34 = sub_1BCAA2C(EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo, result, method, v3);
  EventRecipeListViewManager___c__DisplayClass33_0___ctor(
    (EventRecipeListViewManager___c__DisplayClass33_0_o *)v34,
    0LL);
  if ( !v34 )
    goto LABEL_27;
  *(_QWORD *)(v34 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 16), (int64_t)this, v37, v38, v39, v40, v41, v42);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v47 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventRecipeEntity__bool__TypeInfo, v43, v44, v45);
  System_Func_object__bool____ctor(
    v47,
    (Il2CppObject *)v34,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    0LL);
  v48 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          eventRecipeEntities,
          (System_Func_TSource__bool__o *)v47,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  *(_QWORD *)(v34 + 32) = v48;
  v49 = (EventRecipeEntity_o **)(v34 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v48, v50, v51, v52, v53, v54, v55);
  if ( !*(_QWORD *)(v34 + 32) )
    goto LABEL_27;
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_27;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
    playVoiceAction->fields.original_method_info,
    (unsigned int)this->fields.svtId,
    *(_QWORD *)(*(_QWORD *)(v34 + 32) + 72LL),
    0LL,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
  v58 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v57);
  v59 = JsonManager__DeserializeArray_object_(
          v58,
          (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  *(_QWORD *)(v34 + 40) = v59;
  v60 = (__int64 *)(v34 + 40);
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 40), (int64_t)v59, v61, v62, v63, v64, v65, v66);
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
  v73 = *v60;
  if ( !*v60 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v73 + 24) )
    goto LABEL_28;
  v74 = *(_QWORD *)(v73 + 32);
  if ( !v74 )
    goto LABEL_27;
  v76 = *(System_Int32_array **)(v74 + 16);
  v75 = *(_QWORD *)(v74 + 24);
  *(_QWORD *)(v34 + 24) = v75;
  sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 24), v75, v67, v68, v69, v70, v71, v72);
  v77 = *(_QWORD *)(v34 + 40);
  if ( !v77 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v77 + 24) )
    goto LABEL_28;
  if ( !*(_QWORD *)(v77 + 32) )
    goto LABEL_27;
  touchPanel = this->fields.recipeRewardDialog;
  if ( !touchPanel
    || (RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)touchPanel, 0LL),
        (touchPanel = this->fields.recipePointRewardDialog) == 0LL)
    || (RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)touchPanel, 0LL),
        EventRecipeListViewManager__RequestListObject(this, v78),
        (touchPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (touchPanel = DataManager__GetMasterData_object_(
                       (DataManager_o *)touchPanel,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*v49)
    || !touchPanel
    || (touchPanel = EventRecipeGiftMaster__GetSortedEntityArray(
                       (EventRecipeGiftMaster_o *)touchPanel,
                       (*v49)->fields.id,
                       0LL)) == 0LL )
  {
LABEL_27:
    sub_1BCAA3C(touchPanel, v36);
  }
  if ( !*((_DWORD *)touchPanel + 6) )
LABEL_28:
    sub_1BCAA44(touchPanel, v36);
  recipeRewardDialog = this->fields.recipeRewardDialog;
  v82 = *(BattleDropItem_array **)(v34 + 24);
  v83 = *v49;
  v84 = (EventRecipeGiftEntity_o *)*((_QWORD *)touchPanel + 4);
  v85 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v79, v80);
  System_Action___ctor(
    v85,
    (Il2CppObject *)v34,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__,
    0LL);
  v89 = (RecipeRewardDialogComponent_GetEffect_o *)sub_1BCAA2C(
                                                     RecipeRewardDialogComponent_GetEffect_TypeInfo,
                                                     v86,
                                                     v87,
                                                     v88);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v89,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    0LL);
  if ( !recipeRewardDialog )
    goto LABEL_27;
  RecipeRewardDialogComponent__Open(recipeRewardDialog, v76, v82, v83, v84, v85, v89, 0LL);
  ActionExtensions__Call(this->fields.recipeCallback, 0LL);
  EventRecipeListViewManager__UpdateEventItemList(this, v90);
}


void __fastcall EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *currencyInfoController; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Object_o *recipeRewardDialog; // x20
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B1A350 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A350 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    RecipeAssetManager__Release(assetManager, this->fields.currentEventId, 0LL);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(recipeConfirmDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    this->fields.recipeConfirmDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.recipeConfirmDialog, 0LL, v11, v12, v13, v14, v15, v16);
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(recipeRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    UnityEngine_Object__Destroy_70154244(v19, 0LL);
    this->fields.recipeRewardDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.recipeRewardDialog, 0LL, v20, v21, v22, v23, v24, v25);
  }
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(recipePointRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipePointRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    UnityEngine_Object__Destroy_70154244(v28, 0LL);
    this->fields.recipePointRewardDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.recipePointRewardDialog, 0LL, v29, v30, v31, v32, v33, v34);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_28:
    sub_1BCAA3C(currencyInfoController, v7);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventRecipeListViewManager__GetEffect(
        EventRecipeListViewManager_o *this,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  EventRecipeListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct RecipeAssetManager_o *assetManager; // x8
  Il2CppObject *recipeDropEffetct_k__BackingField; // x19
  EventRecipeListViewManager_o *v9; // x19
  __int64 v10; // x2
  EventRecipeListViewManager_o *v11; // x20
  __int64 v12; // x2
  EventRecipeListViewManager_o *v13; // x20

  v4 = this;
  if ( (byte_4B1A357 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, parentTransform, method);
    this = (EventRecipeListViewManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1A357 = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_15;
  recipeDropEffetct_k__BackingField = (Il2CppObject *)assetManager->fields._recipeDropEffetct_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parentTransform);
  this = (EventRecipeListViewManager_o *)UnityEngine_Object__Instantiate_object_(
                                           recipeDropEffetct_k__BackingField,
                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v9 = this;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parentTransform, 0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
  v11 = this;
  if ( !byte_4B109C1 )
  {
    this = (EventRecipeListViewManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTransform, v10);
    byte_4B109C1 = 1;
  }
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
  v13 = this;
  if ( !byte_4B109C6 )
  {
    this = (EventRecipeListViewManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, parentTransform, v12);
    byte_4B109C6 = 1;
  }
  if ( !v13 )
LABEL_15:
    sub_1BCAA3C(this, parentTransform);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v13,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  return (UnityEngine_GameObject_o *)v9;
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x21
  DataManager_o *Instance; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Action_BattleDropItem____int__Action__o *v44; // x26
  System_Int32_array *EventItemList; // x28
  struct System_Action_int__string____Action__o *v46; // x25
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v49; // x29
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_List_object__o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  ShopCurrencyInfoController_o *v60; // x27
  int32_t v61; // w20
  int32_t v62; // w8
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  RecipeAssetManager_o *assetManager; // x20
  PartyOrganizationUtility_o *p_assetManager; // x19
  RecipeAssetManager_o *v104; // x20
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int32_t v111; // w19
  System_Action_o *v112; // x22
  struct System_Action_o *v113; // [xsp+8h] [xbp-78h]

  if ( (byte_4B1A34E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v25, v26);
    sub_1BCA7E0(&RecipeAssetManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__, v31, v32);
    sub_1BCA7E0(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo, v33, v34);
    byte_4B1A34E = 1;
  }
  v35 = sub_1BCAA2C(
          EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&svtId,
          recipeCallback);
  EventRecipeListViewManager___c__DisplayClass24_0___ctor(
    (EventRecipeListViewManager___c__DisplayClass24_0_o *)v35,
    0LL);
  if ( !v35 )
    goto LABEL_19;
  *(_QWORD *)(v35 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)this, v38, v39, v40, v41, v42, v43);
  *(_DWORD *)(v35 + 24) = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v113 = recipeCallback;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_19;
  v44 = requestCallBack;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v35 + 24), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v46 = playVoice;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v35 + 24),
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v49 = (EventDetailEntity_o *)Entity;
  v53 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                       v50,
                                                       v51,
                                                       v52);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v53;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&currencyInfoController->fields.objectList,
    (int64_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( !v49 )
    goto LABEL_19;
  v60 = this->fields.currencyInfoController;
  v61 = *(_DWORD *)(v35 + 24);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v49, 0LL);
  if ( !v60 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v60, 6, v61, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.svtId = svtId;
  v62 = *(_DWORD *)(v35 + 24);
  this->fields.recipeCallback = v113;
  this->fields.currentEventId = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.recipeCallback, (int64_t)v113, v63, v64, v65, v66, v67, v68);
  this->fields.requestCallBack = v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.requestCallBack, (int64_t)v44, v69, v70, v71, v72, v73, v74);
  this->fields.playVoiceAction = v46;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playVoiceAction, (int64_t)v46, v75, v76, v77, v78, v79, v80);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.presentBoxOverDlg,
    (int64_t)boxOverDlg,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.boxOverDlgCloseCallBack,
    (int64_t)boxOverDlgCallBack,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  this->fields.maskPanel = maskPanle;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.maskPanel, (int64_t)maskPanle, v93, v94, v95, v96, v97, v98);
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
    p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
    v104 = (RecipeAssetManager_o *)sub_1BCAA2C(RecipeAssetManager_TypeInfo, v99, v100, v101);
    RecipeAssetManager___ctor(v104, 0LL);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v104;
    sub_1BCA784(p_assetManager, (int64_t)v104, v105, v106, v107, v108, v109, v110);
    assetManager = (RecipeAssetManager_o *)p_assetManager->klass;
  }
  v111 = *(_DWORD *)(v35 + 24);
  v112 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v99, v100, v101);
  System_Action___ctor(
    v112,
    (Il2CppObject *)v35,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_19:
    sub_1BCAA3C(Instance, v37);
  RecipeAssetManager__GetAssets(assetManager, v111, v112, 0LL);
}


void __fastcall EventRecipeListViewManager__LocateDialogToRecipePanel(
        EventRecipeListViewManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  __int64 v6; // x2
  EventRecipeListViewManager_o *v7; // x20

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
  v7 = this;
  if ( !byte_4B109C6 )
  {
    this = (EventRecipeListViewManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, dialog, v6);
    byte_4B109C6 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventRecipeListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)dialog,
                                                  0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, dialog);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  __int64 v16; // x1

  if ( (byte_4B1A355 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRecipeListViewManager_CreateRecipeResponse__, *(_QWORD *)&createNum, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CreateRecipeRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B1A355 = 1;
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
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager_CreateRecipeResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
    recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                   v15,
                                                                   (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
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
    sub_1BCAA3C(recipeConfirmDialog, *(_QWORD *)&createNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 0, 0LL);
}


void __fastcall EventRecipeListViewManager__OnClickListView(
        EventRecipeListViewManager_o *this,
        EventRecipeListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned __int8 *maskPanel; // x0
  int32_t dispMode; // w8
  int v17; // w21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x8
  Il2CppObject *MasterData_object; // x21
  __int64 v22; // x8
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  Il2CppObject *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  EventRecipeGiftEntity_array *v27; // x20
  System_Action_int__o *v28; // x23
  const MethodInfo *v29; // x6
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1A354 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRecipeMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_EventRecipeListViewManager_OnClickDecide__, v9, v10);
    sub_1BCA7E0(&Method_EventRecipeListViewManager_OnClickListView__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B1A354 = 1;
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
  maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, 0LL);
  if ( !maskPanel )
    goto LABEL_25;
  v17 = maskPanel[136];
  v18 = Method_EventRecipeListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRecipeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BCA7F8(Method_EventRecipeListViewManager_OnClickListView__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
  if ( v17 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
    maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, 0LL);
    if ( maskPanel )
    {
      v20 = *((_QWORD *)maskPanel + 14);
      if ( v20 )
      {
        this->fields.selectRecipeId = *(_DWORD *)(v20 + 16);
        maskPanel = (unsigned __int8 *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( maskPanel )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)maskPanel,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
          maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, 0LL);
          if ( maskPanel )
          {
            v22 = *((_QWORD *)maskPanel + 14);
            if ( v22 )
            {
              if ( MasterData_object )
              {
                if ( !DataMasterBase_object__object__int___TryGetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        &entity,
                        *(_DWORD *)(v22 + 16),
                        (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
                  goto LABEL_22;
                recipeConfirmDialog = this->fields.recipeConfirmDialog;
                v24 = entity;
                maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, 0LL);
                if ( maskPanel )
                {
                  v27 = (EventRecipeGiftEntity_array *)*((_QWORD *)maskPanel + 15);
                  v28 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, obj, v25, v26);
                  System_Action_int____ctor(
                    v28,
                    (Il2CppObject *)this,
                    Method_EventRecipeListViewManager_OnClickDecide__,
                    0LL);
                  if ( recipeConfirmDialog )
                  {
                    EventRecipeConfirmDialogComponent__Open(
                      recipeConfirmDialog,
                      (EventRecipeEntity_o *)v24,
                      v27,
                      v28,
                      this->fields.presentBoxOverDlg,
                      this->fields.boxOverDlgCloseCallBack,
                      v29);
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
    sub_1BCAA3C(maskPanel, obj);
  }
  OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0LL);
LABEL_22:
  maskPanel = (unsigned __int8 *)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
}


void __fastcall EventRecipeListViewManager__OnMoveEnd(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_4B1A353 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A353 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1BCAA3C(0LL, v9);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v19; // x1
  int32_t size; // w8
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *current; // x20
  System_Action_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1A352 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_EventRecipeListViewManager_OnMoveEnd__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__, v14, v15);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v16, v17);
    byte_4B1A352 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRecipeListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v19);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v28.fields._current;
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v26, v27);
      EventRecipeListViewObject__Init_46723560((EventRecipeListViewObject_o *)current, 3, v25, 1.0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A351 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, item);
    sub_1BCA7E0(&Method_EventRecipeListViewManager_OnMoveEnd__, v6, v7);
    sub_1BCA7E0(&EventRecipeListViewObject_TypeInfo, v8, v9);
    byte_4B1A351 = 1;
  }
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, obj, item, method);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(EventRecipeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_1BCAA3C(v11, v12);
  }
  EventRecipeListViewObject__Init_46723560((EventRecipeListViewObject_o *)obj, 3, v10, 1.0, 0LL);
}


void __fastcall EventRecipeListViewManager__SetRecipeObject(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *recipeRewardDialog; // x21
  struct RecipeRewardDialogComponent_o **p_recipeRewardDialog; // x20
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x1
  struct RecipeAssetManager_o *assetManager; // x8
  Il2CppObject *recipeRewardDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  UnityEngine_Object_o *recipePointRewardDialog; // x21
  struct RecipePointRewardDialogComponent_o **p_recipePointRewardDialog; // x20
  struct RecipeAssetManager_o *v29; // x8
  Il2CppObject *recipePointRewardDialog_k__BackingField; // x21
  Il2CppObject *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x2
  __int64 v39; // x1
  UnityEngine_Object_o *recipeConfirmDialog; // x21
  struct EventRecipeConfirmDialogComponent_o **p_recipeConfirmDialog; // x20
  const MethodInfo *v42; // x2
  struct RecipeAssetManager_o *v43; // x8
  Il2CppObject *recipeConfirmDialog_k__BackingField; // x21
  Il2CppObject *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  const MethodInfo *v52; // x2

  if ( (byte_4B1A34D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B1A34D = 1;
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_recipeRewardDialog = &this->fields.recipeRewardDialog;
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_31;
    recipeRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._recipeRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        recipeRewardDialog_k__BackingField,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v14 )
      goto LABEL_31;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v14,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    this->fields.recipeRewardDialog = (struct RecipeRewardDialogComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.recipeRewardDialog,
      (int64_t)Component_object,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v25);
  }
  v14 = (UnityEngine_GameObject_o *)*p_recipeRewardDialog;
  if ( !*p_recipeRewardDialog )
    goto LABEL_31;
  RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)v14, 0LL);
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  p_recipePointRewardDialog = &this->fields.recipePointRewardDialog;
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    v29 = this->fields.assetManager;
    if ( !v29 )
      goto LABEL_31;
    recipePointRewardDialog_k__BackingField = (Il2CppObject *)v29->fields._recipePointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        recipePointRewardDialog_k__BackingField,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v14 )
      goto LABEL_31;
    v31 = UnityEngine_GameObject__GetComponent_object_(
            v14,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    this->fields.recipePointRewardDialog = (struct RecipePointRewardDialogComponent_o *)v31;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.recipePointRewardDialog,
      (int64_t)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    EventRecipeListViewManager__LocateDialogToRecipePanel(
      this,
      (BaseDialog_o *)this->fields.recipePointRewardDialog,
      v38);
  }
  v14 = (UnityEngine_GameObject_o *)*p_recipePointRewardDialog;
  if ( !*p_recipePointRewardDialog )
    goto LABEL_31;
  RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)v14, 0LL);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  p_recipeConfirmDialog = &this->fields.recipeConfirmDialog;
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    v43 = this->fields.assetManager;
    if ( v43 )
    {
      recipeConfirmDialog_k__BackingField = (Il2CppObject *)v43->fields._recipeConfirmDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                          recipeConfirmDialog_k__BackingField,
                                          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v14 )
      {
        v45 = UnityEngine_GameObject__GetComponent_object_(
                v14,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        this->fields.recipeConfirmDialog = (struct EventRecipeConfirmDialogComponent_o *)v45;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.recipeConfirmDialog,
          (int64_t)v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        EventRecipeListViewManager__LocateDialogToRecipePanel(
          this,
          (BaseDialog_o *)this->fields.recipeConfirmDialog,
          v52);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_1BCAA3C(v14, v15);
  }
LABEL_29:
  v14 = (UnityEngine_GameObject_o *)*p_recipeConfirmDialog;
  if ( !*p_recipeConfirmDialog )
    goto LABEL_31;
  EventRecipeConfirmDialogComponent__Init((EventRecipeConfirmDialogComponent_o *)v14, this->fields.currentEventId, v42);
}


void __fastcall EventRecipeListViewManager__StopUpdateRemainTime(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BCAA3C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventRecipeListViewManager__UpdateEventItemList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BCAA3C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0LL);
}


int32_t __fastcall EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BCAA3C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventRecipeListViewObject__o *__fastcall EventRecipeListViewManager__get_ObjectList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1A34C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1A34C = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRecipeListViewObject__o *)v21;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  EventRecipeListViewManager_o *_4__this; // x0
  struct EventRecipeListViewManager_o *v7; // x8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct EventRecipeListViewManager_o *v14; // x8

  if ( (byte_4B1A359 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRecipeMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B1A359 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, 0LL);
  _4__this = (EventRecipeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (EventRecipeListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)_4__this,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v7 = this->fields.__4__this;
  if ( !v7
    || !_4__this
    || (_4__this = (EventRecipeListViewManager_o *)EventRecipeMaster__GetRecipeEntityArray(
                                                     (EventRecipeMaster_o *)_4__this,
                                                     v7->fields.currentEventId,
                                                     0LL),
        (v14 = this->fields.__4__this) == 0LL)
    || (v14->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)_4__this,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v14->fields.eventRecipeEntities,
          (int64_t)_4__this,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventRecipeListViewManager__CreateList(
          _4__this,
          _4__this->fields.eventRecipeEntities,
          this->fields.eventId,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(_4__this, method);
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
    sub_1BCAA3C(this, x);
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  EventRecipeListViewManager___c__DisplayClass33_0_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  struct EventRecipeListViewManager_o *_4__this; // x8
  RecipePointRewardDialogComponent_o *recipePointRewardDialog; // x21
  System_Action_o *_9__2; // x24
  int32_t currentEventId; // w22
  EventRecipeEntity_o *eventRecipeEntity; // x23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  System_Action_o *_9__3; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  v5 = this;
  if ( (byte_4B1A35A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__, v6, v7);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1BCA7E0(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
                                                                   v8,
                                                                   v9);
    byte_4B1A35A = 1;
  }
  resultEventRewardInfos = v5->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_14;
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    recipePointRewardDialog = _4__this->fields.recipePointRewardDialog;
    _9__2 = v5->fields.__9__2;
    currentEventId = _4__this->fields.currentEventId;
    eventRecipeEntity = v5->fields.eventRecipeEntity;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v5,
        Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
        0LL);
      v5->fields.__9__2 = _9__2;
      sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__2, (int64_t)_9__2, v16, v17, v18, v19, v20, v21);
    }
    if ( recipePointRewardDialog )
    {
      RecipePointRewardDialogComponent__Open(
        recipePointRewardDialog,
        eventRecipeEntity,
        resultEventRewardInfos,
        currentEventId,
        _9__2,
        v4);
      return;
    }
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  requestCallBack = _4__this->fields.requestCallBack;
  _9__3 = v5->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v5,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0LL);
    v5->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__3, (int64_t)_9__3, v24, v25, v26, v27, v28, v29);
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
  __int64 v2; // x2
  __int64 v3; // x3
  EventRecipeListViewManager___c__DisplayClass33_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  struct EventRecipeListViewManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  System_Action_o *_9__4; // x21
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v4 = this;
  if ( (byte_4B1A35B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1BCA7E0(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
                                                                   v5,
                                                                   v6);
    byte_4B1A35B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  requestCallBack = _4__this->fields.requestCallBack;
  _9__4 = v4->fields.__9__4;
  resultEventRewardInfos = v4->fields.resultEventRewardInfos;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0LL);
    v4->fields.__9__4 = _9__4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__4, (int64_t)_9__4, v11, v12, v13, v14, v15, v16);
  }
  if ( !requestCallBack )
LABEL_8:
    sub_1BCAA3C(this, method);
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
  struct EventRecipeListViewManager_resData_array *res; // x8

  res = this->fields.res;
  if ( !res )
    goto LABEL_5;
  if ( !res->max_length )
    sub_1BCAA44(this, method);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], 0LL);
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__4(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  struct EventRecipeListViewManager_resData_array *res; // x8

  res = this->fields.res;
  if ( !res )
    goto LABEL_5;
  if ( !res->max_length )
    sub_1BCAA44(this, method);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], 0LL);
}


void __fastcall EventRecipeListViewManager_resData___ctor(
        EventRecipeListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
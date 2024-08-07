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

  if ( (byte_4A02A9D & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    byte_4A02A9D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B64C5C(Instance, currentEventId);
  }
  if ( !(_DWORD)v8 )
    sub_1B64C64(Instance, currentEventId);
  v9 = oldUserEventPoint->m_Items[0];
  if ( !v9 )
    goto LABEL_11;
  value = v9->fields.value;
  if ( !Instance )
    goto LABEL_11;
LABEL_9:
  CommonUI__CheckOpenQuestByEventPoint((CommonUI_o *)Instance, currentEventId, value, 0LL, 0, 0.0, 0LL);
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
  EventRecipeEntity_o *v16; // x23
  EventRecipeGiftEntity_array *SortedEntityArray; // x0
  int32_t id; // w24
  EventRecipeGiftEntity_array *v19; // x25
  EventRecipeListViewItem_o *v20; // x22
  const MethodInfo *v21; // x5
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_4A02A94 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, eventRecipeEntities);
    sub_1B64A00(&EventRecipeListViewItem_TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_1B64A00(&LocalizationManager_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B64A00(&StringLiteral_5678/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v11);
    byte_4A02A94 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !eventRecipeEntities )
    goto LABEL_21;
  max_length = eventRecipeEntities->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1B64C64(Instance, v13);
      v16 = eventRecipeEntities->m_Items[v15];
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
      if ( !v16 )
        break;
      if ( !Instance )
        break;
      SortedEntityArray = EventRecipeGiftMaster__GetSortedEntityArray(
                            (EventRecipeGiftMaster_o *)Instance,
                            v16->fields.id,
                            0LL);
      id = v16->fields.id;
      v19 = SortedEntityArray;
      v20 = (EventRecipeListViewItem_o *)sub_1B64C4C(EventRecipeListViewItem_TypeInfo);
      EventRecipeListViewItem___ctor(v20, id, v16, v19, eventId, v21);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      v24 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v24 )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v20,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = v24 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v27 + 32) = v20;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v20, v22, v23);
      }
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_16;
    }
LABEL_21:
    sub_1B64C5C(Instance, v13);
  }
LABEL_16:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  if ( !*(_QWORD *)&eventRecipeEntities->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5678/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
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
  __int64 v19; // x20
  void *touchPanel; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_object__bool__o *v25; // x23
  Il2CppObject *v26; // x0
  EventRecipeEntity_o **v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Action_int__string____Action__o *playVoiceAction; // x9
  Il2CppObject *v31; // x22
  System_Object_array *v32; // x0
  __int64 *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x8
  __int64 v39; // x8
  __int64 v40; // x1
  System_Int32_array *v41; // x22
  __int64 v42; // x8
  const MethodInfo *v43; // x1
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x25
  BattleDropItem_array *v45; // x23
  EventRecipeEntity_o *v46; // x21
  EventRecipeGiftEntity_o *v47; // x24
  System_Action_o *v48; // x26
  RecipeRewardDialogComponent_GetEffect_o *v49; // x20
  const MethodInfo *v50; // x1

  if ( (byte_4A02A9B & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, result);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___, v6);
    sub_1B64A00(&Method_EventRecipeListViewManager_GetEffect__, v7);
    sub_1B64A00(&System_Func_EventRecipeEntity__bool__TypeInfo, v8);
    sub_1B64A00(&RecipeRewardDialogComponent_GetEffect_TypeInfo, v9);
    sub_1B64A00(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___, v10);
    sub_1B64A00(&JsonManager_TypeInfo, v11);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B64A00(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__, v13);
    sub_1B64A00(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__, v14);
    sub_1B64A00(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo, v15);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v16);
    sub_1B64A00(&StringLiteral_15747/*"["*/, v17);
    sub_1B64A00(&StringLiteral_16003/*"]"*/, v18);
    byte_4A02A9B = 1;
  }
  v19 = sub_1B64C4C(EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
  EventRecipeListViewManager___c__DisplayClass33_0___ctor(
    (EventRecipeListViewManager___c__DisplayClass33_0_o *)v19,
    0LL);
  if ( !v19 )
    goto LABEL_27;
  *(_QWORD *)(v19 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)this, v22, v23);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21971/*"ng"*/, 0LL) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v25 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_EventRecipeEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v19,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    0LL);
  v26 = System_Linq_Enumerable__FirstOrDefault_object__48628184(
          eventRecipeEntities,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  *(_QWORD *)(v19 + 32) = v26;
  v27 = (EventRecipeEntity_o **)(v19 + 32);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v26, v28, v29);
  if ( !*(_QWORD *)(v19 + 32) )
    goto LABEL_27;
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_27;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
    playVoiceAction->fields.original_method_info,
    (unsigned int)this->fields.svtId,
    *(_QWORD *)(*(_QWORD *)(v19 + 32) + 72LL),
    0LL,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
  v31 = (Il2CppObject *)System_String__Concat_61396396(
                          (System_String_o *)StringLiteral_15747/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16003/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v32 = JsonManager__DeserializeArray_object_(
          v31,
          (const MethodInfo_2EA17B4 *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  *(_QWORD *)(v19 + 40) = v32;
  v33 = (__int64 *)(v19 + 40);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v19 + 40), (int32_t)v32, v34, v35);
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
  v38 = *v33;
  if ( !*v33 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v38 + 24) )
    goto LABEL_28;
  v39 = *(_QWORD *)(v38 + 32);
  if ( !v39 )
    goto LABEL_27;
  v41 = *(System_Int32_array **)(v39 + 16);
  v40 = *(_QWORD *)(v39 + 24);
  *(_QWORD *)(v19 + 24) = v40;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v19 + 24), v40, v36, v37);
  v42 = *(_QWORD *)(v19 + 40);
  if ( !v42 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v42 + 24) )
    goto LABEL_28;
  if ( !*(_QWORD *)(v42 + 32) )
    goto LABEL_27;
  touchPanel = this->fields.recipeRewardDialog;
  if ( !touchPanel
    || (RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)touchPanel, 0LL),
        (touchPanel = this->fields.recipePointRewardDialog) == 0LL)
    || (RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)touchPanel, 0LL),
        EventRecipeListViewManager__RequestListObject(this, v43),
        (touchPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (touchPanel = DataManager__GetMasterData_object_(
                       (DataManager_o *)touchPanel,
                       (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*v27)
    || !touchPanel
    || (touchPanel = EventRecipeGiftMaster__GetSortedEntityArray(
                       (EventRecipeGiftMaster_o *)touchPanel,
                       (*v27)->fields.id,
                       0LL)) == 0LL )
  {
LABEL_27:
    sub_1B64C5C(touchPanel, v21);
  }
  if ( !*((_DWORD *)touchPanel + 6) )
LABEL_28:
    sub_1B64C64(touchPanel, v21);
  recipeRewardDialog = this->fields.recipeRewardDialog;
  v45 = *(BattleDropItem_array **)(v19 + 24);
  v46 = *v27;
  v47 = (EventRecipeGiftEntity_o *)*((_QWORD *)touchPanel + 4);
  v48 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v19,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__,
    0LL);
  v49 = (RecipeRewardDialogComponent_GetEffect_o *)sub_1B64C4C(RecipeRewardDialogComponent_GetEffect_TypeInfo);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v49,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    0LL);
  if ( !recipeRewardDialog )
    goto LABEL_27;
  RecipeRewardDialogComponent__Open(recipeRewardDialog, v41, v45, v46, v47, v48, v49, 0LL);
  ActionExtensions__Call(this->fields.recipeCallback, 0LL);
  EventRecipeListViewManager__UpdateEventItemList(this, v50);
}


void __fastcall EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *currencyInfoController; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *recipeRewardDialog; // x20
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  UnityEngine_Object_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A02A95 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A02A95 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    RecipeAssetManager__Release(assetManager, this->fields.currentEventId, 0LL);
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
    UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
    this->fields.recipeConfirmDialog = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.recipeConfirmDialog, 0, v8, v9);
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recipeRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v11, 0LL);
    this->fields.recipeRewardDialog = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.recipeRewardDialog, 0, v12, v13);
  }
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recipePointRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipePointRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v15, 0LL);
    this->fields.recipePointRewardDialog = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.recipePointRewardDialog, 0, v16, v17);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_28:
    sub_1B64C5C(currencyInfoController, v5);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventRecipeListViewManager__GetEffect(
        EventRecipeListViewManager_o *this,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  EventRecipeListViewManager_o *v4; // x19
  __int64 v5; // x1
  struct RecipeAssetManager_o *assetManager; // x8
  Il2CppObject *recipeDropEffetct_k__BackingField; // x19
  EventRecipeListViewManager_o *v8; // x19
  EventRecipeListViewManager_o *v9; // x20
  EventRecipeListViewManager_o *v10; // x20

  v4 = this;
  if ( (byte_4A02A9C & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, parentTransform);
    this = (EventRecipeListViewManager_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_4A02A9C = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_15;
  recipeDropEffetct_k__BackingField = (Il2CppObject *)assetManager->fields._recipeDropEffetct_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventRecipeListViewManager_o *)UnityEngine_Object__Instantiate_object_(
                                           recipeDropEffetct_k__BackingField,
                                           (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v8 = this;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parentTransform, 0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8, 0LL);
  v9 = this;
  if ( !byte_49F9821 )
  {
    this = (EventRecipeListViewManager_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, parentTransform);
    byte_49F9821 = 1;
  }
  if ( !v9 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8, 0LL);
  v10 = this;
  if ( !byte_49F9826 )
  {
    this = (EventRecipeListViewManager_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, parentTransform);
    byte_49F9826 = 1;
  }
  if ( !v10 )
LABEL_15:
    sub_1B64C5C(this, parentTransform);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v10,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  return (UnityEngine_GameObject_o *)v8;
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
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Action_BattleDropItem____int__Action__o *v31; // x26
  System_Int32_array *EventItemList; // x28
  struct System_Action_int__string____Action__o *v33; // x25
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v36; // x29
  System_Collections_Generic_List_object__o *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  ShopCurrencyInfoController_o *v40; // x27
  int32_t v41; // w20
  int32_t v42; // w8
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  RecipeAssetManager_o *assetManager; // x20
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  RecipeAssetManager_o *v57; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w19
  System_Action_o *v61; // x22
  struct System_Action_o *v62; // [xsp+8h] [xbp-78h]

  if ( (byte_4A02A93 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventDetailMaster___, v17);
    sub_1B64A00(&Method_DataManager_GetMasterData_ShopMaster___, v18);
    sub_1B64A00(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v19);
    sub_1B64A00(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v20);
    sub_1B64A00(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v21);
    sub_1B64A00(&RecipeAssetManager_TypeInfo, v22);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B64A00(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__, v24);
    sub_1B64A00(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo, v25);
    byte_4A02A93 = 1;
  }
  v26 = sub_1B64C4C(EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
  EventRecipeListViewManager___c__DisplayClass24_0___ctor(
    (EventRecipeListViewManager___c__DisplayClass24_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_19;
  *(_QWORD *)(v26 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v26 + 16), (int32_t)this, v29, v30);
  *(_DWORD *)(v26 + 24) = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v62 = recipeCallback;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_19;
  v31 = requestCallBack;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v26 + 24), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v33 = playVoice;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v26 + 24),
             (const MethodInfo_30D6798 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v36 = (EventDetailEntity_o *)Entity;
  v37 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v37;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&currencyInfoController->fields.objectList, (int32_t)v37, v38, v39);
  if ( !v36 )
    goto LABEL_19;
  v40 = this->fields.currencyInfoController;
  v41 = *(_DWORD *)(v26 + 24);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v36, 0LL);
  if ( !v40 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v40, 6, v41, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.svtId = svtId;
  v42 = *(_DWORD *)(v26 + 24);
  this->fields.recipeCallback = v62;
  this->fields.currentEventId = v42;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.recipeCallback, (int32_t)v62, v43, v44);
  this->fields.requestCallBack = v31;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.requestCallBack, (int32_t)v31, v45, v46);
  this->fields.playVoiceAction = v33;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAction, (int32_t)v33, v47, v48);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.presentBoxOverDlg, (int32_t)boxOverDlg, v49, v50);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.boxOverDlgCloseCallBack,
    (int32_t)boxOverDlgCallBack,
    v51,
    v52);
  this->fields.maskPanel = maskPanle;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)maskPanle, v53, v54);
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
    v57 = (RecipeAssetManager_o *)sub_1B64C4C(RecipeAssetManager_TypeInfo);
    RecipeAssetManager___ctor(v57, 0LL);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v57;
    sub_1B649A4(p_assetManager, (int32_t)v57, v58, v59);
    assetManager = (RecipeAssetManager_o *)p_assetManager->klass;
  }
  v60 = *(_DWORD *)(v26 + 24);
  v61 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v26,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_19:
    sub_1B64C5C(Instance, v28);
  RecipeAssetManager__GetAssets(assetManager, v60, v61, 0LL);
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
  if ( !byte_49F9826 )
  {
    this = (EventRecipeListViewManager_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, dialog);
    byte_49F9826 = 1;
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
    sub_1B64C5C(this, dialog);
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

  if ( (byte_4A02A9A & 1) == 0 )
  {
    sub_1B64A00(&Method_EventRecipeListViewManager_CreateRecipeResponse__, *(_QWORD *)&createNum);
    sub_1B64A00(&Method_NetworkManager_getRequest_CreateRecipeRequest___, v5);
    sub_1B64A00(&NetworkManager_TypeInfo, v6);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A02A9A = 1;
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
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager_CreateRecipeResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                   v9,
                                                                   (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
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
    sub_1B64C5C(recipeConfirmDialog, *(_QWORD *)&createNum);
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
  unsigned __int8 *maskPanel; // x0
  int32_t dispMode; // w8
  int v12; // w21
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  __int64 v15; // x8
  Il2CppObject *MasterData_object; // x21
  __int64 v17; // x8
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  Il2CppObject *v19; // x22
  EventRecipeGiftEntity_array *v20; // x20
  System_Action_int__o *v21; // x23
  const MethodInfo *v22; // x6
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A02A99 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_int__TypeInfo, obj);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventRecipeMaster___, v5);
    sub_1B64A00(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__, v6);
    sub_1B64A00(&Method_EventRecipeListViewManager_OnClickDecide__, v7);
    sub_1B64A00(&Method_EventRecipeListViewManager_OnClickListView__, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A02A99 = 1;
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
  v12 = maskPanel[136];
  v13 = Method_EventRecipeListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRecipeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B64A18(Method_EventRecipeListViewManager_OnClickListView__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B649E4(v13, v13[4]);
  if ( v12 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, 0LL);
    if ( maskPanel )
    {
      v15 = *((_QWORD *)maskPanel + 14);
      if ( v15 )
      {
        this->fields.selectRecipeId = *(_DWORD *)(v15 + 16);
        maskPanel = (unsigned __int8 *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( maskPanel )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)maskPanel,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
          maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, 0LL);
          if ( maskPanel )
          {
            v17 = *((_QWORD *)maskPanel + 14);
            if ( v17 )
            {
              if ( MasterData_object )
              {
                if ( !DataMasterBase_object__object__int___TryGetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        &entity,
                        *(_DWORD *)(v17 + 16),
                        (const MethodInfo_30D67EC *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
                  goto LABEL_22;
                recipeConfirmDialog = this->fields.recipeConfirmDialog;
                v19 = entity;
                maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, 0LL);
                if ( maskPanel )
                {
                  v20 = (EventRecipeGiftEntity_array *)*((_QWORD *)maskPanel + 15);
                  v21 = (System_Action_int__o *)sub_1B64C4C(System_Action_int__TypeInfo);
                  System_Action_int____ctor(
                    v21,
                    (Il2CppObject *)this,
                    Method_EventRecipeListViewManager_OnClickDecide__,
                    0LL);
                  if ( recipeConfirmDialog )
                  {
                    EventRecipeConfirmDialogComponent__Open(
                      recipeConfirmDialog,
                      (EventRecipeEntity_o *)v19,
                      v20,
                      v21,
                      this->fields.presentBoxOverDlg,
                      this->fields.boxOverDlgCloseCallBack,
                      v22);
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
    sub_1B64C5C(maskPanel, obj);
  }
  OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
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

  if ( (byte_4A02A98 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A02A98 = 1;
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
          sub_1B64C5C(0LL, v7);
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v11; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A02A97 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__, v5);
    sub_1B64A00(&Method_EventRecipeListViewManager_OnMoveEnd__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__, v8);
    sub_1B64A00(&StringLiteral_9892/*"OnMoveEnd"*/, v9);
    byte_4A02A97 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRecipeListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B64C5C(0LL, v11);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9892/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      ObjectList,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v17.fields._current;
      v14 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64C5C(v15, v16);
      EventRecipeListViewObject__Init_45487580((EventRecipeListViewObject_o *)current, 3, v14, 1.0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A02A96 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, obj);
    sub_1B64A00(&Method_EventRecipeListViewManager_OnMoveEnd__, v6);
    sub_1B64A00(&EventRecipeListViewObject_TypeInfo, v7);
    byte_4A02A96 = 1;
  }
  v8 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(EventRecipeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_1B64C5C(v9, v10);
  }
  EventRecipeListViewObject__Init_45487580((EventRecipeListViewObject_o *)obj, 3, v8, 1.0, 0LL);
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
  Il2CppObject *recipeRewardDialog_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *recipePointRewardDialog; // x21
  struct RecipePointRewardDialogComponent_o **p_recipePointRewardDialog; // x20
  struct RecipeAssetManager_o *v19; // x8
  Il2CppObject *recipePointRewardDialog_k__BackingField; // x21
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *recipeConfirmDialog; // x21
  struct EventRecipeConfirmDialogComponent_o **p_recipeConfirmDialog; // x20
  const MethodInfo *v27; // x2
  struct RecipeAssetManager_o *v28; // x8
  Il2CppObject *recipeConfirmDialog_k__BackingField; // x21
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x2

  if ( (byte_4A02A92 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___, v3);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___, v4);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    byte_4A02A92 = 1;
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipeRewardDialog = &this->fields.recipeRewardDialog;
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_31;
    recipeRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._recipeRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       recipeRewardDialog_k__BackingField,
                                       (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_31;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v9,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    this->fields.recipeRewardDialog = (struct RecipeRewardDialogComponent_o *)Component_object;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.recipeRewardDialog,
      (int32_t)Component_object,
      v14,
      v15);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v16);
  }
  v9 = (UnityEngine_GameObject_o *)*p_recipeRewardDialog;
  if ( !*p_recipeRewardDialog )
    goto LABEL_31;
  RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)v9, 0LL);
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipePointRewardDialog = &this->fields.recipePointRewardDialog;
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v19 = this->fields.assetManager;
    if ( !v19 )
      goto LABEL_31;
    recipePointRewardDialog_k__BackingField = (Il2CppObject *)v19->fields._recipePointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       recipePointRewardDialog_k__BackingField,
                                       (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_31;
    v21 = UnityEngine_GameObject__GetComponent_object_(
            v9,
            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    this->fields.recipePointRewardDialog = (struct RecipePointRewardDialogComponent_o *)v21;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.recipePointRewardDialog, (int32_t)v21, v22, v23);
    EventRecipeListViewManager__LocateDialogToRecipePanel(
      this,
      (BaseDialog_o *)this->fields.recipePointRewardDialog,
      v24);
  }
  v9 = (UnityEngine_GameObject_o *)*p_recipePointRewardDialog;
  if ( !*p_recipePointRewardDialog )
    goto LABEL_31;
  RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)v9, 0LL);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipeConfirmDialog = &this->fields.recipeConfirmDialog;
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v28 = this->fields.assetManager;
    if ( v28 )
    {
      recipeConfirmDialog_k__BackingField = (Il2CppObject *)v28->fields._recipeConfirmDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         recipeConfirmDialog_k__BackingField,
                                         (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        v30 = UnityEngine_GameObject__GetComponent_object_(
                v9,
                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        this->fields.recipeConfirmDialog = (struct EventRecipeConfirmDialogComponent_o *)v30;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.recipeConfirmDialog, (int32_t)v30, v31, v32);
        EventRecipeListViewManager__LocateDialogToRecipePanel(
          this,
          (BaseDialog_o *)this->fields.recipeConfirmDialog,
          v33);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_1B64C5C(v9, v10);
  }
LABEL_29:
  v9 = (UnityEngine_GameObject_o *)*p_recipeConfirmDialog;
  if ( !*p_recipeConfirmDialog )
    goto LABEL_31;
  EventRecipeConfirmDialogComponent__Init((EventRecipeConfirmDialogComponent_o *)v9, this->fields.currentEventId, v27);
}


void __fastcall EventRecipeListViewManager__StopUpdateRemainTime(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B64C5C(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventRecipeListViewManager__UpdateEventItemList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B64C5C(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0LL);
}


int32_t __fastcall EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B64C5C(this, method);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A02A91 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo, v9);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    byte_4A02A91 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B64C5C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B64C5C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1B64C5C(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B64C5C(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v6; // w2
  int32_t v7; // w3
  struct EventRecipeListViewManager_o *v8; // x8

  if ( (byte_4A02A9E & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventRecipeMaster___, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A02A9E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, 0LL);
  _4__this = (EventRecipeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (EventRecipeListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)_4__this,
                                               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v5 = this->fields.__4__this;
  if ( !v5
    || !_4__this
    || (_4__this = (EventRecipeListViewManager_o *)EventRecipeMaster__GetRecipeEntityArray(
                                                     (EventRecipeMaster_o *)_4__this,
                                                     v5->fields.currentEventId,
                                                     0LL),
        (v8 = this->fields.__4__this) == 0LL)
    || (v8->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)_4__this,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v8->fields.eventRecipeEntities, (int32_t)_4__this, v6, v7),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventRecipeListViewManager__CreateList(
          _4__this,
          _4__this->fields.eventRecipeEntities,
          this->fields.eventId,
          0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B64C5C(_4__this, method);
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
    sub_1B64C5C(this, x);
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  EventRecipeListViewManager___c__DisplayClass33_0_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  struct EventRecipeListViewManager_o *_4__this; // x8
  RecipePointRewardDialogComponent_o *recipePointRewardDialog; // x21
  System_Action_o *_9__2; // x24
  int32_t currentEventId; // w22
  EventRecipeEntity_o *eventRecipeEntity; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  System_Action_o *_9__3; // x21
  int32_t v16; // w2
  int32_t v17; // w3

  v3 = this;
  if ( (byte_4A02A9F & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__, v4);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1B64A00(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
                                                                   v5);
    byte_4A02A9F = 1;
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
      _9__2 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v3,
        Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
        0LL);
      v3->fields.__9__2 = _9__2;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v12, v13);
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
    sub_1B64C5C(this, method);
  }
  requestCallBack = _4__this->fields.requestCallBack;
  _9__3 = v3->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v16, v17);
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
  __int64 v3; // x1
  struct EventRecipeListViewManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *requestCallBack; // x23
  System_Action_o *_9__4; // x21
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  v2 = this;
  if ( (byte_4A02AA0 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1B64A00(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
                                                                   v3);
    byte_4A02AA0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  requestCallBack = _4__this->fields.requestCallBack;
  _9__4 = v2->fields.__9__4;
  resultEventRewardInfos = v2->fields.resultEventRewardInfos;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0LL);
    v2->fields.__9__4 = _9__4;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v8, v9);
  }
  if ( !requestCallBack )
LABEL_8:
    sub_1B64C5C(this, method);
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
    sub_1B64C64(this, method);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1B64C5C(this, method);
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
    sub_1B64C64(this, method);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1B64C5C(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], 0LL);
}


void __fastcall EventRecipeListViewManager_resData___ctor(
        EventRecipeListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
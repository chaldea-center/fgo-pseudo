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
  Il2CppObject *Instance; // x0
  __int64 currentEventId; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  __int64 v9; // x9
  UserEventPointEntity_o *v10; // x8
  int64_t value; // x2

  if ( (byte_4A48EB3 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, response);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A48EB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B86614(Instance, currentEventId);
  }
  if ( !(_DWORD)v9 )
    sub_1B8661C(Instance, currentEventId);
  v10 = oldUserEventPoint->m_Items[0];
  if ( !v10 )
    goto LABEL_11;
  value = v10->fields.value;
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
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v25; // x8
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_4A48EAA & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, eventRecipeEntities);
    sub_1B863B8(&EventRecipeListViewItem_TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_1B863B8(&LocalizationManager_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_5645/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v11);
    byte_4A48EAA = 1;
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
        sub_1B8661C(Instance, v13);
      v16 = eventRecipeEntities->m_Items[v15];
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___);
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
      v20 = (EventRecipeListViewItem_o *)sub_1B86604(EventRecipeListViewItem_TypeInfo);
      EventRecipeListViewItem___ctor(v20, id, v16, v19, eventId, v21);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      v22 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v22 )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v22 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v20,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = v22 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v25 + 32) = v20;
        Instance = (DataManager_o *)sub_1B8635C(v25 + 32);
      }
      max_length = eventRecipeEntities->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_16;
    }
LABEL_21:
    sub_1B86614(Instance, v13);
  }
LABEL_16:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  if ( !*(_QWORD *)&eventRecipeEntities->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5645/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, 0LL);
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
  Il2CppObject *v19; // x20
  void *touchPanel; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *eventRecipeEntities; // x21
  System_Func_object__bool__o *v23; // x23
  EventRecipeEntity_o **v24; // x21
  struct System_Action_int__string____Action__o *playVoiceAction; // x9
  Il2CppObject *v26; // x22
  void **p_monitor; // x22
  _DWORD *v28; // x8
  __int64 v29; // x8
  System_Int32_array *v30; // x22
  _DWORD *monitor; // x8
  const MethodInfo *v32; // x1
  RecipeRewardDialogComponent_o *recipeRewardDialog; // x25
  BattleDropItem_array *v34; // x23
  EventRecipeEntity_o *v35; // x21
  EventRecipeGiftEntity_o *v36; // x24
  System_Action_o *v37; // x26
  RecipeRewardDialogComponent_GetEffect_o *v38; // x20
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x7
  const MethodInfo *v41; // x1

  if ( (byte_4A48EB1 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, result);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventRecipeGiftMaster___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___, v6);
    sub_1B863B8(&Method_EventRecipeListViewManager_GetEffect__, v7);
    sub_1B863B8(&System_Func_EventRecipeEntity__bool__TypeInfo, v8);
    sub_1B863B8(&RecipeRewardDialogComponent_GetEffect_TypeInfo, v9);
    sub_1B863B8(&Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___, v10);
    sub_1B863B8(&JsonManager_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B863B8(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__, v13);
    sub_1B863B8(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__, v14);
    sub_1B863B8(&EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo, v15);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v16);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v17);
    sub_1B863B8(&StringLiteral_15836/*"]"*/, v18);
    byte_4A48EB1 = 1;
  }
  v19 = (Il2CppObject *)sub_1B86604(EventRecipeListViewManager___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_27;
  v19[1].klass = (Il2CppClass *)this;
  sub_1B8635C(&v19[1]);
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL) )
    return;
  eventRecipeEntities = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.eventRecipeEntities;
  v23 = (System_Func_object__bool__o *)sub_1B86604(System_Func_EventRecipeEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    v19,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__0__,
    0LL);
  v19[2].klass = (Il2CppClass *)System_Linq_Enumerable__FirstOrDefault_object__49893388(
                                  eventRecipeEntities,
                                  (System_Func_TSource__bool__o *)v23,
                                  (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_EventRecipeEntity___);
  v24 = (EventRecipeEntity_o **)&v19[2];
  touchPanel = (void *)sub_1B8635C(&v19[2]);
  if ( !v19[2].klass )
    goto LABEL_27;
  playVoiceAction = this->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_27;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, Il2CppClass *, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
    playVoiceAction->fields.original_method_info,
    (unsigned int)this->fields.svtId,
    v19[2].klass->_1.castClass,
    0LL,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
  v26 = (Il2CppObject *)System_String__Concat_61683424(
                          (System_String_o *)StringLiteral_15580/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15836/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v19[2].monitor = JsonManager__DeserializeArray_object_(
                     v26,
                     (const MethodInfo_2FD883C *)Method_JsonManager_DeserializeArray_EventRecipeListViewManager_resData___);
  p_monitor = &v19[2].monitor;
  sub_1B8635C(&v19[2].monitor);
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
  v28 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_27;
  if ( !v28[6] )
    goto LABEL_28;
  v29 = *((_QWORD *)v28 + 4);
  if ( !v29 )
    goto LABEL_27;
  v30 = *(System_Int32_array **)(v29 + 16);
  v19[1].monitor = *(void **)(v29 + 24);
  touchPanel = (void *)sub_1B8635C(&v19[1].monitor);
  monitor = v19[2].monitor;
  if ( !monitor )
    goto LABEL_27;
  if ( !monitor[6] )
    goto LABEL_28;
  if ( !*((_QWORD *)monitor + 4) )
    goto LABEL_27;
  touchPanel = this->fields.recipeRewardDialog;
  if ( !touchPanel
    || (RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)touchPanel, v21),
        (touchPanel = this->fields.recipePointRewardDialog) == 0LL)
    || (RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)touchPanel, v21),
        EventRecipeListViewManager__RequestListObject(this, v32),
        (touchPanel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (touchPanel = DataManager__GetMasterData_object_(
                       (DataManager_o *)touchPanel,
                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventRecipeGiftMaster___),
        !*v24)
    || !touchPanel
    || (touchPanel = EventRecipeGiftMaster__GetSortedEntityArray(
                       (EventRecipeGiftMaster_o *)touchPanel,
                       (*v24)->fields.id,
                       0LL)) == 0LL )
  {
LABEL_27:
    sub_1B86614(touchPanel, v21);
  }
  if ( !*((_DWORD *)touchPanel + 6) )
LABEL_28:
    sub_1B8661C(touchPanel, v21);
  recipeRewardDialog = this->fields.recipeRewardDialog;
  v34 = (BattleDropItem_array *)v19[1].monitor;
  v35 = *v24;
  v36 = (EventRecipeGiftEntity_o *)*((_QWORD *)touchPanel + 4);
  v37 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    v19,
    Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__1__,
    0LL);
  v38 = (RecipeRewardDialogComponent_GetEffect_o *)sub_1B86604(RecipeRewardDialogComponent_GetEffect_TypeInfo);
  RecipeRewardDialogComponent_GetEffect___ctor(
    v38,
    (Il2CppObject *)this,
    Method_EventRecipeListViewManager_GetEffect__,
    v39);
  if ( !recipeRewardDialog )
    goto LABEL_27;
  RecipeRewardDialogComponent__Open(recipeRewardDialog, v30, v34, v35, v36, v37, v38, v40);
  ActionExtensions__Call(this->fields.recipeCallback, 0LL);
  EventRecipeListViewManager__UpdateEventItemList(this, v41);
}


void __fastcall EventRecipeListViewManager__DestroyList(EventRecipeListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  RecipeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *recipeConfirmDialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *currencyInfoController; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *recipeRewardDialog; // x20
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *recipePointRewardDialog; // x20
  UnityEngine_Object_o *v12; // x21

  if ( (byte_4A48EAB & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A48EAB = 1;
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
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
    this->fields.recipeConfirmDialog = 0LL;
    sub_1B8635C(&this->fields.recipeConfirmDialog);
  }
  recipeRewardDialog = (UnityEngine_Object_o *)this->fields.recipeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recipeRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipeRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v10, 0LL);
    this->fields.recipeRewardDialog = 0LL;
    sub_1B8635C(&this->fields.recipeRewardDialog);
  }
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(recipePointRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.recipePointRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_28;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v12, 0LL);
    this->fields.recipePointRewardDialog = 0LL;
    sub_1B8635C(&this->fields.recipePointRewardDialog);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_28:
    sub_1B86614(currencyInfoController, v6);
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
  if ( (byte_4A48EB2 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, parentTransform);
    this = (EventRecipeListViewManager_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A48EB2 = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_15;
  recipeDropEffetct_k__BackingField = (Il2CppObject *)assetManager->fields._recipeDropEffetct_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventRecipeListViewManager_o *)UnityEngine_Object__Instantiate_object_(
                                           recipeDropEffetct_k__BackingField,
                                           (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_15;
  v8 = this;
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, parentTransform, 0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8, 0LL);
  v9 = this;
  if ( !byte_4A487E1 )
  {
    this = (EventRecipeListViewManager_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, parentTransform);
    byte_4A487E1 = 1;
  }
  if ( !v9 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (EventRecipeListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8, 0LL);
  v10 = this;
  if ( !byte_4A487E6 )
  {
    this = (EventRecipeListViewManager_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, parentTransform);
    byte_4A487E6 = 1;
  }
  if ( !v10 )
LABEL_15:
    sub_1B86614(this, parentTransform);
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
  struct System_Action_BattleDropItem____int__Action__o *v29; // x26
  System_Int32_array *EventItemList; // x28
  struct System_Action_int__string____Action__o *v31; // x25
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x27
  EventDetailEntity_o *v34; // x29
  System_Collections_Generic_List_object__o *v35; // x20
  ShopCurrencyInfoController_o *v36; // x27
  int32_t v37; // w20
  int32_t v38; // w8
  RecipeAssetManager_o *assetManager; // x20
  struct RecipeAssetManager_o **p_assetManager; // x19
  RecipeAssetManager_o *v41; // x20
  const MethodInfo *v42; // x1
  int32_t v43; // w19
  System_Action_o *v44; // x22
  const MethodInfo *v45; // x3
  struct System_Action_o *v46; // [xsp+8h] [xbp-78h]

  if ( (byte_4A48EA9 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopMaster___, v18);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v20);
    sub_1B863B8(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v21);
    sub_1B863B8(&RecipeAssetManager_TypeInfo, v22);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B863B8(&Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__, v24);
    sub_1B863B8(&EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo, v25);
    byte_4A48EA9 = 1;
  }
  v26 = sub_1B86604(EventRecipeListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_19;
  *(_QWORD *)(v26 + 16) = this;
  sub_1B8635C(v26 + 16);
  *(_DWORD *)(v26 + 24) = eventId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v46 = recipeCallback;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_19;
  v29 = requestCallBack;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, *(_DWORD *)(v26 + 24), 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  v31 = playVoice;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             *(_DWORD *)(v26 + 24),
             (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v34 = (EventDetailEntity_o *)Entity;
  v35 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_19;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v35;
  Instance = (DataManager_o *)sub_1B8635C(&currencyInfoController->fields.objectList);
  if ( !v34 )
    goto LABEL_19;
  v36 = this->fields.currencyInfoController;
  v37 = *(_DWORD *)(v26 + 24);
  Instance = (DataManager_o *)EventDetailEntity__IsForcedAdjustmentDialog(v34, 0LL);
  if ( !v36 )
    goto LABEL_19;
  ShopCurrencyInfoController__RefreshEventItemInfo(v36, 6, v37, 1, EventItemList, (unsigned __int8)Instance & 1, 0LL);
  Instance = (DataManager_o *)this->fields.currencyInfoController;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.svtId = svtId;
  v38 = *(_DWORD *)(v26 + 24);
  this->fields.recipeCallback = v46;
  this->fields.currentEventId = v38;
  sub_1B8635C(&this->fields.recipeCallback);
  this->fields.requestCallBack = v29;
  sub_1B8635C(&this->fields.requestCallBack);
  this->fields.playVoiceAction = v31;
  sub_1B8635C(&this->fields.playVoiceAction);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_1B8635C(&this->fields.presentBoxOverDlg);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_1B8635C(&this->fields.boxOverDlgCloseCallBack);
  this->fields.maskPanel = maskPanle;
  sub_1B8635C(&this->fields.maskPanel);
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
    v41 = (RecipeAssetManager_o *)sub_1B86604(RecipeAssetManager_TypeInfo);
    RecipeAssetManager___ctor(v41, v42);
    *p_assetManager = v41;
    sub_1B8635C(p_assetManager);
    assetManager = *p_assetManager;
  }
  v43 = *(_DWORD *)(v26 + 24);
  v44 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v26,
    Method_EventRecipeListViewManager___c__DisplayClass24_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_19:
    sub_1B86614(Instance, v28);
  RecipeAssetManager__GetAssets(assetManager, v43, v44, v45);
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
  if ( !byte_4A487E6 )
  {
    this = (EventRecipeListViewManager_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, dialog);
    byte_4A487E6 = 1;
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
    sub_1B86614(this, dialog);
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

  if ( (byte_4A48EB0 & 1) == 0 )
  {
    sub_1B863B8(&Method_EventRecipeListViewManager_CreateRecipeResponse__, *(_QWORD *)&createNum);
    sub_1B863B8(&Method_NetworkManager_getRequest_CreateRecipeRequest___, v5);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4A48EB0 = 1;
  }
  recipeConfirmDialog = this->fields.recipeConfirmDialog;
  if ( !recipeConfirmDialog )
    goto LABEL_11;
  EventRecipeConfirmDialogComponent__Close(recipeConfirmDialog, 0LL);
  recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !recipeConfirmDialog )
    goto LABEL_11;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recipeConfirmDialog, 1, 0LL);
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventRecipeListViewManager_CreateRecipeResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    recipeConfirmDialog = (EventRecipeConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                   v9,
                                                                   (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CreateRecipeRequest___);
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
    sub_1B86614(recipeConfirmDialog, *(_QWORD *)&createNum);
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
  const MethodInfo *v15; // x1
  __int64 v16; // x8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v18; // x1
  __int64 v19; // x8
  EventRecipeConfirmDialogComponent_o *recipeConfirmDialog; // x21
  Il2CppObject *v21; // x22
  EventRecipeGiftEntity_array *v22; // x20
  System_Action_int__o *v23; // x23
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A48EAF & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, obj);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventRecipeMaster___, v5);
    sub_1B863B8(&Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__, v6);
    sub_1B863B8(&Method_EventRecipeListViewManager_OnClickDecide__, v7);
    sub_1B863B8(&Method_EventRecipeListViewManager_OnClickListView__, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A48EAF = 1;
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
  v12 = maskPanel[136];
  v13 = Method_EventRecipeListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventRecipeListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B863D0(Method_EventRecipeListViewManager_OnClickListView__);
  v14 = (System_Reflection_MethodBase_o *)sub_1B8639C(v13, v13[4]);
  if ( v12 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
    maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, v15);
    if ( maskPanel )
    {
      v16 = *((_QWORD *)maskPanel + 14);
      if ( v16 )
      {
        this->fields.selectRecipeId = *(_DWORD *)(v16 + 16);
        maskPanel = (unsigned __int8 *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( maskPanel )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)maskPanel,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
          maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, v18);
          if ( maskPanel )
          {
            v19 = *((_QWORD *)maskPanel + 14);
            if ( v19 )
            {
              if ( MasterData_object )
              {
                if ( !DataMasterBase_object__object__int___TryGetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        &entity,
                        *(_DWORD *)(v19 + 16),
                        (const MethodInfo_32142CC *)Method_DataMasterBase_EventRecipeMaster__EventRecipeEntity__int__TryGetEntity__) )
                  goto LABEL_22;
                recipeConfirmDialog = this->fields.recipeConfirmDialog;
                v21 = entity;
                maskPanel = (unsigned __int8 *)EventRecipeListViewObject__GetItem(obj, (const MethodInfo *)obj);
                if ( maskPanel )
                {
                  v22 = (EventRecipeGiftEntity_array *)*((_QWORD *)maskPanel + 15);
                  v23 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
                  System_Action_int____ctor(
                    v23,
                    (Il2CppObject *)this,
                    Method_EventRecipeListViewManager_OnClickDecide__,
                    0LL);
                  if ( recipeConfirmDialog )
                  {
                    EventRecipeConfirmDialogComponent__Open(
                      recipeConfirmDialog,
                      (EventRecipeEntity_o *)v21,
                      v22,
                      v23,
                      this->fields.presentBoxOverDlg,
                      this->fields.boxOverDlgCloseCallBack,
                      0LL);
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
    sub_1B86614(maskPanel, obj);
  }
  OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0, 0LL);
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

  if ( (byte_4A48EAE & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A48EAE = 1;
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
          sub_1B86614(0LL, v7);
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
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A48EAD & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__get_Current__, v5);
    sub_1B863B8(&Method_EventRecipeListViewManager_OnMoveEnd__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventRecipeListViewObject__get_Count__, v8);
    sub_1B863B8(&StringLiteral_9791/*"OnMoveEnd"*/, v9);
    byte_4A48EAD = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_object__o *)EventRecipeListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B86614(0LL, v11);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9791/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      ObjectList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_EventRecipeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__MoveNext__) )
    {
      current = v18.fields._current;
      v14 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B86614(v15, v16);
      EventRecipeListViewObject__Init_30695328((EventRecipeListViewObject_o *)current, 3, v14, 1.0, v17);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_EventRecipeListViewObject__Dispose__);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A48EAC & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, obj);
    sub_1B863B8(&Method_EventRecipeListViewManager_OnMoveEnd__, v6);
    sub_1B863B8(&EventRecipeListViewObject_TypeInfo, v7);
    byte_4A48EAC = 1;
  }
  v8 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventRecipeListViewManager_OnMoveEnd__, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(EventRecipeListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventRecipeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRecipeListViewObject_TypeInfo )
  {
    sub_1B86614(v9, v10);
  }
  EventRecipeListViewObject__Init_30695328((EventRecipeListViewObject_o *)obj, 3, v8, 1.0, v11);
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
  const MethodInfo *v10; // x1
  struct RecipeAssetManager_o *assetManager; // x8
  Il2CppObject *recipeRewardDialog_k__BackingField; // x21
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *recipePointRewardDialog; // x21
  struct RecipePointRewardDialogComponent_o **p_recipePointRewardDialog; // x20
  struct RecipeAssetManager_o *v16; // x8
  Il2CppObject *recipePointRewardDialog_k__BackingField; // x21
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *recipeConfirmDialog; // x21
  struct EventRecipeConfirmDialogComponent_o **p_recipeConfirmDialog; // x20
  struct RecipeAssetManager_o *v21; // x8
  Il2CppObject *recipeConfirmDialog_k__BackingField; // x21
  const MethodInfo *v23; // x2

  if ( (byte_4A48EA8 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___, method);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___, v3);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___, v4);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A48EA8 = 1;
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
                                       (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_31;
    this->fields.recipeRewardDialog = (struct RecipeRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                v9,
                                                                                (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_RecipeRewardDialogComponent___);
    sub_1B8635C(&this->fields.recipeRewardDialog);
    EventRecipeListViewManager__LocateDialogToRecipePanel(this, (BaseDialog_o *)this->fields.recipeRewardDialog, v13);
  }
  v9 = (UnityEngine_GameObject_o *)*p_recipeRewardDialog;
  if ( !*p_recipeRewardDialog )
    goto LABEL_31;
  RecipeRewardDialogComponent__Init((RecipeRewardDialogComponent_o *)v9, v10);
  recipePointRewardDialog = (UnityEngine_Object_o *)this->fields.recipePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipePointRewardDialog = &this->fields.recipePointRewardDialog;
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( !v16 )
      goto LABEL_31;
    recipePointRewardDialog_k__BackingField = (Il2CppObject *)v16->fields._recipePointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       recipePointRewardDialog_k__BackingField,
                                       (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_31;
    this->fields.recipePointRewardDialog = (struct RecipePointRewardDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                          v9,
                                                                                          (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_RecipePointRewardDialogComponent___);
    sub_1B8635C(&this->fields.recipePointRewardDialog);
    EventRecipeListViewManager__LocateDialogToRecipePanel(
      this,
      (BaseDialog_o *)this->fields.recipePointRewardDialog,
      v18);
  }
  v9 = (UnityEngine_GameObject_o *)*p_recipePointRewardDialog;
  if ( !*p_recipePointRewardDialog )
    goto LABEL_31;
  RecipePointRewardDialogComponent__Init((RecipePointRewardDialogComponent_o *)v9, v10);
  recipeConfirmDialog = (UnityEngine_Object_o *)this->fields.recipeConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_recipeConfirmDialog = &this->fields.recipeConfirmDialog;
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(recipeConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v21 = this->fields.assetManager;
    if ( v21 )
    {
      recipeConfirmDialog_k__BackingField = (Il2CppObject *)v21->fields._recipeConfirmDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         recipeConfirmDialog_k__BackingField,
                                         (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        this->fields.recipeConfirmDialog = (struct EventRecipeConfirmDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                           v9,
                                                                                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeConfirmDialogComponent___);
        sub_1B8635C(&this->fields.recipeConfirmDialog);
        EventRecipeListViewManager__LocateDialogToRecipePanel(
          this,
          (BaseDialog_o *)this->fields.recipeConfirmDialog,
          v23);
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_1B86614(v9, v10);
  }
LABEL_29:
  v9 = (UnityEngine_GameObject_o *)*p_recipeConfirmDialog;
  if ( !*p_recipeConfirmDialog )
    goto LABEL_31;
  EventRecipeConfirmDialogComponent__Init((EventRecipeConfirmDialogComponent_o *)v9, this->fields.currentEventId, 0LL);
}


void __fastcall EventRecipeListViewManager__StopUpdateRemainTime(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B86614(0LL, method);
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall EventRecipeListViewManager__UpdateEventItemList(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B86614(0LL, method);
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0LL);
}


int32_t __fastcall EventRecipeListViewManager__get_ItemBaseWindowHeight(
        EventRecipeListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1B86614(this, method);
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
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A48EA7 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A48EA7 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventRecipeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventRecipeListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B86614(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B86614(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_EventRecipeListViewObject___);
      v18 = Component_object;
      if ( !v11 )
        sub_1B86614(Component_object, Component_object);
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_EventRecipeListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B86614(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_1B8635C(v22 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  const MethodInfo *v7; // x3
  struct EventRecipeListViewManager_o *v8; // x19
  const MethodInfo *v9; // x1

  if ( (byte_4A48EB4 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventRecipeMaster___, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A48EB4 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  EventRecipeListViewManager__SetRecipeObject(_4__this, method);
  _4__this = (EventRecipeListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_11;
  _4__this = (EventRecipeListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)_4__this,
                                               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventRecipeMaster___);
  v5 = this->fields.__4__this;
  if ( !v5
    || !_4__this
    || (_4__this = (EventRecipeListViewManager_o *)EventRecipeMaster__GetRecipeEntityArray(
                                                     (EventRecipeMaster_o *)_4__this,
                                                     v5->fields.currentEventId,
                                                     0LL),
        (v6 = this->fields.__4__this) == 0LL)
    || (v6->fields.eventRecipeEntities = (struct EventRecipeEntity_array *)_4__this,
        sub_1B8635C(&v6->fields.eventRecipeEntities),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventRecipeListViewManager__CreateList(_4__this, _4__this->fields.eventRecipeEntities, this->fields.eventId, v7),
        (v8 = this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B86614(_4__this, method);
  }
  v8->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)v8, 0LL);
  EventRecipeListViewManager__RequestListObject(v8, v9);
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
    sub_1B86614(this, x);
  return x->fields.id == _4__this->fields.selectRecipeId;
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__1(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  Il2CppObject *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  BattleDropItem_array *monitor; // x19
  Il2CppClass *klass; // x8
  RecipePointRewardDialogComponent_o *v8; // x21
  System_Action_o *v9; // x24
  int32_t method_high; // w22
  EventRecipeEntity_o *v11; // x23
  Il2CppMethodPointer methodPtr; // x23
  System_Action_o *v13; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4A48EB5 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__, v4);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1B863B8(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
                                                                   v5);
    byte_4A48EB5 = 1;
  }
  monitor = (BattleDropItem_array *)v3[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_14;
  if ( *(_QWORD *)&monitor->max_length )
  {
    v8 = (RecipePointRewardDialogComponent_o *)klass->vtable[5].method;
    v9 = (System_Action_o *)v3[3].monitor;
    method_high = HIDWORD(klass->vtable[3].method);
    v11 = (EventRecipeEntity_o *)v3[2].klass;
    if ( !v9 )
    {
      v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v9,
        v3,
        Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__2__,
        0LL);
      v3[3].monitor = v9;
      this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1B8635C(&v3[3].monitor);
    }
    if ( v8 )
    {
      RecipePointRewardDialogComponent__Open(v8, v11, monitor, method_high, v9, v2);
      return;
    }
LABEL_14:
    sub_1B86614(this, method);
  }
  methodPtr = klass->vtable[3].methodPtr;
  v13 = (System_Action_o *)v3[4].klass;
  if ( !v13 )
  {
    v13 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      v3,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__3__,
      0LL);
    v3[4].klass = (Il2CppClass *)v13;
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1B8635C(&v3[4]);
  }
  if ( !methodPtr )
    goto LABEL_14;
  (*((void (__fastcall **)(_QWORD, BattleDropItem_array *, _QWORD, System_Action_o *, _QWORD))methodPtr + 3))(
    *((_QWORD *)methodPtr + 8),
    monitor,
    0LL,
    v13,
    *((_QWORD *)methodPtr + 5));
}


void __fastcall EventRecipeListViewManager___c__DisplayClass33_0___CreateRecipeResponse_b__2(
        EventRecipeListViewManager___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  Il2CppMethodPointer methodPtr; // x23
  System_Action_o *v6; // x21
  void *monitor; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4A48EB6 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1B863B8(
                                                                   &Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
                                                                   v3);
    byte_4A48EB6 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    goto LABEL_8;
  methodPtr = klass->vtable[3].methodPtr;
  v6 = (System_Action_o *)v2[3].klass;
  monitor = v2[1].monitor;
  if ( !v6 )
  {
    v6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      v2,
      Method_EventRecipeListViewManager___c__DisplayClass33_0__CreateRecipeResponse_b__4__,
      0LL);
    v2[3].klass = (Il2CppClass *)v6;
    this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)sub_1B8635C(&v2[3]);
  }
  if ( !methodPtr )
LABEL_8:
    sub_1B86614(this, method);
  (*((void (__fastcall **)(_QWORD, void *, _QWORD, System_Action_o *, _QWORD))methodPtr + 3))(
    *((_QWORD *)methodPtr + 8),
    monitor,
    0LL,
    v6,
    *((_QWORD *)methodPtr + 5));
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
    sub_1B8661C(this, method);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1B86614(this, method);
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
    sub_1B8661C(this, method);
  this = (EventRecipeListViewManager___c__DisplayClass33_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_5:
    sub_1B86614(this, method);
  EventRecipeListViewManager__CheckOpenQuest((EventRecipeListViewManager_o *)this, res->m_Items[0], v2);
}


void __fastcall EventRecipeListViewManager_resData___ctor(
        EventRecipeListViewManager_resData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
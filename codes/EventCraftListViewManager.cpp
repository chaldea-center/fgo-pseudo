void EventCraftListViewManager___ctor(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventCraftListViewManager__CheckIsSerializeFieldNotNull(Il2CppObject *targetObj, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x2
  int monitor; // w8
  Il2CppObject *v5; // x20
  unsigned int v6; // w27
  Il2CppType *v7; // x22
  System_Reflection_MemberInfo_o *v8; // x21
  System_RuntimeTypeHandle_o v9; // x0
  System_Type_o *TypeFromHandle; // x0
  int v11; // w22
  __int64 v12; // x23
  System_RuntimeTypeHandle_o v13; // x0

  v2 = targetObj;
  if ( (byte_5932403 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_var);
    targetObj = (Il2CppObject *)sub_21FFC50(&UnityEngine_SerializeField_var);
    byte_5932403 = 1;
  }
  if ( !v2 )
    goto LABEL_17;
  targetObj = (Il2CppObject *)System_Object__GetType(v2, 0);
  if ( !targetObj )
    goto LABEL_17;
  targetObj = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, __int64, const MethodInfo *))targetObj->klass->vtable[88].methodPtr)(
                                targetObj,
                                60,
                                targetObj->klass->vtable[88].method);
  if ( !targetObj )
    goto LABEL_17;
  monitor = (int)targetObj[1].monitor;
  v5 = targetObj;
  if ( monitor >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= monitor )
        sub_21FFED4(targetObj);
      v7 = UnityEngine_SerializeField_var;
      v8 = (System_Reflection_MemberInfo_o *)*((_QWORD *)&v5[2].klass + (int)v6);
      if ( !*(_DWORD *)(qword_594C108 + 228) )
        j_il2cpp_runtime_class_init_0(qword_594C108, method, v3);
      v9.fields.value = (intptr_t)v7;
      TypeFromHandle = System_Type__GetTypeFromHandle(v9, 0);
      targetObj = (Il2CppObject *)System_Reflection_CustomAttributeExtensions__IsDefined(v8, TypeFromHandle, 0);
      if ( !v8 )
        break;
      v11 = (int)targetObj;
      v12 = ((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v8->klass[1]._1.name)(
              v8,
              v8->klass[1]._1.namespaze);
      v13.fields.value = (intptr_t)UnityEngine_Object_var;
      targetObj = (Il2CppObject *)System_Type__GetTypeFromHandle(v13, 0);
      if ( !v12 )
        break;
      targetObj = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v12 + 648LL))(
                                    v12,
                                    targetObj,
                                    *(_QWORD *)(*(_QWORD *)v12 + 656LL));
      if ( (v11 & (unsigned int)targetObj & 1) != 0 )
        targetObj = (Il2CppObject *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, Il2CppObject *, void *))v8->klass[1]._1.properties)(
                                      v8,
                                      v2,
                                      v8->klass[1]._1.methods);
      monitor = (int)v5[1].monitor;
      if ( (int)++v6 >= monitor )
        return;
    }
LABEL_17:
    sub_21FFECC(targetObj, method);
  }
}


void EventCraftListViewManager__CheckIsSerializeFieldNotNull_38090828(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5932405 & 1) == 0 )
  {
    sub_21FFC50(&EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_TypeInfo);
    byte_5932405 = 1;
  }
  v3 = sub_21FFEBC(EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void EventCraftListViewManager__CraftStartResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x0
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20
  const MethodInfo *v9; // x2

  if ( (byte_5932412 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_5932412 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
    if ( !selectTradeGoodsEntity
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          selectTradeGoodsEntity = (EventTradeGoodsEntity_o *)EventTradeGoodsEntity__GetTradeStartVoiceIds(
                                                                selectTradeGoodsEntity,
                                                                0),
          !playVoiceAction) )
    {
      sub_21FFECC(selectTradeGoodsEntity, v5);
    }
    ((void (__fastcall *)(intptr_t, _QWORD, EventTradeGoodsEntity_o *, _QWORD, intptr_t))playVoiceAction->fields.invoke_impl)(
      playVoiceAction->fields.method_code,
      svtId,
      selectTradeGoodsEntity,
      0,
      playVoiceAction->fields.method);
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v9);
  }
}


void EventCraftListViewManager__CreateList(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  const MethodInfo *v4; // x1
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x26
  int max_length; // w8
  unsigned int v7; // w28
  EventTradeGoodsEntity_o *v8; // x21
  int32_t id; // w22
  ItemEntity_o *supportTool; // x23
  int32_t currentEventId; // w24
  System_Action_o *v12; // x25
  EventCraftListViewItem_o *v13; // x20
  const MethodInfo *v14; // x6
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  __int64 v25; // x2
  struct EventTradeGoodsEntity_array *v26; // x8
  UILabel_o *emptyMessageLabel; // x20

  if ( (byte_5932409 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&EventCraftListViewItem_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager_UpdateReceiveAllButtonState__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5927/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_5932409 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_21;
  max_length = tradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_21FFED4(itemList);
      v8 = tradeGoodsEntities->m_Items[v7];
      if ( !v8 )
        break;
      id = v8->fields.id;
      supportTool = this->fields.supportTool;
      currentEventId = this->fields.currentEventId;
      v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_EventCraftListViewManager_UpdateReceiveAllButtonState__, 0);
      v13 = (EventCraftListViewItem_o *)sub_21FFEBC(EventCraftListViewItem_TypeInfo);
      EventCraftListViewItem___ctor(v13, id, v8, supportTool, currentEventId, v12, v14);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v13,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_14;
    }
LABEL_21:
    sub_21FFECC(itemList, v4);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
  v26 = this->fields.tradeGoodsEntities;
  if ( !v26 )
    goto LABEL_21;
  if ( !v26->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v25);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5927/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
                                                              0);
    if ( !emptyMessageLabel )
      goto LABEL_21;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0);
  }
  EventCraftListViewManager__RequestListObject(this, v4);
}


void EventCraftListViewManager__DestroyList(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  EventCraftAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *craftRewardDialog; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *currencyInfoController; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Object_o *craftNumConfirmDialog; // x20
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_Object_o *craftWithdrawConfirmDialog; // x20
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_Object_o *v34; // x20
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  __int64 v42; // x2
  UnityEngine_Object_o *v43; // x20
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7

  if ( (byte_5932429 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932429 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventCraftAssetManager__Release(assetManager, this->fields.currentEventId, v4);
  craftRewardDialog = (UnityEngine_Object_o *)this->fields.craftRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(craftRewardDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    this->fields.craftRewardDialog = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.craftRewardDialog, 0, v13, v14, v15, v16, v17, v18);
  }
  craftNumConfirmDialog = (UnityEngine_Object_o *)this->fields.craftNumConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(craftNumConfirmDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftNumConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
    UnityEngine_Object__Destroy_83246496(v23, 0);
    this->fields.craftNumConfirmDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.craftNumConfirmDialog,
      0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  craftWithdrawConfirmDialog = (UnityEngine_Object_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v20);
  if ( UnityEngine_Object__op_Inequality(craftWithdrawConfirmDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftWithdrawConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
    UnityEngine_Object__Destroy_83246496(v34, 0);
    this->fields.craftWithdrawConfirmDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.craftWithdrawConfirmDialog,
      0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v31);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0, 0) )
  {
    v43 = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v42);
    UnityEngine_Object__Destroy_83246496(v43, 0);
    this->fields.tradeButtonBlinkEffect = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradeButtonBlinkEffect,
      0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_34:
    sub_21FFECC(currencyInfoController, v7);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventCraftListViewManager__GetSupportToolItemId(
        EventCraftListViewManager_o *this,
        bool isUseSupportTool,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v8; // x0
  struct ItemEntity_o *supportTool; // x8
  int32_t id; // w3
  struct ItemEntity_o *v11; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5932425 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932425 = 1;
  }
  entity = 0;
  if ( !isUseSupportTool )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isUseSupportTool, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    v8 = NetworkManager_TypeInfo;
  }
  supportTool = this->fields.supportTool;
  if ( supportTool )
  {
    id = supportTool->fields.id;
    if ( !Master_object )
LABEL_22:
      sub_21FFECC(v8, v5);
  }
  else
  {
    id = 0;
    if ( !Master_object )
      goto LABEL_22;
  }
  v8 = (NetworkManager_c *)UserItemMaster__TryGetEntity(
                             (UserItemMaster_o *)Master_object,
                             &entity,
                             v8->static_fields->userIdNumber,
                             id,
                             0);
  if ( ((unsigned __int8)v8 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_22;
  if ( entity->fields.num >= 1 && (v11 = this->fields.supportTool) != 0 )
    return v11->fields.id;
  else
    return 0;
}


void EventCraftListViewManager__Init(
        EventCraftListViewManager_o *this,
        int32_t eventId,
        int32_t guidSvtId,
        System_Action_o *callback,
        System_Action_int__string____Action__o *playVoice,
        UnityEngine_GameObject_o *mask,
        const MethodInfo *method)
{
  __int64 v13; // x20
  ItemMaster_o *Master_object; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w8
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x1
  __int64 v48; // x2
  ItemEntity_array *EntityList; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  System_Func_object__bool__o *v57; // x22
  Il2CppObject *v58; // x1
  System_Int32_array *EventItemList; // x21
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x24
  EventDetailEntity_o *v62; // x22
  System_Collections_Generic_List_object__o *v63; // x23
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  ShopCurrencyInfoController_o *v70; // x24
  int32_t v71; // w23
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  EventCraftAssetManager_o *v86; // x21
  const MethodInfo *v87; // x1
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  const MethodInfo *v94; // x1
  __int64 v95; // x1
  __int64 v96; // x2
  UILabel_o *craftNoticeLb; // x21
  const MethodInfo *v98; // x1
  __int64 v99; // x1
  __int64 v100; // x2
  bool v101; // w8
  System_Action_c *v102; // x0
  EventCraftAssetManager_o *assetManager; // x19
  int32_t v104; // w21
  System_Action_o *v105; // x22
  const MethodInfo *v106; // x3

  if ( (byte_5932404 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_ItemEntity___);
    sub_21FFC50(&EventCraftAssetManager_TypeInfo);
    sub_21FFC50(&System_Func_ItemEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__0__);
    sub_21FFC50(&Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__1__);
    sub_21FFC50(&EventCraftListViewManager___c__DisplayClass44_0_TypeInfo);
    sub_21FFC50(&StringLiteral_4042/*"CRAFT_EVENT_PUSH_BTN_LABEL"*/);
    byte_5932404 = 1;
  }
  v13 = sub_21FFEBC(EventCraftListViewManager___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_35;
  *(_QWORD *)(v13 + 24) = this;
  *(_DWORD *)(v13 + 16) = eventId;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 24), (int32_t)this, v16, v17, v18, v19, v20, v21);
  v22 = *(_DWORD *)(v13 + 16);
  this->fields.svtId = guidSvtId;
  this->fields.currentEventId = v22;
  this->fields.craftCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.craftCallback,
    (int32_t)callback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.playVoiceAction = playVoice;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAction,
    (int32_t)playVoice,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.maskPanel = mask;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.maskPanel, (int32_t)mask, v35, v36, v37, v38, v39, v40);
  this->fields.selectTradeGoodsEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectTradeGoodsEntity, 0, v41, v42, v43, v44, v45, v46);
  if ( this->fields.supportTool )
    goto LABEL_12;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47, v48);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
LABEL_35:
    sub_21FFECC(Master_object, v15);
  EntityList = ItemMaster__GetEntityList(Master_object, 39, 0);
  if ( EntityList )
  {
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
    v57 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ItemEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v57,
      (Il2CppObject *)v13,
      Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__0__,
      0);
    v58 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            v56,
            (System_Func_TSource__bool__o *)v57,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_ItemEntity___);
  }
  else
  {
    v58 = 0;
  }
  this->fields.supportTool = (struct ItemEntity_o *)v58;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.supportTool, (int32_t)v58, v50, v51, v52, v53, v54, v55);
LABEL_12:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47, v48);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_35;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Master_object, *(_DWORD *)(v13 + 16), 0);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             *(_DWORD *)(v13 + 16),
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v62 = (EventDetailEntity_o *)Entity;
  v63 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_35;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v63;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&currencyInfoController->fields.objectList,
    (int32_t)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  if ( !v62 )
    goto LABEL_35;
  v70 = this->fields.currencyInfoController;
  v71 = *(_DWORD *)(v13 + 16);
  Master_object = (ItemMaster_o *)EventDetailEntity__IsForcedAdjustmentDialog(v62, 0);
  if ( !v70 )
    goto LABEL_35;
  ShopCurrencyInfoController__RefreshEventItemInfo(v70, 6, v71, 1, EventItemList, (unsigned __int8)Master_object & 1, 0);
  Master_object = (ItemMaster_o *)this->fields.currencyInfoController;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ItemMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_35;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            (EventTradeGoodsMaster_o *)Master_object,
                            this->fields.currentEventId,
                            0);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tradeGoodsEntities,
    (int32_t)TradeGoodsEntityArray,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_35;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tradeStoreEntities,
    (int32_t)OpenTradeStoreEntityArray,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  Master_object = (ItemMaster_o *)this->fields.touchPanel;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ItemMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  if ( !this->fields.assetManager )
  {
    v86 = (EventCraftAssetManager_o *)sub_21FFEBC(EventCraftAssetManager_TypeInfo);
    EventCraftAssetManager___ctor(v86, v87);
    this->fields.assetManager = v86;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.assetManager,
      (int32_t)v86,
      v88,
      v89,
      v90,
      v91,
      v92,
      v93);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetCraftNotification(0);
  EventCraftListViewManager__UpdateNoticeButtonDisplay(this, v94);
  craftNoticeLb = this->fields.craftNoticeLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v95, v96);
  Master_object = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4042/*"CRAFT_EVENT_PUSH_BTN_LABEL"*/, 0);
  if ( !craftNoticeLb )
    goto LABEL_35;
  UILabel__set_text(craftNoticeLb, (System_String_o *)Master_object, 0);
  EventCraftListViewManager__UpdateCraftAbleCountLb(this, v98);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v99, v100);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_35;
  v101 = DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           (Il2CppObject **)(v13 + 40),
           this->fields.currentEventId,
           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  v102 = System_Action_TypeInfo;
  assetManager = this->fields.assetManager;
  v104 = *(_DWORD *)(v13 + 16);
  *(_BYTE *)(v13 + 32) = v101;
  v105 = (System_Action_o *)sub_21FFEBC(v102);
  System_Action___ctor(
    v105,
    (Il2CppObject *)v13,
    Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__1__,
    0);
  if ( !assetManager )
    goto LABEL_35;
  EventCraftAssetManager__LoadAssets(assetManager, v104, v105, v106);
}


void EventCraftListViewManager__LocateDialogToCraftPanel(
        EventCraftListViewManager_o *this,
        UnityEngine_Component_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  EventCraftListViewManager_o *v6; // x20

  if ( !dialog )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_Component__get_transform(dialog, 0);
  this = (EventCraftListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0);
  if ( !this )
    goto LABEL_9;
  this = (EventCraftListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0);
  this = (EventCraftListViewManager_o *)UnityEngine_Component__get_transform(dialog, 0);
  v6 = this;
  if ( !byte_5931945 )
  {
    this = (EventCraftListViewManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventCraftListViewManager_o *)UnityEngine_Component__get_gameObject(dialog, 0)) == 0) )
  {
LABEL_9:
    sub_21FFECC(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventCraftListViewManager__OnClickCraftStartButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  unsigned int displayMode; // w8
  bool IsBuyAble; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  const MethodInfo *v13; // x1
  EventCraftListViewItem_o *Item; // x24
  int32_t v15; // w22
  ItemEntity_o *supportTool; // x23
  System_Action_T1__T2__T3__o *v17; // x25
  const MethodInfo *v18; // x6
  const MethodInfo *v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct EventTradeGoodsEntity_o *monitor; // x1
  System_Reflection_MethodBase_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v31; // x21
  System_String_o *v32; // x22
  System_Action_o *v33; // x23
  int32_t storeIdx; // [xsp+3Ch] [xbp-44h] BYREF

  if ( (byte_5932410 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int____int__bool__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickCraftStartButton__);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickCraftStartDecide__);
    sub_21FFC50(&Method_EventCraftListViewManager__OnClickCraftStartButton_b__57_0__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_4040/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_4039/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_5932410 = 1;
  }
  maskPanel = this->fields.maskPanel;
  storeIdx = 0;
  if ( !maskPanel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !obj )
    goto LABEL_25;
  displayMode = obj->fields.displayMode;
  if ( displayMode > 5 || ((1 << displayMode) & 0x33) != 0 )
  {
LABEL_7:
    maskPanel = this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
      return;
    }
LABEL_25:
    sub_21FFECC(maskPanel, obj);
  }
  maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !maskPanel )
    goto LABEL_25;
  IsBuyAble = EventCraftListViewItem__get_IsBuyAble((EventCraftListViewItem_o *)maskPanel, (const MethodInfo *)obj);
  v8 = Method_EventCraftListViewManager_OnClickCraftStartButton__;
  if ( !IsBuyAble )
  {
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickCraftStartButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_21FFC68(Method_EventCraftListViewManager_OnClickCraftStartButton__);
    v27 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0, 0);
    goto LABEL_7;
  }
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickCraftStartButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_21FFC68(Method_EventCraftListViewManager_OnClickCraftStartButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  if ( EventCraftListViewManager__TryGetAvailableStoreIdx(this, &storeIdx, v10) )
  {
    EventCraftListViewManager__UpdateListObject(this, v11);
    maskPanel = (UnityEngine_GameObject_o *)this->fields.craftNumConfirmDialog;
    if ( !maskPanel )
      goto LABEL_25;
    EventCraftNumConfirmDialogComponent__Init(
      (EventCraftNumConfirmDialogComponent_o *)maskPanel,
      (const MethodInfo *)obj);
    craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
    Item = EventCraftListViewObject__GetItem(obj, v13);
    v15 = storeIdx;
    supportTool = this->fields.supportTool;
    v17 = (System_Action_T1__T2__T3__o *)sub_21FFEBC(System_Action_int____int__bool__TypeInfo);
    System_Action_object__int__bool____ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_OnClickCraftStartDecide__,
      0);
    if ( !craftNumConfirmDialog )
      goto LABEL_25;
    EventCraftNumConfirmDialogComponent__Open(
      craftNumConfirmDialog,
      Item,
      v15,
      supportTool,
      (System_Action_int____int__bool__o *)v17,
      0,
      v18);
    maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, v19);
    if ( !maskPanel )
      goto LABEL_25;
    monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
    this->fields.selectTradeGoodsEntity = monitor;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectTradeGoodsEntity,
      (int32_t)monitor,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    goto LABEL_7;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28, v29);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_4040/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_TITLE"*/, 0);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_4039/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager__OnClickCraftStartButton_b__57_0__,
    0);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__OpenNotificationDialog_37293356(
    (CommonUI_o *)Instance,
    v31,
    v32,
    v33,
    13.0,
    -162.5,
    -1,
    0,
    0,
    0,
    0,
    26,
    0,
    0,
    1,
    0,
    0);
}


void EventCraftListViewManager__OnClickCraftStartDecide(
        EventCraftListViewManager_o *this,
        System_Int32_array *tradeInfo,
        int32_t createNum,
        bool isUseSupportTool,
        const MethodInfo *method)
{
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x2
  int32_t v14; // w22
  int32_t v15; // w25
  TradeStartRequest_o *v16; // x23
  int32_t currentEventId; // w24

  if ( (byte_5932411 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventCraftListViewManager_CraftStartResponse__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5932411 = 1;
  }
  craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
  if ( !craftNumConfirmDialog )
    goto LABEL_14;
  EventCraftNumConfirmDialogComponent__Close(craftNumConfirmDialog, (const MethodInfo *)tradeInfo);
  craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( createNum > 0 )
  {
    if ( craftNumConfirmDialog )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 1, 0);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_EventCraftListViewManager_CraftStartResponse__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                         v10,
                                                                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeStartRequest___);
      if ( tradeInfo )
      {
        if ( LODWORD(tradeInfo->max_length) < 2 )
          sub_21FFED4(craftNumConfirmDialog);
        v15 = tradeInfo->m_Items[0];
        v14 = tradeInfo->m_Items[1];
        v16 = (TradeStartRequest_o *)craftNumConfirmDialog;
        currentEventId = this->fields.currentEventId;
        craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)EventCraftListViewManager__GetSupportToolItemId(
                                                                           this,
                                                                           isUseSupportTool,
                                                                           v13);
        if ( v16 )
        {
          TradeStartRequest__beginRequest(v16, currentEventId, v15, v14, createNum, (int32_t)craftNumConfirmDialog, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_21FFECC(craftNumConfirmDialog, tradeInfo);
  }
  if ( !craftNumConfirmDialog )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 0, 0);
}


void EventCraftListViewManager__OnClickListView(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_593240E & 1) == 0 )
  {
    this = (EventCraftListViewManager_o *)sub_21FFC50(&Method_EventCraftListViewManager_OnClickListView__);
    byte_593240E = 1;
  }
  if ( !obj
    || (this = (EventCraftListViewManager_o *)EventCraftListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0 )
  {
    sub_21FFECC(this, obj);
  }
  v4 = this;
  if ( !this->fields.sortOrderButton
    && EventCraftListViewItem__get_IsEventEnd((EventCraftListViewItem_o *)this, (const MethodInfo *)obj)
    || !LOBYTE(v4->fields.SortObject) )
  {
    v5 = Method_EventCraftListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_EventCraftListViewManager_OnClickListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


void EventCraftListViewManager__OnClickNoticeButton(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _BYTE *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5932426 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickNoticeButton__);
    byte_5932426 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  v4 = Method_EventCraftListViewManager_OnClickNoticeButton__;
  this->fields.isButtonOn = isButtonOn ^ 1;
  if ( (v4[83] & 2) != 0 )
    v4 = (_BYTE *)sub_21FFC68(v4);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, *((_QWORD *)v4 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0, 0);
  EventRewardSaveData__SetCraftNotification(this->fields.isButtonOn, 0);
  EventCraftListViewManager__UpdateNoticeButtonDisplay(this, v6);
}


void EventCraftListViewManager__OnClickReceiveAll(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *maskPanel; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Request_object; // x0
  __int64 v14; // x2
  long double v15; // q0
  _QWORD *v16; // x21
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x0

  if ( (byte_5932416 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_EventCraftListViewManager_TradeReceiveResponse__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5932416 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  this->fields.selectTradeGoodsEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectTradeGoodsEntity, 0, v4, v5, v6, v7, v8, v9);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_TradeReceiveResponse__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  v16 = Method_System_Array_Empty_int___;
  currentEventId = this->fields.currentEventId;
  v18 = (TradeReceiveRequest_o *)Request_object;
  v19 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v19 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v19 = v16[7];
  }
  v20 = *(_QWORD *)(v19 + 16);
  if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
    v20 = ((__int64 (*)(void))sub_2237AF8)();
  if ( !*(_DWORD *)(v20 + 228) )
    *(__n128 *)&v15 = j_il2cpp_runtime_class_init_0(v20, method, v14);
  maskPanel = *(struct UnityEngine_GameObject_o **)(v16[7] + 16LL);
  if ( (*(_WORD *)((_BYTE *)&maskPanel[12].fields.m_CachedPtr + 5) & 1) == 0 )
    maskPanel = (struct UnityEngine_GameObject_o *)sub_2237AF8(v15);
  if ( !v18 )
LABEL_16:
    sub_21FFECC(maskPanel, method);
  TradeReceiveRequest__beginRequest(
    v18,
    currentEventId,
    *(System_Int32_array **)maskPanel[7].fields.m_CachedPtr,
    0,
    0,
    0);
}


void EventCraftListViewManager__OnClickReceiveAllButton(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  EventCraftListViewManager_o *v2; // x19
  struct UICommonButton_o *receiveAllButton; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  v2 = this;
  if ( (byte_5932415 & 1) == 0 )
  {
    this = (EventCraftListViewManager_o *)sub_21FFC50(&Method_EventCraftListViewManager_OnClickReceiveAllButton__);
    byte_5932415 = 1;
  }
  receiveAllButton = v2->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_21FFECC(this, method);
  v4 = Method_EventCraftListViewManager_OnClickReceiveAllButton__;
  if ( receiveAllButton->fields.mState == 3 )
  {
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_EventCraftListViewManager_OnClickReceiveAllButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_EventCraftListViewManager_OnClickReceiveAllButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
    EventCraftListViewManager__OnClickReceiveAll(v2, v7);
  }
}


void EventCraftListViewManager__OnClickReceiveButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  unsigned int displayMode; // w8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  EventCraftListViewItem_o *Item; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  int64_t Time; // x22
  int32_t CompleteNum; // w21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_c *klass; // x8
  const MethodInfo *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct EventTradeGoodsEntity_o *monitor; // x1

  if ( (byte_5932413 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickReceiveButton__);
    sub_21FFC50(&EventCraftTimeCalculation_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932413 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !obj )
    goto LABEL_19;
  displayMode = obj->fields.displayMode;
  if ( displayMode >= 4 && (displayMode & 0xFFFFFFFE) == 4 )
  {
    v7 = Method_EventCraftListViewManager_OnClickReceiveButton__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReceiveButton__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_21FFC68(Method_EventCraftListViewManager_OnClickReceiveButton__);
    v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0);
    Item = EventCraftListViewObject__GetItem(obj, v9);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v11);
    Time = NetworkManager__getTime(0);
    if ( !*(&EventCraftTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v13, v14);
    CompleteNum = EventCraftTimeCalculation__GetCompleteNum(Item, 0, Time, v15);
    maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, v18);
    if ( maskPanel )
    {
      klass = maskPanel[6].klass;
      if ( klass )
      {
        EventCraftListViewManager__OnClickReceiveDecide(this, (int32_t)klass->_1.name, CompleteNum, v19);
        maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, v21);
        if ( maskPanel )
        {
          monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
          this->fields.selectTradeGoodsEntity = monitor;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.selectTradeGoodsEntity,
            (int32_t)monitor,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          goto LABEL_17;
        }
      }
    }
LABEL_19:
    sub_21FFECC(maskPanel, obj);
  }
LABEL_17:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftListViewManager__OnClickReceiveDecide(
        EventCraftListViewManager_o *this,
        int32_t storeIdx,
        int32_t receiveNum,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *maskPanel; // x0
  NetworkManager_ResultCallbackFunc_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w21
  TradeReceiveRequest_o *v13; // x22

  if ( (byte_5932414 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventCraftListViewManager_TradeReceiveResponse__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5932414 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( receiveNum > 0 )
  {
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
      v8 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_EventCraftListViewManager_TradeReceiveResponse__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
      Request_object = NetworkManager__getRequest_object_(
                         v8,
                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
      currentEventId = this->fields.currentEventId;
      v13 = (TradeReceiveRequest_o *)Request_object;
      maskPanel = (struct UnityEngine_GameObject_o *)sub_21FFD10(int___TypeInfo, 1);
      if ( maskPanel )
      {
        if ( !LODWORD(maskPanel[1].klass) )
          sub_21FFED4(maskPanel);
        LODWORD(maskPanel[1].monitor) = storeIdx;
        if ( v13 )
        {
          TradeReceiveRequest__beginRequest(v13, currentEventId, (System_Int32_array *)maskPanel, receiveNum, 0, 0);
          return;
        }
      }
    }
LABEL_13:
    sub_21FFECC(maskPanel, *(_QWORD *)&storeIdx);
  }
  if ( !maskPanel )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


void EventCraftListViewManager__OnClickReplenishmentButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  unsigned int displayMode; // w8
  bool IsRefillable; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  const MethodInfo *v12; // x1
  EventCraftListViewItem_o *Item; // x22
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_c *klass; // x8
  int32_t name; // w23
  ItemEntity_o *supportTool; // x24
  System_Action_T1__T2__T3__o *v18; // x25
  const MethodInfo *v19; // x6
  const MethodInfo *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct EventTradeGoodsEntity_o *monitor; // x1
  System_Reflection_MethodBase_o *v28; // x0

  if ( (byte_593241A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int____int__bool__TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickReplenishmentButton__);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__);
    byte_593241A = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !obj )
    goto LABEL_22;
  displayMode = obj->fields.displayMode;
  if ( displayMode < 4 || (displayMode & 0xFFFFFFFE) != 4 )
  {
LABEL_17:
    maskPanel = this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
      return;
    }
LABEL_22:
    sub_21FFECC(maskPanel, obj);
  }
  maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !maskPanel )
    goto LABEL_22;
  IsRefillable = EventCraftListViewItem__get_IsRefillable(
                   (EventCraftListViewItem_o *)maskPanel,
                   (const MethodInfo *)obj);
  v8 = Method_EventCraftListViewManager_OnClickReplenishmentButton__;
  if ( IsRefillable )
  {
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_21FFC68(Method_EventCraftListViewManager_OnClickReplenishmentButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    EventCraftListViewManager__UpdateListObject(this, v10);
    maskPanel = (UnityEngine_GameObject_o *)this->fields.craftNumConfirmDialog;
    if ( !maskPanel )
      goto LABEL_22;
    EventCraftNumConfirmDialogComponent__Init(
      (EventCraftNumConfirmDialogComponent_o *)maskPanel,
      (const MethodInfo *)obj);
    craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
    Item = EventCraftListViewObject__GetItem(obj, v12);
    maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, v14);
    if ( !maskPanel )
      goto LABEL_22;
    klass = maskPanel[6].klass;
    if ( !klass )
      goto LABEL_22;
    name = (int32_t)klass->_1.name;
    supportTool = this->fields.supportTool;
    v18 = (System_Action_T1__T2__T3__o *)sub_21FFEBC(System_Action_int____int__bool__TypeInfo);
    System_Action_object__int__bool____ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__,
      0);
    if ( !craftNumConfirmDialog )
      goto LABEL_22;
    EventCraftNumConfirmDialogComponent__Open(
      craftNumConfirmDialog,
      Item,
      name,
      supportTool,
      (System_Action_int____int__bool__o *)v18,
      1,
      v19);
    maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, v20);
    if ( !maskPanel )
      goto LABEL_22;
    monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
    this->fields.selectTradeGoodsEntity = monitor;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectTradeGoodsEntity,
      (int32_t)monitor,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    goto LABEL_17;
  }
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_21FFC68(Method_EventCraftListViewManager_OnClickReplenishmentButton__);
  v28 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
}


void EventCraftListViewManager__OnClickSupportToolButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  struct EventCraftUseSupportToolDialogComponent_o *craftUseSupportToolDialog; // x21
  EventCraftUseSupportToolDialogComponent_o *v10; // x21
  const MethodInfo *v11; // x1
  EventCraftListViewItem_o *Item; // x22
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_c *klass; // x8
  int32_t name; // w23
  ItemEntity_o *supportTool; // x24
  System_Action_int__int__o *v17; // x25
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct EventTradeGoodsEntity_o *monitor; // x1

  if ( (byte_5932421 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__int__TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickSupportToolButton__);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickSupportToolDecide__);
    byte_5932421 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !obj )
    goto LABEL_16;
  if ( obj->fields.displayMode != 4 )
    goto LABEL_6;
  v6 = Method_EventCraftListViewManager_OnClickSupportToolButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickSupportToolButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_EventCraftListViewManager_OnClickSupportToolButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  EventCraftListViewManager__UpdateListObject(this, v8);
  craftUseSupportToolDialog = this->fields.craftUseSupportToolDialog;
  if ( !craftUseSupportToolDialog )
    goto LABEL_16;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull(
    (Il2CppObject *)this->fields.craftUseSupportToolDialog,
    (const MethodInfo *)obj);
  craftUseSupportToolDialog->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)craftUseSupportToolDialog, 0);
  v10 = this->fields.craftUseSupportToolDialog;
  Item = EventCraftListViewObject__GetItem(obj, v11);
  maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, v13);
  if ( !maskPanel
    || (klass = maskPanel[6].klass) == 0
    || (name = (int32_t)klass->_1.name,
        supportTool = this->fields.supportTool,
        v17 = (System_Action_int__int__o *)sub_21FFEBC(System_Action_int__int__TypeInfo),
        System_Action_int__int____ctor(
          v17,
          (Il2CppObject *)this,
          Method_EventCraftListViewManager_OnClickSupportToolDecide__,
          0),
        !v10)
    || (EventCraftUseSupportToolDialogComponent__Open(v10, Item, name, supportTool, v17, v18),
        (maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, v19)) == 0) )
  {
LABEL_16:
    sub_21FFECC(maskPanel, obj);
  }
  monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
  this->fields.selectTradeGoodsEntity = monitor;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectTradeGoodsEntity,
    (int32_t)monitor,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
LABEL_6:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftListViewManager__OnClickSupportToolDecide(
        EventCraftListViewManager_o *this,
        int32_t storeIdx,
        int32_t goodsId,
        const MethodInfo *method)
{
  EventCraftUseSupportToolDialogComponent_o *craftUseSupportToolDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  struct ItemEntity_o *supportTool; // x8
  int32_t id; // w5

  if ( (byte_5932422 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventCraftListViewManager_TradeSupportToolResponse__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5932422 = 1;
  }
  craftUseSupportToolDialog = this->fields.craftUseSupportToolDialog;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
  EventCraftUseSupportToolDialogComponent__Close(craftUseSupportToolDialog, *(const MethodInfo **)&storeIdx);
  craftUseSupportToolDialog = (EventCraftUseSupportToolDialogComponent_o *)this->fields.maskPanel;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftUseSupportToolDialog, 1, 0);
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_TradeSupportToolResponse__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9, v10);
  craftUseSupportToolDialog = (EventCraftUseSupportToolDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                             v8,
                                                                             (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeStartRequest___);
  supportTool = this->fields.supportTool;
  if ( !supportTool )
  {
    id = 0;
    if ( craftUseSupportToolDialog )
      goto LABEL_9;
LABEL_11:
    sub_21FFECC(craftUseSupportToolDialog, *(_QWORD *)&storeIdx);
  }
  id = supportTool->fields.id;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
LABEL_9:
  TradeStartRequest__beginRequest(
    (TradeStartRequest_o *)craftUseSupportToolDialog,
    this->fields.currentEventId,
    storeIdx,
    goodsId,
    0,
    id,
    0);
}


void EventCraftListViewManager__OnClickTradeReplenishmentDecide(
        EventCraftListViewManager_o *this,
        System_Int32_array *tradeInfo,
        int32_t createNum,
        bool isUseSupportTool,
        const MethodInfo *method)
{
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x2
  int32_t v14; // w22
  int32_t v15; // w25
  TradeStartRequest_o *v16; // x23
  int32_t currentEventId; // w24

  if ( (byte_593241B & 1) == 0 )
  {
    sub_21FFC50(&Method_EventCraftListViewManager_TradeReplenishmentResponse__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_593241B = 1;
  }
  craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
  if ( !craftNumConfirmDialog )
    goto LABEL_14;
  EventCraftNumConfirmDialogComponent__Close(craftNumConfirmDialog, (const MethodInfo *)tradeInfo);
  craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( createNum > 0 )
  {
    if ( craftNumConfirmDialog )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 1, 0);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_EventCraftListViewManager_TradeReplenishmentResponse__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                         v10,
                                                                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeStartRequest___);
      if ( tradeInfo )
      {
        if ( LODWORD(tradeInfo->max_length) < 2 )
          sub_21FFED4(craftNumConfirmDialog);
        v15 = tradeInfo->m_Items[0];
        v14 = tradeInfo->m_Items[1];
        v16 = (TradeStartRequest_o *)craftNumConfirmDialog;
        currentEventId = this->fields.currentEventId;
        craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)EventCraftListViewManager__GetSupportToolItemId(
                                                                           this,
                                                                           isUseSupportTool,
                                                                           v13);
        if ( v16 )
        {
          TradeStartRequest__beginRequest(v16, currentEventId, v15, v14, createNum, (int32_t)craftNumConfirmDialog, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_21FFECC(craftNumConfirmDialog, tradeInfo);
  }
  if ( !craftNumConfirmDialog )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 0, 0);
}


void EventCraftListViewManager__OnClickWithdrawalButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_GameObject_o *maskPanel; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_GameObject_o **v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  unsigned int klass; // w8
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  const MethodInfo *v24; // x1
  EventCraftWithdrawConfirmDialogComponent_o *craftWithdrawConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  System_Action_bool__o *v27; // x23
  const MethodInfo *v28; // x3

  if ( (byte_593241D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickWithdrawalButton__);
    sub_21FFC50(&Method_EventCraftListViewManager___c__DisplayClass70_0__OnClickWithdrawalButton_b__0__);
    sub_21FFC50(&EventCraftListViewManager___c__DisplayClass70_0_TypeInfo);
    byte_593241D = 1;
  }
  v5 = sub_21FFEBC(EventCraftListViewManager___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = obj;
  v14 = (UnityEngine_GameObject_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)obj, v15, v16, v17, v18, v19, v20);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !*v14 )
    goto LABEL_16;
  klass = (unsigned int)(*v14)[5].klass;
  if ( klass >= 4 && (klass & 0xFFFFFFFE) == 4 )
  {
    v22 = Method_EventCraftListViewManager_OnClickWithdrawalButton__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_21FFC68(Method_EventCraftListViewManager_OnClickWithdrawalButton__);
    v23 = (System_Reflection_MethodBase_o *)sub_21FFC34(v22, v22[4]);
    OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0);
    EventCraftListViewManager__UpdateListObject(this, v24);
    maskPanel = (UnityEngine_GameObject_o *)this->fields.craftWithdrawConfirmDialog;
    if ( maskPanel )
    {
      EventCraftWithdrawConfirmDialogComponent__Init((EventCraftWithdrawConfirmDialogComponent_o *)maskPanel, v7);
      maskPanel = *v14;
      if ( *v14 )
      {
        craftWithdrawConfirmDialog = this->fields.craftWithdrawConfirmDialog;
        Item = EventCraftListViewObject__GetItem((EventCraftListViewObject_o *)maskPanel, v7);
        v27 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v27,
          (Il2CppObject *)v5,
          Method_EventCraftListViewManager___c__DisplayClass70_0__OnClickWithdrawalButton_b__0__,
          0);
        if ( craftWithdrawConfirmDialog )
        {
          EventCraftWithdrawConfirmDialogComponent__Open(craftWithdrawConfirmDialog, Item, v27, v28);
          goto LABEL_14;
        }
      }
    }
LABEL_16:
    sub_21FFECC(maskPanel, v7);
  }
LABEL_14:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


void EventCraftListViewManager__OnClickWithdrawalDecide(
        EventCraftListViewManager_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 craftWithdrawConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w20
  TradeReceiveRequest_o *v11; // x21
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  System_Int32_array *v13; // x22

  if ( (byte_593241F & 1) == 0 )
  {
    sub_21FFC50(&Method_EventCraftListViewManager_WithdrawalResponse__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_593241F = 1;
  }
  craftWithdrawConfirmDialog = (__int64)this->fields.craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  EventCraftWithdrawConfirmDialogComponent__Close(
    (EventCraftWithdrawConfirmDialogComponent_o *)craftWithdrawConfirmDialog,
    (const MethodInfo *)item);
  craftWithdrawConfirmDialog = (__int64)this->fields.maskPanel;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftWithdrawConfirmDialog, 1, 0);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_WithdrawalResponse__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  currentEventId = this->fields.currentEventId;
  v11 = (TradeReceiveRequest_o *)Request_object;
  craftWithdrawConfirmDialog = sub_21FFD10(int___TypeInfo, 1);
  if ( !item )
    goto LABEL_13;
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_13;
  v13 = (System_Int32_array *)craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  if ( !*(_DWORD *)(craftWithdrawConfirmDialog + 24) )
    sub_21FFED4(craftWithdrawConfirmDialog);
  *(_DWORD *)(craftWithdrawConfirmDialog + 32) = TradeInfo_k__BackingField->fields.storeIdx;
  craftWithdrawConfirmDialog = EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)item);
  if ( !v11 )
LABEL_13:
    sub_21FFECC(craftWithdrawConfirmDialog, item);
  TradeReceiveRequest__beginRequest(v11, currentEventId, v13, craftWithdrawConfirmDialog, 1, 0);
}


void EventCraftListViewManager__OnMoveEnd(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_593240D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593240D = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_21FFECC(0, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


void EventCraftListViewManager__OpenReconfirmDialog(
        EventCraftListViewManager_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BaseDialog_o *craftWithdrawConfirmDialog; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BaseDialog_o **v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v24; // x21
  System_String_o *v25; // x22
  System_String_o *v26; // x23
  System_String_o *v27; // x24
  CommonConfirmDialog_ClickDelegate_o *v28; // x25

  if ( (byte_593241E & 1) == 0 )
  {
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__0__);
    sub_21FFC50(&EventCraftListViewManager___c__DisplayClass71_0_TypeInfo);
    sub_21FFC50(&StringLiteral_14036/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3825/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_4056/*"CRAFT_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_593241E = 1;
  }
  v5 = sub_21FFEBC(EventCraftListViewManager___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  v14 = (BaseDialog_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)item, v15, v16, v17, v18, v19, v20);
  craftWithdrawConfirmDialog = (BaseDialog_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(craftWithdrawConfirmDialog, 0) )
    return;
  craftWithdrawConfirmDialog = *v14;
  if ( !*v14 )
    goto LABEL_12;
  *(_DWORD *)(v5 + 32) = EventCraftListViewItem__get_NowCompleteNum(
                           (EventCraftListViewItem_o *)craftWithdrawConfirmDialog,
                           v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_14036/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_4056/*"CRAFT_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3825/*"COMMON_CONFIRM_EXECUTE"*/, 0);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v28,
    (Il2CppObject *)v5,
    Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__0__,
    0);
  if ( !Instance )
LABEL_12:
    sub_21FFECC(craftWithdrawConfirmDialog, v7);
  CommonUI__OpenConfirmDialog_37291768((CommonUI_o *)Instance, v24, v25, v26, v27, 1, v28, 30, 26, 180.0, 13.0, 0, 0, 0);
}


void EventCraftListViewManager__OpenReplenishmentDialog(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventCraftListViewObject__o *ObjectList; // x20
  System_Func_object__bool__o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Entity; // x21
  EventCraftListViewItem_o *v13; // x20
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x23
  int32_t storeIdx; // w21
  ItemEntity_o *supportTool; // x22
  System_Action_T1__T2__T3__o *v18; // x24
  const MethodInfo *v19; // x6

  if ( (byte_5932419 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int____int__bool__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftListViewObject___);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__);
    sub_21FFC50(&Method_EventCraftListViewManager__OpenReplenishmentDialog_b__66_0__);
    sub_21FFC50(&System_Func_EventCraftListViewObject__bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932419 = 1;
  }
  if ( this->fields.selectTradeGoodsEntity )
  {
    ObjectList = EventCraftListViewManager__get_ObjectList(this, method);
    v4 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventCraftListViewObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v4,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager__OpenReplenishmentDialog_b__66_0__,
      0);
    v7 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
           (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
           (System_Func_TSource__bool__o *)v4,
           (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftListViewObject___);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_21;
    Entity = DataMasterBase_object__object__int___GetEntity(
               Master_object,
               this->fields.currentEventId,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Equality(
                                                                    (UnityEngine_Object_o *)v7,
                                                                    0,
                                                                    0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( !Entity )
        goto LABEL_21;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventEntity__IsEventPeriod(
                                                                      (EventEntity_o *)Entity,
                                                                      0,
                                                                      0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_21;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventCraftListViewObject__GetItem(
                                                                        (EventCraftListViewObject_o *)v7,
                                                                        v9);
        if ( !Master_object )
          goto LABEL_21;
        v13 = (EventCraftListViewItem_o *)Master_object;
        if ( Master_object[2].klass )
        {
          if ( EventCraftListViewItem__get_IsRefillable((EventCraftListViewItem_o *)Master_object, v9) )
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.craftNumConfirmDialog;
            if ( Master_object )
            {
              EventCraftNumConfirmDialogComponent__Init((EventCraftNumConfirmDialogComponent_o *)Master_object, v9);
              TradeInfo_k__BackingField = v13->fields._TradeInfo_k__BackingField;
              if ( TradeInfo_k__BackingField )
              {
                craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
                storeIdx = TradeInfo_k__BackingField->fields.storeIdx;
                supportTool = this->fields.supportTool;
                v18 = (System_Action_T1__T2__T3__o *)sub_21FFEBC(System_Action_int____int__bool__TypeInfo);
                System_Action_object__int__bool____ctor(
                  v18,
                  (Il2CppObject *)this,
                  Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__,
                  0);
                if ( craftNumConfirmDialog )
                {
                  EventCraftNumConfirmDialogComponent__Open(
                    craftNumConfirmDialog,
                    v13,
                    storeIdx,
                    supportTool,
                    (System_Action_int____int__bool__o *)v18,
                    1,
                    v19);
                  return;
                }
              }
            }
LABEL_21:
            sub_21FFECC(Master_object, v9);
          }
        }
      }
    }
  }
}


void EventCraftListViewManager__OpenRewardDialog(
        EventCraftListViewManager_o *this,
        EventCraftListViewManager_ResData_o *resData,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *v4; // x19
  struct EventCraftRewardDialogComponent_o *craftRewardDialog; // x21
  Il2CppObject *v6; // x0
  EventCraftRewardDialogComponent_o *v7; // x21
  int32_t currentEventId; // w22
  BattleDropItem_array *resultTradeRewardInfos; // x20
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x23
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v12; // x24
  System_Action_o *v13; // x25
  const MethodInfo *v14; // x7

  v4 = this;
  if ( (byte_5932418 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager_OpenReplenishmentDialog__);
    this = (EventCraftListViewManager_o *)sub_21FFC50(&Method_UnityEngine_GameObject_SetActive__);
    byte_5932418 = 1;
  }
  craftRewardDialog = v4->fields.craftRewardDialog;
  if ( !craftRewardDialog )
    goto LABEL_7;
  v6 = (Il2CppObject *)v4->fields.craftRewardDialog;
  craftRewardDialog->fields.state = 0;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull(v6, (const MethodInfo *)resData);
  BaseDialog__Init((BaseDialog_o *)craftRewardDialog, 0);
  if ( !resData )
    goto LABEL_7;
  v7 = v4->fields.craftRewardDialog;
  currentEventId = v4->fields.currentEventId;
  resultTradeRewardInfos = resData->fields.resultTradeRewardInfos;
  selectTradeGoodsEntity = v4->fields.selectTradeGoodsEntity;
  maskPanel = (Il2CppObject *)v4->fields.maskPanel;
  v12 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v12, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
  v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v4, Method_EventCraftListViewManager_OpenReplenishmentDialog__, 0);
  if ( !v7 )
LABEL_7:
    sub_21FFECC(this, resData);
  EventCraftRewardDialogComponent__Open(
    v7,
    currentEventId,
    resultTradeRewardInfos,
    selectTradeGoodsEntity,
    selectTradeGoodsEntity == 0,
    v12,
    v13,
    v14);
}


void EventCraftListViewManager__RequestListObject(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v6; // x1
  Il2CppObject *current; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v13; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593240A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__get_Current__);
    sub_21FFC50(&Method_EventCraftListViewManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCraftListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_593240A = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)EventCraftListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_21FFECC(0, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v6 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      v6);
    v12 = 0;
    v13 = &v14;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_EventCraftListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v9, v10);
      EventCraftListViewObject__Init((EventCraftListViewObject_o *)current, 2, v8, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventCraftListViewManager__ResponseCommonProcess(
        EventCraftListViewManager_o *this,
        bool isReceive,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_5932424 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5932424 = 1;
  }
  if ( !isReceive )
  {
    currencyInfoController = this->fields.currencyInfoController;
    if ( !currencyInfoController )
      goto LABEL_13;
    ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0);
  }
  EventCraftListViewManager__UpdateReceiveAllButtonState(this, (const MethodInfo *)isReceive);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  currencyInfoController = (ShopCurrencyInfoController_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !currencyInfoController )
    goto LABEL_13;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)currencyInfoController,
                                this->fields.currentEventId,
                                0);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tradeStoreEntities,
    (int32_t)OpenTradeStoreEntityArray,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  EventCraftListViewManager__UpdateCraftAbleCountLb(this, v15);
  currencyInfoController = (ShopCurrencyInfoController_o *)this->fields.touchPanel;
  if ( !currencyInfoController
    || (currencyInfoController = (ShopCurrencyInfoController_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)currencyInfoController,
                                                                   0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyInfoController, 0, 0),
        (currencyInfoController = (ShopCurrencyInfoController_o *)this->fields.maskPanel) == 0) )
  {
LABEL_13:
    sub_21FFECC(currencyInfoController, isReceive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyInfoController, 0, 0);
  EventCraftListViewManager__RequestListObject(this, v16);
  ActionExtensions__Call(this->fields.craftCallback, 0);
}


void EventCraftListViewManager__SetCraftObject(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *craftRewardDialog; // x20
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventCraftAssetManager_o *assetManager; // x8
  Il2CppObject *CraftRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *craftNumConfirmDialog; // x20
  __int64 v19; // x2
  struct EventCraftAssetManager_o *v20; // x8
  Il2CppObject *CraftItemNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *craftWithdrawConfirmDialog; // x20
  __int64 v31; // x2
  struct EventCraftAssetManager_o *v32; // x8
  Il2CppObject *CraftItemWithdrawConfirmDialog_k__BackingField; // x20
  Il2CppObject *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  const MethodInfo *v41; // x2
  UnityEngine_Object_o *craftUseSupportToolDialog; // x20
  __int64 v43; // x2
  struct EventCraftAssetManager_o *v44; // x8
  Il2CppObject *CraftUseSupportToolDialog_k__BackingField; // x20
  Il2CppObject *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  const MethodInfo *v53; // x2
  UnityEngine_Object_o *craftFirstTimeSupportToolDialog; // x20
  __int64 v55; // x2
  struct EventCraftAssetManager_o *v56; // x8
  Il2CppObject *CraftFirstTimeSupportToolDialog_k__BackingField; // x20
  Il2CppObject *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  const MethodInfo *v65; // x2

  if ( (byte_5932406 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventCraftFirstTimeSupportToolDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventCraftNumConfirmDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventCraftRewardDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventCraftUseSupportToolDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventCraftWithdrawConfirmDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932406 = 1;
  }
  craftRewardDialog = (UnityEngine_Object_o *)this->fields.craftRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftRewardDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_44;
    CraftRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._CraftRewardDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v5 = UnityEngine_Object__Instantiate_object_(
           CraftRewardDialog_k__BackingField,
           (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_44;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v5,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventCraftRewardDialogComponent___);
    this->fields.craftRewardDialog = (struct EventCraftRewardDialogComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.craftRewardDialog,
      (int32_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftRewardDialog,
      v17);
  }
  craftNumConfirmDialog = (UnityEngine_Object_o *)this->fields.craftNumConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftNumConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v20 = this->fields.assetManager;
    if ( !v20 )
      goto LABEL_44;
    CraftItemNumConfirmDialog_k__BackingField = (Il2CppObject *)v20->fields._CraftItemNumConfirmDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v19);
    v5 = UnityEngine_Object__Instantiate_object_(
           CraftItemNumConfirmDialog_k__BackingField,
           (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_44;
    v22 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v5,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventCraftNumConfirmDialogComponent___);
    this->fields.craftNumConfirmDialog = (struct EventCraftNumConfirmDialogComponent_o *)v22;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.craftNumConfirmDialog,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftNumConfirmDialog,
      v29);
  }
  craftWithdrawConfirmDialog = (UnityEngine_Object_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v19);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftWithdrawConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v32 = this->fields.assetManager;
    if ( !v32 )
      goto LABEL_44;
    CraftItemWithdrawConfirmDialog_k__BackingField = (Il2CppObject *)v32->fields._CraftItemWithdrawConfirmDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v31);
    v5 = UnityEngine_Object__Instantiate_object_(
           CraftItemWithdrawConfirmDialog_k__BackingField,
           (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_44;
    v34 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v5,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventCraftWithdrawConfirmDialogComponent___);
    this->fields.craftWithdrawConfirmDialog = (struct EventCraftWithdrawConfirmDialogComponent_o *)v34;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.craftWithdrawConfirmDialog,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftWithdrawConfirmDialog,
      v41);
  }
  craftUseSupportToolDialog = (UnityEngine_Object_o *)this->fields.craftUseSupportToolDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v31);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftUseSupportToolDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v44 = this->fields.assetManager;
    if ( !v44 )
      goto LABEL_44;
    CraftUseSupportToolDialog_k__BackingField = (Il2CppObject *)v44->fields._CraftUseSupportToolDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v43);
    v5 = UnityEngine_Object__Instantiate_object_(
           CraftUseSupportToolDialog_k__BackingField,
           (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_44;
    v46 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v5,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventCraftUseSupportToolDialogComponent___);
    this->fields.craftUseSupportToolDialog = (struct EventCraftUseSupportToolDialogComponent_o *)v46;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.craftUseSupportToolDialog,
      (int32_t)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftUseSupportToolDialog,
      v53);
  }
  craftFirstTimeSupportToolDialog = (UnityEngine_Object_o *)this->fields.craftFirstTimeSupportToolDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v43);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftFirstTimeSupportToolDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v56 = this->fields.assetManager;
    if ( v56 )
    {
      CraftFirstTimeSupportToolDialog_k__BackingField = (Il2CppObject *)v56->fields._CraftFirstTimeSupportToolDialog_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v55);
      v5 = UnityEngine_Object__Instantiate_object_(
             CraftFirstTimeSupportToolDialog_k__BackingField,
             (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v58 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v5,
                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventCraftFirstTimeSupportToolDialogComponent___);
        this->fields.craftFirstTimeSupportToolDialog = (struct EventCraftFirstTimeSupportToolDialogComponent_o *)v58;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.craftFirstTimeSupportToolDialog,
          (int32_t)v58,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        EventCraftListViewManager__LocateDialogToCraftPanel(
          this,
          (UnityEngine_Component_o *)this->fields.craftFirstTimeSupportToolDialog,
          v65);
        return;
      }
    }
LABEL_44:
    sub_21FFECC(v5, v6);
  }
}


void EventCraftListViewManager__SetObjectItem(
        EventCraftListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject_o *v4; // x20
  __int64 naturalAligment; // x11
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Action_object__o *v11; // x21
  System_Action_object__o *v12; // x22
  System_Action_object__o *v13; // x23
  System_Action_object__o *v14; // x24
  System_Action_object__o *v15; // x25
  const MethodInfo *v16; // x6

  v4 = obj;
  if ( (byte_593240B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_EventCraftListViewObject__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickCraftStartButton__);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickReceiveButton__);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickReplenishmentButton__);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickSupportToolButton__);
    sub_21FFC50(&Method_EventCraftListViewManager_OnClickWithdrawalButton__);
    sub_21FFC50(&Method_EventCraftListViewManager_OnMoveEnd__);
    sub_21FFC50(&EventCraftListViewObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593240B = 1;
  }
  if ( v4 )
  {
    naturalAligment = EventCraftListViewObject_TypeInfo->_2.naturalAligment;
    if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (EventCraftListViewObject_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != EventCraftListViewObject_TypeInfo )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, item);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0, 0) )
  {
    v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventCraftListViewManager_OnMoveEnd__, 0);
    if ( !v4 )
      sub_21FFECC(v8, v9);
    EventCraftListViewObject__Init((EventCraftListViewObject_o *)v4, 2, v7, v10);
    v11 = (System_Action_object__o *)sub_21FFEBC(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickCraftStartButton__,
      0);
    v12 = (System_Action_object__o *)sub_21FFEBC(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v12,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickReceiveButton__,
      0);
    v13 = (System_Action_object__o *)sub_21FFEBC(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickReplenishmentButton__,
      0);
    v14 = (System_Action_object__o *)sub_21FFEBC(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v14,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickWithdrawalButton__,
      0);
    v15 = (System_Action_object__o *)sub_21FFEBC(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v15,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickSupportToolButton__,
      0);
    EventCraftListViewObject__SetOnClickAction(
      (EventCraftListViewObject_o *)v4,
      (System_Action_EventCraftListViewObject__o *)v11,
      (System_Action_EventCraftListViewObject__o *)v12,
      (System_Action_EventCraftListViewObject__o *)v13,
      (System_Action_EventCraftListViewObject__o *)v14,
      (System_Action_EventCraftListViewObject__o *)v15,
      v16);
  }
}


void EventCraftListViewManager__SetReceiveAllButton(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t currentEventId; // w20
  UISprite_o *receiveAllButtonSprite; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *receiveAllButtonLabel; // x20
  __int64 receiveAllButton; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  struct EventCraftAssetManager_o *assetManager; // x8
  Il2CppObject *CraftButtonBlinkEffect_k__BackingField; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_Transform_o *v26; // x20

  if ( (byte_5932407 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3488/*"CHECK_TRADE_BUTTON_LABEL"*/);
    sub_21FFC50(&StringLiteral_18218/*"btn_getreward"*/);
    byte_5932407 = 1;
  }
  currentEventId = this->fields.currentEventId;
  receiveAllButtonSprite = this->fields.receiveAllButtonSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetEventUI_47538316(currentEventId, receiveAllButtonSprite, (System_String_o *)StringLiteral_18218/*"btn_getreward"*/, 0);
  receiveAllButtonLabel = this->fields.receiveAllButtonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  receiveAllButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3488/*"CHECK_TRADE_BUTTON_LABEL"*/, 0);
  if ( !receiveAllButtonLabel )
    goto LABEL_22;
  UILabel__set_text(receiveAllButtonLabel, (System_String_o *)receiveAllButton, 0);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  receiveAllButton = UnityEngine_Object__op_Equality(tradeButtonBlinkEffect, 0, 0);
  if ( (receiveAllButton & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( assetManager )
    {
      receiveAllButton = (__int64)this->fields.receiveAllButton;
      if ( receiveAllButton )
      {
        CraftButtonBlinkEffect_k__BackingField = (Il2CppObject *)assetManager->fields._CraftButtonBlinkEffect_k__BackingField;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)receiveAllButton, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
        v19 = UnityEngine_Object__Instantiate_object__59506996(
                CraftButtonBlinkEffect_k__BackingField,
                transform,
                (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
        this->fields.tradeButtonBlinkEffect = (struct UnityEngine_GameObject_o *)v19;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.tradeButtonBlinkEffect,
          (int32_t)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        receiveAllButton = (__int64)this->fields.tradeButtonBlinkEffect;
        if ( receiveAllButton )
        {
          receiveAllButton = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)receiveAllButton,
                                        0);
          v26 = (UnityEngine_Transform_o *)receiveAllButton;
          if ( !byte_5931945 )
          {
            receiveAllButton = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931945 = 1;
          }
          if ( v26 )
          {
            UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            receiveAllButton = (__int64)this->fields.tradeButtonBlinkEffect;
            if ( receiveAllButton )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButton, 0, 0);
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_22:
    sub_21FFECC(receiveAllButton, v10);
  }
LABEL_21:
  EventCraftListViewManager__UpdateReceiveAllButtonState(this, v10);
}


void EventCraftListViewManager__TradeReceiveResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  System_Object_array *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_5932417 & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5932417 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    v7 = (Il2CppObject *)System_String__Concat_75481624(
                           (System_String_o *)StringLiteral_16395/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16659/*"]"*/,
                           0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5, v6);
    v8 = JsonManager__DeserializeArray_object_(
           v7,
           (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    if ( !v8 )
      sub_21FFECC(0, v9);
    if ( !LODWORD(v8->max_length) )
      sub_21FFED4(v8);
    EventCraftListViewManager__OpenRewardDialog(this, (EventCraftListViewManager_ResData_o *)v8->m_Items[0], v10);
    EventCraftListViewManager__ResponseCommonProcess(this, 1, v11);
  }
}


void EventCraftListViewManager__TradeReplenishmentResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x0
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20
  const MethodInfo *v9; // x2

  if ( (byte_593241C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593241C = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
    if ( !selectTradeGoodsEntity
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          selectTradeGoodsEntity = (EventTradeGoodsEntity_o *)EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
                                                                selectTradeGoodsEntity,
                                                                0),
          !playVoiceAction) )
    {
      sub_21FFECC(selectTradeGoodsEntity, v5);
    }
    ((void (__fastcall *)(intptr_t, _QWORD, EventTradeGoodsEntity_o *, _QWORD, intptr_t))playVoiceAction->fields.invoke_impl)(
      playVoiceAction->fields.method_code,
      svtId,
      selectTradeGoodsEntity,
      0,
      playVoiceAction->fields.method);
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v9);
  }
}


void EventCraftListViewManager__TradeSupportToolResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_5932423 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_5932423 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v5);
}


bool EventCraftListViewManager__TryGetAvailableStoreIdx(
        EventCraftListViewManager_o *this,
        int32_t *storeIdx,
        const MethodInfo *method)
{
  int32_t *v3; // x22
  DataManager_c *v5; // x0
  int v6; // w8
  UserEventTradeMaster_o *Master_object; // x0
  __int64 v8; // x1
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x24
  unsigned __int64 v10; // x25
  __int64 v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  EventTradeStoreEntity_o *v18; // x1
  EventTradeStoreEntity_o **v19; // x21
  System_Int32_array *v20; // x22
  System_Func_int__bool__o *v21; // x23
  struct EventTradeStoreEntity_array *v22; // x8
  il2cpp_array_size_t max_length; // x9
  EventTradeStoreEntity_o *v24; // x8
  bool result; // w0
  int32_t *v26; // [xsp+8h] [xbp-78h]
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-70h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  v3 = storeIdx;
  if ( (byte_593240F & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager___c__DisplayClass56_0__TryGetAvailableStoreIdx_b__0__);
    sub_21FFC50(&EventCraftListViewManager___c__DisplayClass56_0_TypeInfo);
    byte_593240F = 1;
  }
  v5 = DataManager_TypeInfo;
  *v3 = -1;
  v6 = *(&v5->_2.cctor_finished + 1);
  usedStoreIdx = 0;
  entity = 0;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(v5, storeIdx, method);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Master_object = (UserEventTradeMaster_o *)UserEventTradeMaster__TryGetEntity(
                                              Master_object,
                                              &entity,
                                              this->fields.currentEventId,
                                              0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    Master_object = (UserEventTradeMaster_o *)entity;
    if ( !entity )
      goto LABEL_24;
    Master_object = (UserEventTradeMaster_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0);
    tradeStoreEntities = this->fields.tradeStoreEntities;
    if ( !tradeStoreEntities )
      goto LABEL_24;
    if ( SLODWORD(tradeStoreEntities->max_length) >= 1 )
    {
      v26 = v3;
      v10 = 0;
      while ( 1 )
      {
        v11 = sub_21FFEBC(EventCraftListViewManager___c__DisplayClass56_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v11, 0);
        if ( v10 >= LODWORD(tradeStoreEntities->max_length) )
          goto LABEL_25;
        if ( !v11 )
          goto LABEL_24;
        v18 = tradeStoreEntities->m_Items[v10];
        *(_QWORD *)(v11 + 16) = v18;
        v19 = (EventTradeStoreEntity_o **)(v11 + 16);
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)v18, v12, v13, v14, v15, v16, v17);
        v20 = usedStoreIdx;
        v21 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v21,
          (Il2CppObject *)v11,
          Method_EventCraftListViewManager___c__DisplayClass56_0__TryGetAvailableStoreIdx_b__0__,
          0);
        Master_object = (UserEventTradeMaster_o *)BasicHelper__Any_int__58574768(
                                                    v20,
                                                    (System_Func_T__bool__o *)v21,
                                                    (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        if ( (__int64)++v10 >= SLODWORD(tradeStoreEntities->max_length) )
          return 0;
      }
      v24 = *v19;
      v3 = v26;
      if ( !*v19 )
        goto LABEL_24;
LABEL_20:
      result = 1;
      *v3 = v24->fields.idx;
      return result;
    }
  }
  else
  {
    v22 = this->fields.tradeStoreEntities;
    if ( !v22 )
      goto LABEL_24;
    max_length = v22->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
LABEL_25:
        sub_21FFED4(Master_object);
      v24 = v22->m_Items[0];
      if ( !v24 )
LABEL_24:
        sub_21FFECC(Master_object, v8);
      goto LABEL_20;
    }
  }
  return 0;
}


void EventCraftListViewManager__UpdateCraftAbleCountLb(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventCraftListViewManager_o *v3; // x19
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x8
  int max_length; // w22
  __int64 v6; // x2
  int v7; // w8
  int v8; // w21
  UILabel_o *craftAbleCountLb; // x19
  System_String_o **v10; // x8
  System_String_o *v11; // x20
  System_String_o *v12; // x20
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x0
  int v15; // [xsp+8h] [xbp-48h] BYREF
  int v16; // [xsp+Ch] [xbp-44h] BYREF
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-40h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_5932428 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_4053/*"CRAFT_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/);
    this = (EventCraftListViewManager_o *)sub_21FFC50(&StringLiteral_4052/*"CRAFT_EVENT_TITLE_QUOTA_LABEL"*/);
    byte_5932428 = 1;
  }
  tradeStoreEntities = v3->fields.tradeStoreEntities;
  usedStoreIdx = 0;
  entity = 0;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  this = (EventCraftListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !this )
    goto LABEL_20;
  if ( !UserEventTradeMaster__TryGetEntity((UserEventTradeMaster_o *)this, &entity, v3->fields.currentEventId, 0) )
    goto LABEL_12;
  this = (EventCraftListViewManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  this = (EventCraftListViewManager_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !usedStoreIdx )
      goto LABEL_20;
    v7 = usedStoreIdx->max_length;
  }
  else
  {
LABEL_12:
    v7 = 0;
  }
  v8 = max_length - v7;
  craftAbleCountLb = v3->fields.craftAbleCountLb;
  v10 = (System_String_o **)(max_length == v7 ? &StringLiteral_4053/*"CRAFT_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_4052/*"CRAFT_EVENT_TITLE_QUOTA_LABEL"*/);
  v11 = *v10;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v6);
  v12 = LocalizationManager__Get(v11, 0);
  v16 = v8;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v16);
  v15 = max_length;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v15);
  this = (EventCraftListViewManager_o *)System_String__Format_75484576(v12, v13, v14, 0);
  if ( !craftAbleCountLb )
LABEL_20:
    sub_21FFECC(this, method);
  UILabel__set_text(craftAbleCountLb, (System_String_o *)this, 0);
}


void EventCraftListViewManager__UpdateListObject(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x19
  EventCraftListViewItem_o *Item; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v11; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_593240C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
    byte_593240C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)EventCraftListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    ObjectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
  v10 = 0;
  v11 = &v12;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__);
    if ( !v5 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_21FFECC(v5, v6);
    Item = EventCraftListViewObject__GetItem((EventCraftListViewObject_o *)v12.fields._current, v6);
    EventCraftListViewObject__UpdateItem((EventCraftListViewObject_o *)current, Item, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
}


void EventCraftListViewManager__UpdateNoticeButtonDisplay(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  UISprite_o *craftNoticeBtnSp; // x0
  __int64 *v4; // x8

  if ( (byte_5932427 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5932427 = 1;
  }
  craftNoticeBtnSp = this->fields.craftNoticeBtnSp;
  if ( !craftNoticeBtnSp )
    sub_21FFECC(0, method);
  v4 = &StringLiteral_18236/*"btn_off"*/;
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_18237/*"btn_on"*/;
  UISprite__set_spriteName(craftNoticeBtnSp, (System_String_o *)*v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftListViewManager__UpdateReceiveAllButtonState(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_T__o *itemList; // x20
  EventCraftListViewManager___c_c *v5; // x0
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__49_0; // x21
  Il2CppObject *v8; // x22
  struct EventCraftListViewManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  UIWidget_o *receiveAllButton; // x0
  float v18; // s0 OVERLAPPED
  float v19; // s3
  float v20; // s1
  float v21; // s2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21

  if ( (byte_5932408 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_ListViewItem___);
    sub_21FFC50(&System_Func_ListViewItem__bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager___c__UpdateReceiveAllButtonState_b__49_0__);
    sub_21FFC50(&EventCraftListViewManager___c_TypeInfo);
    byte_5932408 = 1;
  }
  itemList = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  if ( itemList )
  {
    v5 = EventCraftListViewManager___c_TypeInfo;
    if ( !*(&EventCraftListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo, method, v2);
      v5 = EventCraftListViewManager___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__49_0 = (System_Func_object__bool__o *)static_fields->__9__49_0;
    if ( !_9__49_0 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, method, v2);
        static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__49_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ListViewItem__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__49_0,
        v8,
        Method_EventCraftListViewManager___c__UpdateReceiveAllButtonState_b__49_0__,
        0);
      v9 = EventCraftListViewManager___c_TypeInfo->static_fields;
      v9->__9__49_0 = (struct System_Func_ListViewItem__bool__o *)_9__49_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__49_0, (int32_t)_9__49_0, v10, v11, v12, v13, v14, v15);
    }
    LOBYTE(itemList) = BasicHelper__Any_object_(
                         itemList,
                         (System_Func_T__bool__o *)_9__49_0,
                         (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ListViewItem___);
    if ( ((unsigned __int8)itemList & 1) != 0 )
      v16 = 0;
    else
      v16 = 3;
  }
  else
  {
    v16 = 3;
  }
  receiveAllButton = (UIWidget_o *)this->fields.receiveAllButton;
  if ( !receiveAllButton )
    goto LABEL_24;
  ((void (__fastcall *)(UIWidget_o *, __int64, __int64, const MethodInfo *))receiveAllButton->klass->vtable._14_OnEnable.methodPtr)(
    receiveAllButton,
    v16,
    1,
    receiveAllButton->klass->vtable._14_OnEnable.method);
  receiveAllButton = (UIWidget_o *)this->fields.receiveAllButtonLabel;
  if ( !receiveAllButton )
    goto LABEL_24;
  v18 = 0.5;
  v19 = 1.0;
  if ( ((unsigned __int8)itemList & 1) != 0 )
    v18 = 1.0;
  v20 = v18;
  v21 = v18;
  UIWidget__set_color(receiveAllButton, *(UnityEngine_Color_o *)&v18, 0);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0, 0) )
  {
    receiveAllButton = (UIWidget_o *)this->fields.tradeButtonBlinkEffect;
    if ( receiveAllButton )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButton, (unsigned __int8)itemList & 1, 0);
      return;
    }
LABEL_24:
    sub_21FFECC(receiveAllButton, v16);
  }
}


void EventCraftListViewManager__WithdrawalResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  System_Object_array *v8; // x0
  EventCraftListViewManager_ResData_o *v9; // x1
  const MethodInfo *v10; // x2
  struct BattleDropItem_array *resultTradeRewardInfos; // x8

  if ( (byte_5932420 & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5932420 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    v7 = (Il2CppObject *)System_String__Concat_75481624(
                           (System_String_o *)StringLiteral_16395/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16659/*"]"*/,
                           0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5, v6);
    v8 = JsonManager__DeserializeArray_object_(
           v7,
           (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    if ( !v8 )
      goto LABEL_13;
    if ( !LODWORD(v8->max_length) )
      sub_21FFED4(v8);
    v9 = (EventCraftListViewManager_ResData_o *)v8->m_Items[0];
    if ( !v9 || (resultTradeRewardInfos = v9->fields.resultTradeRewardInfos) == 0 )
LABEL_13:
      sub_21FFECC(v8, v9);
    if ( resultTradeRewardInfos->max_length )
      EventCraftListViewManager__OpenRewardDialog(this, v9, v10);
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v10);
  }
}


void EventCraftListViewManager___OnClickCraftStartButton_b__57_0(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_21FFECC(0, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


bool EventCraftListViewManager___OpenReplenishmentDialog_b__66_0(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *x,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *v3; // x19
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  struct EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x9

  if ( !x
    || (v3 = this,
        (this = (EventCraftListViewManager_o *)EventCraftListViewObject__GetItem(x, (const MethodInfo *)x)) == 0)
    || (dropList = this->fields.dropList) == 0
    || (selectTradeGoodsEntity = v3->fields.selectTradeGoodsEntity) == 0 )
  {
    sub_21FFECC(this, x);
  }
  return LODWORD(dropList->fields._items) == selectTradeGoodsEntity->fields.id;
}


int32_t EventCraftListViewManager__get_ItemBaseWindowHeight(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_21FFECC(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventCraftListViewObject__o *EventCraftListViewManager__get_ObjectList(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Generic_List_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_List_TSource__o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  EventCraftListViewManager___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__41_0; // x21
  Il2CppObject *v20; // x22
  struct EventCraftListViewManager___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_T__o *v28; // x20
  System_Action_object__o *v29; // x21

  if ( (byte_5932402 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_GameObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_GameObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_21FFC50(&System_Func_GameObject__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventCraftListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventCraftListViewObject__TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager___c__get_ObjectList_b__41_0__);
    sub_21FFC50(&Method_EventCraftListViewManager___c__DisplayClass41_0__get_ObjectList_b__1__);
    sub_21FFC50(&EventCraftListViewManager___c__DisplayClass41_0_TypeInfo);
    sub_21FFC50(&EventCraftListViewManager___c_TypeInfo);
    byte_5932402 = 1;
  }
  v3 = sub_21FFEBC(EventCraftListViewManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventCraftListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventCraftListViewObject___ctor__);
  if ( !v3 )
    sub_21FFECC(v5, v6);
  *(_QWORD *)(v3 + 16) = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  v13 = System_Linq_Enumerable__ToList_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.objectList,
          (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v16 = EventCraftListViewManager___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !*(&EventCraftListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo, v14, v15);
    v16 = EventCraftListViewManager___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__41_0 = (System_Func_object__bool__o *)static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v14, v15);
      static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_0, v20, Method_EventCraftListViewManager___c__get_ObjectList_b__41_0__, 0);
    v21 = EventCraftListViewManager___c_TypeInfo->static_fields;
    v21->__9__41_0 = (struct System_Func_GameObject__bool__o *)_9__41_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__41_0, (int32_t)_9__41_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v17,
                                                         (System_Func_TSource__bool__o *)_9__41_0,
                                                         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v29 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v3,
    Method_EventCraftListViewManager___c__DisplayClass41_0__get_ObjectList_b__1__,
    0);
  BasicHelper__ForEach_object_(
    v28,
    (System_Action_T__o *)v29,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_GameObject___);
  return *(System_Collections_Generic_List_EventCraftListViewObject__o **)(v3 + 16);
}


void EventCraftListViewManager_ResData___ctor(EventCraftListViewManager_ResData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45___ctor(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45__MoveNext(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *v3; // x19
  int32_t _1__state; // w22
  struct EventCraftListViewManager_o *_4__this; // x20
  BaseDialog_o *craftFirstTimeSupportToolDialog; // x19
  const MethodInfo *v7; // x3
  EventCraftListViewManager___c_c *v8; // x0
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__45_0; // x20
  Il2CppObject *v11; // x21
  struct EventCraftListViewManager___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_WaitWhile_o *v19; // x21
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v3 = this;
  if ( (byte_5932432 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_EventCraftListViewManager___c__CoFirstTimeDialogOpenAfterLoginBonus_b__45_0__);
    sub_21FFC50(&EventCraftListViewManager___c_TypeInfo);
    this = (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)sub_21FFC50(&UnityEngine_WaitWhile_TypeInfo);
    byte_5932432 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = v3->fields.__4__this;
      v3->fields.__1__state = -1;
      if ( !_4__this
        || (craftFirstTimeSupportToolDialog = (BaseDialog_o *)_4__this->fields.craftFirstTimeSupportToolDialog) == 0
        || (EventCraftListViewManager__CheckIsSerializeFieldNotNull(
              (Il2CppObject *)_4__this->fields.craftFirstTimeSupportToolDialog,
              method),
            BaseDialog__Init(craftFirstTimeSupportToolDialog, 0),
            (this = (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)_4__this->fields.craftFirstTimeSupportToolDialog) == 0) )
      {
        sub_21FFECC(this, method);
      }
      EventCraftFirstTimeSupportToolDialogComponent__Open(
        (EventCraftFirstTimeSupportToolDialogComponent_o *)this,
        _4__this->fields.supportTool,
        0,
        v7);
    }
  }
  else
  {
    v3->fields.__1__state = -1;
    v8 = EventCraftListViewManager___c_TypeInfo;
    if ( !*(&EventCraftListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo, method, v2);
      v8 = EventCraftListViewManager___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__45_0 = static_fields->__9__45_0;
    if ( !_9__45_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, method, v2);
        static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__45_0 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        _9__45_0,
        v11,
        Method_EventCraftListViewManager___c__CoFirstTimeDialogOpenAfterLoginBonus_b__45_0__,
        0);
      v12 = EventCraftListViewManager___c_TypeInfo->static_fields;
      v12->__9__45_0 = _9__45_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__45_0, (int32_t)_9__45_0, v13, v14, v15, v16, v17, v18);
    }
    v19 = (UnityEngine_WaitWhile_o *)sub_21FFEBC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v19, _9__45_0, 0);
    v3->fields.__2__current = (Il2CppObject *)v19;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
    sub_21FFBF4(p__2__current, (int32_t)v19, v21, v22, v23, v24, v25, v26);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
}


Il2CppObject *EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45__System_Collections_IEnumerator_Reset(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45__System_Collections_IEnumerator_get_Current(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45__System_IDisposable_Dispose(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void EventCraftListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593242A & 1) == 0 )
  {
    sub_21FFC50(&EventCraftListViewManager___c_TypeInfo);
    byte_593242A = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventCraftListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftListViewManager___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventCraftListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventCraftListViewManager___c___ctor(EventCraftListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCraftListViewManager___c___CoFirstTimeDialogOpenAfterLoginBonus_b__45_0(
        EventCraftListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalSceneComponent_c *v10; // x0
  struct TerminalSceneComponent_o *v11; // x8

  if ( (byte_593242C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ScrTerminalMap_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593242C = 1;
  }
  if ( !*(&ScrTerminalMap_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo, method, v2);
  if ( ScrTerminalMap__IsDialogOnActive(0) )
    return 1;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v3, v4);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v9);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v10 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8, v9);
    v10 = TerminalSceneComponent_TypeInfo;
  }
  v11 = v10->static_fields->mInstance;
  if ( !v11 )
    sub_21FFECC(v10, v8);
  return v11->fields._IsPlayingCampaignDirectBonus_k__BackingField;
}


bool EventCraftListViewManager___c___UpdateReceiveAllButtonState_b__49_0(
        EventCraftListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  const MethodInfo *v6; // x1
  __int64 v7; // x8

  if ( (byte_593242D & 1) == 0 )
  {
    sub_21FFC50(&EventCraftListViewItem_TypeInfo);
    byte_593242D = 1;
  }
  if ( !item )
    return 0;
  naturalAligment = EventCraftListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventCraftListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventCraftListViewItem_TypeInfo )
    return 0;
  EventCraftListViewItem__UpdateCraftUserInfo((EventCraftListViewItem_o *)item, (const MethodInfo *)item);
  v7 = *(_QWORD *)&item[1].fields.sortIndex;
  if ( !v7 )
    return 0;
  if ( *(int *)(v7 + 32) <= 0 )
    return EventCraftListViewItem__get_NowCompleteNum((EventCraftListViewItem_o *)item, v6) > 0;
  return 1;
}


bool EventCraftListViewManager___c___get_ObjectList_b__41_0(
        EventCraftListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_593242B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593242B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go, method);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0, 0);
}


void EventCraftListViewManager___c__DisplayClass41_0___ctor(
        EventCraftListViewManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftListViewManager___c__DisplayClass41_0___get_ObjectList_b__1(
        EventCraftListViewManager___c__DisplayClass41_0_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  EventCraftListViewManager___c__DisplayClass41_0_o *v4; // x19
  System_Collections_Generic_List_object__o *list; // x19
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  EventCraftListViewManager___c__DisplayClass41_0_o *v15; // x1
  Il2CppClass **v16; // x0

  v4 = this;
  if ( (byte_593242E & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___);
    this = (EventCraftListViewManager___c__DisplayClass41_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_EventCraftListViewObject__Add__);
    byte_593242E = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventCraftListViewManager___c__DisplayClass41_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      go,
                                                                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___),
        !list)
    || (items = list->fields._items,
        v13 = Method_System_Collections_Generic_List_EventCraftListViewObject__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_21FFECC(this, go);
  }
  size = list->fields._size;
  v15 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v15;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 4), (int32_t)v15, v6, v7, v8, v9, v10, v11);
  }
}


void EventCraftListViewManager___c__DisplayClass44_0___ctor(
        EventCraftListViewManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCraftListViewManager___c__DisplayClass44_0___Init_b__0(
        EventCraftListViewManager___c__DisplayClass44_0_o *this,
        ItemEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return ItemEntity__GetEventId(x, 0) == this->fields.eventId;
}


void EventCraftListViewManager___c__DisplayClass44_0___Init_b__1(
        EventCraftListViewManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *_4__this; // x0
  EventCraftListViewManager_o *v4; // x19
  System_Collections_IEnumerator_o *TimeDialogOpenAfterLoginBonus; // x1

  if ( (byte_593242F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5006/*"CraftFirstTimeSupportToolDisplay"*/);
    byte_593242F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  EventCraftListViewManager__SetCraftObject(_4__this, method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  EventCraftListViewManager__SetReceiveAllButton(_4__this, method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  EventCraftListViewManager__CreateList(_4__this, method);
  if ( !UnityEngine_PlayerPrefs__GetInt_83183516((System_String_o *)StringLiteral_5006/*"CraftFirstTimeSupportToolDisplay"*/, 0) && this->fields.isGetEntity )
  {
    _4__this = (EventCraftListViewManager_o *)this->fields.eventEntity;
    if ( !_4__this )
      goto LABEL_13;
    if ( EventEntity__IsEventPeriod((EventEntity_o *)_4__this, 0, 0) )
    {
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5006/*"CraftFirstTimeSupportToolDisplay"*/, 1, 0);
      UnityEngine_PlayerPrefs__Save(0);
      v4 = this->fields.__4__this;
      if ( v4 )
      {
        TimeDialogOpenAfterLoginBonus = EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus(v4, method);
        UnityEngine_MonoBehaviour__StartCoroutine_83231452(
          (UnityEngine_MonoBehaviour_o *)v4,
          TimeDialogOpenAfterLoginBonus,
          0);
        return;
      }
LABEL_13:
      sub_21FFECC(_4__this, method);
    }
  }
}


void EventCraftListViewManager___c__DisplayClass56_0___ctor(
        EventCraftListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventCraftListViewManager___c__DisplayClass56_0___TryGetAvailableStoreIdx_b__0(
        EventCraftListViewManager___c__DisplayClass56_0_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct EventTradeStoreEntity_o *storeEntity; // x8

  storeEntity = this->fields.storeEntity;
  if ( !storeEntity )
    sub_21FFECC(this, *(_QWORD *)&idx);
  return storeEntity->fields.idx == idx;
}


void EventCraftListViewManager___c__DisplayClass70_0___ctor(
        EventCraftListViewManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftListViewManager___c__DisplayClass70_0___OnClickWithdrawalButton_b__0(
        EventCraftListViewManager___c__DisplayClass70_0_o *this,
        bool value,
        const MethodInfo *method)
{
  struct EventCraftListViewManager_o *_4__this; // x19
  const MethodInfo *v4; // x2

  _4__this = this->fields.__4__this;
  if ( value )
  {
    this = (EventCraftListViewManager___c__DisplayClass70_0_o *)this->fields.obj;
    if ( this )
    {
      this = (EventCraftListViewManager___c__DisplayClass70_0_o *)EventCraftListViewObject__GetItem(
                                                                    (EventCraftListViewObject_o *)this,
                                                                    (const MethodInfo *)value);
      if ( _4__this )
      {
        EventCraftListViewManager__OpenReconfirmDialog(_4__this, (EventCraftListViewItem_o *)this, v4);
        return;
      }
    }
LABEL_8:
    sub_21FFECC(this, value);
  }
  if ( !_4__this )
    goto LABEL_8;
  this = (EventCraftListViewManager___c__DisplayClass70_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventCraftListViewManager___c__DisplayClass71_0___ctor(
        EventCraftListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftListViewManager___c__DisplayClass71_0___OpenReconfirmDialog_b__0(
        EventCraftListViewManager___c__DisplayClass71_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_476E8C0 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_5932430 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventCraftListViewManager___c__DisplayClass71_1__OpenReconfirmDialog_b__1__);
    sub_21FFC50(&EventCraftListViewManager___c__DisplayClass71_1_TypeInfo);
    byte_5932430 = 1;
  }
  v5 = sub_21FFEBC(EventCraftListViewManager___c__DisplayClass71_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
        *(_BYTE *)(v5 + 16) = decide,
        Instance = SingletonMonoBehaviour_object___get_Instance(v14),
        v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_EventCraftListViewManager___c__DisplayClass71_1__OpenReconfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_21FFECC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37292452((CommonUI_o *)Instance, v16, 0);
}


void EventCraftListViewManager___c__DisplayClass71_0___OpenReconfirmDialog_b__2(
        EventCraftListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  EventCraftListViewManager__OnClickWithdrawalDecide(this->fields.__4__this, this->fields.item, v2);
}


void EventCraftListViewManager___c__DisplayClass71_1___ctor(
        EventCraftListViewManager___c__DisplayClass71_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventCraftListViewManager___c__DisplayClass71_1___OpenReconfirmDialog_b__1(
        EventCraftListViewManager___c__DisplayClass71_1_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventCraftListViewManager___c__DisplayClass71_1_o *v8; // x19
  struct EventCraftListViewManager___c__DisplayClass71_0_o *CS___8__locals1; // x8
  struct EventCraftListViewItem_o *item; // x9
  struct EventCraftListViewManager_o *_4__this; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventCraftListViewManager___c__DisplayClass71_0_o *v13; // x8
  int32_t oldCompleteNum; // w20
  const MethodInfo *v15; // x2
  struct EventCraftListViewManager___c__DisplayClass71_0_o *v16; // x8
  struct EventCraftListViewManager_o *v17; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x21
  System_String_o *v21; // x20
  struct EventCraftListViewManager___c__DisplayClass71_0_o *v22; // x23
  EventCraftListViewManager___c__DisplayClass71_1_o *v23; // x19
  System_Action_o *_9__2; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  v8 = this;
  if ( (byte_5932431 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__2__);
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)sub_21FFC50(&StringLiteral_4047/*"CRAFT_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_5932431 = 1;
  }
  CS___8__locals1 = v8->fields.CS___8__locals1;
  if ( v8->fields.decide )
  {
    if ( !CS___8__locals1 )
      goto LABEL_24;
    item = CS___8__locals1->fields.item;
    if ( !item )
      goto LABEL_24;
    _4__this = CS___8__locals1->fields.__4__this;
    if ( !_4__this )
      goto LABEL_24;
    TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
    _4__this->fields.selectTradeGoodsEntity = TradeGoodsEntity_k__BackingField;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.selectTradeGoodsEntity,
      (int32_t)TradeGoodsEntity_k__BackingField,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v13 = v8->fields.CS___8__locals1;
    if ( !v13 )
      goto LABEL_24;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)v13->fields.item;
    if ( !this )
      goto LABEL_24;
    oldCompleteNum = v13->fields.oldCompleteNum;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)EventCraftListViewItem__get_NowCompleteNum(
                                                                  (EventCraftListViewItem_o *)this,
                                                                  method);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v16 = v8->fields.CS___8__locals1;
      if ( v16 )
      {
        this = (EventCraftListViewManager___c__DisplayClass71_1_o *)v16->fields.__4__this;
        if ( this )
        {
          EventCraftListViewManager__OnClickWithdrawalDecide((EventCraftListViewManager_o *)this, v16->fields.item, v15);
          return;
        }
      }
LABEL_24:
      sub_21FFECC(this, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = **(System_String_o ***)(qword_594C0B8 + 184);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_4047/*"CRAFT_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
                                                                  0);
    v22 = v8->fields.CS___8__locals1;
    if ( !v22 )
      goto LABEL_24;
    v23 = this;
    _9__2 = v22->fields.__9__2;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v22,
        Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__2__,
        0);
      v22->fields.__9__2 = _9__2;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->fields.__9__2, (int32_t)_9__2, v25, v26, v27, v28, v29, v30);
    }
    if ( !Instance )
      goto LABEL_24;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v21,
      (System_String_o *)v23,
      _9__2,
      -1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      -2.0,
      0,
      0);
  }
  else
  {
    if ( !CS___8__locals1 )
      goto LABEL_24;
    v17 = CS___8__locals1->fields.__4__this;
    if ( !v17 )
      goto LABEL_24;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)v17->fields.craftWithdrawConfirmDialog;
    if ( !this )
      goto LABEL_24;
    EventCraftWithdrawConfirmDialogComponent__Close((EventCraftWithdrawConfirmDialogComponent_o *)this, method);
  }
}
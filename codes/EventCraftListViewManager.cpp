void __fastcall EventCraftListViewManager___ctor(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventCraftListViewManager__CheckIsSerializeFieldNotNull(
        Il2CppObject *targetObj,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  int monitor; // w8
  Il2CppObject *v7; // x20
  unsigned int v8; // w24
  System_Reflection_MemberInfo_o *v9; // x21
  intptr_t v10; // w22
  System_Type_o *TypeFromHandle; // x0
  int v12; // w22
  __int64 v13; // x23
  System_RuntimeTypeHandle_o v14; // 0:w0.4
  System_RuntimeTypeHandle_o v15; // 0:w0.4

  v2 = targetObj;
  if ( (byte_4B2076D & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_var, method);
    sub_1BCAFF8(&UnityEngine_SerializeField_var, v3);
    targetObj = (Il2CppObject *)sub_1BCAFF8(&System_Type_TypeInfo, v4);
    byte_4B2076D = 1;
  }
  if ( !v2 )
    goto LABEL_17;
  targetObj = (Il2CppObject *)System_Object__GetType(v2, 0LL);
  if ( !targetObj )
    goto LABEL_17;
  targetObj = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, __int64, Il2CppMethodPointer))targetObj->klass->vtable[88].method)(
                                targetObj,
                                60LL,
                                targetObj->klass->vtable[89].methodPtr);
  if ( !targetObj )
    goto LABEL_17;
  monitor = (int)targetObj[1].monitor;
  v7 = targetObj;
  if ( monitor >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= monitor )
        sub_1BCB25C(targetObj, method, v5);
      v9 = (System_Reflection_MemberInfo_o *)*((_QWORD *)&v7[2].klass + (int)v8);
      v10 = (int)UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v14.fields.value = v10;
      TypeFromHandle = System_Type__GetTypeFromHandle(v14, 0LL);
      targetObj = (Il2CppObject *)System_Reflection_CustomAttributeExtensions__IsDefined(v9, TypeFromHandle, 0LL);
      if ( !v9 )
        break;
      v12 = (int)targetObj;
      v13 = ((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, void *))v9->klass[1]._1.namespaze)(
              v9,
              v9->klass[1]._1.byval_arg.data);
      v15.fields.value = (int)UnityEngine_Object_var;
      targetObj = (Il2CppObject *)System_Type__GetTypeFromHandle(v15, 0LL);
      if ( !v13 )
        break;
      targetObj = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v13 + 648LL))(
                                    v13,
                                    targetObj,
                                    *(_QWORD *)(*(_QWORD *)v13 + 656LL));
      if ( (v12 & (unsigned int)targetObj & 1) != 0 )
        targetObj = (Il2CppObject *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, Il2CppObject *, Il2CppClass **))v9->klass[1]._1.methods)(
                                      v9,
                                      v2,
                                      v9->klass[1]._1.nestedTypes);
      monitor = (int)v7[1].monitor;
      if ( (int)++v8 >= monitor )
        return;
    }
LABEL_17:
    sub_1BCB254(targetObj, method);
  }
}


void __fastcall EventCraftListViewManager__CheckIsSerializeFieldNotNull_48088832(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *__fastcall EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B2076F & 1) == 0 )
  {
    sub_1BCAFF8(&EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_TypeInfo, method);
    byte_4B2076F = 1;
  }
  v3 = sub_1BCB244(EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_TypeInfo);
  EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45___ctor(
    (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1BCB254(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall EventCraftListViewManager__CraftStartResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x0
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20
  const MethodInfo *v9; // x2

  if ( (byte_4B2077C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, result);
    byte_4B2077C = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL) )
  {
    selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
    if ( !selectTradeGoodsEntity
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          selectTradeGoodsEntity = (EventTradeGoodsEntity_o *)EventTradeGoodsEntity__GetTradeStartVoiceIds(
                                                                selectTradeGoodsEntity,
                                                                0LL),
          !playVoiceAction) )
    {
      sub_1BCB254(selectTradeGoodsEntity, v5);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, EventTradeGoodsEntity_o *, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
      playVoiceAction->fields.original_method_info,
      svtId,
      selectTradeGoodsEntity,
      0LL,
      *(_QWORD *)&playVoiceAction->fields.extra_arg);
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v9);
  }
}


void __fastcall EventCraftListViewManager__CreateList(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x26
  int max_length; // w8
  unsigned int v13; // w27
  EventTradeGoodsEntity_o *v14; // x21
  int32_t id; // w22
  ItemEntity_o *supportTool; // x23
  int32_t currentEventId; // w24
  System_Action_o *v18; // x25
  EventCraftListViewItem_o *v19; // x20
  const MethodInfo *v20; // x6
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  struct EventTradeGoodsEntity_array *v27; // x8
  UILabel_o *emptyMessageLabel; // x20

  if ( (byte_4B20773 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&EventCraftListViewItem_TypeInfo, v3);
    sub_1BCAFF8(&Method_EventCraftListViewManager_UpdateReceiveAllButtonState__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_5662/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v7);
    byte_4B20773 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_21;
  max_length = tradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1BCB25C(itemList, v9, v10);
      v14 = tradeGoodsEntities->m_Items[v13];
      if ( !v14 )
        break;
      id = v14->fields.id;
      supportTool = this->fields.supportTool;
      currentEventId = this->fields.currentEventId;
      v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_EventCraftListViewManager_UpdateReceiveAllButtonState__,
        0LL);
      v19 = (EventCraftListViewItem_o *)sub_1BCB244(EventCraftListViewItem_TypeInfo);
      EventCraftListViewItem___ctor(v19, id, v14, supportTool, currentEventId, v18, v20);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v19,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v19;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_14;
    }
LABEL_21:
    sub_1BCB254(itemList, v9);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  v27 = this->fields.tradeGoodsEntities;
  if ( !v27 )
    goto LABEL_21;
  if ( !*(_QWORD *)&v27->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5662/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
                                                              0LL);
    if ( !emptyMessageLabel )
      goto LABEL_21;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0LL);
  }
  EventCraftListViewManager__RequestListObject(this, v9);
}


void __fastcall EventCraftListViewManager__DestroyList(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  EventCraftAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *craftRewardDialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *currencyInfoController; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *craftNumConfirmDialog; // x20
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *craftWithdrawConfirmDialog; // x20
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  UnityEngine_Object_o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4B20793 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B20793 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventCraftAssetManager__Release(assetManager, this->fields.currentEventId, v3);
  craftRewardDialog = (UnityEngine_Object_o *)this->fields.craftRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(craftRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    this->fields.craftRewardDialog = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.craftRewardDialog, 0, v9, v10);
  }
  craftNumConfirmDialog = (UnityEngine_Object_o *)this->fields.craftNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(craftNumConfirmDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftNumConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v12, 0LL);
    this->fields.craftNumConfirmDialog = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.craftNumConfirmDialog, 0, v13, v14);
  }
  craftWithdrawConfirmDialog = (UnityEngine_Object_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(craftWithdrawConfirmDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftWithdrawConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v16, 0LL);
    this->fields.craftWithdrawConfirmDialog = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.craftWithdrawConfirmDialog, 0, v17, v18);
  }
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0LL, 0LL) )
  {
    v20 = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v20, 0LL);
    this->fields.tradeButtonBlinkEffect = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tradeButtonBlinkEffect, 0, v21, v22);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_34:
    sub_1BCB254(currencyInfoController, v6);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventCraftListViewManager__GetSupportToolItemId(
        EventCraftListViewManager_o *this,
        bool isUseSupportTool,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v9; // x0
  struct ItemEntity_o *supportTool; // x8
  int32_t id; // w3
  struct ItemEntity_o *v12; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B2078F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserItemMaster___, isUseSupportTool);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B2078F = 1;
  }
  entity = 0LL;
  if ( !isUseSupportTool )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B165D1 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  supportTool = this->fields.supportTool;
  if ( supportTool )
  {
    id = supportTool->fields.id;
    if ( !Master_object )
LABEL_22:
      sub_1BCB254(v9, v7);
  }
  else
  {
    id = 0;
    if ( !Master_object )
      goto LABEL_22;
  }
  v9 = (NetworkManager_c *)UserItemMaster__TryGetEntity(
                             (UserItemMaster_o *)Master_object,
                             &entity,
                             v9->static_fields->userIdNumber,
                             id,
                             0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_22;
  if ( entity->fields.num >= 1 && (v12 = this->fields.supportTool) != 0LL )
    return v12->fields.id;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager__Init(
        EventCraftListViewManager_o *this,
        int32_t eventId,
        int32_t guidSvtId,
        System_Action_o *callback,
        System_Action_int__string____Action__o *playVoice,
        UnityEngine_GameObject_o *mask,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x20
  ItemMaster_o *Master_object; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  ItemEntity_array *EntityList; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x22
  System_Func_object__bool__o *v50; // x23
  Il2CppObject *v51; // x1
  System_Int32_array *EventItemList; // x21
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x23
  EventDetailEntity_o *v55; // x22
  System_Collections_Generic_List_object__o *v56; // x24
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  ShopCurrencyInfoController_o *v59; // x23
  int32_t v60; // w24
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  EventCraftAssetManager_o *v67; // x22
  const MethodInfo *v68; // x1
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x1
  UILabel_o *craftNoticeLb; // x21
  const MethodInfo *v73; // x1
  int32_t v74; // w21
  EventCraftAssetManager_o *assetManager; // x19
  System_Action_o *v76; // x22
  const MethodInfo *v77; // x3

  if ( (byte_4B2076E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventDetailMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventTradeStoreMaster___, v16);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ItemMaster___, v17);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ShopMaster___, v18);
    sub_1BCAFF8(&DataManager_TypeInfo, v19);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v20);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v21);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_ItemEntity___, v22);
    sub_1BCAFF8(&EventCraftAssetManager_TypeInfo, v23);
    sub_1BCAFF8(&System_Func_ItemEntity__bool__TypeInfo, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v25);
    sub_1BCAFF8(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v26);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v27);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__0__, v28);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__1__, v29);
    sub_1BCAFF8(&EventCraftListViewManager___c__DisplayClass44_0_TypeInfo, v30);
    sub_1BCAFF8(&StringLiteral_3866/*"CRAFT_EVENT_PUSH_BTN_LABEL"*/, v31);
    byte_4B2076E = 1;
  }
  v32 = sub_1BCB244(EventCraftListViewManager___c__DisplayClass44_0_TypeInfo);
  EventCraftListViewManager___c__DisplayClass44_0___ctor((EventCraftListViewManager___c__DisplayClass44_0_o *)v32, 0LL);
  if ( !v32 )
    goto LABEL_35;
  *(_QWORD *)(v32 + 24) = this;
  *(_DWORD *)(v32 + 16) = eventId;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 24), (int32_t)this, v35, v36);
  v37 = *(_DWORD *)(v32 + 16);
  this->fields.svtId = guidSvtId;
  this->fields.currentEventId = v37;
  this->fields.craftCallback = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.craftCallback, (int32_t)callback, v38, v39);
  this->fields.playVoiceAction = playVoice;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.playVoiceAction, (int32_t)playVoice, v40, v41);
  this->fields.maskPanel = mask;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.maskPanel, (int32_t)mask, v42, v43);
  this->fields.selectTradeGoodsEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectTradeGoodsEntity, 0, v44, v45);
  if ( this->fields.supportTool )
    goto LABEL_12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
LABEL_35:
    sub_1BCB254(Master_object, v34);
  EntityList = ItemMaster__GetEntityList(Master_object, 39, 0LL);
  if ( EntityList )
  {
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
    v50 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ItemEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v50,
      (Il2CppObject *)v32,
      Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__0__,
      0LL);
    v51 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
            v49,
            (System_Func_TSource__bool__o *)v50,
            (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_ItemEntity___);
  }
  else
  {
    v51 = 0LL;
  }
  this->fields.supportTool = (struct ItemEntity_o *)v51;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.supportTool, (int32_t)v51, v47, v48);
LABEL_12:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_35;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Master_object, *(_DWORD *)(v32 + 16), 0LL);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             *(_DWORD *)(v32 + 16),
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v55 = (EventDetailEntity_o *)Entity;
  v56 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_35;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v56;
  sub_1BCAF9C((CGThumbnailListItem_o *)&currencyInfoController->fields.objectList, (int32_t)v56, v57, v58);
  if ( !v55 )
    goto LABEL_35;
  v59 = this->fields.currencyInfoController;
  v60 = *(_DWORD *)(v32 + 16);
  Master_object = (ItemMaster_o *)EventDetailEntity__IsForcedAdjustmentDialog(v55, 0LL);
  if ( !v59 )
    goto LABEL_35;
  ShopCurrencyInfoController__RefreshEventItemInfo(
    v59,
    6,
    v60,
    1,
    EventItemList,
    (unsigned __int8)Master_object & 1,
    0LL);
  Master_object = (ItemMaster_o *)this->fields.currencyInfoController;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ItemMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_35;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            (EventTradeGoodsMaster_o *)Master_object,
                            this->fields.currentEventId,
                            0LL);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tradeGoodsEntities, (int32_t)TradeGoodsEntityArray, v62, v63);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_35;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0LL);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tradeStoreEntities, (int32_t)OpenTradeStoreEntityArray, v65, v66);
  Master_object = (ItemMaster_o *)this->fields.touchPanel;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ItemMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( !this->fields.assetManager )
  {
    v67 = (EventCraftAssetManager_o *)sub_1BCB244(EventCraftAssetManager_TypeInfo);
    EventCraftAssetManager___ctor(v67, v68);
    this->fields.assetManager = v67;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.assetManager, (int32_t)v67, v69, v70);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetCraftNotification(0LL);
  EventCraftListViewManager__UpdateNoticeButtonDisplay(this, v71);
  craftNoticeLb = this->fields.craftNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3866/*"CRAFT_EVENT_PUSH_BTN_LABEL"*/, 0LL);
  if ( !craftNoticeLb )
    goto LABEL_35;
  UILabel__set_text(craftNoticeLb, (System_String_o *)Master_object, 0LL);
  EventCraftListViewManager__UpdateCraftAbleCountLb(this, v73);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_35;
  *(_BYTE *)(v32 + 32) = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           (Il2CppObject **)(v32 + 40),
                           this->fields.currentEventId,
                           (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  v74 = *(_DWORD *)(v32 + 16);
  assetManager = this->fields.assetManager;
  v76 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v76,
    (Il2CppObject *)v32,
    Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__1__,
    0LL);
  if ( !assetManager )
    goto LABEL_35;
  EventCraftAssetManager__LoadAssets(assetManager, v74, v76, v77);
}


void __fastcall EventCraftListViewManager__LocateDialogToCraftPanel(
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
  transform = UnityEngine_Component__get_transform(dialog, 0LL);
  this = (EventCraftListViewManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (EventCraftListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL);
  this = (EventCraftListViewManager_o *)UnityEngine_Component__get_transform(dialog, 0LL);
  v6 = this;
  if ( !byte_4B16196 )
  {
    this = (EventCraftListViewManager_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, dialog);
    byte_4B16196 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventCraftListViewManager_o *)UnityEngine_Component__get_gameObject(dialog, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BCB254(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickCraftStartButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
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
  UnityEngine_GameObject_o *maskPanel; // x0
  unsigned int displayMode; // w8
  bool IsBuyAble; // w21
  _QWORD *v16; // x8
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x0
  int32_t v22; // w22
  ItemEntity_o *supportTool; // x23
  EventCraftListViewItem_o *v24; // x24
  System_Action_T1__T2__T3__o *v25; // x25
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct EventTradeGoodsEntity_o *klass; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_Action_o *v32; // x23
  int32_t storeIdx; // [xsp+3Ch] [xbp-44h] BYREF

  if ( (byte_4B2077A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int____int__bool__TypeInfo, obj);
    sub_1BCAFF8(&System_Action_TypeInfo, v5);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickCraftStartButton__, v6);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickCraftStartDecide__, v7);
    sub_1BCAFF8(&Method_EventCraftListViewManager__OnClickCraftStartButton_b__57_0__, v8);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BCAFF8(&StringLiteral_3864/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_TITLE"*/, v11);
    sub_1BCAFF8(&StringLiteral_3863/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/, v12);
    byte_4B2077A = 1;
  }
  storeIdx = 0;
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_24;
  displayMode = obj->fields.displayMode;
  if ( displayMode <= 5 && ((1 << displayMode) & 0x33) == 0 )
  {
    maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0LL);
    if ( maskPanel )
    {
      IsBuyAble = EventCraftListViewItem__get_IsBuyAble((EventCraftListViewItem_o *)maskPanel, (const MethodInfo *)obj);
      v16 = Method_EventCraftListViewManager_OnClickCraftStartButton__;
      if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickCraftStartButton__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1BCB010(Method_EventCraftListViewManager_OnClickCraftStartButton__);
      v17 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v16, v16[4]);
      if ( !IsBuyAble )
      {
        OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0, 0LL);
        goto LABEL_7;
      }
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
      if ( EventCraftListViewManager__TryGetAvailableStoreIdx(this, &storeIdx, v18) )
      {
        EventCraftListViewManager__UpdateListObject(this, v19);
        maskPanel = (UnityEngine_GameObject_o *)this->fields.craftNumConfirmDialog;
        if ( maskPanel )
        {
          EventCraftNumConfirmDialogComponent__Init((EventCraftNumConfirmDialogComponent_o *)maskPanel, 0LL);
          craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
          Item = EventCraftListViewObject__GetItem(obj, 0LL);
          v22 = storeIdx;
          supportTool = this->fields.supportTool;
          v24 = Item;
          v25 = (System_Action_T1__T2__T3__o *)sub_1BCB244(System_Action_int____int__bool__TypeInfo);
          System_Action_object__int__bool____ctor(
            v25,
            (Il2CppObject *)this,
            Method_EventCraftListViewManager_OnClickCraftStartDecide__,
            0LL);
          if ( craftNumConfirmDialog )
          {
            EventCraftNumConfirmDialogComponent__Open(
              craftNumConfirmDialog,
              v24,
              v22,
              supportTool,
              (System_Action_int____int__bool__o *)v25,
              0,
              0LL);
            maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0LL);
            if ( maskPanel )
            {
              klass = (struct EventTradeGoodsEntity_o *)maskPanel[5].klass;
              this->fields.selectTradeGoodsEntity = klass;
              sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectTradeGoodsEntity, (int32_t)klass, v26, v27);
              goto LABEL_7;
            }
          }
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3864/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3863/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
        v32 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(
          v32,
          (Il2CppObject *)this,
          Method_EventCraftListViewManager__OnClickCraftStartButton_b__57_0__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog_30764784(
            (CommonUI_o *)Instance,
            v30,
            v31,
            v32,
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
            0LL,
            0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_1BCB254(maskPanel, obj);
  }
LABEL_7:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickCraftStartDecide(
        EventCraftListViewManager_o *this,
        System_Int32_array *tradeInfo,
        int32_t createNum,
        bool isUseSupportTool,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v13; // x23
  const MethodInfo *v14; // x2
  int32_t currentEventId; // w24
  int32_t v16; // w21
  int32_t v17; // w25
  TradeStartRequest_o *v18; // x23

  if ( (byte_4B2077B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftListViewManager_CraftStartResponse__, tradeInfo);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TradeStartRequest___, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    byte_4B2077B = 1;
  }
  craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
  if ( !craftNumConfirmDialog )
    goto LABEL_13;
  EventCraftNumConfirmDialogComponent__Close(craftNumConfirmDialog, 0LL);
  craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !craftNumConfirmDialog )
    goto LABEL_13;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 1, 0LL);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_CraftStartResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                       v13,
                                                                       (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeInfo )
    {
      if ( tradeInfo->max_length < 2 )
        sub_1BCB25C(craftNumConfirmDialog, tradeInfo, v14);
      currentEventId = this->fields.currentEventId;
      v17 = tradeInfo->m_Items[1];
      v16 = tradeInfo->m_Items[2];
      v18 = (TradeStartRequest_o *)craftNumConfirmDialog;
      craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)EventCraftListViewManager__GetSupportToolItemId(
                                                                         this,
                                                                         isUseSupportTool,
                                                                         v14);
      if ( v18 )
      {
        TradeStartRequest__beginRequest(v18, currentEventId, v17, v16, createNum, (int32_t)craftNumConfirmDialog, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCB254(craftNumConfirmDialog, tradeInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 0, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickListView(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4B20778 & 1) == 0 )
  {
    this = (EventCraftListViewManager_o *)sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickListView__, obj);
    byte_4B20778 = 1;
  }
  if ( !obj || (this = (EventCraftListViewManager_o *)EventCraftListViewObject__GetItem(obj, 0LL)) == 0LL )
    sub_1BCB254(this, obj);
  v4 = this;
  if ( !this->fields.sortKindButton
    && EventCraftListViewItem__get_IsEventEnd((EventCraftListViewItem_o *)this, (const MethodInfo *)obj)
    || !LOBYTE(v4->fields.topFocusOffset) )
  {
    v5 = Method_EventCraftListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCB010(Method_EventCraftListViewManager_OnClickListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0LL);
  }
}


void __fastcall EventCraftListViewManager__OnClickNoticeButton(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B20790 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickNoticeButton__, method);
    byte_4B20790 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v4 = Method_EventCraftListViewManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCB010(Method_EventCraftListViewManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0, 0LL);
  EventRewardSaveData__SetCraftNotification(this->fields.isButtonOn, 0LL);
  EventCraftListViewManager__UpdateNoticeButtonDisplay(this, v6);
}


void __fastcall EventCraftListViewManager__OnClickReceiveAll(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *maskPanel; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  Il2CppObject *Request_object; // x0
  long double inited; // q0
  _QWORD *v13; // x21
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0

  if ( (byte_4B20780 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_int___, method);
    sub_1BCAFF8(&Method_EventCraftListViewManager_TradeReceiveResponse__, v3);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v4);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4B20780 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  this->fields.selectTradeGoodsEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectTradeGoodsEntity, 0, v8, v9);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_TradeReceiveResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  v13 = Method_System_Array_Empty_int___;
  currentEventId = this->fields.currentEventId;
  v15 = (TradeReceiveRequest_o *)Request_object;
  v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v16 )
  {
    sub_1C1B4B8(Method_System_Array_Empty_int___);
    v16 = v13[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1B45C(inited);
  if ( !*(_DWORD *)(v17 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v17);
  maskPanel = *(struct UnityEngine_GameObject_o **)(v13[7] + 16LL);
  if ( (*((_BYTE *)&maskPanel[12].fields + 5) & 1) == 0 )
    maskPanel = (struct UnityEngine_GameObject_o *)sub_1C1B45C(inited);
  if ( !v15 )
LABEL_16:
    sub_1BCB254(maskPanel, method);
  TradeReceiveRequest__beginRequest(
    v15,
    currentEventId,
    **(System_Int32_array ***)&maskPanel[7].fields.m_CachedPtr,
    0,
    0,
    0LL);
}


void __fastcall EventCraftListViewManager__OnClickReceiveAllButton(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *v2; // x19
  struct UICommonButton_o *receiveAllButton; // x8
  int32_t mState; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  v2 = this;
  if ( (byte_4B2077F & 1) == 0 )
  {
    this = (EventCraftListViewManager_o *)sub_1BCAFF8(
                                            &Method_EventCraftListViewManager_OnClickReceiveAllButton__,
                                            method);
    byte_4B2077F = 1;
  }
  receiveAllButton = v2->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_1BCB254(this, method);
  mState = receiveAllButton->fields.mState;
  v5 = Method_EventCraftListViewManager_OnClickReceiveAllButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCB010(Method_EventCraftListViewManager_OnClickReceiveAllButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v5, v5[4]);
  if ( mState == 3 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    EventCraftListViewManager__OnClickReceiveAll(v2, v7);
  }
}


void __fastcall EventCraftListViewManager__OnClickReceiveButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *maskPanel; // x0
  unsigned int displayMode; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  EventCraftListViewItem_o *Item; // x21
  int64_t Time; // x22
  int32_t CompleteNum; // w21
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct EventTradeGoodsEntity_o *v18; // x1

  if ( (byte_4B2077D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickReceiveButton__, obj);
    sub_1BCAFF8(&EventCraftTimeCalculation_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    byte_4B2077D = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_19;
  displayMode = obj->fields.displayMode;
  if ( displayMode >= 4 && (displayMode & 0xFFFFFFFE) == 4 )
  {
    v9 = Method_EventCraftListViewManager_OnClickReceiveButton__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReceiveButton__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCB010(Method_EventCraftListViewManager_OnClickReceiveButton__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0, 0LL);
    Item = EventCraftListViewObject__GetItem(obj, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    CompleteNum = EventCraftTimeCalculation__GetCompleteNum(Item, 0LL, Time, 0LL);
    maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
    if ( maskPanel )
    {
      v15 = *((_QWORD *)maskPanel + 17);
      if ( v15 )
      {
        EventCraftListViewManager__OnClickReceiveDecide(this, *(_DWORD *)(v15 + 16), CompleteNum, v14);
        maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
        if ( maskPanel )
        {
          v18 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
          this->fields.selectTradeGoodsEntity = v18;
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectTradeGoodsEntity, (int32_t)v18, v16, v17);
          goto LABEL_17;
        }
      }
    }
LABEL_19:
    sub_1BCB254(maskPanel, obj);
  }
LABEL_17:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager__OnClickReceiveDecide(
        EventCraftListViewManager_o *this,
        int32_t storeIdx,
        int32_t receiveNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UnityEngine_GameObject_o *maskPanel; // x0
  NetworkManager_ResultCallbackFunc_o *v12; // x22
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w21
  TradeReceiveRequest_o *v15; // x22

  if ( (byte_4B2077E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftListViewManager_TradeReceiveResponse__, *(_QWORD *)&storeIdx);
    sub_1BCAFF8(&int___TypeInfo, v7);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v8);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    byte_4B2077E = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_12;
  if ( receiveNum > 0 )
  {
    UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_TradeReceiveResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
    currentEventId = this->fields.currentEventId;
    v15 = (TradeReceiveRequest_o *)Request_object;
    maskPanel = (struct UnityEngine_GameObject_o *)sub_1BCB0A0(int___TypeInfo, 1LL);
    if ( maskPanel )
    {
      if ( !LODWORD(maskPanel[1].klass) )
        sub_1BCB25C(maskPanel, *(_QWORD *)&storeIdx, maskPanel);
      LODWORD(maskPanel[1].monitor) = storeIdx;
      if ( v15 )
      {
        TradeReceiveRequest__beginRequest(v15, currentEventId, (System_Int32_array *)maskPanel, receiveNum, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCB254(maskPanel, *(_QWORD *)&storeIdx);
  }
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickReplenishmentButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *maskPanel; // x0
  unsigned int displayMode; // w8
  bool IsRefillable; // w21
  _QWORD *v10; // x8
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x1
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  __int64 v15; // x8
  int32_t v16; // w23
  ItemEntity_o *supportTool; // x24
  System_Action_T1__T2__T3__o *v18; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct EventTradeGoodsEntity_o *v21; // x1

  if ( (byte_4B20784 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int____int__bool__TypeInfo, obj);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickReplenishmentButton__, v5);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__, v6);
    byte_4B20784 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_20;
  displayMode = obj->fields.displayMode;
  if ( displayMode < 4 || (displayMode & 0xFFFFFFFE) != 4 )
  {
LABEL_17:
    maskPanel = this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
      return;
    }
LABEL_20:
    sub_1BCB254(maskPanel, obj);
  }
  maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
  if ( !maskPanel )
    goto LABEL_20;
  IsRefillable = EventCraftListViewItem__get_IsRefillable(
                   (EventCraftListViewItem_o *)maskPanel,
                   (const MethodInfo *)obj);
  v10 = Method_EventCraftListViewManager_OnClickReplenishmentButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCB010(Method_EventCraftListViewManager_OnClickReplenishmentButton__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v10, v10[4]);
  if ( IsRefillable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
    EventCraftListViewManager__UpdateListObject(this, v12);
    maskPanel = this->fields.craftNumConfirmDialog;
    if ( !maskPanel )
      goto LABEL_20;
    EventCraftNumConfirmDialogComponent__Init((EventCraftNumConfirmDialogComponent_o *)maskPanel, 0LL);
    craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
    Item = EventCraftListViewObject__GetItem(obj, 0LL);
    maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
    if ( !maskPanel )
      goto LABEL_20;
    v15 = *((_QWORD *)maskPanel + 17);
    if ( !v15 )
      goto LABEL_20;
    v16 = *(_DWORD *)(v15 + 16);
    supportTool = this->fields.supportTool;
    v18 = (System_Action_T1__T2__T3__o *)sub_1BCB244(System_Action_int____int__bool__TypeInfo);
    System_Action_object__int__bool____ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__,
      0LL);
    if ( !craftNumConfirmDialog )
      goto LABEL_20;
    EventCraftNumConfirmDialogComponent__Open(
      craftNumConfirmDialog,
      Item,
      v16,
      supportTool,
      (System_Action_int____int__bool__o *)v18,
      1,
      0LL);
    maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
    if ( !maskPanel )
      goto LABEL_20;
    v21 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
    this->fields.selectTradeGoodsEntity = v21;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectTradeGoodsEntity, (int32_t)v21, v19, v20);
    goto LABEL_17;
  }
  OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickSupportToolButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *maskPanel; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  EventCraftUseSupportToolDialogComponent_o *craftUseSupportToolDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  __int64 v13; // x8
  int32_t v14; // w23
  ItemEntity_o *supportTool; // x24
  System_Action_int__int__o *v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct EventTradeGoodsEntity_o *v19; // x1

  if ( (byte_4B2078B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__int__TypeInfo, obj);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickSupportToolButton__, v5);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickSupportToolDecide__, v6);
    byte_4B2078B = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_16;
  if ( obj->fields.displayMode != 4 )
    goto LABEL_6;
  v8 = Method_EventCraftListViewManager_OnClickSupportToolButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickSupportToolButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCB010(Method_EventCraftListViewManager_OnClickSupportToolButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
  EventCraftListViewManager__UpdateListObject(this, v10);
  maskPanel = this->fields.craftUseSupportToolDialog;
  if ( !maskPanel )
    goto LABEL_16;
  EventCraftUseSupportToolDialogComponent__Init((EventCraftUseSupportToolDialogComponent_o *)maskPanel, 0LL);
  craftUseSupportToolDialog = this->fields.craftUseSupportToolDialog;
  Item = EventCraftListViewObject__GetItem(obj, 0LL);
  maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
  if ( !maskPanel
    || (v13 = *((_QWORD *)maskPanel + 17)) == 0
    || (v14 = *(_DWORD *)(v13 + 16),
        supportTool = this->fields.supportTool,
        v16 = (System_Action_int__int__o *)sub_1BCB244(System_Action_int__int__TypeInfo),
        System_Action_int__int____ctor(
          v16,
          (Il2CppObject *)this,
          Method_EventCraftListViewManager_OnClickSupportToolDecide__,
          0LL),
        !craftUseSupportToolDialog)
    || (EventCraftUseSupportToolDialogComponent__Open(craftUseSupportToolDialog, Item, v14, supportTool, v16, 0LL),
        (maskPanel = EventCraftListViewObject__GetItem(obj, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_1BCB254(maskPanel, obj);
  }
  v19 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
  this->fields.selectTradeGoodsEntity = v19;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectTradeGoodsEntity, (int32_t)v19, v17, v18);
LABEL_6:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager__OnClickSupportToolDecide(
        EventCraftListViewManager_o *this,
        int32_t storeIdx,
        int32_t goodsId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventCraftUseSupportToolDialogComponent_o *craftUseSupportToolDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x22
  struct ItemEntity_o *supportTool; // x8
  int32_t id; // w5

  if ( (byte_4B2078C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftListViewManager_TradeSupportToolResponse__, *(_QWORD *)&storeIdx);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TradeStartRequest___, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_4B2078C = 1;
  }
  craftUseSupportToolDialog = this->fields.craftUseSupportToolDialog;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
  EventCraftUseSupportToolDialogComponent__Close(craftUseSupportToolDialog, 0LL);
  craftUseSupportToolDialog = (EventCraftUseSupportToolDialogComponent_o *)this->fields.maskPanel;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftUseSupportToolDialog, 1, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_TradeSupportToolResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  craftUseSupportToolDialog = (EventCraftUseSupportToolDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                             v11,
                                                                             (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TradeStartRequest___);
  supportTool = this->fields.supportTool;
  if ( !supportTool )
  {
    id = 0;
    if ( craftUseSupportToolDialog )
      goto LABEL_9;
LABEL_11:
    sub_1BCB254(craftUseSupportToolDialog, *(_QWORD *)&storeIdx);
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
    0LL);
}


void __fastcall EventCraftListViewManager__OnClickTradeReplenishmentDecide(
        EventCraftListViewManager_o *this,
        System_Int32_array *tradeInfo,
        int32_t createNum,
        bool isUseSupportTool,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v13; // x23
  const MethodInfo *v14; // x2
  int32_t currentEventId; // w24
  int32_t v16; // w21
  int32_t v17; // w25
  TradeStartRequest_o *v18; // x23

  if ( (byte_4B20785 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftListViewManager_TradeReplenishmentResponse__, tradeInfo);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TradeStartRequest___, v9);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v10);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    byte_4B20785 = 1;
  }
  craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
  if ( !craftNumConfirmDialog )
    goto LABEL_13;
  EventCraftNumConfirmDialogComponent__Close(craftNumConfirmDialog, 0LL);
  craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !craftNumConfirmDialog )
    goto LABEL_13;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 1, 0LL);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_TradeReplenishmentResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                       v13,
                                                                       (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeInfo )
    {
      if ( tradeInfo->max_length < 2 )
        sub_1BCB25C(craftNumConfirmDialog, tradeInfo, v14);
      currentEventId = this->fields.currentEventId;
      v17 = tradeInfo->m_Items[1];
      v16 = tradeInfo->m_Items[2];
      v18 = (TradeStartRequest_o *)craftNumConfirmDialog;
      craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)EventCraftListViewManager__GetSupportToolItemId(
                                                                         this,
                                                                         isUseSupportTool,
                                                                         v14);
      if ( v18 )
      {
        TradeStartRequest__beginRequest(v18, currentEventId, v17, v16, createNum, (int32_t)craftNumConfirmDialog, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCB254(craftNumConfirmDialog, tradeInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 0, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickWithdrawalButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o **v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  unsigned int klass; // w8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x1
  EventCraftWithdrawConfirmDialogComponent_o *craftWithdrawConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  System_Action_bool__o *v22; // x23

  if ( (byte_4B20787 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, obj);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickWithdrawalButton__, v5);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__DisplayClass70_0__OnClickWithdrawalButton_b__0__, v6);
    sub_1BCAFF8(&EventCraftListViewManager___c__DisplayClass70_0_TypeInfo, v7);
    byte_4B20787 = 1;
  }
  v8 = sub_1BCB244(EventCraftListViewManager___c__DisplayClass70_0_TypeInfo);
  EventCraftListViewManager___c__DisplayClass70_0___ctor((EventCraftListViewManager___c__DisplayClass70_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_16;
  *(_QWORD *)(v8 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = obj;
  v13 = (UnityEngine_GameObject_o **)(v8 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)obj, v14, v15);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( !*v13 )
    goto LABEL_16;
  klass = (unsigned int)(*v13)[5].klass;
  if ( klass >= 4 && (klass & 0xFFFFFFFE) == 4 )
  {
    v17 = Method_EventCraftListViewManager_OnClickWithdrawalButton__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1BCB010(Method_EventCraftListViewManager_OnClickWithdrawalButton__);
    v18 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0LL);
    EventCraftListViewManager__UpdateListObject(this, v19);
    maskPanel = (UnityEngine_GameObject_o *)this->fields.craftWithdrawConfirmDialog;
    if ( maskPanel )
    {
      EventCraftWithdrawConfirmDialogComponent__Init((EventCraftWithdrawConfirmDialogComponent_o *)maskPanel, 0LL);
      maskPanel = *v13;
      if ( *v13 )
      {
        craftWithdrawConfirmDialog = this->fields.craftWithdrawConfirmDialog;
        Item = EventCraftListViewObject__GetItem((EventCraftListViewObject_o *)maskPanel, 0LL);
        v22 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v22,
          (Il2CppObject *)v8,
          Method_EventCraftListViewManager___c__DisplayClass70_0__OnClickWithdrawalButton_b__0__,
          0LL);
        if ( craftWithdrawConfirmDialog )
        {
          EventCraftWithdrawConfirmDialogComponent__Open(craftWithdrawConfirmDialog, Item, v22, 0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_16:
    sub_1BCB254(maskPanel, v10);
  }
LABEL_14:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickWithdrawalDecide(
        EventCraftListViewManager_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 craftWithdrawConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w20
  TradeReceiveRequest_o *v13; // x21
  __int64 v14; // x2
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  System_Int32_array *v16; // x22

  if ( (byte_4B20789 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventCraftListViewManager_WithdrawalResponse__, item);
    sub_1BCAFF8(&int___TypeInfo, v5);
    sub_1BCAFF8(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v6);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4B20789 = 1;
  }
  craftWithdrawConfirmDialog = (__int64)this->fields.craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  EventCraftWithdrawConfirmDialogComponent__Close(
    (EventCraftWithdrawConfirmDialogComponent_o *)craftWithdrawConfirmDialog,
    0LL);
  craftWithdrawConfirmDialog = (__int64)this->fields.maskPanel;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftWithdrawConfirmDialog, 1, 0LL);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_WithdrawalResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  currentEventId = this->fields.currentEventId;
  v13 = (TradeReceiveRequest_o *)Request_object;
  craftWithdrawConfirmDialog = sub_1BCB0A0(int___TypeInfo, 1LL);
  if ( !item )
    goto LABEL_13;
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_13;
  v16 = (System_Int32_array *)craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  if ( !*(_DWORD *)(craftWithdrawConfirmDialog + 24) )
    sub_1BCB25C(craftWithdrawConfirmDialog, item, v14);
  *(_DWORD *)(craftWithdrawConfirmDialog + 32) = TradeInfo_k__BackingField->fields.storeIdx;
  craftWithdrawConfirmDialog = EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)item);
  if ( !v13 )
LABEL_13:
    sub_1BCB254(craftWithdrawConfirmDialog, item);
  TradeReceiveRequest__beginRequest(v13, currentEventId, v16, craftWithdrawConfirmDialog, 1, 0LL);
}


void __fastcall EventCraftListViewManager__OnMoveEnd(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4B20777 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B20777 = 1;
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
          sub_1BCB254(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall EventCraftListViewManager__OpenReconfirmDialog(
        EventCraftListViewManager_o *this,
        EventCraftListViewItem_o *item,
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
  __int64 v13; // x19
  BaseDialog_o *craftWithdrawConfirmDialog; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BaseDialog_o **v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Instance; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  CommonConfirmDialog_ClickDelegate_o *v26; // x25

  if ( (byte_4B20788 & 1) == 0 )
  {
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, item);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__0__, v7);
    sub_1BCAFF8(&EventCraftListViewManager___c__DisplayClass71_0_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_13393/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, v9);
    sub_1BCAFF8(&StringLiteral_3652/*"COMMON_CONFIRM_EXECUTE"*/, v10);
    sub_1BCAFF8(&StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_1BCAFF8(&StringLiteral_3880/*"CRAFT_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, v12);
    byte_4B20788 = 1;
  }
  v13 = sub_1BCB244(EventCraftListViewManager___c__DisplayClass71_0_TypeInfo);
  EventCraftListViewManager___c__DisplayClass71_0___ctor((EventCraftListViewManager___c__DisplayClass71_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = item;
  v18 = (BaseDialog_o **)(v13 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)item, v19, v20);
  craftWithdrawConfirmDialog = (BaseDialog_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(craftWithdrawConfirmDialog, 0LL) )
    return;
  craftWithdrawConfirmDialog = *v18;
  if ( !*v18 )
    goto LABEL_12;
  *(_DWORD *)(v13 + 32) = EventCraftListViewItem__get_NowCompleteNum(
                            (EventCraftListViewItem_o *)craftWithdrawConfirmDialog,
                            v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13393/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3880/*"CRAFT_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3652/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v26 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v26,
    (Il2CppObject *)v13,
    Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_12:
    sub_1BCB254(craftWithdrawConfirmDialog, v15);
  CommonUI__OpenConfirmDialog_30763452(
    (CommonUI_o *)Instance,
    v22,
    v23,
    v24,
    v25,
    1,
    v26,
    30,
    26,
    180.0,
    13.0,
    0,
    0,
    0LL);
}


void __fastcall EventCraftListViewManager__OpenReplenishmentDialog(
        EventCraftListViewManager_o *this,
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
  System_Collections_Generic_List_EventCraftListViewObject__o *ObjectList; // x20
  System_Func_object__bool__o *v12; // x21
  Il2CppObject *v13; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *Entity; // x21
  EventCraftListViewItem_o *v17; // x20
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t storeIdx; // w22
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  ItemEntity_o *supportTool; // x23
  System_Action_T1__T2__T3__o *v22; // x24

  if ( (byte_4B20783 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int____int__bool__TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftListViewObject___, v6);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__, v7);
    sub_1BCAFF8(&Method_EventCraftListViewManager__OpenReplenishmentDialog_b__66_0__, v8);
    sub_1BCAFF8(&System_Func_EventCraftListViewObject__bool__TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B20783 = 1;
  }
  if ( this->fields.selectTradeGoodsEntity )
  {
    ObjectList = EventCraftListViewManager__get_ObjectList(this, method);
    v12 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_EventCraftListViewObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager__OpenReplenishmentDialog_b__66_0__,
      0LL);
    v13 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
            (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
            (System_Func_TSource__bool__o *)v12,
            (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftListViewObject___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_21;
    Entity = DataMasterBase_object__object__int___GetEntity(
               Master_object,
               this->fields.currentEventId,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Equality(
                                                                    (UnityEngine_Object_o *)v13,
                                                                    0LL,
                                                                    0LL);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( !Entity )
        goto LABEL_21;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventEntity__IsEventPeriod(
                                                                      (EventEntity_o *)Entity,
                                                                      0LL,
                                                                      0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_21;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventCraftListViewObject__GetItem(
                                                                        (EventCraftListViewObject_o *)v13,
                                                                        0LL);
        if ( !Master_object )
          goto LABEL_21;
        v17 = (EventCraftListViewItem_o *)Master_object;
        if ( Master_object[1].fields.sb )
        {
          if ( EventCraftListViewItem__get_IsRefillable((EventCraftListViewItem_o *)Master_object, v15) )
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.craftNumConfirmDialog;
            if ( Master_object )
            {
              EventCraftNumConfirmDialogComponent__Init((EventCraftNumConfirmDialogComponent_o *)Master_object, 0LL);
              TradeInfo_k__BackingField = v17->fields._TradeInfo_k__BackingField;
              if ( TradeInfo_k__BackingField )
              {
                storeIdx = TradeInfo_k__BackingField->fields.storeIdx;
                craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
                supportTool = this->fields.supportTool;
                v22 = (System_Action_T1__T2__T3__o *)sub_1BCB244(System_Action_int____int__bool__TypeInfo);
                System_Action_object__int__bool____ctor(
                  v22,
                  (Il2CppObject *)this,
                  Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__,
                  0LL);
                if ( craftNumConfirmDialog )
                {
                  EventCraftNumConfirmDialogComponent__Open(
                    craftNumConfirmDialog,
                    v17,
                    storeIdx,
                    supportTool,
                    (System_Action_int____int__bool__o *)v22,
                    1,
                    0LL);
                  return;
                }
              }
            }
LABEL_21:
            sub_1BCB254(Master_object, v15);
          }
        }
      }
    }
  }
}


void __fastcall EventCraftListViewManager__OpenRewardDialog(
        EventCraftListViewManager_o *this,
        EventCraftListViewManager_ResData_o *resData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventCraftRewardDialogComponent_o *craftRewardDialog; // x0
  EventCraftRewardDialogComponent_o *v9; // x21
  int32_t currentEventId; // w22
  BattleDropItem_array *resultTradeRewardInfos; // x20
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x23
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v14; // x24
  System_Action_o *v15; // x25

  if ( (byte_4B20782 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, resData);
    sub_1BCAFF8(&System_Action_TypeInfo, v5);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OpenReplenishmentDialog__, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_SetActive__, v7);
    byte_4B20782 = 1;
  }
  craftRewardDialog = this->fields.craftRewardDialog;
  if ( !craftRewardDialog )
    goto LABEL_7;
  EventCraftRewardDialogComponent__Init(craftRewardDialog, 0LL);
  if ( !resData )
    goto LABEL_7;
  v9 = this->fields.craftRewardDialog;
  currentEventId = this->fields.currentEventId;
  resultTradeRewardInfos = resData->fields.resultTradeRewardInfos;
  selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
  maskPanel = (Il2CppObject *)this->fields.maskPanel;
  v14 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v14, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventCraftListViewManager_OpenReplenishmentDialog__, 0LL);
  if ( !v9 )
LABEL_7:
    sub_1BCB254(craftRewardDialog, resData);
  EventCraftRewardDialogComponent__Open(
    v9,
    currentEventId,
    resultTradeRewardInfos,
    selectTradeGoodsEntity,
    selectTradeGoodsEntity == 0LL,
    v14,
    v15,
    0LL);
}


void __fastcall EventCraftListViewManager__RequestListObject(
        EventCraftListViewManager_o *this,
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

  if ( (byte_4B20774 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__get_Current__, v5);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnMoveEnd__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventCraftListViewObject__get_Count__, v8);
    sub_1BCAFF8(&StringLiteral_9865/*"OnMoveEnd"*/, v9);
    byte_4B20774 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  ObjectList = (System_Collections_Generic_List_object__o *)EventCraftListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1BCB254(0LL, v11);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9865/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      ObjectList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__) )
    {
      current = v17.fields._current;
      v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventCraftListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCB254(v15, v16);
      EventCraftListViewObject__Init((EventCraftListViewObject_o *)current, 2, v14, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager__ResponseCommonProcess(
        EventCraftListViewManager_o *this,
        bool isReceive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ShopCurrencyInfoController_o *currencyInfoController; // x0
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4B2078E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventTradeStoreMaster___, isReceive);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    byte_4B2078E = 1;
  }
  if ( !isReceive )
  {
    currencyInfoController = this->fields.currencyInfoController;
    if ( !currencyInfoController )
      goto LABEL_13;
    ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0LL);
  }
  EventCraftListViewManager__UpdateReceiveAllButtonState(this, (const MethodInfo *)isReceive);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  currencyInfoController = (ShopCurrencyInfoController_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !currencyInfoController )
    goto LABEL_13;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)currencyInfoController,
                                this->fields.currentEventId,
                                0LL);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tradeStoreEntities, (int32_t)OpenTradeStoreEntityArray, v8, v9);
  EventCraftListViewManager__UpdateCraftAbleCountLb(this, v10);
  currencyInfoController = (ShopCurrencyInfoController_o *)this->fields.touchPanel;
  if ( !currencyInfoController
    || (currencyInfoController = (ShopCurrencyInfoController_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)currencyInfoController,
                                                                   0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyInfoController, 0, 0LL),
        (currencyInfoController = (ShopCurrencyInfoController_o *)this->fields.maskPanel) == 0LL) )
  {
LABEL_13:
    sub_1BCB254(currencyInfoController, isReceive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyInfoController, 0, 0LL);
  EventCraftListViewManager__RequestListObject(this, v11);
  ActionExtensions__Call(this->fields.craftCallback, 0LL);
}


void __fastcall EventCraftListViewManager__SetCraftObject(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *craftRewardDialog; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  struct EventCraftAssetManager_o *assetManager; // x8
  Il2CppObject *CraftRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *craftNumConfirmDialog; // x20
  struct EventCraftAssetManager_o *v19; // x8
  Il2CppObject *CraftItemNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *craftWithdrawConfirmDialog; // x20
  struct EventCraftAssetManager_o *v26; // x8
  Il2CppObject *CraftItemWithdrawConfirmDialog_k__BackingField; // x20
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *craftUseSupportToolDialog; // x20
  struct EventCraftAssetManager_o *v33; // x8
  Il2CppObject *CraftUseSupportToolDialog_k__BackingField; // x20
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  UnityEngine_Object_o *craftFirstTimeSupportToolDialog; // x20
  struct EventCraftAssetManager_o *v40; // x8
  Il2CppObject *CraftFirstTimeSupportToolDialog_k__BackingField; // x20
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x2

  if ( (byte_4B20770 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EventCraftFirstTimeSupportToolDialogComponent___, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EventCraftNumConfirmDialogComponent___, v3);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EventCraftRewardDialogComponent___, v4);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EventCraftUseSupportToolDialogComponent___, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EventCraftWithdrawConfirmDialogComponent___, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B20770 = 1;
  }
  craftRewardDialog = (UnityEngine_Object_o *)this->fields.craftRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_44;
    CraftRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._CraftRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            CraftRewardDialog_k__BackingField,
            (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_44;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v10,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EventCraftRewardDialogComponent___);
    this->fields.craftRewardDialog = (struct EventCraftRewardDialogComponent_o *)Component_object;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.craftRewardDialog, (int32_t)Component_object, v15, v16);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftRewardDialog,
      v17);
  }
  craftNumConfirmDialog = (UnityEngine_Object_o *)this->fields.craftNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftNumConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v19 = this->fields.assetManager;
    if ( !v19 )
      goto LABEL_44;
    CraftItemNumConfirmDialog_k__BackingField = (Il2CppObject *)v19->fields._CraftItemNumConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            CraftItemNumConfirmDialog_k__BackingField,
            (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_44;
    v21 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v10,
            (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EventCraftNumConfirmDialogComponent___);
    this->fields.craftNumConfirmDialog = (struct EventCraftNumConfirmDialogComponent_o *)v21;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.craftNumConfirmDialog, (int32_t)v21, v22, v23);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftNumConfirmDialog,
      v24);
  }
  craftWithdrawConfirmDialog = (UnityEngine_Object_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftWithdrawConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v26 = this->fields.assetManager;
    if ( !v26 )
      goto LABEL_44;
    CraftItemWithdrawConfirmDialog_k__BackingField = (Il2CppObject *)v26->fields._CraftItemWithdrawConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            CraftItemWithdrawConfirmDialog_k__BackingField,
            (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_44;
    v28 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v10,
            (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EventCraftWithdrawConfirmDialogComponent___);
    this->fields.craftWithdrawConfirmDialog = (struct EventCraftWithdrawConfirmDialogComponent_o *)v28;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.craftWithdrawConfirmDialog, (int32_t)v28, v29, v30);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftWithdrawConfirmDialog,
      v31);
  }
  craftUseSupportToolDialog = (UnityEngine_Object_o *)this->fields.craftUseSupportToolDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftUseSupportToolDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v33 = this->fields.assetManager;
    if ( !v33 )
      goto LABEL_44;
    CraftUseSupportToolDialog_k__BackingField = (Il2CppObject *)v33->fields._CraftUseSupportToolDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            CraftUseSupportToolDialog_k__BackingField,
            (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_44;
    v35 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v10,
            (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EventCraftUseSupportToolDialogComponent___);
    this->fields.craftUseSupportToolDialog = (struct EventCraftUseSupportToolDialogComponent_o *)v35;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.craftUseSupportToolDialog, (int32_t)v35, v36, v37);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftUseSupportToolDialog,
      v38);
  }
  craftFirstTimeSupportToolDialog = (UnityEngine_Object_o *)this->fields.craftFirstTimeSupportToolDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftFirstTimeSupportToolDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v40 = this->fields.assetManager;
    if ( v40 )
    {
      CraftFirstTimeSupportToolDialog_k__BackingField = (Il2CppObject *)v40->fields._CraftFirstTimeSupportToolDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__Instantiate_object_(
              CraftFirstTimeSupportToolDialog_k__BackingField,
              (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v10 )
      {
        v42 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v10,
                (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EventCraftFirstTimeSupportToolDialogComponent___);
        this->fields.craftFirstTimeSupportToolDialog = (struct EventCraftFirstTimeSupportToolDialogComponent_o *)v42;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.craftFirstTimeSupportToolDialog, (int32_t)v42, v43, v44);
        EventCraftListViewManager__LocateDialogToCraftPanel(
          this,
          (UnityEngine_Component_o *)this->fields.craftFirstTimeSupportToolDialog,
          v45);
        return;
      }
    }
LABEL_44:
    sub_1BCB254(v10, v11);
  }
}


void __fastcall EventCraftListViewManager__SetObjectItem(
        EventCraftListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 methodPtr_low; // x11
  System_Action_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_Action_object__o *v19; // x21
  System_Action_object__o *v20; // x22
  System_Action_object__o *v21; // x23
  System_Action_object__o *v22; // x24
  System_Action_object__o *v23; // x25

  v4 = obj;
  if ( (byte_4B20775 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_EventCraftListViewObject__TypeInfo, obj);
    sub_1BCAFF8(&System_Action_TypeInfo, v6);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickCraftStartButton__, v7);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickReceiveButton__, v8);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickReplenishmentButton__, v9);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickSupportToolButton__, v10);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnClickWithdrawalButton__, v11);
    sub_1BCAFF8(&Method_EventCraftListViewManager_OnMoveEnd__, v12);
    sub_1BCAFF8(&EventCraftListViewObject_TypeInfo, v13);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v14);
    byte_4B20775 = 1;
  }
  if ( v4 )
  {
    methodPtr_low = LOBYTE(EventCraftListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (EventCraftListViewObject_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCraftListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0LL, 0LL) )
  {
    v16 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_EventCraftListViewManager_OnMoveEnd__, 0LL);
    if ( !v4 )
      sub_1BCB254(v17, v18);
    EventCraftListViewObject__Init((EventCraftListViewObject_o *)v4, 2, v16, 0LL);
    v19 = (System_Action_object__o *)sub_1BCB244(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v19,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickCraftStartButton__,
      0LL);
    v20 = (System_Action_object__o *)sub_1BCB244(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v20,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickReceiveButton__,
      0LL);
    v21 = (System_Action_object__o *)sub_1BCB244(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickReplenishmentButton__,
      0LL);
    v22 = (System_Action_object__o *)sub_1BCB244(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickWithdrawalButton__,
      0LL);
    v23 = (System_Action_object__o *)sub_1BCB244(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickSupportToolButton__,
      0LL);
    EventCraftListViewObject__SetOnClickAction(
      (EventCraftListViewObject_o *)v4,
      (System_Action_EventCraftListViewObject__o *)v19,
      (System_Action_EventCraftListViewObject__o *)v20,
      (System_Action_EventCraftListViewObject__o *)v21,
      (System_Action_EventCraftListViewObject__o *)v22,
      (System_Action_EventCraftListViewObject__o *)v23,
      0LL);
  }
}


void __fastcall EventCraftListViewManager__SetReceiveAllButton(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t currentEventId; // w20
  UISprite_o *receiveAllButtonSprite; // x21
  UILabel_o *receiveAllButtonLabel; // x20
  __int64 receiveAllButton; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  struct EventCraftAssetManager_o *assetManager; // x8
  Il2CppObject *CraftButtonBlinkEffect_k__BackingField; // x21
  struct UnityEngine_GameObject_o **p_tradeButtonBlinkEffect; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Transform_o *v21; // x21

  if ( (byte_4B20771 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v4);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_3328/*"CHECK_TRADE_BUTTON_LABEL"*/, v6);
    sub_1BCAFF8(&StringLiteral_17344/*"btn_getreward"*/, v7);
    byte_4B20771 = 1;
  }
  currentEventId = this->fields.currentEventId;
  receiveAllButtonSprite = this->fields.receiveAllButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39794720(currentEventId, receiveAllButtonSprite, (System_String_o *)StringLiteral_17344/*"btn_getreward"*/, 0LL);
  receiveAllButtonLabel = this->fields.receiveAllButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveAllButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"CHECK_TRADE_BUTTON_LABEL"*/, 0LL);
  if ( !receiveAllButtonLabel )
    goto LABEL_22;
  UILabel__set_text(receiveAllButtonLabel, (System_String_o *)receiveAllButton, 0LL);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  receiveAllButton = UnityEngine_Object__op_Equality(tradeButtonBlinkEffect, 0LL, 0LL);
  if ( (receiveAllButton & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( assetManager )
    {
      receiveAllButton = (__int64)this->fields.receiveAllButton;
      if ( receiveAllButton )
      {
        CraftButtonBlinkEffect_k__BackingField = (Il2CppObject *)assetManager->fields._CraftButtonBlinkEffect_k__BackingField;
        p_tradeButtonBlinkEffect = &this->fields.tradeButtonBlinkEffect;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)receiveAllButton, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v18 = UnityEngine_Object__Instantiate_object__51002592(
                CraftButtonBlinkEffect_k__BackingField,
                transform,
                (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
        *p_tradeButtonBlinkEffect = (struct UnityEngine_GameObject_o *)v18;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.tradeButtonBlinkEffect, (int32_t)v18, v19, v20);
        receiveAllButton = (__int64)*p_tradeButtonBlinkEffect;
        if ( *p_tradeButtonBlinkEffect )
        {
          receiveAllButton = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)receiveAllButton,
                                        0LL);
          v21 = (UnityEngine_Transform_o *)receiveAllButton;
          if ( !byte_4B16196 )
          {
            receiveAllButton = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v12);
            byte_4B16196 = 1;
          }
          if ( v21 )
          {
            UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            receiveAllButton = (__int64)*p_tradeButtonBlinkEffect;
            if ( *p_tradeButtonBlinkEffect )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButton, 0, 0LL);
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1BCB254(receiveAllButton, v12);
  }
LABEL_21:
  EventCraftListViewManager__UpdateReceiveAllButtonState(this, v12);
}


void __fastcall EventCraftListViewManager__TradeReceiveResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  System_Object_array *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( (byte_4B20781 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___, result);
    sub_1BCAFF8(&JsonManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    sub_1BCAFF8(&StringLiteral_15670/*"["*/, v7);
    sub_1BCAFF8(&StringLiteral_15923/*"]"*/, v8);
    byte_4B20781 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL) )
  {
    v9 = (Il2CppObject *)System_String__Concat_62488672(
                           (System_String_o *)StringLiteral_15670/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_15923/*"]"*/,
                           0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__DeserializeArray_object_(
            v9,
            (const MethodInfo_3086694 *)Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    if ( !v10 )
      sub_1BCB254(0LL, v11);
    if ( !v10->max_length )
      sub_1BCB25C(v10, v11, v12);
    EventCraftListViewManager__OpenRewardDialog(this, (EventCraftListViewManager_ResData_o *)v10->m_Items[0], v12);
    EventCraftListViewManager__ResponseCommonProcess(this, 1, v13);
  }
}


void __fastcall EventCraftListViewManager__TradeReplenishmentResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x0
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20
  const MethodInfo *v9; // x2

  if ( (byte_4B20786 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, result);
    byte_4B20786 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL) )
  {
    selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
    if ( !selectTradeGoodsEntity
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          selectTradeGoodsEntity = (EventTradeGoodsEntity_o *)EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
                                                                selectTradeGoodsEntity,
                                                                0LL),
          !playVoiceAction) )
    {
      sub_1BCB254(selectTradeGoodsEntity, v5);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, EventTradeGoodsEntity_o *, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
      playVoiceAction->fields.original_method_info,
      svtId,
      selectTradeGoodsEntity,
      0LL,
      *(_QWORD *)&playVoiceAction->fields.extra_arg);
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v9);
  }
}


void __fastcall EventCraftListViewManager__TradeSupportToolResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4B2078D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, result);
    byte_4B2078D = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL) )
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v5);
}


bool __fastcall EventCraftListViewManager__TryGetAvailableStoreIdx(
        EventCraftListViewManager_o *this,
        int32_t *storeIdx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UserEventTradeMaster_o *Master_object; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x24
  unsigned __int64 v14; // x25
  __int64 v15; // x20
  const MethodInfo *v16; // x3
  EventTradeStoreEntity_o *v17; // x1
  __int64 v18; // x21
  System_Int32_array *v19; // x22
  System_Func_int__bool__o *v20; // x23
  struct EventTradeStoreEntity_array *v21; // x8
  __int64 v22; // x9
  EventTradeStoreEntity_o *v23; // x8
  int32_t *v25; // [xsp+8h] [xbp-78h]
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-70h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B20779 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_int____76918080, storeIdx);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventTradeMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v7);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__DisplayClass56_0__TryGetAvailableStoreIdx_b__0__, v8);
    sub_1BCAFF8(&EventCraftListViewManager___c__DisplayClass56_0_TypeInfo, v9);
    byte_4B20779 = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  *storeIdx = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    goto LABEL_26;
  Master_object = (UserEventTradeMaster_o *)UserEventTradeMaster__TryGetEntity(
                                              Master_object,
                                              &entity,
                                              this->fields.currentEventId,
                                              0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    Master_object = (UserEventTradeMaster_o *)entity;
    if ( !entity )
      goto LABEL_26;
    Master_object = (UserEventTradeMaster_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0LL);
    tradeStoreEntities = this->fields.tradeStoreEntities;
    if ( !tradeStoreEntities )
      goto LABEL_26;
    if ( (int)tradeStoreEntities->max_length >= 1 )
    {
      v25 = storeIdx;
      v14 = 0LL;
      while ( 1 )
      {
        v15 = sub_1BCB244(EventCraftListViewManager___c__DisplayClass56_0_TypeInfo);
        EventCraftListViewManager___c__DisplayClass56_0___ctor(
          (EventCraftListViewManager___c__DisplayClass56_0_o *)v15,
          0LL);
        if ( v14 >= tradeStoreEntities->max_length )
          goto LABEL_27;
        if ( !v15 )
          goto LABEL_26;
        v17 = tradeStoreEntities->m_Items[v14];
        *(_QWORD *)(v15 + 16) = v17;
        v18 = v15 + 16;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)v17, v12, v16);
        v19 = usedStoreIdx;
        v20 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v20,
          (Il2CppObject *)v15,
          Method_EventCraftListViewManager___c__DisplayClass56_0__TryGetAvailableStoreIdx_b__0__,
          0LL);
        Master_object = (UserEventTradeMaster_o *)BasicHelper__Any_int__50347164(
                                                    v19,
                                                    (System_Func_T__bool__o *)v20,
                                                    (const MethodInfo_3003C9C *)Method_BasicHelper_Any_int____76918080);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        if ( (__int64)++v14 >= (int)tradeStoreEntities->max_length )
          return 0;
      }
      if ( *(_QWORD *)v18 )
      {
        *v25 = *(_DWORD *)(*(_QWORD *)v18 + 20LL);
        return 1;
      }
LABEL_26:
      sub_1BCB254(Master_object, v11);
    }
    return 0;
  }
  v21 = this->fields.tradeStoreEntities;
  if ( !v21 )
    goto LABEL_26;
  v22 = *(_QWORD *)&v21->max_length;
  if ( !v22 )
    return 0;
  if ( !(_DWORD)v22 )
LABEL_27:
    sub_1BCB25C(Master_object, v11, v12);
  v23 = v21->m_Items[0];
  if ( !v23 )
    goto LABEL_26;
  *storeIdx = v23->fields.idx;
  return 1;
}


void __fastcall EventCraftListViewManager__UpdateCraftAbleCountLb(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x8
  int max_length; // w22
  il2cpp_array_size_t v10; // w8
  int v11; // w21
  System_String_o **v12; // x8
  System_String_o *v13; // x20
  UILabel_o *craftAbleCountLb; // x19
  System_String_o *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int v24; // [xsp+8h] [xbp-48h] BYREF
  int v25; // [xsp+Ch] [xbp-44h] BYREF
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-40h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4B20792 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventTradeMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&int_TypeInfo, v4);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_3877/*"CRAFT_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/, v6);
    this = (EventCraftListViewManager_o *)sub_1BCAFF8(&StringLiteral_3876/*"CRAFT_EVENT_TITLE_QUOTA_LABEL"*/, v7);
    byte_4B20792 = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  tradeStoreEntities = v2->fields.tradeStoreEntities;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !this )
    goto LABEL_20;
  if ( !UserEventTradeMaster__TryGetEntity((UserEventTradeMaster_o *)this, &entity, v2->fields.currentEventId, 0LL) )
    goto LABEL_12;
  this = (EventCraftListViewManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  this = (EventCraftListViewManager_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !usedStoreIdx )
      goto LABEL_20;
    v10 = usedStoreIdx->max_length;
  }
  else
  {
LABEL_12:
    v10 = 0;
  }
  v11 = max_length - v10;
  v12 = (System_String_o **)(max_length == v10 ? &StringLiteral_3877/*"CRAFT_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_3876/*"CRAFT_EVENT_TITLE_QUOTA_LABEL"*/);
  v13 = *v12;
  craftAbleCountLb = v2->fields.craftAbleCountLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get(v13, 0LL);
  v25 = v11;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v16, v17, v18);
  v24 = max_length;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22);
  this = (EventCraftListViewManager_o *)System_String__Format_62491716(v15, v19, v23, 0LL);
  if ( !craftAbleCountLb )
LABEL_20:
    sub_1BCB254(this, method);
  UILabel__set_text(craftAbleCountLb, (System_String_o *)this, 0LL);
}


void __fastcall EventCraftListViewManager__UpdateListObject(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x19
  EventCraftListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B20776 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__, v5);
    byte_4B20776 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)EventCraftListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1BCB254(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    ObjectList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1BCB254(v8, v9);
    Item = EventCraftListViewObject__GetItem((EventCraftListViewObject_o *)v12.fields._current, 0LL);
    EventCraftListViewObject__UpdateItem((EventCraftListViewObject_o *)current, Item, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
}


void __fastcall EventCraftListViewManager__UpdateNoticeButtonDisplay(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *craftNoticeBtnSp; // x0
  __int64 *v5; // x8

  if ( (byte_4B20791 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_17363/*"btn_on"*/, method);
    sub_1BCAFF8(&StringLiteral_17362/*"btn_off"*/, v3);
    byte_4B20791 = 1;
  }
  craftNoticeBtnSp = this->fields.craftNoticeBtnSp;
  if ( !craftNoticeBtnSp )
    sub_1BCB254(0LL, method);
  if ( this->fields.isButtonOn )
    v5 = &StringLiteral_17363/*"btn_on"*/;
  else
    v5 = &StringLiteral_17362/*"btn_off"*/;
  UISprite__set_spriteName(craftNoticeBtnSp, (System_String_o *)*v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager__UpdateReceiveAllButtonState(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *itemList; // x20
  EventCraftListViewManager___c_c *v8; // x0
  System_Func_object__bool__o *_9__49_0; // x21
  Il2CppObject *v10; // x22
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UICommonButton_o *receiveAllButton; // x8
  __int64 v15; // x1
  _BOOL4 v16; // w20
  float v17; // s0
  float v18; // s3
  float v19; // s1
  float v20; // s2
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21

  v2 = this;
  if ( (byte_4B20772 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_ListViewItem___, method);
    sub_1BCAFF8(&System_Func_ListViewItem__bool__TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__UpdateReceiveAllButtonState_b__49_0__, v5);
    this = (EventCraftListViewManager_o *)sub_1BCAFF8(&EventCraftListViewManager___c_TypeInfo, v6);
    byte_4B20772 = 1;
  }
  itemList = (System_Collections_Generic_List_T__o *)v2->fields.itemList;
  if ( !itemList )
  {
    receiveAllButton = v2->fields.receiveAllButton;
LABEL_13:
    v16 = 0;
    v15 = 3LL;
    goto LABEL_14;
  }
  v8 = EventCraftListViewManager___c_TypeInfo;
  if ( !EventCraftListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo);
    v8 = EventCraftListViewManager___c_TypeInfo;
  }
  _9__49_0 = (System_Func_object__bool__o *)v8->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventCraftListViewManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__49_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__49_0,
      v10,
      Method_EventCraftListViewManager___c__UpdateReceiveAllButtonState_b__49_0__,
      0LL);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Func_ListViewItem__bool__o *)_9__49_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v12, v13);
  }
  this = (EventCraftListViewManager_o *)BasicHelper__Any_object_(
                                          itemList,
                                          (System_Func_T__bool__o *)_9__49_0,
                                          (const MethodInfo_3003F1C *)Method_BasicHelper_Any_ListViewItem___);
  receiveAllButton = v2->fields.receiveAllButton;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_13;
  v15 = 0LL;
  v16 = 1;
LABEL_14:
  if ( !receiveAllButton )
    goto LABEL_24;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))receiveAllButton->klass->vtable._14_SetState.method)(
    receiveAllButton,
    v15,
    1LL,
    receiveAllButton->klass->vtable._15_OnPress.methodPtr);
  this = (EventCraftListViewManager_o *)v2->fields.receiveAllButtonLabel;
  v17 = 0.5;
  if ( v16 )
    v17 = 1.0;
  if ( !this )
    goto LABEL_24;
  v18 = 1.0;
  v19 = v17;
  v20 = v17;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v17, 0LL);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)v2->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0LL, 0LL) )
  {
    this = (EventCraftListViewManager_o *)v2->fields.tradeButtonBlinkEffect;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v16, 0LL);
      return;
    }
LABEL_24:
    sub_1BCB254(this, v15);
  }
}


void __fastcall EventCraftListViewManager__WithdrawalResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  System_Object_array *v10; // x0
  EventCraftListViewManager_ResData_o *v11; // x1
  const MethodInfo *v12; // x2
  struct BattleDropItem_array *resultTradeRewardInfos; // x8

  if ( (byte_4B2078A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___, result);
    sub_1BCAFF8(&JsonManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    sub_1BCAFF8(&StringLiteral_15670/*"["*/, v7);
    sub_1BCAFF8(&StringLiteral_15923/*"]"*/, v8);
    byte_4B2078A = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL) )
  {
    v9 = (Il2CppObject *)System_String__Concat_62488672(
                           (System_String_o *)StringLiteral_15670/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_15923/*"]"*/,
                           0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__DeserializeArray_object_(
            v9,
            (const MethodInfo_3086694 *)Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    if ( !v10 )
      goto LABEL_13;
    if ( !v10->max_length )
      sub_1BCB25C(v10, v11, v12);
    v11 = (EventCraftListViewManager_ResData_o *)v10->m_Items[0];
    if ( !v11 || (resultTradeRewardInfos = v11->fields.resultTradeRewardInfos) == 0LL )
LABEL_13:
      sub_1BCB254(v10, v11);
    if ( *(_QWORD *)&resultTradeRewardInfos->max_length )
      EventCraftListViewManager__OpenRewardDialog(this, v11, v12);
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v12);
  }
}


void __fastcall EventCraftListViewManager___OnClickCraftStartButton_b__57_0(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1BCB254(0LL, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


bool __fastcall EventCraftListViewManager___OpenReplenishmentDialog_b__66_0(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *x,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *v3; // x19
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  struct EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x9

  if ( !x
    || (v3 = this, (this = (EventCraftListViewManager_o *)EventCraftListViewObject__GetItem(x, 0LL)) == 0LL)
    || (dragParentObject = this->fields.dragParentObject) == 0LL
    || (selectTradeGoodsEntity = v3->fields.selectTradeGoodsEntity) == 0LL )
  {
    sub_1BCB254(this, x);
  }
  return dragParentObject->fields.m_CachedPtr == selectTradeGoodsEntity->fields.id;
}


int32_t __fastcall EventCraftListViewManager__get_ItemBaseWindowHeight(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  struct ShopCurrencyInfoController_o *currencyInfoController; // x8

  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
    sub_1BCB254(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventCraftListViewObject__o *__fastcall EventCraftListViewManager__get_ObjectList(
        EventCraftListViewManager_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_TSource__o *v19; // x0
  EventCraftListViewManager___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_object__bool__o *_9__41_0; // x21
  Il2CppObject *v23; // x22
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_T__o *v27; // x20
  System_Action_object__o *v28; // x21

  if ( (byte_4B2076C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_GameObject__TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_GameObject___, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_GameObject___, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_GameObject___, v5);
    sub_1BCAFF8(&System_Func_GameObject__bool__TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventCraftListViewObject___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_EventCraftListViewObject__TypeInfo, v8);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__get_ObjectList_b__41_0__, v9);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__DisplayClass41_0__get_ObjectList_b__1__, v10);
    sub_1BCAFF8(&EventCraftListViewManager___c__DisplayClass41_0_TypeInfo, v11);
    sub_1BCAFF8(&EventCraftListViewManager___c_TypeInfo, v12);
    byte_4B2076C = 1;
  }
  v13 = sub_1BCB244(EventCraftListViewManager___c__DisplayClass41_0_TypeInfo);
  EventCraftListViewManager___c__DisplayClass41_0___ctor((EventCraftListViewManager___c__DisplayClass41_0_o *)v13, 0LL);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventCraftListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventCraftListViewObject___ctor__);
  if ( !v13 )
    sub_1BCB254(v15, v16);
  *(_QWORD *)(v13 + 16) = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)v14, v17, v18);
  v19 = System_Linq_Enumerable__ToList_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.objectList,
          (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v20 = EventCraftListViewManager___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !EventCraftListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo);
    v20 = EventCraftListViewManager___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v20->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = EventCraftListViewManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_0, v23, Method_EventCraftListViewManager___c__get_ObjectList_b__41_0__, 0LL);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_GameObject__bool__o *)_9__41_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v21,
                                                         (System_Func_TSource__bool__o *)_9__41_0,
                                                         (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v28 = (System_Action_object__o *)sub_1BCB244(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)v13,
    Method_EventCraftListViewManager___c__DisplayClass41_0__get_ObjectList_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v27,
    (System_Action_T__o *)v28,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_GameObject___);
  return *(System_Collections_Generic_List_EventCraftListViewObject__o **)(v13 + 16);
}


void __fastcall EventCraftListViewManager_ResData___ctor(
        EventCraftListViewManager_ResData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45___ctor(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45__MoveNext(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  EventCraftListViewManager___c_c *v7; // x0
  System_Func_bool__o *_9__45_0; // x20
  Il2CppObject *v9; // x21
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x0
  UnityEngine_WaitWhile_o *v11; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct EventCraftListViewManager_o *_4__this; // x20

  v2 = this;
  if ( (byte_4B1685A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__CoFirstTimeDialogOpenAfterLoginBonus_b__45_0__, v3);
    sub_1BCAFF8(&EventCraftListViewManager___c_TypeInfo, v4);
    this = (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)sub_1BCAFF8(
                                                                                        &UnityEngine_WaitWhile_TypeInfo,
                                                                                        v5);
    byte_4B1685A = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this
      || (this = (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)_4__this->fields.craftFirstTimeSupportToolDialog) == 0LL
      || (EventCraftFirstTimeSupportToolDialogComponent__Init(
            (EventCraftFirstTimeSupportToolDialogComponent_o *)this,
            0LL),
          (this = (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)_4__this->fields.craftFirstTimeSupportToolDialog) == 0LL) )
    {
      sub_1BCB254(this, method);
    }
    EventCraftFirstTimeSupportToolDialogComponent__Open(
      (EventCraftFirstTimeSupportToolDialogComponent_o *)this,
      _4__this->fields.supportTool,
      0LL,
      0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v7 = EventCraftListViewManager___c_TypeInfo;
  if ( !EventCraftListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo);
    v7 = EventCraftListViewManager___c_TypeInfo;
  }
  _9__45_0 = v7->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventCraftListViewManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__45_0 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__45_0,
      v9,
      Method_EventCraftListViewManager___c__CoFirstTimeDialogOpenAfterLoginBonus_b__45_0__,
      0LL);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = _9__45_0;
    sub_1BCAF9C(&static_fields->__9__45_0);
  }
  v11 = (UnityEngine_WaitWhile_o *)sub_1BCB244(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v11, _9__45_0, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = &v2->fields.__2__current;
  sub_1BCAF9C(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45__System_Collections_IEnumerator_Reset(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45__System_Collections_IEnumerator_get_Current(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45__System_IDisposable_Dispose(
        EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventCraftListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B16852 & 1) == 0 )
  {
    sub_1BCAFF8(&EventCraftListViewManager___c_TypeInfo, v1);
    byte_4B16852 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(EventCraftListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftListViewManager___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewManager___c_o *)v2;
  sub_1BCAF9C(EventCraftListViewManager___c_TypeInfo->static_fields);
}


void __fastcall EventCraftListViewManager___c___ctor(EventCraftListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCraftListViewManager___c___CoFirstTimeDialogOpenAfterLoginBonus_b__45_0(
        EventCraftListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v8; // x1
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o *v10; // x8

  if ( (byte_4B16854 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&ScrTerminalMap_TypeInfo, v2);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v3);
    byte_4B16854 = 1;
  }
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  if ( ScrTerminalMap__IsDialogOnActive(0LL) )
    return 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v4);
    byte_4B1676D = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v8);
    byte_4B1676D = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  v10 = v9->static_fields->mInstance;
  if ( !v10 )
    sub_1BCB254(v9, v8);
  return v10->fields._IsPlayingCampaignDirectBonus_k__BackingField;
}


bool __fastcall EventCraftListViewManager___c___UpdateReceiveAllButtonState_b__49_0(
        EventCraftListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x19
  __int64 methodPtr_low; // x10

  v3 = item;
  if ( (byte_4B16855 & 1) == 0 )
  {
    sub_1BCAFF8(&EventCraftListViewItem_TypeInfo, item);
    byte_4B16855 = 1;
  }
  if ( !v3 )
    return 0;
  methodPtr_low = LOBYTE(EventCraftListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0;
  if ( (EventCraftListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCraftListViewItem_TypeInfo )
    v3 = 0LL;
  if ( !v3 )
    return 0;
  EventCraftListViewItem__UpdateCraftUserInfo((EventCraftListViewItem_o *)v3, 0LL);
  return EventCraftListViewItem__get_IsAbleReceiveRewards((EventCraftListViewItem_o *)v3, 0LL);
}


bool __fastcall EventCraftListViewManager___c___get_ObjectList_b__41_0(
        EventCraftListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4B16853 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, go);
    byte_4B16853 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0LL, 0LL);
}


void __fastcall EventCraftListViewManager___c__DisplayClass41_0___ctor(
        EventCraftListViewManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftListViewManager___c__DisplayClass41_0___get_ObjectList_b__1(
        EventCraftListViewManager___c__DisplayClass41_0_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  EventCraftListViewManager___c__DisplayClass41_0_o *v4; // x19
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *list; // x19
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  EventCraftListViewManager___c__DisplayClass41_0_o *v10; // x1
  Il2CppClass **v11; // x0

  v4 = this;
  if ( (byte_4B16856 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___, go);
    this = (EventCraftListViewManager___c__DisplayClass41_0_o *)sub_1BCAFF8(
                                                                  &Method_System_Collections_Generic_List_EventCraftListViewObject__Add__,
                                                                  v5);
    byte_4B16856 = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventCraftListViewManager___c__DisplayClass41_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      go,
                                                                      (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___),
        !list)
    || (items = list->fields._items,
        v8 = Method_System_Collections_Generic_List_EventCraftListViewObject__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_1BCB254(this, go);
  }
  size = list->fields._size;
  v10 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    list->fields._size = size + 1;
    v11 = &items->obj.klass + size;
    v11[4] = (Il2CppClass *)v10;
    sub_1BCAF9C(v11 + 4);
  }
}


void __fastcall EventCraftListViewManager___c__DisplayClass44_0___ctor(
        EventCraftListViewManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCraftListViewManager___c__DisplayClass44_0___Init_b__0(
        EventCraftListViewManager___c__DisplayClass44_0_o *this,
        ItemEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return ItemEntity__GetEventId(x, 0LL) == this->fields.eventId;
}


void __fastcall EventCraftListViewManager___c__DisplayClass44_0___Init_b__1(
        EventCraftListViewManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *_4__this; // x0
  EventCraftListViewManager_o *v4; // x19
  System_Collections_IEnumerator_o *TimeDialogOpenAfterLoginBonus; // x1

  if ( (byte_4B16857 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_4795/*"CraftFirstTimeSupportToolDisplay"*/, method);
    byte_4B16857 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  EventCraftListViewManager__SetCraftObject(_4__this, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  EventCraftListViewManager__SetReceiveAllButton(_4__this, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  EventCraftListViewManager__CreateList(_4__this, 0LL);
  if ( UnityEngine_PlayerPrefs__GetInt_70094320((System_String_o *)StringLiteral_4795/*"CraftFirstTimeSupportToolDisplay"*/, 0LL) == 0
    && this->fields.isGetEntity )
  {
    _4__this = (EventCraftListViewManager_o *)this->fields.eventEntity;
    if ( !_4__this )
      goto LABEL_12;
    if ( EventEntity__IsEventPeriod((EventEntity_o *)_4__this, 0LL, 0LL) )
    {
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4795/*"CraftFirstTimeSupportToolDisplay"*/, 1, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      v4 = this->fields.__4__this;
      if ( v4 )
      {
        TimeDialogOpenAfterLoginBonus = EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus(v4, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_70121648(
          (UnityEngine_MonoBehaviour_o *)v4,
          TimeDialogOpenAfterLoginBonus,
          0LL);
        return;
      }
LABEL_12:
      sub_1BCB254(_4__this, method);
    }
  }
}


void __fastcall EventCraftListViewManager___c__DisplayClass56_0___ctor(
        EventCraftListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCraftListViewManager___c__DisplayClass56_0___TryGetAvailableStoreIdx_b__0(
        EventCraftListViewManager___c__DisplayClass56_0_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct EventTradeStoreEntity_o *storeEntity; // x8

  storeEntity = this->fields.storeEntity;
  if ( !storeEntity )
    sub_1BCB254(this, idx);
  return storeEntity->fields.idx == idx;
}


void __fastcall EventCraftListViewManager___c__DisplayClass70_0___ctor(
        EventCraftListViewManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager___c__DisplayClass70_0___OnClickWithdrawalButton_b__0(
        EventCraftListViewManager___c__DisplayClass70_0_o *this,
        bool value,
        const MethodInfo *method)
{
  struct EventCraftListViewManager_o *_4__this; // x19

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
        EventCraftListViewManager__OpenReconfirmDialog(_4__this, (EventCraftListViewItem_o *)this, 0LL);
        return;
      }
    }
LABEL_8:
    sub_1BCB254(this, value);
  }
  if ( !_4__this )
    goto LABEL_8;
  this = (EventCraftListViewManager___c__DisplayClass70_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventCraftListViewManager___c__DisplayClass71_0___ctor(
        EventCraftListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager___c__DisplayClass71_0___OpenReconfirmDialog_b__0(
        EventCraftListViewManager___c__DisplayClass71_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v12; // x20

  if ( (byte_4B16858 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, decide);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__DisplayClass71_1__OpenReconfirmDialog_b__1__, v6);
    sub_1BCAFF8(&EventCraftListViewManager___c__DisplayClass71_1_TypeInfo, v7);
    byte_4B16858 = 1;
  }
  v8 = sub_1BCB244(EventCraftListViewManager___c__DisplayClass71_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1BCAF9C(v8 + 24),
        *(_BYTE *)(v8 + 16) = decide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v8,
          Method_EventCraftListViewManager___c__DisplayClass71_1__OpenReconfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCB254(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30764080((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall EventCraftListViewManager___c__DisplayClass71_0___OpenReconfirmDialog_b__2(
        EventCraftListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  EventCraftListViewManager__OnClickWithdrawalDecide(_4__this, this->fields.item, 0LL);
}


void __fastcall EventCraftListViewManager___c__DisplayClass71_1___ctor(
        EventCraftListViewManager___c__DisplayClass71_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftListViewManager___c__DisplayClass71_1___OpenReconfirmDialog_b__1(
        EventCraftListViewManager___c__DisplayClass71_1_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager___c__DisplayClass71_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventCraftListViewManager___c__DisplayClass71_0_o *CS___8__locals1; // x9
  struct EventCraftListViewManager_o *_4__this; // x8
  struct EventCraftListViewItem_o *item; // x9
  struct EventCraftListViewManager___c__DisplayClass71_0_o *v11; // x8
  int32_t oldCompleteNum; // w20
  struct EventCraftListViewManager___c__DisplayClass71_0_o *v13; // x8
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  Il2CppObject *v16; // x23
  System_Action_o *monitor; // x22
  EventCraftListViewManager___c__DisplayClass71_1_o *v18; // x19

  v2 = this;
  if ( (byte_4B16859 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&string_TypeInfo, v5);
    sub_1BCAFF8(&Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__2__, v6);
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)sub_1BCAFF8(&StringLiteral_3871/*"CRAFT_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/, v7);
    byte_4B16859 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_23;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( v2->fields.decide )
  {
    item = CS___8__locals1->fields.item;
    if ( !item )
      goto LABEL_23;
    if ( !_4__this )
      goto LABEL_23;
    _4__this->fields.selectTradeGoodsEntity = item->fields._TradeGoodsEntity_k__BackingField;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)sub_1BCAF9C(&_4__this->fields.selectTradeGoodsEntity);
    v11 = v2->fields.CS___8__locals1;
    if ( !v11 )
      goto LABEL_23;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)v11->fields.item;
    if ( !this )
      goto LABEL_23;
    oldCompleteNum = v11->fields.oldCompleteNum;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)EventCraftListViewItem__get_NowCompleteNum(
                                                                  (EventCraftListViewItem_o *)this,
                                                                  0LL);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v13 = v2->fields.CS___8__locals1;
      if ( v13 )
      {
        this = (EventCraftListViewManager___c__DisplayClass71_1_o *)v13->fields.__4__this;
        if ( this )
        {
          EventCraftListViewManager__OnClickWithdrawalDecide((EventCraftListViewManager_o *)this, v13->fields.item, 0LL);
          return;
        }
      }
LABEL_23:
      sub_1BCB254(this, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3871/*"CRAFT_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
                                                                  0LL);
    v16 = (Il2CppObject *)v2->fields.CS___8__locals1;
    if ( !v16 )
      goto LABEL_23;
    monitor = (System_Action_o *)v16[2].monitor;
    v18 = this;
    if ( !monitor )
    {
      monitor = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        monitor,
        v16,
        Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__2__,
        0LL);
      v16[2].monitor = monitor;
      this = (EventCraftListViewManager___c__DisplayClass71_1_o *)sub_1BCAF9C(&v16[2].monitor);
    }
    if ( !Instance )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      Empty,
      (System_String_o *)v18,
      monitor,
      -1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0LL,
      -2.0,
      0,
      0LL);
  }
  else
  {
    if ( !_4__this )
      goto LABEL_23;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)_4__this->fields.craftWithdrawConfirmDialog;
    if ( !this )
      goto LABEL_23;
    EventCraftWithdrawConfirmDialogComponent__Close((EventCraftWithdrawConfirmDialogComponent_o *)this, method);
  }
}
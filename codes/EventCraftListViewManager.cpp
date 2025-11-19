void EventCraftListViewManager___ctor(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventCraftListViewManager__CheckIsSerializeFieldNotNull(Il2CppObject *targetObj, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  int monitor; // w8
  Il2CppObject *v4; // x20
  unsigned int v5; // w24
  System_Reflection_MemberInfo_o *v6; // x21
  Il2CppType *v7; // x22
  System_RuntimeTypeHandle_o v8; // x0
  System_Type_o *TypeFromHandle; // x0
  int v10; // w22
  __int64 v11; // x23
  System_RuntimeTypeHandle_o v12; // x0

  v2 = targetObj;
  if ( (byte_4CB04AA & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_var);
    sub_1C6BA08(&UnityEngine_SerializeField_var);
    targetObj = (Il2CppObject *)sub_1C6BA08(&System_Type_TypeInfo);
    byte_4CB04AA = 1;
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
  v4 = targetObj;
  if ( monitor >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= monitor )
        sub_1C6BC68(targetObj);
      v6 = (System_Reflection_MemberInfo_o *)*((_QWORD *)&v4[2].klass + (int)v5);
      v7 = UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v8.fields.value = (intptr_t)v7;
      TypeFromHandle = System_Type__GetTypeFromHandle(v8, 0);
      targetObj = (Il2CppObject *)System_Reflection_CustomAttributeExtensions__IsDefined(v6, TypeFromHandle, 0);
      if ( !v6 )
        break;
      v10 = (int)targetObj;
      v11 = ((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v6->klass[1]._1.name)(
              v6,
              v6->klass[1]._1.namespaze);
      v12.fields.value = (intptr_t)UnityEngine_Object_var;
      targetObj = (Il2CppObject *)System_Type__GetTypeFromHandle(v12, 0);
      if ( !v11 )
        break;
      targetObj = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v11 + 648LL))(
                                    v11,
                                    targetObj,
                                    *(_QWORD *)(*(_QWORD *)v11 + 656LL));
      if ( (v10 & (unsigned int)targetObj & 1) != 0 )
        targetObj = (Il2CppObject *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, Il2CppObject *, void *))v6->klass[1]._1.properties)(
                                      v6,
                                      v2,
                                      v6->klass[1]._1.methods);
      monitor = (int)v4[1].monitor;
      if ( (int)++v5 >= monitor )
        return;
    }
LABEL_17:
    sub_1C6BC60(targetObj, method);
  }
}


void EventCraftListViewManager__CheckIsSerializeFieldNotNull_31869244(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4CB04AC & 1) == 0 )
  {
    sub_1C6BA08(&EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_TypeInfo);
    byte_4CB04AC = 1;
  }
  v3 = (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)sub_1C6BC54(EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_TypeInfo);
  EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45___ctor(v3, 0, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  v3->fields.__4__this = this;
  sub_1C6B9AC(&v3->fields.__4__this, this);
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

  if ( (byte_4CB04B9 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB04B9 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
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
      sub_1C6BC60(selectTradeGoodsEntity, v5);
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
  unsigned int v7; // w27
  EventTradeGoodsEntity_o *v8; // x21
  int32_t id; // w22
  ItemEntity_o *supportTool; // x23
  int32_t currentEventId; // w24
  System_Action_o *v12; // x25
  EventCraftListViewItem_o *v13; // x20
  const MethodInfo *v14; // x6
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  struct EventTradeGoodsEntity_array *v19; // x8
  UILabel_o *emptyMessageLabel; // x20

  if ( (byte_4CB04B0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&EventCraftListViewItem_TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager_UpdateReceiveAllButtonState__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_5698/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_4CB04B0 = 1;
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
        sub_1C6BC68(itemList);
      v8 = tradeGoodsEntities->m_Items[v7];
      if ( !v8 )
        break;
      id = v8->fields.id;
      supportTool = this->fields.supportTool;
      currentEventId = this->fields.currentEventId;
      v12 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_EventCraftListViewManager_UpdateReceiveAllButtonState__, 0);
      v13 = (EventCraftListViewItem_o *)sub_1C6BC54(EventCraftListViewItem_TypeInfo);
      EventCraftListViewItem___ctor(v13, id, v8, supportTool, currentEventId, v12, v14);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v16 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v13,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v13;
        itemList = (System_Collections_Generic_List_object__o *)sub_1C6B9AC(v18 + 4, v13);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_14;
    }
LABEL_21:
    sub_1C6BC60(itemList, v4);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
  v19 = this->fields.tradeGoodsEntities;
  if ( !v19 )
    goto LABEL_21;
  if ( !v19->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5698/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
                                                              0);
    if ( !emptyMessageLabel )
      goto LABEL_21;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0);
  }
  EventCraftListViewManager__RequestListObject(this, v4);
}


void EventCraftListViewManager__DestroyList(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  EventCraftAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *craftRewardDialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *currencyInfoController; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *craftNumConfirmDialog; // x20
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *craftWithdrawConfirmDialog; // x20
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  UnityEngine_Object_o *v14; // x21

  if ( (byte_4CB04D0 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB04D0 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventCraftAssetManager__Release(assetManager, this->fields.currentEventId, v3);
  craftRewardDialog = (UnityEngine_Object_o *)this->fields.craftRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(craftRewardDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
    this->fields.craftRewardDialog = 0;
    sub_1C6B9AC(&this->fields.craftRewardDialog, 0);
  }
  craftNumConfirmDialog = (UnityEngine_Object_o *)this->fields.craftNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(craftNumConfirmDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftNumConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(v10, 0);
    this->fields.craftNumConfirmDialog = 0;
    sub_1C6B9AC(&this->fields.craftNumConfirmDialog, 0);
  }
  craftWithdrawConfirmDialog = (UnityEngine_Object_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(craftWithdrawConfirmDialog, 0, 0) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftWithdrawConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(v12, 0);
    this->fields.craftWithdrawConfirmDialog = 0;
    sub_1C6B9AC(&this->fields.craftWithdrawConfirmDialog, 0);
  }
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0, 0) )
  {
    v14 = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(v14, 0);
    this->fields.tradeButtonBlinkEffect = 0;
    sub_1C6B9AC(&this->fields.tradeButtonBlinkEffect, 0);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_34:
    sub_1C6BC60(currencyInfoController, v6);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0);
}


int32_t EventCraftListViewManager__GetSupportToolItemId(
        EventCraftListViewManager_o *this,
        bool isUseSupportTool,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v7; // x0
  struct ItemEntity_o *supportTool; // x8
  int32_t id; // w3
  struct ItemEntity_o *v10; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB04CC & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB04CC = 1;
  }
  entity = 0;
  if ( !isUseSupportTool )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  supportTool = this->fields.supportTool;
  if ( supportTool )
  {
    id = supportTool->fields.id;
    if ( !Master_object )
LABEL_22:
      sub_1C6BC60(v7, v5);
  }
  else
  {
    id = 0;
    if ( !Master_object )
      goto LABEL_22;
  }
  v7 = (NetworkManager_c *)UserItemMaster__TryGetEntity(
                             (UserItemMaster_o *)Master_object,
                             &entity,
                             v7->static_fields->userIdNumber,
                             id,
                             0);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_22;
  if ( entity->fields.num >= 1 && (v10 = this->fields.supportTool) != 0 )
    return v10->fields.id;
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
  int32_t v16; // w8
  ItemEntity_array *EntityList; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x22
  System_Func_object__bool__o *v19; // x23
  Il2CppObject *v20; // x1
  System_Int32_array *EventItemList; // x21
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x23
  EventDetailEntity_o *v24; // x22
  System_Collections_Generic_List_object__o *v25; // x24
  ShopCurrencyInfoController_o *v26; // x23
  int32_t v27; // w24
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  EventCraftAssetManager_o *v30; // x22
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  UILabel_o *craftNoticeLb; // x21
  const MethodInfo *v34; // x1
  int32_t v35; // w21
  EventCraftAssetManager_o *assetManager; // x19
  System_Action_o *v37; // x22
  const MethodInfo *v38; // x3

  if ( (byte_4CB04AB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_ItemEntity___);
    sub_1C6BA08(&EventCraftAssetManager_TypeInfo);
    sub_1C6BA08(&System_Func_ItemEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__0__);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__1__);
    sub_1C6BA08(&EventCraftListViewManager___c__DisplayClass44_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_3895/*"CRAFT_EVENT_PUSH_BTN_LABEL"*/);
    byte_4CB04AB = 1;
  }
  v13 = sub_1C6BC54(EventCraftListViewManager___c__DisplayClass44_0_TypeInfo);
  EventCraftListViewManager___c__DisplayClass44_0___ctor((EventCraftListViewManager___c__DisplayClass44_0_o *)v13, 0);
  if ( !v13 )
    goto LABEL_35;
  *(_QWORD *)(v13 + 24) = this;
  *(_DWORD *)(v13 + 16) = eventId;
  sub_1C6B9AC(v13 + 24, this);
  v16 = *(_DWORD *)(v13 + 16);
  this->fields.svtId = guidSvtId;
  this->fields.currentEventId = v16;
  this->fields.craftCallback = callback;
  sub_1C6B9AC(&this->fields.craftCallback, callback);
  this->fields.playVoiceAction = playVoice;
  sub_1C6B9AC(&this->fields.playVoiceAction, playVoice);
  this->fields.maskPanel = mask;
  sub_1C6B9AC(&this->fields.maskPanel, mask);
  this->fields.selectTradeGoodsEntity = 0;
  sub_1C6B9AC(&this->fields.selectTradeGoodsEntity, 0);
  if ( this->fields.supportTool )
    goto LABEL_12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
LABEL_35:
    sub_1C6BC60(Master_object, v15);
  EntityList = ItemMaster__GetEntityList(Master_object, 39, 0);
  if ( EntityList )
  {
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
    v19 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ItemEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)v13,
      Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__0__,
      0);
    v20 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
            v18,
            (System_Func_TSource__bool__o *)v19,
            (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_ItemEntity___);
  }
  else
  {
    v20 = 0;
  }
  this->fields.supportTool = (struct ItemEntity_o *)v20;
  sub_1C6B9AC(&this->fields.supportTool, v20);
LABEL_12:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_35;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Master_object, *(_DWORD *)(v13 + 16), 0);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             *(_DWORD *)(v13 + 16),
             (const MethodInfo_33F90DC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v24 = (EventDetailEntity_o *)Entity;
  v25 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_35;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v25;
  Master_object = (ItemMaster_o *)sub_1C6B9AC(&currencyInfoController->fields.objectList, v25);
  if ( !v24 )
    goto LABEL_35;
  v26 = this->fields.currencyInfoController;
  v27 = *(_DWORD *)(v13 + 16);
  Master_object = (ItemMaster_o *)EventDetailEntity__IsForcedAdjustmentDialog(v24, 0);
  if ( !v26 )
    goto LABEL_35;
  ShopCurrencyInfoController__RefreshEventItemInfo(v26, 6, v27, 1, EventItemList, (unsigned __int8)Master_object & 1, 0);
  Master_object = (ItemMaster_o *)this->fields.currencyInfoController;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ItemMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_35;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            (EventTradeGoodsMaster_o *)Master_object,
                            this->fields.currentEventId,
                            0);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_1C6B9AC(&this->fields.tradeGoodsEntities, TradeGoodsEntityArray);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_35;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1C6B9AC(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
  Master_object = (ItemMaster_o *)this->fields.touchPanel;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ItemMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  if ( !this->fields.assetManager )
  {
    v30 = (EventCraftAssetManager_o *)sub_1C6BC54(EventCraftAssetManager_TypeInfo);
    EventCraftAssetManager___ctor(v30, v31);
    this->fields.assetManager = v30;
    sub_1C6B9AC(&this->fields.assetManager, v30);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetCraftNotification(0);
  EventCraftListViewManager__UpdateNoticeButtonDisplay(this, v32);
  craftNoticeLb = this->fields.craftNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3895/*"CRAFT_EVENT_PUSH_BTN_LABEL"*/, 0);
  if ( !craftNoticeLb )
    goto LABEL_35;
  UILabel__set_text(craftNoticeLb, (System_String_o *)Master_object, 0);
  EventCraftListViewManager__UpdateCraftAbleCountLb(this, v34);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_35;
  *(_BYTE *)(v13 + 32) = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           (Il2CppObject **)(v13 + 40),
                           this->fields.currentEventId,
                           (const MethodInfo_33F9128 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  v35 = *(_DWORD *)(v13 + 16);
  assetManager = this->fields.assetManager;
  v37 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)v13, Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__1__, 0);
  if ( !assetManager )
    goto LABEL_35;
  EventCraftAssetManager__LoadAssets(assetManager, v35, v37, v38);
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
  if ( !byte_4CAFC0E )
  {
    this = (EventCraftListViewManager_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventCraftListViewManager_o *)UnityEngine_Component__get_gameObject(dialog, 0)) == 0) )
  {
LABEL_9:
    sub_1C6BC60(this, dialog);
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
  bool IsBuyAble; // w21
  _QWORD *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x0
  int32_t v14; // w22
  ItemEntity_o *supportTool; // x23
  EventCraftListViewItem_o *v16; // x24
  System_Action_T1__T2__T3__o *v17; // x25
  struct EventTradeGoodsEntity_o *monitor; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  System_Action_o *v22; // x23
  int32_t storeIdx; // [xsp+3Ch] [xbp-44h] BYREF

  if ( (byte_4CB04B7 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int____int__bool__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickCraftStartButton__);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickCraftStartDecide__);
    sub_1C6BA08(&Method_EventCraftListViewManager__OnClickCraftStartButton_b__57_0__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_3893/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3892/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_4CB04B7 = 1;
  }
  storeIdx = 0;
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !obj )
    goto LABEL_24;
  displayMode = obj->fields.displayMode;
  if ( displayMode <= 5 && ((1 << displayMode) & 0x33) == 0 )
  {
    maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0);
    if ( maskPanel )
    {
      IsBuyAble = EventCraftListViewItem__get_IsBuyAble((EventCraftListViewItem_o *)maskPanel, (const MethodInfo *)obj);
      v8 = Method_EventCraftListViewManager_OnClickCraftStartButton__;
      if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickCraftStartButton__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C6BA20(Method_EventCraftListViewManager_OnClickCraftStartButton__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v8, v8[4]);
      if ( !IsBuyAble )
      {
        OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
        goto LABEL_7;
      }
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      if ( EventCraftListViewManager__TryGetAvailableStoreIdx(this, &storeIdx, v10) )
      {
        EventCraftListViewManager__UpdateListObject(this, v11);
        maskPanel = (UnityEngine_GameObject_o *)this->fields.craftNumConfirmDialog;
        if ( maskPanel )
        {
          EventCraftNumConfirmDialogComponent__Init((EventCraftNumConfirmDialogComponent_o *)maskPanel, 0);
          craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
          Item = EventCraftListViewObject__GetItem(obj, 0);
          v14 = storeIdx;
          supportTool = this->fields.supportTool;
          v16 = Item;
          v17 = (System_Action_T1__T2__T3__o *)sub_1C6BC54(System_Action_int____int__bool__TypeInfo);
          System_Action_object__int__bool____ctor(
            v17,
            (Il2CppObject *)this,
            Method_EventCraftListViewManager_OnClickCraftStartDecide__,
            0);
          if ( craftNumConfirmDialog )
          {
            EventCraftNumConfirmDialogComponent__Open(
              craftNumConfirmDialog,
              v16,
              v14,
              supportTool,
              (System_Action_int____int__bool__o *)v17,
              0,
              0);
            maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0);
            if ( maskPanel )
            {
              monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
              this->fields.selectTradeGoodsEntity = monitor;
              sub_1C6B9AC(&this->fields.selectTradeGoodsEntity, monitor);
              goto LABEL_7;
            }
          }
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3893/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_TITLE"*/, 0);
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3892/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
        v22 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(
          v22,
          (Il2CppObject *)this,
          Method_EventCraftListViewManager__OnClickCraftStartButton_b__57_0__,
          0);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog_31418656(
            (CommonUI_o *)Instance,
            v20,
            v21,
            v22,
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
          return;
        }
      }
    }
LABEL_24:
    sub_1C6BC60(maskPanel, obj);
  }
LABEL_7:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
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
  const MethodInfo *v11; // x2
  int32_t currentEventId; // w24
  int32_t v13; // w21
  int32_t v14; // w25
  TradeStartRequest_o *v15; // x23

  if ( (byte_4CB04B8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventCraftListViewManager_CraftStartResponse__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB04B8 = 1;
  }
  craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
  if ( !craftNumConfirmDialog )
    goto LABEL_13;
  EventCraftNumConfirmDialogComponent__Close(craftNumConfirmDialog, 0);
  craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !craftNumConfirmDialog )
    goto LABEL_13;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 1, 0);
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_CraftStartResponse__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                       v10,
                                                                       (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeInfo )
    {
      if ( LODWORD(tradeInfo->max_length) < 2 )
        sub_1C6BC68(craftNumConfirmDialog);
      currentEventId = this->fields.currentEventId;
      v14 = tradeInfo->m_Items[0];
      v13 = tradeInfo->m_Items[1];
      v15 = (TradeStartRequest_o *)craftNumConfirmDialog;
      craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)EventCraftListViewManager__GetSupportToolItemId(
                                                                         this,
                                                                         isUseSupportTool,
                                                                         v11);
      if ( v15 )
      {
        TradeStartRequest__beginRequest(v15, currentEventId, v14, v13, createNum, (int32_t)craftNumConfirmDialog, 0);
        return;
      }
    }
LABEL_13:
    sub_1C6BC60(craftNumConfirmDialog, tradeInfo);
  }
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

  if ( (byte_4CB04B5 & 1) == 0 )
  {
    this = (EventCraftListViewManager_o *)sub_1C6BA08(&Method_EventCraftListViewManager_OnClickListView__);
    byte_4CB04B5 = 1;
  }
  if ( !obj || (this = (EventCraftListViewManager_o *)EventCraftListViewObject__GetItem(obj, 0)) == 0 )
    sub_1C6BC60(this, obj);
  v4 = this;
  if ( !this->fields.sortOrderButton
    && EventCraftListViewItem__get_IsEventEnd((EventCraftListViewItem_o *)this, (const MethodInfo *)obj)
    || !LOBYTE(v4->fields.SortObject) )
  {
    v5 = Method_EventCraftListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C6BA20(Method_EventCraftListViewManager_OnClickListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


void EventCraftListViewManager__OnClickNoticeButton(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CB04CD & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickNoticeButton__);
    byte_4CB04CD = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = isButtonOn ^ 1;
  v4 = Method_EventCraftListViewManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C6BA20(Method_EventCraftListViewManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0, 0);
  EventRewardSaveData__SetCraftNotification(this->fields.isButtonOn, 0);
  EventCraftListViewManager__UpdateNoticeButtonDisplay(this, v6);
}


void EventCraftListViewManager__OnClickReceiveAll(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *maskPanel; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  _QWORD *v6; // x21
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x0

  if ( (byte_4CB04BD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_EventCraftListViewManager_TradeReceiveResponse__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB04BD = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  this->fields.selectTradeGoodsEntity = 0;
  sub_1C6B9AC(&this->fields.selectTradeGoodsEntity, 0);
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_TradeReceiveResponse__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v4,
                     (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  v6 = Method_System_Array_Empty_int___;
  currentEventId = this->fields.currentEventId;
  v8 = (TradeReceiveRequest_o *)Request_object;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v9 = v6[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C();
  if ( !*(_DWORD *)(v10 + 224) )
    j_il2cpp_runtime_class_init_0(v10);
  maskPanel = *(struct UnityEngine_GameObject_o **)(v6[7] + 16LL);
  if ( (maskPanel[12].fields.m_CachedPtr & 0x10000000000LL) == 0 )
    maskPanel = (struct UnityEngine_GameObject_o *)sub_1C41A9C();
  if ( !v8 )
LABEL_16:
    sub_1C6BC60(maskPanel, method);
  TradeReceiveRequest__beginRequest(
    v8,
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
  int32_t mState; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  v2 = this;
  if ( (byte_4CB04BC & 1) == 0 )
  {
    this = (EventCraftListViewManager_o *)sub_1C6BA08(&Method_EventCraftListViewManager_OnClickReceiveAllButton__);
    byte_4CB04BC = 1;
  }
  receiveAllButton = v2->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_1C6BC60(this, method);
  mState = receiveAllButton->fields.mState;
  v5 = Method_EventCraftListViewManager_OnClickReceiveAllButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20(Method_EventCraftListViewManager_OnClickReceiveAllButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
  if ( mState == 3 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
  else
  {
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
  EventCraftListViewItem_o *Item; // x21
  int64_t Time; // x22
  int32_t CompleteNum; // w21
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_c *klass; // x8
  struct EventTradeGoodsEntity_o *monitor; // x1

  if ( (byte_4CB04BA & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickReceiveButton__);
    sub_1C6BA08(&EventCraftTimeCalculation_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB04BA = 1;
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
      v7 = (_QWORD *)sub_1C6BA20(Method_EventCraftListViewManager_OnClickReceiveButton__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0);
    Item = EventCraftListViewObject__GetItem(obj, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo);
    CompleteNum = EventCraftTimeCalculation__GetCompleteNum(Item, 0, Time, 0);
    maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0);
    if ( maskPanel )
    {
      klass = maskPanel[6].klass;
      if ( klass )
      {
        EventCraftListViewManager__OnClickReceiveDecide(this, (int32_t)klass->_1.name, CompleteNum, v12);
        maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0);
        if ( maskPanel )
        {
          monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
          this->fields.selectTradeGoodsEntity = monitor;
          sub_1C6B9AC(&this->fields.selectTradeGoodsEntity, monitor);
          goto LABEL_17;
        }
      }
    }
LABEL_19:
    sub_1C6BC60(maskPanel, obj);
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
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w21
  TradeReceiveRequest_o *v11; // x22

  if ( (byte_4CB04BB & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventCraftListViewManager_TradeReceiveResponse__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB04BB = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_12;
  if ( receiveNum > 0 )
  {
    UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_TradeReceiveResponse__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
    currentEventId = this->fields.currentEventId;
    v11 = (TradeReceiveRequest_o *)Request_object;
    maskPanel = (struct UnityEngine_GameObject_o *)sub_1C6BAB0(int___TypeInfo, 1);
    if ( maskPanel )
    {
      if ( !LODWORD(maskPanel[1].klass) )
        sub_1C6BC68(maskPanel);
      LODWORD(maskPanel[1].monitor) = storeIdx;
      if ( v11 )
      {
        TradeReceiveRequest__beginRequest(v11, currentEventId, (System_Int32_array *)maskPanel, receiveNum, 0, 0);
        return;
      }
    }
LABEL_12:
    sub_1C6BC60(maskPanel, *(_QWORD *)&storeIdx);
  }
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


void EventCraftListViewManager__OnClickReplenishmentButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  unsigned int displayMode; // w8
  bool IsRefillable; // w21
  _QWORD *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  UnityEngine_GameObject_c *klass; // x8
  int32_t name; // w23
  ItemEntity_o *supportTool; // x24
  System_Action_T1__T2__T3__o *v16; // x25
  struct EventTradeGoodsEntity_o *monitor; // x1

  if ( (byte_4CB04C1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int____int__bool__TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickReplenishmentButton__);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__);
    byte_4CB04C1 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !obj )
    goto LABEL_20;
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
LABEL_20:
    sub_1C6BC60(maskPanel, obj);
  }
  maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0);
  if ( !maskPanel )
    goto LABEL_20;
  IsRefillable = EventCraftListViewItem__get_IsRefillable(
                   (EventCraftListViewItem_o *)maskPanel,
                   (const MethodInfo *)obj);
  v8 = Method_EventCraftListViewManager_OnClickReplenishmentButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C6BA20(Method_EventCraftListViewManager_OnClickReplenishmentButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v8, v8[4]);
  if ( IsRefillable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    EventCraftListViewManager__UpdateListObject(this, v10);
    maskPanel = (UnityEngine_GameObject_o *)this->fields.craftNumConfirmDialog;
    if ( !maskPanel )
      goto LABEL_20;
    EventCraftNumConfirmDialogComponent__Init((EventCraftNumConfirmDialogComponent_o *)maskPanel, 0);
    craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
    Item = EventCraftListViewObject__GetItem(obj, 0);
    maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0);
    if ( !maskPanel )
      goto LABEL_20;
    klass = maskPanel[6].klass;
    if ( !klass )
      goto LABEL_20;
    name = (int32_t)klass->_1.name;
    supportTool = this->fields.supportTool;
    v16 = (System_Action_T1__T2__T3__o *)sub_1C6BC54(System_Action_int____int__bool__TypeInfo);
    System_Action_object__int__bool____ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__,
      0);
    if ( !craftNumConfirmDialog )
      goto LABEL_20;
    EventCraftNumConfirmDialogComponent__Open(
      craftNumConfirmDialog,
      Item,
      name,
      supportTool,
      (System_Action_int____int__bool__o *)v16,
      1,
      0);
    maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0);
    if ( !maskPanel )
      goto LABEL_20;
    monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
    this->fields.selectTradeGoodsEntity = monitor;
    sub_1C6B9AC(&this->fields.selectTradeGoodsEntity, monitor);
    goto LABEL_17;
  }
  OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
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
  EventCraftUseSupportToolDialogComponent_o *craftUseSupportToolDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  UnityEngine_GameObject_c *klass; // x8
  int32_t name; // w23
  ItemEntity_o *supportTool; // x24
  System_Action_int__int__o *v14; // x25
  struct EventTradeGoodsEntity_o *monitor; // x1

  if ( (byte_4CB04C8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__int__TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickSupportToolButton__);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickSupportToolDecide__);
    byte_4CB04C8 = 1;
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
    v6 = (_QWORD *)sub_1C6BA20(Method_EventCraftListViewManager_OnClickSupportToolButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  EventCraftListViewManager__UpdateListObject(this, v8);
  maskPanel = (UnityEngine_GameObject_o *)this->fields.craftUseSupportToolDialog;
  if ( !maskPanel )
    goto LABEL_16;
  EventCraftUseSupportToolDialogComponent__Init((EventCraftUseSupportToolDialogComponent_o *)maskPanel, 0);
  craftUseSupportToolDialog = this->fields.craftUseSupportToolDialog;
  Item = EventCraftListViewObject__GetItem(obj, 0);
  maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0);
  if ( !maskPanel
    || (klass = maskPanel[6].klass) == 0
    || (name = (int32_t)klass->_1.name,
        supportTool = this->fields.supportTool,
        v14 = (System_Action_int__int__o *)sub_1C6BC54(System_Action_int__int__TypeInfo),
        System_Action_int__int____ctor(
          v14,
          (Il2CppObject *)this,
          Method_EventCraftListViewManager_OnClickSupportToolDecide__,
          0),
        !craftUseSupportToolDialog)
    || (EventCraftUseSupportToolDialogComponent__Open(craftUseSupportToolDialog, Item, name, supportTool, v14, 0),
        (maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0)) == 0) )
  {
LABEL_16:
    sub_1C6BC60(maskPanel, obj);
  }
  monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
  this->fields.selectTradeGoodsEntity = monitor;
  sub_1C6B9AC(&this->fields.selectTradeGoodsEntity, monitor);
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
  struct ItemEntity_o *supportTool; // x8
  int32_t id; // w5

  if ( (byte_4CB04C9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventCraftListViewManager_TradeSupportToolResponse__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB04C9 = 1;
  }
  craftUseSupportToolDialog = this->fields.craftUseSupportToolDialog;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
  EventCraftUseSupportToolDialogComponent__Close(craftUseSupportToolDialog, 0);
  craftUseSupportToolDialog = (EventCraftUseSupportToolDialogComponent_o *)this->fields.maskPanel;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftUseSupportToolDialog, 1, 0);
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_TradeSupportToolResponse__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  craftUseSupportToolDialog = (EventCraftUseSupportToolDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                             v8,
                                                                             (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TradeStartRequest___);
  supportTool = this->fields.supportTool;
  if ( !supportTool )
  {
    id = 0;
    if ( craftUseSupportToolDialog )
      goto LABEL_9;
LABEL_11:
    sub_1C6BC60(craftUseSupportToolDialog, *(_QWORD *)&storeIdx);
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
  const MethodInfo *v11; // x2
  int32_t currentEventId; // w24
  int32_t v13; // w21
  int32_t v14; // w25
  TradeStartRequest_o *v15; // x23

  if ( (byte_4CB04C2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventCraftListViewManager_TradeReplenishmentResponse__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB04C2 = 1;
  }
  craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
  if ( !craftNumConfirmDialog )
    goto LABEL_13;
  EventCraftNumConfirmDialogComponent__Close(craftNumConfirmDialog, 0);
  craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !craftNumConfirmDialog )
    goto LABEL_13;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 1, 0);
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_TradeReplenishmentResponse__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                       v10,
                                                                       (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeInfo )
    {
      if ( LODWORD(tradeInfo->max_length) < 2 )
        sub_1C6BC68(craftNumConfirmDialog);
      currentEventId = this->fields.currentEventId;
      v14 = tradeInfo->m_Items[0];
      v13 = tradeInfo->m_Items[1];
      v15 = (TradeStartRequest_o *)craftNumConfirmDialog;
      craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)EventCraftListViewManager__GetSupportToolItemId(
                                                                         this,
                                                                         isUseSupportTool,
                                                                         v11);
      if ( v15 )
      {
        TradeStartRequest__beginRequest(v15, currentEventId, v14, v13, createNum, (int32_t)craftNumConfirmDialog, 0);
        return;
      }
    }
LABEL_13:
    sub_1C6BC60(craftNumConfirmDialog, tradeInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 0, 0);
}


void EventCraftListViewManager__OnClickWithdrawalButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  EventCraftListViewManager___c__DisplayClass70_0_o *v5; // x20
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v7; // x1
  struct EventCraftListViewObject_o **p_obj; // x21
  unsigned int displayMode; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x1
  EventCraftWithdrawConfirmDialogComponent_o *craftWithdrawConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  System_Action_bool__o *v15; // x23

  if ( (byte_4CB04C4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickWithdrawalButton__);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__DisplayClass70_0__OnClickWithdrawalButton_b__0__);
    sub_1C6BA08(&EventCraftListViewManager___c__DisplayClass70_0_TypeInfo);
    byte_4CB04C4 = 1;
  }
  v5 = (EventCraftListViewManager___c__DisplayClass70_0_o *)sub_1C6BC54(EventCraftListViewManager___c__DisplayClass70_0_TypeInfo);
  EventCraftListViewManager___c__DisplayClass70_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_16;
  v5->fields.__4__this = this;
  sub_1C6B9AC(&v5->fields, this);
  v5->fields.obj = obj;
  p_obj = &v5->fields.obj;
  sub_1C6B9AC(&v5->fields.obj, obj);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !*p_obj )
    goto LABEL_16;
  displayMode = (*p_obj)->fields.displayMode;
  if ( displayMode >= 4 && (displayMode & 0xFFFFFFFE) == 4 )
  {
    v10 = Method_EventCraftListViewManager_OnClickWithdrawalButton__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C6BA20(Method_EventCraftListViewManager_OnClickWithdrawalButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
    EventCraftListViewManager__UpdateListObject(this, v12);
    maskPanel = (UnityEngine_GameObject_o *)this->fields.craftWithdrawConfirmDialog;
    if ( maskPanel )
    {
      EventCraftWithdrawConfirmDialogComponent__Init((EventCraftWithdrawConfirmDialogComponent_o *)maskPanel, 0);
      maskPanel = (UnityEngine_GameObject_o *)*p_obj;
      if ( *p_obj )
      {
        craftWithdrawConfirmDialog = this->fields.craftWithdrawConfirmDialog;
        Item = EventCraftListViewObject__GetItem((EventCraftListViewObject_o *)maskPanel, 0);
        v15 = (System_Action_bool__o *)sub_1C6BC54(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_EventCraftListViewManager___c__DisplayClass70_0__OnClickWithdrawalButton_b__0__,
          0);
        if ( craftWithdrawConfirmDialog )
        {
          EventCraftWithdrawConfirmDialogComponent__Open(craftWithdrawConfirmDialog, Item, v15, 0);
          goto LABEL_14;
        }
      }
    }
LABEL_16:
    sub_1C6BC60(maskPanel, v7);
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
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w20
  TradeReceiveRequest_o *v9; // x21
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  System_Int32_array *v11; // x22

  if ( (byte_4CB04C6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EventCraftListViewManager_WithdrawalResponse__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB04C6 = 1;
  }
  craftWithdrawConfirmDialog = (__int64)this->fields.craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  EventCraftWithdrawConfirmDialogComponent__Close(
    (EventCraftWithdrawConfirmDialogComponent_o *)craftWithdrawConfirmDialog,
    0);
  craftWithdrawConfirmDialog = (__int64)this->fields.maskPanel;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftWithdrawConfirmDialog, 1, 0);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_WithdrawalResponse__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  currentEventId = this->fields.currentEventId;
  v9 = (TradeReceiveRequest_o *)Request_object;
  craftWithdrawConfirmDialog = sub_1C6BAB0(int___TypeInfo, 1);
  if ( !item )
    goto LABEL_13;
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_13;
  v11 = (System_Int32_array *)craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  if ( !*(_DWORD *)(craftWithdrawConfirmDialog + 24) )
    sub_1C6BC68(craftWithdrawConfirmDialog);
  *(_DWORD *)(craftWithdrawConfirmDialog + 32) = TradeInfo_k__BackingField->fields.storeIdx;
  craftWithdrawConfirmDialog = EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)item);
  if ( !v9 )
LABEL_13:
    sub_1C6BC60(craftWithdrawConfirmDialog, item);
  TradeReceiveRequest__beginRequest(v9, currentEventId, v11, craftWithdrawConfirmDialog, 1, 0);
}


void EventCraftListViewManager__OnMoveEnd(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4CB04B4 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB04B4 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C6BC60(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


void EventCraftListViewManager__OpenReconfirmDialog(
        EventCraftListViewManager_o *this,
        EventCraftListViewItem_o *item,
        const MethodInfo *method)
{
  EventCraftListViewManager___c__DisplayClass71_0_o *v5; // x19
  BaseDialog_o *craftWithdrawConfirmDialog; // x0
  const MethodInfo *v7; // x1
  BaseDialog_o **p_item; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  System_String_o *v13; // x24
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_4CB04C5 & 1) == 0 )
  {
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__0__);
    sub_1C6BA08(&EventCraftListViewManager___c__DisplayClass71_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_13512/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3679/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_1C6BA08(&StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_3909/*"CRAFT_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_4CB04C5 = 1;
  }
  v5 = (EventCraftListViewManager___c__DisplayClass71_0_o *)sub_1C6BC54(EventCraftListViewManager___c__DisplayClass71_0_TypeInfo);
  EventCraftListViewManager___c__DisplayClass71_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_12;
  v5->fields.__4__this = this;
  sub_1C6B9AC(&v5->fields, this);
  v5->fields.item = item;
  p_item = (BaseDialog_o **)&v5->fields.item;
  sub_1C6B9AC(&v5->fields.item, item);
  craftWithdrawConfirmDialog = (BaseDialog_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(craftWithdrawConfirmDialog, 0) )
    return;
  craftWithdrawConfirmDialog = *p_item;
  if ( !*p_item )
    goto LABEL_12;
  v5->fields.oldCompleteNum = EventCraftListViewItem__get_NowCompleteNum(
                                (EventCraftListViewItem_o *)craftWithdrawConfirmDialog,
                                v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13512/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3909/*"CRAFT_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_EXECUTE"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__0__,
    0);
  if ( !Instance )
LABEL_12:
    sub_1C6BC60(craftWithdrawConfirmDialog, v7);
  CommonUI__OpenConfirmDialog_31417324((CommonUI_o *)Instance, v10, v11, v12, v13, 1, v14, 30, 26, 180.0, 13.0, 0, 0, 0);
}


void EventCraftListViewManager__OpenReplenishmentDialog(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventCraftListViewObject__o *ObjectList; // x20
  System_Func_object__bool__o *v4; // x21
  Il2CppObject *v5; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *Entity; // x21
  EventCraftListViewItem_o *v9; // x20
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t storeIdx; // w22
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  ItemEntity_o *supportTool; // x23
  System_Action_T1__T2__T3__o *v14; // x24

  if ( (byte_4CB04C0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int____int__bool__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftListViewObject___);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__);
    sub_1C6BA08(&Method_EventCraftListViewManager__OpenReplenishmentDialog_b__66_0__);
    sub_1C6BA08(&System_Func_EventCraftListViewObject__bool__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB04C0 = 1;
  }
  if ( this->fields.selectTradeGoodsEntity )
  {
    ObjectList = EventCraftListViewManager__get_ObjectList(this, method);
    v4 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventCraftListViewObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v4,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager__OpenReplenishmentDialog_b__66_0__,
      0);
    v5 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
           (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
           (System_Func_TSource__bool__o *)v4,
           (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftListViewObject___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_21;
    Entity = DataMasterBase_object__object__int___GetEntity(
               Master_object,
               this->fields.currentEventId,
               (const MethodInfo_33F90DC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Equality(
                                                                    (UnityEngine_Object_o *)v5,
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
        if ( !v5 )
          goto LABEL_21;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventCraftListViewObject__GetItem(
                                                                        (EventCraftListViewObject_o *)v5,
                                                                        0);
        if ( !Master_object )
          goto LABEL_21;
        v9 = (EventCraftListViewItem_o *)Master_object;
        if ( Master_object[2].klass )
        {
          if ( EventCraftListViewItem__get_IsRefillable((EventCraftListViewItem_o *)Master_object, v7) )
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.craftNumConfirmDialog;
            if ( Master_object )
            {
              EventCraftNumConfirmDialogComponent__Init((EventCraftNumConfirmDialogComponent_o *)Master_object, 0);
              TradeInfo_k__BackingField = v9->fields._TradeInfo_k__BackingField;
              if ( TradeInfo_k__BackingField )
              {
                storeIdx = TradeInfo_k__BackingField->fields.storeIdx;
                craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
                supportTool = this->fields.supportTool;
                v14 = (System_Action_T1__T2__T3__o *)sub_1C6BC54(System_Action_int____int__bool__TypeInfo);
                System_Action_object__int__bool____ctor(
                  v14,
                  (Il2CppObject *)this,
                  Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__,
                  0);
                if ( craftNumConfirmDialog )
                {
                  EventCraftNumConfirmDialogComponent__Open(
                    craftNumConfirmDialog,
                    v9,
                    storeIdx,
                    supportTool,
                    (System_Action_int____int__bool__o *)v14,
                    1,
                    0);
                  return;
                }
              }
            }
LABEL_21:
            sub_1C6BC60(Master_object, v7);
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
  EventCraftRewardDialogComponent_o *craftRewardDialog; // x0
  EventCraftRewardDialogComponent_o *v6; // x21
  int32_t currentEventId; // w22
  BattleDropItem_array *resultTradeRewardInfos; // x20
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x23
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v11; // x24
  System_Action_o *v12; // x25

  if ( (byte_4CB04BF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager_OpenReplenishmentDialog__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_SetActive__);
    byte_4CB04BF = 1;
  }
  craftRewardDialog = this->fields.craftRewardDialog;
  if ( !craftRewardDialog )
    goto LABEL_7;
  EventCraftRewardDialogComponent__Init(craftRewardDialog, 0);
  if ( !resData )
    goto LABEL_7;
  v6 = this->fields.craftRewardDialog;
  currentEventId = this->fields.currentEventId;
  resultTradeRewardInfos = resData->fields.resultTradeRewardInfos;
  selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
  maskPanel = (Il2CppObject *)this->fields.maskPanel;
  v11 = (System_Action_bool__o *)sub_1C6BC54(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v11, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0);
  v12 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventCraftListViewManager_OpenReplenishmentDialog__, 0);
  if ( !v6 )
LABEL_7:
    sub_1C6BC60(craftRewardDialog, resData);
  EventCraftRewardDialogComponent__Open(
    v6,
    currentEventId,
    resultTradeRewardInfos,
    selectTradeGoodsEntity,
    selectTradeGoodsEntity == 0,
    v11,
    v12,
    0);
}


void EventCraftListViewManager__RequestListObject(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB04B1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__get_Current__);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnMoveEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventCraftListViewObject__get_Count__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB04B1 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)EventCraftListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C6BC60(0, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ObjectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__) )
    {
      current = v10.fields._current;
      v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_EventCraftListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C6BC60(v8, v9);
      EventCraftListViewObject__Init((EventCraftListViewObject_o *)current, 2, v7, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventCraftListViewManager__ResponseCommonProcess(
        EventCraftListViewManager_o *this,
        bool isReceive,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x0
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4CB04CB & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB04CB = 1;
  }
  if ( !isReceive )
  {
    currencyInfoController = this->fields.currencyInfoController;
    if ( !currencyInfoController )
      goto LABEL_13;
    ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, 6, this->fields.currentEventId, 1, 0);
  }
  EventCraftListViewManager__UpdateReceiveAllButtonState(this, (const MethodInfo *)isReceive);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  currencyInfoController = (ShopCurrencyInfoController_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !currencyInfoController )
    goto LABEL_13;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)currencyInfoController,
                                this->fields.currentEventId,
                                0);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1C6B9AC(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
  EventCraftListViewManager__UpdateCraftAbleCountLb(this, v7);
  currencyInfoController = (ShopCurrencyInfoController_o *)this->fields.touchPanel;
  if ( !currencyInfoController
    || (currencyInfoController = (ShopCurrencyInfoController_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)currencyInfoController,
                                                                   0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyInfoController, 0, 0),
        (currencyInfoController = (ShopCurrencyInfoController_o *)this->fields.maskPanel) == 0) )
  {
LABEL_13:
    sub_1C6BC60(currencyInfoController, isReceive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyInfoController, 0, 0);
  EventCraftListViewManager__RequestListObject(this, v8);
  ActionExtensions__Call(this->fields.craftCallback, 0);
}


void EventCraftListViewManager__SetCraftObject(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *craftRewardDialog; // x20
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  struct EventCraftAssetManager_o *assetManager; // x8
  Il2CppObject *CraftRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *craftNumConfirmDialog; // x20
  struct EventCraftAssetManager_o *v11; // x8
  Il2CppObject *CraftItemNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *craftWithdrawConfirmDialog; // x20
  struct EventCraftAssetManager_o *v16; // x8
  Il2CppObject *CraftItemWithdrawConfirmDialog_k__BackingField; // x20
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *craftUseSupportToolDialog; // x20
  struct EventCraftAssetManager_o *v21; // x8
  Il2CppObject *CraftUseSupportToolDialog_k__BackingField; // x20
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *craftFirstTimeSupportToolDialog; // x20
  struct EventCraftAssetManager_o *v26; // x8
  Il2CppObject *CraftFirstTimeSupportToolDialog_k__BackingField; // x20
  Il2CppObject *v28; // x0
  const MethodInfo *v29; // x2

  if ( (byte_4CB04AD & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventCraftFirstTimeSupportToolDialogComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventCraftNumConfirmDialogComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventCraftRewardDialogComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventCraftUseSupportToolDialogComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventCraftWithdrawConfirmDialogComponent___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB04AD = 1;
  }
  craftRewardDialog = (UnityEngine_Object_o *)this->fields.craftRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftRewardDialog, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_44;
    CraftRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._CraftRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           CraftRewardDialog_k__BackingField,
           (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_44;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v4,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventCraftRewardDialogComponent___);
    this->fields.craftRewardDialog = (struct EventCraftRewardDialogComponent_o *)Component_object;
    sub_1C6B9AC(&this->fields.craftRewardDialog, Component_object);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftRewardDialog,
      v9);
  }
  craftNumConfirmDialog = (UnityEngine_Object_o *)this->fields.craftNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftNumConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v11 = this->fields.assetManager;
    if ( !v11 )
      goto LABEL_44;
    CraftItemNumConfirmDialog_k__BackingField = (Il2CppObject *)v11->fields._CraftItemNumConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           CraftItemNumConfirmDialog_k__BackingField,
           (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_44;
    v13 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventCraftNumConfirmDialogComponent___);
    this->fields.craftNumConfirmDialog = (struct EventCraftNumConfirmDialogComponent_o *)v13;
    sub_1C6B9AC(&this->fields.craftNumConfirmDialog, v13);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftNumConfirmDialog,
      v14);
  }
  craftWithdrawConfirmDialog = (UnityEngine_Object_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftWithdrawConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( !v16 )
      goto LABEL_44;
    CraftItemWithdrawConfirmDialog_k__BackingField = (Il2CppObject *)v16->fields._CraftItemWithdrawConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           CraftItemWithdrawConfirmDialog_k__BackingField,
           (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_44;
    v18 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventCraftWithdrawConfirmDialogComponent___);
    this->fields.craftWithdrawConfirmDialog = (struct EventCraftWithdrawConfirmDialogComponent_o *)v18;
    sub_1C6B9AC(&this->fields.craftWithdrawConfirmDialog, v18);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftWithdrawConfirmDialog,
      v19);
  }
  craftUseSupportToolDialog = (UnityEngine_Object_o *)this->fields.craftUseSupportToolDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftUseSupportToolDialog, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v21 = this->fields.assetManager;
    if ( !v21 )
      goto LABEL_44;
    CraftUseSupportToolDialog_k__BackingField = (Il2CppObject *)v21->fields._CraftUseSupportToolDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           CraftUseSupportToolDialog_k__BackingField,
           (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_44;
    v23 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventCraftUseSupportToolDialogComponent___);
    this->fields.craftUseSupportToolDialog = (struct EventCraftUseSupportToolDialogComponent_o *)v23;
    sub_1C6B9AC(&this->fields.craftUseSupportToolDialog, v23);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftUseSupportToolDialog,
      v24);
  }
  craftFirstTimeSupportToolDialog = (UnityEngine_Object_o *)this->fields.craftFirstTimeSupportToolDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftFirstTimeSupportToolDialog, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v26 = this->fields.assetManager;
    if ( v26 )
    {
      CraftFirstTimeSupportToolDialog_k__BackingField = (Il2CppObject *)v26->fields._CraftFirstTimeSupportToolDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = UnityEngine_Object__Instantiate_object_(
             CraftFirstTimeSupportToolDialog_k__BackingField,
             (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v4 )
      {
        v28 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v4,
                (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventCraftFirstTimeSupportToolDialogComponent___);
        this->fields.craftFirstTimeSupportToolDialog = (struct EventCraftFirstTimeSupportToolDialogComponent_o *)v28;
        sub_1C6B9AC(&this->fields.craftFirstTimeSupportToolDialog, v28);
        EventCraftListViewManager__LocateDialogToCraftPanel(
          this,
          (UnityEngine_Component_o *)this->fields.craftFirstTimeSupportToolDialog,
          v29);
        return;
      }
    }
LABEL_44:
    sub_1C6BC60(v4, v5);
  }
}


void EventCraftListViewManager__SetObjectItem(
        EventCraftListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_object__o *v10; // x21
  System_Action_object__o *v11; // x22
  System_Action_object__o *v12; // x23
  System_Action_object__o *v13; // x24
  System_Action_object__o *v14; // x25

  if ( (byte_4CB04B2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_EventCraftListViewObject__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickCraftStartButton__);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickReceiveButton__);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickReplenishmentButton__);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickSupportToolButton__);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnClickWithdrawalButton__);
    sub_1C6BA08(&Method_EventCraftListViewManager_OnMoveEnd__);
    sub_1C6BA08(&EventCraftListViewObject_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB04B2 = 1;
  }
  if ( obj )
  {
    naturalAligment = EventCraftListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (EventCraftListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventCraftListViewObject_TypeInfo )
        obj = 0;
    }
    else
    {
      obj = 0;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    v7 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventCraftListViewManager_OnMoveEnd__, 0);
    if ( !obj )
      sub_1C6BC60(v8, v9);
    EventCraftListViewObject__Init((EventCraftListViewObject_o *)obj, 2, v7, 0);
    v10 = (System_Action_object__o *)sub_1C6BC54(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickCraftStartButton__,
      0);
    v11 = (System_Action_object__o *)sub_1C6BC54(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickReceiveButton__,
      0);
    v12 = (System_Action_object__o *)sub_1C6BC54(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v12,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickReplenishmentButton__,
      0);
    v13 = (System_Action_object__o *)sub_1C6BC54(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickWithdrawalButton__,
      0);
    v14 = (System_Action_object__o *)sub_1C6BC54(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v14,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickSupportToolButton__,
      0);
    EventCraftListViewObject__SetOnClickAction(
      (EventCraftListViewObject_o *)obj,
      (System_Action_EventCraftListViewObject__o *)v10,
      (System_Action_EventCraftListViewObject__o *)v11,
      (System_Action_EventCraftListViewObject__o *)v12,
      (System_Action_EventCraftListViewObject__o *)v13,
      (System_Action_EventCraftListViewObject__o *)v14,
      0);
  }
}


void EventCraftListViewManager__SetReceiveAllButton(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  int32_t currentEventId; // w20
  UISprite_o *receiveAllButtonSprite; // x21
  UILabel_o *receiveAllButtonLabel; // x20
  __int64 receiveAllButton; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  struct EventCraftAssetManager_o *assetManager; // x8
  Il2CppObject *CraftButtonBlinkEffect_k__BackingField; // x21
  struct UnityEngine_GameObject_o **p_tradeButtonBlinkEffect; // x20
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v13; // x0
  UnityEngine_Transform_o *v14; // x21

  if ( (byte_4CB04AE & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject____78656176);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_3346/*"CHECK_TRADE_BUTTON_LABEL"*/);
    sub_1C6BA08(&StringLiteral_17503/*"btn_getreward"*/);
    byte_4CB04AE = 1;
  }
  currentEventId = this->fields.currentEventId;
  receiveAllButtonSprite = this->fields.receiveAllButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40837804(currentEventId, receiveAllButtonSprite, (System_String_o *)StringLiteral_17503/*"btn_getreward"*/, 0);
  receiveAllButtonLabel = this->fields.receiveAllButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveAllButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3346/*"CHECK_TRADE_BUTTON_LABEL"*/, 0);
  if ( !receiveAllButtonLabel )
    goto LABEL_22;
  UILabel__set_text(receiveAllButtonLabel, (System_String_o *)receiveAllButton, 0);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        p_tradeButtonBlinkEffect = &this->fields.tradeButtonBlinkEffect;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)receiveAllButton, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__Instantiate_object__52199488(
                CraftButtonBlinkEffect_k__BackingField,
                transform,
                (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_GameObject____78656176);
        *p_tradeButtonBlinkEffect = (struct UnityEngine_GameObject_o *)v13;
        sub_1C6B9AC(&this->fields.tradeButtonBlinkEffect, v13);
        receiveAllButton = (__int64)*p_tradeButtonBlinkEffect;
        if ( *p_tradeButtonBlinkEffect )
        {
          receiveAllButton = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)receiveAllButton,
                                        0);
          v14 = (UnityEngine_Transform_o *)receiveAllButton;
          if ( !byte_4CAFC0E )
          {
            receiveAllButton = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
            byte_4CAFC0E = 1;
          }
          if ( v14 )
          {
            UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            receiveAllButton = (__int64)*p_tradeButtonBlinkEffect;
            if ( *p_tradeButtonBlinkEffect )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButton, 0, 0);
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C6BC60(receiveAllButton, v7);
  }
LABEL_21:
  EventCraftListViewManager__UpdateReceiveAllButtonState(this, v7);
}


void EventCraftListViewManager__TradeReceiveResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  System_Object_array *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4CB04BE & 1) == 0 )
  {
    sub_1C6BA08(&Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_15801/*"["*/);
    sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    byte_4CB04BE = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
  {
    v5 = (Il2CppObject *)System_String__Concat_64005056(
                           (System_String_o *)StringLiteral_15801/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16051/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v6 = JsonManager__DeserializeArray_object_(
           v5,
           (const MethodInfo_31AB018 *)Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    if ( !v6 )
      sub_1C6BC60(0, v7);
    if ( !LODWORD(v6->max_length) )
      sub_1C6BC68(v6);
    EventCraftListViewManager__OpenRewardDialog(this, (EventCraftListViewManager_ResData_o *)v6->m_Items[0], v8);
    EventCraftListViewManager__ResponseCommonProcess(this, 1, v9);
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

  if ( (byte_4CB04C3 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB04C3 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
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
      sub_1C6BC60(selectTradeGoodsEntity, v5);
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

  if ( (byte_4CB04CA & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB04CA = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v5);
}


bool EventCraftListViewManager__TryGetAvailableStoreIdx(
        EventCraftListViewManager_o *this,
        int32_t *storeIdx,
        const MethodInfo *method)
{
  UserEventTradeMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x24
  unsigned __int64 v8; // x25
  EventCraftListViewManager___c__DisplayClass56_0_o *v9; // x20
  struct EventTradeStoreEntity_o *v10; // x1
  EventCraftListViewManager___c__DisplayClass56_0_Fields *p_fields; // x21
  System_Int32_array *v12; // x22
  System_Func_int__bool__o *v13; // x23
  struct EventTradeStoreEntity_array *v14; // x8
  il2cpp_array_size_t max_length; // x9
  EventTradeStoreEntity_o *v16; // x8
  int32_t *v18; // [xsp+8h] [xbp-78h]
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-70h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CB04B6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_int____78570976);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__DisplayClass56_0__TryGetAvailableStoreIdx_b__0__);
    sub_1C6BA08(&EventCraftListViewManager___c__DisplayClass56_0_TypeInfo);
    byte_4CB04B6 = 1;
  }
  usedStoreIdx = 0;
  entity = 0;
  *storeIdx = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !Master_object )
    goto LABEL_26;
  Master_object = (UserEventTradeMaster_o *)UserEventTradeMaster__TryGetEntity(
                                              Master_object,
                                              &entity,
                                              this->fields.currentEventId,
                                              0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    Master_object = (UserEventTradeMaster_o *)entity;
    if ( !entity )
      goto LABEL_26;
    Master_object = (UserEventTradeMaster_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0);
    tradeStoreEntities = this->fields.tradeStoreEntities;
    if ( !tradeStoreEntities )
      goto LABEL_26;
    if ( SLODWORD(tradeStoreEntities->max_length) >= 1 )
    {
      v18 = storeIdx;
      v8 = 0;
      while ( 1 )
      {
        v9 = (EventCraftListViewManager___c__DisplayClass56_0_o *)sub_1C6BC54(EventCraftListViewManager___c__DisplayClass56_0_TypeInfo);
        EventCraftListViewManager___c__DisplayClass56_0___ctor(v9, 0);
        if ( v8 >= LODWORD(tradeStoreEntities->max_length) )
          goto LABEL_27;
        if ( !v9 )
          goto LABEL_26;
        v10 = tradeStoreEntities->m_Items[v8];
        v9->fields.storeEntity = v10;
        p_fields = &v9->fields;
        sub_1C6B9AC(&v9->fields, v10);
        v12 = usedStoreIdx;
        v13 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_EventCraftListViewManager___c__DisplayClass56_0__TryGetAvailableStoreIdx_b__0__,
          0);
        Master_object = (UserEventTradeMaster_o *)BasicHelper__Any_int__51528112(
                                                    v12,
                                                    (System_Func_T__bool__o *)v13,
                                                    (const MethodInfo_31241B0 *)Method_BasicHelper_Any_int____78570976);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        if ( (__int64)++v8 >= SLODWORD(tradeStoreEntities->max_length) )
          return 0;
      }
      if ( p_fields->storeEntity )
      {
        *v18 = p_fields->storeEntity->fields.idx;
        return 1;
      }
LABEL_26:
      sub_1C6BC60(Master_object, v6);
    }
    return 0;
  }
  v14 = this->fields.tradeStoreEntities;
  if ( !v14 )
    goto LABEL_26;
  max_length = v14->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
LABEL_27:
    sub_1C6BC68(Master_object);
  v16 = v14->m_Items[0];
  if ( !v16 )
    goto LABEL_26;
  *storeIdx = v16->fields.idx;
  return 1;
}


void EventCraftListViewManager__UpdateCraftAbleCountLb(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  EventCraftListViewManager_o *v2; // x19
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x8
  int max_length; // w22
  int v5; // w8
  int v6; // w21
  System_String_o **v7; // x8
  System_String_o *v8; // x20
  UILabel_o *craftAbleCountLb; // x19
  System_String_o *v10; // x20
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int v13; // [xsp+8h] [xbp-48h] BYREF
  int v14; // [xsp+Ch] [xbp-44h] BYREF
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-40h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4CB04CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3906/*"CRAFT_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/);
    this = (EventCraftListViewManager_o *)sub_1C6BA08(&StringLiteral_3905/*"CRAFT_EVENT_TITLE_QUOTA_LABEL"*/);
    byte_4CB04CF = 1;
  }
  usedStoreIdx = 0;
  entity = 0;
  tradeStoreEntities = v2->fields.tradeStoreEntities;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !this )
    goto LABEL_20;
  if ( !UserEventTradeMaster__TryGetEntity((UserEventTradeMaster_o *)this, &entity, v2->fields.currentEventId, 0) )
    goto LABEL_12;
  this = (EventCraftListViewManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  this = (EventCraftListViewManager_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !usedStoreIdx )
      goto LABEL_20;
    v5 = usedStoreIdx->max_length;
  }
  else
  {
LABEL_12:
    v5 = 0;
  }
  v6 = max_length - v5;
  v7 = (System_String_o **)(max_length == v5 ? &StringLiteral_3906/*"CRAFT_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_3905/*"CRAFT_EVENT_TITLE_QUOTA_LABEL"*/);
  v8 = *v7;
  craftAbleCountLb = v2->fields.craftAbleCountLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(v8, 0);
  v14 = v6;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = max_length;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  this = (EventCraftListViewManager_o *)System_String__Format_64008100(v10, v11, v12, 0);
  if ( !craftAbleCountLb )
LABEL_20:
    sub_1C6BC60(this, method);
  UILabel__set_text(craftAbleCountLb, (System_String_o *)this, 0);
}


void EventCraftListViewManager__UpdateListObject(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x19
  EventCraftListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB04B3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
    byte_4CB04B3 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  ObjectList = (System_Collections_Generic_List_object__o *)EventCraftListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    ObjectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__);
    if ( !v5 )
      break;
    current = v9.fields._current;
    if ( !v9.fields._current )
      sub_1C6BC60(v5, v6);
    Item = EventCraftListViewObject__GetItem((EventCraftListViewObject_o *)v9.fields._current, 0);
    EventCraftListViewObject__UpdateItem((EventCraftListViewObject_o *)current, Item, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
}


void EventCraftListViewManager__UpdateNoticeButtonDisplay(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  UISprite_o *craftNoticeBtnSp; // x0
  __int64 *v4; // x8

  if ( (byte_4CB04CE & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17522/*"btn_on"*/);
    sub_1C6BA08(&StringLiteral_17521/*"btn_off"*/);
    byte_4CB04CE = 1;
  }
  craftNoticeBtnSp = this->fields.craftNoticeBtnSp;
  if ( !craftNoticeBtnSp )
    sub_1C6BC60(0, method);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17522/*"btn_on"*/;
  else
    v4 = &StringLiteral_17521/*"btn_off"*/;
  UISprite__set_spriteName(craftNoticeBtnSp, (System_String_o *)*v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventCraftListViewManager__UpdateReceiveAllButtonState(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *v2; // x19
  System_Collections_Generic_List_T__o *itemList; // x20
  EventCraftListViewManager___c_c *v4; // x0
  System_Func_object__bool__o *_9__49_0; // x21
  Il2CppObject *v6; // x22
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x0
  struct UICommonButton_o *receiveAllButton; // x8
  __int64 v9; // x1
  _BOOL4 v10; // w20
  float v11; // s0 OVERLAPPED
  float v12; // s3
  float v13; // s1
  float v14; // s2
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21

  v2 = this;
  if ( (byte_4CB04AF & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_ListViewItem___);
    sub_1C6BA08(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__UpdateReceiveAllButtonState_b__49_0__);
    this = (EventCraftListViewManager_o *)sub_1C6BA08(&EventCraftListViewManager___c_TypeInfo);
    byte_4CB04AF = 1;
  }
  itemList = (System_Collections_Generic_List_T__o *)v2->fields.itemList;
  if ( !itemList )
  {
    receiveAllButton = v2->fields.receiveAllButton;
LABEL_13:
    v10 = 0;
    v9 = 3;
    goto LABEL_14;
  }
  v4 = EventCraftListViewManager___c_TypeInfo;
  if ( !EventCraftListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo);
    v4 = EventCraftListViewManager___c_TypeInfo;
  }
  _9__49_0 = (System_Func_object__bool__o *)v4->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = EventCraftListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__49_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__49_0,
      v6,
      Method_EventCraftListViewManager___c__UpdateReceiveAllButtonState_b__49_0__,
      0);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Func_ListViewItem__bool__o *)_9__49_0;
    sub_1C6B9AC(&static_fields->__9__49_0, _9__49_0);
  }
  this = (EventCraftListViewManager_o *)BasicHelper__Any_object_(
                                          itemList,
                                          (System_Func_T__bool__o *)_9__49_0,
                                          (const MethodInfo_3124430 *)Method_BasicHelper_Any_ListViewItem___);
  receiveAllButton = v2->fields.receiveAllButton;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_13;
  v9 = 0;
  v10 = 1;
LABEL_14:
  if ( !receiveAllButton )
    goto LABEL_24;
  ((void (__fastcall *)(struct UICommonButton_o *__return_ptr, struct UICommonButton_o *, __int64, __int64, const MethodInfo *))receiveAllButton->klass->vtable._14_SetState.methodPtr)(
    receiveAllButton,
    receiveAllButton,
    v9,
    1,
    receiveAllButton->klass->vtable._14_SetState.method);
  this = (EventCraftListViewManager_o *)v2->fields.receiveAllButtonLabel;
  v11 = 0.5;
  if ( v10 )
    v11 = 1.0;
  if ( !this )
    goto LABEL_24;
  v12 = 1.0;
  v13 = v11;
  v14 = v11;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v11, 0);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)v2->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0, 0) )
  {
    this = (EventCraftListViewManager_o *)v2->fields.tradeButtonBlinkEffect;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v10, 0);
      return;
    }
LABEL_24:
    sub_1C6BC60(this, v9);
  }
}


void EventCraftListViewManager__WithdrawalResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  System_Object_array *v6; // x0
  EventCraftListViewManager_ResData_o *v7; // x1
  const MethodInfo *v8; // x2
  struct BattleDropItem_array *resultTradeRewardInfos; // x8

  if ( (byte_4CB04C7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    sub_1C6BA08(&StringLiteral_15801/*"["*/);
    sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    byte_4CB04C7 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
  {
    v5 = (Il2CppObject *)System_String__Concat_64005056(
                           (System_String_o *)StringLiteral_15801/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16051/*"]"*/,
                           0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v6 = JsonManager__DeserializeArray_object_(
           v5,
           (const MethodInfo_31AB018 *)Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    if ( !v6 )
      goto LABEL_13;
    if ( !LODWORD(v6->max_length) )
      sub_1C6BC68(v6);
    v7 = (EventCraftListViewManager_ResData_o *)v6->m_Items[0];
    if ( !v7 || (resultTradeRewardInfos = v7->fields.resultTradeRewardInfos) == 0 )
LABEL_13:
      sub_1C6BC60(v6, v7);
    if ( resultTradeRewardInfos->max_length )
      EventCraftListViewManager__OpenRewardDialog(this, v7, v8);
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v8);
  }
}


void EventCraftListViewManager___OnClickCraftStartButton_b__57_0(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1C6BC60(0, method);
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
    || (v3 = this, (this = (EventCraftListViewManager_o *)EventCraftListViewObject__GetItem(x, 0)) == 0)
    || (dropList = this->fields.dropList) == 0
    || (selectTradeGoodsEntity = v3->fields.selectTradeGoodsEntity) == 0 )
  {
    sub_1C6BC60(this, x);
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
    sub_1C6BC60(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventCraftListViewObject__o *EventCraftListViewManager__get_ObjectList(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager___c__DisplayClass41_0_o *v3; // x19
  System_Collections_Generic_List_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_TSource__o *v7; // x0
  EventCraftListViewManager___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_Func_object__bool__o *_9__41_0; // x21
  Il2CppObject *v11; // x22
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  System_Action_object__o *v14; // x21

  if ( (byte_4CB04A9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_GameObject__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_GameObject___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_GameObject___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C6BA08(&System_Func_GameObject__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventCraftListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventCraftListViewObject__TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__get_ObjectList_b__41_0__);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__DisplayClass41_0__get_ObjectList_b__1__);
    sub_1C6BA08(&EventCraftListViewManager___c__DisplayClass41_0_TypeInfo);
    sub_1C6BA08(&EventCraftListViewManager___c_TypeInfo);
    byte_4CB04A9 = 1;
  }
  v3 = (EventCraftListViewManager___c__DisplayClass41_0_o *)sub_1C6BC54(EventCraftListViewManager___c__DisplayClass41_0_TypeInfo);
  EventCraftListViewManager___c__DisplayClass41_0___ctor(v3, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventCraftListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventCraftListViewObject___ctor__);
  if ( !v3 )
    sub_1C6BC60(v5, v6);
  v3->fields.list = (struct System_Collections_Generic_List_EventCraftListViewObject__o *)v4;
  sub_1C6B9AC(&v3->fields, v4);
  v7 = System_Linq_Enumerable__ToList_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.objectList,
         (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v8 = EventCraftListViewManager___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !EventCraftListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo);
    v8 = EventCraftListViewManager___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v8->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventCraftListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_0, v11, Method_EventCraftListViewManager___c__get_ObjectList_b__41_0__, 0);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_GameObject__bool__o *)_9__41_0;
    sub_1C6B9AC(&static_fields->__9__41_0, _9__41_0);
  }
  v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v9,
                                                         (System_Func_TSource__bool__o *)_9__41_0,
                                                         (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v14 = (System_Action_object__o *)sub_1C6BC54(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_EventCraftListViewManager___c__DisplayClass41_0__get_ObjectList_b__1__,
    0);
  BasicHelper__ForEach_object_(
    v13,
    (System_Action_T__o *)v14,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_GameObject___);
  return v3->fields.list;
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
  EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *v2; // x19
  int32_t _1__state; // w8
  EventCraftListViewManager___c_c *v4; // x0
  System_Func_bool__o *_9__45_0; // x20
  Il2CppObject *v6; // x21
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x0
  UnityEngine_WaitWhile_o *v8; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct EventCraftListViewManager_o *_4__this; // x20

  v2 = this;
  if ( (byte_4CB04D9 & 1) == 0 )
  {
    sub_1C6BA08(&System_Func_bool__TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__CoFirstTimeDialogOpenAfterLoginBonus_b__45_0__);
    sub_1C6BA08(&EventCraftListViewManager___c_TypeInfo);
    this = (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)sub_1C6BA08(&UnityEngine_WaitWhile_TypeInfo);
    byte_4CB04D9 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this
      || (this = (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)_4__this->fields.craftFirstTimeSupportToolDialog) == 0
      || (EventCraftFirstTimeSupportToolDialogComponent__Init(
            (EventCraftFirstTimeSupportToolDialogComponent_o *)this,
            0),
          (this = (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)_4__this->fields.craftFirstTimeSupportToolDialog) == 0) )
    {
      sub_1C6BC60(this, method);
    }
    EventCraftFirstTimeSupportToolDialogComponent__Open(
      (EventCraftFirstTimeSupportToolDialogComponent_o *)this,
      _4__this->fields.supportTool,
      0,
      0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v4 = EventCraftListViewManager___c_TypeInfo;
  if ( !EventCraftListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo);
    v4 = EventCraftListViewManager___c_TypeInfo;
  }
  _9__45_0 = v4->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = EventCraftListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__45_0 = (System_Func_bool__o *)sub_1C6BC54(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__45_0,
      v6,
      Method_EventCraftListViewManager___c__CoFirstTimeDialogOpenAfterLoginBonus_b__45_0__,
      0);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = _9__45_0;
    sub_1C6B9AC(&static_fields->__9__45_0, _9__45_0);
  }
  v8 = (UnityEngine_WaitWhile_o *)sub_1C6BC54(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v8, _9__45_0, 0);
  v2->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = &v2->fields.__2__current;
  sub_1C6B9AC(p__2__current, v8);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB04D1 & 1) == 0 )
  {
    sub_1C6BA08(&EventCraftListViewManager___c_TypeInfo);
    byte_4CB04D1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(EventCraftListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCraftListViewManager___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewManager___c_o *)v1;
  sub_1C6B9AC(EventCraftListViewManager___c_TypeInfo->static_fields, v1);
}


void EventCraftListViewManager___c___ctor(EventCraftListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCraftListViewManager___c___CoFirstTimeDialogOpenAfterLoginBonus_b__45_0(
        EventCraftListViewManager___c_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  struct TerminalSceneComponent_o *v7; // x8

  if ( (byte_4CB04D3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&ScrTerminalMap_TypeInfo);
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB04D3 = 1;
  }
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  if ( ScrTerminalMap__IsDialogOnActive(0) )
    return 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CB01CE )
  {
    sub_1C6BA08(&TerminalSceneComponent_TypeInfo);
    byte_4CB01CE = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  v7 = v6->static_fields->mInstance;
  if ( !v7 )
    sub_1C6BC60(v6, v5);
  return v7->fields._IsPlayingCampaignDirectBonus_k__BackingField;
}


bool EventCraftListViewManager___c___UpdateReceiveAllButtonState_b__49_0(
        EventCraftListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4CB04D4 & 1) == 0 )
  {
    sub_1C6BA08(&EventCraftListViewItem_TypeInfo);
    byte_4CB04D4 = 1;
  }
  if ( !item )
    return 0;
  naturalAligment = EventCraftListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventCraftListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventCraftListViewItem_TypeInfo )
    item = 0;
  if ( !item )
    return 0;
  EventCraftListViewItem__UpdateCraftUserInfo((EventCraftListViewItem_o *)item, 0);
  return EventCraftListViewItem__get_IsAbleReceiveRewards((EventCraftListViewItem_o *)item, 0);
}


bool EventCraftListViewManager___c___get_ObjectList_b__41_0(
        EventCraftListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4CB04D2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB04D2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  EventCraftListViewManager___c__DisplayClass41_0_o *v9; // x1
  Il2CppClass **v10; // x0

  v4 = this;
  if ( (byte_4CB04D5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___);
    this = (EventCraftListViewManager___c__DisplayClass41_0_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_EventCraftListViewObject__Add__);
    byte_4CB04D5 = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventCraftListViewManager___c__DisplayClass41_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      go,
                                                                      (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___),
        !list)
    || (items = list->fields._items,
        v7 = Method_System_Collections_Generic_List_EventCraftListViewObject__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_1C6BC60(this, go);
  }
  size = list->fields._size;
  v9 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    list->fields._size = size + 1;
    v10 = &items->obj.klass + size;
    v10[4] = (Il2CppClass *)v9;
    sub_1C6B9AC(v10 + 4, v9);
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
    sub_1C6BC60(this, 0);
  return ItemEntity__GetEventId(x, 0) == this->fields.eventId;
}


void EventCraftListViewManager___c__DisplayClass44_0___Init_b__1(
        EventCraftListViewManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *_4__this; // x0
  EventCraftListViewManager_o *v4; // x19
  System_Collections_IEnumerator_o *TimeDialogOpenAfterLoginBonus; // x1

  if ( (byte_4CB04D6 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4823/*"CraftFirstTimeSupportToolDisplay"*/);
    byte_4CB04D6 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  EventCraftListViewManager__SetCraftObject(_4__this, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  EventCraftListViewManager__SetReceiveAllButton(_4__this, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  EventCraftListViewManager__CreateList(_4__this, 0);
  if ( UnityEngine_PlayerPrefs__GetInt_71617412((System_String_o *)StringLiteral_4823/*"CraftFirstTimeSupportToolDisplay"*/, 0) == 0
    && this->fields.isGetEntity )
  {
    _4__this = (EventCraftListViewManager_o *)this->fields.eventEntity;
    if ( !_4__this )
      goto LABEL_12;
    if ( EventEntity__IsEventPeriod((EventEntity_o *)_4__this, 0, 0) )
    {
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4823/*"CraftFirstTimeSupportToolDisplay"*/, 1, 0);
      UnityEngine_PlayerPrefs__Save(0);
      v4 = this->fields.__4__this;
      if ( v4 )
      {
        TimeDialogOpenAfterLoginBonus = EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus(v4, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71644868(
          (UnityEngine_MonoBehaviour_o *)v4,
          TimeDialogOpenAfterLoginBonus,
          0);
        return;
      }
LABEL_12:
      sub_1C6BC60(_4__this, method);
    }
  }
}


void EventCraftListViewManager___c__DisplayClass56_0___ctor(
        EventCraftListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCraftListViewManager___c__DisplayClass56_0___TryGetAvailableStoreIdx_b__0(
        EventCraftListViewManager___c__DisplayClass56_0_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct EventTradeStoreEntity_o *storeEntity; // x8

  storeEntity = this->fields.storeEntity;
  if ( !storeEntity )
    sub_1C6BC60(this, idx);
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
        EventCraftListViewManager__OpenReconfirmDialog(_4__this, (EventCraftListViewItem_o *)this, 0);
        return;
      }
    }
LABEL_8:
    sub_1C6BC60(this, value);
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
  Il2CppObject *Instance; // x19
  System_Action_o *v9; // x20

  if ( (byte_4CB04D7 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__DisplayClass71_1__OpenReconfirmDialog_b__1__);
    sub_1C6BA08(&EventCraftListViewManager___c__DisplayClass71_1_TypeInfo);
    byte_4CB04D7 = 1;
  }
  v5 = sub_1C6BC54(EventCraftListViewManager___c__DisplayClass71_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C6B9AC(v5 + 24, this),
        *(_BYTE *)(v5 + 16) = decide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventCraftListViewManager___c__DisplayClass71_1__OpenReconfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C6BC60(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31417952((CommonUI_o *)Instance, v9, 0);
}


void EventCraftListViewManager___c__DisplayClass71_0___OpenReconfirmDialog_b__2(
        EventCraftListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C6BC60(0, method);
  EventCraftListViewManager__OnClickWithdrawalDecide(_4__this, this->fields.item, 0);
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
  EventCraftListViewManager___c__DisplayClass71_1_o *v2; // x19
  struct EventCraftListViewManager___c__DisplayClass71_0_o *CS___8__locals1; // x9
  struct EventCraftListViewManager_o *_4__this; // x8
  struct EventCraftListViewItem_o *item; // x9
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventCraftListViewManager___c__DisplayClass71_0_o *v7; // x8
  int32_t oldCompleteNum; // w20
  struct EventCraftListViewManager___c__DisplayClass71_0_o *v9; // x8
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  Il2CppObject *v12; // x23
  System_Action_o *monitor; // x22
  EventCraftListViewManager___c__DisplayClass71_1_o *v14; // x19

  v2 = this;
  if ( (byte_4CB04D8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__2__);
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)sub_1C6BA08(&StringLiteral_3900/*"CRAFT_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_4CB04D8 = 1;
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
    TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
    _4__this->fields.selectTradeGoodsEntity = TradeGoodsEntity_k__BackingField;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)sub_1C6B9AC(
                                                                  &_4__this->fields.selectTradeGoodsEntity,
                                                                  TradeGoodsEntity_k__BackingField);
    v7 = v2->fields.CS___8__locals1;
    if ( !v7 )
      goto LABEL_23;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)v7->fields.item;
    if ( !this )
      goto LABEL_23;
    oldCompleteNum = v7->fields.oldCompleteNum;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)EventCraftListViewItem__get_NowCompleteNum(
                                                                  (EventCraftListViewItem_o *)this,
                                                                  0);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v9 = v2->fields.CS___8__locals1;
      if ( v9 )
      {
        this = (EventCraftListViewManager___c__DisplayClass71_1_o *)v9->fields.__4__this;
        if ( this )
        {
          EventCraftListViewManager__OnClickWithdrawalDecide((EventCraftListViewManager_o *)this, v9->fields.item, 0);
          return;
        }
      }
LABEL_23:
      sub_1C6BC60(this, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3900/*"CRAFT_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
                                                                  0);
    v12 = (Il2CppObject *)v2->fields.CS___8__locals1;
    if ( !v12 )
      goto LABEL_23;
    monitor = (System_Action_o *)v12[2].monitor;
    v14 = this;
    if ( !monitor )
    {
      monitor = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        monitor,
        v12,
        Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__2__,
        0);
      v12[2].monitor = monitor;
      this = (EventCraftListViewManager___c__DisplayClass71_1_o *)sub_1C6B9AC(&v12[2].monitor, monitor);
    }
    if ( !Instance )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      Empty,
      (System_String_o *)v14,
      monitor,
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
    if ( !_4__this )
      goto LABEL_23;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)_4__this->fields.craftWithdrawConfirmDialog;
    if ( !this )
      goto LABEL_23;
    EventCraftWithdrawConfirmDialogComponent__Close((EventCraftWithdrawConfirmDialogComponent_o *)this, method);
  }
}
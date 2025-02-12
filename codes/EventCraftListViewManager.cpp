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
  int monitor; // w8
  Il2CppObject *v6; // x20
  unsigned int v7; // w24
  System_Reflection_MemberInfo_o *v8; // x21
  intptr_t v9; // w22
  System_Type_o *TypeFromHandle; // x0
  int v11; // w22
  __int64 v12; // x23
  System_RuntimeTypeHandle_o v13; // 0:w0.4
  System_RuntimeTypeHandle_o v14; // 0:w0.4

  v2 = targetObj;
  if ( (byte_4BCB950 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_var, method);
    sub_1C1ABD4(&UnityEngine_SerializeField_var, v3);
    targetObj = (Il2CppObject *)sub_1C1ABD4(&System_Type_TypeInfo, v4);
    byte_4BCB950 = 1;
  }
  if ( !v2 )
    goto LABEL_17;
  targetObj = (Il2CppObject *)System_Object__GetType(v2, 0LL);
  if ( !targetObj )
    goto LABEL_17;
  targetObj = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, __int64, Il2CppMethodPointer))targetObj->klass->vtable[89].method)(
                                targetObj,
                                60LL,
                                targetObj->klass->vtable[90].methodPtr);
  if ( !targetObj )
    goto LABEL_17;
  monitor = (int)targetObj[1].monitor;
  v6 = targetObj;
  if ( monitor >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= monitor )
        sub_1C1AE38(targetObj, method);
      v8 = (System_Reflection_MemberInfo_o *)*((_QWORD *)&v6[2].klass + (int)v7);
      v9 = (int)UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v13.fields.value = v9;
      TypeFromHandle = System_Type__GetTypeFromHandle(v13, 0LL);
      targetObj = (Il2CppObject *)System_Reflection_CustomAttributeExtensions__IsDefined(v8, TypeFromHandle, 0LL);
      if ( !v8 )
        break;
      v11 = (int)targetObj;
      v12 = ((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, void *))v8->klass[1]._1.namespaze)(
              v8,
              v8->klass[1]._1.byval_arg.data);
      v14.fields.value = (int)UnityEngine_Object_var;
      targetObj = (Il2CppObject *)System_Type__GetTypeFromHandle(v14, 0LL);
      if ( !v12 )
        break;
      targetObj = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v12 + 648LL))(
                                    v12,
                                    targetObj,
                                    *(_QWORD *)(*(_QWORD *)v12 + 656LL));
      if ( (v11 & (unsigned int)targetObj & 1) != 0 )
        targetObj = (Il2CppObject *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, Il2CppObject *, Il2CppClass **))v8->klass[1]._1.methods)(
                                      v8,
                                      v2,
                                      v8->klass[1]._1.nestedTypes);
      monitor = (int)v6[1].monitor;
      if ( (int)++v7 >= monitor )
        return;
    }
LABEL_17:
    sub_1C1AE30(targetObj, method);
  }
}


void __fastcall EventCraftListViewManager__CheckIsSerializeFieldNotNull_46884296(
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BCB952 & 1) == 0 )
  {
    sub_1C1ABD4(&EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_TypeInfo, method);
    byte_4BCB952 = 1;
  }
  v3 = sub_1C1AE20(EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_TypeInfo);
  EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45___ctor(
    (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C1AE30(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4BCB95F & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, result);
    byte_4BCB95F = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22437/*"ng"*/, 0LL) )
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
      sub_1C1AE30(selectTradeGoodsEntity, v5);
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
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x26
  int max_length; // w8
  unsigned int v12; // w27
  EventTradeGoodsEntity_o *v13; // x21
  int32_t id; // w22
  ItemEntity_o *supportTool; // x23
  int32_t currentEventId; // w24
  System_Action_o *v17; // x25
  EventCraftListViewItem_o *v18; // x20
  const MethodInfo *v19; // x6
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  struct EventTradeGoodsEntity_array *v30; // x8
  UILabel_o *emptyMessageLabel; // x20

  if ( (byte_4BCB956 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&EventCraftListViewItem_TypeInfo, v3);
    sub_1C1ABD4(&Method_EventCraftListViewManager_UpdateReceiveAllButtonState__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v6);
    sub_1C1ABD4(&StringLiteral_5820/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v7);
    byte_4BCB956 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_21;
  max_length = tradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C1AE38(itemList, v9);
      v13 = tradeGoodsEntities->m_Items[v12];
      if ( !v13 )
        break;
      id = v13->fields.id;
      supportTool = this->fields.supportTool;
      currentEventId = this->fields.currentEventId;
      v17 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_EventCraftListViewManager_UpdateReceiveAllButtonState__,
        0LL);
      v18 = (EventCraftListViewItem_o *)sub_1C1AE20(EventCraftListViewItem_TypeInfo);
      EventCraftListViewItem___ctor(v18, id, v13, supportTool, currentEventId, v17, v19);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v27 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v18,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v18;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v18, v20, v21, v22, v23, v24, v25);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_14;
    }
LABEL_21:
    sub_1C1AE30(itemList, v9);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  v30 = this->fields.tradeGoodsEntities;
  if ( !v30 )
    goto LABEL_21;
  if ( !*(_QWORD *)&v30->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5820/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *craftNumConfirmDialog; // x20
  UnityEngine_Object_o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Object_o *craftWithdrawConfirmDialog; // x20
  UnityEngine_Object_o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  UnityEngine_Object_o *v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BCB976 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCB976 = 1;
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
    UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
    this->fields.craftRewardDialog = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.craftRewardDialog, 0LL, v9, v10, v11, v12, v13, v14);
  }
  craftNumConfirmDialog = (UnityEngine_Object_o *)this->fields.craftNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(craftNumConfirmDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftNumConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(v16, 0LL);
    this->fields.craftNumConfirmDialog = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.craftNumConfirmDialog, 0LL, v17, v18, v19, v20, v21, v22);
  }
  craftWithdrawConfirmDialog = (UnityEngine_Object_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(craftWithdrawConfirmDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftWithdrawConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(v24, 0LL);
    this->fields.craftWithdrawConfirmDialog = 0LL;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.craftWithdrawConfirmDialog,
      0LL,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0LL, 0LL) )
  {
    v32 = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(v32, 0LL);
    this->fields.tradeButtonBlinkEffect = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.tradeButtonBlinkEffect, 0LL, v33, v34, v35, v36, v37, v38);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_34:
    sub_1C1AE30(currencyInfoController, v6);
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

  if ( (byte_4BCB972 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserItemMaster___, isUseSupportTool);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    byte_4BCB972 = 1;
  }
  entity = 0LL;
  if ( !isUseSupportTool )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    byte_4BC2585 = 1;
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
      sub_1C1AE30(v9, v7);
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
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int32_t v41; // w8
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  ItemEntity_array *EntityList; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x22
  System_Func_object__bool__o *v74; // x23
  Il2CppObject *v75; // x1
  System_Int32_array *EventItemList; // x21
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x23
  EventDetailEntity_o *v79; // x22
  System_Collections_Generic_List_object__o *v80; // x24
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  ShopCurrencyInfoController_o *v87; // x23
  int32_t v88; // w24
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  EventCraftAssetManager_o *v103; // x22
  const MethodInfo *v104; // x1
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  const MethodInfo *v111; // x1
  UILabel_o *craftNoticeLb; // x21
  const MethodInfo *v113; // x1
  int32_t v114; // w21
  EventCraftAssetManager_o *assetManager; // x19
  System_Action_o *v116; // x22
  const MethodInfo *v117; // x3

  if ( (byte_4BCB951 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventDetailMaster___, v13);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventMaster___, v14);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v15);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventTradeStoreMaster___, v16);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, v17);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ShopMaster___, v18);
    sub_1C1ABD4(&DataManager_TypeInfo, v19);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v20);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v21);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_FirstOrDefault_ItemEntity___, v22);
    sub_1C1ABD4(&EventCraftAssetManager_TypeInfo, v23);
    sub_1C1ABD4(&System_Func_ItemEntity__bool__TypeInfo, v24);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v25);
    sub_1C1ABD4(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v26);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v27);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__0__, v28);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__1__, v29);
    sub_1C1ABD4(&EventCraftListViewManager___c__DisplayClass44_0_TypeInfo, v30);
    sub_1C1ABD4(&StringLiteral_3999/*"CRAFT_EVENT_PUSH_BTN_LABEL"*/, v31);
    byte_4BCB951 = 1;
  }
  v32 = sub_1C1AE20(EventCraftListViewManager___c__DisplayClass44_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0LL);
  if ( !v32 )
    goto LABEL_35;
  *(_QWORD *)(v32 + 24) = this;
  *(_DWORD *)(v32 + 16) = eventId;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 24), (int64_t)this, v35, v36, v37, v38, v39, v40);
  v41 = *(_DWORD *)(v32 + 16);
  this->fields.svtId = guidSvtId;
  this->fields.currentEventId = v41;
  this->fields.craftCallback = callback;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.craftCallback,
    (int64_t)callback,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.playVoiceAction = playVoice;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAction,
    (int64_t)playVoice,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.maskPanel = mask;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.maskPanel, (int64_t)mask, v54, v55, v56, v57, v58, v59);
  this->fields.selectTradeGoodsEntity = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity, 0LL, v60, v61, v62, v63, v64, v65);
  if ( this->fields.supportTool )
    goto LABEL_12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
LABEL_35:
    sub_1C1AE30(Master_object, v34);
  EntityList = ItemMaster__GetEntityList(Master_object, 39, 0LL);
  if ( EntityList )
  {
    v73 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
    v74 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_ItemEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v74,
      (Il2CppObject *)v32,
      Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__0__,
      0LL);
    v75 = System_Linq_Enumerable__FirstOrDefault_object__50081164(
            v73,
            (System_Func_TSource__bool__o *)v74,
            (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_ItemEntity___);
  }
  else
  {
    v75 = 0LL;
  }
  this->fields.supportTool = (struct ItemEntity_o *)v75;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.supportTool, (int64_t)v75, v67, v68, v69, v70, v71, v72);
LABEL_12:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_35;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Master_object, *(_DWORD *)(v32 + 16), 0LL);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_35;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             *(_DWORD *)(v32 + 16),
             (const MethodInfo_3248678 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v79 = (EventDetailEntity_o *)Entity;
  v80 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_35;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v80;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&currencyInfoController->fields.objectList,
    (int64_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  if ( !v79 )
    goto LABEL_35;
  v87 = this->fields.currencyInfoController;
  v88 = *(_DWORD *)(v32 + 16);
  Master_object = (ItemMaster_o *)EventDetailEntity__IsForcedAdjustmentDialog(v79, 0LL);
  if ( !v87 )
    goto LABEL_35;
  ShopCurrencyInfoController__RefreshEventItemInfo(
    v87,
    6,
    v88,
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
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_35;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            (EventTradeGoodsMaster_o *)Master_object,
                            this->fields.currentEventId,
                            0LL);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.tradeGoodsEntities,
    (int64_t)TradeGoodsEntityArray,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_35;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0LL);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.tradeStoreEntities,
    (int64_t)OpenTradeStoreEntityArray,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  Master_object = (ItemMaster_o *)this->fields.touchPanel;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (ItemMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( !this->fields.assetManager )
  {
    v103 = (EventCraftAssetManager_o *)sub_1C1AE20(EventCraftAssetManager_TypeInfo);
    EventCraftAssetManager___ctor(v103, v104);
    this->fields.assetManager = v103;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.assetManager,
      (int64_t)v103,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetCraftNotification(0LL);
  EventCraftListViewManager__UpdateNoticeButtonDisplay(this, v111);
  craftNoticeLb = this->fields.craftNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3999/*"CRAFT_EVENT_PUSH_BTN_LABEL"*/, 0LL);
  if ( !craftNoticeLb )
    goto LABEL_35;
  UILabel__set_text(craftNoticeLb, (System_String_o *)Master_object, 0LL);
  EventCraftListViewManager__UpdateCraftAbleCountLb(this, v113);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_35;
  *(_BYTE *)(v32 + 32) = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           (Il2CppObject **)(v32 + 40),
                           this->fields.currentEventId,
                           (const MethodInfo_32486C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  v114 = *(_DWORD *)(v32 + 16);
  assetManager = this->fields.assetManager;
  v116 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v116,
    (Il2CppObject *)v32,
    Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__1__,
    0LL);
  if ( !assetManager )
    goto LABEL_35;
  EventCraftAssetManager__LoadAssets(assetManager, v114, v116, v117);
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
  if ( !byte_4BC2146 )
  {
    this = (EventCraftListViewManager_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, dialog);
    byte_4BC2146 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventCraftListViewManager_o *)UnityEngine_Component__get_gameObject(dialog, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1C1AE30(this, dialog);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct EventTradeGoodsEntity_o *klass; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v34; // x21
  System_String_o *v35; // x22
  System_Action_o *v36; // x23
  int32_t storeIdx; // [xsp+3Ch] [xbp-44h] BYREF

  if ( (byte_4BCB95D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_int____int__bool__TypeInfo, obj);
    sub_1C1ABD4(&System_Action_TypeInfo, v5);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickCraftStartButton__, v6);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickCraftStartDecide__, v7);
    sub_1C1ABD4(&Method_EventCraftListViewManager__OnClickCraftStartButton_b__57_0__, v8);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C1ABD4(&StringLiteral_3997/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_TITLE"*/, v11);
    sub_1C1ABD4(&StringLiteral_3996/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/, v12);
    byte_4BCB95D = 1;
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
        v16 = (_QWORD *)sub_1C1ABEC(Method_EventCraftListViewManager_OnClickCraftStartButton__);
      v17 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v16, v16[4]);
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
          v25 = (System_Action_T1__T2__T3__o *)sub_1C1AE20(System_Action_int____int__bool__TypeInfo);
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
              sub_1C1AB78(
                (PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity,
                (int64_t)klass,
                v26,
                v27,
                v28,
                v29,
                v30,
                v31);
              goto LABEL_7;
            }
          }
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3997/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3996/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
        v36 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
        System_Action___ctor(
          v36,
          (Il2CppObject *)this,
          Method_EventCraftListViewManager__OnClickCraftStartButton_b__57_0__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog_31100088(
            (CommonUI_o *)Instance,
            v34,
            v35,
            v36,
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
    sub_1C1AE30(maskPanel, obj);
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

  if ( (byte_4BCB95E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventCraftListViewManager_CraftStartResponse__, tradeInfo);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TradeStartRequest___, v9);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v10);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    byte_4BCB95E = 1;
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
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_CraftStartResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                       v13,
                                                                       (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeInfo )
    {
      if ( tradeInfo->max_length < 2 )
        sub_1C1AE38(craftNumConfirmDialog, tradeInfo);
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
    sub_1C1AE30(craftNumConfirmDialog, tradeInfo);
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

  if ( (byte_4BCB95B & 1) == 0 )
  {
    this = (EventCraftListViewManager_o *)sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickListView__, obj);
    byte_4BCB95B = 1;
  }
  if ( !obj || (this = (EventCraftListViewManager_o *)EventCraftListViewObject__GetItem(obj, 0LL)) == 0LL )
    sub_1C1AE30(this, obj);
  v4 = this;
  if ( !this->fields.sortKindButton
    && EventCraftListViewItem__get_IsEventEnd((EventCraftListViewItem_o *)this, (const MethodInfo *)obj)
    || !LOBYTE(v4->fields.topFocusOffset) )
  {
    v5 = Method_EventCraftListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_EventCraftListViewManager_OnClickListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
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

  if ( (byte_4BCB973 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickNoticeButton__, method);
    byte_4BCB973 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v4 = Method_EventCraftListViewManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C1ABEC(Method_EventCraftListViewManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  Il2CppObject *Request_object; // x0
  long double inited; // q0
  _QWORD *v17; // x21
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x0

  if ( (byte_4BCB963 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Empty_int___, method);
    sub_1C1ABD4(&Method_EventCraftListViewManager_TradeReceiveResponse__, v3);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v4);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4BCB963 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  this->fields.selectTradeGoodsEntity = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity, 0LL, v8, v9, v10, v11, v12, v13);
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_TradeReceiveResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v14,
                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  v17 = Method_System_Array_Empty_int___;
  currentEventId = this->fields.currentEventId;
  v19 = (TradeReceiveRequest_o *)Request_object;
  v20 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v20 )
  {
    sub_1C6CB0C(Method_System_Array_Empty_int___);
    v20 = v17[7];
  }
  v21 = *(_QWORD *)(v20 + 16);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C6CAB0(inited);
  if ( !*(_DWORD *)(v21 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v21);
  maskPanel = *(struct UnityEngine_GameObject_o **)(v17[7] + 16LL);
  if ( (*((_BYTE *)&maskPanel[12].fields + 5) & 1) == 0 )
    maskPanel = (struct UnityEngine_GameObject_o *)sub_1C6CAB0(inited);
  if ( !v19 )
LABEL_16:
    sub_1C1AE30(maskPanel, method);
  TradeReceiveRequest__beginRequest(
    v19,
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
  if ( (byte_4BCB962 & 1) == 0 )
  {
    this = (EventCraftListViewManager_o *)sub_1C1ABD4(
                                            &Method_EventCraftListViewManager_OnClickReceiveAllButton__,
                                            method);
    byte_4BCB962 = 1;
  }
  receiveAllButton = v2->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_1C1AE30(this, method);
  mState = receiveAllButton->fields.mState;
  v5 = Method_EventCraftListViewManager_OnClickReceiveAllButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C1ABEC(Method_EventCraftListViewManager_OnClickReceiveAllButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct EventTradeGoodsEntity_o *v22; // x1

  if ( (byte_4BCB960 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickReceiveButton__, obj);
    sub_1C1ABD4(&EventCraftTimeCalculation_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    byte_4BCB960 = 1;
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
      v9 = (_QWORD *)sub_1C1ABEC(Method_EventCraftListViewManager_OnClickReceiveButton__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v9, v9[4]);
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
          v22 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
          this->fields.selectTradeGoodsEntity = v22;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity,
            (int64_t)v22,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          goto LABEL_17;
        }
      }
    }
LABEL_19:
    sub_1C1AE30(maskPanel, obj);
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

  if ( (byte_4BCB961 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventCraftListViewManager_TradeReceiveResponse__, *(_QWORD *)&storeIdx);
    sub_1C1ABD4(&int___TypeInfo, v7);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v8);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    byte_4BCB961 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_12;
  if ( receiveNum > 0 )
  {
    UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_TradeReceiveResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
    currentEventId = this->fields.currentEventId;
    v15 = (TradeReceiveRequest_o *)Request_object;
    maskPanel = (struct UnityEngine_GameObject_o *)sub_1C1AC7C(int___TypeInfo, 1LL);
    if ( maskPanel )
    {
      if ( !LODWORD(maskPanel[1].klass) )
        sub_1C1AE38(maskPanel, *(_QWORD *)&storeIdx);
      LODWORD(maskPanel[1].monitor) = storeIdx;
      if ( v15 )
      {
        TradeReceiveRequest__beginRequest(v15, currentEventId, (System_Int32_array *)maskPanel, receiveNum, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1C1AE30(maskPanel, *(_QWORD *)&storeIdx);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct EventTradeGoodsEntity_o *v25; // x1

  if ( (byte_4BCB967 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_int____int__bool__TypeInfo, obj);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickReplenishmentButton__, v5);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__, v6);
    byte_4BCB967 = 1;
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
    sub_1C1AE30(maskPanel, obj);
  }
  maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
  if ( !maskPanel )
    goto LABEL_20;
  IsRefillable = EventCraftListViewItem__get_IsRefillable(
                   (EventCraftListViewItem_o *)maskPanel,
                   (const MethodInfo *)obj);
  v10 = Method_EventCraftListViewManager_OnClickReplenishmentButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C1ABEC(Method_EventCraftListViewManager_OnClickReplenishmentButton__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v10, v10[4]);
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
    v18 = (System_Action_T1__T2__T3__o *)sub_1C1AE20(System_Action_int____int__bool__TypeInfo);
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
    v25 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
    this->fields.selectTradeGoodsEntity = v25;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity,
      (int64_t)v25,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct EventTradeGoodsEntity_o *v23; // x1

  if ( (byte_4BCB96E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_int__int__TypeInfo, obj);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickSupportToolButton__, v5);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickSupportToolDecide__, v6);
    byte_4BCB96E = 1;
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
    v8 = (_QWORD *)sub_1C1ABEC(Method_EventCraftListViewManager_OnClickSupportToolButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v8, v8[4]);
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
        v16 = (System_Action_int__int__o *)sub_1C1AE20(System_Action_int__int__TypeInfo),
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
    sub_1C1AE30(maskPanel, obj);
  }
  v23 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
  this->fields.selectTradeGoodsEntity = v23;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity,
    (int64_t)v23,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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

  if ( (byte_4BCB96F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventCraftListViewManager_TradeSupportToolResponse__, *(_QWORD *)&storeIdx);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TradeStartRequest___, v7);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v8);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_4BCB96F = 1;
  }
  craftUseSupportToolDialog = this->fields.craftUseSupportToolDialog;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
  EventCraftUseSupportToolDialogComponent__Close(craftUseSupportToolDialog, 0LL);
  craftUseSupportToolDialog = (EventCraftUseSupportToolDialogComponent_o *)this->fields.maskPanel;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftUseSupportToolDialog, 1, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_TradeSupportToolResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  craftUseSupportToolDialog = (EventCraftUseSupportToolDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                             v11,
                                                                             (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TradeStartRequest___);
  supportTool = this->fields.supportTool;
  if ( !supportTool )
  {
    id = 0;
    if ( craftUseSupportToolDialog )
      goto LABEL_9;
LABEL_11:
    sub_1C1AE30(craftUseSupportToolDialog, *(_QWORD *)&storeIdx);
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

  if ( (byte_4BCB968 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventCraftListViewManager_TradeReplenishmentResponse__, tradeInfo);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TradeStartRequest___, v9);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v10);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    byte_4BCB968 = 1;
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
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_TradeReplenishmentResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                       v13,
                                                                       (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeInfo )
    {
      if ( tradeInfo->max_length < 2 )
        sub_1C1AE38(craftNumConfirmDialog, tradeInfo);
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
    sub_1C1AE30(craftNumConfirmDialog, tradeInfo);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_GameObject_o **v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  unsigned int klass; // w8
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  const MethodInfo *v27; // x1
  EventCraftWithdrawConfirmDialogComponent_o *craftWithdrawConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  System_Action_bool__o *v30; // x23

  if ( (byte_4BCB96A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_bool__TypeInfo, obj);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickWithdrawalButton__, v5);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__DisplayClass70_0__OnClickWithdrawalButton_b__0__, v6);
    sub_1C1ABD4(&EventCraftListViewManager___c__DisplayClass70_0_TypeInfo, v7);
    byte_4BCB96A = 1;
  }
  v8 = sub_1C1AE20(EventCraftListViewManager___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_16;
  *(_QWORD *)(v8 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = obj;
  v17 = (UnityEngine_GameObject_o **)(v8 + 24);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)obj, v18, v19, v20, v21, v22, v23);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( !*v17 )
    goto LABEL_16;
  klass = (unsigned int)(*v17)[5].klass;
  if ( klass >= 4 && (klass & 0xFFFFFFFE) == 4 )
  {
    v25 = Method_EventCraftListViewManager_OnClickWithdrawalButton__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1C1ABEC(Method_EventCraftListViewManager_OnClickWithdrawalButton__);
    v26 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0LL);
    EventCraftListViewManager__UpdateListObject(this, v27);
    maskPanel = (UnityEngine_GameObject_o *)this->fields.craftWithdrawConfirmDialog;
    if ( maskPanel )
    {
      EventCraftWithdrawConfirmDialogComponent__Init((EventCraftWithdrawConfirmDialogComponent_o *)maskPanel, 0LL);
      maskPanel = *v17;
      if ( *v17 )
      {
        craftWithdrawConfirmDialog = this->fields.craftWithdrawConfirmDialog;
        Item = EventCraftListViewObject__GetItem((EventCraftListViewObject_o *)maskPanel, 0LL);
        v30 = (System_Action_bool__o *)sub_1C1AE20(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v30,
          (Il2CppObject *)v8,
          Method_EventCraftListViewManager___c__DisplayClass70_0__OnClickWithdrawalButton_b__0__,
          0LL);
        if ( craftWithdrawConfirmDialog )
        {
          EventCraftWithdrawConfirmDialogComponent__Open(craftWithdrawConfirmDialog, Item, v30, 0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_16:
    sub_1C1AE30(maskPanel, v10);
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
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  System_Int32_array *v15; // x22

  if ( (byte_4BCB96C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EventCraftListViewManager_WithdrawalResponse__, item);
    sub_1C1ABD4(&int___TypeInfo, v5);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v6);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4BCB96C = 1;
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
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_WithdrawalResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  currentEventId = this->fields.currentEventId;
  v13 = (TradeReceiveRequest_o *)Request_object;
  craftWithdrawConfirmDialog = sub_1C1AC7C(int___TypeInfo, 1LL);
  if ( !item )
    goto LABEL_13;
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_13;
  v15 = (System_Int32_array *)craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  if ( !*(_DWORD *)(craftWithdrawConfirmDialog + 24) )
    sub_1C1AE38(craftWithdrawConfirmDialog, item);
  *(_DWORD *)(craftWithdrawConfirmDialog + 32) = TradeInfo_k__BackingField->fields.storeIdx;
  craftWithdrawConfirmDialog = EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)item);
  if ( !v13 )
LABEL_13:
    sub_1C1AE30(craftWithdrawConfirmDialog, item);
  TradeReceiveRequest__beginRequest(v13, currentEventId, v15, craftWithdrawConfirmDialog, 1, 0LL);
}


void __fastcall EventCraftListViewManager__OnMoveEnd(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4BCB95A & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCB95A = 1;
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
          sub_1C1AE30(0LL, v7);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BaseDialog_o **v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *Instance; // x20
  System_String_o *v30; // x21
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  System_String_o *v33; // x24
  CommonConfirmDialog_ClickDelegate_o *v34; // x25

  if ( (byte_4BCB96B & 1) == 0 )
  {
    sub_1C1ABD4(&CommonConfirmDialog_ClickDelegate_TypeInfo, item);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__0__, v7);
    sub_1C1ABD4(&EventCraftListViewManager___c__DisplayClass71_0_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_13663/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, v9);
    sub_1C1ABD4(&StringLiteral_3804/*"COMMON_CONFIRM_EXECUTE"*/, v10);
    sub_1C1ABD4(&StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_1C1ABD4(&StringLiteral_4013/*"CRAFT_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, v12);
    byte_4BCB96B = 1;
  }
  v13 = sub_1C1AE20(EventCraftListViewManager___c__DisplayClass71_0_TypeInfo);
  EventCraftListViewManager___c__DisplayClass71_0___ctor((EventCraftListViewManager___c__DisplayClass71_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = item;
  v22 = (BaseDialog_o **)(v13 + 24);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)item, v23, v24, v25, v26, v27, v28);
  craftWithdrawConfirmDialog = (BaseDialog_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(craftWithdrawConfirmDialog, 0LL) )
    return;
  craftWithdrawConfirmDialog = *v22;
  if ( !*v22 )
    goto LABEL_12;
  *(_DWORD *)(v13 + 32) = EventCraftListViewItem__get_NowCompleteNum(
                            (EventCraftListViewItem_o *)craftWithdrawConfirmDialog,
                            v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_13663/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_4013/*"CRAFT_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C1AE20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v34,
    (Il2CppObject *)v13,
    Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_12:
    sub_1C1AE30(craftWithdrawConfirmDialog, v15);
  CommonUI__OpenConfirmDialog_31098836(
    (CommonUI_o *)Instance,
    v30,
    v31,
    v32,
    v33,
    1,
    v34,
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

  if ( (byte_4BCB966 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_int____int__bool__TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1C1ABD4(&DataManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftListViewObject___, v6);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__, v7);
    sub_1C1ABD4(&Method_EventCraftListViewManager__OpenReplenishmentDialog_b__66_0__, v8);
    sub_1C1ABD4(&System_Func_EventCraftListViewObject__bool__TypeInfo, v9);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BCB966 = 1;
  }
  if ( this->fields.selectTradeGoodsEntity )
  {
    ObjectList = EventCraftListViewManager__get_ObjectList(this, method);
    v12 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_EventCraftListViewObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager__OpenReplenishmentDialog_b__66_0__,
      0LL);
    v13 = System_Linq_Enumerable__FirstOrDefault_object__50081164(
            (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
            (System_Func_TSource__bool__o *)v12,
            (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftListViewObject___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_21;
    Entity = DataMasterBase_object__object__int___GetEntity(
               Master_object,
               this->fields.currentEventId,
               (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
                v22 = (System_Action_T1__T2__T3__o *)sub_1C1AE20(System_Action_int____int__bool__TypeInfo);
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
            sub_1C1AE30(Master_object, v15);
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

  if ( (byte_4BCB965 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_bool__TypeInfo, resData);
    sub_1C1ABD4(&System_Action_TypeInfo, v5);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OpenReplenishmentDialog__, v6);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_SetActive__, v7);
    byte_4BCB965 = 1;
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
  v14 = (System_Action_bool__o *)sub_1C1AE20(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v14, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v15 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventCraftListViewManager_OpenReplenishmentDialog__, 0LL);
  if ( !v9 )
LABEL_7:
    sub_1C1AE30(craftRewardDialog, resData);
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

  if ( (byte_4BCB957 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__get_Current__, v5);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnMoveEnd__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCraftListViewObject__get_Count__, v8);
    sub_1C1ABD4(&StringLiteral_10123/*"OnMoveEnd"*/, v9);
    byte_4BCB957 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  ObjectList = (System_Collections_Generic_List_object__o *)EventCraftListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v11);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      ObjectList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__) )
    {
      current = v17.fields._current;
      v14 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventCraftListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C1AE30(v15, v16);
      EventCraftListViewObject__Init((EventCraftListViewObject_o *)current, 2, v14, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4BCB971 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventTradeStoreMaster___, isReceive);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    byte_4BCB971 = 1;
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
  currencyInfoController = (ShopCurrencyInfoController_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !currencyInfoController )
    goto LABEL_13;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)currencyInfoController,
                                this->fields.currentEventId,
                                0LL);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.tradeStoreEntities,
    (int64_t)OpenTradeStoreEntityArray,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  EventCraftListViewManager__UpdateCraftAbleCountLb(this, v14);
  currencyInfoController = (ShopCurrencyInfoController_o *)this->fields.touchPanel;
  if ( !currencyInfoController
    || (currencyInfoController = (ShopCurrencyInfoController_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)currencyInfoController,
                                                                   0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyInfoController, 0, 0LL),
        (currencyInfoController = (ShopCurrencyInfoController_o *)this->fields.maskPanel) == 0LL) )
  {
LABEL_13:
    sub_1C1AE30(currencyInfoController, isReceive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyInfoController, 0, 0LL);
  EventCraftListViewManager__RequestListObject(this, v15);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *craftNumConfirmDialog; // x20
  struct EventCraftAssetManager_o *v23; // x8
  Il2CppObject *CraftItemNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *craftWithdrawConfirmDialog; // x20
  struct EventCraftAssetManager_o *v34; // x8
  Il2CppObject *CraftItemWithdrawConfirmDialog_k__BackingField; // x20
  Il2CppObject *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x2
  UnityEngine_Object_o *craftUseSupportToolDialog; // x20
  struct EventCraftAssetManager_o *v45; // x8
  Il2CppObject *CraftUseSupportToolDialog_k__BackingField; // x20
  Il2CppObject *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x2
  UnityEngine_Object_o *craftFirstTimeSupportToolDialog; // x20
  struct EventCraftAssetManager_o *v56; // x8
  Il2CppObject *CraftFirstTimeSupportToolDialog_k__BackingField; // x20
  Il2CppObject *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x2

  if ( (byte_4BCB953 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventCraftFirstTimeSupportToolDialogComponent___, method);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventCraftNumConfirmDialogComponent___, v3);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventCraftRewardDialogComponent___, v4);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventCraftUseSupportToolDialogComponent___, v5);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventCraftWithdrawConfirmDialogComponent___, v6);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    byte_4BCB953 = 1;
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
            (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_44;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v10,
                         (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftRewardDialogComponent___);
    this->fields.craftRewardDialog = (struct EventCraftRewardDialogComponent_o *)Component_object;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.craftRewardDialog,
      (int64_t)Component_object,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftRewardDialog,
      v21);
  }
  craftNumConfirmDialog = (UnityEngine_Object_o *)this->fields.craftNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftNumConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v23 = this->fields.assetManager;
    if ( !v23 )
      goto LABEL_44;
    CraftItemNumConfirmDialog_k__BackingField = (Il2CppObject *)v23->fields._CraftItemNumConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            CraftItemNumConfirmDialog_k__BackingField,
            (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_44;
    v25 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v10,
            (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftNumConfirmDialogComponent___);
    this->fields.craftNumConfirmDialog = (struct EventCraftNumConfirmDialogComponent_o *)v25;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.craftNumConfirmDialog,
      (int64_t)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftNumConfirmDialog,
      v32);
  }
  craftWithdrawConfirmDialog = (UnityEngine_Object_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftWithdrawConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v34 = this->fields.assetManager;
    if ( !v34 )
      goto LABEL_44;
    CraftItemWithdrawConfirmDialog_k__BackingField = (Il2CppObject *)v34->fields._CraftItemWithdrawConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            CraftItemWithdrawConfirmDialog_k__BackingField,
            (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_44;
    v36 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v10,
            (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftWithdrawConfirmDialogComponent___);
    this->fields.craftWithdrawConfirmDialog = (struct EventCraftWithdrawConfirmDialogComponent_o *)v36;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.craftWithdrawConfirmDialog,
      (int64_t)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftWithdrawConfirmDialog,
      v43);
  }
  craftUseSupportToolDialog = (UnityEngine_Object_o *)this->fields.craftUseSupportToolDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftUseSupportToolDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v45 = this->fields.assetManager;
    if ( !v45 )
      goto LABEL_44;
    CraftUseSupportToolDialog_k__BackingField = (Il2CppObject *)v45->fields._CraftUseSupportToolDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__Instantiate_object_(
            CraftUseSupportToolDialog_k__BackingField,
            (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v10 )
      goto LABEL_44;
    v47 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v10,
            (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftUseSupportToolDialogComponent___);
    this->fields.craftUseSupportToolDialog = (struct EventCraftUseSupportToolDialogComponent_o *)v47;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.craftUseSupportToolDialog,
      (int64_t)v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftUseSupportToolDialog,
      v54);
  }
  craftFirstTimeSupportToolDialog = (UnityEngine_Object_o *)this->fields.craftFirstTimeSupportToolDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftFirstTimeSupportToolDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v56 = this->fields.assetManager;
    if ( v56 )
    {
      CraftFirstTimeSupportToolDialog_k__BackingField = (Il2CppObject *)v56->fields._CraftFirstTimeSupportToolDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__Instantiate_object_(
              CraftFirstTimeSupportToolDialog_k__BackingField,
              (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v10 )
      {
        v58 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v10,
                (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftFirstTimeSupportToolDialogComponent___);
        this->fields.craftFirstTimeSupportToolDialog = (struct EventCraftFirstTimeSupportToolDialogComponent_o *)v58;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.craftFirstTimeSupportToolDialog,
          (int64_t)v58,
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
    sub_1C1AE30(v10, v11);
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
  if ( (byte_4BCB958 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_EventCraftListViewObject__TypeInfo, obj);
    sub_1C1ABD4(&System_Action_TypeInfo, v6);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickCraftStartButton__, v7);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickReceiveButton__, v8);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickReplenishmentButton__, v9);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickSupportToolButton__, v10);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnClickWithdrawalButton__, v11);
    sub_1C1ABD4(&Method_EventCraftListViewManager_OnMoveEnd__, v12);
    sub_1C1ABD4(&EventCraftListViewObject_TypeInfo, v13);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v14);
    byte_4BCB958 = 1;
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
    v16 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_EventCraftListViewManager_OnMoveEnd__, 0LL);
    if ( !v4 )
      sub_1C1AE30(v17, v18);
    EventCraftListViewObject__Init((EventCraftListViewObject_o *)v4, 2, v16, 0LL);
    v19 = (System_Action_object__o *)sub_1C1AE20(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v19,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickCraftStartButton__,
      0LL);
    v20 = (System_Action_object__o *)sub_1C1AE20(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v20,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickReceiveButton__,
      0LL);
    v21 = (System_Action_object__o *)sub_1C1AE20(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickReplenishmentButton__,
      0LL);
    v22 = (System_Action_object__o *)sub_1C1AE20(System_Action_EventCraftListViewObject__TypeInfo);
    System_Action_object____ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickWithdrawalButton__,
      0LL);
    v23 = (System_Action_object__o *)sub_1C1AE20(System_Action_EventCraftListViewObject__TypeInfo);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Transform_o *v25; // x21

  if ( (byte_4BCB954 & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, method);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject____77632760, v4);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_3505/*"CHECK_TRADE_BUTTON_LABEL"*/, v6);
    sub_1C1ABD4(&StringLiteral_17792/*"btn_getreward"*/, v7);
    byte_4BCB954 = 1;
  }
  currentEventId = this->fields.currentEventId;
  receiveAllButtonSprite = this->fields.receiveAllButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39058000(currentEventId, receiveAllButtonSprite, (System_String_o *)StringLiteral_17792/*"btn_getreward"*/, 0LL);
  receiveAllButtonLabel = this->fields.receiveAllButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveAllButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3505/*"CHECK_TRADE_BUTTON_LABEL"*/, 0LL);
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
        v18 = UnityEngine_Object__Instantiate_object__50483316(
                CraftButtonBlinkEffect_k__BackingField,
                transform,
                (const MethodInfo_3025074 *)Method_UnityEngine_Object_Instantiate_GameObject____77632760);
        *p_tradeButtonBlinkEffect = (struct UnityEngine_GameObject_o *)v18;
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.tradeButtonBlinkEffect,
          (int64_t)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        receiveAllButton = (__int64)*p_tradeButtonBlinkEffect;
        if ( *p_tradeButtonBlinkEffect )
        {
          receiveAllButton = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)receiveAllButton,
                                        0LL);
          v25 = (UnityEngine_Transform_o *)receiveAllButton;
          if ( !byte_4BC2146 )
          {
            receiveAllButton = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v12);
            byte_4BC2146 = 1;
          }
          if ( v25 )
          {
            UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
    sub_1C1AE30(receiveAllButton, v12);
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

  if ( (byte_4BCB964 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___, result);
    sub_1C1ABD4(&JsonManager_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    sub_1C1ABD4(&StringLiteral_16075/*"["*/, v7);
    sub_1C1ABD4(&StringLiteral_16334/*"]"*/, v8);
    byte_4BCB964 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22437/*"ng"*/, 0LL) )
  {
    v9 = (Il2CppObject *)System_String__Concat_63051628(
                           (System_String_o *)StringLiteral_16075/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16334/*"]"*/,
                           0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__DeserializeArray_object_(
            v9,
            (const MethodInfo_3006E90 *)Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    if ( !v10 )
      sub_1C1AE30(0LL, v11);
    if ( !v10->max_length )
      sub_1C1AE38(v10, v11);
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

  if ( (byte_4BCB969 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, result);
    byte_4BCB969 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22437/*"ng"*/, 0LL) )
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
      sub_1C1AE30(selectTradeGoodsEntity, v5);
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

  if ( (byte_4BCB970 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, result);
    byte_4BCB970 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22437/*"ng"*/, 0LL) )
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
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x24
  unsigned __int64 v13; // x25
  __int64 v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  __int64 v22; // x21
  System_Int32_array *v23; // x22
  System_Func_int__bool__o *v24; // x23
  struct EventTradeStoreEntity_array *v25; // x8
  __int64 v26; // x9
  EventTradeStoreEntity_o *v27; // x8
  int32_t *v29; // [xsp+8h] [xbp-78h]
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-70h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BCB95C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_int____77547112, storeIdx);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserEventTradeMaster___, v5);
    sub_1C1ABD4(&DataManager_TypeInfo, v6);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v7);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__DisplayClass56_0__TryGetAvailableStoreIdx_b__0__, v8);
    sub_1C1ABD4(&EventCraftListViewManager___c__DisplayClass56_0_TypeInfo, v9);
    byte_4BCB95C = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  *storeIdx = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
      v29 = storeIdx;
      v13 = 0LL;
      while ( 1 )
      {
        v14 = sub_1C1AE20(EventCraftListViewManager___c__DisplayClass56_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v14, 0LL);
        if ( v13 >= tradeStoreEntities->max_length )
          goto LABEL_27;
        if ( !v14 )
          goto LABEL_26;
        v21 = (int64_t)tradeStoreEntities->m_Items[v13];
        *(_QWORD *)(v14 + 16) = v21;
        v22 = v14 + 16;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 16), v21, v15, v16, v17, v18, v19, v20);
        v23 = usedStoreIdx;
        v24 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v24,
          (Il2CppObject *)v14,
          Method_EventCraftListViewManager___c__DisplayClass56_0__TryGetAvailableStoreIdx_b__0__,
          0LL);
        Master_object = (UserEventTradeMaster_o *)BasicHelper__Any_int__49848700(
                                                    v23,
                                                    (System_Func_T__bool__o *)v24,
                                                    (const MethodInfo_2F8A17C *)Method_BasicHelper_Any_int____77547112);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        if ( (__int64)++v13 >= (int)tradeStoreEntities->max_length )
          return 0;
      }
      if ( *(_QWORD *)v22 )
      {
        *v29 = *(_DWORD *)(*(_QWORD *)v22 + 20LL);
        return 1;
      }
LABEL_26:
      sub_1C1AE30(Master_object, v11);
    }
    return 0;
  }
  v25 = this->fields.tradeStoreEntities;
  if ( !v25 )
    goto LABEL_26;
  v26 = *(_QWORD *)&v25->max_length;
  if ( !v26 )
    return 0;
  if ( !(_DWORD)v26 )
LABEL_27:
    sub_1C1AE38(Master_object, v11);
  v27 = v25->m_Items[0];
  if ( !v27 )
    goto LABEL_26;
  *storeIdx = v27->fields.idx;
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
  if ( (byte_4BCB975 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserEventTradeMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&int_TypeInfo, v4);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_4010/*"CRAFT_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/, v6);
    this = (EventCraftListViewManager_o *)sub_1C1ABD4(&StringLiteral_4009/*"CRAFT_EVENT_TITLE_QUOTA_LABEL"*/, v7);
    byte_4BCB975 = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  tradeStoreEntities = v2->fields.tradeStoreEntities;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventCraftListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
  v12 = (System_String_o **)(max_length == v10 ? &StringLiteral_4010/*"CRAFT_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_4009/*"CRAFT_EVENT_TITLE_QUOTA_LABEL"*/);
  v13 = *v12;
  craftAbleCountLb = v2->fields.craftAbleCountLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get(v13, 0LL);
  v25 = v11;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v16, v17, v18);
  v24 = max_length;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22);
  this = (EventCraftListViewManager_o *)System_String__Format_63054740(v15, v19, v23, 0LL);
  if ( !craftAbleCountLb )
LABEL_20:
    sub_1C1AE30(this, method);
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

  if ( (byte_4BCB959 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__get_Current__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__, v5);
    byte_4BCB959 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_object__o *)EventCraftListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C1AE30(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    ObjectList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__);
    if ( !v8 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C1AE30(v8, v9);
    Item = EventCraftListViewObject__GetItem((EventCraftListViewObject_o *)v12.fields._current, 0LL);
    EventCraftListViewObject__UpdateItem((EventCraftListViewObject_o *)current, Item, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
}


void __fastcall EventCraftListViewManager__UpdateNoticeButtonDisplay(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *craftNoticeBtnSp; // x0
  __int64 *v5; // x8

  if ( (byte_4BCB974 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17806/*"btn_on"*/, method);
    sub_1C1ABD4(&StringLiteral_17805/*"btn_off"*/, v3);
    byte_4BCB974 = 1;
  }
  craftNoticeBtnSp = this->fields.craftNoticeBtnSp;
  if ( !craftNoticeBtnSp )
    sub_1C1AE30(0LL, method);
  if ( this->fields.isButtonOn )
    v5 = &StringLiteral_17806/*"btn_on"*/;
  else
    v5 = &StringLiteral_17805/*"btn_off"*/;
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UICommonButton_o *receiveAllButton; // x8
  __int64 v19; // x1
  _BOOL4 v20; // w20
  float v21; // s0
  float v22; // s3
  float v23; // s1
  float v24; // s2
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21

  v2 = this;
  if ( (byte_4BCB955 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_ListViewItem___, method);
    sub_1C1ABD4(&System_Func_ListViewItem__bool__TypeInfo, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__UpdateReceiveAllButtonState_b__49_0__, v5);
    this = (EventCraftListViewManager_o *)sub_1C1ABD4(&EventCraftListViewManager___c_TypeInfo, v6);
    byte_4BCB955 = 1;
  }
  itemList = (System_Collections_Generic_List_T__o *)v2->fields.itemList;
  if ( !itemList )
  {
    receiveAllButton = v2->fields.receiveAllButton;
LABEL_13:
    v20 = 0;
    v19 = 3LL;
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
    _9__49_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__49_0,
      v10,
      Method_EventCraftListViewManager___c__UpdateReceiveAllButtonState_b__49_0__,
      0LL);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Func_ListViewItem__bool__o *)_9__49_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  this = (EventCraftListViewManager_o *)BasicHelper__Any_object_(
                                          itemList,
                                          (System_Func_T__bool__o *)_9__49_0,
                                          (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_ListViewItem___);
  receiveAllButton = v2->fields.receiveAllButton;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_13;
  v19 = 0LL;
  v20 = 1;
LABEL_14:
  if ( !receiveAllButton )
    goto LABEL_24;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))receiveAllButton->klass->vtable._14_SetState.method)(
    receiveAllButton,
    v19,
    1LL,
    receiveAllButton->klass->vtable._15_OnPress.methodPtr);
  this = (EventCraftListViewManager_o *)v2->fields.receiveAllButtonLabel;
  v21 = 0.5;
  if ( v20 )
    v21 = 1.0;
  if ( !this )
    goto LABEL_24;
  v22 = 1.0;
  v23 = v21;
  v24 = v21;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v21, 0LL);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)v2->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0LL, 0LL) )
  {
    this = (EventCraftListViewManager_o *)v2->fields.tradeButtonBlinkEffect;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v20, 0LL);
      return;
    }
LABEL_24:
    sub_1C1AE30(this, v19);
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

  if ( (byte_4BCB96D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___, result);
    sub_1C1ABD4(&JsonManager_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    sub_1C1ABD4(&StringLiteral_16075/*"["*/, v7);
    sub_1C1ABD4(&StringLiteral_16334/*"]"*/, v8);
    byte_4BCB96D = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22437/*"ng"*/, 0LL) )
  {
    v9 = (Il2CppObject *)System_String__Concat_63051628(
                           (System_String_o *)StringLiteral_16075/*"["*/,
                           result,
                           (System_String_o *)StringLiteral_16334/*"]"*/,
                           0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__DeserializeArray_object_(
            v9,
            (const MethodInfo_3006E90 *)Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    if ( !v10 )
      goto LABEL_13;
    if ( !v10->max_length )
      sub_1C1AE38(v10, v11);
    v11 = (EventCraftListViewManager_ResData_o *)v10->m_Items[0];
    if ( !v11 || (resultTradeRewardInfos = v11->fields.resultTradeRewardInfos) == 0LL )
LABEL_13:
      sub_1C1AE30(v10, v11);
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
    sub_1C1AE30(0LL, method);
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
    sub_1C1AE30(this, x);
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
    sub_1C1AE30(this, method);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_TSource__o *v23; // x0
  EventCraftListViewManager___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_object__bool__o *_9__41_0; // x21
  Il2CppObject *v27; // x22
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_T__o *v35; // x20
  System_Action_object__o *v36; // x21

  if ( (byte_4BCB94F & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_GameObject__TypeInfo, method);
    sub_1C1ABD4(&Method_BasicHelper_ForEach_GameObject___, v3);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToList_GameObject___, v4);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_GameObject___, v5);
    sub_1C1ABD4(&System_Func_GameObject__bool__TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventCraftListViewObject___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_EventCraftListViewObject__TypeInfo, v8);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__get_ObjectList_b__41_0__, v9);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__DisplayClass41_0__get_ObjectList_b__1__, v10);
    sub_1C1ABD4(&EventCraftListViewManager___c__DisplayClass41_0_TypeInfo, v11);
    sub_1C1ABD4(&EventCraftListViewManager___c_TypeInfo, v12);
    byte_4BCB94F = 1;
  }
  v13 = sub_1C1AE20(EventCraftListViewManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventCraftListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventCraftListViewObject___ctor__);
  if ( !v13 )
    sub_1C1AE30(v15, v16);
  *(_QWORD *)(v13 + 16) = v14;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)v14, v17, v18, v19, v20, v21, v22);
  v23 = System_Linq_Enumerable__ToList_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.objectList,
          (const MethodInfo_2FDCC54 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v24 = EventCraftListViewManager___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)v23;
  if ( !EventCraftListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo);
    v24 = EventCraftListViewManager___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v24->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = EventCraftListViewManager___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_0, v27, Method_EventCraftListViewManager___c__get_ObjectList_b__41_0__, 0LL);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_GameObject__bool__o *)_9__41_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
      (int64_t)_9__41_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v25,
                                                         (System_Func_TSource__bool__o *)_9__41_0,
                                                         (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v36 = (System_Action_object__o *)sub_1C1AE20(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)v13,
    Method_EventCraftListViewManager___c__DisplayClass41_0__get_ObjectList_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v35,
    (System_Action_T__o *)v36,
    (const MethodInfo_2F8C3EC *)Method_BasicHelper_ForEach_GameObject___);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_WaitWhile_o *v17; // x21
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  bool result; // w0
  struct EventCraftListViewManager_o *_4__this; // x20

  v2 = this;
  if ( (byte_4BCB97F & 1) == 0 )
  {
    sub_1C1ABD4(&System_Func_bool__TypeInfo, method);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__CoFirstTimeDialogOpenAfterLoginBonus_b__45_0__, v3);
    sub_1C1ABD4(&EventCraftListViewManager___c_TypeInfo, v4);
    this = (EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_o *)sub_1C1ABD4(
                                                                                        &UnityEngine_WaitWhile_TypeInfo,
                                                                                        v5);
    byte_4BCB97F = 1;
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
      sub_1C1AE30(this, method);
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
    _9__45_0 = (System_Func_bool__o *)sub_1C1AE20(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__45_0,
      v9,
      Method_EventCraftListViewManager___c__CoFirstTimeDialogOpenAfterLoginBonus_b__45_0__,
      0LL);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = _9__45_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
      (int64_t)_9__45_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (UnityEngine_WaitWhile_o *)sub_1C1AE20(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v17, _9__45_0, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v17;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C1AB78(p__2__current, (int64_t)v17, v19, v20, v21, v22, v23, v24);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCB977 & 1) == 0 )
  {
    sub_1C1ABD4(&EventCraftListViewManager___c_TypeInfo, v1);
    byte_4BCB977 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(EventCraftListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCraftListViewManager___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewManager___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)EventCraftListViewManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BCB979 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&ScrTerminalMap_TypeInfo, v2);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v3);
    byte_4BCB979 = 1;
  }
  if ( !ScrTerminalMap_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScrTerminalMap_TypeInfo);
  if ( ScrTerminalMap__IsDialogOnActive(0LL) )
    return 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v4);
    byte_4BC2713 = 1;
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
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v8);
    byte_4BC2713 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  v10 = v9->static_fields->mInstance;
  if ( !v10 )
    sub_1C1AE30(v9, v8);
  return v10->fields._IsPlayingCampaignDirectBonus_k__BackingField;
}


bool __fastcall EventCraftListViewManager___c___UpdateReceiveAllButtonState_b__49_0(
        EventCraftListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventCraftListViewItem_o *v3; // x19
  __int64 methodPtr_low; // x10
  const MethodInfo *v5; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8

  v3 = (EventCraftListViewItem_o *)item;
  if ( (byte_4BCB97A & 1) == 0 )
  {
    sub_1C1ABD4(&EventCraftListViewItem_TypeInfo, item);
    byte_4BCB97A = 1;
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
  EventCraftListViewItem__UpdateCraftUserInfo(v3, (const MethodInfo *)item);
  TradeInfo_k__BackingField = v3->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  if ( TradeInfo_k__BackingField->fields.getNum <= 0 )
    return EventCraftListViewItem__get_NowCompleteNum(v3, v5) > 0;
  return 1;
}


bool __fastcall EventCraftListViewManager___c___get_ObjectList_b__41_0(
        EventCraftListViewManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4BCB978 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, go);
    byte_4BCB978 = 1;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  EventCraftListViewManager___c__DisplayClass41_0_o *v16; // x1
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_4BCB97B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___, go);
    this = (EventCraftListViewManager___c__DisplayClass41_0_o *)sub_1C1ABD4(
                                                                  &Method_System_Collections_Generic_List_EventCraftListViewObject__Add__,
                                                                  v5);
    byte_4BCB97B = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventCraftListViewManager___c__DisplayClass41_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      go,
                                                                      (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___),
        !list)
    || (items = list->fields._items,
        v14 = Method_System_Collections_Generic_List_EventCraftListViewObject__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_1C1AE30(this, go);
  }
  size = list->fields._size;
  v16 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    list->fields._size = size + 1;
    v17 = &items->obj.klass + size;
    v17[4] = (Il2CppClass *)v16;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)v16, v7, v8, v9, v10, v11, v12);
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
    sub_1C1AE30(this, 0LL);
  return ItemEntity__GetEventId(x, 0LL) == this->fields.eventId;
}


void __fastcall EventCraftListViewManager___c__DisplayClass44_0___Init_b__1(
        EventCraftListViewManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *_4__this; // x0
  EventCraftListViewManager_o *v4; // x19
  System_Collections_IEnumerator_o *TimeDialogOpenAfterLoginBonus; // x1

  if ( (byte_4BCB97C & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_4960/*"CraftFirstTimeSupportToolDisplay"*/, method);
    byte_4BCB97C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  EventCraftListViewManager__SetCraftObject(_4__this, method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  EventCraftListViewManager__SetReceiveAllButton(_4__this, method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  EventCraftListViewManager__CreateList(_4__this, method);
  if ( UnityEngine_PlayerPrefs__GetInt_70752120((System_String_o *)StringLiteral_4960/*"CraftFirstTimeSupportToolDisplay"*/, 0LL) == 0
    && this->fields.isGetEntity )
  {
    _4__this = (EventCraftListViewManager_o *)this->fields.eventEntity;
    if ( !_4__this )
      goto LABEL_12;
    if ( EventEntity__IsEventPeriod((EventEntity_o *)_4__this, 0LL, 0LL) )
    {
      UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4960/*"CraftFirstTimeSupportToolDisplay"*/, 1, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      v4 = this->fields.__4__this;
      if ( v4 )
      {
        TimeDialogOpenAfterLoginBonus = EventCraftListViewManager__CoFirstTimeDialogOpenAfterLoginBonus(v4, method);
        UnityEngine_MonoBehaviour__StartCoroutine_70779684(
          (UnityEngine_MonoBehaviour_o *)v4,
          TimeDialogOpenAfterLoginBonus,
          0LL);
        return;
      }
LABEL_12:
      sub_1C1AE30(_4__this, method);
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
    sub_1C1AE30(this, idx);
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
  const MethodInfo *v4; // x2

  _4__this = this->fields.__4__this;
  if ( value )
  {
    this = (EventCraftListViewManager___c__DisplayClass70_0_o *)this->fields.obj;
    if ( this )
    {
      this = (EventCraftListViewManager___c__DisplayClass70_0_o *)EventCraftListViewObject__GetItem(
                                                                    (EventCraftListViewObject_o *)this,
                                                                    0LL);
      if ( _4__this )
      {
        EventCraftListViewManager__OpenReconfirmDialog(_4__this, (EventCraftListViewItem_o *)this, v4);
        return;
      }
    }
LABEL_8:
    sub_1C1AE30(this, value);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x19
  System_Action_o *v18; // x20

  if ( (byte_4BCB97D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, decide);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__DisplayClass71_1__OpenReconfirmDialog_b__1__, v6);
    sub_1C1ABD4(&EventCraftListViewManager___c__DisplayClass71_1_TypeInfo, v7);
    byte_4BCB97D = 1;
  }
  v8 = sub_1C1AE20(EventCraftListViewManager___c__DisplayClass71_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1C1AB78((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v8 + 16) = decide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v8,
          Method_EventCraftListViewManager___c__DisplayClass71_1__OpenReconfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1C1AE30(v9, v10);
  }
  CommonUI__CloseConfirmDialog_31099464((CommonUI_o *)Instance, v18, 0LL);
}


void __fastcall EventCraftListViewManager___c__DisplayClass71_0___OpenReconfirmDialog_b__2(
        EventCraftListViewManager___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  EventCraftListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C1AE30(0LL, method);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventCraftListViewManager___c__DisplayClass71_1_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct EventCraftListViewManager___c__DisplayClass71_0_o *CS___8__locals1; // x9
  struct EventCraftListViewManager_o *_4__this; // x8
  struct EventCraftListViewItem_o *item; // x9
  int64_t TradeGoodsEntity_k__BackingField; // x1
  struct EventCraftListViewManager___c__DisplayClass71_0_o *v18; // x8
  int32_t oldCompleteNum; // w20
  struct EventCraftListViewManager___c__DisplayClass71_0_o *v20; // x8
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  struct EventCraftListViewManager___c__DisplayClass71_0_o *v23; // x23
  System_Action_o *_9__2; // x22
  EventCraftListViewManager___c__DisplayClass71_1_o *v25; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  v8 = this;
  if ( (byte_4BCB97E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C1ABD4(&string_TypeInfo, v11);
    sub_1C1ABD4(&Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__2__, v12);
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)sub_1C1ABD4(&StringLiteral_4004/*"CRAFT_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/, v13);
    byte_4BCB97E = 1;
  }
  CS___8__locals1 = v8->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_23;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( v8->fields.decide )
  {
    item = CS___8__locals1->fields.item;
    if ( !item )
      goto LABEL_23;
    if ( !_4__this )
      goto LABEL_23;
    TradeGoodsEntity_k__BackingField = (int64_t)item->fields._TradeGoodsEntity_k__BackingField;
    _4__this->fields.selectTradeGoodsEntity = (struct EventTradeGoodsEntity_o *)TradeGoodsEntity_k__BackingField;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&_4__this->fields.selectTradeGoodsEntity,
      TradeGoodsEntity_k__BackingField,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v18 = v8->fields.CS___8__locals1;
    if ( !v18 )
      goto LABEL_23;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)v18->fields.item;
    if ( !this )
      goto LABEL_23;
    oldCompleteNum = v18->fields.oldCompleteNum;
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)EventCraftListViewItem__get_NowCompleteNum(
                                                                  (EventCraftListViewItem_o *)this,
                                                                  0LL);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v20 = v8->fields.CS___8__locals1;
      if ( v20 )
      {
        this = (EventCraftListViewManager___c__DisplayClass71_1_o *)v20->fields.__4__this;
        if ( this )
        {
          EventCraftListViewManager__OnClickWithdrawalDecide((EventCraftListViewManager_o *)this, v20->fields.item, 0LL);
          return;
        }
      }
LABEL_23:
      sub_1C1AE30(this, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventCraftListViewManager___c__DisplayClass71_1_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_4004/*"CRAFT_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
                                                                  0LL);
    v23 = v8->fields.CS___8__locals1;
    if ( !v23 )
      goto LABEL_23;
    _9__2 = v23->fields.__9__2;
    v25 = this;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v23,
        Method_EventCraftListViewManager___c__DisplayClass71_0__OpenReconfirmDialog_b__2__,
        0LL);
      v23->fields.__9__2 = _9__2;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v23->fields.__9__2, (int64_t)_9__2, v26, v27, v28, v29, v30, v31);
    }
    if ( !Instance )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      Empty,
      (System_String_o *)v25,
      _9__2,
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
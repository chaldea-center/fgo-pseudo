void __fastcall EventCraftListViewManager___ctor(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventCraftListViewManager__CheckIsSerializeFieldNotNull(
        Il2CppObject *targetObj,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int monitor; // w8
  Il2CppObject *v9; // x20
  unsigned int v10; // w24
  System_Reflection_MemberInfo_o *v11; // x21
  intptr_t v12; // w22
  System_Type_o *TypeFromHandle; // x0
  int v14; // w22
  __int64 v15; // x23
  System_RuntimeTypeHandle_o v16; // 0:w0.4
  System_RuntimeTypeHandle_o v17; // 0:w0.4

  v3 = targetObj;
  if ( (byte_4B19FC6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_var, method, v2);
    sub_1BCA7E0(&UnityEngine_SerializeField_var, v4, v5);
    targetObj = (Il2CppObject *)sub_1BCA7E0(&System_Type_TypeInfo, v6, v7);
    byte_4B19FC6 = 1;
  }
  if ( !v3 )
    goto LABEL_17;
  targetObj = (Il2CppObject *)System_Object__GetType(v3, 0LL);
  if ( !targetObj )
    goto LABEL_17;
  targetObj = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, __int64, Il2CppMethodPointer))targetObj->klass->vtable[89].method)(
                                targetObj,
                                60LL,
                                targetObj->klass->vtable[90].methodPtr);
  if ( !targetObj )
    goto LABEL_17;
  monitor = (int)targetObj[1].monitor;
  v9 = targetObj;
  if ( monitor >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= monitor )
        sub_1BCAA44(targetObj, method);
      v11 = (System_Reflection_MemberInfo_o *)*((_QWORD *)&v9[2].klass + (int)v10);
      v12 = (int)UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, method);
      v16.fields.value = v12;
      TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
      targetObj = (Il2CppObject *)System_Reflection_CustomAttributeExtensions__IsDefined(v11, TypeFromHandle, 0LL);
      if ( !v11 )
        break;
      v14 = (int)targetObj;
      v15 = ((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, void *))v11->klass[1]._1.namespaze)(
              v11,
              v11->klass[1]._1.byval_arg.data);
      v17.fields.value = (int)UnityEngine_Object_var;
      targetObj = (Il2CppObject *)System_Type__GetTypeFromHandle(v17, 0LL);
      if ( !v15 )
        break;
      targetObj = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v15 + 648LL))(
                                    v15,
                                    targetObj,
                                    *(_QWORD *)(*(_QWORD *)v15 + 656LL));
      if ( (v14 & (unsigned int)targetObj & 1) != 0 )
        targetObj = (Il2CppObject *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, Il2CppObject *, Il2CppClass **))v11->klass[1]._1.methods)(
                                      v11,
                                      v3,
                                      v11->klass[1]._1.nestedTypes);
      monitor = (int)v9[1].monitor;
      if ( (int)++v10 >= monitor )
        return;
    }
LABEL_17:
    sub_1BCAA3C(targetObj, method);
  }
}


void __fastcall EventCraftListViewManager__CheckIsSerializeFieldNotNull_46347024(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  ;
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

  if ( (byte_4B19FD3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, result, method);
    byte_4B19FD3 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
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
      sub_1BCAA3C(selectTradeGoodsEntity, v5);
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
  System_Collections_Generic_List_object__o *itemList; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x26
  int max_length; // w8
  unsigned int v20; // w27
  EventTradeGoodsEntity_o *v21; // x21
  int32_t id; // w22
  ItemEntity_o *supportTool; // x23
  int32_t currentEventId; // w24
  System_Action_o *v25; // x25
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  EventCraftListViewItem_o *v29; // x20
  const MethodInfo *v30; // x6
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8
  struct EventTradeGoodsEntity_array *v41; // x8
  UILabel_o *emptyMessageLabel; // x20

  if ( (byte_4B19FCB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&EventCraftListViewItem_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_EventCraftListViewManager_UpdateReceiveAllButtonState__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v12, v13);
    byte_4B19FCB = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_21;
  max_length = tradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1BCAA44(itemList, v15);
      v21 = tradeGoodsEntities->m_Items[v20];
      if ( !v21 )
        break;
      id = v21->fields.id;
      supportTool = this->fields.supportTool;
      currentEventId = this->fields.currentEventId;
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
      System_Action___ctor(
        v25,
        (Il2CppObject *)this,
        Method_EventCraftListViewManager_UpdateReceiveAllButtonState__,
        0LL);
      v29 = (EventCraftListViewItem_o *)sub_1BCAA2C(EventCraftListViewItem_TypeInfo, v26, v27, v28);
      EventCraftListViewItem___ctor(v29, id, v21, supportTool, currentEventId, v25, v30);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v38 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v29,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v29;
        sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v29, v31, v32, v33, v34, v35, v36);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_14;
    }
LABEL_21:
    sub_1BCAA3C(itemList, v15);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  v41 = this->fields.tradeGoodsEntities;
  if ( !v41 )
    goto LABEL_21;
  if ( !*(_QWORD *)&v41->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
                                                              0LL);
    if ( !emptyMessageLabel )
      goto LABEL_21;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0LL);
  }
  EventCraftListViewManager__RequestListObject(this, v15);
}


void __fastcall EventCraftListViewManager__DestroyList(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  EventCraftAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *craftRewardDialog; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *currencyInfoController; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o *craftNumConfirmDialog; // x20
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Object_o *craftWithdrawConfirmDialog; // x20
  __int64 v28; // x1
  UnityEngine_Object_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  UnityEngine_Object_o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B19FEA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19FEA = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventCraftAssetManager__Release(assetManager, this->fields.currentEventId, v5);
  craftRewardDialog = (UnityEngine_Object_o *)this->fields.craftRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(craftRewardDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftRewardDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    this->fields.craftRewardDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.craftRewardDialog, 0LL, v12, v13, v14, v15, v16, v17);
  }
  craftNumConfirmDialog = (UnityEngine_Object_o *)this->fields.craftNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(craftNumConfirmDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftNumConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    UnityEngine_Object__Destroy_70154244(v20, 0LL);
    this->fields.craftNumConfirmDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.craftNumConfirmDialog, 0LL, v21, v22, v23, v24, v25, v26);
  }
  craftWithdrawConfirmDialog = (UnityEngine_Object_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(craftWithdrawConfirmDialog, 0LL, 0LL) )
  {
    currencyInfoController = (UnityEngine_Component_o *)this->fields.craftWithdrawConfirmDialog;
    if ( !currencyInfoController )
      goto LABEL_34;
    v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(currencyInfoController, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    UnityEngine_Object__Destroy_70154244(v29, 0LL);
    this->fields.craftWithdrawConfirmDialog = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.craftWithdrawConfirmDialog,
      0LL,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0LL, 0LL) )
  {
    v37 = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(v37, 0LL);
    this->fields.tradeButtonBlinkEffect = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tradeButtonBlinkEffect, 0LL, v38, v39, v40, v41, v42, v43);
  }
  currencyInfoController = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_34:
    sub_1BCAA3C(currencyInfoController, v8);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)currencyInfoController, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventCraftListViewManager__GetSupportToolItemId(
        EventCraftListViewManager_o *this,
        bool isUseSupportTool,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v12; // x1
  struct ItemEntity_o *supportTool; // x8
  int32_t id; // w3
  struct ItemEntity_o *v15; // x8
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19FE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, isUseSupportTool, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B19FE6 = 1;
  }
  entity = 0LL;
  if ( !isUseSupportTool )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isUseSupportTool);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  UserId = NetworkManager__get_UserId(0LL);
  supportTool = this->fields.supportTool;
  if ( supportTool )
  {
    id = supportTool->fields.id;
    if ( !Master_object )
LABEL_18:
      sub_1BCAA3C(UserId, v12);
  }
  else
  {
    id = 0;
    if ( !Master_object )
      goto LABEL_18;
  }
  UserId = UserItemMaster__TryGetEntity((UserItemMaster_o *)Master_object, &entity, UserId, id, 0LL);
  if ( (UserId & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_18;
  if ( entity->fields.num >= 1 && (v15 = this->fields.supportTool) != 0LL )
    return v15->fields.id;
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
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
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x20
  ItemMaster_o *Master_object; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int32_t v56; // w8
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
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
  __int64 v81; // x1
  ItemEntity_array *EntityList; // x0
  __int64 v83; // x1
  int64_t v84; // x2
  __int64 v85; // x3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x22
  System_Func_object__bool__o *v91; // x23
  Il2CppObject *v92; // x1
  System_Int32_array *EventItemList; // x21
  Il2CppObject *Entity; // x0
  struct ShopCurrencyInfoController_o *currencyInfoController; // x23
  EventDetailEntity_o *v96; // x22
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  System_Collections_Generic_List_object__o *v100; // x24
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  ShopCurrencyInfoController_o *v107; // x23
  int32_t v108; // w24
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  EventCraftAssetManager_o *v126; // x22
  const MethodInfo *v127; // x1
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  const MethodInfo *v134; // x1
  __int64 v135; // x1
  UILabel_o *craftNoticeLb; // x21
  const MethodInfo *v137; // x1
  EventCraftAssetManager_o *assetManager; // x19
  int32_t v139; // w21
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  System_Action_o *v143; // x22
  const MethodInfo *v144; // x3

  if ( (byte_4B19FC7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&guidSvtId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeStoreMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_ItemEntity___, v27, v28);
    sub_1BCA7E0(&EventCraftAssetManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Func_ItemEntity__bool__TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo, v35, v36);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__0__, v39, v40);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__1__, v41, v42);
    sub_1BCA7E0(&EventCraftListViewManager___c__DisplayClass44_0_TypeInfo, v43, v44);
    sub_1BCA7E0(&StringLiteral_3982/*"CRAFT_EVENT_PUSH_BTN_LABEL"*/, v45, v46);
    byte_4B19FC7 = 1;
  }
  v47 = sub_1BCAA2C(
          EventCraftListViewManager___c__DisplayClass44_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&guidSvtId,
          callback);
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  if ( !v47 )
    goto LABEL_32;
  *(_QWORD *)(v47 + 24) = this;
  *(_DWORD *)(v47 + 16) = eventId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 24), (int64_t)this, v50, v51, v52, v53, v54, v55);
  v56 = *(_DWORD *)(v47 + 16);
  this->fields.svtId = guidSvtId;
  this->fields.currentEventId = v56;
  this->fields.craftCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.craftCallback,
    (int64_t)callback,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields.playVoiceAction = playVoice;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playVoiceAction,
    (int64_t)playVoice,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.maskPanel = mask;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.maskPanel, (int64_t)mask, v69, v70, v71, v72, v73, v74);
  this->fields.selectTradeGoodsEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity, 0LL, v75, v76, v77, v78, v79, v80);
  if ( this->fields.supportTool )
    goto LABEL_12;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v81);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
LABEL_32:
    sub_1BCAA3C(Master_object, v49);
  EntityList = ItemMaster__GetEntityList(Master_object, 39, 0LL);
  if ( EntityList )
  {
    v90 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityList;
    v91 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ItemEntity__bool__TypeInfo, v83, v84, v85);
    System_Func_object__bool____ctor(
      v91,
      (Il2CppObject *)v47,
      Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__0__,
      0LL);
    v92 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            v90,
            (System_Func_TSource__bool__o *)v91,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_ItemEntity___);
  }
  else
  {
    v92 = 0LL;
  }
  this->fields.supportTool = (struct ItemEntity_o *)v92;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.supportTool, (int64_t)v92, v84, v85, v86, v87, v88, v89);
LABEL_12:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v81);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !Master_object )
    goto LABEL_32;
  EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Master_object, *(_DWORD *)(v47 + 16), 0LL);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !Master_object )
    goto LABEL_32;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             *(_DWORD *)(v47 + 16),
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  currencyInfoController = this->fields.currencyInfoController;
  v96 = (EventDetailEntity_o *)Entity;
  v100 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_ShopBuyItemListViewObject__TypeInfo,
                                                        v97,
                                                        v98,
                                                        v99);
  System_Collections_Generic_List_object____ctor(
    v100,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject___ctor__);
  if ( !currencyInfoController )
    goto LABEL_32;
  currencyInfoController->fields.objectList = (struct System_Collections_Generic_List_ShopBuyItemListViewObject__o *)v100;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&currencyInfoController->fields.objectList,
    (int64_t)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  if ( !v96 )
    goto LABEL_32;
  v107 = this->fields.currencyInfoController;
  v108 = *(_DWORD *)(v47 + 16);
  Master_object = (ItemMaster_o *)EventDetailEntity__IsForcedAdjustmentDialog(v96, 0LL);
  if ( !v107 )
    goto LABEL_32;
  ShopCurrencyInfoController__RefreshEventItemInfo(
    v107,
    6,
    v108,
    1,
    EventItemList,
    (unsigned __int8)Master_object & 1,
    0LL);
  Master_object = (ItemMaster_o *)this->fields.currencyInfoController;
  if ( !Master_object )
    goto LABEL_32;
  Master_object = (ItemMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_32;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            (EventTradeGoodsMaster_o *)Master_object,
                            this->fields.currentEventId,
                            0LL);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tradeGoodsEntities,
    (int64_t)TradeGoodsEntityArray,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  Master_object = (ItemMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_32;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0LL);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tradeStoreEntities,
    (int64_t)OpenTradeStoreEntityArray,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  Master_object = (ItemMaster_o *)this->fields.touchPanel;
  if ( !Master_object )
    goto LABEL_32;
  Master_object = (ItemMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( !this->fields.assetManager )
  {
    v126 = (EventCraftAssetManager_o *)sub_1BCAA2C(EventCraftAssetManager_TypeInfo, v123, v124, v125);
    EventCraftAssetManager___ctor(v126, v127);
    this->fields.assetManager = v126;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.assetManager,
      (int64_t)v126,
      v128,
      v129,
      v130,
      v131,
      v132,
      v133);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetCraftNotification(0LL);
  EventCraftListViewManager__UpdateNoticeButtonDisplay(this, v134);
  craftNoticeLb = this->fields.craftNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v135);
  Master_object = (ItemMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3982/*"CRAFT_EVENT_PUSH_BTN_LABEL"*/, 0LL);
  if ( !craftNoticeLb )
    goto LABEL_32;
  UILabel__set_text(craftNoticeLb, (System_String_o *)Master_object, 0LL);
  EventCraftListViewManager__UpdateCraftAbleCountLb(this, v137);
  assetManager = this->fields.assetManager;
  v139 = *(_DWORD *)(v47 + 16);
  v143 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v140, v141, v142);
  System_Action___ctor(
    v143,
    (Il2CppObject *)v47,
    Method_EventCraftListViewManager___c__DisplayClass44_0__Init_b__1__,
    0LL);
  if ( !assetManager )
    goto LABEL_32;
  EventCraftAssetManager__LoadAssets(assetManager, v139, v143, v144);
}


void __fastcall EventCraftListViewManager__LocateDialogToCraftPanel(
        EventCraftListViewManager_o *this,
        UnityEngine_Component_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  __int64 v6; // x2
  EventCraftListViewManager_o *v7; // x20

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
  v7 = this;
  if ( !byte_4B109C6 )
  {
    this = (EventCraftListViewManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, dialog, v6);
    byte_4B109C6 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventCraftListViewManager_o *)UnityEngine_Component__get_gameObject(dialog, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickCraftStartButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_GameObject_o *maskPanel; // x0
  unsigned int displayMode; // w8
  bool IsBuyAble; // w21
  _QWORD *v24; // x8
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x2
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x0
  int32_t v29; // w22
  ItemEntity_o *supportTool; // x23
  EventCraftListViewItem_o *v31; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_T1__T2__T3__o *v35; // x25
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct EventTradeGoodsEntity_o *klass; // x1
  __int64 v43; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v45; // x21
  System_String_o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x23
  int32_t storeIdx; // [xsp+3Ch] [xbp-44h] BYREF

  if ( (byte_4B19FD1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int____int__bool__TypeInfo, obj, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickCraftStartButton__, v7, v8);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickCraftStartDecide__, v9, v10);
    sub_1BCA7E0(&Method_EventCraftListViewManager__OnClickCraftStartButton_b__55_0__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_3980/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3979/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/, v19, v20);
    byte_4B19FD1 = 1;
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
      v24 = Method_EventCraftListViewManager_OnClickCraftStartButton__;
      if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickCraftStartButton__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_1BCA7F8(Method_EventCraftListViewManager_OnClickCraftStartButton__);
      v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v24, v24[4]);
      if ( !IsBuyAble )
      {
        OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
        goto LABEL_7;
      }
      OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
      if ( EventCraftListViewManager__TryGetAvailableStoreIdx(this, &storeIdx, v26) )
      {
        maskPanel = (UnityEngine_GameObject_o *)this->fields.craftNumConfirmDialog;
        if ( maskPanel )
        {
          EventCraftNumConfirmDialogComponent__Init((EventCraftNumConfirmDialogComponent_o *)maskPanel, 0LL);
          craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
          Item = EventCraftListViewObject__GetItem(obj, 0LL);
          v29 = storeIdx;
          supportTool = this->fields.supportTool;
          v31 = Item;
          v35 = (System_Action_T1__T2__T3__o *)sub_1BCAA2C(System_Action_int____int__bool__TypeInfo, v32, v33, v34);
          System_Action_object__int__bool____ctor(
            v35,
            (Il2CppObject *)this,
            Method_EventCraftListViewManager_OnClickCraftStartDecide__,
            0LL);
          if ( craftNumConfirmDialog )
          {
            EventCraftNumConfirmDialogComponent__Open(
              craftNumConfirmDialog,
              v31,
              v29,
              supportTool,
              (System_Action_int____int__bool__o *)v35,
              0,
              0LL);
            maskPanel = (UnityEngine_GameObject_o *)EventCraftListViewObject__GetItem(obj, 0LL);
            if ( maskPanel )
            {
              klass = (struct EventTradeGoodsEntity_o *)maskPanel[5].klass;
              this->fields.selectTradeGoodsEntity = klass;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity,
                (int64_t)klass,
                v36,
                v37,
                v38,
                v39,
                v40,
                v41);
              goto LABEL_7;
            }
          }
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3980/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3979/*"CRAFT_EVENT_IMPOSSIBLE_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
        v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
        System_Action___ctor(
          v50,
          (Il2CppObject *)this,
          Method_EventCraftListViewManager__OnClickCraftStartButton_b__55_0__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog_30767520(
            (CommonUI_o *)Instance,
            v45,
            v46,
            v50,
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
    sub_1BCAA3C(maskPanel, obj);
  }
LABEL_7:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager__OnClickCraftStartDecide(
        EventCraftListViewManager_o *this,
        System_Int32_array *tradeInfo,
        int32_t createNum,
        bool isUseSupportTool,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  NetworkManager_ResultCallbackFunc_o *v19; // x23
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  int32_t currentEventId; // w24
  int32_t v23; // w21
  int32_t v24; // w25
  TradeStartRequest_o *v25; // x23

  if ( (byte_4B19FD2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftListViewManager_CraftStartResponse__, tradeInfo, *(_QWORD *)&createNum);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeStartRequest___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    byte_4B19FD2 = 1;
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
    v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17, v18);
    NetworkManager_ResultCallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_CraftStartResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
    craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                       v19,
                                                                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeInfo )
    {
      if ( tradeInfo->max_length < 2 )
        sub_1BCAA44(craftNumConfirmDialog, tradeInfo);
      currentEventId = this->fields.currentEventId;
      v24 = tradeInfo->m_Items[1];
      v23 = tradeInfo->m_Items[2];
      v25 = (TradeStartRequest_o *)craftNumConfirmDialog;
      craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)EventCraftListViewManager__GetSupportToolItemId(
                                                                         this,
                                                                         isUseSupportTool,
                                                                         v21);
      if ( v25 )
      {
        TradeStartRequest__beginRequest(v25, currentEventId, v24, v23, createNum, (int32_t)craftNumConfirmDialog, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCAA3C(craftNumConfirmDialog, tradeInfo);
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

  if ( (byte_4B19FCF & 1) == 0 )
  {
    this = (EventCraftListViewManager_o *)sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickListView__, obj, method);
    byte_4B19FCF = 1;
  }
  if ( !obj || (this = (EventCraftListViewManager_o *)EventCraftListViewObject__GetItem(obj, 0LL)) == 0LL )
    sub_1BCAA3C(this, obj);
  v4 = this;
  if ( !this->fields.sortKindButton
    && EventCraftListViewItem__get_IsEventEnd((EventCraftListViewItem_o *)this, (const MethodInfo *)obj)
    || !LOBYTE(v4->fields.topFocusOffset) )
  {
    v5 = Method_EventCraftListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_EventCraftListViewManager_OnClickListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
}


void __fastcall EventCraftListViewManager__OnClickNoticeButton(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isButtonOn; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B19FE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickNoticeButton__, method, v2);
    byte_4B19FE7 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v5 = Method_EventCraftListViewManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_EventCraftListViewManager_OnClickNoticeButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, isButtonOn, 0LL);
  EventRewardSaveData__SetCraftNotification(this->fields.isButtonOn, 0LL);
  EventCraftListViewManager__UpdateNoticeButtonDisplay(this, v7);
}


void __fastcall EventCraftListViewManager__OnClickReceiveAll(
        EventCraftListViewManager_o *this,
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
  struct UnityEngine_GameObject_o *maskPanel; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  __int64 v23; // x1
  Il2CppObject *Request_object; // x0
  long double inited; // q0
  _QWORD *v26; // x21
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x0

  if ( (byte_4B19FD7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    sub_1BCA7E0(&Method_EventCraftListViewManager_TradeReceiveResponse__, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B19FD7 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  this->fields.selectTradeGoodsEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity, 0LL, v13, v14, v15, v16, v17, v18);
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v19, v20, v21);
  NetworkManager_ResultCallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_TradeReceiveResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
  Request_object = NetworkManager__getRequest_object_(
                     v22,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  v26 = Method_System_Array_Empty_int___;
  currentEventId = this->fields.currentEventId;
  v28 = (TradeReceiveRequest_o *)Request_object;
  v29 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v29 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, method);
    v29 = v26[7];
  }
  v30 = *(_QWORD *)(v29 + 16);
  if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
    v30 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v30 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v30, method);
  maskPanel = *(struct UnityEngine_GameObject_o **)(v26[7] + 16LL);
  if ( (*((_BYTE *)&maskPanel[12].fields + 5) & 1) == 0 )
    maskPanel = (struct UnityEngine_GameObject_o *)sub_1C1C6BC(inited);
  if ( !v28 )
LABEL_16:
    sub_1BCAA3C(maskPanel, method);
  TradeReceiveRequest__beginRequest(
    v28,
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
  __int64 v2; // x2
  EventCraftListViewManager_o *v3; // x19
  struct UICommonButton_o *receiveAllButton; // x8
  int32_t mState; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  v3 = this;
  if ( (byte_4B19FD6 & 1) == 0 )
  {
    this = (EventCraftListViewManager_o *)sub_1BCA7E0(
                                            &Method_EventCraftListViewManager_OnClickReceiveAllButton__,
                                            method,
                                            v2);
    byte_4B19FD6 = 1;
  }
  receiveAllButton = v3->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_1BCAA3C(this, method);
  mState = receiveAllButton->fields.mState;
  v6 = Method_EventCraftListViewManager_OnClickReceiveAllButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_EventCraftListViewManager_OnClickReceiveAllButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  if ( mState == 3 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    EventCraftListViewManager__OnClickReceiveAll(v3, v8);
  }
}


void __fastcall EventCraftListViewManager__OnClickReceiveButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *maskPanel; // x0
  unsigned int displayMode; // w8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  EventCraftListViewItem_o *Item; // x21
  __int64 v15; // x1
  int64_t Time; // x22
  int32_t CompleteNum; // w21
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct EventTradeGoodsEntity_o *v26; // x1

  if ( (byte_4B19FD4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickReceiveButton__, obj, method);
    sub_1BCA7E0(&EventCraftTimeCalculation_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B19FD4 = 1;
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
    v11 = Method_EventCraftListViewManager_OnClickReceiveButton__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReceiveButton__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_EventCraftListViewManager_OnClickReceiveButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0LL);
    Item = EventCraftListViewObject__GetItem(obj, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    Time = NetworkManager__getTime(0LL);
    if ( !EventCraftTimeCalculation_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventCraftTimeCalculation_TypeInfo, v15);
    CompleteNum = EventCraftTimeCalculation__GetCompleteNum(Item, 0LL, Time, 0LL);
    maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
    if ( maskPanel )
    {
      v19 = *((_QWORD *)maskPanel + 17);
      if ( v19 )
      {
        EventCraftListViewManager__OnClickReceiveDecide(this, *(_DWORD *)(v19 + 16), CompleteNum, v18);
        maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
        if ( maskPanel )
        {
          v26 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
          this->fields.selectTradeGoodsEntity = v26;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity,
            (int64_t)v26,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          goto LABEL_17;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(maskPanel, obj);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  NetworkManager_ResultCallbackFunc_o *v19; // x22
  __int64 v20; // x1
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w21
  TradeReceiveRequest_o *v23; // x22

  if ( (byte_4B19FD5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftListViewManager_TradeReceiveResponse__, *(_QWORD *)&storeIdx, *(_QWORD *)&receiveNum);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    byte_4B19FD5 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_12;
  if ( receiveNum > 0 )
  {
    UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
    v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17, v18);
    NetworkManager_ResultCallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_TradeReceiveResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
    Request_object = NetworkManager__getRequest_object_(
                       v19,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
    currentEventId = this->fields.currentEventId;
    v23 = (TradeReceiveRequest_o *)Request_object;
    maskPanel = (struct UnityEngine_GameObject_o *)sub_1BCA888(int___TypeInfo, 1LL);
    if ( maskPanel )
    {
      if ( !LODWORD(maskPanel[1].klass) )
        sub_1BCAA44(maskPanel, *(_QWORD *)&storeIdx);
      LODWORD(maskPanel[1].monitor) = storeIdx;
      if ( v23 )
      {
        TradeReceiveRequest__beginRequest(v23, currentEventId, (System_Int32_array *)maskPanel, receiveNum, 0, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(maskPanel, *(_QWORD *)&storeIdx);
  }
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickReplenishmentButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *maskPanel; // x0
  unsigned int displayMode; // w8
  bool IsRefillable; // w21
  _QWORD *v12; // x8
  System_Reflection_MethodBase_o *v13; // x0
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x8
  int32_t v19; // w23
  ItemEntity_o *supportTool; // x24
  System_Action_T1__T2__T3__o *v21; // x25
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct EventTradeGoodsEntity_o *v28; // x1

  if ( (byte_4B19FDB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int____int__bool__TypeInfo, obj, method);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickReplenishmentButton__, v5, v6);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__, v7, v8);
    byte_4B19FDB = 1;
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
    sub_1BCAA3C(maskPanel, obj);
  }
  maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
  if ( !maskPanel )
    goto LABEL_20;
  IsRefillable = EventCraftListViewItem__get_IsRefillable(
                   (EventCraftListViewItem_o *)maskPanel,
                   (const MethodInfo *)obj);
  v12 = Method_EventCraftListViewManager_OnClickReplenishmentButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_EventCraftListViewManager_OnClickReplenishmentButton__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  if ( IsRefillable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    maskPanel = this->fields.craftNumConfirmDialog;
    if ( !maskPanel )
      goto LABEL_20;
    EventCraftNumConfirmDialogComponent__Init((EventCraftNumConfirmDialogComponent_o *)maskPanel, 0LL);
    craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
    Item = EventCraftListViewObject__GetItem(obj, 0LL);
    maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
    if ( !maskPanel )
      goto LABEL_20;
    v18 = *((_QWORD *)maskPanel + 17);
    if ( !v18 )
      goto LABEL_20;
    v19 = *(_DWORD *)(v18 + 16);
    supportTool = this->fields.supportTool;
    v21 = (System_Action_T1__T2__T3__o *)sub_1BCAA2C(System_Action_int____int__bool__TypeInfo, obj, v16, v17);
    System_Action_object__int__bool____ctor(
      v21,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__,
      0LL);
    if ( !craftNumConfirmDialog )
      goto LABEL_20;
    EventCraftNumConfirmDialogComponent__Open(
      craftNumConfirmDialog,
      Item,
      v19,
      supportTool,
      (System_Action_int____int__bool__o *)v21,
      1,
      0LL);
    maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
    if ( !maskPanel )
      goto LABEL_20;
    v28 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
    this->fields.selectTradeGoodsEntity = v28;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity,
      (int64_t)v28,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    goto LABEL_17;
  }
  OverwriteAssetSoundName__PlaySystemSe(v13, 2, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickSupportToolButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *maskPanel; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  EventCraftUseSupportToolDialogComponent_o *craftUseSupportToolDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x8
  int32_t v17; // w23
  ItemEntity_o *supportTool; // x24
  System_Action_int__int__o *v19; // x25
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct EventTradeGoodsEntity_o *v26; // x1

  if ( (byte_4B19FE2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__int__TypeInfo, obj, method);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickSupportToolButton__, v5, v6);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickSupportToolDecide__, v7, v8);
    byte_4B19FE2 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_16;
  if ( obj->fields.displayMode != 4 )
    goto LABEL_6;
  v10 = Method_EventCraftListViewManager_OnClickSupportToolButton__;
  if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickSupportToolButton__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_EventCraftListViewManager_OnClickSupportToolButton__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  maskPanel = this->fields.craftUseSupportToolDialog;
  if ( !maskPanel )
    goto LABEL_16;
  EventCraftUseSupportToolDialogComponent__Init((EventCraftUseSupportToolDialogComponent_o *)maskPanel, 0LL);
  craftUseSupportToolDialog = this->fields.craftUseSupportToolDialog;
  Item = EventCraftListViewObject__GetItem(obj, 0LL);
  maskPanel = EventCraftListViewObject__GetItem(obj, 0LL);
  if ( !maskPanel
    || (v16 = *((_QWORD *)maskPanel + 17)) == 0
    || (v17 = *(_DWORD *)(v16 + 16),
        supportTool = this->fields.supportTool,
        v19 = (System_Action_int__int__o *)sub_1BCAA2C(System_Action_int__int__TypeInfo, obj, v14, v15),
        System_Action_int__int____ctor(
          v19,
          (Il2CppObject *)this,
          Method_EventCraftListViewManager_OnClickSupportToolDecide__,
          0LL),
        !craftUseSupportToolDialog)
    || (EventCraftUseSupportToolDialogComponent__Open(craftUseSupportToolDialog, Item, v17, supportTool, v19, 0LL),
        (maskPanel = EventCraftListViewObject__GetItem(obj, 0LL)) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(maskPanel, obj);
  }
  v26 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
  this->fields.selectTradeGoodsEntity = v26;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectTradeGoodsEntity,
    (int64_t)v26,
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EventCraftUseSupportToolDialogComponent_o *craftUseSupportToolDialog; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x22
  __int64 v18; // x1
  struct ItemEntity_o *supportTool; // x8
  int32_t id; // w5

  if ( (byte_4B19FE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftListViewManager_TradeSupportToolResponse__, *(_QWORD *)&storeIdx, *(_QWORD *)&goodsId);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeStartRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B19FE3 = 1;
  }
  craftUseSupportToolDialog = this->fields.craftUseSupportToolDialog;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
  EventCraftUseSupportToolDialogComponent__Close(craftUseSupportToolDialog, 0LL);
  craftUseSupportToolDialog = (EventCraftUseSupportToolDialogComponent_o *)this->fields.maskPanel;
  if ( !craftUseSupportToolDialog )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftUseSupportToolDialog, 1, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_TradeSupportToolResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  craftUseSupportToolDialog = (EventCraftUseSupportToolDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                             v17,
                                                                             (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeStartRequest___);
  supportTool = this->fields.supportTool;
  if ( !supportTool )
  {
    id = 0;
    if ( craftUseSupportToolDialog )
      goto LABEL_9;
LABEL_11:
    sub_1BCAA3C(craftUseSupportToolDialog, *(_QWORD *)&storeIdx);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager__OnClickTradeReplenishmentDecide(
        EventCraftListViewManager_o *this,
        System_Int32_array *tradeInfo,
        int32_t createNum,
        bool isUseSupportTool,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  NetworkManager_ResultCallbackFunc_o *v19; // x23
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  int32_t currentEventId; // w24
  int32_t v23; // w21
  int32_t v24; // w25
  TradeStartRequest_o *v25; // x23

  if ( (byte_4B19FDC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftListViewManager_TradeReplenishmentResponse__, tradeInfo, *(_QWORD *)&createNum);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeStartRequest___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    byte_4B19FDC = 1;
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
    v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17, v18);
    NetworkManager_ResultCallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager_TradeReplenishmentResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
    craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                       v19,
                                                                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeInfo )
    {
      if ( tradeInfo->max_length < 2 )
        sub_1BCAA44(craftNumConfirmDialog, tradeInfo);
      currentEventId = this->fields.currentEventId;
      v24 = tradeInfo->m_Items[1];
      v23 = tradeInfo->m_Items[2];
      v25 = (TradeStartRequest_o *)craftNumConfirmDialog;
      craftNumConfirmDialog = (EventCraftNumConfirmDialogComponent_o *)EventCraftListViewManager__GetSupportToolItemId(
                                                                         this,
                                                                         isUseSupportTool,
                                                                         v21);
      if ( v25 )
      {
        TradeStartRequest__beginRequest(v25, currentEventId, v24, v23, createNum, (int32_t)craftNumConfirmDialog, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCAA3C(craftNumConfirmDialog, tradeInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)craftNumConfirmDialog, 0, 0LL);
}


void __fastcall EventCraftListViewManager__OnClickWithdrawalButton(
        EventCraftListViewManager_o *this,
        EventCraftListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_GameObject_o **v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  unsigned int klass; // w8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  EventCraftWithdrawConfirmDialogComponent_o *craftWithdrawConfirmDialog; // x21
  EventCraftListViewItem_o *Item; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_bool__o *v36; // x23

  if ( (byte_4B19FDE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, obj, method);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickWithdrawalButton__, v6, v7);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__DisplayClass68_0__OnClickWithdrawalButton_b__0__, v8, v9);
    sub_1BCA7E0(&EventCraftListViewManager___c__DisplayClass68_0_TypeInfo, v10, v11);
    byte_4B19FDE = 1;
  }
  v12 = sub_1BCAA2C(EventCraftListViewManager___c__DisplayClass68_0_TypeInfo, obj, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_16;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = obj;
  v21 = (UnityEngine_GameObject_o **)(v12 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)obj, v22, v23, v24, v25, v26, v27);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( !*v21 )
    goto LABEL_16;
  klass = (unsigned int)(*v21)[5].klass;
  if ( klass >= 4 && (klass & 0xFFFFFFFE) == 4 )
  {
    v29 = Method_EventCraftListViewManager_OnClickWithdrawalButton__;
    if ( (*((_BYTE *)Method_EventCraftListViewManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1BCA7F8(Method_EventCraftListViewManager_OnClickWithdrawalButton__);
    v30 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v29, v29[4]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
    maskPanel = (UnityEngine_GameObject_o *)this->fields.craftWithdrawConfirmDialog;
    if ( maskPanel )
    {
      EventCraftWithdrawConfirmDialogComponent__Init((EventCraftWithdrawConfirmDialogComponent_o *)maskPanel, 0LL);
      maskPanel = *v21;
      if ( *v21 )
      {
        craftWithdrawConfirmDialog = this->fields.craftWithdrawConfirmDialog;
        Item = EventCraftListViewObject__GetItem((EventCraftListViewObject_o *)maskPanel, 0LL);
        v36 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v33, v34, v35);
        System_Action_bool____ctor(
          v36,
          (Il2CppObject *)v12,
          Method_EventCraftListViewManager___c__DisplayClass68_0__OnClickWithdrawalButton_b__0__,
          0LL);
        if ( craftWithdrawConfirmDialog )
        {
          EventCraftWithdrawConfirmDialogComponent__Open(craftWithdrawConfirmDialog, Item, v36, 0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(maskPanel, v14);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 craftWithdrawConfirmDialog; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x21
  __int64 v18; // x1
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w20
  TradeReceiveRequest_o *v21; // x21
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  System_Int32_array *v23; // x22

  if ( (byte_4B19FE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventCraftListViewManager_WithdrawalResponse__, item, method);
    sub_1BCA7E0(&int___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B19FE0 = 1;
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
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_EventCraftListViewManager_WithdrawalResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  Request_object = NetworkManager__getRequest_object_(
                     v17,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  currentEventId = this->fields.currentEventId;
  v21 = (TradeReceiveRequest_o *)Request_object;
  craftWithdrawConfirmDialog = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !item )
    goto LABEL_13;
  TradeInfo_k__BackingField = item->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_13;
  v23 = (System_Int32_array *)craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_13;
  if ( !*(_DWORD *)(craftWithdrawConfirmDialog + 24) )
    sub_1BCAA44(craftWithdrawConfirmDialog, item);
  *(_DWORD *)(craftWithdrawConfirmDialog + 32) = TradeInfo_k__BackingField->fields.storeIdx;
  craftWithdrawConfirmDialog = EventCraftListViewItem__get_NowCompleteNum(item, (const MethodInfo *)item);
  if ( !v21 )
LABEL_13:
    sub_1BCAA3C(craftWithdrawConfirmDialog, item);
  TradeReceiveRequest__beginRequest(v21, currentEventId, v23, craftWithdrawConfirmDialog, 1, 0LL);
}


void __fastcall EventCraftListViewManager__OnMoveEnd(EventCraftListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_4B19FCE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19FCE = 1;
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


void __fastcall EventCraftListViewManager__OpenReconfirmDialog(
        EventCraftListViewManager_o *this,
        EventCraftListViewItem_o *item,
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
  __int64 v22; // x19
  BaseDialog_o *craftWithdrawConfirmDialog; // x0
  const MethodInfo *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  BaseDialog_o **v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v40; // x21
  System_String_o *v41; // x22
  System_String_o *v42; // x23
  System_String_o *v43; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  CommonConfirmDialog_ClickDelegate_o *v47; // x25

  if ( (byte_4B19FDF & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, item, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__DisplayClass69_0__OpenReconfirmDialog_b__0__, v10, v11);
    sub_1BCA7E0(&EventCraftListViewManager___c__DisplayClass69_0_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_13581/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3789/*"COMMON_CONFIRM_EXECUTE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_3996/*"CRAFT_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, v20, v21);
    byte_4B19FDF = 1;
  }
  v22 = sub_1BCAA2C(EventCraftListViewManager___c__DisplayClass69_0_TypeInfo, item, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_12;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = item;
  v31 = (BaseDialog_o **)(v22 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)item, v32, v33, v34, v35, v36, v37);
  craftWithdrawConfirmDialog = (BaseDialog_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !craftWithdrawConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(craftWithdrawConfirmDialog, 0LL) )
    return;
  craftWithdrawConfirmDialog = *v31;
  if ( !*v31 )
    goto LABEL_12;
  *(_DWORD *)(v22 + 32) = EventCraftListViewItem__get_NowCompleteNum(
                            (EventCraftListViewItem_o *)craftWithdrawConfirmDialog,
                            v24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13581/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3996/*"CRAFT_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3789/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v47 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v44, v45, v46);
  CommonConfirmDialog_ClickDelegate___ctor(
    v47,
    (Il2CppObject *)v22,
    Method_EventCraftListViewManager___c__DisplayClass69_0__OpenReconfirmDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(craftWithdrawConfirmDialog, v24);
  CommonUI__OpenConfirmDialog_30766268(
    (CommonUI_o *)Instance,
    v40,
    v41,
    v42,
    v43,
    1,
    v47,
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_EventCraftListViewObject__o *ObjectList; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Func_object__bool__o *v24; // x21
  __int64 v25; // x1
  Il2CppObject *v26; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v28; // x1
  __int64 v29; // x1
  Il2CppObject *Entity; // x21
  EventCraftListViewItem_o *v31; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t storeIdx; // w22
  EventCraftNumConfirmDialogComponent_o *craftNumConfirmDialog; // x21
  ItemEntity_o *supportTool; // x23
  System_Action_T1__T2__T3__o *v38; // x24

  if ( (byte_4B19FDA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int____int__bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventCraftListViewObject___, v10, v11);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__, v12, v13);
    sub_1BCA7E0(&Method_EventCraftListViewManager__OpenReplenishmentDialog_b__64_0__, v14, v15);
    sub_1BCA7E0(&System_Func_EventCraftListViewObject__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    byte_4B19FDA = 1;
  }
  if ( this->fields.selectTradeGoodsEntity )
  {
    ObjectList = EventCraftListViewManager__get_ObjectList(this, method);
    v24 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_EventCraftListViewObject__bool__TypeInfo,
                                           v21,
                                           v22,
                                           v23);
    System_Func_object__bool____ctor(
      v24,
      (Il2CppObject *)this,
      Method_EventCraftListViewManager__OpenReplenishmentDialog_b__64_0__,
      0LL);
    v26 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
            (System_Func_TSource__bool__o *)v24,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCraftListViewObject___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_21;
    Entity = DataMasterBase_object__object__int___GetEntity(
               Master_object,
               this->fields.currentEventId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Equality(
                                                                    (UnityEngine_Object_o *)v26,
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
        if ( !v26 )
          goto LABEL_21;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventCraftListViewObject__GetItem(
                                                                        (EventCraftListViewObject_o *)v26,
                                                                        0LL);
        if ( !Master_object )
          goto LABEL_21;
        v31 = (EventCraftListViewItem_o *)Master_object;
        if ( *(_QWORD *)&Master_object[1].fields.revision )
        {
          if ( EventCraftListViewItem__get_IsRefillable((EventCraftListViewItem_o *)Master_object, v28) )
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.craftNumConfirmDialog;
            if ( Master_object )
            {
              EventCraftNumConfirmDialogComponent__Init((EventCraftNumConfirmDialogComponent_o *)Master_object, 0LL);
              TradeInfo_k__BackingField = v31->fields._TradeInfo_k__BackingField;
              if ( TradeInfo_k__BackingField )
              {
                storeIdx = TradeInfo_k__BackingField->fields.storeIdx;
                craftNumConfirmDialog = this->fields.craftNumConfirmDialog;
                supportTool = this->fields.supportTool;
                v38 = (System_Action_T1__T2__T3__o *)sub_1BCAA2C(
                                                       System_Action_int____int__bool__TypeInfo,
                                                       v28,
                                                       v32,
                                                       v33);
                System_Action_object__int__bool____ctor(
                  v38,
                  (Il2CppObject *)this,
                  Method_EventCraftListViewManager_OnClickTradeReplenishmentDecide__,
                  0LL);
                if ( craftNumConfirmDialog )
                {
                  EventCraftNumConfirmDialogComponent__Open(
                    craftNumConfirmDialog,
                    v31,
                    storeIdx,
                    supportTool,
                    (System_Action_int____int__bool__o *)v38,
                    1,
                    0LL);
                  return;
                }
              }
            }
LABEL_21:
            sub_1BCAA3C(Master_object, v28);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventCraftRewardDialogComponent_o *craftRewardDialog; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  EventCraftRewardDialogComponent_o *v14; // x21
  int32_t currentEventId; // w22
  BattleDropItem_array *resultTradeRewardInfos; // x20
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x23
  Il2CppObject *maskPanel; // x25
  System_Action_bool__o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x25

  if ( (byte_4B19FD9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, resData, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OpenReplenishmentDialog__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_SetActive__, v9, v10);
    byte_4B19FD9 = 1;
  }
  craftRewardDialog = this->fields.craftRewardDialog;
  if ( !craftRewardDialog )
    goto LABEL_7;
  EventCraftRewardDialogComponent__Init(craftRewardDialog, 0LL);
  if ( !resData )
    goto LABEL_7;
  v14 = this->fields.craftRewardDialog;
  currentEventId = this->fields.currentEventId;
  resultTradeRewardInfos = resData->fields.resultTradeRewardInfos;
  selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
  maskPanel = (Il2CppObject *)this->fields.maskPanel;
  v19 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, resData, v12, v13);
  System_Action_bool____ctor(v19, maskPanel, Method_UnityEngine_GameObject_SetActive__, 0LL);
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_EventCraftListViewManager_OpenReplenishmentDialog__, 0LL);
  if ( !v14 )
LABEL_7:
    sub_1BCAA3C(craftRewardDialog, resData);
  EventCraftRewardDialogComponent__Open(
    v14,
    currentEventId,
    resultTradeRewardInfos,
    selectTradeGoodsEntity,
    selectTradeGoodsEntity == 0LL,
    v19,
    v23,
    0LL);
}


void __fastcall EventCraftListViewManager__RequestListObject(
        EventCraftListViewManager_o *this,
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

  if ( (byte_4B19FCC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnMoveEnd__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCraftListViewObject__get_Count__, v14, v15);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v16, v17);
    byte_4B19FCC = 1;
  }
  memset(&v28, 0, sizeof(v28));
  ObjectList = (System_Collections_Generic_List_object__o *)EventCraftListViewManager__get_ObjectList(this, method);
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
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCraftListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__MoveNext__) )
    {
      current = v28.fields._current;
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_EventCraftListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v26, v27);
      EventCraftListViewObject__Init((EventCraftListViewObject_o *)current, 2, v25, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCraftListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager__ResponseCommonProcess(
        EventCraftListViewManager_o *this,
        bool isReceive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ShopCurrencyInfoController_o *currencyInfoController; // x0
  __int64 v8; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  if ( (byte_4B19FE5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeStoreMaster___, isReceive, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B19FE5 = 1;
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  currencyInfoController = (ShopCurrencyInfoController_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !currencyInfoController )
    goto LABEL_13;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)currencyInfoController,
                                this->fields.currentEventId,
                                0LL);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tradeStoreEntities,
    (int64_t)OpenTradeStoreEntityArray,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  EventCraftListViewManager__UpdateCraftAbleCountLb(this, v16);
  currencyInfoController = (ShopCurrencyInfoController_o *)this->fields.touchPanel;
  if ( !currencyInfoController
    || (currencyInfoController = (ShopCurrencyInfoController_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)currencyInfoController,
                                                                   0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyInfoController, 0, 0LL),
        (currencyInfoController = (ShopCurrencyInfoController_o *)this->fields.maskPanel) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(currencyInfoController, isReceive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currencyInfoController, 0, 0LL);
  EventCraftListViewManager__RequestListObject(this, v17);
  ActionExtensions__Call(this->fields.craftCallback, 0LL);
}


void __fastcall EventCraftListViewManager__SetCraftObject(EventCraftListViewManager_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *craftRewardDialog; // x20
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  struct EventCraftAssetManager_o *assetManager; // x8
  Il2CppObject *CraftRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *craftNumConfirmDialog; // x20
  struct EventCraftAssetManager_o *v30; // x8
  Il2CppObject *CraftItemNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x2
  UnityEngine_Object_o *craftWithdrawConfirmDialog; // x20
  struct EventCraftAssetManager_o *v41; // x8
  Il2CppObject *CraftItemWithdrawConfirmDialog_k__BackingField; // x20
  Il2CppObject *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  const MethodInfo *v50; // x2
  UnityEngine_Object_o *craftUseSupportToolDialog; // x20
  struct EventCraftAssetManager_o *v52; // x8
  Il2CppObject *CraftUseSupportToolDialog_k__BackingField; // x20
  Il2CppObject *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  const MethodInfo *v61; // x2
  UnityEngine_Object_o *craftFirstTimeSupportToolDialog; // x20
  struct EventCraftAssetManager_o *v63; // x8
  Il2CppObject *CraftFirstTimeSupportToolDialog_k__BackingField; // x20
  Il2CppObject *v65; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  const MethodInfo *v72; // x2

  if ( (byte_4B19FC8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_EventCraftFirstTimeSupportToolDialogComponent___,
      method,
      v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventCraftNumConfirmDialogComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventCraftRewardDialogComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventCraftUseSupportToolDialogComponent___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventCraftWithdrawConfirmDialogComponent___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    byte_4B19FC8 = 1;
  }
  craftRewardDialog = (UnityEngine_Object_o *)this->fields.craftRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v17 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_44;
    CraftRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._CraftRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v17 = UnityEngine_Object__Instantiate_object_(
            CraftRewardDialog_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v17 )
      goto LABEL_44;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v17,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftRewardDialogComponent___);
    this->fields.craftRewardDialog = (struct EventCraftRewardDialogComponent_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.craftRewardDialog,
      (int64_t)Component_object,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftRewardDialog,
      v28);
  }
  craftNumConfirmDialog = (UnityEngine_Object_o *)this->fields.craftNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  v17 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftNumConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    v30 = this->fields.assetManager;
    if ( !v30 )
      goto LABEL_44;
    CraftItemNumConfirmDialog_k__BackingField = (Il2CppObject *)v30->fields._CraftItemNumConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v17 = UnityEngine_Object__Instantiate_object_(
            CraftItemNumConfirmDialog_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v17 )
      goto LABEL_44;
    v32 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v17,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftNumConfirmDialogComponent___);
    this->fields.craftNumConfirmDialog = (struct EventCraftNumConfirmDialogComponent_o *)v32;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.craftNumConfirmDialog,
      (int64_t)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftNumConfirmDialog,
      v39);
  }
  craftWithdrawConfirmDialog = (UnityEngine_Object_o *)this->fields.craftWithdrawConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  v17 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftWithdrawConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    v41 = this->fields.assetManager;
    if ( !v41 )
      goto LABEL_44;
    CraftItemWithdrawConfirmDialog_k__BackingField = (Il2CppObject *)v41->fields._CraftItemWithdrawConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v17 = UnityEngine_Object__Instantiate_object_(
            CraftItemWithdrawConfirmDialog_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v17 )
      goto LABEL_44;
    v43 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v17,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftWithdrawConfirmDialogComponent___);
    this->fields.craftWithdrawConfirmDialog = (struct EventCraftWithdrawConfirmDialogComponent_o *)v43;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.craftWithdrawConfirmDialog,
      (int64_t)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftWithdrawConfirmDialog,
      v50);
  }
  craftUseSupportToolDialog = (UnityEngine_Object_o *)this->fields.craftUseSupportToolDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  v17 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftUseSupportToolDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    v52 = this->fields.assetManager;
    if ( !v52 )
      goto LABEL_44;
    CraftUseSupportToolDialog_k__BackingField = (Il2CppObject *)v52->fields._CraftUseSupportToolDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v17 = UnityEngine_Object__Instantiate_object_(
            CraftUseSupportToolDialog_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v17 )
      goto LABEL_44;
    v54 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v17,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftUseSupportToolDialogComponent___);
    this->fields.craftUseSupportToolDialog = (struct EventCraftUseSupportToolDialogComponent_o *)v54;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.craftUseSupportToolDialog,
      (int64_t)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    EventCraftListViewManager__LocateDialogToCraftPanel(
      this,
      (UnityEngine_Component_o *)this->fields.craftUseSupportToolDialog,
      v61);
  }
  craftFirstTimeSupportToolDialog = (UnityEngine_Object_o *)this->fields.craftFirstTimeSupportToolDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  v17 = (Il2CppObject *)UnityEngine_Object__op_Equality(craftFirstTimeSupportToolDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    v63 = this->fields.assetManager;
    if ( v63 )
    {
      CraftFirstTimeSupportToolDialog_k__BackingField = (Il2CppObject *)v63->fields._CraftFirstTimeSupportToolDialog_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      v17 = UnityEngine_Object__Instantiate_object_(
              CraftFirstTimeSupportToolDialog_k__BackingField,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v17 )
      {
        v65 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v17,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftFirstTimeSupportToolDialogComponent___);
        this->fields.craftFirstTimeSupportToolDialog = (struct EventCraftFirstTimeSupportToolDialogComponent_o *)v65;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.craftFirstTimeSupportToolDialog,
          (int64_t)v65,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
        EventCraftListViewManager__LocateDialogToCraftPanel(
          this,
          (UnityEngine_Component_o *)this->fields.craftFirstTimeSupportToolDialog,
          v72);
        return;
      }
    }
LABEL_44:
    sub_1BCAA3C(v17, v18);
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
  __int64 methodPtr_low; // x11
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_object__o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_object__o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Action_object__o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_object__o *v46; // x24
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_object__o *v50; // x25

  v4 = obj;
  if ( (byte_4B19FCD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventCraftListViewObject__TypeInfo, obj, item);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickCraftStartButton__, v8, v9);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickReceiveButton__, v10, v11);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickReplenishmentButton__, v12, v13);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickSupportToolButton__, v14, v15);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnClickWithdrawalButton__, v16, v17);
    sub_1BCA7E0(&Method_EventCraftListViewManager_OnMoveEnd__, v18, v19);
    sub_1BCA7E0(&EventCraftListViewObject_TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    byte_4B19FCD = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0LL, 0LL) )
  {
    v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_EventCraftListViewManager_OnMoveEnd__, 0LL);
    if ( !v4 )
      sub_1BCAA3C(v29, v30);
    EventCraftListViewObject__Init((EventCraftListViewObject_o *)v4, 2, v28, 0LL);
    v34 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventCraftListViewObject__TypeInfo, v31, v32, v33);
    System_Action_object____ctor(
      v34,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickCraftStartButton__,
      0LL);
    v38 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventCraftListViewObject__TypeInfo, v35, v36, v37);
    System_Action_object____ctor(
      v38,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickReceiveButton__,
      0LL);
    v42 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventCraftListViewObject__TypeInfo, v39, v40, v41);
    System_Action_object____ctor(
      v42,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickReplenishmentButton__,
      0LL);
    v46 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventCraftListViewObject__TypeInfo, v43, v44, v45);
    System_Action_object____ctor(
      v46,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickWithdrawalButton__,
      0LL);
    v50 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventCraftListViewObject__TypeInfo, v47, v48, v49);
    System_Action_object____ctor(
      v50,
      (Il2CppObject *)this,
      (intptr_t)Method_EventCraftListViewManager_OnClickSupportToolButton__,
      0LL);
    EventCraftListViewObject__SetOnClickAction(
      (EventCraftListViewObject_o *)v4,
      (System_Action_EventCraftListViewObject__o *)v34,
      (System_Action_EventCraftListViewObject__o *)v38,
      (System_Action_EventCraftListViewObject__o *)v42,
      (System_Action_EventCraftListViewObject__o *)v46,
      (System_Action_EventCraftListViewObject__o *)v50,
      0LL);
  }
}


void __fastcall EventCraftListViewManager__SetReceiveAllButton(
        EventCraftListViewManager_o *this,
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
  int32_t currentEventId; // w20
  UISprite_o *receiveAllButtonSprite; // x21
  __int64 v16; // x1
  UILabel_o *receiveAllButtonLabel; // x20
  __int64 receiveAllButton; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  struct EventCraftAssetManager_o *assetManager; // x8
  Il2CppObject *CraftButtonBlinkEffect_k__BackingField; // x21
  struct UnityEngine_GameObject_o **p_tradeButtonBlinkEffect; // x20
  __int64 v25; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x2
  UnityEngine_Transform_o *v35; // x21

  if ( (byte_4B19FC9 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_3490/*"CHECK_TRADE_BUTTON_LABEL"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17689/*"btn_getreward"*/, v12, v13);
    byte_4B19FC9 = 1;
  }
  currentEventId = this->fields.currentEventId;
  receiveAllButtonSprite = this->fields.receiveAllButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetEventUI_38574572(currentEventId, receiveAllButtonSprite, (System_String_o *)StringLiteral_17689/*"btn_getreward"*/, 0LL);
  receiveAllButtonLabel = this->fields.receiveAllButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  receiveAllButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3490/*"CHECK_TRADE_BUTTON_LABEL"*/, 0LL);
  if ( !receiveAllButtonLabel )
    goto LABEL_22;
  UILabel__set_text(receiveAllButtonLabel, (System_String_o *)receiveAllButton, 0LL);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
        v27 = UnityEngine_Object__Instantiate_object__49903816(
                CraftButtonBlinkEffect_k__BackingField,
                transform,
                (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        *p_tradeButtonBlinkEffect = (struct UnityEngine_GameObject_o *)v27;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.tradeButtonBlinkEffect,
          (int64_t)v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        receiveAllButton = (__int64)*p_tradeButtonBlinkEffect;
        if ( *p_tradeButtonBlinkEffect )
        {
          receiveAllButton = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)receiveAllButton,
                                        0LL);
          v35 = (UnityEngine_Transform_o *)receiveAllButton;
          if ( !byte_4B109C6 )
          {
            receiveAllButton = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v19, v34);
            byte_4B109C6 = 1;
          }
          if ( v35 )
          {
            UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
    sub_1BCAA3C(receiveAllButton, v19);
  }
LABEL_21:
  EventCraftListViewManager__UpdateReceiveAllButtonState(this, v19);
}


void __fastcall EventCraftListViewManager__TradeReceiveResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
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
  Il2CppObject *v14; // x20
  System_Object_array *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2

  if ( (byte_4B19FD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___, result, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v11, v12);
    byte_4B19FD8 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    v14 = (Il2CppObject *)System_String__Concat_62412480(
                            (System_String_o *)StringLiteral_15978/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16236/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v13);
    v15 = JsonManager__DeserializeArray_object_(
            v14,
            (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    if ( !v15 )
      sub_1BCAA3C(0LL, v16);
    if ( !v15->max_length )
      sub_1BCAA44(v15, v16);
    EventCraftListViewManager__OpenRewardDialog(this, (EventCraftListViewManager_ResData_o *)v15->m_Items[0], v17);
    EventCraftListViewManager__ResponseCommonProcess(this, 1, v18);
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

  if ( (byte_4B19FDD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, result, method);
    byte_4B19FDD = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
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
      sub_1BCAA3C(selectTradeGoodsEntity, v5);
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

  if ( (byte_4B19FE4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, result, method);
    byte_4B19FE4 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v5);
}


bool __fastcall EventCraftListViewManager__TryGetAvailableStoreIdx(
        EventCraftListViewManager_o *this,
        int32_t *storeIdx,
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
  UserEventTradeMaster_o *Master_object; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x24
  unsigned __int64 v20; // x25
  __int64 v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x1
  __int64 v29; // x21
  System_Int32_array *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Func_int__bool__o *v34; // x23
  struct EventTradeStoreEntity_array *v35; // x8
  __int64 v36; // x9
  EventTradeStoreEntity_o *v37; // x8
  int32_t *v39; // [xsp+8h] [xbp-78h]
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-70h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B19FD0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, storeIdx, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventTradeMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__DisplayClass54_0__TryGetAvailableStoreIdx_b__0__, v11, v12);
    sub_1BCA7E0(&EventCraftListViewManager___c__DisplayClass54_0_TypeInfo, v13, v14);
    byte_4B19FD0 = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  *storeIdx = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, storeIdx);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
      v39 = storeIdx;
      v20 = 0LL;
      while ( 1 )
      {
        v21 = sub_1BCAA2C(EventCraftListViewManager___c__DisplayClass54_0_TypeInfo, v16, v17, v18);
        System_Object___ctor((Il2CppObject *)v21, 0LL);
        if ( v20 >= tradeStoreEntities->max_length )
          goto LABEL_27;
        if ( !v21 )
          goto LABEL_26;
        v28 = (int64_t)tradeStoreEntities->m_Items[v20];
        *(_QWORD *)(v21 + 16) = v28;
        v29 = v21 + 16;
        sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), v28, v22, v23, v24, v25, v26, v27);
        v30 = usedStoreIdx;
        v34 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v31, v32, v33);
        System_Func_int__bool____ctor(
          v34,
          (Il2CppObject *)v21,
          Method_EventCraftListViewManager___c__DisplayClass54_0__TryGetAvailableStoreIdx_b__0__,
          0LL);
        Master_object = (UserEventTradeMaster_o *)BasicHelper__Any_int__49273364(
                                                    v30,
                                                    (System_Func_T__bool__o *)v34,
                                                    (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        if ( (__int64)++v20 >= (int)tradeStoreEntities->max_length )
          return 0;
      }
      if ( *(_QWORD *)v29 )
      {
        *v39 = *(_DWORD *)(*(_QWORD *)v29 + 20LL);
        return 1;
      }
LABEL_26:
      sub_1BCAA3C(Master_object, v16);
    }
    return 0;
  }
  v35 = this->fields.tradeStoreEntities;
  if ( !v35 )
    goto LABEL_26;
  v36 = *(_QWORD *)&v35->max_length;
  if ( !v36 )
    return 0;
  if ( !(_DWORD)v36 )
LABEL_27:
    sub_1BCAA44(Master_object, v16);
  v37 = v35->m_Items[0];
  if ( !v37 )
    goto LABEL_26;
  *storeIdx = v37->fields.idx;
  return 1;
}


void __fastcall EventCraftListViewManager__UpdateCraftAbleCountLb(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventCraftListViewManager_o *v3; // x19
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
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x8
  int max_length; // w22
  il2cpp_array_size_t v16; // w8
  int v17; // w21
  System_String_o **v18; // x8
  System_String_o *v19; // x20
  UILabel_o *craftAbleCountLb; // x19
  System_String_o *v21; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  int v24; // [xsp+8h] [xbp-48h] BYREF
  int v25; // [xsp+Ch] [xbp-44h] BYREF
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-40h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4B19FE9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventTradeMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_3993/*"CRAFT_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/, v10, v11);
    this = (EventCraftListViewManager_o *)sub_1BCA7E0(&StringLiteral_3992/*"CRAFT_EVENT_TITLE_QUOTA_LABEL"*/, v12, v13);
    byte_4B19FE9 = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  tradeStoreEntities = v3->fields.tradeStoreEntities;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (EventCraftListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !this )
    goto LABEL_20;
  if ( !UserEventTradeMaster__TryGetEntity((UserEventTradeMaster_o *)this, &entity, v3->fields.currentEventId, 0LL) )
    goto LABEL_12;
  this = (EventCraftListViewManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  this = (EventCraftListViewManager_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !usedStoreIdx )
      goto LABEL_20;
    v16 = usedStoreIdx->max_length;
  }
  else
  {
LABEL_12:
    v16 = 0;
  }
  v17 = max_length - v16;
  v18 = (System_String_o **)(max_length == v16 ? &StringLiteral_3993/*"CRAFT_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_3992/*"CRAFT_EVENT_TITLE_QUOTA_LABEL"*/);
  v19 = *v18;
  craftAbleCountLb = v3->fields.craftAbleCountLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v21 = LocalizationManager__Get(v19, 0LL);
  v25 = v17;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = max_length;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  this = (EventCraftListViewManager_o *)System_String__Format_62415592(v21, v22, v23, 0LL);
  if ( !craftAbleCountLb )
LABEL_20:
    sub_1BCAA3C(this, method);
  UILabel__set_text(craftAbleCountLb, (System_String_o *)this, 0LL);
}


void __fastcall EventCraftListViewManager__UpdateNoticeButtonDisplay(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UISprite_o *craftNoticeBtnSp; // x0
  __int64 *v7; // x8

  if ( (byte_4B19FE8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B19FE8 = 1;
  }
  craftNoticeBtnSp = this->fields.craftNoticeBtnSp;
  if ( !craftNoticeBtnSp )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isButtonOn )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UISprite__set_spriteName(craftNoticeBtnSp, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager__UpdateReceiveAllButtonState(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  EventCraftListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_T__o *itemList; // x20
  EventCraftListViewManager___c_c *v14; // x0
  System_Func_object__bool__o *_9__48_0; // x21
  Il2CppObject *v16; // x22
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UICommonButton_o *receiveAllButton; // x8
  __int64 v25; // x1
  _BOOL4 v26; // w20
  float v27; // s0
  float v28; // s3
  float v29; // s1
  float v30; // s2
  __int64 v31; // x1
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21

  v4 = this;
  if ( (byte_4B19FCA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ListViewItem___, method, v2);
    sub_1BCA7E0(&System_Func_ListViewItem__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__UpdateReceiveAllButtonState_b__48_0__, v9, v10);
    this = (EventCraftListViewManager_o *)sub_1BCA7E0(&EventCraftListViewManager___c_TypeInfo, v11, v12);
    byte_4B19FCA = 1;
  }
  itemList = (System_Collections_Generic_List_T__o *)v4->fields.itemList;
  if ( !itemList )
  {
    receiveAllButton = v4->fields.receiveAllButton;
LABEL_13:
    v26 = 0;
    v25 = 3LL;
    goto LABEL_14;
  }
  v14 = EventCraftListViewManager___c_TypeInfo;
  if ( !EventCraftListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo, method);
    v14 = EventCraftListViewManager___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__bool__o *)v14->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, method);
      v14 = EventCraftListViewManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__48_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ListViewItem__bool__TypeInfo, method, v2, v3);
    System_Func_object__bool____ctor(
      _9__48_0,
      v16,
      Method_EventCraftListViewManager___c__UpdateReceiveAllButtonState_b__48_0__,
      0LL);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_ListViewItem__bool__o *)_9__48_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__48_0,
      (int64_t)_9__48_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  this = (EventCraftListViewManager_o *)BasicHelper__Any_object_(
                                          itemList,
                                          (System_Func_T__bool__o *)_9__48_0,
                                          (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ListViewItem___);
  receiveAllButton = v4->fields.receiveAllButton;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_13;
  v25 = 0LL;
  v26 = 1;
LABEL_14:
  if ( !receiveAllButton )
    goto LABEL_24;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))receiveAllButton->klass->vtable._14_SetState.method)(
    receiveAllButton,
    v25,
    1LL,
    receiveAllButton->klass->vtable._15_OnPress.methodPtr);
  this = (EventCraftListViewManager_o *)v4->fields.receiveAllButtonLabel;
  v27 = 0.5;
  if ( v26 )
    v27 = 1.0;
  if ( !this )
    goto LABEL_24;
  v28 = 1.0;
  v29 = v27;
  v30 = v27;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v27, 0LL);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)v4->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0LL, 0LL) )
  {
    this = (EventCraftListViewManager_o *)v4->fields.tradeButtonBlinkEffect;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v26, 0LL);
      return;
    }
LABEL_24:
    sub_1BCAA3C(this, v25);
  }
}


void __fastcall EventCraftListViewManager__WithdrawalResponse(
        EventCraftListViewManager_o *this,
        System_String_o *result,
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
  Il2CppObject *v14; // x20
  System_Object_array *v15; // x0
  EventCraftListViewManager_ResData_o *v16; // x1
  const MethodInfo *v17; // x2
  struct BattleDropItem_array *resultTradeRewardInfos; // x8

  if ( (byte_4B19FE1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___, result, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v11, v12);
    byte_4B19FE1 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    v14 = (Il2CppObject *)System_String__Concat_62412480(
                            (System_String_o *)StringLiteral_15978/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16236/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v13);
    v15 = JsonManager__DeserializeArray_object_(
            v14,
            (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventCraftListViewManager_ResData___);
    if ( !v15 )
      goto LABEL_13;
    if ( !v15->max_length )
      sub_1BCAA44(v15, v16);
    v16 = (EventCraftListViewManager_ResData_o *)v15->m_Items[0];
    if ( !v16 || (resultTradeRewardInfos = v16->fields.resultTradeRewardInfos) == 0LL )
LABEL_13:
      sub_1BCAA3C(v15, v16);
    if ( *(_QWORD *)&resultTradeRewardInfos->max_length )
      EventCraftListViewManager__OpenRewardDialog(this, v16, v17);
    EventCraftListViewManager__ResponseCommonProcess(this, 0, v17);
  }
}


void __fastcall EventCraftListViewManager___OnClickCraftStartButton_b__55_0(
        EventCraftListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


bool __fastcall EventCraftListViewManager___OpenReplenishmentDialog_b__64_0(
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, method);
  return currencyInfoController->fields._ItemBaseWindowHeight_k__BackingField;
}


System_Collections_Generic_List_EventCraftListViewObject__o *__fastcall EventCraftListViewManager__get_ObjectList(
        EventCraftListViewManager_o *this,
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_TSource__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  EventCraftListViewManager___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  System_Func_object__bool__o *_9__41_0; // x21
  Il2CppObject *v45; // x22
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_IEnumerable_T__o *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_object__o *v57; // x21

  if ( (byte_4B19FC5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GameObject__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_GameObject___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_GameObject___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GameObject___, v9, v10);
    sub_1BCA7E0(&System_Func_GameObject__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCraftListViewObject___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCraftListViewObject__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__get_ObjectList_b__41_0__, v17, v18);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__DisplayClass41_0__get_ObjectList_b__1__, v19, v20);
    sub_1BCA7E0(&EventCraftListViewManager___c__DisplayClass41_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&EventCraftListViewManager___c_TypeInfo, v23, v24);
    byte_4B19FC5 = 1;
  }
  v25 = sub_1BCAA2C(EventCraftListViewManager___c__DisplayClass41_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCraftListViewObject__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCraftListViewObject___ctor__);
  if ( !v25 )
    sub_1BCAA3C(v30, v31);
  *(_QWORD *)(v25 + 16) = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 16), (int64_t)v29, v32, v33, v34, v35, v36, v37);
  v38 = System_Linq_Enumerable__ToList_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.objectList,
          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v42 = EventCraftListViewManager___c_TypeInfo;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
  if ( !EventCraftListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo, v39);
    v42 = EventCraftListViewManager___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v42->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42, v39);
      v42 = EventCraftListViewManager___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GameObject__bool__TypeInfo, v39, v40, v41);
    System_Func_object__bool____ctor(_9__41_0, v45, Method_EventCraftListViewManager___c__get_ObjectList_b__41_0__, 0LL);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_GameObject__bool__o *)_9__41_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
      (int64_t)_9__41_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         v43,
                                                         (System_Func_TSource__bool__o *)_9__41_0,
                                                         (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v57 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameObject__TypeInfo, v54, v55, v56);
  System_Action_object____ctor(
    v57,
    (Il2CppObject *)v25,
    Method_EventCraftListViewManager___c__DisplayClass41_0__get_ObjectList_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v53,
    (System_Action_T__o *)v57,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_GameObject___);
  return *(System_Collections_Generic_List_EventCraftListViewObject__o **)(v25 + 16);
}


void __fastcall EventCraftListViewManager_ResData___ctor(
        EventCraftListViewManager_ResData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19FEB & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftListViewManager___c_TypeInfo, v1, v2);
    byte_4B19FEB = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventCraftListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventCraftListViewManager___c_TypeInfo->static_fields->__9 = (struct EventCraftListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventCraftListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventCraftListViewManager___c___ctor(EventCraftListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftListViewManager___c___Init_b__44_2(
        EventCraftListViewManager___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19FED & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4943/*"CraftFirstTimeSupportToolDisplay"*/, method, v2);
    byte_4B19FED = 1;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_4943/*"CraftFirstTimeSupportToolDisplay"*/, 1, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall EventCraftListViewManager___c___UpdateReceiveAllButtonState_b__48_0(
        EventCraftListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventCraftListViewItem_o *v3; // x19
  __int64 methodPtr_low; // x10
  const MethodInfo *v5; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8

  v3 = (EventCraftListViewItem_o *)item;
  if ( (byte_4B19FEE & 1) == 0 )
  {
    sub_1BCA7E0(&EventCraftListViewItem_TypeInfo, item, method);
    byte_4B19FEE = 1;
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
  if ( (byte_4B19FEC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, go, method);
    byte_4B19FEC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
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
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *list; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  EventCraftListViewManager___c__DisplayClass41_0_o *v17; // x1
  Il2CppClass **v18; // x0

  v4 = this;
  if ( (byte_4B19FEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___, go, method);
    this = (EventCraftListViewManager___c__DisplayClass41_0_o *)sub_1BCA7E0(
                                                                  &Method_System_Collections_Generic_List_EventCraftListViewObject__Add__,
                                                                  v5,
                                                                  v6);
    byte_4B19FEF = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventCraftListViewManager___c__DisplayClass41_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      go,
                                                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventCraftListViewObject___),
        !list)
    || (items = list->fields._items,
        v15 = Method_System_Collections_Generic_List_EventCraftListViewObject__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_1BCAA3C(this, go);
  }
  size = list->fields._size;
  v17 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    list->fields._size = size + 1;
    v18 = &items->obj.klass + size;
    v18[4] = (Il2CppClass *)v17;
    sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)v17, v8, v9, v10, v11, v12, v13);
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
    sub_1BCAA3C(this, 0LL);
  return ItemEntity__GetEventId(x, 0LL) == this->fields.eventId;
}


void __fastcall EventCraftListViewManager___c__DisplayClass44_0___Init_b__1(
        EventCraftListViewManager___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *_4__this; // x0
  struct EventCraftListViewManager_o *v11; // x8
  BaseDialog_o *craftFirstTimeSupportToolDialog; // x20
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  struct EventCraftListViewManager_o *v15; // x8
  EventCraftFirstTimeSupportToolDialogComponent_o *v16; // x19
  ItemEntity_o *supportTool; // x20
  System_Action_o *v18; // x21
  Il2CppObject *v19; // x22
  struct EventCraftListViewManager___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B19FF0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__Init_b__44_2__, v4, v5);
    sub_1BCA7E0(&EventCraftListViewManager___c_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_4943/*"CraftFirstTimeSupportToolDisplay"*/, v8, v9);
    byte_4B19FF0 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  EventCraftListViewManager__SetCraftObject((EventCraftListViewManager_o *)_4__this, method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  EventCraftListViewManager__SetReceiveAllButton((EventCraftListViewManager_o *)_4__this, method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  EventCraftListViewManager__CreateList((EventCraftListViewManager_o *)_4__this, method);
  _4__this = (void *)UnityEngine_PlayerPrefs__GetInt_70111952((System_String_o *)StringLiteral_4943/*"CraftFirstTimeSupportToolDisplay"*/, 0LL);
  if ( (_DWORD)_4__this )
    return;
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_18;
  craftFirstTimeSupportToolDialog = (BaseDialog_o *)v11->fields.craftFirstTimeSupportToolDialog;
  if ( !craftFirstTimeSupportToolDialog )
    goto LABEL_18;
  EventCraftListViewManager__CheckIsSerializeFieldNotNull(
    (Il2CppObject *)v11->fields.craftFirstTimeSupportToolDialog,
    method);
  BaseDialog__Init(craftFirstTimeSupportToolDialog, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_18;
  v16 = v15->fields.craftFirstTimeSupportToolDialog;
  supportTool = v15->fields.supportTool;
  _4__this = EventCraftListViewManager___c_TypeInfo;
  if ( !EventCraftListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCraftListViewManager___c_TypeInfo, method);
    _4__this = EventCraftListViewManager___c_TypeInfo;
  }
  v18 = *(System_Action_o **)(*((_QWORD *)_4__this + 23) + 16LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this, method);
      _4__this = EventCraftListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v13, v14);
    System_Action___ctor(v18, v19, Method_EventCraftListViewManager___c__Init_b__44_2__, 0LL);
    static_fields = EventCraftListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__44_2 = v18;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__44_2, (int64_t)v18, v21, v22, v23, v24, v25, v26);
  }
  if ( !v16 )
LABEL_18:
    sub_1BCAA3C(_4__this, method);
  EventCraftFirstTimeSupportToolDialogComponent__Open(v16, supportTool, v18, v14);
}


void __fastcall EventCraftListViewManager___c__DisplayClass54_0___ctor(
        EventCraftListViewManager___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCraftListViewManager___c__DisplayClass54_0___TryGetAvailableStoreIdx_b__0(
        EventCraftListViewManager___c__DisplayClass54_0_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct EventTradeStoreEntity_o *storeEntity; // x8

  storeEntity = this->fields.storeEntity;
  if ( !storeEntity )
    sub_1BCAA3C(this, *(_QWORD *)&idx);
  return storeEntity->fields.idx == idx;
}


void __fastcall EventCraftListViewManager___c__DisplayClass68_0___ctor(
        EventCraftListViewManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager___c__DisplayClass68_0___OnClickWithdrawalButton_b__0(
        EventCraftListViewManager___c__DisplayClass68_0_o *this,
        bool value,
        const MethodInfo *method)
{
  struct EventCraftListViewManager_o *_4__this; // x19
  const MethodInfo *v4; // x2

  _4__this = this->fields.__4__this;
  if ( value )
  {
    this = (EventCraftListViewManager___c__DisplayClass68_0_o *)this->fields.obj;
    if ( this )
    {
      this = (EventCraftListViewManager___c__DisplayClass68_0_o *)EventCraftListViewObject__GetItem(
                                                                    (EventCraftListViewObject_o *)this,
                                                                    0LL);
      if ( _4__this )
      {
        EventCraftListViewManager__OpenReconfirmDialog(_4__this, (EventCraftListViewItem_o *)this, v4);
        return;
      }
    }
LABEL_8:
    sub_1BCAA3C(this, value);
  }
  if ( !_4__this )
    goto LABEL_8;
  this = (EventCraftListViewManager___c__DisplayClass68_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventCraftListViewManager___c__DisplayClass69_0___ctor(
        EventCraftListViewManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventCraftListViewManager___c__DisplayClass69_0___OpenReconfirmDialog_b__0(
        EventCraftListViewManager___c__DisplayClass69_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x20

  if ( (byte_4B19FF1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, decide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__DisplayClass69_1__OpenReconfirmDialog_b__1__, v8, v9);
    sub_1BCA7E0(&EventCraftListViewManager___c__DisplayClass69_1_TypeInfo, v10, v11);
    byte_4B19FF1 = 1;
  }
  v12 = sub_1BCAA2C(EventCraftListViewManager___c__DisplayClass69_1_TypeInfo, decide, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 16) = decide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v12,
          Method_EventCraftListViewManager___c__DisplayClass69_1__OpenReconfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v25, 0LL);
}


void __fastcall EventCraftListViewManager___c__DisplayClass69_0___OpenReconfirmDialog_b__2(
        EventCraftListViewManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  EventCraftListViewManager__OnClickWithdrawalDecide(this->fields.__4__this, this->fields.item, v2);
}


void __fastcall EventCraftListViewManager___c__DisplayClass69_1___ctor(
        EventCraftListViewManager___c__DisplayClass69_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventCraftListViewManager___c__DisplayClass69_1___OpenReconfirmDialog_b__1(
        EventCraftListViewManager___c__DisplayClass69_1_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EventCraftListViewManager___c__DisplayClass69_1_o *v8; // x19
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
  struct EventCraftListViewManager___c__DisplayClass69_0_o *CS___8__locals1; // x9
  struct EventCraftListViewManager_o *_4__this; // x8
  struct EventCraftListViewItem_o *item; // x9
  int64_t TradeGoodsEntity_k__BackingField; // x1
  struct EventCraftListViewManager___c__DisplayClass69_0_o *v23; // x8
  int32_t oldCompleteNum; // w20
  const MethodInfo *v25; // x2
  struct EventCraftListViewManager___c__DisplayClass69_0_o *v26; // x8
  __int64 v27; // x1
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  struct EventCraftListViewManager___c__DisplayClass69_0_o *v32; // x23
  System_Action_o *_9__2; // x22
  EventCraftListViewManager___c__DisplayClass69_1_o *v34; // x19
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  v8 = this;
  if ( (byte_4B19FF2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&string_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_EventCraftListViewManager___c__DisplayClass69_0__OpenReconfirmDialog_b__2__, v15, v16);
    this = (EventCraftListViewManager___c__DisplayClass69_1_o *)sub_1BCA7E0(&StringLiteral_3987/*"CRAFT_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/, v17, v18);
    byte_4B19FF2 = 1;
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&_4__this->fields.selectTradeGoodsEntity,
      TradeGoodsEntity_k__BackingField,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v23 = v8->fields.CS___8__locals1;
    if ( !v23 )
      goto LABEL_23;
    this = (EventCraftListViewManager___c__DisplayClass69_1_o *)v23->fields.item;
    if ( !this )
      goto LABEL_23;
    oldCompleteNum = v23->fields.oldCompleteNum;
    this = (EventCraftListViewManager___c__DisplayClass69_1_o *)EventCraftListViewItem__get_NowCompleteNum(
                                                                  (EventCraftListViewItem_o *)this,
                                                                  method);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v26 = v8->fields.CS___8__locals1;
      if ( v26 )
      {
        this = (EventCraftListViewManager___c__DisplayClass69_1_o *)v26->fields.__4__this;
        if ( this )
        {
          EventCraftListViewManager__OnClickWithdrawalDecide((EventCraftListViewManager_o *)this, v26->fields.item, v25);
          return;
        }
      }
LABEL_23:
      sub_1BCAA3C(this, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
    this = (EventCraftListViewManager___c__DisplayClass69_1_o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3987/*"CRAFT_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
                                                                  0LL);
    v32 = v8->fields.CS___8__locals1;
    if ( !v32 )
      goto LABEL_23;
    _9__2 = v32->fields.__9__2;
    v34 = this;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v30, v31);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v32,
        Method_EventCraftListViewManager___c__DisplayClass69_0__OpenReconfirmDialog_b__2__,
        0LL);
      v32->fields.__9__2 = _9__2;
      sub_1BCA784((PartyOrganizationUtility_o *)&v32->fields.__9__2, (int64_t)_9__2, v35, v36, v37, v38, v39, v40);
    }
    if ( !Instance )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      Empty,
      (System_String_o *)v34,
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
    this = (EventCraftListViewManager___c__DisplayClass69_1_o *)_4__this->fields.craftWithdrawConfirmDialog;
    if ( !this )
      goto LABEL_23;
    EventCraftWithdrawConfirmDialogComponent__Close((EventCraftWithdrawConfirmDialogComponent_o *)this, 0LL);
  }
}
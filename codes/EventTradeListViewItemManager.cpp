void __fastcall EventTradeListViewItemManager___ctor(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CURRENT_PICKUP_INFO_BOARD_POS.fields.x = xmmword_BA3060;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager__CheckIsSerializeFieldNotNull(
        Il2CppObject *targetObj,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  if ( (byte_4A006BE & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_var, method);
    sub_1B640C8(&UnityEngine_SerializeField_var, v3);
    targetObj = (Il2CppObject *)sub_1B640C8(&System_Type_TypeInfo, v4);
    byte_4A006BE = 1;
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
  v7 = targetObj;
  if ( monitor >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= monitor )
        sub_1B6432C(targetObj, v5);
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
    sub_1B64324(targetObj);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager__CheckOpenQuest(
        EventTradeListViewItemManager_o *this,
        int32_t oldEventPoint,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t currentEventId; // w22
  Il2CppObject *Instance; // x0
  int32_t v12; // w22
  CommonUI_o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x24
  __int64 v17; // x0

  if ( (byte_4A006BA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&oldEventPoint);
    sub_1B640C8(&EventInfoTradeRankControl_TypeInfo, v7);
    sub_1B640C8(&Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4A006BA = 1;
  }
  currentEventId = this->fields.currentEventId;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
  EventInfoTradeRankControl__UpdateOldPoint(currentEventId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = this->fields.currentEventId;
  v13 = (CommonUI_o *)Instance;
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__, 0LL);
  if ( !v13 )
    sub_1B64324(v17);
  if ( !CommonUI__CheckOpenQuestByEventPoint(v13, v12, oldEventPoint, v16, 0, -2.0, 0LL) )
    ActionExtensions__Call(callback, 0LL);
}


void __fastcall EventTradeListViewItemManager__CreateList(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x25
  int max_length; // w8
  unsigned int v13; // w26
  EventTradeGoodsEntity_o *v14; // x21
  int32_t id; // w22
  int32_t currentEventId; // w23
  System_Action_o *v17; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  EventTradeListViewItem_o *v20; // x20
  const MethodInfo *v21; // x5
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  struct EventTradeGoodsEntity_array *v28; // x8
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_4A006A1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__, v3);
    sub_1B640C8(&EventTradeListViewItem_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_5677/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v7);
    byte_4A006A1 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_20;
  max_length = tradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1B6432C(itemList, v9);
      v14 = tradeGoodsEntities->m_Items[v13];
      if ( !v14 )
        break;
      id = v14->fields.id;
      currentEventId = this->fields.currentEventId;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
        0LL);
      v20 = (EventTradeListViewItem_o *)sub_1B64314(EventTradeListViewItem_TypeInfo, v18, v19);
      EventTradeListViewItem___ctor(v20, id, v14, currentEventId, v17, v21);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v20,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v20;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v20, v22, v23);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_14;
    }
LABEL_20:
    sub_1B64324(itemList);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  v28 = this->fields.tradeGoodsEntities;
  if ( !v28 )
    goto LABEL_20;
  if ( !*(_QWORD *)&v28->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5677/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
                                                              0LL);
    if ( !emptyMessageLabel )
      goto LABEL_20;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager__DestroyList(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  EventTradeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *tradeRewardDialog; // x20
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *tradePointRewardDialog; // x20
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
  UnityEngine_Object_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  UnityEngine_Object_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  UnityEngine_Object_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  ServantStatusBattleListViewItem_o *p_nextPickupInfoDispControl; // x19
  UnityEngine_Object_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A006A3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A006A3 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventTradeAssetManager__Release(assetManager, this->fields.currentEventId, v3);
  tradeRewardDialog = (UnityEngine_Object_o *)this->fields.tradeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeRewardDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.tradeRewardDialog;
    if ( !klass )
      goto LABEL_48;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    this->fields.tradeRewardDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tradeRewardDialog, 0, v8, v9);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradePointRewardDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.tradePointRewardDialog;
    if ( !klass )
      goto LABEL_48;
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v11, 0LL);
    this->fields.tradePointRewardDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tradePointRewardDialog, 0, v12, v13);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeSweetsNumConfirmDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.tradeSweetsNumConfirmDialog;
    if ( !klass )
      goto LABEL_48;
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v15, 0LL);
    this->fields.tradeSweetsNumConfirmDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsNumConfirmDialog, 0, v16, v17);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeSweetsWithdrawalConfirmDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
    if ( !klass )
      goto LABEL_48;
    v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v19, 0LL);
    this->fields.tradeSweetsWithdrawalConfirmDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsWithdrawalConfirmDialog, 0, v20, v21);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentPickupInfoDispControl, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.currentPickupInfoDispControl;
    if ( !klass )
      goto LABEL_48;
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v23, 0LL);
    this->fields.currentPickupInfoDispControl = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentPickupInfoDispControl, 0, v24, v25);
  }
  nextPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.nextPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextPickupInfoDispControl, 0LL, 0LL) )
  {
    p_nextPickupInfoDispControl = (ServantStatusBattleListViewItem_o *)&this->fields.nextPickupInfoDispControl;
    klass = (UnityEngine_Component_o *)p_nextPickupInfoDispControl->klass;
    if ( p_nextPickupInfoDispControl->klass )
    {
      v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v28, 0LL);
      p_nextPickupInfoDispControl->klass = 0LL;
      sub_1B6406C(p_nextPickupInfoDispControl, 0, v29, v30);
      return;
    }
LABEL_48:
    sub_1B64324(klass);
  }
}


void __fastcall EventTradeListViewItemManager__DispPickupInfoBoard(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  int64_t Time; // x21
  int64_t Time_38161648; // x0
  int64_t v10; // x22
  bool EntityListTargetTime; // w21
  const MethodInfo *v12; // x1
  char v13; // w20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x4
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *infoPanel; // x20
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *svtIndexPanel; // x20
  UnityEngine_GameObject_o *v21; // x0
  uint64_t dateData; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *v23; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8

  if ( (byte_4A006C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradePickupMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&System_DateTime_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A006C4 = 1;
  }
  pickupEntityList = 0LL;
  v23 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v25.fields._dateData = (uint64_t)&dateData;
  v26.fields._dateData = System_DateTime__AddDays(v25, 1.0, 0LL).fields._dateData;
  Time_38161648 = NetworkManager__getTime_38161648(v26, 0LL);
  if ( !Master_object )
    goto LABEL_32;
  v10 = Time_38161648;
  EntityListTargetTime = EventTradePickupMaster__TryGetEntityListTargetTime(
                           (EventTradePickupMaster_o *)Master_object,
                           &pickupEntityList,
                           this->fields.currentEventId,
                           Time,
                           0LL);
  Time_38161648 = EventTradePickupMaster__TryGetEntityListTargetTime(
                    (EventTradePickupMaster_o *)Master_object,
                    &v23,
                    this->fields.currentEventId,
                    v10,
                    0LL);
  if ( !this->fields.currentPickupInfoDispControl )
    goto LABEL_32;
  v13 = Time_38161648;
  EventTradePickupInfoDispControl__Init(this->fields.currentPickupInfoDispControl, v12);
  Time_38161648 = (int64_t)this->fields.nextPickupInfoDispControl;
  if ( !Time_38161648 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__Init((EventTradePickupInfoDispControl_o *)Time_38161648, v14);
  if ( !EntityListTargetTime )
  {
    if ( (v13 & 1) == 0 )
      return;
LABEL_18:
    Time_38161648 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_38161648 )
      goto LABEL_32;
    EventTradePickupInfoDispControl__SetUi(
      (EventTradePickupInfoDispControl_o *)Time_38161648,
      this->fields.currentEventId,
      v23,
      0,
      v15);
    Time_38161648 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_38161648 )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38161648, 0LL);
    GameObjectExtensions__SetLocalPosition_33375356(gameObject, this->fields.NEXT_PICKUP_INFO_BOARD_POS, 0LL);
    goto LABEL_21;
  }
  Time_38161648 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_38161648 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__SetUi(
    (EventTradePickupInfoDispControl_o *)Time_38161648,
    this->fields.currentEventId,
    pickupEntityList,
    1,
    v15);
  Time_38161648 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_38161648 )
    goto LABEL_32;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38161648, 0LL);
  GameObjectExtensions__SetLocalPosition_33375356(v16, this->fields.CURRENT_PICKUP_INFO_BOARD_POS, 0LL);
  if ( (v13 & 1) != 0 )
    goto LABEL_18;
LABEL_21:
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0LL, 0LL) )
  {
    Time_38161648 = (int64_t)this->fields.infoPanel;
    if ( !Time_38161648 )
      goto LABEL_32;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38161648, 0LL);
    GameObjectExtensions__SetLocalPositionY(v19, -33.0, 0LL);
  }
  svtIndexPanel = (UnityEngine_Object_o *)this->fields.svtIndexPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtIndexPanel, 0LL, 0LL) )
  {
    Time_38161648 = (int64_t)this->fields.svtIndexPanel;
    if ( Time_38161648 )
    {
      v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38161648, 0LL);
      GameObjectExtensions__SetLocalPositionY(v21, -92.0, 0LL);
      return;
    }
LABEL_32:
    sub_1B64324(Time_38161648);
  }
}


bool __fastcall EventTradeListViewItemManager__ExecuteCloseDialogCallBack(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *closeDialogCallBack; // x8

  closeDialogCallBack = this->fields.closeDialogCallBack;
  if ( closeDialogCallBack )
    return ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeDialogCallBack->fields.m_target)(
             closeDialogCallBack->fields.original_method_info,
             *(_QWORD *)&closeDialogCallBack->fields.extra_arg);
  else
    return 0;
}


System_Collections_Generic_List_EventTradeListViewItem__o *__fastcall EventTradeListViewItemManager__GetPickupList(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  System_Collections_Generic_List_object__o *v18; // x19
  Il2CppObject *Master_object; // x0
  int32_t currentEventId; // w21
  EventTradePickupMaster_o *v21; // x22
  int64_t Time; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  _BOOL8 v24; // x0
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  EventTradeGoodsEntity_o *v28; // x23
  int32_t klass; // w25
  int32_t v30; // w24
  System_Action_o *v31; // x26
  __int64 v32; // x1
  __int64 v33; // x2
  EventTradeListViewItem_o *v34; // x22
  const MethodInfo *v35; // x5
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A006A2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradePickupMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__get_Current__, v10);
    sub_1B640C8(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__, v11);
    sub_1B640C8(&EventTradeListViewItem_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeListViewItem__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_EventTradeListViewItem__TypeInfo, v16);
    sub_1B640C8(&NetworkManager_TypeInfo, v17);
    byte_4A006A2 = 1;
  }
  pickupEntityList = 0LL;
  memset(&v45, 0, sizeof(v45));
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTradeListViewItem__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  currentEventId = this->fields.currentEventId;
  v21 = (EventTradePickupMaster_o *)Master_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !v21 )
    goto LABEL_29;
  if ( !EventTradePickupMaster__TryGetEntityListTargetTime(v21, &pickupEntityList, currentEventId, Time, 0LL) )
    return (System_Collections_Generic_List_EventTradeListViewItem__o *)v18;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !pickupEntityList )
LABEL_29:
    sub_1B64324(Time);
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Time;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)pickupEntityList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__);
  v45 = v44;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__);
    if ( !v24 )
      break;
    if ( !v45.fields._current )
      sub_1B64324(v24);
    if ( !v23 )
      sub_1B64324(v24);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v23,
               (int32_t)v45.fields._current[1].klass,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    v28 = (EventTradeGoodsEntity_o *)Entity;
    if ( !Entity )
      sub_1B64324(0LL);
    klass = (int32_t)Entity[1].klass;
    v30 = this->fields.currentEventId;
    v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
    System_Action___ctor(
      v31,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
      0LL);
    v34 = (EventTradeListViewItem_o *)sub_1B64314(EventTradeListViewItem_TypeInfo, v32, v33);
    EventTradeListViewItem___ctor(v34, klass, v28, v30, v31, v35);
    if ( !v18 )
      sub_1B64324(v36);
    items = v18->fields._items;
    v40 = Method_System_Collections_Generic_List_EventTradeListViewItem__Add__;
    ++v18->fields._version;
    if ( !items )
      sub_1B64324(v36);
    size = v18->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v18,
        (Il2CppObject *)v34,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &items->obj.klass + size;
      v18->fields._size = size + 1;
      v42[4] = (Il2CppClass *)v34;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v34, v37, v38);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__);
  return (System_Collections_Generic_List_EventTradeListViewItem__o *)v18;
}


int64_t __fastcall EventTradeListViewItemManager__GetUpdateTime(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  int64_t Time; // x19
  int32_t Hour; // w20
  int32_t Minute; // w21
  int32_t Second; // w0
  EventTradeTimeCalculation_c *v8; // x8
  int32_t v9; // w22
  int64_t v10; // x19
  EventTradeTimeCalculation_c *v11; // x0
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8

  if ( (byte_4A006BC & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, method);
    sub_1B640C8(&EventTradeTimeCalculation_TypeInfo, v2);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_4A006BC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getLocalDateTime(0LL).fields._dateData;
  Time = NetworkManager__getTime(0LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v14.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v14, 0LL);
  v15.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v15, 0LL);
  v16.fields._dateData = (uint64_t)&dateData;
  Second = System_DateTime__get_Second(v16, 0LL);
  v8 = EventTradeTimeCalculation_TypeInfo;
  v9 = Second;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v8 = EventTradeTimeCalculation_TypeInfo;
  }
  v10 = v8->static_fields->TRADE_TIME_OFFSET + Time - (v9 + 60 * (Minute + 60 * Hour));
  if ( NetworkManager__getTime(0LL) < v10 )
  {
    v11 = EventTradeTimeCalculation_TypeInfo;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      v11 = EventTradeTimeCalculation_TypeInfo;
    }
    v10 -= v11->static_fields->ONE_DAY_SECOND;
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager__Init(
        EventTradeListViewItemManager_o *this,
        int32_t eventId,
        int32_t svtId,
        System_Action_o *tradeCallback,
        System_Action_int__string____Action__o *playVoice,
        System_Action_BattleDropItem____int__Action__o *rewardDialogCallBack,
        UnityEngine_GameObject_o *maskPanel,
        PresentBoxOverDialog_o *boxOverDlg,
        System_Action_o *boxOverDlgCallBack,
        System_Func_bool__o *closeDialogCallBack,
        const MethodInfo *method)
{
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  EventTradeGoodsMaster_o *Master_object; // x0
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x8
  EventTradeGoodsEntity_o *v49; // x8
  int32_t eventPointItemId; // w8
  __int64 v51; // x1
  __int64 v52; // x2
  EventTradeAssetManager_o *v53; // x22
  const MethodInfo *v54; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  const MethodInfo *v57; // x1
  UILabel_o *tradeNoticeLb; // x21
  const MethodInfo *v59; // x1
  EventTradeAssetManager_o *assetManager; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  System_Action_o *v63; // x22
  const MethodInfo *v64; // x3

  if ( (byte_4A006A0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeStoreMaster___, v20);
    sub_1B640C8(&DataManager_TypeInfo, v21);
    sub_1B640C8(&EventTradeAssetManager_TypeInfo, v22);
    sub_1B640C8(&Method_EventTradeListViewItemManager__Init_b__53_0__, v23);
    sub_1B640C8(&LocalizationManager_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_13326/*"TRADE_EVENT_PUSH_BTN_LABEL"*/, v25);
    byte_4A006A0 = 1;
  }
  this->fields.svtId = svtId;
  this->fields.currentEventId = eventId;
  this->fields.tradeCallback = tradeCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.tradeCallback,
    (int32_t)tradeCallback,
    svtId,
    (int32_t)tradeCallback);
  this->fields.rewardDialogCallBack = rewardDialogCallBack;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.rewardDialogCallBack,
    (int32_t)rewardDialogCallBack,
    v26,
    v27);
  this->fields.playVoiceAction = playVoice;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAction, (int32_t)playVoice, v28, v29);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.presentBoxOverDlg, (int32_t)boxOverDlg, v30, v31);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.boxOverDlgCloseCallBack,
    (int32_t)boxOverDlgCallBack,
    v32,
    v33);
  this->fields.closeDialogCallBack = closeDialogCallBack;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeDialogCallBack,
    (int32_t)closeDialogCallBack,
    v34,
    v35);
  this->fields.maskPanel = maskPanel;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)maskPanel, v36, v37);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_19;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            Master_object,
                            this->fields.currentEventId,
                            0LL);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.tradeGoodsEntities,
    (int32_t)TradeGoodsEntityArray,
    v40,
    v41);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_19;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0LL);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
    (int32_t)OpenTradeStoreEntityArray,
    v43,
    v44);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_19;
  if ( !tradeGoodsEntities->max_length )
    sub_1B6432C(Master_object, v45);
  v49 = tradeGoodsEntities->m_Items[0];
  if ( !v49 )
    goto LABEL_19;
  eventPointItemId = v49->fields.eventPointItemId;
  this->fields.selectTradeGoodsEntity = 0LL;
  this->fields.eventPointItemId = eventPointItemId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity, 0, v46, v47);
  Master_object = (EventTradeGoodsMaster_o *)this->fields.touchPanel;
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (EventTradeGoodsMaster_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Master_object,
                                               0LL);
  if ( !Master_object )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  if ( !this->fields.assetManager )
  {
    v53 = (EventTradeAssetManager_o *)sub_1B64314(EventTradeAssetManager_TypeInfo, v51, v52);
    EventTradeAssetManager___ctor(v53, v54);
    this->fields.assetManager = v53;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetManager, (int32_t)v53, v55, v56);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetTradeNotification(0LL);
  EventTradeListViewItemManager__UpdateNoticeButtonDisp(this, v57);
  tradeNoticeLb = this->fields.tradeNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13326/*"TRADE_EVENT_PUSH_BTN_LABEL"*/, 0LL);
  if ( !tradeNoticeLb
    || (UILabel__set_text(tradeNoticeLb, (System_String_o *)Master_object, 0LL),
        EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v59),
        assetManager = this->fields.assetManager,
        v63 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v61, v62),
        System_Action___ctor(v63, (Il2CppObject *)this, Method_EventTradeListViewItemManager__Init_b__53_0__, 0LL),
        !assetManager) )
  {
LABEL_19:
    sub_1B64324(Master_object);
  }
  EventTradeAssetManager__GetAssets(assetManager, eventId, v63, v64);
}


bool __fastcall EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *String_69086012; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  int64_t v6; // x20
  EventTradeListViewItemManager_o *UpdateTime; // x0
  const MethodInfo *v8; // x1
  int64_t v10; // x0
  EventTradeTimeCalculation_c *v11; // x8
  int64_t v12; // x19
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A006BB & 1) == 0 )
  {
    sub_1B640C8(&EventTradeTimeCalculation_TypeInfo, method);
    sub_1B640C8(&StringLiteral_14476/*"TradeNotificationDialogOpenTime"*/, v2);
    byte_4A006BB = 1;
  }
  result = 0LL;
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012((System_String_o *)StringLiteral_14476/*"TradeNotificationDialogOpenTime"*/, 0LL);
  v4 = System_Int64__TryParse(String_69086012, &result, 0LL);
  if ( v4 )
    v6 = result;
  else
    v6 = 0LL;
  UpdateTime = (EventTradeListViewItemManager_o *)EventTradeListViewItemManager__GetUpdateTime(
                                                    (EventTradeListViewItemManager_o *)v4,
                                                    v5);
  if ( (__int64)UpdateTime > v6 )
    return 0;
  v10 = EventTradeListViewItemManager__GetUpdateTime(UpdateTime, v8);
  v11 = EventTradeTimeCalculation_TypeInfo;
  v12 = v10;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v11 = EventTradeTimeCalculation_TypeInfo;
  }
  return v6 < v11->static_fields->ONE_DAY_SECOND + v12;
}


bool __fastcall EventTradeListViewItemManager__IsOverPossessionLimit(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserGameEntity_o *SelfUserGame; // x20
  void *Master_object; // x0
  UserServantMaster_o *v13; // x21
  Il2CppObject *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  CommonUI_o *v17; // x19
  int32_t v18; // w21
  int32_t svtKeep; // w20
  ServantFrameShortDlgComponent_CallbackFunc_o *v20; // x22
  Il2CppObject *v21; // x23
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  CommonUI_o *v25; // x0
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x2
  CommonUI_o *v31; // x19
  int32_t v32; // w21
  int32_t svtEquipKeep; // w20
  Il2CppObject *v34; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  bool v38; // w8
  bool result; // w0
  int32_t Count; // w19
  __int64 v41; // x1
  __int64 v42; // x2
  CommonUI_o *v43; // x21
  BalanceConfig_c *v44; // x8
  Il2CppObject *v45; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A006C0 & 1) == 0 )
  {
    sub_1B640C8(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v2);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__, v7);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__, v8);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__, v9);
    sub_1B640C8(&EventTradeListViewItemManager___c_TypeInfo, v10);
    byte_4A006C0 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_45;
  v13 = (UserServantMaster_o *)Master_object;
  UserServantMaster__getCount((UserServantMaster_o *)Master_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  v14 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v13, 1, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v17 = (CommonUI_o *)Master_object;
      v18 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
      if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
        Master_object = EventTradeListViewItemManager___c_TypeInfo;
      }
      v20 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Master_object + 23) + 24LL);
      if ( !v20 )
      {
        if ( !*((_DWORD *)Master_object + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          Master_object = EventTradeListViewItemManager___c_TypeInfo;
        }
        v21 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
        v20 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                                ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                v15,
                                                                v16);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v20,
          v21,
          Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__,
          0LL);
        static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
        static_fields->__9__86_0 = v20;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__86_0, (int32_t)v20, v23, v24);
      }
      if ( v17 )
      {
        v25 = v17;
        v26 = v18;
        v27 = svtKeep;
        v28 = 0;
        goto LABEL_42;
      }
    }
LABEL_45:
    sub_1B64324(Master_object);
  }
  Master_object = (void *)UserServantMaster__CheckEquipAdd(v13, 1, 1, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v31 = (CommonUI_o *)Master_object;
    v32 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Master_object = EventTradeListViewItemManager___c_TypeInfo;
    if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
    }
    v20 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Master_object + 23) + 32LL);
    if ( !v20 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = EventTradeListViewItemManager___c_TypeInfo;
      }
      v34 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v20 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v29,
                                                              v30);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v20,
        v34,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__,
        0LL);
      v35 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v35->__9__86_1 = v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v35->__9__86_1, (int32_t)v20, v36, v37);
    }
    if ( !v31 )
      goto LABEL_45;
    v28 = 1;
    v25 = v31;
    v26 = v32;
  }
  else
  {
    if ( !v14 )
      goto LABEL_45;
    v38 = UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v14, 0, 0LL);
    result = 0;
    if ( !v38 )
      return result;
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v14, 0LL);
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v43 = (CommonUI_o *)Master_object;
    if ( !byte_49F7B7B )
    {
      sub_1B640C8(&BalanceConfig_TypeInfo, v41);
      byte_49F7B7B = 1;
    }
    v44 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v44 = BalanceConfig_TypeInfo;
    }
    Master_object = EventTradeListViewItemManager___c_TypeInfo;
    svtEquipKeep = v44->static_fields->CommandCodeFrameMax;
    if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
    }
    v20 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Master_object + 23) + 40LL);
    if ( !v20 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = EventTradeListViewItemManager___c_TypeInfo;
      }
      v45 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v20 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64314(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v41,
                                                              v42);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v20,
        v45,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__,
        0LL);
      v46 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v46->__9__86_4 = v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->__9__86_4, (int32_t)v20, v47, v48);
    }
    if ( !v43 )
      goto LABEL_45;
    v28 = 2;
    v25 = v43;
    v26 = Count;
  }
  v27 = svtEquipKeep;
LABEL_42:
  CommonUI__OpenSvtFrameShortDlg(v25, v26, v27, v28, 1, v20, 4, 0LL);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_45;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Master_object, 0LL);
  return 1;
}


bool __fastcall EventTradeListViewItemManager__IsOverPresentBoxLimit(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  EventTradeListViewItemManager___c_c *v29; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Func_object__bool__o *_9__87_0; // x21
  Il2CppObject *v32; // x22
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  EventTradeListViewItemManager___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x20
  System_Func_object__object__o *_9__87_1; // x21
  Il2CppObject *v42; // x22
  struct EventTradeListViewItemManager___c_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v46; // x22
  Il2CppObject *Master_object; // x20
  __int64 UserId; // x0
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *v50; // x23
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_HashSet_int__o *v53; // x21
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v55; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v58; // x22
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  GiftEntity_array *GiftListById; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v70; // x1
  int max_length; // w8
  int i; // w29
  GiftEntity_o *v73; // x8
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  int32_t count; // w21
  BalanceConfig_c *v79; // x0
  int32_t PresentBoxMax; // w23
  int32_t v81; // w24
  System_String_o *v82; // x0
  BalanceConfig_c *v83; // x8
  System_String_o *v84; // x20
  Il2CppObject *v85; // x0
  System_String_o *v86; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v88; // x21
  __int64 v89; // x1
  __int64 v90; // x2
  PresentBoxOverDialog_ClickDelegate_o *v91; // x22
  int32_t v93; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A006C1 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_ListViewItem___, v9);
    sub_1B640C8(&Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__, v10);
    sub_1B640C8(&System_Func_ListViewItem__bool__TypeInfo, v11);
    sub_1B640C8(&System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_1B640C8(&System_IDisposable_TypeInfo, v17);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo, v18);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo, v19);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v20);
    sub_1B640C8(&int_TypeInfo, v21);
    sub_1B640C8(&LocalizationManager_TypeInfo, v22);
    sub_1B640C8(&NetworkManager_TypeInfo, v23);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__, v24);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__, v25);
    sub_1B640C8(&EventTradeListViewItemManager___c_TypeInfo, v26);
    sub_1B640C8(&StringLiteral_13298/*"TRADE_CHECK_PRESENT_NUM_TXT"*/, v27);
    sub_1B640C8(&StringLiteral_1/*""*/, v28);
    byte_4A006C1 = 1;
  }
  v29 = EventTradeListViewItemManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v29 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__87_0 = (System_Func_object__bool__o *)v29->static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__87_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ListViewItem__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(
      _9__87_0,
      v32,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Func_ListViewItem__bool__o *)_9__87_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v34, v35);
  }
  v36 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
          (System_Func_TSource__bool__o *)_9__87_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_ListViewItem___);
  v39 = EventTradeListViewItemManager___c_TypeInfo;
  v40 = v36;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v39 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__87_1 = (System_Func_object__object__o *)v39->static_fields->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__87_1 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo,
                                                  v37,
                                                  v38);
    System_Func_object__object____ctor(
      _9__87_1,
      v42,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__,
      0LL);
    v43 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    v43->__9__87_1 = (struct System_Func_ListViewItem__EventTradeGoodsEntity__o *)_9__87_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->__9__87_1, (int32_t)_9__87_1, v44, v45);
  }
  v46 = System_Linq_Enumerable__Select_object__object_(
          v40,
          (System_Func_TSource__TResult__o *)_9__87_1,
          (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_76;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Master_object, UserId, 0LL);
  v50 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
  v53 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v51,
                                                       v52);
  System_Collections_Generic_HashSet_int____ctor(
    v53,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v46 )
    goto LABEL_76;
  klass = v46->klass;
  v55 = *(unsigned __int16 *)(&v46->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v46->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo )
    {
      --v55;
      p_offset += 4;
      if ( !v55 )
        goto LABEL_25;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_25:
    p_method = sub_1BB60A8(v46, System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo, 0LL);
  }
  v58 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v46,
          *(_QWORD *)(p_method + 8));
  if ( !v58 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v59 = *(_QWORD *)v58;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v61 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_32;
      }
      v62 = v59 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_32:
      v62 = sub_1BB60A8(v58, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v58, *(_QWORD *)(v62 + 8)) & 1) == 0 )
      break;
    v63 = *(_QWORD *)v58;
    v64 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
    {
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__c **)v65 - 1) != System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_39;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_39:
      v66 = sub_1BB60A8(v58, System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo, 0LL);
    }
    v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v58, *(_QWORD *)(v66 + 8));
    if ( !v67 )
      sub_1B64324(0LL);
    if ( !v50 )
      sub_1B64324(v67);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v50, *(_DWORD *)(v67 + 36), 0LL);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GiftListById, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !GiftListById )
        sub_1B64324(IsNullOrEmpty);
      max_length = GiftListById->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1B6432C(IsNullOrEmpty, v70);
          v73 = GiftListById->m_Items[i];
          if ( !v73 )
            sub_1B64324(IsNullOrEmpty);
          if ( !v53 )
            sub_1B64324(IsNullOrEmpty);
          IsNullOrEmpty = System_Collections_Generic_HashSet_int___Add(
                            v53,
                            v73->fields.type,
                            (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
          max_length = GiftListById->max_length;
        }
      }
    }
  }
  v74 = *(_QWORD *)v58;
  v75 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
  {
    v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_56;
    }
    v77 = v74 + 16LL * *v76 + 312;
  }
  else
  {
LABEL_56:
    v77 = sub_1BB60A8(v58, System_IDisposable_TypeInfo, 0LL);
  }
  UserId = (*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v58, *(_QWORD *)(v77 + 8));
  if ( !VaildList || !v53 )
    goto LABEL_76;
  count = v53->fields._count;
  v79 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v79 = BalanceConfig_TypeInfo;
  }
  PresentBoxMax = v79->static_fields->PresentBoxMax;
  v81 = count + VaildList->max_length;
  if ( v81 > PresentBoxMax )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_13298/*"TRADE_CHECK_PRESENT_NUM_TXT"*/, 0LL);
    v83 = BalanceConfig_TypeInfo;
    v84 = v82;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v83 = BalanceConfig_TypeInfo;
    }
    v93 = v83->static_fields->PresentBoxMax;
    v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
    v86 = System_String__Format(v84, v85, 0LL);
    presentBoxOverDlg = this->fields.presentBoxOverDlg;
    v88 = v86;
    v91 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1B64314(PresentBoxOverDialog_ClickDelegate_TypeInfo, v89, v90);
    PresentBoxOverDialog_ClickDelegate___ctor(
      v91,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__,
      0LL);
    if ( presentBoxOverDlg )
    {
      PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v88, v91, 26, 0LL);
      return v81 > PresentBoxMax;
    }
LABEL_76:
    sub_1B64324(UserId);
  }
  return v81 > PresentBoxMax;
}


void __fastcall EventTradeListViewItemManager__LocateDialogToTradePanel(
        EventTradeListViewItemManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  __int64 v6; // x1
  EventTradeListViewItemManager_o *v7; // x20

  if ( !dialog )
    goto LABEL_9;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  this = (EventTradeListViewItemManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this )
    goto LABEL_9;
  this = (EventTradeListViewItemManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL);
  this = (EventTradeListViewItemManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0LL);
  v7 = this;
  if ( !byte_49F7116 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v6);
    byte_49F7116 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v7,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventTradeListViewItemManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)dialog,
                                                     0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventTradeListViewItemManager__LocateObjectToTradePanel(
        EventTradeListViewItemManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  __int64 v6; // x1
  EventTradeListViewItemManager_o *v7; // x20

  if ( !obj )
    goto LABEL_8;
  v4 = (UnityEngine_Component_o *)this;
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  this = (EventTradeListViewItemManager_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this )
    goto LABEL_8;
  this = (EventTradeListViewItemManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !transform )
    goto LABEL_8;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0LL);
  this = (EventTradeListViewItemManager_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  v7 = this;
  if ( !byte_49F7116 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v6);
    byte_49F7116 = 1;
  }
  if ( !v7 )
LABEL_8:
    sub_1B64324(this);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v7,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  UnityEngine_GameObject__SetActive(obj, 0, 0LL);
}


void __fastcall EventTradeListViewItemManager__OnClickListView(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  EventTradeListViewItemManager_o *v5; // x19
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4A006A7 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickListView__, obj);
    byte_4A006A7 = 1;
  }
  if ( !obj
    || (this = (EventTradeListViewItemManager_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_1B64324(this);
  }
  v5 = this;
  if ( !this->fields.sortKindButton && EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)this, v4)
    || !BYTE4(v5->fields.sortOrderButton) )
  {
    v6 = Method_EventTradeListViewItemManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickListView__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_EventTradeListViewItemManager_OnClickListView__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager__OnClickNoticeButton(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A006C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickNoticeButton__, method);
    byte_4A006C3 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v4 = Method_EventTradeListViewItemManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_EventTradeListViewItemManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0LL);
  EventRewardSaveData__SetTradeNotification(this->fields.isButtonOn, 0LL);
  EventTradeListViewItemManager__UpdateNoticeButtonDisp(this, v6);
}


void __fastcall EventTradeListViewItemManager__OnClickReceiveAll(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  __int64 maskPanel; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v16; // x20
  _QWORD *v17; // x21
  __int64 v18; // x8
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4A006B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, method);
    sub_1B640C8(&Method_EventTradeListViewItemManager_TradeReceiveResponse__, v3);
    sub_1B640C8(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    this = (EventTradeListViewItemManager_o *)sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4A006B4 = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, method)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v2, v7) )
  {
    maskPanel = (__int64)v2->fields.maskPanel;
    if ( !maskPanel )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
    v2->fields.selectTradeGoodsEntity = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.selectTradeGoodsEntity, 0, v9, v10);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)v2,
      Method_EventTradeListViewItemManager_TradeReceiveResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
    currentEventId = v2->fields.currentEventId;
    v16 = (TradeReceiveRequest_o *)Request_object;
    v17 = Method_System_Array_Empty_int___;
    v18 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v18 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1BB5FA4(v19);
    if ( !*(_DWORD *)(v19 + 224) )
      j_il2cpp_runtime_class_init_0(v19);
    maskPanel = *(_QWORD *)(v17[7] + 16LL);
    if ( (*(_BYTE *)(maskPanel + 309) & 1) == 0 )
      maskPanel = sub_1BB5FA4(maskPanel);
    if ( !v16 )
LABEL_19:
      sub_1B64324(maskPanel);
    TradeReceiveRequest__beginRequest(v16, currentEventId, **(System_Int32_array ***)(maskPanel + 184), 0, 0, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager__OnClickReceiveAllButton(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v2; // x19
  struct UICommonButton_o *receiveAllButton; // x8
  int32_t mState; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  v2 = this;
  if ( (byte_4A006AF & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B640C8(
                                                &Method_EventTradeListViewItemManager_OnClickReceiveAllButton__,
                                                method);
    byte_4A006AF = 1;
  }
  receiveAllButton = v2->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_1B64324(this);
  mState = receiveAllButton->fields.mState;
  v5 = Method_EventTradeListViewItemManager_OnClickReceiveAllButton__;
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_EventTradeListViewItemManager_OnClickReceiveAllButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  if ( mState == 3 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    EventTradeListViewItemManager__OnClickReceiveAll(v2, v7);
  }
}


void __fastcall EventTradeListViewItemManager__OnClickReceiveButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *maskPanel; // x0
  unsigned int displayMode; // w8
  int v9; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x1
  EventTradeListViewItem_o *Item; // x21
  int64_t Time; // x22
  int32_t CompleteNum; // w21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct EventTradeGoodsEntity_o *v22; // x1

  if ( (byte_4A006A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickReceiveButton__, obj);
    sub_1B640C8(&EventTradeTimeCalculation_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    byte_4A006A9 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_21;
  displayMode = obj->fields.displayMode;
  if ( displayMode <= 5 )
  {
    v9 = 1 << displayMode;
    if ( (v9 & 0xD) != 0 )
    {
LABEL_18:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
        return;
      }
LABEL_21:
      sub_1B64324(maskPanel);
    }
    if ( (v9 & 0x30) != 0 )
    {
      v10 = Method_EventTradeListViewItemManager_OnClickReceiveButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveButton__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B640E0(Method_EventTradeListViewItemManager_OnClickReceiveButton__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B640AC(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 8, 0LL);
      Item = EventTradeListViewObject__GetItem(obj, v12);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      CompleteNum = EventTradeTimeCalculation__GetCompleteNum(Item, Time, 0LL);
      maskPanel = EventTradeListViewObject__GetItem(obj, v16);
      if ( !maskPanel )
        goto LABEL_21;
      v18 = *((_QWORD *)maskPanel + 17);
      if ( !v18 )
        goto LABEL_21;
      EventTradeListViewItemManager__OnClickReceiveDecide(this, *(_DWORD *)(v18 + 16), CompleteNum, v17);
      maskPanel = EventTradeListViewObject__GetItem(obj, v19);
      if ( !maskPanel )
        goto LABEL_21;
      v22 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
      this->fields.selectTradeGoodsEntity = v22;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity, (int32_t)v22, v20, v21);
      goto LABEL_18;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager__OnClickReceiveDecide(
        EventTradeListViewItemManager_o *this,
        int32_t storeIdx,
        int32_t receiveNum,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  __int64 maskPanel; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x22
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w21
  TradeReceiveRequest_o *v18; // x22
  __int64 v19; // x1

  v6 = this;
  if ( (byte_4A006B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventTradeListViewItemManager_TradeReceiveResponse__, *(_QWORD *)&storeIdx);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    this = (EventTradeListViewItemManager_o *)sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    byte_4A006B3 = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, *(const MethodInfo **)&storeIdx)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v6, v11) )
  {
    maskPanel = (__int64)v6->fields.maskPanel;
    if ( maskPanel )
    {
      if ( receiveNum <= 0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
        return;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)v6,
        Method_EventTradeListViewItemManager_TradeReceiveResponse__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v15,
                         (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
      currentEventId = v6->fields.currentEventId;
      v18 = (TradeReceiveRequest_o *)Request_object;
      maskPanel = sub_1B64170(int___TypeInfo, 1LL);
      if ( maskPanel )
      {
        if ( !*(_DWORD *)(maskPanel + 24) )
          sub_1B6432C(maskPanel, v19);
        *(_DWORD *)(maskPanel + 32) = storeIdx;
        if ( v18 )
        {
          TradeReceiveRequest__beginRequest(v18, currentEventId, (System_Int32_array *)maskPanel, receiveNum, 0, 0LL);
          return;
        }
      }
    }
    sub_1B64324(maskPanel);
  }
}


void __fastcall EventTradeListViewItemManager__OnClickReplenishmentButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *maskPanel; // x0
  const MethodInfo *v8; // x1
  unsigned int displayMode; // w8
  int v10; // w8
  const MethodInfo *v11; // x1
  bool IsRefillable; // w21
  _QWORD *v13; // x8
  System_Reflection_MethodBase_o *v14; // x0
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  const MethodInfo *v16; // x1
  EventTradeListViewItem_o *Item; // x22
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x8
  int32_t v22; // w23
  System_Action_int__int__int__o *v23; // x24
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct EventTradeGoodsEntity_o *v27; // x1

  if ( (byte_4A006AA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__int__int__TypeInfo, obj);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__, v5);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__, v6);
    byte_4A006AA = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_22;
  displayMode = obj->fields.displayMode;
  if ( displayMode <= 5 )
  {
    v10 = 1 << displayMode;
    if ( (v10 & 0xD) != 0 )
    {
LABEL_18:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
        return;
      }
LABEL_22:
      sub_1B64324(maskPanel);
    }
    if ( (v10 & 0x30) != 0 )
    {
      maskPanel = EventTradeListViewObject__GetItem(obj, v8);
      if ( !maskPanel )
        goto LABEL_22;
      IsRefillable = EventTradeListViewItem__get_IsRefillable((EventTradeListViewItem_o *)maskPanel, v11);
      v13 = Method_EventTradeListViewItemManager_OnClickReplenishmentButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1B640E0(Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
      v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
      if ( IsRefillable )
      {
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
        maskPanel = this->fields.tradeSweetsNumConfirmDialog;
        if ( !maskPanel )
          goto LABEL_22;
        EventTradeSweetsNumConfirmDialogComponent__Init(
          (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
          this->fields.currentEventId,
          0LL);
        tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
        Item = EventTradeListViewObject__GetItem(obj, v16);
        maskPanel = EventTradeListViewObject__GetItem(obj, v18);
        if ( !maskPanel )
          goto LABEL_22;
        v21 = *((_QWORD *)maskPanel + 17);
        if ( !v21 )
          goto LABEL_22;
        v22 = *(_DWORD *)(v21 + 16);
        v23 = (System_Action_int__int__int__o *)sub_1B64314(System_Action_int__int__int__TypeInfo, v19, v20);
        System_Action_int__int__int____ctor(
          v23,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
          0LL);
        if ( !tradeSweetsNumConfirmDialog )
          goto LABEL_22;
        EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, Item, v22, v23, 1, 0LL);
        maskPanel = EventTradeListViewObject__GetItem(obj, v24);
        if ( !maskPanel )
          goto LABEL_22;
        v27 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
        this->fields.selectTradeGoodsEntity = v27;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity, (int32_t)v27, v25, v26);
        goto LABEL_18;
      }
      OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager__OnClickTradeReplenishmentDecide(
        EventTradeListViewItemManager_o *this,
        int32_t storeIdx,
        int32_t goodsId,
        int32_t createNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x23
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_4A006AE & 1) == 0 )
  {
    sub_1B640C8(&Method_EventTradeListViewItemManager_TradeReplenishmentResponse__, *(_QWORD *)&storeIdx);
    sub_1B640C8(&Method_NetworkManager_getRequest_TradeStartRequest___, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    byte_4A006AE = 1;
  }
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_13;
  EventTradeSweetsNumConfirmDialogComponent__Close(tradeSweetsNumConfirmDialog, 0LL);
  tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_13;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 1, 0LL);
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_TradeReplenishmentResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                   v15,
                                                                                   (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeSweetsNumConfirmDialog )
    {
      TradeStartRequest__beginRequest(
        (TradeStartRequest_o *)tradeSweetsNumConfirmDialog,
        this->fields.currentEventId,
        storeIdx,
        goodsId,
        createNum,
        0LL);
      return;
    }
LABEL_13:
    sub_1B64324(tradeSweetsNumConfirmDialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 0, 0LL);
  closeDialogCallBack = this->fields.closeDialogCallBack;
  if ( closeDialogCallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeDialogCallBack->fields.m_target)(
      closeDialogCallBack->fields.original_method_info,
      *(_QWORD *)&closeDialogCallBack->fields.extra_arg);
}


void __fastcall EventTradeListViewItemManager__OnClickTradeStartButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
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
  const MethodInfo *v14; // x1
  unsigned int displayMode; // w8
  int v16; // w8
  const MethodInfo *v17; // x1
  bool IsBuyAble; // w21
  _QWORD *v19; // x8
  System_Reflection_MethodBase_o *v20; // x0
  const MethodInfo *v21; // x2
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  const MethodInfo *v23; // x1
  EventTradeListViewItem_o *Item; // x0
  int32_t v25; // w22
  EventTradeListViewItem_o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_int__int__int__o *v29; // x24
  const MethodInfo *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  struct EventTradeGoodsEntity_o *klass; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v35; // x21
  System_String_o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x23
  int32_t storeIdx; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4A006A8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__int__int__TypeInfo, obj);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__, v6);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickTradeStartDecide__, v7);
    sub_1B640C8(&Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_13316/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/, v11);
    sub_1B640C8(&StringLiteral_13315/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/, v12);
    byte_4A006A8 = 1;
  }
  storeIdx = 0;
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( !obj )
    goto LABEL_25;
  displayMode = obj->fields.displayMode;
  if ( displayMode > 5 )
    return;
  v16 = 1 << displayMode;
  if ( (v16 & 0x31) == 0 )
  {
    if ( (v16 & 0xC) == 0 )
      return;
    maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v14);
    if ( !maskPanel )
      goto LABEL_25;
    IsBuyAble = EventTradeListViewItem__get_IsBuyAble((EventTradeListViewItem_o *)maskPanel, v17);
    v19 = Method_EventTradeListViewItemManager_OnClickTradeStartButton__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickTradeStartButton__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1B640E0(Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    v20 = (System_Reflection_MethodBase_o *)sub_1B640AC(v19, v19[4]);
    if ( IsBuyAble )
    {
      OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
      if ( EventTradeListViewItemManager__TryGetAvailableStoreIdx(this, &storeIdx, v21) )
      {
        maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsNumConfirmDialog;
        if ( maskPanel )
        {
          EventTradeSweetsNumConfirmDialogComponent__Init(
            (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
            this->fields.currentEventId,
            0LL);
          tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
          Item = EventTradeListViewObject__GetItem(obj, v23);
          v25 = storeIdx;
          v26 = Item;
          v29 = (System_Action_int__int__int__o *)sub_1B64314(System_Action_int__int__int__TypeInfo, v27, v28);
          System_Action_int__int__int____ctor(
            v29,
            (Il2CppObject *)this,
            Method_EventTradeListViewItemManager_OnClickTradeStartDecide__,
            0LL);
          if ( tradeSweetsNumConfirmDialog )
          {
            EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v26, v25, v29, 0, 0LL);
            maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v30);
            if ( maskPanel )
            {
              klass = (struct EventTradeGoodsEntity_o *)maskPanel[5].klass;
              this->fields.selectTradeGoodsEntity = klass;
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity,
                (int32_t)klass,
                v31,
                v32);
              goto LABEL_18;
            }
          }
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_13316/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_13315/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
        v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v37, v38);
        System_Action___ctor(
          v39,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog_30346252(
            (CommonUI_o *)Instance,
            v35,
            v36,
            v39,
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
            0LL);
          return;
        }
      }
LABEL_25:
      sub_1B64324(maskPanel);
    }
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0LL);
  }
LABEL_18:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager__OnClickTradeStartDecide(
        EventTradeListViewItemManager_o *this,
        int32_t storeIdx,
        int32_t goodsId,
        int32_t createNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x23

  if ( (byte_4A006AD & 1) == 0 )
  {
    sub_1B640C8(&Method_EventTradeListViewItemManager_TradeStartResponse__, *(_QWORD *)&storeIdx);
    sub_1B640C8(&Method_NetworkManager_getRequest_TradeStartRequest___, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    byte_4A006AD = 1;
  }
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_11;
  EventTradeSweetsNumConfirmDialogComponent__Close(tradeSweetsNumConfirmDialog, 0LL);
  tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_11;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 1, 0LL);
    v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    NetworkManager_ResultCallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_TradeStartResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                   v15,
                                                                                   (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeSweetsNumConfirmDialog )
    {
      TradeStartRequest__beginRequest(
        (TradeStartRequest_o *)tradeSweetsNumConfirmDialog,
        this->fields.currentEventId,
        storeIdx,
        goodsId,
        createNum,
        0LL);
      return;
    }
LABEL_11:
    sub_1B64324(tradeSweetsNumConfirmDialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 0, 0LL);
}


void __fastcall EventTradeListViewItemManager__OnClickWithdrawalButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  UnityEngine_GameObject_o *maskPanel; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_GameObject_o **v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  unsigned int klass; // w8
  int v16; // w8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x1
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x21
  EventTradeListViewItem_o *Item; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_bool__o *v24; // x23

  if ( (byte_4A006AB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, obj);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__, v5);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__, v6);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo, v7);
    byte_4A006AB = 1;
  }
  v8 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo, obj, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v8 + 24) = obj;
  v12 = (UnityEngine_GameObject_o **)(v8 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)obj, v13, v14);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( !*v12 )
    goto LABEL_18;
  klass = (unsigned int)(*v12)[5].klass;
  if ( klass <= 5 )
  {
    v16 = 1 << klass;
    if ( (v16 & 0xD) != 0 )
    {
LABEL_15:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
        return;
      }
LABEL_18:
      sub_1B64324(maskPanel);
    }
    if ( (v16 & 0x30) != 0 )
    {
      v17 = Method_EventTradeListViewItemManager_OnClickWithdrawalButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1B640E0(Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
      v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
      if ( !maskPanel )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Init(
        (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)maskPanel,
        this->fields.currentEventId,
        0LL);
      maskPanel = *v12;
      if ( !*v12 )
        goto LABEL_18;
      tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
      Item = EventTradeListViewObject__GetItem((EventTradeListViewObject_o *)maskPanel, v19);
      v24 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v22, v23);
      System_Action_bool____ctor(
        v24,
        (Il2CppObject *)v8,
        Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__,
        0LL);
      if ( !tradeSweetsWithdrawalConfirmDialog )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Open(tradeSweetsWithdrawalConfirmDialog, Item, v24, 0LL);
      goto LABEL_15;
    }
  }
}


void __fastcall EventTradeListViewItemManager__OnClickWithdrawalDecide(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 maskPanel; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  EventTradeListViewItem_o **v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  EventTradeListViewItemManager_o *v19; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x19
  EventTradeListViewItem_o *v24; // x20
  System_Action_bool__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v31; // x21
  const MethodInfo *v32; // x1
  EventTradeListViewItem_o *v33; // x8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x9
  System_Int32_array *v35; // x20

  if ( (byte_4A006B5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, item);
    sub_1B640C8(&Method_EventTradeListViewItemManager_WithdrawalResponse__, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__, v10);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo, v11);
    byte_4A006B5 = 1;
  }
  v12 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo, item, method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v12 + 24) = item;
  v16 = (EventTradeListViewItem_o **)(v12 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)item, v17, v18);
  if ( EventTradeListViewItemManager__IsOverPossessionLimit(v19, v20)
    || EventTradeListViewItemManager__IsOverPresentBoxLimit(this, v21) )
  {
    tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
    v24 = *(EventTradeListViewItem_o **)(v12 + 24);
    v25 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v21, v22);
    System_Action_bool____ctor(
      v25,
      (Il2CppObject *)v12,
      Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__,
      0LL);
    if ( tradeSweetsWithdrawalConfirmDialog )
    {
      EventTradeSweetsWithdrawalConfirmDialogComponent__Resume(tradeSweetsWithdrawalConfirmDialog, v24, v25, 0LL);
      return;
    }
LABEL_18:
    sub_1B64324(maskPanel);
  }
  maskPanel = (__int64)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !maskPanel )
    goto LABEL_18;
  EventTradeSweetsWithdrawalConfirmDialogComponent__Close(
    (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)maskPanel,
    0LL);
  maskPanel = (__int64)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_WithdrawalResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  currentEventId = this->fields.currentEventId;
  v31 = (TradeReceiveRequest_o *)Request_object;
  maskPanel = sub_1B64170(int___TypeInfo, 1LL);
  v33 = *v16;
  if ( !*v16 )
    goto LABEL_18;
  TradeInfo_k__BackingField = v33->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_18;
  v35 = (System_Int32_array *)maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  if ( !*(_DWORD *)(maskPanel + 24) )
    sub_1B6432C(maskPanel, v32);
  *(_DWORD *)(maskPanel + 32) = TradeInfo_k__BackingField->fields.storeIdx;
  maskPanel = EventTradeListViewItem__get_NowCompleteNum(v33, v32);
  if ( !v31 )
    goto LABEL_18;
  TradeReceiveRequest__beginRequest(v31, currentEventId, v35, maskPanel, 1, 0LL);
}


void __fastcall EventTradeListViewItemManager__OnMoveEnd(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  struct UIScrollView_o *v7; // x0

  if ( (byte_4A006A6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A006A6 = 1;
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
        v7 = this->fields.scrollView;
        if ( !v7 )
          sub_1B64324(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v7->klass->vtable._8_UpdateScrollbars.method)(
          v7,
          1LL,
          v7->klass->vtable._9_SetDragAmount.methodPtr);
      }
    }
  }
}


void __fastcall EventTradeListViewItemManager__OpenReconfirmDialog(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItem_o *item,
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
  BaseDialog_o *tradeSweetsWithdrawalConfirmDialog; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  BaseDialog_o **v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  CommonConfirmDialog_ClickDelegate_o *v28; // x25

  if ( (byte_4A006AC & 1) == 0 )
  {
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__, v7);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_13349/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, v9);
    sub_1B640C8(&StringLiteral_3736/*"COMMON_CONFIRM_EXECUTE"*/, v10);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_1B640C8(&StringLiteral_13348/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, v12);
    byte_4A006AC = 1;
  }
  v13 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo, item, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 24) = item;
  v17 = (BaseDialog_o **)(v13 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)item, v18, v19);
  tradeSweetsWithdrawalConfirmDialog = (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !tradeSweetsWithdrawalConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(tradeSweetsWithdrawalConfirmDialog, 0LL) )
    return;
  tradeSweetsWithdrawalConfirmDialog = *v17;
  if ( !*v17 )
    goto LABEL_12;
  *(_DWORD *)(v13 + 32) = EventTradeListViewItem__get_NowCompleteNum(
                            (EventTradeListViewItem_o *)tradeSweetsWithdrawalConfirmDialog,
                            v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13349/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13348/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v26, v27);
  CommonConfirmDialog_ClickDelegate___ctor(
    v28,
    (Il2CppObject *)v13,
    Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_12:
    sub_1B64324(tradeSweetsWithdrawalConfirmDialog);
  CommonUI__OpenConfirmDialog_30345008(
    (CommonUI_o *)Instance,
    v22,
    v23,
    v24,
    v25,
    1,
    v28,
    30,
    26,
    180.0,
    13.0,
    0,
    0,
    0LL);
}


bool __fastcall EventTradeListViewItemManager__OpenReplenishmentDialog(
        EventTradeListViewItemManager_o *this,
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
  System_Collections_Generic_List_EventTradeListViewObject__o *ObjectList; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Func_object__bool__o *v14; // x21
  Il2CppObject *v15; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *Entity; // x21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  EventTradeListViewItem_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t storeIdx; // w22
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  System_Action_int__int__int__o *v26; // x23
  bool v27; // w19

  if ( (byte_4A006B9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__int__int__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___, v6);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__, v7);
    sub_1B640C8(&Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__, v8);
    sub_1B640C8(&System_Func_EventTradeListViewObject__bool__TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A006B9 = 1;
  }
  if ( !this->fields.selectTradeGoodsEntity )
    return 0;
  ObjectList = EventTradeListViewItemManager__get_ObjectList(this, method);
  v14 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventTradeListViewObject__bool__TypeInfo, v12, v13);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields.currentEventId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v15,
                                                                  0LL,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return 0;
  if ( !Entity )
    goto LABEL_22;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventEntity__IsEventPeriod(
                                                                  (EventEntity_o *)Entity,
                                                                  0LL,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v15
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventTradeListViewObject__GetItem(
                                                                        (EventTradeListViewObject_o *)v15,
                                                                        v18)) == 0LL )
  {
LABEL_22:
    sub_1B64324(Master_object);
  }
  v20 = (EventTradeListViewItem_o *)Master_object;
  if ( !*(_QWORD *)&Master_object[1].fields.revision
    || !EventTradeListViewItem__get_IsRefillable((EventTradeListViewItem_o *)Master_object, v19) )
  {
    return 0;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !Master_object )
    goto LABEL_22;
  EventTradeSweetsNumConfirmDialogComponent__Init(
    (EventTradeSweetsNumConfirmDialogComponent_o *)Master_object,
    this->fields.currentEventId,
    0LL);
  TradeInfo_k__BackingField = v20->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_22;
  storeIdx = TradeInfo_k__BackingField->fields.storeIdx;
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  v26 = (System_Action_int__int__int__o *)sub_1B64314(System_Action_int__int__int__TypeInfo, v21, v22);
  System_Action_int__int__int____ctor(
    v26,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
    0LL);
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_22;
  v27 = 1;
  EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v20, storeIdx, v26, 1, 0LL);
  return v27;
}


void __fastcall EventTradeListViewItemManager__OpenRewardDialog(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItemManager_ResData_o *resData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  EventTradeRewardDialogComponent_o *tradeRewardDialog; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  EventTradeRewardDialogComponent_o *v18; // x27
  int32_t eventPointNum; // w26
  int32_t eventPointItemId; // w25
  int32_t currentEventId; // w24
  BattleDropItem_array *resultTradeRewardInfos; // x23
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x19
  BattleDropItem_array *v24; // x22
  System_Action_o *closeCallback; // x20

  if ( (byte_4A006B8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, resData);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__, v5);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo, v6);
    byte_4A006B8 = 1;
  }
  v7 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo, resData, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v9, v10);
  tradeRewardDialog = this->fields.tradeRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradeRewardDialogComponent__Init(tradeRewardDialog, 0LL);
  tradeRewardDialog = (EventTradeRewardDialogComponent_o *)this->fields.tradePointRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradePointRewardDialogComponent__Init((EventTradePointRewardDialogComponent_o *)tradeRewardDialog, v11);
  if ( !resData )
    goto LABEL_14;
  resultEventRewardInfos = resData->fields.resultEventRewardInfos;
  *(_QWORD *)(v7 + 16) = resultEventRewardInfos;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)resultEventRewardInfos, v12, v13);
  oldUserEventPoint = resData->fields.oldUserEventPoint;
  if ( oldUserEventPoint )
  {
    if ( oldUserEventPoint->max_length )
    {
      oldUserEventPoint = (struct UserEventPointEntity_array *)oldUserEventPoint->m_Items[0];
      if ( !oldUserEventPoint )
        goto LABEL_14;
      LODWORD(oldUserEventPoint) = oldUserEventPoint->m_Items[0];
    }
    else
    {
      LODWORD(oldUserEventPoint) = 0;
    }
  }
  *(_DWORD *)(v7 + 32) = (_DWORD)oldUserEventPoint;
  v18 = this->fields.tradeRewardDialog;
  eventPointNum = resData->fields.eventPointNum;
  eventPointItemId = this->fields.eventPointItemId;
  currentEventId = this->fields.currentEventId;
  resultTradeRewardInfos = resData->fields.resultTradeRewardInfos;
  selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
  v24 = *(BattleDropItem_array **)(v7 + 16);
  closeCallback = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v7,
    Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__,
    0LL);
  if ( !v18 )
LABEL_14:
    sub_1B64324(tradeRewardDialog);
  EventTradeRewardDialogComponent__Open(
    v18,
    eventPointNum,
    eventPointItemId,
    currentEventId,
    resultTradeRewardInfos,
    v24,
    selectTradeGoodsEntity,
    selectTradeGoodsEntity == 0LL,
    closeCallback,
    0LL);
}


void __fastcall EventTradeListViewItemManager__OpenSweetsNotificationDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  int64_t PickupList; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  System_Object_array *v13; // x0
  __int64 v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  System_String_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  EventTradePopularSweetsNotificationDialogComponent_o *tradePopularSweetsNotificationDialog; // x19
  EventTradeListViewItem_array *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x22
  EventTradeListViewItemManager_o *v26; // x0
  const MethodInfo *v27; // x1
  int64_t Time; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A006BD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__, v6);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo, v7);
    byte_4A006BD = 1;
  }
  v8 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  PickupList = (int64_t)EventTradeListViewItemManager__GetPickupList(this, v12);
  if ( !PickupList )
    goto LABEL_14;
  v13 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)PickupList,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__);
  *(_QWORD *)(v8 + 24) = v13;
  v14 = v8 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)v13, v15, v16);
  PickupList = EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(this, v17);
  if ( (PickupList & 1) != 0 )
    return;
  if ( !*(_QWORD *)v14 )
    goto LABEL_14;
  if ( !*(_QWORD *)(*(_QWORD *)v14 + 24LL) )
    return;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v18 = System_Int64__ToString((int64_t)&Time, 0LL);
  *(_QWORD *)(v8 + 32) = v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)v18, v19, v20);
  PickupList = (int64_t)this->fields.tradePopularSweetsNotificationDialog;
  if ( !PickupList
    || (EventTradePopularSweetsNotificationDialogComponent__Init(
          (EventTradePopularSweetsNotificationDialogComponent_o *)PickupList,
          0LL),
        tradePopularSweetsNotificationDialog = this->fields.tradePopularSweetsNotificationDialog,
        v22 = *(EventTradeListViewItem_array **)(v8 + 24),
        v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24),
        System_Action___ctor(
          v25,
          (Il2CppObject *)v8,
          Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__,
          0LL),
        PickupList = EventTradeListViewItemManager__GetUpdateTime(v26, v27),
        !tradePopularSweetsNotificationDialog) )
  {
LABEL_14:
    sub_1B64324(PickupList);
  }
  EventTradePopularSweetsNotificationDialogComponent__Open(
    tradePopularSweetsNotificationDialog,
    v22,
    v25,
    PickupList,
    0LL);
}


void __fastcall EventTradeListViewItemManager__RequestListObject(
        EventTradeListViewItemManager_o *this,
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
  int32_t size; // w8
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *current; // x20
  System_Action_o *v15; // x21
  __int64 v16; // x0
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A006A5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__get_Current__, v5);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnMoveEnd__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeListViewObject__get_Count__, v8);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v9);
    byte_4A006A5 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_object__o *)EventTradeListViewItemManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B64324(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      ObjectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__) )
    {
      current = v18.fields._current;
      v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64324(v16);
      EventTradeListViewObject__Init_45862408((EventTradeListViewObject_o *)current, 3, v15, v17);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__);
  }
}


void __fastcall EventTradeListViewItemManager__SetCallBack(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventTradeListViewItemManager__RequestListObject(this, v3);
}


void __fastcall EventTradeListViewItemManager__SetObjectItem(
        EventTradeListViewItemManager_o *this,
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
  __int64 methodPtr_low; // x11
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x21
  __int64 v18; // x0
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_object__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_object__o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_object__o *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_object__o *v31; // x24
  const MethodInfo *v32; // x5

  v4 = obj;
  if ( (byte_4A006A4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_EventTradeListViewObject__TypeInfo, obj);
    sub_1B640C8(&System_Action_TypeInfo, v6);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickReceiveButton__, v7);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__, v8);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__, v9);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__, v10);
    sub_1B640C8(&Method_EventTradeListViewItemManager_OnMoveEnd__, v11);
    sub_1B640C8(&EventTradeListViewObject_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    byte_4A006A4 = 1;
  }
  if ( v4 )
  {
    methodPtr_low = LOBYTE(EventTradeListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (EventTradeListViewObject_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewObject_TypeInfo )
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
    v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0LL);
    if ( !v4 )
      sub_1B64324(v18);
    EventTradeListViewObject__Init_45862408((EventTradeListViewObject_o *)v4, 3, v17, v19);
    v22 = (System_Action_object__o *)sub_1B64314(System_Action_EventTradeListViewObject__TypeInfo, v20, v21);
    System_Action_object____ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickTradeStartButton__,
      0LL);
    v25 = (System_Action_object__o *)sub_1B64314(System_Action_EventTradeListViewObject__TypeInfo, v23, v24);
    System_Action_object____ctor(
      v25,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReceiveButton__,
      0LL);
    v28 = (System_Action_object__o *)sub_1B64314(System_Action_EventTradeListViewObject__TypeInfo, v26, v27);
    System_Action_object____ctor(
      v28,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__,
      0LL);
    v31 = (System_Action_object__o *)sub_1B64314(System_Action_EventTradeListViewObject__TypeInfo, v29, v30);
    System_Action_object____ctor(
      v31,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__,
      0LL);
    EventTradeListViewObject__SetOnClickAction(
      (EventTradeListViewObject_o *)v4,
      (System_Action_EventTradeListViewObject__o *)v22,
      (System_Action_EventTradeListViewObject__o *)v25,
      (System_Action_EventTradeListViewObject__o *)v28,
      (System_Action_EventTradeListViewObject__o *)v31,
      v32);
  }
}


void __fastcall EventTradeListViewItemManager__SetReceiveAllButton(
        EventTradeListViewItemManager_o *this,
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
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeButtonBlinkEffect_k__BackingField; // x20
  ServantStatusBattleListViewItem_o *p_tradeButtonBlinkEffect; // x19
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x20

  if ( (byte_4A0069F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_3442/*"CHECK_TRADE_BUTTON_LABEL"*/, v6);
    sub_1B640C8(&StringLiteral_17442/*"btn_getreward"*/, v7);
    byte_4A0069F = 1;
  }
  currentEventId = this->fields.currentEventId;
  receiveAllButtonSprite = this->fields.receiveAllButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37544692(currentEventId, receiveAllButtonSprite, (System_String_o *)StringLiteral_17442/*"btn_getreward"*/, 0LL);
  receiveAllButtonLabel = this->fields.receiveAllButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveAllButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3442/*"CHECK_TRADE_BUTTON_LABEL"*/, 0LL);
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
        TradeButtonBlinkEffect_k__BackingField = (Il2CppObject *)assetManager->fields._TradeButtonBlinkEffect_k__BackingField;
        p_tradeButtonBlinkEffect = (ServantStatusBattleListViewItem_o *)&this->fields.tradeButtonBlinkEffect;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)receiveAllButton, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v17 = UnityEngine_Object__Instantiate_object__49003980(
                TradeButtonBlinkEffect_k__BackingField,
                transform,
                (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        p_tradeButtonBlinkEffect->klass = (ServantStatusBattleListViewItem_c *)v17;
        sub_1B6406C(p_tradeButtonBlinkEffect, (int32_t)v17, v18, v19);
        receiveAllButton = (__int64)p_tradeButtonBlinkEffect->klass;
        if ( p_tradeButtonBlinkEffect->klass )
        {
          receiveAllButton = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)receiveAllButton,
                                        0LL);
          v21 = (UnityEngine_Transform_o *)receiveAllButton;
          if ( !byte_49F7116 )
          {
            receiveAllButton = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v20);
            byte_49F7116 = 1;
          }
          if ( v21 )
          {
            UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            receiveAllButton = (__int64)p_tradeButtonBlinkEffect->klass;
            if ( p_tradeButtonBlinkEffect->klass )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButton, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1B64324(receiveAllButton);
  }
}


void __fastcall EventTradeListViewItemManager__SetTradeObject(
        EventTradeListViewItemManager_o *this,
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
  UnityEngine_Object_o *tradeRewardDialog; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *tradePointRewardDialog; // x20
  struct EventTradeAssetManager_o *v21; // x8
  Il2CppObject *TradePointRewardDialog_k__BackingField; // x20
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
  struct EventTradeAssetManager_o *v28; // x8
  Il2CppObject *TradeSweetsNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  struct EventTradeAssetManager_o *v35; // x8
  Il2CppObject *TradeSweetsWithdrawalConfirmDialog_k__BackingField; // x20
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *v40; // x2
  UnityEngine_Object_o *tradePopularSweetsNotificationDialog; // x20
  struct EventTradeAssetManager_o *v42; // x8
  Il2CppObject *TradePopularSweetsNotificationDialog_k__BackingField; // x20
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  const MethodInfo *v47; // x2
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  struct EventTradeAssetManager_o *v49; // x8
  Il2CppObject *TradePickupInfoBoard_k__BackingField; // x20
  struct EventTradePickupInfoDispControl_o **p_currentPickupInfoDispControl; // x20
  Il2CppObject *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  UnityEngine_GameObject_o *v55; // x0
  const MethodInfo *v56; // x2
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  struct EventTradeAssetManager_o *v58; // x8
  Il2CppObject *v59; // x20
  struct EventTradePickupInfoDispControl_o **p_nextPickupInfoDispControl; // x20
  Il2CppObject *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  UnityEngine_GameObject_o *v64; // x1
  const MethodInfo *v65; // x2

  if ( (byte_4A0069E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_9366/*"NextTradePickupInfoBoard"*/, v10);
    sub_1B640C8(&StringLiteral_4919/*"CurrentTradePickupInfoBoard"*/, v11);
    byte_4A0069E = 1;
  }
  tradeRewardDialog = (UnityEngine_Object_o *)this->fields.tradeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_66;
    TradeRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._TradeRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeRewardDialog_k__BackingField,
                                               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___);
    this->fields.tradeRewardDialog = (struct EventTradeRewardDialogComponent_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeRewardDialog,
      (int32_t)Component_object,
      v17,
      v18);
    EventTradeListViewItemManager__LocateDialogToTradePanel(this, (BaseDialog_o *)this->fields.tradeRewardDialog, v19);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v21 = this->fields.assetManager;
    if ( !v21 )
      goto LABEL_66;
    TradePointRewardDialog_k__BackingField = (Il2CppObject *)v21->fields._TradePointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePointRewardDialog_k__BackingField,
                                               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v23 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___);
    this->fields.tradePointRewardDialog = (struct EventTradePointRewardDialogComponent_o *)v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tradePointRewardDialog, (int32_t)v23, v24, v25);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePointRewardDialog,
      v26);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsNumConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v28 = this->fields.assetManager;
    if ( !v28 )
      goto LABEL_66;
    TradeSweetsNumConfirmDialog_k__BackingField = (Il2CppObject *)v28->fields._TradeSweetsNumConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsNumConfirmDialog_k__BackingField,
                                               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v30 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___);
    this->fields.tradeSweetsNumConfirmDialog = (struct EventTradeSweetsNumConfirmDialogComponent_o *)v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsNumConfirmDialog, (int32_t)v30, v31, v32);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsNumConfirmDialog,
      v33);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsWithdrawalConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v35 = this->fields.assetManager;
    if ( !v35 )
      goto LABEL_66;
    TradeSweetsWithdrawalConfirmDialog_k__BackingField = (Il2CppObject *)v35->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsWithdrawalConfirmDialog_k__BackingField,
                                               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v37 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___);
    this->fields.tradeSweetsWithdrawalConfirmDialog = (struct EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v37;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsWithdrawalConfirmDialog,
      (int32_t)v37,
      v38,
      v39);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog,
      v40);
  }
  tradePopularSweetsNotificationDialog = (UnityEngine_Object_o *)this->fields.tradePopularSweetsNotificationDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             tradePopularSweetsNotificationDialog,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v42 = this->fields.assetManager;
    if ( !v42 )
      goto LABEL_66;
    TradePopularSweetsNotificationDialog_k__BackingField = (Il2CppObject *)v42->fields._TradePopularSweetsNotificationDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePopularSweetsNotificationDialog_k__BackingField,
                                               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v44 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___);
    this->fields.tradePopularSweetsNotificationDialog = (struct EventTradePopularSweetsNotificationDialogComponent_o *)v44;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradePopularSweetsNotificationDialog,
      (int32_t)v44,
      v45,
      v46);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePopularSweetsNotificationDialog,
      v47);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(currentPickupInfoDispControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v49 = this->fields.assetManager;
    if ( !v49 )
      goto LABEL_66;
    TradePickupInfoBoard_k__BackingField = (Il2CppObject *)v49->fields._TradePickupInfoBoard_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePickupInfoBoard_k__BackingField,
                                               (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    p_currentPickupInfoDispControl = &this->fields.currentPickupInfoDispControl;
    v52 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
    this->fields.currentPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v52;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentPickupInfoDispControl, (int32_t)v52, v53, v54);
    gameObject = (UnityEngine_GameObject_o *)this->fields.currentPickupInfoDispControl;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_4919/*"CurrentTradePickupInfoBoard"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)*p_currentPickupInfoDispControl;
    if ( !*p_currentPickupInfoDispControl )
      goto LABEL_66;
    v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    EventTradeListViewItemManager__LocateObjectToTradePanel(this, v55, v56);
  }
  nextPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.nextPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(nextPickupInfoDispControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v58 = this->fields.assetManager;
    if ( v58 )
    {
      v59 = (Il2CppObject *)v58->fields._TradePickupInfoBoard_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                 v59,
                                                 (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( gameObject )
      {
        p_nextPickupInfoDispControl = &this->fields.nextPickupInfoDispControl;
        v61 = UnityEngine_GameObject__GetComponent_object_(
                gameObject,
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
        this->fields.nextPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v61;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.nextPickupInfoDispControl,
          (int32_t)v61,
          v62,
          v63);
        gameObject = (UnityEngine_GameObject_o *)this->fields.nextPickupInfoDispControl;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_9366/*"NextTradePickupInfoBoard"*/, 0LL);
            gameObject = (UnityEngine_GameObject_o *)*p_nextPickupInfoDispControl;
            if ( *p_nextPickupInfoDispControl )
            {
              v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              EventTradeListViewItemManager__LocateObjectToTradePanel(this, v64, v65);
              return;
            }
          }
        }
      }
    }
LABEL_66:
    sub_1B64324(gameObject);
  }
}


void __fastcall EventTradeListViewItemManager__TradeReceiveResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  Il2CppObject *v17; // x20
  EventTradeStoreMaster_o *v18; // x20
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_4A006B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___, v6);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v8);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v9);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v10);
    byte_4A006B6 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v11);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v14,
      v15);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v16);
    v17 = (Il2CppObject *)System_String__Concat_61386656(
                            (System_String_o *)StringLiteral_15744/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16000/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v17,
                                                 (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel
      || (v18 = Master_object,
          (Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this->fields.touchPanel,
                                                        0LL)) == 0LL)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel) == 0LL)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL),
          EventTradeListViewItemManager__RequestListObject(this, v19),
          !v18) )
    {
LABEL_15:
      sub_1B64324(Master_object);
    }
    if ( !LODWORD(v18->fields._MasterName_k__BackingField) )
      sub_1B6432C(Master_object, v20);
    EventTradeListViewItemManager__OpenRewardDialog(
      this,
      (EventTradeListViewItemManager_ResData_o *)v18->fields.list,
      v21);
    ActionExtensions__Call(this->fields.tradeCallback, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager__TradeReplenishmentResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_4A006B2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v6);
    byte_4A006B2 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v7);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v10,
      v11);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v12);
    Master_object = (EventTradeStoreMaster_o *)this->fields.touchPanel;
    if ( !Master_object )
      goto LABEL_15;
    Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Master_object,
                                                 0LL);
    if ( !Master_object )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel;
    if ( !Master_object
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL),
          EventTradeListViewItemManager__RequestListObject(this, v13),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0LL)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0LL),
          !playVoiceAction) )
    {
LABEL_15:
      sub_1B64324(Master_object);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, EventTradeStoreMaster_o *, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
      playVoiceAction->fields.original_method_info,
      svtId,
      Master_object,
      0LL,
      *(_QWORD *)&playVoiceAction->fields.extra_arg);
    closeDialogCallBack = this->fields.closeDialogCallBack;
    if ( closeDialogCallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeDialogCallBack->fields.m_target)(
        closeDialogCallBack->fields.original_method_info,
        *(_QWORD *)&closeDialogCallBack->fields.extra_arg);
    ActionExtensions__Call(this->fields.tradeCallback, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager__TradeStartResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20

  if ( (byte_4A006B1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v6);
    byte_4A006B1 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v7);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_13;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v10,
      v11);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v12);
    Master_object = (EventTradeStoreMaster_o *)this->fields.touchPanel;
    if ( !Master_object )
      goto LABEL_13;
    Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Master_object,
                                                 0LL);
    if ( !Master_object )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel;
    if ( !Master_object
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL),
          EventTradeListViewItemManager__RequestListObject(this, v13),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0LL)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeStartVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0LL),
          !playVoiceAction) )
    {
LABEL_13:
      sub_1B64324(Master_object);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, EventTradeStoreMaster_o *, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
      playVoiceAction->fields.original_method_info,
      svtId,
      Master_object,
      0LL,
      *(_QWORD *)&playVoiceAction->fields.extra_arg);
    ActionExtensions__Call(this->fields.tradeCallback, 0LL);
  }
}


bool __fastcall EventTradeListViewItemManager__TryGetAvailableStoreIdx(
        EventTradeListViewItemManager_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x2
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x24
  unsigned __int64 v15; // x25
  __int64 v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  EventTradeStoreEntity_o *v19; // x1
  __int64 v20; // x21
  System_Int32_array *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  System_Func_int__bool__o *v24; // x23
  struct EventTradeStoreEntity_array *v25; // x8
  __int64 v26; // x9
  EventTradeStoreEntity_o *v27; // x8
  int32_t *v29; // [xsp+8h] [xbp-78h]
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-70h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A006B0 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_int____75709408, storeIdx);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventTradeMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v7);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__, v8);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo, v9);
    byte_4A006B0 = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  *storeIdx = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
      v15 = 0LL;
      while ( 1 )
      {
        v16 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo, v12, v13);
        System_Object___ctor((Il2CppObject *)v16, 0LL);
        if ( v15 >= tradeStoreEntities->max_length )
          goto LABEL_27;
        if ( !v16 )
          goto LABEL_26;
        v19 = tradeStoreEntities->m_Items[v15];
        *(_QWORD *)(v16 + 16) = v19;
        v20 = v16 + 16;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)v19, v17, v18);
        v21 = usedStoreIdx;
        v24 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v22, v23);
        System_Func_int__bool____ctor(
          v24,
          (Il2CppObject *)v16,
          Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__,
          0LL);
        Master_object = (UserEventTradeMaster_o *)BasicHelper__Any_int__48383472(
                                                    v21,
                                                    (System_Func_T__bool__o *)v24,
                                                    (const MethodInfo_2E245F0 *)Method_BasicHelper_Any_int____75709408);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        if ( (__int64)++v15 >= (int)tradeStoreEntities->max_length )
          return 0;
      }
      if ( *(_QWORD *)v20 )
      {
        *v29 = *(_DWORD *)(*(_QWORD *)v20 + 20LL);
        return 1;
      }
LABEL_26:
      sub_1B64324(Master_object);
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
    sub_1B6432C(Master_object, v11);
  v27 = v25->m_Items[0];
  if ( !v27 )
    goto LABEL_26;
  *storeIdx = v27->fields.idx;
  return 1;
}


void __fastcall EventTradeListViewItemManager__UpdateNoticeButtonDisp(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *tradeNoticeBtnSp; // x0
  __int64 *v5; // x8

  if ( (byte_4A006C2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17456/*"btn_on"*/, method);
    sub_1B640C8(&StringLiteral_17455/*"btn_off"*/, v3);
    byte_4A006C2 = 1;
  }
  tradeNoticeBtnSp = this->fields.tradeNoticeBtnSp;
  if ( !tradeNoticeBtnSp )
    sub_1B64324(0LL);
  if ( this->fields.isButtonOn )
    v5 = &StringLiteral_17456/*"btn_on"*/;
  else
    v5 = &StringLiteral_17455/*"btn_off"*/;
  UISprite__set_spriteName(tradeNoticeBtnSp, (System_String_o *)*v5, 0LL);
}


void __fastcall EventTradeListViewItemManager__UpdateReceiveAllButtonState(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventTradeListViewItemManager___c_c *v8; // x0
  System_Collections_Generic_List_T__o *itemList; // x20
  System_Func_object__bool__o *_9__85_0; // x21
  Il2CppObject *v11; // x22
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UIWidget_o *receiveAllButtonLabel; // x0
  long double v16; // q0
  struct UICommonButton_o *receiveAllButton; // x8
  char v18; // w20
  __int64 v19; // x1
  float v20; // s8
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A006BF & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_ListViewItem___, method);
    sub_1B640C8(&System_Func_ListViewItem__bool__TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__, v6);
    sub_1B640C8(&EventTradeListViewItemManager___c_TypeInfo, v7);
    byte_4A006BF = 1;
  }
  v8 = EventTradeListViewItemManager___c_TypeInfo;
  itemList = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v8 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__85_0 = (System_Func_object__bool__o *)v8->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__85_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ListViewItem__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(
      _9__85_0,
      v11,
      Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_ListViewItem__bool__o *)_9__85_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v13, v14);
  }
  receiveAllButtonLabel = (UIWidget_o *)BasicHelper__Any_object_(
                                          itemList,
                                          (System_Func_T__bool__o *)_9__85_0,
                                          (const MethodInfo_2E24870 *)Method_BasicHelper_Any_ListViewItem___);
  receiveAllButton = this->fields.receiveAllButton;
  if ( !receiveAllButton )
    goto LABEL_23;
  v18 = (char)receiveAllButtonLabel;
  LODWORD(v16) = 0.5;
  v19 = ((unsigned __int8)receiveAllButtonLabel & 1) != 0 ? 0LL : 3LL;
  v20 = ((unsigned __int8)receiveAllButtonLabel & 1) != 0 ? 1.0 : 0.5;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer, long double))receiveAllButton->klass->vtable._14_SetState.method)(
    this->fields.receiveAllButton,
    v19,
    1LL,
    receiveAllButton->klass->vtable._15_OnPress.methodPtr,
    v16);
  receiveAllButtonLabel = (UIWidget_o *)this->fields.receiveAllButtonLabel;
  if ( !receiveAllButtonLabel )
    goto LABEL_23;
  v22.fields.a = 1.0;
  v22.fields.r = v20;
  v22.fields.g = v20;
  v22.fields.b = v20;
  UIWidget__set_color(receiveAllButtonLabel, v22, 0LL);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0LL, 0LL) )
  {
    receiveAllButtonLabel = (UIWidget_o *)this->fields.tradeButtonBlinkEffect;
    if ( receiveAllButtonLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButtonLabel, v18 & 1, 0LL);
      return;
    }
LABEL_23:
    sub_1B64324(receiveAllButtonLabel);
  }
}


void __fastcall EventTradeListViewItemManager__UpdateTradeQuoteLb(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v2; // x19
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
  UILabel_o *tradeQuotaLb; // x19
  System_String_o *v15; // x20
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  int v18; // [xsp+8h] [xbp-48h] BYREF
  int v19; // [xsp+Ch] [xbp-44h] BYREF
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-40h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4A006C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventTradeMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_13336/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/, v6);
    this = (EventTradeListViewItemManager_o *)sub_1B640C8(&StringLiteral_13335/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/, v7);
    byte_4A006C5 = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  tradeStoreEntities = v2->fields.tradeStoreEntities;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradeListViewItemManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !this )
    goto LABEL_20;
  if ( !UserEventTradeMaster__TryGetEntity((UserEventTradeMaster_o *)this, &entity, v2->fields.currentEventId, 0LL) )
    goto LABEL_12;
  this = (EventTradeListViewItemManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  this = (EventTradeListViewItemManager_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0LL);
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
  v12 = (System_String_o **)(max_length == v10 ? &StringLiteral_13336/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_13335/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/);
  v13 = *v12;
  tradeQuotaLb = v2->fields.tradeQuotaLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get(v13, 0LL);
  v19 = v11;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = max_length;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  this = (EventTradeListViewItemManager_o *)System_String__Format_61389768(v15, v16, v17, 0LL);
  if ( !tradeQuotaLb )
LABEL_20:
    sub_1B64324(this);
  UILabel__set_text(tradeQuotaLb, (System_String_o *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager__WithdrawalResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  Il2CppObject *v17; // x20
  EventTradeStoreMaster_o *v18; // x20
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  EventTradeListViewItemManager_ResData_o *list; // x1
  struct BattleDropItem_array *resultTradeRewardInfos; // x8

  if ( (byte_4A006B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___, v6);
    sub_1B640C8(&JsonManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v8);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v9);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v10);
    byte_4A006B7 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v11);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_19;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v14,
      v15);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v16);
    v17 = (Il2CppObject *)System_String__Concat_61386656(
                            (System_String_o *)StringLiteral_15744/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16000/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v17,
                                                 (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel )
      goto LABEL_19;
    v18 = Master_object;
    Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.touchPanel,
                                                 0LL);
    if ( !Master_object )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel;
    if ( !Master_object )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    EventTradeListViewItemManager__RequestListObject(this, v19);
    if ( !v18 )
      goto LABEL_19;
    if ( !LODWORD(v18->fields._MasterName_k__BackingField) )
      sub_1B6432C(Master_object, v20);
    list = (EventTradeListViewItemManager_ResData_o *)v18->fields.list;
    if ( !list || (resultTradeRewardInfos = list->fields.resultTradeRewardInfos) == 0LL )
LABEL_19:
      sub_1B64324(Master_object);
    if ( *(_QWORD *)&resultTradeRewardInfos->max_length )
      EventTradeListViewItemManager__OpenRewardDialog(this, list, v21);
    ActionExtensions__Call(this->fields.tradeCallback, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager___CheckOpenQuest_b__80_0(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *closeDialogCallBack; // x8

  closeDialogCallBack = this->fields.closeDialogCallBack;
  if ( closeDialogCallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeDialogCallBack->fields.m_target)(
      closeDialogCallBack->fields.original_method_info,
      *(_QWORD *)&closeDialogCallBack->fields.extra_arg);
}


void __fastcall EventTradeListViewItemManager___Init_b__53_0(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  EventTradeListViewItemManager__SetTradeObject(this, method);
  EventTradeListViewItemManager__CreateList(this, v3);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  EventTradeListViewItemManager__RequestListObject(this, v4);
  EventTradeListViewItemManager__OpenSweetsNotificationDialog(this, v5);
  EventTradeListViewItemManager__SetReceiveAllButton(this, v6);
  EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v7);
  EventTradeListViewItemManager__DispPickupInfoBoard(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager___IsOverPresentBoxLimit_b__87_2(
        EventTradeListViewItemManager_o *this,
        bool isOpenPresentBox,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x20

  if ( (byte_4A006C6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isOpenPresentBox);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__, v5);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo, v6);
    byte_4A006C6 = 1;
  }
  v7 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo, isOpenPresentBox, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v9, v10),
        *(_BYTE *)(v7 + 16) = isOpenPresentBox,
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v7,
          Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_1B64324(v8);
  }
  PresentBoxOverDialog__Close_45770872(presentBoxOverDlg, v14, 0LL);
}


void __fastcall EventTradeListViewItemManager___OnClickTradeStartButton_b__62_0(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
}


bool __fastcall EventTradeListViewItemManager___OpenReplenishmentDialog_b__79_0(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *x,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v3; // x19
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  struct EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x9

  if ( !x
    || (v3 = this,
        (this = (EventTradeListViewItemManager_o *)EventTradeListViewObject__GetItem(x, (const MethodInfo *)x)) == 0LL)
    || (dragParentObject = this->fields.dragParentObject) == 0LL
    || (selectTradeGoodsEntity = v3->fields.selectTradeGoodsEntity) == 0LL )
  {
    sub_1B64324(this);
  }
  return dragParentObject->fields.m_CachedPtr == selectTradeGoodsEntity->fields.id;
}


System_Collections_Generic_List_EventTradeListViewObject__o *__fastcall EventTradeListViewItemManager__get_ObjectList(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x22
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  EventTradeListViewItemManager___c_c *v23; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  System_Func_object__bool__o *_9__48_0; // x22
  Il2CppObject *v26; // x23
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_object__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_object__o *v34; // x22

  if ( (byte_4A0069D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_GameObject___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_GameObject___, v5);
    sub_1B640C8(&System_Func_GameObject__bool__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__ForEach__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_EventTradeListViewObject__TypeInfo, v9);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__, v10);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__, v11);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo, v12);
    sub_1B640C8(&EventTradeListViewItemManager___c_TypeInfo, v13);
    byte_4A0069D = 1;
  }
  v14 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTradeListViewObject__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 16) = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v17, v19, v20);
  v23 = EventTradeListViewItemManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v23 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__bool__o *)v23->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__48_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GameObject__bool__TypeInfo, v21, v22);
    System_Func_object__bool____ctor(
      _9__48_0,
      v26,
      Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_GameObject__bool__o *)_9__48_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v28, v29);
  }
  v30 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__48_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_GameObject___);
  v31 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v30,
                                                       (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v34 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, v32, v33);
  System_Action_object____ctor(
    v34,
    (Il2CppObject *)v14,
    Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__,
    0LL);
  if ( !v31 )
LABEL_12:
    sub_1B64324(v18);
  System_Collections_Generic_List_object___ForEach(
    v31,
    (System_Action_T__o *)v34,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  return *(System_Collections_Generic_List_EventTradeListViewObject__o **)(v14 + 16);
}


void __fastcall EventTradeListViewItemManager_ResData___ctor(
        EventTradeListViewItemManager_ResData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A006C7 & 1) == 0 )
  {
    sub_1B640C8(&EventTradeListViewItemManager___c_TypeInfo, v1);
    byte_4A006C7 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventTradeListViewItemManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventTradeListViewItemManager___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventTradeListViewItemManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall EventTradeListViewItemManager___c___ctor(
        EventTradeListViewItemManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_0(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  Il2CppObject *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4A006CA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__, v5);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo, v6);
    byte_4A006CA = 1;
  }
  v7 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v8);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_1(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  Il2CppObject *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4A006CB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__, v5);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo, v6);
    byte_4A006CB = 1;
  }
  v7 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v8);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_4(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  Il2CppObject *Instance; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4A006CC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__, v5);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo, v6);
    byte_4A006CC = 1;
  }
  v7 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo, *(_QWORD *)&result, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v7,
          Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v8);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v12, 0LL);
}


bool __fastcall EventTradeListViewItemManager___c___IsOverPresentBoxLimit_b__87_0(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  __int64 v5; // x8

  if ( (byte_4A006CD & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1B640C8(&EventTradeListViewItem_TypeInfo, item);
    byte_4A006CD = 1;
  }
  if ( !item )
LABEL_12:
    sub_1B64324(this);
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
  {
    sub_1B645E4(item);
    goto LABEL_12;
  }
  v5 = *(_QWORD *)&item[1].fields.sortIndex;
  if ( !v5 )
    return 0;
  if ( *(int *)(v5 + 32) <= 0 )
    return EventTradeListViewItem__get_NowCompleteNum(
             (EventTradeListViewItem_o *)item,
             (const MethodInfo *)EventTradeListViewItem_TypeInfo) > 0;
  return 1;
}


EventTradeGoodsEntity_o *__fastcall EventTradeListViewItemManager___c___IsOverPresentBoxLimit_b__87_1(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9

  if ( (byte_4A006CE & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1B640C8(&EventTradeListViewItem_TypeInfo, item);
    byte_4A006CE = 1;
  }
  if ( !item )
LABEL_8:
    sub_1B64324(this);
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
  {
    sub_1B645E4(item);
    goto LABEL_8;
  }
  return (EventTradeGoodsEntity_o *)item[1].monitor;
}


bool __fastcall EventTradeListViewItemManager___c___UpdateReceiveAllButtonState_b__85_0(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventTradeListViewItem_o *v3; // x19
  __int64 methodPtr_low; // x10
  const MethodInfo *v5; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8

  v3 = (EventTradeListViewItem_o *)item;
  if ( (byte_4A006C9 & 1) == 0 )
  {
    sub_1B640C8(&EventTradeListViewItem_TypeInfo, item);
    byte_4A006C9 = 1;
  }
  if ( !v3 )
    return 0;
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0;
  if ( (EventTradeListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
    v3 = 0LL;
  if ( !v3 )
    return 0;
  EventTradeListViewItem__UpdateTradeUserInfo(v3, (const MethodInfo *)item);
  TradeInfo_k__BackingField = v3->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    return 0;
  if ( TradeInfo_k__BackingField->fields.getNum <= 0 )
    return EventTradeListViewItem__get_NowCompleteNum(v3, v5) > 0;
  return 1;
}


bool __fastcall EventTradeListViewItemManager___c___get_ObjectList_b__48_0(
        EventTradeListViewItemManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4A006C8 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, go);
    byte_4A006C8 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0LL, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass48_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass48_0___get_ObjectList_b__1(
        EventTradeListViewItemManager___c__DisplayClass48_0_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  EventTradeListViewItemManager___c__DisplayClass48_0_o *v4; // x19
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *list; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  EventTradeListViewItemManager___c__DisplayClass48_0_o *v12; // x1
  Il2CppClass **v13; // x0

  v4 = this;
  if ( (byte_4A006CF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___, go);
    this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)sub_1B640C8(
                                                                      &Method_System_Collections_Generic_List_EventTradeListViewObject__Add__,
                                                                      v5);
    byte_4A006CF = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          go,
                                                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___),
        !list)
    || (items = list->fields._items,
        v10 = Method_System_Collections_Generic_List_EventTradeListViewObject__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_1B64324(this);
  }
  size = list->fields._size;
  v12 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    list->fields._size = size + 1;
    v13 = &items->obj.klass + size;
    v13[4] = (Il2CppClass *)v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
  }
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass65_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager___c__DisplayClass65_0___OnClickWithdrawalButton_b__0(
        EventTradeListViewItemManager___c__DisplayClass65_0_o *this,
        bool value,
        const MethodInfo *method)
{
  struct EventTradeListViewItemManager_o *_4__this; // x19
  const MethodInfo *v4; // x2

  _4__this = this->fields.__4__this;
  if ( value )
  {
    this = (EventTradeListViewItemManager___c__DisplayClass65_0_o *)this->fields.obj;
    if ( this )
    {
      this = (EventTradeListViewItemManager___c__DisplayClass65_0_o *)EventTradeListViewObject__GetItem(
                                                                        (EventTradeListViewObject_o *)this,
                                                                        (const MethodInfo *)value);
      if ( _4__this )
      {
        EventTradeListViewItemManager__OpenReconfirmDialog(_4__this, (EventTradeListViewItem_o *)this, v4);
        return;
      }
    }
LABEL_8:
    sub_1B64324(this);
  }
  if ( !_4__this )
    goto LABEL_8;
  this = (EventTradeListViewItemManager___c__DisplayClass65_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass66_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager___c__DisplayClass66_0___OpenReconfirmDialog_b__0(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Instance; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_4A006D0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, decide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__, v6);
    sub_1B640C8(&EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo, v7);
    byte_4A006D0 = 1;
  }
  v8 = sub_1B64314(EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo, decide, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11),
        *(_BYTE *)(v8 + 16) = decide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v8,
          Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B64324(v9);
  }
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass66_0___OpenReconfirmDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  EventTradeListViewItemManager__OnClickWithdrawalDecide(this->fields.__4__this, this->fields.item, v2);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass66_1___ctor(
        EventTradeListViewItemManager___c__DisplayClass66_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass66_1___OpenReconfirmDialog_b__1(
        EventTradeListViewItemManager___c__DisplayClass66_1_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  EventTradeListViewItemManager___c__DisplayClass66_1_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *CS___8__locals1; // x9
  struct EventTradeListViewItemManager_o *_4__this; // x8
  struct EventTradeListViewItem_o *item; // x9
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  const MethodInfo *v14; // x1
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v15; // x8
  int32_t oldCompleteNum; // w20
  const MethodInfo *v17; // x2
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v18; // x8
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v23; // x23
  System_Action_o *_9__2; // x22
  EventTradeListViewItemManager___c__DisplayClass66_1_o *v25; // x19
  int32_t v26; // w2
  int32_t v27; // w3

  v4 = this;
  if ( (byte_4A006D1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&string_TypeInfo, v7);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__, v8);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1B640C8(&StringLiteral_13334/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/, v9);
    byte_4A006D1 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_23;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( v4->fields.decide )
  {
    item = CS___8__locals1->fields.item;
    if ( !item )
      goto LABEL_23;
    if ( !_4__this )
      goto LABEL_23;
    TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
    _4__this->fields.selectTradeGoodsEntity = TradeGoodsEntity_k__BackingField;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&_4__this->fields.selectTradeGoodsEntity,
      (int32_t)TradeGoodsEntity_k__BackingField,
      v2,
      v3);
    v15 = v4->fields.CS___8__locals1;
    if ( !v15 )
      goto LABEL_23;
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v15->fields.item;
    if ( !this )
      goto LABEL_23;
    oldCompleteNum = v15->fields.oldCompleteNum;
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)EventTradeListViewItem__get_NowCompleteNum(
                                                                      (EventTradeListViewItem_o *)this,
                                                                      v14);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v18 = v4->fields.CS___8__locals1;
      if ( v18 )
      {
        this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v18->fields.__4__this;
        if ( this )
        {
          EventTradeListViewItemManager__OnClickWithdrawalDecide(
            (EventTradeListViewItemManager_o *)this,
            v18->fields.item,
            v17);
          return;
        }
      }
LABEL_23:
      sub_1B64324(this);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13334/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
                                                                      0LL);
    v23 = v4->fields.CS___8__locals1;
    if ( !v23 )
      goto LABEL_23;
    _9__2 = v23->fields.__9__2;
    v25 = this;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v23,
        Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__,
        0LL);
      v23->fields.__9__2 = _9__2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v23->fields.__9__2, (int32_t)_9__2, v26, v27);
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
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)_4__this->fields.tradeSweetsWithdrawalConfirmDialog;
    if ( !this )
      goto LABEL_23;
    EventTradeSweetsWithdrawalConfirmDialogComponent__Close(
      (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)this,
      0LL);
  }
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass70_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTradeListViewItemManager___c__DisplayClass70_0___TryGetAvailableStoreIdx_b__0(
        EventTradeListViewItemManager___c__DisplayClass70_0_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct EventTradeStoreEntity_o *storeEntity; // x8

  storeEntity = this->fields.storeEntity;
  if ( !storeEntity )
    sub_1B64324(this);
  return storeEntity->fields.idx == idx;
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass75_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass75_0___OnClickWithdrawalDecide_b__0(
        EventTradeListViewItemManager___c__DisplayClass75_0_o *this,
        bool onDecide,
        const MethodInfo *method)
{
  struct EventTradeListViewItemManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( onDecide )
  {
    if ( _4__this )
    {
      EventTradeListViewItemManager__OpenReconfirmDialog(_4__this, this->fields.item, method);
      return;
    }
LABEL_7:
    sub_1B64324(_4__this);
  }
  if ( !_4__this )
    goto LABEL_7;
  _4__this = (struct EventTradeListViewItemManager_o *)_4__this->fields.maskPanel;
  if ( !_4__this )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__0(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x6
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  struct EventTradeListViewItemManager_o *_4__this; // x8
  EventTradePointRewardDialogComponent_o *tradePointRewardDialog; // x21
  int32_t eventPointItemId; // w22
  int32_t currentEventId; // w23
  struct EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x26
  System_Action_o *_9__1; // x24
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Action_BattleDropItem____int__Action__o *rewardDialogCallBack; // x23
  System_Action_o *_9__2; // x21
  int32_t v18; // w2
  int32_t v19; // w3

  v4 = this;
  if ( (byte_4A006D2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__, v5);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B640C8(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__,
                                                                      v6);
    byte_4A006D2 = 1;
  }
  resultEventRewardInfos = v4->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_14;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    tradePointRewardDialog = _4__this->fields.tradePointRewardDialog;
    eventPointItemId = _4__this->fields.eventPointItemId;
    currentEventId = _4__this->fields.currentEventId;
    selectTradeGoodsEntity = _4__this->fields.selectTradeGoodsEntity;
    _9__1 = v4->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)v4,
        Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__,
        0LL);
      v4->fields.__9__1 = _9__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v14, v15);
    }
    if ( tradePointRewardDialog )
    {
      EventTradePointRewardDialogComponent__Open(
        tradePointRewardDialog,
        eventPointItemId,
        currentEventId,
        resultEventRewardInfos,
        selectTradeGoodsEntity == 0LL,
        _9__1,
        v3);
      return;
    }
LABEL_14:
    sub_1B64324(this);
  }
  rewardDialogCallBack = _4__this->fields.rewardDialogCallBack;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v18, v19);
  }
  if ( !rewardDialogCallBack )
    goto LABEL_14;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleDropItem_array *, _QWORD, System_Action_o *, _QWORD))rewardDialogCallBack->fields.m_target)(
    rewardDialogCallBack->fields.original_method_info,
    resultEventRewardInfos,
    0LL,
    _9__2,
    *(_QWORD *)&rewardDialogCallBack->fields.extra_arg);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__1(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v3; // x19
  __int64 v4; // x1
  struct EventTradeListViewItemManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *rewardDialogCallBack; // x23
  System_Action_o *_9__3; // x21
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  v3 = this;
  if ( (byte_4A006D3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B640C8(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__,
                                                                      v4);
    byte_4A006D3 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  rewardDialogCallBack = _4__this->fields.rewardDialogCallBack;
  _9__3 = v3->fields.__9__3;
  resultEventRewardInfos = v3->fields.resultEventRewardInfos;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !rewardDialogCallBack )
LABEL_8:
    sub_1B64324(this);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleDropItem_array *, _QWORD, System_Action_o *, _QWORD))rewardDialogCallBack->fields.m_target)(
    rewardDialogCallBack->fields.original_method_info,
    resultEventRewardInfos,
    0LL,
    _9__3,
    *(_QWORD *)&rewardDialogCallBack->fields.extra_arg);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v4; // x19
  __int64 v5; // x1
  System_Action_o *_9__5; // x22
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21
  int32_t v9; // w2
  int32_t v10; // w3

  v4 = this;
  if ( (byte_4A006D5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B640C8(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__,
                                                                      v5);
    byte_4A006D5 = 1;
  }
  _9__5 = v4->fields.__9__5;
  _4__this = v4->fields.__4__this;
  oldEventPoint = v4->fields.oldEventPoint;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__,
      0LL);
    v4->fields.__9__5 = _9__5;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__5, (int32_t)_9__5, v9, v10);
  }
  if ( !_4__this )
    sub_1B64324(this);
  EventTradeListViewItemManager__CheckOpenQuest(_4__this, oldEventPoint, _9__5, v3);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__3(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v4; // x19
  __int64 v5; // x1
  System_Action_o *_9__4; // x22
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21
  int32_t v9; // w2
  int32_t v10; // w3

  v4 = this;
  if ( (byte_4A006D4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B640C8(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__,
                                                                      v5);
    byte_4A006D4 = 1;
  }
  _9__4 = v4->fields.__9__4;
  _4__this = v4->fields.__4__this;
  oldEventPoint = v4->fields.oldEventPoint;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__,
      0LL);
    v4->fields.__9__4 = _9__4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__4, (int32_t)_9__4, v9, v10);
  }
  if ( !_4__this )
    sub_1B64324(this);
  EventTradeListViewItemManager__CheckOpenQuest(_4__this, oldEventPoint, _9__4, v3);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__4(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  struct EventTradeListViewItemManager_o *_4__this; // x0
  struct System_Func_bool__o *closeDialogCallBack; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  closeDialogCallBack = _4__this->fields.closeDialogCallBack;
  if ( closeDialogCallBack )
  {
    if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeDialogCallBack->fields.m_target)(
            closeDialogCallBack->fields.original_method_info,
            *(_QWORD *)&closeDialogCallBack->fields.extra_arg) & 1) != 0 )
      return;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
LABEL_6:
      sub_1B64324(_4__this);
  }
  EventTradeListViewItemManager__OpenReplenishmentDialog(_4__this, method);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__5(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  struct EventTradeListViewItemManager_o *_4__this; // x0
  struct System_Func_bool__o *closeDialogCallBack; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  closeDialogCallBack = _4__this->fields.closeDialogCallBack;
  if ( closeDialogCallBack )
  {
    if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeDialogCallBack->fields.m_target)(
            closeDialogCallBack->fields.original_method_info,
            *(_QWORD *)&closeDialogCallBack->fields.extra_arg) & 1) != 0 )
      return;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
LABEL_6:
      sub_1B64324(_4__this);
  }
  EventTradeListViewItemManager__OpenReplenishmentDialog(_4__this, method);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass83_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass83_0___OpenSweetsNotificationDialog_b__0(
        EventTradeListViewItemManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventTradeGoodsMaster_o *Master_object; // x0
  struct EventTradeListViewItemManager_o *_4__this; // x8
  __int64 v8; // x1
  struct EventTradeListViewItem_array *itemList; // x8
  EventTradeListViewItem_o *v10; // x8
  EventTradeGoodsMaster_o *klass; // x2
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  struct EventTradeListViewItemManager_o *v15; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x9

  if ( (byte_4A006D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_string___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_14476/*"TradeNotificationDialogOpenTime"*/, v5);
    byte_4A006D6 = 1;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_14476/*"TradeNotificationDialogOpenTime"*/, this->fields.openTime, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Master_object )
    goto LABEL_26;
  Master_object = (EventTradeGoodsMaster_o *)EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                                               Master_object,
                                               _4__this->fields.currentEventId,
                                               0LL);
  if ( Master_object && LODWORD(Master_object->fields._MasterName_k__BackingField) )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      if ( !itemList->max_length )
        sub_1B6432C(Master_object, v8);
      v10 = itemList->m_Items[0];
      if ( v10 )
      {
        Master_object = (EventTradeGoodsMaster_o *)v10->fields._TradeGoodsEntity_k__BackingField;
        if ( Master_object )
        {
          Master_object = (EventTradeGoodsMaster_o *)EventTradeGoodsEntity__GetTradePickupVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0LL);
          klass = Master_object;
          goto LABEL_23;
        }
      }
    }
LABEL_26:
    sub_1B64324(Master_object);
  }
  v12 = Method_System_Array_Empty_string___;
  v13 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v13 )
  {
    sub_1BB6000(Method_System_Array_Empty_string___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB5FA4(v14);
  if ( !*(_DWORD *)(v14 + 224) )
    j_il2cpp_runtime_class_init_0(v14);
  Master_object = *(EventTradeGoodsMaster_o **)(v12[7] + 16LL);
  if ( (*((_BYTE *)&Master_object[4].fields._MasterKind_k__BackingField + 5) & 1) == 0 )
    Master_object = (EventTradeGoodsMaster_o *)sub_1BB5FA4(Master_object);
  klass = (EventTradeGoodsMaster_o *)Master_object[2].fields._lookup->klass;
LABEL_23:
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_26;
  playVoiceAction = v15->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_26;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, EventTradeGoodsMaster_o *, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
    playVoiceAction->fields.original_method_info,
    (unsigned int)v15->fields.svtId,
    klass,
    0LL,
    *(_QWORD *)&playVoiceAction->fields.extra_arg);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass86_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass86_0___IsOverPossessionLimit_b__2(
        EventTradeListViewItemManager___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  SceneJumpInfo_o *v10; // x20
  Il2CppObject *v11; // x0
  int32_t v12; // w1
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // x3

  if ( (byte_4A006D7 & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v4);
    sub_1B640C8(&StringLiteral_12562/*"ServantCombine"*/, v5);
    byte_4A006D7 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v13, v14);
      SceneJumpInfo___ctor_38274744(v10, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B64324(v11);
    case 1:
      v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v11 )
      {
        v12 = 71;
        v15 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v10 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v8, v9);
      SceneJumpInfo___ctor_38274656(v10, (System_String_o *)StringLiteral_12562/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_10:
        v11 = Instance;
        v15 = (Il2CppObject *)v10;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v11, v12, 1, v15, 0LL);
        return;
      }
      goto LABEL_15;
  }
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass86_1___ctor(
        EventTradeListViewItemManager___c__DisplayClass86_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass86_1___IsOverPossessionLimit_b__3(
        EventTradeListViewItemManager___c__DisplayClass86_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  SceneJumpInfo_o *v11; // x20
  __int64 v12; // x0
  int32_t v13; // w1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2

  if ( (byte_4A006D8 & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12566/*"ServantEquipList"*/, v4);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v5);
    sub_1B640C8(&StringLiteral_12565/*"ServantEQCombine"*/, v6);
    byte_4A006D8 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v14, v15);
      SceneJumpInfo___ctor_38274744(v11, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v13 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B64324(v12);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v16, v17);
      SceneJumpInfo___ctor_38274656(v11, (System_String_o *)StringLiteral_12566/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v13 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v11 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v9, v10);
      SceneJumpInfo___ctor_38274656(v11, (System_String_o *)StringLiteral_12565/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v13 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v13, 1, (Il2CppObject *)v11, 0LL);
        return;
      }
      goto LABEL_14;
  }
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass86_2___ctor(
        EventTradeListViewItemManager___c__DisplayClass86_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass86_2___IsOverPossessionLimit_b__5(
        EventTradeListViewItemManager___c__DisplayClass86_2_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  SceneJumpInfo_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_4A006D9 & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12525/*"SellServant"*/, v4);
    byte_4A006D9 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v8 = (SceneJumpInfo_o *)sub_1B64314(SceneJumpInfo_TypeInfo, v6, v7);
    SceneJumpInfo___ctor_38274744(v8, (System_String_o *)StringLiteral_12525/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B64324(v9);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v8, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass87_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass87_0___IsOverPresentBoxLimit_b__3(
        EventTradeListViewItemManager___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  struct EventTradeListViewItemManager_o *_4__this; // x8
  System_Action_o *boxOverDlgCloseCallBack; // x0

  if ( this->fields.isOpenPresentBox )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_1B64324(this);
    boxOverDlgCloseCallBack = _4__this->fields.boxOverDlgCloseCallBack;
    if ( boxOverDlgCloseCallBack )
      ActionExtensions__Call(boxOverDlgCloseCallBack, 0LL);
  }
}
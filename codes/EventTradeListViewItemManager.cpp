void __fastcall EventTradeListViewItemManager___ctor(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CURRENT_PICKUP_INFO_BOARD_POS.fields.x = xmmword_BA3420;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager__CheckIsSerializeFieldNotNull(
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
  if ( (byte_4A02DE1 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_var, method);
    sub_1B64A00(&UnityEngine_SerializeField_var, v3);
    targetObj = (Il2CppObject *)sub_1B64A00(&System_Type_TypeInfo, v4);
    byte_4A02DE1 = 1;
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
        sub_1B64C64(targetObj, method);
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
    sub_1B64C5C(targetObj, method);
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
  System_Action_o *v14; // x24
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4A02DDD & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&oldEventPoint);
    sub_1B64A00(&EventInfoTradeRankControl_TypeInfo, v7);
    sub_1B64A00(&Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4A02DDD = 1;
  }
  currentEventId = this->fields.currentEventId;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
  EventInfoTradeRankControl__UpdateOldPoint(currentEventId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = this->fields.currentEventId;
  v13 = (CommonUI_o *)Instance;
  v14 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__, 0LL);
  if ( !v13 )
    sub_1B64C5C(v15, v16);
  if ( !CommonUI__CheckOpenQuestByEventPoint(v13, v12, oldEventPoint, v14, 0, -2.0, 0LL) )
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
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x25
  int max_length; // w8
  unsigned int v12; // w26
  EventTradeGoodsEntity_o *v13; // x21
  int32_t id; // w22
  int32_t currentEventId; // w23
  System_Action_o *v16; // x24
  EventTradeListViewItem_o *v17; // x20
  const MethodInfo *v18; // x5
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  struct EventTradeGoodsEntity_array *v25; // x8
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_4A02DC4 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__, v3);
    sub_1B64A00(&EventTradeListViewItem_TypeInfo, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_1B64A00(&LocalizationManager_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_5678/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v7);
    byte_4A02DC4 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_20;
  max_length = tradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B64C64(itemList, v9);
      v13 = tradeGoodsEntities->m_Items[v12];
      if ( !v13 )
        break;
      id = v13->fields.id;
      currentEventId = this->fields.currentEventId;
      v16 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        v16,
        (Il2CppObject *)this,
        Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
        0LL);
      v17 = (EventTradeListViewItem_o *)sub_1B64C4C(EventTradeListViewItem_TypeInfo);
      EventTradeListViewItem___ctor(v17, id, v13, currentEventId, v16, v18);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v17,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v17;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v17, v19, v20);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_14;
    }
LABEL_20:
    sub_1B64C5C(itemList, v9);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  v25 = this->fields.tradeGoodsEntities;
  if ( !v25 )
    goto LABEL_20;
  if ( !*(_QWORD *)&v25->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5678/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
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
  __int64 v6; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *tradePointRewardDialog; // x20
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  UnityEngine_Object_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  UnityEngine_Object_o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  ServantStatusBattleListViewItem_o *p_nextPickupInfoDispControl; // x19
  UnityEngine_Object_o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A02DC6 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A02DC6 = 1;
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
    UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
    this->fields.tradeRewardDialog = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tradeRewardDialog, 0, v9, v10);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradePointRewardDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.tradePointRewardDialog;
    if ( !klass )
      goto LABEL_48;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v12, 0LL);
    this->fields.tradePointRewardDialog = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tradePointRewardDialog, 0, v13, v14);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeSweetsNumConfirmDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.tradeSweetsNumConfirmDialog;
    if ( !klass )
      goto LABEL_48;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v16, 0LL);
    this->fields.tradeSweetsNumConfirmDialog = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsNumConfirmDialog, 0, v17, v18);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeSweetsWithdrawalConfirmDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
    if ( !klass )
      goto LABEL_48;
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v20, 0LL);
    this->fields.tradeSweetsWithdrawalConfirmDialog = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsWithdrawalConfirmDialog, 0, v21, v22);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentPickupInfoDispControl, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)this->fields.currentPickupInfoDispControl;
    if ( !klass )
      goto LABEL_48;
    v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(v24, 0LL);
    this->fields.currentPickupInfoDispControl = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.currentPickupInfoDispControl, 0, v25, v26);
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
      v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476(v29, 0LL);
      p_nextPickupInfoDispControl->klass = 0LL;
      sub_1B649A4(p_nextPickupInfoDispControl, 0, v30, v31);
      return;
    }
LABEL_48:
    sub_1B64C5C(klass, v6);
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
  int64_t Time_38166364; // x0
  const MethodInfo *v10; // x1
  int64_t v11; // x22
  bool EntityListTargetTime; // w21
  char v13; // w20
  const MethodInfo *v14; // x4
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *infoPanel; // x20
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Object_o *svtIndexPanel; // x20
  UnityEngine_GameObject_o *v20; // x0
  uint64_t dateData; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *v22; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8

  if ( (byte_4A02DE7 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradePickupMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(&System_DateTime_TypeInfo, v4);
    sub_1B64A00(&NetworkManager_TypeInfo, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    byte_4A02DE7 = 1;
  }
  pickupEntityList = 0LL;
  v22 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v24.fields._dateData = (uint64_t)&dateData;
  v25.fields._dateData = System_DateTime__AddDays(v24, 1.0, 0LL).fields._dateData;
  Time_38166364 = NetworkManager__getTime_38166364(v25, 0LL);
  if ( !Master_object )
    goto LABEL_32;
  v11 = Time_38166364;
  EntityListTargetTime = EventTradePickupMaster__TryGetEntityListTargetTime(
                           (EventTradePickupMaster_o *)Master_object,
                           &pickupEntityList,
                           this->fields.currentEventId,
                           Time,
                           0LL);
  Time_38166364 = EventTradePickupMaster__TryGetEntityListTargetTime(
                    (EventTradePickupMaster_o *)Master_object,
                    &v22,
                    this->fields.currentEventId,
                    v11,
                    0LL);
  if ( !this->fields.currentPickupInfoDispControl )
    goto LABEL_32;
  v13 = Time_38166364;
  EventTradePickupInfoDispControl__Init(this->fields.currentPickupInfoDispControl, v10);
  Time_38166364 = (int64_t)this->fields.nextPickupInfoDispControl;
  if ( !Time_38166364 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__Init((EventTradePickupInfoDispControl_o *)Time_38166364, v10);
  if ( !EntityListTargetTime )
  {
    if ( (v13 & 1) == 0 )
      return;
LABEL_18:
    Time_38166364 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_38166364 )
      goto LABEL_32;
    EventTradePickupInfoDispControl__SetUi(
      (EventTradePickupInfoDispControl_o *)Time_38166364,
      this->fields.currentEventId,
      v22,
      0,
      v14);
    Time_38166364 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_38166364 )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38166364, 0LL);
    GameObjectExtensions__SetLocalPosition_33376744(gameObject, this->fields.NEXT_PICKUP_INFO_BOARD_POS, 0LL);
    goto LABEL_21;
  }
  Time_38166364 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_38166364 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__SetUi(
    (EventTradePickupInfoDispControl_o *)Time_38166364,
    this->fields.currentEventId,
    pickupEntityList,
    1,
    v14);
  Time_38166364 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_38166364 )
    goto LABEL_32;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38166364, 0LL);
  GameObjectExtensions__SetLocalPosition_33376744(v15, this->fields.CURRENT_PICKUP_INFO_BOARD_POS, 0LL);
  if ( (v13 & 1) != 0 )
    goto LABEL_18;
LABEL_21:
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0LL, 0LL) )
  {
    Time_38166364 = (int64_t)this->fields.infoPanel;
    if ( !Time_38166364 )
      goto LABEL_32;
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38166364, 0LL);
    GameObjectExtensions__SetLocalPositionY(v18, -33.0, 0LL);
  }
  svtIndexPanel = (UnityEngine_Object_o *)this->fields.svtIndexPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtIndexPanel, 0LL, 0LL) )
  {
    Time_38166364 = (int64_t)this->fields.svtIndexPanel;
    if ( Time_38166364 )
    {
      v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38166364, 0LL);
      GameObjectExtensions__SetLocalPositionY(v20, -92.0, 0LL);
      return;
    }
LABEL_32:
    sub_1B64C5C(Time_38166364, v10);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  Il2CppObject *Master_object; // x0
  int32_t currentEventId; // w21
  EventTradePickupMaster_o *v20; // x22
  int64_t Time; // x0
  __int64 v22; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *Entity; // x0
  __int64 v27; // x1
  EventTradeGoodsEntity_o *v28; // x23
  int32_t klass; // w25
  int32_t v30; // w24
  System_Action_o *v31; // x26
  EventTradeListViewItem_o *v32; // x22
  const MethodInfo *v33; // x5
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A02DC5 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v3);
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradePickupMaster___, v4);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__get_Current__, v9);
    sub_1B64A00(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__, v10);
    sub_1B64A00(&EventTradeListViewItem_TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventTradeListViewItem__Add__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__, v14);
    sub_1B64A00(&System_Collections_Generic_List_EventTradeListViewItem__TypeInfo, v15);
    sub_1B64A00(&NetworkManager_TypeInfo, v16);
    byte_4A02DC5 = 1;
  }
  pickupEntityList = 0LL;
  memset(&v44, 0, sizeof(v44));
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventTradeListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  currentEventId = this->fields.currentEventId;
  v20 = (EventTradePickupMaster_o *)Master_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !v20 )
    goto LABEL_29;
  if ( !EventTradePickupMaster__TryGetEntityListTargetTime(v20, &pickupEntityList, currentEventId, Time, 0LL) )
    return (System_Collections_Generic_List_EventTradeListViewItem__o *)v17;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !pickupEntityList )
LABEL_29:
    sub_1B64C5C(Time, v22);
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Time;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)pickupEntityList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__);
    if ( !v24 )
      break;
    if ( !v44.fields._current )
      sub_1B64C5C(v24, v25);
    if ( !v23 )
      sub_1B64C5C(v24, v25);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v23,
               (int32_t)v44.fields._current[1].klass,
               (const MethodInfo_30D6798 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    v28 = (EventTradeGoodsEntity_o *)Entity;
    if ( !Entity )
      sub_1B64C5C(0LL, v27);
    klass = (int32_t)Entity[1].klass;
    v30 = this->fields.currentEventId;
    v31 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
      0LL);
    v32 = (EventTradeListViewItem_o *)sub_1B64C4C(EventTradeListViewItem_TypeInfo);
    EventTradeListViewItem___ctor(v32, klass, v28, v30, v31, v33);
    if ( !v17 )
      sub_1B64C5C(v34, v35);
    items = v17->fields._items;
    v39 = Method_System_Collections_Generic_List_EventTradeListViewItem__Add__;
    ++v17->fields._version;
    if ( !items )
      sub_1B64C5C(v34, v35);
    size = v17->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        (Il2CppObject *)v32,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &items->obj.klass + size;
      v17->fields._size = size + 1;
      v41[4] = (Il2CppClass *)v32;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v32, v36, v37);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__);
  return (System_Collections_Generic_List_EventTradeListViewItem__o *)v17;
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

  if ( (byte_4A02DDF & 1) == 0 )
  {
    sub_1B64A00(&System_DateTime_TypeInfo, method);
    sub_1B64A00(&EventTradeTimeCalculation_TypeInfo, v2);
    sub_1B64A00(&NetworkManager_TypeInfo, v3);
    byte_4A02DDF = 1;
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
  __int64 v39; // x1
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x8
  EventTradeGoodsEntity_o *v49; // x8
  int32_t eventPointItemId; // w8
  EventTradeAssetManager_o *v51; // x22
  const MethodInfo *v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  const MethodInfo *v55; // x1
  UILabel_o *tradeNoticeLb; // x21
  const MethodInfo *v57; // x1
  EventTradeAssetManager_o *assetManager; // x21
  System_Action_o *v59; // x22
  const MethodInfo *v60; // x3

  if ( (byte_4A02DC3 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v19);
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeStoreMaster___, v20);
    sub_1B64A00(&DataManager_TypeInfo, v21);
    sub_1B64A00(&EventTradeAssetManager_TypeInfo, v22);
    sub_1B64A00(&Method_EventTradeListViewItemManager__Init_b__53_0__, v23);
    sub_1B64A00(&LocalizationManager_TypeInfo, v24);
    sub_1B64A00(&StringLiteral_13331/*"TRADE_EVENT_PUSH_BTN_LABEL"*/, v25);
    byte_4A02DC3 = 1;
  }
  this->fields.svtId = svtId;
  this->fields.currentEventId = eventId;
  this->fields.tradeCallback = tradeCallback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.tradeCallback,
    (int32_t)tradeCallback,
    svtId,
    (int32_t)tradeCallback);
  this->fields.rewardDialogCallBack = rewardDialogCallBack;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.rewardDialogCallBack,
    (int32_t)rewardDialogCallBack,
    v26,
    v27);
  this->fields.playVoiceAction = playVoice;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAction, (int32_t)playVoice, v28, v29);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.presentBoxOverDlg, (int32_t)boxOverDlg, v30, v31);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.boxOverDlgCloseCallBack,
    (int32_t)boxOverDlgCallBack,
    v32,
    v33);
  this->fields.closeDialogCallBack = closeDialogCallBack;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeDialogCallBack,
    (int32_t)closeDialogCallBack,
    v34,
    v35);
  this->fields.maskPanel = maskPanel;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)maskPanel, v36, v37);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_19;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            Master_object,
                            this->fields.currentEventId,
                            0LL);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.tradeGoodsEntities,
    (int32_t)TradeGoodsEntityArray,
    v41,
    v42);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_19;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0LL);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
    (int32_t)OpenTradeStoreEntityArray,
    v44,
    v45);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_19;
  if ( !tradeGoodsEntities->max_length )
    sub_1B64C64(Master_object, v39);
  v49 = tradeGoodsEntities->m_Items[0];
  if ( !v49 )
    goto LABEL_19;
  eventPointItemId = v49->fields.eventPointItemId;
  this->fields.selectTradeGoodsEntity = 0LL;
  this->fields.eventPointItemId = eventPointItemId;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity, 0, v46, v47);
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
    v51 = (EventTradeAssetManager_o *)sub_1B64C4C(EventTradeAssetManager_TypeInfo);
    EventTradeAssetManager___ctor(v51, v52);
    this->fields.assetManager = v51;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.assetManager, (int32_t)v51, v53, v54);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetTradeNotification(0LL);
  EventTradeListViewItemManager__UpdateNoticeButtonDisp(this, v55);
  tradeNoticeLb = this->fields.tradeNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13331/*"TRADE_EVENT_PUSH_BTN_LABEL"*/, 0LL);
  if ( !tradeNoticeLb
    || (UILabel__set_text(tradeNoticeLb, (System_String_o *)Master_object, 0LL),
        EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v57),
        assetManager = this->fields.assetManager,
        v59 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(v59, (Il2CppObject *)this, Method_EventTradeListViewItemManager__Init_b__53_0__, 0LL),
        !assetManager) )
  {
LABEL_19:
    sub_1B64C5C(Master_object, v39);
  }
  EventTradeAssetManager__GetAssets(assetManager, eventId, v59, v60);
}


bool __fastcall EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *String_69095752; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  int64_t v6; // x20
  EventTradeListViewItemManager_o *UpdateTime; // x0
  const MethodInfo *v8; // x1
  int64_t v10; // x0
  EventTradeTimeCalculation_c *v11; // x8
  int64_t v12; // x19
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A02DDE & 1) == 0 )
  {
    sub_1B64A00(&EventTradeTimeCalculation_TypeInfo, method);
    sub_1B64A00(&StringLiteral_14481/*"TradeNotificationDialogOpenTime"*/, v2);
    byte_4A02DDE = 1;
  }
  result = 0LL;
  String_69095752 = UnityEngine_PlayerPrefs__GetString_69095752((System_String_o *)StringLiteral_14481/*"TradeNotificationDialogOpenTime"*/, 0LL);
  v4 = System_Int64__TryParse(String_69095752, &result, 0LL);
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
  __int64 v13; // x1
  UserServantMaster_o *v14; // x21
  Il2CppObject *v15; // x19
  CommonUI_o *v16; // x19
  int32_t v17; // w21
  int32_t svtKeep; // w20
  ServantFrameShortDlgComponent_CallbackFunc_o *v19; // x22
  Il2CppObject *v20; // x23
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  CommonUI_o *v24; // x0
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  CommonUI_o *v28; // x19
  int32_t v29; // w21
  int32_t svtEquipKeep; // w20
  Il2CppObject *v31; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  bool v35; // w8
  bool result; // w0
  int32_t Count; // w19
  CommonUI_o *v38; // x21
  BalanceConfig_c *v39; // x8
  Il2CppObject *v40; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A02DE3 & 1) == 0 )
  {
    sub_1B64A00(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v2);
    sub_1B64A00(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__, v7);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__, v8);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__, v9);
    sub_1B64A00(&EventTradeListViewItemManager___c_TypeInfo, v10);
    byte_4A02DE3 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_45;
  v14 = (UserServantMaster_o *)Master_object;
  UserServantMaster__getCount((UserServantMaster_o *)Master_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v14, 1, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v16 = (CommonUI_o *)Master_object;
      v17 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
      if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
        Master_object = EventTradeListViewItemManager___c_TypeInfo;
      }
      v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Master_object + 23) + 24LL);
      if ( !v19 )
      {
        if ( !*((_DWORD *)Master_object + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          Master_object = EventTradeListViewItemManager___c_TypeInfo;
        }
        v20 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
        v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64C4C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v19,
          v20,
          Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__,
          0LL);
        static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
        static_fields->__9__86_0 = v19;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__86_0, (int32_t)v19, v22, v23);
      }
      if ( v16 )
      {
        v24 = v16;
        v25 = v17;
        v26 = svtKeep;
        v27 = 0;
        goto LABEL_42;
      }
    }
LABEL_45:
    sub_1B64C5C(Master_object, v13);
  }
  Master_object = (void *)UserServantMaster__CheckEquipAdd(v14, 1, 1, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v28 = (CommonUI_o *)Master_object;
    v29 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Master_object = EventTradeListViewItemManager___c_TypeInfo;
    if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Master_object + 23) + 32LL);
    if ( !v19 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = EventTradeListViewItemManager___c_TypeInfo;
      }
      v31 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64C4C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v31,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__,
        0LL);
      v32 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v32->__9__86_1 = v19;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v32->__9__86_1, (int32_t)v19, v33, v34);
    }
    if ( !v28 )
      goto LABEL_45;
    v27 = 1;
    v24 = v28;
    v25 = v29;
  }
  else
  {
    if ( !v15 )
      goto LABEL_45;
    v35 = UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v15, 0, 0LL);
    result = 0;
    if ( !v35 )
      return result;
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v15, 0LL);
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v38 = (CommonUI_o *)Master_object;
    if ( !byte_49FA28B )
    {
      sub_1B64A00(&BalanceConfig_TypeInfo, v13);
      byte_49FA28B = 1;
    }
    v39 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    Master_object = EventTradeListViewItemManager___c_TypeInfo;
    svtEquipKeep = v39->static_fields->CommandCodeFrameMax;
    if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
    }
    v19 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Master_object + 23) + 40LL);
    if ( !v19 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = EventTradeListViewItemManager___c_TypeInfo;
      }
      v40 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v19 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B64C4C(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v19,
        v40,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__,
        0LL);
      v41 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v41->__9__86_4 = v19;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v41->__9__86_4, (int32_t)v19, v42, v43);
    }
    if ( !v38 )
      goto LABEL_45;
    v27 = 2;
    v24 = v38;
    v25 = Count;
  }
  v26 = svtEquipKeep;
LABEL_42:
  CommonUI__OpenSvtFrameShortDlg(v24, v25, v26, v27, 1, v19, 4, 0LL);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_45;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Master_object, 0LL);
  return 1;
}


bool __fastcall EventTradeListViewItemManager__IsOverPresentBoxLimit(
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
  EventTradeListViewItemManager___c_c *v28; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Func_object__bool__o *_9__87_0; // x21
  Il2CppObject *v31; // x22
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  EventTradeListViewItemManager___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Func_object__object__o *_9__87_1; // x21
  Il2CppObject *v39; // x22
  struct EventTradeListViewItemManager___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v43; // x22
  Il2CppObject *Master_object; // x20
  __int64 UserId; // x0
  __int64 v46; // x1
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *v48; // x23
  System_Collections_Generic_HashSet_int__o *v49; // x21
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v54; // x1
  __int64 v55; // x22
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  GiftEntity_array *GiftListById; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v68; // x1
  int max_length; // w8
  int i; // w29
  GiftEntity_o *v71; // x8
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  int32_t count; // w21
  BalanceConfig_c *v77; // x0
  int32_t PresentBoxMax; // w23
  int32_t v79; // w24
  System_String_o *v80; // x0
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  BalanceConfig_c *v84; // x8
  System_String_o *v85; // x20
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v89; // x21
  PresentBoxOverDialog_ClickDelegate_o *v90; // x22
  int32_t v92; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A02DE4 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v3);
    sub_1B64A00(&Method_DataManager_GetMaster_GiftMaster___, v4);
    sub_1B64A00(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v5);
    sub_1B64A00(&DataManager_TypeInfo, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___, v7);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_ListViewItem___, v8);
    sub_1B64A00(&Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__, v9);
    sub_1B64A00(&System_Func_ListViewItem__bool__TypeInfo, v10);
    sub_1B64A00(&System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int___ctor__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14);
    sub_1B64A00(&System_Collections_Generic_HashSet_int__TypeInfo, v15);
    sub_1B64A00(&System_IDisposable_TypeInfo, v16);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo, v17);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo, v18);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_1B64A00(&int_TypeInfo, v20);
    sub_1B64A00(&LocalizationManager_TypeInfo, v21);
    sub_1B64A00(&NetworkManager_TypeInfo, v22);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__, v23);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__, v24);
    sub_1B64A00(&EventTradeListViewItemManager___c_TypeInfo, v25);
    sub_1B64A00(&StringLiteral_13303/*"TRADE_CHECK_PRESENT_NUM_TXT"*/, v26);
    sub_1B64A00(&StringLiteral_1/*""*/, v27);
    byte_4A02DE4 = 1;
  }
  v28 = EventTradeListViewItemManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v28 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__87_0 = (System_Func_object__bool__o *)v28->static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__87_0 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__87_0,
      v31,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Func_ListViewItem__bool__o *)_9__87_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v33, v34);
  }
  v35 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
          (System_Func_TSource__bool__o *)_9__87_0,
          (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_ListViewItem___);
  v36 = EventTradeListViewItemManager___c_TypeInfo;
  v37 = v35;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v36 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__87_1 = (System_Func_object__object__o *)v36->static_fields->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__87_1 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__87_1,
      v39,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__,
      0LL);
    v40 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    v40->__9__87_1 = (struct System_Func_ListViewItem__EventTradeGoodsEntity__o *)_9__87_1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v40->__9__87_1, (int32_t)_9__87_1, v41, v42);
  }
  v43 = System_Linq_Enumerable__Select_object__object_(
          v37,
          (System_Func_TSource__TResult__o *)_9__87_1,
          (const MethodInfo_2E6BCA0 *)Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_76;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Master_object, UserId, 0LL);
  v48 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_GiftMaster___);
  v49 = (System_Collections_Generic_HashSet_int__o *)sub_1B64C4C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v49,
    (const MethodInfo_33662A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v43 )
    goto LABEL_76;
  klass = v43->klass;
  v51 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo )
    {
      --v51;
      p_offset += 4;
      if ( !v51 )
        goto LABEL_25;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_25:
    p_method = sub_1BB69E0(v43, System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo, 0LL);
  }
  v55 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v43,
          *(_QWORD *)(p_method + 8));
  if ( !v55 )
    sub_1B64C5C(0LL, v54);
  while ( 1 )
  {
    v56 = *(_QWORD *)v55;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_32;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_32:
      v59 = sub_1BB69E0(v55, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8)) & 1) == 0 )
      break;
    v60 = *(_QWORD *)v55;
    v61 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__c **)v62 - 1) != System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo )
      {
        --v61;
        v62 += 4;
        if ( !v61 )
          goto LABEL_39;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_39:
      v63 = sub_1BB69E0(v55, System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo, 0LL);
    }
    v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v55, *(_QWORD *)(v63 + 8));
    if ( !v64 )
      sub_1B64C5C(0LL, v65);
    if ( !v48 )
      sub_1B64C5C(v64, v65);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v48, *(_DWORD *)(v64 + 36), 0LL);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GiftListById, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !GiftListById )
        sub_1B64C5C(IsNullOrEmpty, v68);
      max_length = GiftListById->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1B64C64(IsNullOrEmpty, v68);
          v71 = GiftListById->m_Items[i];
          if ( !v71 )
            sub_1B64C5C(IsNullOrEmpty, v68);
          if ( !v49 )
            sub_1B64C5C(IsNullOrEmpty, v68);
          IsNullOrEmpty = System_Collections_Generic_HashSet_int___Add(
                            v49,
                            v71->fields.type,
                            (const MethodInfo_33674A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
          max_length = GiftListById->max_length;
        }
      }
    }
  }
  v72 = *(_QWORD *)v55;
  v73 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
  {
    v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
    {
      --v73;
      v74 += 4;
      if ( !v73 )
        goto LABEL_56;
    }
    v75 = v72 + 16LL * *v74 + 312;
  }
  else
  {
LABEL_56:
    v75 = sub_1BB69E0(v55, System_IDisposable_TypeInfo, 0LL);
  }
  UserId = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v55, *(_QWORD *)(v75 + 8));
  if ( !VaildList || !v49 )
    goto LABEL_76;
  count = v49->fields._count;
  v77 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v77 = BalanceConfig_TypeInfo;
  }
  PresentBoxMax = v77->static_fields->PresentBoxMax;
  v79 = count + VaildList->max_length;
  if ( v79 > PresentBoxMax )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v80 = LocalizationManager__Get((System_String_o *)StringLiteral_13303/*"TRADE_CHECK_PRESENT_NUM_TXT"*/, 0LL);
    v84 = BalanceConfig_TypeInfo;
    v85 = v80;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v84 = BalanceConfig_TypeInfo;
    }
    v92 = v84->static_fields->PresentBoxMax;
    v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92, v81, v82, v83);
    v87 = System_String__Format(v85, v86, 0LL);
    presentBoxOverDlg = this->fields.presentBoxOverDlg;
    v89 = v87;
    v90 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1B64C4C(PresentBoxOverDialog_ClickDelegate_TypeInfo);
    PresentBoxOverDialog_ClickDelegate___ctor(
      v90,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__,
      0LL);
    if ( presentBoxOverDlg )
    {
      PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v89, v90, 26, 0LL);
      return v79 > PresentBoxMax;
    }
LABEL_76:
    sub_1B64C5C(UserId, v46);
  }
  return v79 > PresentBoxMax;
}


void __fastcall EventTradeListViewItemManager__LocateDialogToTradePanel(
        EventTradeListViewItemManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  EventTradeListViewItemManager_o *v6; // x20

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
  v6 = this;
  if ( !byte_49F9826 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, dialog);
    byte_49F9826 = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (EventTradeListViewItemManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)dialog,
                                                     0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B64C5C(this, dialog);
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
  EventTradeListViewItemManager_o *v6; // x20

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
  v6 = this;
  if ( !byte_49F9826 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, obj);
    byte_49F9826 = 1;
  }
  if ( !v6 )
LABEL_8:
    sub_1B64C5C(this, obj);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v6,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  UnityEngine_GameObject__SetActive(obj, 0, 0LL);
}


void __fastcall EventTradeListViewItemManager__OnClickListView(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4A02DCA & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickListView__, obj);
    byte_4A02DCA = 1;
  }
  if ( !obj
    || (this = (EventTradeListViewItemManager_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_1B64C5C(this, obj);
  }
  v4 = this;
  if ( !this->fields.sortKindButton
    && EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)this, (const MethodInfo *)obj)
    || !BYTE4(v4->fields.sortOrderButton) )
  {
    v5 = Method_EventTradeListViewItemManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_EventTradeListViewItemManager_OnClickListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
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

  if ( (byte_4A02DE6 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickNoticeButton__, method);
    byte_4A02DE6 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v4 = Method_EventTradeListViewItemManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B64A18(Method_EventTradeListViewItemManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B649E4(v4, v4[4]);
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
  __int64 v8; // x1
  __int64 maskPanel; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v15; // x20
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x0

  v2 = this;
  if ( (byte_4A02DD7 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_Empty_int___, method);
    sub_1B64A00(&Method_EventTradeListViewItemManager_TradeReceiveResponse__, v3);
    sub_1B64A00(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v4);
    sub_1B64A00(&NetworkManager_TypeInfo, v5);
    this = (EventTradeListViewItemManager_o *)sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4A02DD7 = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, method)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v2, v7) )
  {
    maskPanel = (__int64)v2->fields.maskPanel;
    if ( !maskPanel )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
    v2->fields.selectTradeGoodsEntity = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields.selectTradeGoodsEntity, 0, v10, v11);
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v2,
      Method_EventTradeListViewItemManager_TradeReceiveResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
    currentEventId = v2->fields.currentEventId;
    v15 = (TradeReceiveRequest_o *)Request_object;
    v16 = Method_System_Array_Empty_int___;
    v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v17 )
    {
      sub_1BB6938(Method_System_Array_Empty_int___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1BB68DC(v18);
    if ( !*(_DWORD *)(v18 + 224) )
      j_il2cpp_runtime_class_init_0(v18);
    maskPanel = *(_QWORD *)(v16[7] + 16LL);
    if ( (*(_BYTE *)(maskPanel + 309) & 1) == 0 )
      maskPanel = sub_1BB68DC(maskPanel);
    if ( !v15 )
LABEL_19:
      sub_1B64C5C(maskPanel, v8);
    TradeReceiveRequest__beginRequest(v15, currentEventId, **(System_Int32_array ***)(maskPanel + 184), 0, 0, 0LL);
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
  if ( (byte_4A02DD2 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B64A00(
                                                &Method_EventTradeListViewItemManager_OnClickReceiveAllButton__,
                                                method);
    byte_4A02DD2 = 1;
  }
  receiveAllButton = v2->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_1B64C5C(this, method);
  mState = receiveAllButton->fields.mState;
  v5 = Method_EventTradeListViewItemManager_OnClickReceiveAllButton__;
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B64A18(Method_EventTradeListViewItemManager_OnClickReceiveAllButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
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

  if ( (byte_4A02DCC & 1) == 0 )
  {
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickReceiveButton__, obj);
    sub_1B64A00(&EventTradeTimeCalculation_TypeInfo, v5);
    sub_1B64A00(&NetworkManager_TypeInfo, v6);
    byte_4A02DCC = 1;
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
      sub_1B64C5C(maskPanel, obj);
    }
    if ( (v9 & 0x30) != 0 )
    {
      v10 = Method_EventTradeListViewItemManager_OnClickReceiveButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveButton__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B64A18(Method_EventTradeListViewItemManager_OnClickReceiveButton__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B649E4(v10, v10[4]);
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
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity, (int32_t)v22, v20, v21);
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
  __int64 v12; // x1
  __int64 maskPanel; // x0
  NetworkManager_ResultCallbackFunc_o *v14; // x22
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w21
  TradeReceiveRequest_o *v17; // x22

  v6 = this;
  if ( (byte_4A02DD6 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventTradeListViewItemManager_TradeReceiveResponse__, *(_QWORD *)&storeIdx);
    sub_1B64A00(&int___TypeInfo, v7);
    sub_1B64A00(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v8);
    sub_1B64A00(&NetworkManager_TypeInfo, v9);
    this = (EventTradeListViewItemManager_o *)sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    byte_4A02DD6 = 1;
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
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)v6,
        Method_EventTradeListViewItemManager_TradeReceiveResponse__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v14,
                         (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
      currentEventId = v6->fields.currentEventId;
      v17 = (TradeReceiveRequest_o *)Request_object;
      maskPanel = sub_1B64AA8(int___TypeInfo, 1LL);
      if ( maskPanel )
      {
        if ( !*(_DWORD *)(maskPanel + 24) )
          sub_1B64C64(maskPanel, v12);
        *(_DWORD *)(maskPanel + 32) = storeIdx;
        if ( v17 )
        {
          TradeReceiveRequest__beginRequest(v17, currentEventId, (System_Int32_array *)maskPanel, receiveNum, 0, 0LL);
          return;
        }
      }
    }
    sub_1B64C5C(maskPanel, v12);
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
  unsigned int displayMode; // w8
  int v9; // w8
  bool IsRefillable; // w21
  _QWORD *v11; // x8
  System_Reflection_MethodBase_o *v12; // x0
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  const MethodInfo *v14; // x1
  EventTradeListViewItem_o *Item; // x22
  const MethodInfo *v16; // x1
  __int64 v17; // x8
  int32_t v18; // w23
  System_Action_int__int__int__o *v19; // x24
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  struct EventTradeGoodsEntity_o *v23; // x1

  if ( (byte_4A02DCD & 1) == 0 )
  {
    sub_1B64A00(&System_Action_int__int__int__TypeInfo, obj);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__, v5);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__, v6);
    byte_4A02DCD = 1;
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
LABEL_22:
      sub_1B64C5C(maskPanel, obj);
    }
    if ( (v9 & 0x30) != 0 )
    {
      maskPanel = EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj);
      if ( !maskPanel )
        goto LABEL_22;
      IsRefillable = EventTradeListViewItem__get_IsRefillable(
                       (EventTradeListViewItem_o *)maskPanel,
                       (const MethodInfo *)obj);
      v11 = Method_EventTradeListViewItemManager_OnClickReplenishmentButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1B64A18(Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B649E4(v11, v11[4]);
      if ( IsRefillable )
      {
        OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
        maskPanel = this->fields.tradeSweetsNumConfirmDialog;
        if ( !maskPanel )
          goto LABEL_22;
        EventTradeSweetsNumConfirmDialogComponent__Init(
          (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
          this->fields.currentEventId,
          0LL);
        tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
        Item = EventTradeListViewObject__GetItem(obj, v14);
        maskPanel = EventTradeListViewObject__GetItem(obj, v16);
        if ( !maskPanel )
          goto LABEL_22;
        v17 = *((_QWORD *)maskPanel + 17);
        if ( !v17 )
          goto LABEL_22;
        v18 = *(_DWORD *)(v17 + 16);
        v19 = (System_Action_int__int__int__o *)sub_1B64C4C(System_Action_int__int__int__TypeInfo);
        System_Action_int__int__int____ctor(
          v19,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
          0LL);
        if ( !tradeSweetsNumConfirmDialog )
          goto LABEL_22;
        EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, Item, v18, v19, 1, 0LL);
        maskPanel = EventTradeListViewObject__GetItem(obj, v20);
        if ( !maskPanel )
          goto LABEL_22;
        v23 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
        this->fields.selectTradeGoodsEntity = v23;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity, (int32_t)v23, v21, v22);
        goto LABEL_18;
      }
      OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
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
  NetworkManager_ResultCallbackFunc_o *v13; // x23
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_4A02DD1 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventTradeListViewItemManager_TradeReplenishmentResponse__, *(_QWORD *)&storeIdx);
    sub_1B64A00(&Method_NetworkManager_getRequest_TradeStartRequest___, v9);
    sub_1B64A00(&NetworkManager_TypeInfo, v10);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    byte_4A02DD1 = 1;
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
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_TradeReplenishmentResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                   v13,
                                                                                   (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_TradeStartRequest___);
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
    sub_1B64C5C(tradeSweetsNumConfirmDialog, *(_QWORD *)&storeIdx);
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
  unsigned int displayMode; // w8
  int v15; // w8
  bool IsBuyAble; // w21
  _QWORD *v17; // x8
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x2
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  const MethodInfo *v21; // x1
  EventTradeListViewItem_o *Item; // x0
  int32_t v23; // w22
  EventTradeListViewItem_o *v24; // x23
  System_Action_int__int__int__o *v25; // x24
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  struct EventTradeGoodsEntity_o *klass; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v31; // x21
  System_String_o *v32; // x22
  System_Action_o *v33; // x23
  int32_t storeIdx; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4A02DCB & 1) == 0 )
  {
    sub_1B64A00(&System_Action_int__int__int__TypeInfo, obj);
    sub_1B64A00(&System_Action_TypeInfo, v5);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__, v6);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickTradeStartDecide__, v7);
    sub_1B64A00(&Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__, v8);
    sub_1B64A00(&LocalizationManager_TypeInfo, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B64A00(&StringLiteral_13321/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/, v11);
    sub_1B64A00(&StringLiteral_13320/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/, v12);
    byte_4A02DCB = 1;
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
  v15 = 1 << displayMode;
  if ( (v15 & 0x31) == 0 )
  {
    if ( (v15 & 0xC) == 0 )
      return;
    maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj);
    if ( !maskPanel )
      goto LABEL_25;
    IsBuyAble = EventTradeListViewItem__get_IsBuyAble((EventTradeListViewItem_o *)maskPanel, (const MethodInfo *)obj);
    v17 = Method_EventTradeListViewItemManager_OnClickTradeStartButton__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickTradeStartButton__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1B64A18(Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    v18 = (System_Reflection_MethodBase_o *)sub_1B649E4(v17, v17[4]);
    if ( IsBuyAble )
    {
      OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
      if ( EventTradeListViewItemManager__TryGetAvailableStoreIdx(this, &storeIdx, v19) )
      {
        maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsNumConfirmDialog;
        if ( maskPanel )
        {
          EventTradeSweetsNumConfirmDialogComponent__Init(
            (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
            this->fields.currentEventId,
            0LL);
          tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
          Item = EventTradeListViewObject__GetItem(obj, v21);
          v23 = storeIdx;
          v24 = Item;
          v25 = (System_Action_int__int__int__o *)sub_1B64C4C(System_Action_int__int__int__TypeInfo);
          System_Action_int__int__int____ctor(
            v25,
            (Il2CppObject *)this,
            Method_EventTradeListViewItemManager_OnClickTradeStartDecide__,
            0LL);
          if ( tradeSweetsNumConfirmDialog )
          {
            EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v24, v23, v25, 0, 0LL);
            maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v26);
            if ( maskPanel )
            {
              klass = (struct EventTradeGoodsEntity_o *)maskPanel[5].klass;
              this->fields.selectTradeGoodsEntity = klass;
              sub_1B649A4(
                (ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity,
                (int32_t)klass,
                v27,
                v28);
              goto LABEL_18;
            }
          }
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13321/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_13320/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
        v33 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
        System_Action___ctor(
          v33,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog_30348628(
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
            0LL);
          return;
        }
      }
LABEL_25:
      sub_1B64C5C(maskPanel, obj);
    }
    OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0LL);
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
  NetworkManager_ResultCallbackFunc_o *v13; // x23

  if ( (byte_4A02DD0 & 1) == 0 )
  {
    sub_1B64A00(&Method_EventTradeListViewItemManager_TradeStartResponse__, *(_QWORD *)&storeIdx);
    sub_1B64A00(&Method_NetworkManager_getRequest_TradeStartRequest___, v9);
    sub_1B64A00(&NetworkManager_TypeInfo, v10);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    byte_4A02DD0 = 1;
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
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_TradeStartResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                   v13,
                                                                                   (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_TradeStartRequest___);
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
    sub_1B64C5C(tradeSweetsNumConfirmDialog, *(_QWORD *)&storeIdx);
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
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_GameObject_o **v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  unsigned int klass; // w8
  int v17; // w8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x21
  EventTradeListViewItem_o *Item; // x22
  System_Action_bool__o *v22; // x23

  if ( (byte_4A02DCE & 1) == 0 )
  {
    sub_1B64A00(&System_Action_bool__TypeInfo, obj);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__, v5);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__, v6);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo, v7);
    byte_4A02DCE = 1;
  }
  v8 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = obj;
  v13 = (UnityEngine_GameObject_o **)(v8 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)obj, v14, v15);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( !*v13 )
    goto LABEL_18;
  klass = (unsigned int)(*v13)[5].klass;
  if ( klass <= 5 )
  {
    v17 = 1 << klass;
    if ( (v17 & 0xD) != 0 )
    {
LABEL_15:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
        return;
      }
LABEL_18:
      sub_1B64C5C(maskPanel, v10);
    }
    if ( (v17 & 0x30) != 0 )
    {
      v18 = Method_EventTradeListViewItemManager_OnClickWithdrawalButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1B64A18(Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B649E4(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
      if ( !maskPanel )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Init(
        (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)maskPanel,
        this->fields.currentEventId,
        0LL);
      maskPanel = *v13;
      if ( !*v13 )
        goto LABEL_18;
      tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
      Item = EventTradeListViewObject__GetItem((EventTradeListViewObject_o *)maskPanel, v10);
      v22 = (System_Action_bool__o *)sub_1B64C4C(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v22,
        (Il2CppObject *)v8,
        Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__,
        0LL);
      if ( !tradeSweetsWithdrawalConfirmDialog )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Open(tradeSweetsWithdrawalConfirmDialog, Item, v22, 0LL);
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
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  EventTradeListViewItem_o **v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  EventTradeListViewItemManager_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x19
  EventTradeListViewItem_o *v24; // x20
  System_Action_bool__o *v25; // x21
  NetworkManager_ResultCallbackFunc_o *v26; // x21
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v29; // x21
  EventTradeListViewItem_o *v30; // x8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x9
  System_Int32_array *v32; // x20

  if ( (byte_4A02DD8 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_bool__TypeInfo, item);
    sub_1B64A00(&Method_EventTradeListViewItemManager_WithdrawalResponse__, v5);
    sub_1B64A00(&int___TypeInfo, v6);
    sub_1B64A00(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v7);
    sub_1B64A00(&NetworkManager_TypeInfo, v8);
    sub_1B64A00(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__, v10);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo, v11);
    byte_4A02DD8 = 1;
  }
  v12 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = item;
  v17 = (EventTradeListViewItem_o **)(v12 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)item, v18, v19);
  if ( EventTradeListViewItemManager__IsOverPossessionLimit(v20, v21)
    || EventTradeListViewItemManager__IsOverPresentBoxLimit(this, v22) )
  {
    tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
    v24 = *(EventTradeListViewItem_o **)(v12 + 24);
    v25 = (System_Action_bool__o *)sub_1B64C4C(System_Action_bool__TypeInfo);
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
    sub_1B64C5C(maskPanel, v14);
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
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64C4C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v26,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_WithdrawalResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v26,
                     (const MethodInfo_2EBD2C4 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  currentEventId = this->fields.currentEventId;
  v29 = (TradeReceiveRequest_o *)Request_object;
  maskPanel = sub_1B64AA8(int___TypeInfo, 1LL);
  v30 = *v17;
  if ( !*v17 )
    goto LABEL_18;
  TradeInfo_k__BackingField = v30->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_18;
  v32 = (System_Int32_array *)maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  if ( !*(_DWORD *)(maskPanel + 24) )
    sub_1B64C64(maskPanel, v14);
  *(_DWORD *)(maskPanel + 32) = TradeInfo_k__BackingField->fields.storeIdx;
  maskPanel = EventTradeListViewItem__get_NowCompleteNum(v30, v14);
  if ( !v29 )
    goto LABEL_18;
  TradeReceiveRequest__beginRequest(v29, currentEventId, v32, maskPanel, 1, 0LL);
}


void __fastcall EventTradeListViewItemManager__OnMoveEnd(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4A02DC9 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A02DC9 = 1;
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
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  BaseDialog_o **v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *Instance; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  System_String_o *v25; // x24
  CommonConfirmDialog_ClickDelegate_o *v26; // x25

  if ( (byte_4A02DCF & 1) == 0 )
  {
    sub_1B64A00(&CommonConfirmDialog_ClickDelegate_TypeInfo, item);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__, v7);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_13354/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, v9);
    sub_1B64A00(&StringLiteral_3736/*"COMMON_CONFIRM_EXECUTE"*/, v10);
    sub_1B64A00(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v11);
    sub_1B64A00(&StringLiteral_13353/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, v12);
    byte_4A02DCF = 1;
  }
  v13 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = item;
  v18 = (BaseDialog_o **)(v13 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)item, v19, v20);
  tradeSweetsWithdrawalConfirmDialog = (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !tradeSweetsWithdrawalConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(tradeSweetsWithdrawalConfirmDialog, 0LL) )
    return;
  tradeSweetsWithdrawalConfirmDialog = *v18;
  if ( !*v18 )
    goto LABEL_12;
  *(_DWORD *)(v13 + 32) = EventTradeListViewItem__get_NowCompleteNum(
                            (EventTradeListViewItem_o *)tradeSweetsWithdrawalConfirmDialog,
                            v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13354/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13353/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v26 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64C4C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v26,
    (Il2CppObject *)v13,
    Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_12:
    sub_1B64C5C(tradeSweetsWithdrawalConfirmDialog, v15);
  CommonUI__OpenConfirmDialog_30347384(
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
  System_Func_object__bool__o *v12; // x21
  Il2CppObject *v13; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *Entity; // x21
  EventTradeListViewItem_o *v17; // x20
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t storeIdx; // w22
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  System_Action_int__int__int__o *v21; // x23
  bool v22; // w19

  if ( (byte_4A02DDC & 1) == 0 )
  {
    sub_1B64A00(&System_Action_int__int__int__TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMaster_EventMaster___, v3);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___, v6);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__, v7);
    sub_1B64A00(&Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__, v8);
    sub_1B64A00(&System_Func_EventTradeListViewObject__bool__TypeInfo, v9);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    byte_4A02DDC = 1;
  }
  if ( !this->fields.selectTradeGoodsEntity )
    return 0;
  ObjectList = EventTradeListViewItemManager__get_ObjectList(this, method);
  v12 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_EventTradeListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__,
    0LL);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__48628184(
          (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields.currentEventId,
             (const MethodInfo_30D6798 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v13,
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
  if ( !v13
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventTradeListViewObject__GetItem(
                                                                        (EventTradeListViewObject_o *)v13,
                                                                        v15)) == 0LL )
  {
LABEL_22:
    sub_1B64C5C(Master_object, v15);
  }
  v17 = (EventTradeListViewItem_o *)Master_object;
  if ( !*(_QWORD *)&Master_object[1].fields.revision
    || !EventTradeListViewItem__get_IsRefillable((EventTradeListViewItem_o *)Master_object, v15) )
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
  TradeInfo_k__BackingField = v17->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_22;
  storeIdx = TradeInfo_k__BackingField->fields.storeIdx;
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  v21 = (System_Action_int__int__int__o *)sub_1B64C4C(System_Action_int__int__int__TypeInfo);
  System_Action_int__int__int____ctor(
    v21,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
    0LL);
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_22;
  v22 = 1;
  EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v17, storeIdx, v21, 1, 0LL);
  return v22;
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
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  EventTradeRewardDialogComponent_o *v16; // x27
  int32_t eventPointNum; // w26
  int32_t eventPointItemId; // w25
  int32_t currentEventId; // w24
  BattleDropItem_array *resultTradeRewardInfos; // x23
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x19
  BattleDropItem_array *v22; // x22
  System_Action_o *closeCallback; // x20

  if ( (byte_4A02DDB & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, resData);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__, v5);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo, v6);
    byte_4A02DDB = 1;
  }
  v7 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 24) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  tradeRewardDialog = this->fields.tradeRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradeRewardDialogComponent__Init(tradeRewardDialog, 0LL);
  tradeRewardDialog = (EventTradeRewardDialogComponent_o *)this->fields.tradePointRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradePointRewardDialogComponent__Init((EventTradePointRewardDialogComponent_o *)tradeRewardDialog, v9);
  if ( !resData )
    goto LABEL_14;
  resultEventRewardInfos = resData->fields.resultEventRewardInfos;
  *(_QWORD *)(v7 + 16) = resultEventRewardInfos;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)resultEventRewardInfos, v12, v13);
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
  v16 = this->fields.tradeRewardDialog;
  eventPointNum = resData->fields.eventPointNum;
  eventPointItemId = this->fields.eventPointItemId;
  currentEventId = this->fields.currentEventId;
  resultTradeRewardInfos = resData->fields.resultTradeRewardInfos;
  selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
  v22 = *(BattleDropItem_array **)(v7 + 16);
  closeCallback = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v7,
    Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__,
    0LL);
  if ( !v16 )
LABEL_14:
    sub_1B64C5C(tradeRewardDialog, v9);
  EventTradeRewardDialogComponent__Open(
    v16,
    eventPointNum,
    eventPointItemId,
    currentEventId,
    resultTradeRewardInfos,
    v22,
    selectTradeGoodsEntity,
    selectTradeGoodsEntity == 0LL,
    closeCallback,
    0LL);
}


void __fastcall EventTradeListViewItemManager__OpenSweetsNotificationDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  int64_t PickupList; // x0
  __int64 v9; // x1
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
  System_Action_o *v23; // x22
  EventTradeListViewItemManager_o *v24; // x0
  const MethodInfo *v25; // x1
  int64_t Time; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A02DE0 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__, v3);
    sub_1B64A00(&NetworkManager_TypeInfo, v4);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__, v5);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo, v6);
    byte_4A02DE0 = 1;
  }
  v7 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  PickupList = (int64_t)EventTradeListViewItemManager__GetPickupList(this, v12);
  if ( !PickupList )
    goto LABEL_14;
  v13 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)PickupList,
          (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__);
  *(_QWORD *)(v7 + 24) = v13;
  v14 = v7 + 24;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)v13, v15, v16);
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
  *(_QWORD *)(v7 + 32) = v18;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v18, v19, v20);
  PickupList = (int64_t)this->fields.tradePopularSweetsNotificationDialog;
  if ( !PickupList
    || (EventTradePopularSweetsNotificationDialogComponent__Init(
          (EventTradePopularSweetsNotificationDialogComponent_o *)PickupList,
          0LL),
        tradePopularSweetsNotificationDialog = this->fields.tradePopularSweetsNotificationDialog,
        v22 = *(EventTradeListViewItem_array **)(v7 + 24),
        v23 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v7,
          Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__,
          0LL),
        PickupList = EventTradeListViewItemManager__GetUpdateTime(v24, v25),
        !tradePopularSweetsNotificationDialog) )
  {
LABEL_14:
    sub_1B64C5C(PickupList, v9);
  }
  EventTradePopularSweetsNotificationDialogComponent__Open(
    tradePopularSweetsNotificationDialog,
    v22,
    v23,
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
  __int64 v11; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A02DC8 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__get_Current__, v5);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnMoveEnd__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventTradeListViewObject__get_Count__, v8);
    sub_1B64A00(&StringLiteral_9892/*"OnMoveEnd"*/, v9);
    byte_4A02DC8 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  ObjectList = (System_Collections_Generic_List_object__o *)EventTradeListViewItemManager__get_ObjectList(this, method);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      ObjectList,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__) )
    {
      current = v18.fields._current;
      v14 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B64C5C(v15, v16);
      EventTradeListViewObject__Init_45872892((EventTradeListViewObject_o *)current, 3, v14, v17);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__);
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
  System_Action_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  System_Action_object__o *v19; // x21
  System_Action_object__o *v20; // x22
  System_Action_object__o *v21; // x23
  System_Action_object__o *v22; // x24
  const MethodInfo *v23; // x5

  v4 = obj;
  if ( (byte_4A02DC7 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_EventTradeListViewObject__TypeInfo, obj);
    sub_1B64A00(&System_Action_TypeInfo, v6);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickReceiveButton__, v7);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__, v8);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__, v9);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__, v10);
    sub_1B64A00(&Method_EventTradeListViewItemManager_OnMoveEnd__, v11);
    sub_1B64A00(&EventTradeListViewObject_TypeInfo, v12);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v13);
    byte_4A02DC7 = 1;
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
    v15 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0LL);
    if ( !v4 )
      sub_1B64C5C(v16, v17);
    EventTradeListViewObject__Init_45872892((EventTradeListViewObject_o *)v4, 3, v15, v18);
    v19 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v19,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickTradeStartButton__,
      0LL);
    v20 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v20,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReceiveButton__,
      0LL);
    v21 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__,
      0LL);
    v22 = (System_Action_object__o *)sub_1B64C4C(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__,
      0LL);
    EventTradeListViewObject__SetOnClickAction(
      (EventTradeListViewObject_o *)v4,
      (System_Action_EventTradeListViewObject__o *)v19,
      (System_Action_EventTradeListViewObject__o *)v20,
      (System_Action_EventTradeListViewObject__o *)v21,
      (System_Action_EventTradeListViewObject__o *)v22,
      v23);
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
  __int64 v12; // x1
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeButtonBlinkEffect_k__BackingField; // x20
  ServantStatusBattleListViewItem_o *p_tradeButtonBlinkEffect; // x19
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Transform_o *v21; // x20

  if ( (byte_4A02DC2 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, method);
    sub_1B64A00(&LocalizationManager_TypeInfo, v3);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v4);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_3442/*"CHECK_TRADE_BUTTON_LABEL"*/, v6);
    sub_1B64A00(&StringLiteral_17445/*"btn_getreward"*/, v7);
    byte_4A02DC2 = 1;
  }
  currentEventId = this->fields.currentEventId;
  receiveAllButtonSprite = this->fields.receiveAllButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37549424(currentEventId, receiveAllButtonSprite, (System_String_o *)StringLiteral_17445/*"btn_getreward"*/, 0LL);
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
        v18 = UnityEngine_Object__Instantiate_object__49014464(
                TradeButtonBlinkEffect_k__BackingField,
                transform,
                (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
        p_tradeButtonBlinkEffect->klass = (ServantStatusBattleListViewItem_c *)v18;
        sub_1B649A4(p_tradeButtonBlinkEffect, (int32_t)v18, v19, v20);
        receiveAllButton = (__int64)p_tradeButtonBlinkEffect->klass;
        if ( p_tradeButtonBlinkEffect->klass )
        {
          receiveAllButton = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)receiveAllButton,
                                        0LL);
          v21 = (UnityEngine_Transform_o *)receiveAllButton;
          if ( !byte_49F9826 )
          {
            receiveAllButton = sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v12);
            byte_49F9826 = 1;
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
    sub_1B64C5C(receiveAllButton, v12);
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
  __int64 v14; // x1
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *tradePointRewardDialog; // x20
  struct EventTradeAssetManager_o *v22; // x8
  Il2CppObject *TradePointRewardDialog_k__BackingField; // x20
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
  struct EventTradeAssetManager_o *v29; // x8
  Il2CppObject *TradeSweetsNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  struct EventTradeAssetManager_o *v36; // x8
  Il2CppObject *TradeSweetsWithdrawalConfirmDialog_k__BackingField; // x20
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  const MethodInfo *v41; // x2
  UnityEngine_Object_o *tradePopularSweetsNotificationDialog; // x20
  struct EventTradeAssetManager_o *v43; // x8
  Il2CppObject *TradePopularSweetsNotificationDialog_k__BackingField; // x20
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  const MethodInfo *v48; // x2
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  struct EventTradeAssetManager_o *v50; // x8
  Il2CppObject *TradePickupInfoBoard_k__BackingField; // x20
  struct EventTradePickupInfoDispControl_o **p_currentPickupInfoDispControl; // x20
  Il2CppObject *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  UnityEngine_GameObject_o *v56; // x0
  const MethodInfo *v57; // x2
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  struct EventTradeAssetManager_o *v59; // x8
  Il2CppObject *v60; // x20
  struct EventTradePickupInfoDispControl_o **p_nextPickupInfoDispControl; // x20
  Il2CppObject *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  UnityEngine_GameObject_o *v65; // x1
  const MethodInfo *v66; // x2

  if ( (byte_4A02DC1 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___, v3);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___, v4);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___, v5);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___, v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___, v7);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&StringLiteral_9369/*"NextTradePickupInfoBoard"*/, v10);
    sub_1B64A00(&StringLiteral_4920/*"CurrentTradePickupInfoBoard"*/, v11);
    byte_4A02DC1 = 1;
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
                                               (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___);
    this->fields.tradeRewardDialog = (struct EventTradeRewardDialogComponent_o *)Component_object;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeRewardDialog,
      (int32_t)Component_object,
      v18,
      v19);
    EventTradeListViewItemManager__LocateDialogToTradePanel(this, (BaseDialog_o *)this->fields.tradeRewardDialog, v20);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v22 = this->fields.assetManager;
    if ( !v22 )
      goto LABEL_66;
    TradePointRewardDialog_k__BackingField = (Il2CppObject *)v22->fields._TradePointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePointRewardDialog_k__BackingField,
                                               (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v24 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___);
    this->fields.tradePointRewardDialog = (struct EventTradePointRewardDialogComponent_o *)v24;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tradePointRewardDialog, (int32_t)v24, v25, v26);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePointRewardDialog,
      v27);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsNumConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v29 = this->fields.assetManager;
    if ( !v29 )
      goto LABEL_66;
    TradeSweetsNumConfirmDialog_k__BackingField = (Il2CppObject *)v29->fields._TradeSweetsNumConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsNumConfirmDialog_k__BackingField,
                                               (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v31 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___);
    this->fields.tradeSweetsNumConfirmDialog = (struct EventTradeSweetsNumConfirmDialogComponent_o *)v31;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsNumConfirmDialog, (int32_t)v31, v32, v33);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsNumConfirmDialog,
      v34);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsWithdrawalConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v36 = this->fields.assetManager;
    if ( !v36 )
      goto LABEL_66;
    TradeSweetsWithdrawalConfirmDialog_k__BackingField = (Il2CppObject *)v36->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsWithdrawalConfirmDialog_k__BackingField,
                                               (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v38 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___);
    this->fields.tradeSweetsWithdrawalConfirmDialog = (struct EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v38;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsWithdrawalConfirmDialog,
      (int32_t)v38,
      v39,
      v40);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog,
      v41);
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
    v43 = this->fields.assetManager;
    if ( !v43 )
      goto LABEL_66;
    TradePopularSweetsNotificationDialog_k__BackingField = (Il2CppObject *)v43->fields._TradePopularSweetsNotificationDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePopularSweetsNotificationDialog_k__BackingField,
                                               (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v45 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___);
    this->fields.tradePopularSweetsNotificationDialog = (struct EventTradePopularSweetsNotificationDialogComponent_o *)v45;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradePopularSweetsNotificationDialog,
      (int32_t)v45,
      v46,
      v47);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePopularSweetsNotificationDialog,
      v48);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(currentPickupInfoDispControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v50 = this->fields.assetManager;
    if ( !v50 )
      goto LABEL_66;
    TradePickupInfoBoard_k__BackingField = (Il2CppObject *)v50->fields._TradePickupInfoBoard_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePickupInfoBoard_k__BackingField,
                                               (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    p_currentPickupInfoDispControl = &this->fields.currentPickupInfoDispControl;
    v53 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
    this->fields.currentPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v53;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.currentPickupInfoDispControl, (int32_t)v53, v54, v55);
    gameObject = (UnityEngine_GameObject_o *)this->fields.currentPickupInfoDispControl;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_4920/*"CurrentTradePickupInfoBoard"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)*p_currentPickupInfoDispControl;
    if ( !*p_currentPickupInfoDispControl )
      goto LABEL_66;
    v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    EventTradeListViewItemManager__LocateObjectToTradePanel(this, v56, v57);
  }
  nextPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.nextPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(nextPickupInfoDispControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v59 = this->fields.assetManager;
    if ( v59 )
    {
      v60 = (Il2CppObject *)v59->fields._TradePickupInfoBoard_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                 v60,
                                                 (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( gameObject )
      {
        p_nextPickupInfoDispControl = &this->fields.nextPickupInfoDispControl;
        v62 = UnityEngine_GameObject__GetComponent_object_(
                gameObject,
                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
        this->fields.nextPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v62;
        sub_1B649A4(
          (ServantStatusBattleListViewItem_o *)&this->fields.nextPickupInfoDispControl,
          (int32_t)v62,
          v63,
          v64);
        gameObject = (UnityEngine_GameObject_o *)this->fields.nextPickupInfoDispControl;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_9369/*"NextTradePickupInfoBoard"*/, 0LL);
            gameObject = (UnityEngine_GameObject_o *)*p_nextPickupInfoDispControl;
            if ( *p_nextPickupInfoDispControl )
            {
              v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              EventTradeListViewItemManager__LocateObjectToTradePanel(this, v65, v66);
              return;
            }
          }
        }
      }
    }
LABEL_66:
    sub_1B64C5C(gameObject, v14);
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
  __int64 v13; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x20
  EventTradeStoreMaster_o *v19; // x20
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_4A02DD9 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___, v6);
    sub_1B64A00(&JsonManager_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v8);
    sub_1B64A00(&StringLiteral_15747/*"["*/, v9);
    sub_1B64A00(&StringLiteral_16003/*"]"*/, v10);
    byte_4A02DD9 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21971/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v11);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v15,
      v16);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v17);
    v18 = (Il2CppObject *)System_String__Concat_61396396(
                            (System_String_o *)StringLiteral_15747/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16003/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v18,
                                                 (const MethodInfo_2EA17B4 *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel
      || (v19 = Master_object,
          (Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this->fields.touchPanel,
                                                        0LL)) == 0LL)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel) == 0LL)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL),
          EventTradeListViewItemManager__RequestListObject(this, v20),
          !v19) )
    {
LABEL_15:
      sub_1B64C5C(Master_object, v13);
    }
    if ( !LODWORD(v19->fields._MasterName_k__BackingField) )
      sub_1B64C64(Master_object, v13);
    EventTradeListViewItemManager__OpenRewardDialog(
      this,
      (EventTradeListViewItemManager_ResData_o *)v19->fields.list,
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
  __int64 v9; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_4A02DD5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v6);
    byte_4A02DD5 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21971/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v7);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v11,
      v12);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v13);
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
          EventTradeListViewItemManager__RequestListObject(this, v14),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0LL)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0LL),
          !playVoiceAction) )
    {
LABEL_15:
      sub_1B64C5C(Master_object, v9);
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
  __int64 v9; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20

  if ( (byte_4A02DD4 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v6);
    byte_4A02DD4 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21971/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v7);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_13;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v11,
      v12);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v13);
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
          EventTradeListViewItemManager__RequestListObject(this, v14),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0LL)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeStartVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0LL),
          !playVoiceAction) )
    {
LABEL_13:
      sub_1B64C5C(Master_object, v9);
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
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x24
  unsigned __int64 v13; // x25
  __int64 v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
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

  if ( (byte_4A02DD3 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_int____75719440, storeIdx);
    sub_1B64A00(&Method_DataManager_GetMaster_UserEventTradeMaster___, v5);
    sub_1B64A00(&DataManager_TypeInfo, v6);
    sub_1B64A00(&System_Func_int__bool__TypeInfo, v7);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__, v8);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo, v9);
    byte_4A02DD3 = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  *storeIdx = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
      v13 = 0LL;
      while ( 1 )
      {
        v14 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v14, 0LL);
        if ( v13 >= tradeStoreEntities->max_length )
          goto LABEL_27;
        if ( !v14 )
          goto LABEL_26;
        v17 = tradeStoreEntities->m_Items[v13];
        *(_QWORD *)(v14 + 16) = v17;
        v18 = v14 + 16;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v17, v15, v16);
        v19 = usedStoreIdx;
        v20 = (System_Func_int__bool__o *)sub_1B64C4C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v20,
          (Il2CppObject *)v14,
          Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__,
          0LL);
        Master_object = (UserEventTradeMaster_o *)BasicHelper__Any_int__48393956(
                                                    v19,
                                                    (System_Func_T__bool__o *)v20,
                                                    (const MethodInfo_2E26EE4 *)Method_BasicHelper_Any_int____75719440);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        if ( (__int64)++v13 >= (int)tradeStoreEntities->max_length )
          return 0;
      }
      if ( *(_QWORD *)v18 )
      {
        *v25 = *(_DWORD *)(*(_QWORD *)v18 + 20LL);
        return 1;
      }
LABEL_26:
      sub_1B64C5C(Master_object, v11);
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
    sub_1B64C64(Master_object, v11);
  v23 = v21->m_Items[0];
  if ( !v23 )
    goto LABEL_26;
  *storeIdx = v23->fields.idx;
  return 1;
}


void __fastcall EventTradeListViewItemManager__UpdateNoticeButtonDisp(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *tradeNoticeBtnSp; // x0
  __int64 *v5; // x8

  if ( (byte_4A02DE5 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_17459/*"btn_on"*/, method);
    sub_1B64A00(&StringLiteral_17458/*"btn_off"*/, v3);
    byte_4A02DE5 = 1;
  }
  tradeNoticeBtnSp = this->fields.tradeNoticeBtnSp;
  if ( !tradeNoticeBtnSp )
    sub_1B64C5C(0LL, method);
  if ( this->fields.isButtonOn )
    v5 = &StringLiteral_17459/*"btn_on"*/;
  else
    v5 = &StringLiteral_17458/*"btn_off"*/;
  UISprite__set_spriteName(tradeNoticeBtnSp, (System_String_o *)*v5, 0LL);
}


void __fastcall EventTradeListViewItemManager__UpdateReceiveAllButtonState(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventTradeListViewItemManager___c_c *v7; // x0
  System_Collections_Generic_List_T__o *itemList; // x20
  System_Func_object__bool__o *_9__85_0; // x21
  Il2CppObject *v10; // x22
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UIWidget_o *receiveAllButtonLabel; // x0
  __int64 v15; // x1
  long double v16; // q0
  struct UICommonButton_o *receiveAllButton; // x8
  char v18; // w20
  __int64 v19; // x1
  float v20; // s8
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A02DE2 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_ListViewItem___, method);
    sub_1B64A00(&System_Func_ListViewItem__bool__TypeInfo, v3);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__, v5);
    sub_1B64A00(&EventTradeListViewItemManager___c_TypeInfo, v6);
    byte_4A02DE2 = 1;
  }
  v7 = EventTradeListViewItemManager___c_TypeInfo;
  itemList = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v7 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__85_0 = (System_Func_object__bool__o *)v7->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__85_0 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__85_0,
      v10,
      Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_ListViewItem__bool__o *)_9__85_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v12, v13);
  }
  receiveAllButtonLabel = (UIWidget_o *)BasicHelper__Any_object_(
                                          itemList,
                                          (System_Func_T__bool__o *)_9__85_0,
                                          (const MethodInfo_2E27164 *)Method_BasicHelper_Any_ListViewItem___);
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
    sub_1B64C5C(receiveAllButtonLabel, v15);
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
  if ( (byte_4A02DE8 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_UserEventTradeMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(&int_TypeInfo, v4);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_13341/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/, v6);
    this = (EventTradeListViewItemManager_o *)sub_1B64A00(&StringLiteral_13340/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/, v7);
    byte_4A02DE8 = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  tradeStoreEntities = v2->fields.tradeStoreEntities;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradeListViewItemManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
  v12 = (System_String_o **)(max_length == v10 ? &StringLiteral_13341/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_13340/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/);
  v13 = *v12;
  tradeQuotaLb = v2->fields.tradeQuotaLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = LocalizationManager__Get(v13, 0LL);
  v25 = v11;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v16, v17, v18);
  v24 = max_length;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22);
  this = (EventTradeListViewItemManager_o *)System_String__Format_61399508(v15, v19, v23, 0LL);
  if ( !tradeQuotaLb )
LABEL_20:
    sub_1B64C5C(this, method);
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
  EventTradeListViewItemManager_ResData_o *list; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  Il2CppObject *v18; // x20
  EventTradeStoreMaster_o *v19; // x20
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  struct BattleDropItem_array *resultTradeRewardInfos; // x8

  if ( (byte_4A02DDA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___, v6);
    sub_1B64A00(&JsonManager_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_21971/*"ng"*/, v8);
    sub_1B64A00(&StringLiteral_15747/*"["*/, v9);
    sub_1B64A00(&StringLiteral_16003/*"]"*/, v10);
    byte_4A02DDA = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21971/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v11);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_19;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v15,
      v16);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v17);
    v18 = (Il2CppObject *)System_String__Concat_61396396(
                            (System_String_o *)StringLiteral_15747/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16003/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v18,
                                                 (const MethodInfo_2EA17B4 *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel )
      goto LABEL_19;
    v19 = Master_object;
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
    EventTradeListViewItemManager__RequestListObject(this, v20);
    if ( !v19 )
      goto LABEL_19;
    if ( !LODWORD(v19->fields._MasterName_k__BackingField) )
      sub_1B64C64(Master_object, list);
    list = (EventTradeListViewItemManager_ResData_o *)v19->fields.list;
    if ( !list || (resultTradeRewardInfos = list->fields.resultTradeRewardInfos) == 0LL )
LABEL_19:
      sub_1B64C5C(Master_object, list);
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
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v13; // x20

  if ( (byte_4A02DE9 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, isOpenPresentBox);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__, v5);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo, v6);
    byte_4A02DE9 = 1;
  }
  v7 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 24) = this,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11),
        *(_BYTE *)(v7 + 16) = isOpenPresentBox,
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v13 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v7,
          Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_1B64C5C(v8, v9);
  }
  PresentBoxOverDialog__Close_45781356(presentBoxOverDlg, v13, 0LL);
}


void __fastcall EventTradeListViewItemManager___OnClickTradeStartButton_b__62_0(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1B64C5C(0LL, method);
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
    sub_1B64C5C(this, x);
  }
  return dragParentObject->fields.m_CachedPtr == selectTradeGoodsEntity->fields.id;
}


System_Collections_Generic_List_EventTradeListViewObject__o *__fastcall EventTradeListViewItemManager__get_ObjectList(
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
  __int64 v12; // x1
  __int64 v13; // x19
  System_Collections_Generic_List_object__o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  EventTradeListViewItemManager___c_c *v19; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  System_Func_object__bool__o *_9__48_0; // x22
  Il2CppObject *v22; // x23
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_object__o *v27; // x21
  System_Action_object__o *v28; // x22

  if ( (byte_4A02DC0 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_GameObject__TypeInfo, method);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_GameObject___, v3);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_GameObject___, v4);
    sub_1B64A00(&System_Func_GameObject__bool__TypeInfo, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__ForEach__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__, v7);
    sub_1B64A00(&System_Collections_Generic_List_EventTradeListViewObject__TypeInfo, v8);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__, v9);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__, v10);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo, v11);
    sub_1B64A00(&EventTradeListViewItemManager___c_TypeInfo, v12);
    byte_4A02DC0 = 1;
  }
  v13 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventTradeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = v14;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)v14, v17, v18);
  v19 = EventTradeListViewItemManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v19 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__bool__o *)v19->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__48_0 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__48_0,
      v22,
      Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_GameObject__bool__o *)_9__48_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v24, v25);
  }
  v26 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__48_0,
          (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v27 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v26,
                                                       (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v28 = (System_Action_object__o *)sub_1B64C4C(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)v13,
    Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__,
    0LL);
  if ( !v27 )
LABEL_12:
    sub_1B64C5C(v15, v16);
  System_Collections_Generic_List_object___ForEach(
    v27,
    (System_Action_T__o *)v28,
    (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  return *(System_Collections_Generic_List_EventTradeListViewObject__o **)(v13 + 16);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A02DEA & 1) == 0 )
  {
    sub_1B64A00(&EventTradeListViewItemManager___c_TypeInfo, v1);
    byte_4A02DEA = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(EventTradeListViewItemManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTradeListViewItemManager___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemManager___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)EventTradeListViewItemManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4A02DED & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__, v5);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo, v6);
    byte_4A02DED = 1;
  }
  v7 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__,
          0LL),
        !Instance) )
  {
    sub_1B64C5C(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
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
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4A02DEE & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__, v5);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo, v6);
    byte_4A02DEE = 1;
  }
  v7 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__,
          0LL),
        !Instance) )
  {
    sub_1B64C5C(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
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
  __int64 v9; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v11; // x21

  if ( (byte_4A02DEF & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__, v5);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo, v6);
    byte_4A02DEF = 1;
  }
  v7 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_DWORD *)(v7 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v7,
          Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B64C5C(v8, v9);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v11, 0LL);
}


bool __fastcall EventTradeListViewItemManager___c___IsOverPresentBoxLimit_b__87_0(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  __int64 v5; // x8

  if ( (byte_4A02DF0 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1B64A00(&EventTradeListViewItem_TypeInfo, item);
    byte_4A02DF0 = 1;
  }
  if ( !item )
LABEL_12:
    sub_1B64C5C(this, item);
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
  {
    sub_1B64F1C(item);
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

  if ( (byte_4A02DF1 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1B64A00(&EventTradeListViewItem_TypeInfo, item);
    byte_4A02DF1 = 1;
  }
  if ( !item )
LABEL_8:
    sub_1B64C5C(this, item);
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
  {
    sub_1B64F1C(item);
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
  if ( (byte_4A02DEC & 1) == 0 )
  {
    sub_1B64A00(&EventTradeListViewItem_TypeInfo, item);
    byte_4A02DEC = 1;
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
  if ( (byte_4A02DEB & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, go);
    byte_4A02DEB = 1;
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
  if ( (byte_4A02DF2 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___, go);
    this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)sub_1B64A00(
                                                                      &Method_System_Collections_Generic_List_EventTradeListViewObject__Add__,
                                                                      v5);
    byte_4A02DF2 = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          go,
                                                                          (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___),
        !list)
    || (items = list->fields._items,
        v10 = Method_System_Collections_Generic_List_EventTradeListViewObject__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_1B64C5C(this, go);
  }
  size = list->fields._size;
  v12 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    list->fields._size = size + 1;
    v13 = &items->obj.klass + size;
    v13[4] = (Il2CppClass *)v12;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
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
    sub_1B64C5C(this, value);
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
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x19
  System_Action_o *v14; // x20

  if ( (byte_4A02DF3 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, decide);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__, v6);
    sub_1B64A00(&EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo, v7);
    byte_4A02DF3 = 1;
  }
  v8 = sub_1B64C4C(EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 24) = this,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 16) = decide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)v8,
          Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B64C5C(v9, v10);
  }
  CommonUI__CloseConfirmDialog_30348004((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass66_0___OpenReconfirmDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64C5C(this, method);
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
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v14; // x8
  int32_t oldCompleteNum; // w20
  const MethodInfo *v16; // x2
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v17; // x8
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v20; // x23
  System_Action_o *_9__2; // x22
  EventTradeListViewItemManager___c__DisplayClass66_1_o *v22; // x19
  int32_t v23; // w2
  int32_t v24; // w3

  v4 = this;
  if ( (byte_4A02DF4 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B64A00(&string_TypeInfo, v7);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__, v8);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1B64A00(&StringLiteral_13339/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/, v9);
    byte_4A02DF4 = 1;
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
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&_4__this->fields.selectTradeGoodsEntity,
      (int32_t)TradeGoodsEntity_k__BackingField,
      v2,
      v3);
    v14 = v4->fields.CS___8__locals1;
    if ( !v14 )
      goto LABEL_23;
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v14->fields.item;
    if ( !this )
      goto LABEL_23;
    oldCompleteNum = v14->fields.oldCompleteNum;
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)EventTradeListViewItem__get_NowCompleteNum(
                                                                      (EventTradeListViewItem_o *)this,
                                                                      method);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v17 = v4->fields.CS___8__locals1;
      if ( v17 )
      {
        this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v17->fields.__4__this;
        if ( this )
        {
          EventTradeListViewItemManager__OnClickWithdrawalDecide(
            (EventTradeListViewItemManager_o *)this,
            v17->fields.item,
            v16);
          return;
        }
      }
LABEL_23:
      sub_1B64C5C(this, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13339/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
                                                                      0LL);
    v20 = v4->fields.CS___8__locals1;
    if ( !v20 )
      goto LABEL_23;
    _9__2 = v20->fields.__9__2;
    v22 = this;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v20,
        Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__,
        0LL);
      v20->fields.__9__2 = _9__2;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v20->fields.__9__2, (int32_t)_9__2, v23, v24);
    }
    if ( !Instance )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      Empty,
      (System_String_o *)v22,
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
    sub_1B64C5C(this, idx);
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
    sub_1B64C5C(_4__this, onDecide);
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
  const MethodInfo *v2; // x6
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleDropItem_array *resultEventRewardInfos; // x19
  struct EventTradeListViewItemManager_o *_4__this; // x8
  EventTradePointRewardDialogComponent_o *tradePointRewardDialog; // x21
  int32_t eventPointItemId; // w22
  int32_t currentEventId; // w23
  struct EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x26
  System_Action_o *_9__1; // x24
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Action_BattleDropItem____int__Action__o *rewardDialogCallBack; // x23
  System_Action_o *_9__2; // x21
  int32_t v17; // w2
  int32_t v18; // w3

  v3 = this;
  if ( (byte_4A02DF5 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__, v4);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B64A00(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__,
                                                                      v5);
    byte_4A02DF5 = 1;
  }
  resultEventRewardInfos = v3->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_14;
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( *(_QWORD *)&resultEventRewardInfos->max_length )
  {
    tradePointRewardDialog = _4__this->fields.tradePointRewardDialog;
    eventPointItemId = _4__this->fields.eventPointItemId;
    currentEventId = _4__this->fields.currentEventId;
    selectTradeGoodsEntity = _4__this->fields.selectTradeGoodsEntity;
    _9__1 = v3->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)v3,
        Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__,
        0LL);
      v3->fields.__9__1 = _9__1;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v13, v14);
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
        v2);
      return;
    }
LABEL_14:
    sub_1B64C5C(this, method);
  }
  rewardDialogCallBack = _4__this->fields.rewardDialogCallBack;
  _9__2 = v3->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v17, v18);
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
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v2; // x19
  __int64 v3; // x1
  struct EventTradeListViewItemManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *rewardDialogCallBack; // x23
  System_Action_o *_9__3; // x21
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  v2 = this;
  if ( (byte_4A02DF6 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B64A00(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__,
                                                                      v3);
    byte_4A02DF6 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  rewardDialogCallBack = _4__this->fields.rewardDialogCallBack;
  _9__3 = v2->fields.__9__3;
  resultEventRewardInfos = v2->fields.resultEventRewardInfos;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v8, v9);
  }
  if ( !rewardDialogCallBack )
LABEL_8:
    sub_1B64C5C(this, method);
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
  const MethodInfo *v2; // x3
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__5; // x22
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21
  int32_t v8; // w2
  int32_t v9; // w3

  v3 = this;
  if ( (byte_4A02DF8 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B64A00(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__,
                                                                      v4);
    byte_4A02DF8 = 1;
  }
  _9__5 = v3->fields.__9__5;
  _4__this = v3->fields.__4__this;
  oldEventPoint = v3->fields.oldEventPoint;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__,
      0LL);
    v3->fields.__9__5 = _9__5;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v8, v9);
  }
  if ( !_4__this )
    sub_1B64C5C(this, method);
  EventTradeListViewItemManager__CheckOpenQuest(_4__this, oldEventPoint, _9__5, v2);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__3(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__4; // x22
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21
  int32_t v8; // w2
  int32_t v9; // w3

  v3 = this;
  if ( (byte_4A02DF7 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B64A00(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__,
                                                                      v4);
    byte_4A02DF7 = 1;
  }
  _9__4 = v3->fields.__9__4;
  _4__this = v3->fields.__4__this;
  oldEventPoint = v3->fields.oldEventPoint;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__,
      0LL);
    v3->fields.__9__4 = _9__4;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v3->fields.__9__4, (int32_t)_9__4, v8, v9);
  }
  if ( !_4__this )
    sub_1B64C5C(this, method);
  EventTradeListViewItemManager__CheckOpenQuest(_4__this, oldEventPoint, _9__4, v2);
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
      sub_1B64C5C(_4__this, method);
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
      sub_1B64C5C(_4__this, method);
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
  __int64 v7; // x1
  struct EventTradeListViewItemManager_o *_4__this; // x8
  struct EventTradeListViewItem_array *itemList; // x8
  EventTradeListViewItem_o *v10; // x8
  EventTradeGoodsMaster_o *klass; // x2
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  struct EventTradeListViewItemManager_o *v15; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x9

  if ( (byte_4A02DF9 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_Empty_string___, method);
    sub_1B64A00(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v3);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_14481/*"TradeNotificationDialogOpenTime"*/, v5);
    byte_4A02DF9 = 1;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_14481/*"TradeNotificationDialogOpenTime"*/, this->fields.openTime, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
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
        sub_1B64C64(Master_object, v7);
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
    sub_1B64C5C(Master_object, v7);
  }
  v12 = Method_System_Array_Empty_string___;
  v13 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v13 )
  {
    sub_1BB6938(Method_System_Array_Empty_string___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB68DC(v14);
  if ( !*(_DWORD *)(v14 + 224) )
    j_il2cpp_runtime_class_init_0(v14);
  Master_object = *(EventTradeGoodsMaster_o **)(v12[7] + 16LL);
  if ( (*((_BYTE *)&Master_object[4].fields._MasterKind_k__BackingField + 5) & 1) == 0 )
    Master_object = (EventTradeGoodsMaster_o *)sub_1BB68DC(Master_object);
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
  SceneJumpInfo_o *v8; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w1
  Il2CppObject *v12; // x3

  if ( (byte_4A02DFA & 1) == 0 )
  {
    sub_1B64A00(&SceneJumpInfo_TypeInfo, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B64A00(&StringLiteral_12529/*"SellServant"*/, v4);
    sub_1B64A00(&StringLiteral_12566/*"ServantCombine"*/, v5);
    byte_4A02DFA = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1B64C4C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279460(v8, (System_String_o *)StringLiteral_12529/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v11 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B64C5C(v9, v10);
    case 1:
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v9 )
      {
        v11 = 71;
        v12 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v8 = (SceneJumpInfo_o *)sub_1B64C4C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279372(v8, (System_String_o *)StringLiteral_12566/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v11 = 32;
LABEL_10:
        v9 = Instance;
        v12 = (Il2CppObject *)v8;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v9, v11, 1, v12, 0LL);
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
  SceneJumpInfo_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_4A02DFB & 1) == 0 )
  {
    sub_1B64A00(&SceneJumpInfo_TypeInfo, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B64A00(&StringLiteral_12570/*"ServantEquipList"*/, v4);
    sub_1B64A00(&StringLiteral_12529/*"SellServant"*/, v5);
    sub_1B64A00(&StringLiteral_12569/*"ServantEQCombine"*/, v6);
    byte_4A02DFB = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B64C4C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279460(v9, (System_String_o *)StringLiteral_12529/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v12 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B64C5C(v10, v11);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B64C4C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279372(v9, (System_String_o *)StringLiteral_12570/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v12 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v9 = (SceneJumpInfo_o *)sub_1B64C4C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38279372(v9, (System_String_o *)StringLiteral_12569/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v12 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v12, 1, (Il2CppObject *)v9, 0LL);
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
  SceneJumpInfo_o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A02DFC & 1) == 0 )
  {
    sub_1B64A00(&SceneJumpInfo_TypeInfo, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1B64A00(&StringLiteral_12529/*"SellServant"*/, v4);
    byte_4A02DFC = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v6 = (SceneJumpInfo_o *)sub_1B64C4C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_38279460(v6, (System_String_o *)StringLiteral_12529/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B64C5C(v7, v8);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v6, 0LL);
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
      sub_1B64C5C(this, method);
    boxOverDlgCloseCallBack = _4__this->fields.boxOverDlgCloseCallBack;
    if ( boxOverDlgCloseCallBack )
      ActionExtensions__Call(boxOverDlgCloseCallBack, 0LL);
  }
}
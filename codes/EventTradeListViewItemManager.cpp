void __fastcall EventTradeListViewItemManager___ctor(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CURRENT_PICKUP_INFO_BOARD_POS.fields.x = xmmword_BB4850;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager__CheckIsSerializeFieldNotNull(
        Il2CppObject *targetObj,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  int monitor; // w8
  Il2CppObject *v4; // x20
  unsigned int v5; // w24
  System_Reflection_MemberInfo_o *v6; // x21
  intptr_t v7; // w22
  System_Type_o *TypeFromHandle; // x0
  int v9; // w22
  __int64 v10; // x23
  System_RuntimeTypeHandle_o v11; // 0:w0.4
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  v2 = targetObj;
  if ( (byte_4A5F4AA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_var);
    sub_1B885B0(&UnityEngine_SerializeField_var);
    targetObj = (Il2CppObject *)sub_1B885B0(&System_Type_TypeInfo);
    byte_4A5F4AA = 1;
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
  v4 = targetObj;
  if ( monitor >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= monitor )
        sub_1B88814(targetObj, method);
      v6 = (System_Reflection_MemberInfo_o *)*((_QWORD *)&v4[2].klass + (int)v5);
      v7 = (int)UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      v11.fields.value = v7;
      TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0LL);
      targetObj = (Il2CppObject *)System_Reflection_CustomAttributeExtensions__IsDefined(v6, TypeFromHandle, 0LL);
      if ( !v6 )
        break;
      v9 = (int)targetObj;
      v10 = ((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, void *))v6->klass[1]._1.namespaze)(
              v6,
              v6->klass[1]._1.byval_arg.data);
      v12.fields.value = (int)UnityEngine_Object_var;
      targetObj = (Il2CppObject *)System_Type__GetTypeFromHandle(v12, 0LL);
      if ( !v10 )
        break;
      targetObj = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v10 + 648LL))(
                                    v10,
                                    targetObj,
                                    *(_QWORD *)(*(_QWORD *)v10 + 656LL));
      if ( (v9 & (unsigned int)targetObj & 1) != 0 )
        targetObj = (Il2CppObject *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, Il2CppObject *, Il2CppClass **))v6->klass[1]._1.methods)(
                                      v6,
                                      v2,
                                      v6->klass[1]._1.nestedTypes);
      monitor = (int)v4[1].monitor;
      if ( (int)++v5 >= monitor )
        return;
    }
LABEL_17:
    sub_1B8880C(targetObj, method);
  }
}


void __fastcall EventTradeListViewItemManager__CheckOpenQuest(
        EventTradeListViewItemManager_o *this,
        int32_t oldEventPoint,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t currentEventId; // w22
  Il2CppObject *Instance; // x0
  int32_t v9; // w22
  CommonUI_o *v10; // x23
  System_Action_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A5F4A6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&EventInfoTradeRankControl_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F4A6 = 1;
  }
  currentEventId = this->fields.currentEventId;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
  EventInfoTradeRankControl__UpdateOldPoint(currentEventId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = this->fields.currentEventId;
  v10 = (CommonUI_o *)Instance;
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__, 0LL);
  if ( !v10 )
    sub_1B8880C(v12, v13);
  if ( !CommonUI__CheckOpenQuestByEventPoint(
          v10,
          v9,
          oldEventPoint,
          v11,
          0,
          -2.0,
          0,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL) )
    ActionExtensions__Call(callback, 0LL);
}


void __fastcall EventTradeListViewItemManager__CreateList(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v4; // x1
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x25
  int max_length; // w8
  unsigned int v7; // w26
  EventTradeGoodsEntity_o *v8; // x21
  int32_t id; // w22
  int32_t currentEventId; // w23
  System_Action_o *v11; // x24
  EventTradeListViewItem_o *v12; // x20
  const MethodInfo *v13; // x5
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  struct EventTradeGoodsEntity_array *v20; // x8
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_4A5F48D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__);
    sub_1B885B0(&EventTradeListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5703/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_4A5F48D = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_20;
  max_length = tradeGoodsEntities->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B88814(itemList, v4);
      v8 = tradeGoodsEntities->m_Items[v7];
      if ( !v8 )
        break;
      id = v8->fields.id;
      currentEventId = this->fields.currentEventId;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)this,
        Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
        0LL);
      v12 = (EventTradeListViewItem_o *)sub_1B887FC(EventTradeListViewItem_TypeInfo);
      EventTradeListViewItem___ctor(v12, id, v8, currentEventId, v11, v13);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v12,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_14;
    }
LABEL_20:
    sub_1B8880C(itemList, v4);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  v20 = this->fields.tradeGoodsEntities;
  if ( !v20 )
    goto LABEL_20;
  if ( !*(_QWORD *)&v20->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5703/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
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

  if ( (byte_4A5F48F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F48F = 1;
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
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    this->fields.tradeRewardDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tradeRewardDialog, 0, v9, v10);
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
    UnityEngine_Object__Destroy_69459380(v12, 0LL);
    this->fields.tradePointRewardDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tradePointRewardDialog, 0, v13, v14);
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
    UnityEngine_Object__Destroy_69459380(v16, 0LL);
    this->fields.tradeSweetsNumConfirmDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsNumConfirmDialog, 0, v17, v18);
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
    UnityEngine_Object__Destroy_69459380(v20, 0LL);
    this->fields.tradeSweetsWithdrawalConfirmDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsWithdrawalConfirmDialog, 0, v21, v22);
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
    UnityEngine_Object__Destroy_69459380(v24, 0LL);
    this->fields.currentPickupInfoDispControl = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentPickupInfoDispControl, 0, v25, v26);
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
      UnityEngine_Object__Destroy_69459380(v29, 0LL);
      p_nextPickupInfoDispControl->klass = 0LL;
      sub_1B88554(p_nextPickupInfoDispControl, 0, v30, v31);
      return;
    }
LABEL_48:
    sub_1B8880C(klass, v6);
  }
}


void __fastcall EventTradeListViewItemManager__DispPickupInfoBoard(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  int64_t Time; // x21
  int64_t Time_38478060; // x0
  __int64 v6; // x1
  int64_t v7; // x22
  bool EntityListTargetTime; // w21
  char v9; // w20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *infoPanel; // x20
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Object_o *svtIndexPanel; // x20
  UnityEngine_GameObject_o *v15; // x0
  uint64_t dateData; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *v17; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8

  if ( (byte_4A5F4B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F4B0 = 1;
  }
  pickupEntityList = 0LL;
  v17 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v19.fields._dateData = (uint64_t)&dateData;
  v20.fields._dateData = System_DateTime__AddDays(v19, 1.0, 0LL).fields._dateData;
  Time_38478060 = NetworkManager__getTime_38478060(v20, 0LL);
  if ( !Master_object )
    goto LABEL_32;
  v7 = Time_38478060;
  EntityListTargetTime = EventTradePickupMaster__TryGetEntityListTargetTime(
                           (EventTradePickupMaster_o *)Master_object,
                           &pickupEntityList,
                           this->fields.currentEventId,
                           Time,
                           0LL);
  Time_38478060 = EventTradePickupMaster__TryGetEntityListTargetTime(
                    (EventTradePickupMaster_o *)Master_object,
                    &v17,
                    this->fields.currentEventId,
                    v7,
                    0LL);
  if ( !this->fields.currentPickupInfoDispControl )
    goto LABEL_32;
  v9 = Time_38478060;
  EventTradePickupInfoDispControl__Init(this->fields.currentPickupInfoDispControl, 0LL);
  Time_38478060 = (int64_t)this->fields.nextPickupInfoDispControl;
  if ( !Time_38478060 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__Init((EventTradePickupInfoDispControl_o *)Time_38478060, 0LL);
  if ( !EntityListTargetTime )
  {
    if ( (v9 & 1) == 0 )
      return;
LABEL_18:
    Time_38478060 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_38478060 )
      goto LABEL_32;
    EventTradePickupInfoDispControl__SetUi(
      (EventTradePickupInfoDispControl_o *)Time_38478060,
      this->fields.currentEventId,
      v17,
      0,
      0LL);
    Time_38478060 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_38478060 )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38478060, 0LL);
    GameObjectExtensions__SetLocalPosition_33724016(gameObject, this->fields.NEXT_PICKUP_INFO_BOARD_POS, 0LL);
    goto LABEL_21;
  }
  Time_38478060 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_38478060 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__SetUi(
    (EventTradePickupInfoDispControl_o *)Time_38478060,
    this->fields.currentEventId,
    pickupEntityList,
    1,
    0LL);
  Time_38478060 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_38478060 )
    goto LABEL_32;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38478060, 0LL);
  GameObjectExtensions__SetLocalPosition_33724016(v10, this->fields.CURRENT_PICKUP_INFO_BOARD_POS, 0LL);
  if ( (v9 & 1) != 0 )
    goto LABEL_18;
LABEL_21:
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0LL, 0LL) )
  {
    Time_38478060 = (int64_t)this->fields.infoPanel;
    if ( !Time_38478060 )
      goto LABEL_32;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38478060, 0LL);
    GameObjectExtensions__SetLocalPositionY(v13, -33.0, 0LL);
  }
  svtIndexPanel = (UnityEngine_Object_o *)this->fields.svtIndexPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtIndexPanel, 0LL, 0LL) )
  {
    Time_38478060 = (int64_t)this->fields.svtIndexPanel;
    if ( Time_38478060 )
    {
      v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_38478060, 0LL);
      GameObjectExtensions__SetLocalPositionY(v15, -92.0, 0LL);
      return;
    }
LABEL_32:
    sub_1B8880C(Time_38478060, v6);
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
  System_Collections_Generic_List_object__o *v3; // x19
  Il2CppObject *Master_object; // x0
  int32_t currentEventId; // w21
  EventTradePickupMaster_o *v6; // x22
  int64_t Time; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  __int64 v13; // x1
  EventTradeGoodsEntity_o *v14; // x23
  int32_t klass; // w25
  int32_t v16; // w24
  System_Action_o *v17; // x26
  EventTradeListViewItem_o *v18; // x22
  const MethodInfo *v19; // x5
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A5F48E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__get_Current__);
    sub_1B885B0(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__);
    sub_1B885B0(&EventTradeListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventTradeListViewItem__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5F48E = 1;
  }
  pickupEntityList = 0LL;
  memset(&v30, 0, sizeof(v30));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTradeListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  currentEventId = this->fields.currentEventId;
  v6 = (EventTradePickupMaster_o *)Master_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !v6 )
    goto LABEL_29;
  if ( !EventTradePickupMaster__TryGetEntityListTargetTime(v6, &pickupEntityList, currentEventId, Time, 0LL) )
    return (System_Collections_Generic_List_EventTradeListViewItem__o *)v3;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !pickupEntityList )
LABEL_29:
    sub_1B8880C(Time, v8);
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Time;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)pickupEntityList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v30.fields._current )
      sub_1B8880C(v10, v11);
    if ( !v9 )
      sub_1B8880C(v10, v11);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v9,
               (int32_t)v30.fields._current[1].klass,
               (const MethodInfo_311D934 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    v14 = (EventTradeGoodsEntity_o *)Entity;
    if ( !Entity )
      sub_1B8880C(0LL, v13);
    klass = (int32_t)Entity[1].klass;
    v16 = this->fields.currentEventId;
    v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
      0LL);
    v18 = (EventTradeListViewItem_o *)sub_1B887FC(EventTradeListViewItem_TypeInfo);
    EventTradeListViewItem___ctor(v18, klass, v14, v16, v17, v19);
    if ( !v3 )
      sub_1B8880C(v20, v21);
    items = v3->fields._items;
    v25 = Method_System_Collections_Generic_List_EventTradeListViewItem__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1B8880C(v20, v21);
    size = v3->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v18,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v18, v22, v23);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__);
  return (System_Collections_Generic_List_EventTradeListViewItem__o *)v3;
}


int64_t __fastcall EventTradeListViewItemManager__GetUpdateTime(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x19
  int32_t Hour; // w20
  int32_t Minute; // w21
  int32_t Second; // w0
  EventTradeTimeCalculation_c *v6; // x8
  int32_t v7; // w22
  int64_t v8; // x19
  EventTradeTimeCalculation_c *v9; // x0
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8

  if ( (byte_4A5F4A8 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&EventTradeTimeCalculation_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5F4A8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getLocalDateTime(0LL).fields._dateData;
  Time = NetworkManager__getTime(0LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v12.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v12, 0LL);
  v13.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v13, 0LL);
  v14.fields._dateData = (uint64_t)&dateData;
  Second = System_DateTime__get_Second(v14, 0LL);
  v6 = EventTradeTimeCalculation_TypeInfo;
  v7 = Second;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v6 = EventTradeTimeCalculation_TypeInfo;
  }
  v8 = v6->static_fields->TRADE_TIME_OFFSET + Time - (v7 + 60 * (Minute + 60 * Hour));
  if ( NetworkManager__getTime(0LL) < v8 )
  {
    v9 = EventTradeTimeCalculation_TypeInfo;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      v9 = EventTradeTimeCalculation_TypeInfo;
    }
    v8 -= v9->static_fields->ONE_DAY_SECOND;
  }
  return v8;
}


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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  EventTradeGoodsMaster_o *Master_object; // x0
  __int64 v32; // x1
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x8
  EventTradeGoodsEntity_o *v42; // x8
  int32_t eventPointItemId; // w8
  EventTradeAssetManager_o *v44; // x22
  const MethodInfo *v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  const MethodInfo *v48; // x1
  UILabel_o *tradeNoticeLb; // x21
  const MethodInfo *v50; // x1
  EventTradeAssetManager_o *assetManager; // x21
  System_Action_o *v52; // x22
  const MethodInfo *v53; // x3

  if ( (byte_4A5F48C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventTradeAssetManager_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager__Init_b__53_0__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13395/*"TRADE_EVENT_PUSH_BTN_LABEL"*/);
    byte_4A5F48C = 1;
  }
  this->fields.svtId = svtId;
  this->fields.currentEventId = eventId;
  this->fields.tradeCallback = tradeCallback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.tradeCallback,
    (int32_t)tradeCallback,
    svtId,
    (int32_t)tradeCallback);
  this->fields.rewardDialogCallBack = rewardDialogCallBack;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.rewardDialogCallBack,
    (int32_t)rewardDialogCallBack,
    v19,
    v20);
  this->fields.playVoiceAction = playVoice;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playVoiceAction, (int32_t)playVoice, v21, v22);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.presentBoxOverDlg, (int32_t)boxOverDlg, v23, v24);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.boxOverDlgCloseCallBack,
    (int32_t)boxOverDlgCallBack,
    v25,
    v26);
  this->fields.closeDialogCallBack = closeDialogCallBack;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeDialogCallBack,
    (int32_t)closeDialogCallBack,
    v27,
    v28);
  this->fields.maskPanel = maskPanel;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.maskPanel, (int32_t)maskPanel, v29, v30);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_19;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            Master_object,
                            this->fields.currentEventId,
                            0LL);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.tradeGoodsEntities,
    (int32_t)TradeGoodsEntityArray,
    v34,
    v35);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_19;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0LL);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
    (int32_t)OpenTradeStoreEntityArray,
    v37,
    v38);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_19;
  if ( !tradeGoodsEntities->max_length )
    sub_1B88814(Master_object, v32);
  v42 = tradeGoodsEntities->m_Items[0];
  if ( !v42 )
    goto LABEL_19;
  eventPointItemId = v42->fields.eventPointItemId;
  this->fields.selectTradeGoodsEntity = 0LL;
  this->fields.eventPointItemId = eventPointItemId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity, 0, v39, v40);
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
    v44 = (EventTradeAssetManager_o *)sub_1B887FC(EventTradeAssetManager_TypeInfo);
    EventTradeAssetManager___ctor(v44, v45);
    this->fields.assetManager = v44;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetManager, (int32_t)v44, v46, v47);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetTradeNotification(0LL);
  EventTradeListViewItemManager__UpdateNoticeButtonDisp(this, v48);
  tradeNoticeLb = this->fields.tradeNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13395/*"TRADE_EVENT_PUSH_BTN_LABEL"*/, 0LL);
  if ( !tradeNoticeLb
    || (UILabel__set_text(tradeNoticeLb, (System_String_o *)Master_object, 0LL),
        EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v50),
        assetManager = this->fields.assetManager,
        v52 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v52, (Il2CppObject *)this, Method_EventTradeListViewItemManager__Init_b__53_0__, 0LL),
        !assetManager) )
  {
LABEL_19:
    sub_1B8880C(Master_object, v32);
  }
  EventTradeAssetManager__GetAssets(assetManager, eventId, v52, v53);
}


bool __fastcall EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  System_String_o *String_69417656; // x0
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1
  int64_t v5; // x20
  EventTradeListViewItemManager_o *UpdateTime; // x0
  const MethodInfo *v7; // x1
  int64_t v9; // x0
  EventTradeTimeCalculation_c *v10; // x8
  int64_t v11; // x19
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5F4A7 & 1) == 0 )
  {
    sub_1B885B0(&EventTradeTimeCalculation_TypeInfo);
    sub_1B885B0(&StringLiteral_14547/*"TradeNotificationDialogOpenTime"*/);
    byte_4A5F4A7 = 1;
  }
  result = 0LL;
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656((System_String_o *)StringLiteral_14547/*"TradeNotificationDialogOpenTime"*/, 0LL);
  v3 = System_Int64__TryParse(String_69417656, &result, 0LL);
  if ( v3 )
    v5 = result;
  else
    v5 = 0LL;
  UpdateTime = (EventTradeListViewItemManager_o *)EventTradeListViewItemManager__GetUpdateTime(
                                                    (EventTradeListViewItemManager_o *)v3,
                                                    v4);
  if ( (__int64)UpdateTime > v5 )
    return 0;
  v9 = EventTradeListViewItemManager__GetUpdateTime(UpdateTime, v7);
  v10 = EventTradeTimeCalculation_TypeInfo;
  v11 = v9;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v10 = EventTradeTimeCalculation_TypeInfo;
  }
  return v5 < v10->static_fields->ONE_DAY_SECOND + v11;
}


bool __fastcall EventTradeListViewItemManager__IsOverPossessionLimit(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  void *Master_object; // x0
  __int64 v4; // x1
  UserServantMaster_o *v5; // x21
  Il2CppObject *v6; // x19
  CommonUI_o *v7; // x19
  int32_t v8; // w21
  int32_t svtKeep; // w20
  ServantFrameShortDlgComponent_CallbackFunc_o *v10; // x22
  Il2CppObject *v11; // x23
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  CommonUI_o *v15; // x0
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  CommonUI_o *v19; // x19
  int32_t v20; // w21
  int32_t svtEquipKeep; // w20
  Il2CppObject *v22; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  bool v26; // w8
  bool result; // w0
  int32_t Count; // w19
  CommonUI_o *v29; // x21
  BalanceConfig_c *v30; // x8
  Il2CppObject *v31; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5F4AC & 1) == 0 )
  {
    sub_1B885B0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__);
    sub_1B885B0(&EventTradeListViewItemManager___c_TypeInfo);
    byte_4A5F4AC = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_45;
  v5 = (UserServantMaster_o *)Master_object;
  UserServantMaster__getCount((UserServantMaster_o *)Master_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  v6 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0LL) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v7 = (CommonUI_o *)Master_object;
      v8 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
      if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
        Master_object = EventTradeListViewItemManager___c_TypeInfo;
      }
      v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Master_object + 23) + 24LL);
      if ( !v10 )
      {
        if ( !*((_DWORD *)Master_object + 56) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          Master_object = EventTradeListViewItemManager___c_TypeInfo;
        }
        v11 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
        v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v10,
          v11,
          Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__,
          0LL);
        static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
        static_fields->__9__86_0 = v10;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__86_0, (int32_t)v10, v13, v14);
      }
      if ( v7 )
      {
        v15 = v7;
        v16 = v8;
        v17 = svtKeep;
        v18 = 0;
        goto LABEL_42;
      }
    }
LABEL_45:
    sub_1B8880C(Master_object, v4);
  }
  Master_object = (void *)UserServantMaster__CheckEquipAdd(v5, 1, 1, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v19 = (CommonUI_o *)Master_object;
    v20 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Master_object = EventTradeListViewItemManager___c_TypeInfo;
    if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Master_object + 23) + 32LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = EventTradeListViewItemManager___c_TypeInfo;
      }
      v22 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v22,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__,
        0LL);
      v23 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v23->__9__86_1 = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->__9__86_1, (int32_t)v10, v24, v25);
    }
    if ( !v19 )
      goto LABEL_45;
    v18 = 1;
    v15 = v19;
    v16 = v20;
  }
  else
  {
    if ( !v6 )
      goto LABEL_45;
    v26 = UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v6, 0, 0LL);
    result = 0;
    if ( !v26 )
      return result;
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v6, 0LL);
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v29 = (CommonUI_o *)Master_object;
    if ( !byte_4A567BB )
    {
      sub_1B885B0(&BalanceConfig_TypeInfo);
      byte_4A567BB = 1;
    }
    v30 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    Master_object = EventTradeListViewItemManager___c_TypeInfo;
    svtEquipKeep = v30->static_fields->CommandCodeFrameMax;
    if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*((_QWORD *)Master_object + 23) + 40LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Master_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = EventTradeListViewItemManager___c_TypeInfo;
      }
      v31 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1B887FC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v31,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__,
        0LL);
      v32 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v32->__9__86_4 = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->__9__86_4, (int32_t)v10, v33, v34);
    }
    if ( !v29 )
      goto LABEL_45;
    v18 = 2;
    v15 = v29;
    v16 = Count;
  }
  v17 = svtEquipKeep;
LABEL_42:
  CommonUI__OpenSvtFrameShortDlg(v15, v16, v17, v18, 1, v10, 4, 0LL);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_45;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Master_object, 0LL);
  return 1;
}


bool __fastcall EventTradeListViewItemManager__IsOverPresentBoxLimit(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager___c_c *v3; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Func_object__bool__o *_9__87_0; // x21
  Il2CppObject *v6; // x22
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  EventTradeListViewItemManager___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  System_Func_object__object__o *_9__87_1; // x21
  Il2CppObject *v14; // x22
  struct EventTradeListViewItemManager___c_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x22
  Il2CppObject *Master_object; // x20
  __int64 UserId; // x0
  __int64 v21; // x1
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *v23; // x23
  System_Collections_Generic_HashSet_int__o *v24; // x21
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v29; // x1
  __int64 v30; // x22
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  GiftEntity_array *GiftListById; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v43; // x1
  int max_length; // w8
  int i; // w29
  GiftEntity_o *v46; // x8
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  int32_t count; // w21
  BalanceConfig_c *v52; // x0
  int32_t PresentBoxMax; // w23
  int32_t v54; // w24
  System_String_o *v55; // x0
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  BalanceConfig_c *v59; // x8
  System_String_o *v60; // x20
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v64; // x21
  PresentBoxOverDialog_ClickDelegate_o *v65; // x22
  int32_t v67; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5F4AD & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_ListViewItem___);
    sub_1B885B0(&Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__);
    sub_1B885B0(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1B885B0(&System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__);
    sub_1B885B0(&EventTradeListViewItemManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_13367/*"TRADE_CHECK_PRESENT_NUM_TXT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F4AD = 1;
  }
  v3 = EventTradeListViewItemManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v3 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__87_0 = (System_Func_object__bool__o *)v3->static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__87_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__87_0,
      v6,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Func_ListViewItem__bool__o *)_9__87_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
          (System_Func_TSource__bool__o *)_9__87_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ListViewItem___);
  v11 = EventTradeListViewItemManager___c_TypeInfo;
  v12 = v10;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v11 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__87_1 = (System_Func_object__object__o *)v11->static_fields->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__87_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__87_1,
      v14,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__,
      0LL);
    v15 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    v15->__9__87_1 = (struct System_Func_ListViewItem__EventTradeGoodsEntity__o *)_9__87_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->__9__87_1, (int32_t)_9__87_1, v16, v17);
  }
  v18 = System_Linq_Enumerable__Select_object__object_(
          v12,
          (System_Func_TSource__TResult__o *)_9__87_1,
          (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_76;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Master_object, UserId, 0LL);
  v23 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v18 )
    goto LABEL_76;
  klass = v18->klass;
  v26 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_25;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_25:
    p_method = sub_1BDA590(v18, System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v18,
          *(_QWORD *)(p_method + 8));
  if ( !v30 )
    sub_1B8880C(0LL, v29);
  while ( 1 )
  {
    v31 = *(_QWORD *)v30;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_32;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_32:
      v34 = sub_1BDA590(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v30;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__c **)v37 - 1) != System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_39;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_39:
      v38 = sub_1BDA590(v30, System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
    if ( !v39 )
      sub_1B8880C(0LL, v40);
    if ( !v23 )
      sub_1B8880C(v39, v40);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v23, *(_DWORD *)(v39 + 36), 0LL);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GiftListById, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !GiftListById )
        sub_1B8880C(IsNullOrEmpty, v43);
      max_length = GiftListById->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1B88814(IsNullOrEmpty, v43);
          v46 = GiftListById->m_Items[i];
          if ( !v46 )
            sub_1B8880C(IsNullOrEmpty, v43);
          if ( !v24 )
            sub_1B8880C(IsNullOrEmpty, v43);
          IsNullOrEmpty = System_Collections_Generic_HashSet_int___Add(
                            v24,
                            v46->fields.type,
                            (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
          max_length = GiftListById->max_length;
        }
      }
    }
  }
  v47 = *(_QWORD *)v30;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_56;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_56:
    v50 = sub_1BDA590(v30, System_IDisposable_TypeInfo, 0LL);
  }
  UserId = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v30, *(_QWORD *)(v50 + 8));
  if ( !VaildList || !v24 )
    goto LABEL_76;
  count = v24->fields._count;
  v52 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v52 = BalanceConfig_TypeInfo;
  }
  PresentBoxMax = v52->static_fields->PresentBoxMax;
  v54 = count + VaildList->max_length;
  if ( v54 > PresentBoxMax )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_13367/*"TRADE_CHECK_PRESENT_NUM_TXT"*/, 0LL);
    v59 = BalanceConfig_TypeInfo;
    v60 = v55;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v59 = BalanceConfig_TypeInfo;
    }
    v67 = v59->static_fields->PresentBoxMax;
    v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v56, v57, v58);
    v62 = System_String__Format(v60, v61, 0LL);
    presentBoxOverDlg = this->fields.presentBoxOverDlg;
    v64 = v62;
    v65 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1B887FC(PresentBoxOverDialog_ClickDelegate_TypeInfo);
    PresentBoxOverDialog_ClickDelegate___ctor(
      v65,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__,
      0LL);
    if ( presentBoxOverDlg )
    {
      PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v64, v65, 26, 0LL);
      return v54 > PresentBoxMax;
    }
LABEL_76:
    sub_1B8880C(UserId, v21);
  }
  return v54 > PresentBoxMax;
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
  if ( !byte_4A55CE6 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
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
    sub_1B8880C(this, dialog);
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
  if ( !byte_4A55CE6 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v6 )
LABEL_8:
    sub_1B8880C(this, obj);
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

  if ( (byte_4A5F493 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickListView__);
    byte_4A5F493 = 1;
  }
  if ( !obj || (this = (EventTradeListViewItemManager_o *)EventTradeListViewObject__GetItem(obj, 0LL)) == 0LL )
    sub_1B8880C(this, obj);
  v4 = this;
  if ( !this->fields.sortKindButton
    && EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)this, (const MethodInfo *)obj)
    || !BYTE4(v4->fields.sortOrderButton) )
  {
    v5 = Method_EventTradeListViewItemManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_EventTradeListViewItemManager_OnClickListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
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

  if ( (byte_4A5F4AF & 1) == 0 )
  {
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickNoticeButton__);
    byte_4A5F4AF = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v4 = Method_EventTradeListViewItemManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_EventTradeListViewItemManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0LL);
  EventRewardSaveData__SetTradeNotification(this->fields.isButtonOn, 0LL);
  EventTradeListViewItemManager__UpdateNoticeButtonDisp(this, v6);
}


void __fastcall EventTradeListViewItemManager__OnClickReceiveAll(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v2; // x19
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 maskPanel; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v11; // x20
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x0

  v2 = this;
  if ( (byte_4A5F4A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_EventTradeListViewItemManager_TradeReceiveResponse__);
    sub_1B885B0(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    this = (EventTradeListViewItemManager_o *)sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F4A0 = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, method)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v2, v3) )
  {
    maskPanel = (__int64)v2->fields.maskPanel;
    if ( !maskPanel )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
    v2->fields.selectTradeGoodsEntity = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.selectTradeGoodsEntity, 0, v6, v7);
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)v2,
      Method_EventTradeListViewItemManager_TradeReceiveResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
    currentEventId = v2->fields.currentEventId;
    v11 = (TradeReceiveRequest_o *)Request_object;
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1BDA48C(v14);
    if ( !*(_DWORD *)(v14 + 224) )
      j_il2cpp_runtime_class_init_0(v14);
    maskPanel = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(maskPanel + 309) & 1) == 0 )
      maskPanel = sub_1BDA48C(maskPanel);
    if ( !v11 )
LABEL_19:
      sub_1B8880C(maskPanel, v4);
    TradeReceiveRequest__beginRequest(v11, currentEventId, **(System_Int32_array ***)(maskPanel + 184), 0, 0, 0LL);
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
  if ( (byte_4A5F49B & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickReceiveAllButton__);
    byte_4A5F49B = 1;
  }
  receiveAllButton = v2->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_1B8880C(this, method);
  mState = receiveAllButton->fields.mState;
  v5 = Method_EventTradeListViewItemManager_OnClickReceiveAllButton__;
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_EventTradeListViewItemManager_OnClickReceiveAllButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
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
  void *maskPanel; // x0
  unsigned int displayMode; // w8
  int v7; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  EventTradeListViewItem_o *Item; // x21
  int64_t Time; // x22
  int32_t CompleteNum; // w21
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  struct EventTradeGoodsEntity_o *v17; // x1

  if ( (byte_4A5F495 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickReceiveButton__);
    sub_1B885B0(&EventTradeTimeCalculation_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5F495 = 1;
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
    v7 = 1 << displayMode;
    if ( (v7 & 0xD) != 0 )
    {
LABEL_18:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
        return;
      }
LABEL_21:
      sub_1B8880C(maskPanel, obj);
    }
    if ( (v7 & 0x30) != 0 )
    {
      v8 = Method_EventTradeListViewItemManager_OnClickReceiveButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveButton__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B885C8(Method_EventTradeListViewItemManager_OnClickReceiveButton__);
      v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
      Item = EventTradeListViewObject__GetItem(obj, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      CompleteNum = EventTradeTimeCalculation__GetCompleteNum(Item, Time, 0LL);
      maskPanel = EventTradeListViewObject__GetItem(obj, 0LL);
      if ( !maskPanel )
        goto LABEL_21;
      v14 = *((_QWORD *)maskPanel + 17);
      if ( !v14 )
        goto LABEL_21;
      EventTradeListViewItemManager__OnClickReceiveDecide(this, *(_DWORD *)(v14 + 16), CompleteNum, v13);
      maskPanel = EventTradeListViewObject__GetItem(obj, 0LL);
      if ( !maskPanel )
        goto LABEL_21;
      v17 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
      this->fields.selectTradeGoodsEntity = v17;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity, (int32_t)v17, v15, v16);
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
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 maskPanel; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x22
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w21
  TradeReceiveRequest_o *v13; // x22

  v6 = this;
  if ( (byte_4A5F49F & 1) == 0 )
  {
    sub_1B885B0(&Method_EventTradeListViewItemManager_TradeReceiveResponse__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    this = (EventTradeListViewItemManager_o *)sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F49F = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, *(const MethodInfo **)&storeIdx)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v6, v7) )
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
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v6,
        Method_EventTradeListViewItemManager_TradeReceiveResponse__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v10,
                         (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
      currentEventId = v6->fields.currentEventId;
      v13 = (TradeReceiveRequest_o *)Request_object;
      maskPanel = sub_1B88658(int___TypeInfo, 1LL);
      if ( maskPanel )
      {
        if ( !*(_DWORD *)(maskPanel + 24) )
          sub_1B88814(maskPanel, v8);
        *(_DWORD *)(maskPanel + 32) = storeIdx;
        if ( v13 )
        {
          TradeReceiveRequest__beginRequest(v13, currentEventId, (System_Int32_array *)maskPanel, receiveNum, 0, 0LL);
          return;
        }
      }
    }
    sub_1B8880C(maskPanel, v8);
  }
}


void __fastcall EventTradeListViewItemManager__OnClickReplenishmentButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  void *maskPanel; // x0
  unsigned int displayMode; // w8
  int v7; // w8
  bool IsRefillable; // w21
  _QWORD *v9; // x8
  System_Reflection_MethodBase_o *v10; // x0
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  EventTradeListViewItem_o *Item; // x22
  __int64 v13; // x8
  int32_t v14; // w23
  System_Action_int__int__int__o *v15; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  struct EventTradeGoodsEntity_o *v18; // x1

  if ( (byte_4A5F496 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__int__int__TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__);
    byte_4A5F496 = 1;
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
    v7 = 1 << displayMode;
    if ( (v7 & 0xD) != 0 )
    {
LABEL_18:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
        return;
      }
LABEL_22:
      sub_1B8880C(maskPanel, obj);
    }
    if ( (v7 & 0x30) != 0 )
    {
      maskPanel = EventTradeListViewObject__GetItem(obj, 0LL);
      if ( !maskPanel )
        goto LABEL_22;
      IsRefillable = EventTradeListViewItem__get_IsRefillable(
                       (EventTradeListViewItem_o *)maskPanel,
                       (const MethodInfo *)obj);
      v9 = Method_EventTradeListViewItemManager_OnClickReplenishmentButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B885C8(Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
      if ( IsRefillable )
      {
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
        maskPanel = this->fields.tradeSweetsNumConfirmDialog;
        if ( !maskPanel )
          goto LABEL_22;
        EventTradeSweetsNumConfirmDialogComponent__Init(
          (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
          this->fields.currentEventId,
          0LL);
        tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
        Item = EventTradeListViewObject__GetItem(obj, 0LL);
        maskPanel = EventTradeListViewObject__GetItem(obj, 0LL);
        if ( !maskPanel )
          goto LABEL_22;
        v13 = *((_QWORD *)maskPanel + 17);
        if ( !v13 )
          goto LABEL_22;
        v14 = *(_DWORD *)(v13 + 16);
        v15 = (System_Action_int__int__int__o *)sub_1B887FC(System_Action_int__int__int__TypeInfo);
        System_Action_int__int__int____ctor(
          v15,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
          0LL);
        if ( !tradeSweetsNumConfirmDialog )
          goto LABEL_22;
        EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, Item, v14, v15, 1, 0LL);
        maskPanel = EventTradeListViewObject__GetItem(obj, 0LL);
        if ( !maskPanel )
          goto LABEL_22;
        v18 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
        this->fields.selectTradeGoodsEntity = v18;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity, (int32_t)v18, v16, v17);
        goto LABEL_18;
      }
      OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
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
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x23
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_4A5F49A & 1) == 0 )
  {
    sub_1B885B0(&Method_EventTradeListViewItemManager_TradeReplenishmentResponse__);
    sub_1B885B0(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F49A = 1;
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
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_TradeReplenishmentResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                   v10,
                                                                                   (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TradeStartRequest___);
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
    sub_1B8880C(tradeSweetsNumConfirmDialog, *(_QWORD *)&storeIdx);
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
  UnityEngine_GameObject_o *maskPanel; // x0
  unsigned int displayMode; // w8
  int v7; // w8
  bool IsBuyAble; // w21
  _QWORD *v9; // x8
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  EventTradeListViewItem_o *Item; // x0
  int32_t v14; // w22
  EventTradeListViewItem_o *v15; // x23
  System_Action_int__int__int__o *v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  struct EventTradeGoodsEntity_o *klass; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v21; // x21
  System_String_o *v22; // x22
  System_Action_o *v23; // x23
  int32_t storeIdx; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_4A5F494 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__int__int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickTradeStartDecide__);
    sub_1B885B0(&Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_13385/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_13384/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_4A5F494 = 1;
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
  v7 = 1 << displayMode;
  if ( (v7 & 0x31) == 0 )
  {
    if ( (v7 & 0xC) == 0 )
      return;
    maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, 0LL);
    if ( !maskPanel )
      goto LABEL_25;
    IsBuyAble = EventTradeListViewItem__get_IsBuyAble((EventTradeListViewItem_o *)maskPanel, (const MethodInfo *)obj);
    v9 = Method_EventTradeListViewItemManager_OnClickTradeStartButton__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickTradeStartButton__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B885C8(Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
    if ( IsBuyAble )
    {
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
      if ( EventTradeListViewItemManager__TryGetAvailableStoreIdx(this, &storeIdx, v11) )
      {
        maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsNumConfirmDialog;
        if ( maskPanel )
        {
          EventTradeSweetsNumConfirmDialogComponent__Init(
            (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
            this->fields.currentEventId,
            0LL);
          tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
          Item = EventTradeListViewObject__GetItem(obj, 0LL);
          v14 = storeIdx;
          v15 = Item;
          v16 = (System_Action_int__int__int__o *)sub_1B887FC(System_Action_int__int__int__TypeInfo);
          System_Action_int__int__int____ctor(
            v16,
            (Il2CppObject *)this,
            Method_EventTradeListViewItemManager_OnClickTradeStartDecide__,
            0LL);
          if ( tradeSweetsNumConfirmDialog )
          {
            EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v15, v14, v16, 0, 0LL);
            maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, 0LL);
            if ( maskPanel )
            {
              klass = (struct EventTradeGoodsEntity_o *)maskPanel[5].klass;
              this->fields.selectTradeGoodsEntity = klass;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&this->fields.selectTradeGoodsEntity,
                (int32_t)klass,
                v17,
                v18);
              goto LABEL_18;
            }
          }
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13385/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13384/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
        v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v23,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog_30495196(
            (CommonUI_o *)Instance,
            v21,
            v22,
            v23,
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
            0LL);
          return;
        }
      }
LABEL_25:
      sub_1B8880C(maskPanel, obj);
    }
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
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
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x23

  if ( (byte_4A5F499 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventTradeListViewItemManager_TradeStartResponse__);
    sub_1B885B0(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5F499 = 1;
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
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_TradeStartResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                   v10,
                                                                                   (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TradeStartRequest___);
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
    sub_1B8880C(tradeSweetsNumConfirmDialog, *(_QWORD *)&storeIdx);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 0, 0LL);
}


void __fastcall EventTradeListViewItemManager__OnClickWithdrawalButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_GameObject_o *maskPanel; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_GameObject_o **v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  unsigned int klass; // w8
  int v14; // w8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x21
  EventTradeListViewItem_o *Item; // x22
  System_Action_bool__o *v19; // x23

  if ( (byte_4A5F497 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo);
    byte_4A5F497 = 1;
  }
  v5 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo);
  EventTradeListViewItemManager___c__DisplayClass65_0___ctor(
    (EventTradeListViewItemManager___c__DisplayClass65_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = obj;
  v10 = (UnityEngine_GameObject_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)obj, v11, v12);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( !*v10 )
    goto LABEL_18;
  klass = (unsigned int)(*v10)[5].klass;
  if ( klass <= 5 )
  {
    v14 = 1 << klass;
    if ( (v14 & 0xD) != 0 )
    {
LABEL_15:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive(maskPanel, 0, 0LL);
        return;
      }
LABEL_18:
      sub_1B8880C(maskPanel, v7);
    }
    if ( (v14 & 0x30) != 0 )
    {
      v15 = Method_EventTradeListViewItemManager_OnClickWithdrawalButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1B885C8(Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
      v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
      if ( !maskPanel )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Init(
        (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)maskPanel,
        this->fields.currentEventId,
        0LL);
      maskPanel = *v10;
      if ( !*v10 )
        goto LABEL_18;
      tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
      Item = EventTradeListViewObject__GetItem((EventTradeListViewObject_o *)maskPanel, 0LL);
      v19 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v19,
        (Il2CppObject *)v5,
        Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__,
        0LL);
      if ( !tradeSweetsWithdrawalConfirmDialog )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Open(tradeSweetsWithdrawalConfirmDialog, Item, v19, 0LL);
      goto LABEL_15;
    }
  }
}


void __fastcall EventTradeListViewItemManager__OnClickWithdrawalDecide(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 maskPanel; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  EventTradeListViewItem_o **v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  EventTradeListViewItemManager_o *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x19
  EventTradeListViewItem_o *v17; // x20
  System_Action_bool__o *v18; // x21
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v22; // x21
  EventTradeListViewItem_o *v23; // x8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x9
  System_Int32_array *v25; // x20

  if ( (byte_4A5F4A1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager_WithdrawalResponse__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo);
    byte_4A5F4A1 = 1;
  }
  v5 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo);
  EventTradeListViewItemManager___c__DisplayClass75_0___ctor(
    (EventTradeListViewItemManager___c__DisplayClass75_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = item;
  v10 = (EventTradeListViewItem_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)item, v11, v12);
  if ( EventTradeListViewItemManager__IsOverPossessionLimit(v13, v14)
    || EventTradeListViewItemManager__IsOverPresentBoxLimit(this, v15) )
  {
    tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
    v17 = *(EventTradeListViewItem_o **)(v5 + 24);
    v18 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__,
      0LL);
    if ( tradeSweetsWithdrawalConfirmDialog )
    {
      EventTradeSweetsWithdrawalConfirmDialogComponent__Resume(tradeSweetsWithdrawalConfirmDialog, v17, v18, 0LL);
      return;
    }
LABEL_18:
    sub_1B8880C(maskPanel, v7);
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
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_WithdrawalResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  currentEventId = this->fields.currentEventId;
  v22 = (TradeReceiveRequest_o *)Request_object;
  maskPanel = sub_1B88658(int___TypeInfo, 1LL);
  v23 = *v10;
  if ( !*v10 )
    goto LABEL_18;
  TradeInfo_k__BackingField = v23->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_18;
  v25 = (System_Int32_array *)maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  if ( !*(_DWORD *)(maskPanel + 24) )
    sub_1B88814(maskPanel, v7);
  *(_DWORD *)(maskPanel + 32) = TradeInfo_k__BackingField->fields.storeIdx;
  maskPanel = EventTradeListViewItem__get_NowCompleteNum(v23, v7);
  if ( !v22 )
    goto LABEL_18;
  TradeReceiveRequest__beginRequest(v22, currentEventId, v25, maskPanel, 1, 0LL);
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

  if ( (byte_4A5F492 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F492 = 1;
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
          sub_1B8880C(0LL, v7);
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
  __int64 v5; // x19
  BaseDialog_o *tradeSweetsWithdrawalConfirmDialog; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  BaseDialog_o **v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Instance; // x20
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  System_String_o *v17; // x24
  CommonConfirmDialog_ClickDelegate_o *v18; // x25

  if ( (byte_4A5F498 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo);
    sub_1B885B0(&StringLiteral_13418/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3758/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_13417/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_4A5F498 = 1;
  }
  v5 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo);
  EventTradeListViewItemManager___c__DisplayClass66_0___ctor(
    (EventTradeListViewItemManager___c__DisplayClass66_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = item;
  v10 = (BaseDialog_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)item, v11, v12);
  tradeSweetsWithdrawalConfirmDialog = (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !tradeSweetsWithdrawalConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(tradeSweetsWithdrawalConfirmDialog, 0LL) )
    return;
  tradeSweetsWithdrawalConfirmDialog = *v10;
  if ( !*v10 )
    goto LABEL_12;
  *(_DWORD *)(v5 + 32) = EventTradeListViewItem__get_NowCompleteNum(
                           (EventTradeListViewItem_o *)tradeSweetsWithdrawalConfirmDialog,
                           v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13418/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13417/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_12:
    sub_1B8880C(tradeSweetsWithdrawalConfirmDialog, v7);
  CommonUI__OpenConfirmDialog_30493952(
    (CommonUI_o *)Instance,
    v14,
    v15,
    v16,
    v17,
    1,
    v18,
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
  System_Collections_Generic_List_EventTradeListViewObject__o *ObjectList; // x20
  System_Func_object__bool__o *v4; // x21
  Il2CppObject *v5; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *Entity; // x21
  EventTradeListViewItem_o *v9; // x20
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t storeIdx; // w22
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  System_Action_int__int__int__o *v13; // x23
  bool v14; // w19

  if ( (byte_4A5F4A5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__int__int__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__);
    sub_1B885B0(&Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__);
    sub_1B885B0(&System_Func_EventTradeListViewObject__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F4A5 = 1;
  }
  if ( !this->fields.selectTradeGoodsEntity )
    return 0;
  ObjectList = EventTradeListViewItemManager__get_ObjectList(this, method);
  v4 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventTradeListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__,
    0LL);
  v5 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
         (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields.currentEventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v5,
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
  if ( !v5
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventTradeListViewObject__GetItem(
                                                                        (EventTradeListViewObject_o *)v5,
                                                                        0LL)) == 0LL )
  {
LABEL_22:
    sub_1B8880C(Master_object, v7);
  }
  v9 = (EventTradeListViewItem_o *)Master_object;
  if ( !*(_QWORD *)&Master_object[1].fields.revision
    || !EventTradeListViewItem__get_IsRefillable((EventTradeListViewItem_o *)Master_object, v7) )
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
  TradeInfo_k__BackingField = v9->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_22;
  storeIdx = TradeInfo_k__BackingField->fields.storeIdx;
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  v13 = (System_Action_int__int__int__o *)sub_1B887FC(System_Action_int__int__int__TypeInfo);
  System_Action_int__int__int____ctor(
    v13,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
    0LL);
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_22;
  v14 = 1;
  EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v9, storeIdx, v13, 1, 0LL);
  return v14;
}


void __fastcall EventTradeListViewItemManager__OpenRewardDialog(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItemManager_ResData_o *resData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  EventTradeRewardDialogComponent_o *tradeRewardDialog; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  EventTradeRewardDialogComponent_o *v14; // x27
  int32_t eventPointNum; // w26
  int32_t eventPointItemId; // w25
  int32_t currentEventId; // w24
  BattleDropItem_array *resultTradeRewardInfos; // x23
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x19
  BattleDropItem_array *v20; // x22
  System_Action_o *closeCallback; // x20

  if ( (byte_4A5F4A4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo);
    byte_4A5F4A4 = 1;
  }
  v5 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo);
  EventTradeListViewItemManager___c__DisplayClass78_0___ctor(
    (EventTradeListViewItemManager___c__DisplayClass78_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  tradeRewardDialog = this->fields.tradeRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradeRewardDialogComponent__Init(tradeRewardDialog, 0LL);
  tradeRewardDialog = (EventTradeRewardDialogComponent_o *)this->fields.tradePointRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradePointRewardDialogComponent__Init((EventTradePointRewardDialogComponent_o *)tradeRewardDialog, 0LL);
  if ( !resData )
    goto LABEL_14;
  resultEventRewardInfos = resData->fields.resultEventRewardInfos;
  *(_QWORD *)(v5 + 16) = resultEventRewardInfos;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)resultEventRewardInfos, v10, v11);
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
  *(_DWORD *)(v5 + 32) = (_DWORD)oldUserEventPoint;
  v14 = this->fields.tradeRewardDialog;
  eventPointNum = resData->fields.eventPointNum;
  eventPointItemId = this->fields.eventPointItemId;
  currentEventId = this->fields.currentEventId;
  resultTradeRewardInfos = resData->fields.resultTradeRewardInfos;
  selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
  v20 = *(BattleDropItem_array **)(v5 + 16);
  closeCallback = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v5,
    Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__,
    0LL);
  if ( !v14 )
LABEL_14:
    sub_1B8880C(tradeRewardDialog, v7);
  EventTradeRewardDialogComponent__Open(
    v14,
    eventPointNum,
    eventPointItemId,
    currentEventId,
    resultTradeRewardInfos,
    v20,
    selectTradeGoodsEntity,
    selectTradeGoodsEntity == 0LL,
    closeCallback,
    0LL);
}


void __fastcall EventTradeListViewItemManager__OpenSweetsNotificationDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t PickupList; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  System_Object_array *v9; // x0
  __int64 v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  EventTradePopularSweetsNotificationDialogComponent_o *tradePopularSweetsNotificationDialog; // x19
  EventTradeListViewItem_array *v18; // x21
  System_Action_o *v19; // x22
  EventTradeListViewItemManager_o *v20; // x0
  const MethodInfo *v21; // x1
  int64_t Time; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5F4A9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo);
    byte_4A5F4A9 = 1;
  }
  v3 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo);
  EventTradeListViewItemManager___c__DisplayClass83_0___ctor(
    (EventTradeListViewItemManager___c__DisplayClass83_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  PickupList = (int64_t)EventTradeListViewItemManager__GetPickupList(this, v8);
  if ( !PickupList )
    goto LABEL_14;
  v9 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)PickupList,
         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__);
  *(_QWORD *)(v3 + 24) = v9;
  v10 = v3 + 24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)v9, v11, v12);
  PickupList = EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(this, v13);
  if ( (PickupList & 1) != 0 )
    return;
  if ( !*(_QWORD *)v10 )
    goto LABEL_14;
  if ( !*(_QWORD *)(*(_QWORD *)v10 + 24LL) )
    return;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v14 = System_Int64__ToString((int64_t)&Time, 0LL);
  *(_QWORD *)(v3 + 32) = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)v14, v15, v16);
  PickupList = (int64_t)this->fields.tradePopularSweetsNotificationDialog;
  if ( !PickupList
    || (EventTradePopularSweetsNotificationDialogComponent__Init(
          (EventTradePopularSweetsNotificationDialogComponent_o *)PickupList,
          0LL),
        tradePopularSweetsNotificationDialog = this->fields.tradePopularSweetsNotificationDialog,
        v18 = *(EventTradeListViewItem_array **)(v3 + 24),
        v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v3,
          Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__,
          0LL),
        PickupList = EventTradeListViewItemManager__GetUpdateTime(v20, v21),
        !tradePopularSweetsNotificationDialog) )
  {
LABEL_14:
    sub_1B8880C(PickupList, v5);
  }
  EventTradePopularSweetsNotificationDialogComponent__Open(
    tradePopularSweetsNotificationDialog,
    v18,
    v19,
    PickupList,
    0LL);
}


void __fastcall EventTradeListViewItemManager__RequestListObject(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5F491 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__get_Current__);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5F491 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  ObjectList = (System_Collections_Generic_List_object__o *)EventTradeListViewItemManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1B8880C(0LL, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__) )
    {
      current = v10.fields._current;
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v8, v9);
      EventTradeListViewObject__Init_30725112((EventTradeListViewObject_o *)current, 3, v7, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__);
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
  __int64 methodPtr_low; // x11
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_object__o *v10; // x21
  System_Action_object__o *v11; // x22
  System_Action_object__o *v12; // x23
  System_Action_object__o *v13; // x24

  if ( (byte_4A5F490 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_EventTradeListViewObject__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickReceiveButton__);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
    sub_1B885B0(&Method_EventTradeListViewItemManager_OnMoveEnd__);
    sub_1B885B0(&EventTradeListViewObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F490 = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(EventTradeListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (EventTradeListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewObject_TypeInfo )
        obj = 0LL;
    }
    else
    {
      obj = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0LL);
    if ( !obj )
      sub_1B8880C(v8, v9);
    EventTradeListViewObject__Init_30725112((EventTradeListViewObject_o *)obj, 3, v7, 0LL);
    v10 = (System_Action_object__o *)sub_1B887FC(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickTradeStartButton__,
      0LL);
    v11 = (System_Action_object__o *)sub_1B887FC(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReceiveButton__,
      0LL);
    v12 = (System_Action_object__o *)sub_1B887FC(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v12,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__,
      0LL);
    v13 = (System_Action_object__o *)sub_1B887FC(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__,
      0LL);
    EventTradeListViewObject__SetOnClickAction(
      (EventTradeListViewObject_o *)obj,
      (System_Action_EventTradeListViewObject__o *)v10,
      (System_Action_EventTradeListViewObject__o *)v11,
      (System_Action_EventTradeListViewObject__o *)v12,
      (System_Action_EventTradeListViewObject__o *)v13,
      0LL);
  }
}


void __fastcall EventTradeListViewItemManager__SetReceiveAllButton(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  int32_t currentEventId; // w20
  UISprite_o *receiveAllButtonSprite; // x21
  UILabel_o *receiveAllButtonLabel; // x20
  System_String_o *receiveAllButton; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeButtonBlinkEffect_k__BackingField; // x20
  ServantStatusBattleListViewItem_o *p_tradeButtonBlinkEffect; // x19
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Transform_o *v16; // x20

  if ( (byte_4A5F48B & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3464/*"CHECK_TRADE_BUTTON_LABEL"*/);
    sub_1B885B0(&StringLiteral_17512/*"btn_getreward"*/);
    byte_4A5F48B = 1;
  }
  currentEventId = this->fields.currentEventId;
  receiveAllButtonSprite = this->fields.receiveAllButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37859364(currentEventId, receiveAllButtonSprite, (System_String_o *)StringLiteral_17512/*"btn_getreward"*/, 0LL);
  receiveAllButtonLabel = this->fields.receiveAllButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveAllButton = LocalizationManager__Get((System_String_o *)StringLiteral_3464/*"CHECK_TRADE_BUTTON_LABEL"*/, 0LL);
  if ( !receiveAllButtonLabel )
    goto LABEL_22;
  UILabel__set_text(receiveAllButtonLabel, receiveAllButton, 0LL);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  receiveAllButton = (System_String_o *)UnityEngine_Object__op_Equality(tradeButtonBlinkEffect, 0LL, 0LL);
  if ( ((unsigned __int8)receiveAllButton & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( assetManager )
    {
      receiveAllButton = (System_String_o *)this->fields.receiveAllButton;
      if ( receiveAllButton )
      {
        TradeButtonBlinkEffect_k__BackingField = (Il2CppObject *)assetManager->fields._TradeButtonBlinkEffect_k__BackingField;
        p_tradeButtonBlinkEffect = (ServantStatusBattleListViewItem_o *)&this->fields.tradeButtonBlinkEffect;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)receiveAllButton, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__Instantiate_object__49297800(
                TradeButtonBlinkEffect_k__BackingField,
                transform,
                (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
        p_tradeButtonBlinkEffect->klass = (ServantStatusBattleListViewItem_c *)v13;
        sub_1B88554(p_tradeButtonBlinkEffect, (int32_t)v13, v14, v15);
        receiveAllButton = (System_String_o *)p_tradeButtonBlinkEffect->klass;
        if ( p_tradeButtonBlinkEffect->klass )
        {
          receiveAllButton = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)receiveAllButton,
                                                  0LL);
          v16 = (UnityEngine_Transform_o *)receiveAllButton;
          if ( !byte_4A55CE6 )
          {
            receiveAllButton = (System_String_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE6 = 1;
          }
          if ( v16 )
          {
            UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            receiveAllButton = (System_String_o *)p_tradeButtonBlinkEffect->klass;
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
    sub_1B8880C(receiveAllButton, v7);
  }
}


void __fastcall EventTradeListViewItemManager__SetTradeObject(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tradeRewardDialog; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *tradePointRewardDialog; // x20
  struct EventTradeAssetManager_o *v13; // x8
  Il2CppObject *TradePointRewardDialog_k__BackingField; // x20
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
  struct EventTradeAssetManager_o *v20; // x8
  Il2CppObject *TradeSweetsNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  struct EventTradeAssetManager_o *v27; // x8
  Il2CppObject *TradeSweetsWithdrawalConfirmDialog_k__BackingField; // x20
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x2
  UnityEngine_Object_o *tradePopularSweetsNotificationDialog; // x20
  struct EventTradeAssetManager_o *v34; // x8
  Il2CppObject *TradePopularSweetsNotificationDialog_k__BackingField; // x20
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x2
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  struct EventTradeAssetManager_o *v41; // x8
  Il2CppObject *TradePickupInfoBoard_k__BackingField; // x20
  struct EventTradePickupInfoDispControl_o **p_currentPickupInfoDispControl; // x20
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x2
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  struct EventTradeAssetManager_o *v50; // x8
  Il2CppObject *v51; // x20
  struct EventTradePickupInfoDispControl_o **p_nextPickupInfoDispControl; // x20
  Il2CppObject *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  UnityEngine_GameObject_o *v56; // x1
  const MethodInfo *v57; // x2

  if ( (byte_4A5F48A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_9409/*"NextTradePickupInfoBoard"*/);
    sub_1B885B0(&StringLiteral_4942/*"CurrentTradePickupInfoBoard"*/);
    byte_4A5F48A = 1;
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
                                               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___);
    this->fields.tradeRewardDialog = (struct EventTradeRewardDialogComponent_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeRewardDialog,
      (int32_t)Component_object,
      v9,
      v10);
    EventTradeListViewItemManager__LocateDialogToTradePanel(this, (BaseDialog_o *)this->fields.tradeRewardDialog, v11);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v13 = this->fields.assetManager;
    if ( !v13 )
      goto LABEL_66;
    TradePointRewardDialog_k__BackingField = (Il2CppObject *)v13->fields._TradePointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePointRewardDialog_k__BackingField,
                                               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v15 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___);
    this->fields.tradePointRewardDialog = (struct EventTradePointRewardDialogComponent_o *)v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tradePointRewardDialog, (int32_t)v15, v16, v17);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePointRewardDialog,
      v18);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsNumConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v20 = this->fields.assetManager;
    if ( !v20 )
      goto LABEL_66;
    TradeSweetsNumConfirmDialog_k__BackingField = (Il2CppObject *)v20->fields._TradeSweetsNumConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsNumConfirmDialog_k__BackingField,
                                               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v22 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___);
    this->fields.tradeSweetsNumConfirmDialog = (struct EventTradeSweetsNumConfirmDialogComponent_o *)v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsNumConfirmDialog, (int32_t)v22, v23, v24);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsNumConfirmDialog,
      v25);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsWithdrawalConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v27 = this->fields.assetManager;
    if ( !v27 )
      goto LABEL_66;
    TradeSweetsWithdrawalConfirmDialog_k__BackingField = (Il2CppObject *)v27->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsWithdrawalConfirmDialog_k__BackingField,
                                               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v29 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___);
    this->fields.tradeSweetsWithdrawalConfirmDialog = (struct EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v29;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeSweetsWithdrawalConfirmDialog,
      (int32_t)v29,
      v30,
      v31);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog,
      v32);
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
    v34 = this->fields.assetManager;
    if ( !v34 )
      goto LABEL_66;
    TradePopularSweetsNotificationDialog_k__BackingField = (Il2CppObject *)v34->fields._TradePopularSweetsNotificationDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePopularSweetsNotificationDialog_k__BackingField,
                                               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v36 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___);
    this->fields.tradePopularSweetsNotificationDialog = (struct EventTradePopularSweetsNotificationDialogComponent_o *)v36;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradePopularSweetsNotificationDialog,
      (int32_t)v36,
      v37,
      v38);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePopularSweetsNotificationDialog,
      v39);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(currentPickupInfoDispControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v41 = this->fields.assetManager;
    if ( !v41 )
      goto LABEL_66;
    TradePickupInfoBoard_k__BackingField = (Il2CppObject *)v41->fields._TradePickupInfoBoard_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePickupInfoBoard_k__BackingField,
                                               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    p_currentPickupInfoDispControl = &this->fields.currentPickupInfoDispControl;
    v44 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
    this->fields.currentPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v44;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.currentPickupInfoDispControl, (int32_t)v44, v45, v46);
    gameObject = (UnityEngine_GameObject_o *)this->fields.currentPickupInfoDispControl;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_4942/*"CurrentTradePickupInfoBoard"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)*p_currentPickupInfoDispControl;
    if ( !*p_currentPickupInfoDispControl )
      goto LABEL_66;
    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    EventTradeListViewItemManager__LocateObjectToTradePanel(this, v47, v48);
  }
  nextPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.nextPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(nextPickupInfoDispControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v50 = this->fields.assetManager;
    if ( v50 )
    {
      v51 = (Il2CppObject *)v50->fields._TradePickupInfoBoard_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                 v51,
                                                 (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( gameObject )
      {
        p_nextPickupInfoDispControl = &this->fields.nextPickupInfoDispControl;
        v53 = UnityEngine_GameObject__GetComponent_object_(
                gameObject,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
        this->fields.nextPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v53;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.nextPickupInfoDispControl,
          (int32_t)v53,
          v54,
          v55);
        gameObject = (UnityEngine_GameObject_o *)this->fields.nextPickupInfoDispControl;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_9409/*"NextTradePickupInfoBoard"*/, 0LL);
            gameObject = (UnityEngine_GameObject_o *)*p_nextPickupInfoDispControl;
            if ( *p_nextPickupInfoDispControl )
            {
              v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              EventTradeListViewItemManager__LocateObjectToTradePanel(this, v56, v57);
              return;
            }
          }
        }
      }
    }
LABEL_66:
    sub_1B8880C(gameObject, v5);
  }
}


void __fastcall EventTradeListViewItemManager__TradeReceiveResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v7; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x20
  EventTradeStoreMaster_o *v13; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4A5F4A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5F4A2 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v9,
      v10);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v11);
    v12 = (Il2CppObject *)System_String__Concat_61718292(
                            (System_String_o *)StringLiteral_15812/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16069/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v12,
                                                 (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel
      || (v13 = Master_object,
          (Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this->fields.touchPanel,
                                                        0LL)) == 0LL)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel) == 0LL)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL),
          EventTradeListViewItemManager__RequestListObject(this, v14),
          !v13) )
    {
LABEL_15:
      sub_1B8880C(Master_object, v7);
    }
    if ( !LODWORD(v13->fields._MasterName_k__BackingField) )
      sub_1B88814(Master_object, v7);
    EventTradeListViewItemManager__OpenRewardDialog(
      this,
      (EventTradeListViewItemManager_ResData_o *)v13->fields.list,
      v15);
    ActionExtensions__Call(this->fields.tradeCallback, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager__TradeReplenishmentResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v7; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_4A5F49E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5F49E = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v9,
      v10);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v11);
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
          EventTradeListViewItemManager__RequestListObject(this, v12),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0LL)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0LL),
          !playVoiceAction) )
    {
LABEL_15:
      sub_1B8880C(Master_object, v7);
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
  const MethodInfo *v5; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v7; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20

  if ( (byte_4A5F49D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5F49D = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_13;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v9,
      v10);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v11);
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
          EventTradeListViewItemManager__RequestListObject(this, v12),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0LL)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeStartVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0LL),
          !playVoiceAction) )
    {
LABEL_13:
      sub_1B8880C(Master_object, v7);
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
  UserEventTradeMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x24
  unsigned __int64 v8; // x25
  __int64 v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  EventTradeStoreEntity_o *v12; // x1
  __int64 v13; // x21
  System_Int32_array *v14; // x22
  System_Func_int__bool__o *v15; // x23
  struct EventTradeStoreEntity_array *v16; // x8
  __int64 v17; // x9
  EventTradeStoreEntity_o *v18; // x8
  int32_t *v20; // [xsp+8h] [xbp-78h]
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-70h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5F49C & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo);
    byte_4A5F49C = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  *storeIdx = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
      v20 = storeIdx;
      v8 = 0LL;
      while ( 1 )
      {
        v9 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo);
        EventTradeListViewItemManager___c__DisplayClass70_0___ctor(
          (EventTradeListViewItemManager___c__DisplayClass70_0_o *)v9,
          0LL);
        if ( v8 >= tradeStoreEntities->max_length )
          goto LABEL_27;
        if ( !v9 )
          goto LABEL_26;
        v12 = tradeStoreEntities->m_Items[v8];
        *(_QWORD *)(v9 + 16) = v12;
        v13 = v9 + 16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v12, v10, v11);
        v14 = usedStoreIdx;
        v15 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v15,
          (Il2CppObject *)v9,
          Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__,
          0LL);
        Master_object = (UserEventTradeMaster_o *)BasicHelper__Any_int__48671312(
                                                    v14,
                                                    (System_Func_T__bool__o *)v15,
                                                    (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        if ( (__int64)++v8 >= (int)tradeStoreEntities->max_length )
          return 0;
      }
      if ( *(_QWORD *)v13 )
      {
        *v20 = *(_DWORD *)(*(_QWORD *)v13 + 20LL);
        return 1;
      }
LABEL_26:
      sub_1B8880C(Master_object, v6);
    }
    return 0;
  }
  v16 = this->fields.tradeStoreEntities;
  if ( !v16 )
    goto LABEL_26;
  v17 = *(_QWORD *)&v16->max_length;
  if ( !v17 )
    return 0;
  if ( !(_DWORD)v17 )
LABEL_27:
    sub_1B88814(Master_object, v6);
  v18 = v16->m_Items[0];
  if ( !v18 )
    goto LABEL_26;
  *storeIdx = v18->fields.idx;
  return 1;
}


void __fastcall EventTradeListViewItemManager__UpdateNoticeButtonDisp(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UISprite_o *tradeNoticeBtnSp; // x0
  __int64 *v4; // x8

  if ( (byte_4A5F4AE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A5F4AE = 1;
  }
  tradeNoticeBtnSp = this->fields.tradeNoticeBtnSp;
  if ( !tradeNoticeBtnSp )
    sub_1B8880C(0LL, method);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17526/*"btn_on"*/;
  else
    v4 = &StringLiteral_17525/*"btn_off"*/;
  UISprite__set_spriteName(tradeNoticeBtnSp, (System_String_o *)*v4, 0LL);
}


void __fastcall EventTradeListViewItemManager__UpdateReceiveAllButtonState(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager___c_c *v3; // x0
  System_Collections_Generic_List_T__o *itemList; // x20
  System_Func_object__bool__o *_9__85_0; // x21
  Il2CppObject *v6; // x22
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  UIWidget_o *receiveAllButtonLabel; // x0
  __int64 v11; // x1
  long double v12; // q0
  struct UICommonButton_o *receiveAllButton; // x8
  char v14; // w20
  __int64 v15; // x1
  float v16; // s8
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5F4AB & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_ListViewItem___);
    sub_1B885B0(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__);
    sub_1B885B0(&EventTradeListViewItemManager___c_TypeInfo);
    byte_4A5F4AB = 1;
  }
  v3 = EventTradeListViewItemManager___c_TypeInfo;
  itemList = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v3 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__85_0 = (System_Func_object__bool__o *)v3->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__85_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__85_0,
      v6,
      Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_ListViewItem__bool__o *)_9__85_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v8, v9);
  }
  receiveAllButtonLabel = (UIWidget_o *)BasicHelper__Any_object_(
                                          itemList,
                                          (System_Func_T__bool__o *)_9__85_0,
                                          (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_ListViewItem___);
  receiveAllButton = this->fields.receiveAllButton;
  if ( !receiveAllButton )
    goto LABEL_23;
  v14 = (char)receiveAllButtonLabel;
  LODWORD(v12) = 0.5;
  v15 = ((unsigned __int8)receiveAllButtonLabel & 1) != 0 ? 0LL : 3LL;
  v16 = ((unsigned __int8)receiveAllButtonLabel & 1) != 0 ? 1.0 : 0.5;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer, long double))receiveAllButton->klass->vtable._14_SetState.method)(
    this->fields.receiveAllButton,
    v15,
    1LL,
    receiveAllButton->klass->vtable._15_OnPress.methodPtr,
    v12);
  receiveAllButtonLabel = (UIWidget_o *)this->fields.receiveAllButtonLabel;
  if ( !receiveAllButtonLabel )
    goto LABEL_23;
  v18.fields.a = 1.0;
  v18.fields.r = v16;
  v18.fields.g = v16;
  v18.fields.b = v16;
  UIWidget__set_color(receiveAllButtonLabel, v18, 0LL);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0LL, 0LL) )
  {
    receiveAllButtonLabel = (UIWidget_o *)this->fields.tradeButtonBlinkEffect;
    if ( receiveAllButtonLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButtonLabel, v14 & 1, 0LL);
      return;
    }
LABEL_23:
    sub_1B8880C(receiveAllButtonLabel, v11);
  }
}


void __fastcall EventTradeListViewItemManager__UpdateTradeQuoteLb(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v2; // x19
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x8
  int max_length; // w22
  il2cpp_array_size_t v5; // w8
  int v6; // w21
  System_String_o **v7; // x8
  System_String_o *v8; // x20
  UILabel_o *tradeQuotaLb; // x19
  System_String_o *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  int v19; // [xsp+8h] [xbp-48h] BYREF
  int v20; // [xsp+Ch] [xbp-44h] BYREF
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-40h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4A5F4B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13405/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/);
    this = (EventTradeListViewItemManager_o *)sub_1B885B0(&StringLiteral_13404/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/);
    byte_4A5F4B1 = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  tradeStoreEntities = v2->fields.tradeStoreEntities;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradeListViewItemManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
    v5 = usedStoreIdx->max_length;
  }
  else
  {
LABEL_12:
    v5 = 0;
  }
  v6 = max_length - v5;
  v7 = (System_String_o **)(max_length == v5 ? &StringLiteral_13405/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_13404/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/);
  v8 = *v7;
  tradeQuotaLb = v2->fields.tradeQuotaLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(v8, 0LL);
  v20 = v6;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v11, v12, v13);
  v19 = max_length;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v15, v16, v17);
  this = (EventTradeListViewItemManager_o *)System_String__Format_61721404(v10, v14, v18, 0LL);
  if ( !tradeQuotaLb )
LABEL_20:
    sub_1B8880C(this, method);
  UILabel__set_text(tradeQuotaLb, (System_String_o *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager__WithdrawalResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  EventTradeListViewItemManager_ResData_o *list; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x20
  EventTradeStoreMaster_o *v13; // x20
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  struct BattleDropItem_array *resultTradeRewardInfos; // x8

  if ( (byte_4A5F4A3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5F4A3 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_19;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v9,
      v10);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v11);
    v12 = (Il2CppObject *)System_String__Concat_61718292(
                            (System_String_o *)StringLiteral_15812/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16069/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v12,
                                                 (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel )
      goto LABEL_19;
    v13 = Master_object;
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
    EventTradeListViewItemManager__RequestListObject(this, v14);
    if ( !v13 )
      goto LABEL_19;
    if ( !LODWORD(v13->fields._MasterName_k__BackingField) )
      sub_1B88814(Master_object, list);
    list = (EventTradeListViewItemManager_ResData_o *)v13->fields.list;
    if ( !list || (resultTradeRewardInfos = list->fields.resultTradeRewardInfos) == 0LL )
LABEL_19:
      sub_1B8880C(Master_object, list);
    if ( *(_QWORD *)&resultTradeRewardInfos->max_length )
      EventTradeListViewItemManager__OpenRewardDialog(this, list, v15);
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


void __fastcall EventTradeListViewItemManager___IsOverPresentBoxLimit_b__87_2(
        EventTradeListViewItemManager_o *this,
        bool isOpenPresentBox,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v11; // x20

  if ( (byte_4A5F4B2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo);
    byte_4A5F4B2 = 1;
  }
  v5 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo);
  EventTradeListViewItemManager___c__DisplayClass87_0___ctor(
    (EventTradeListViewItemManager___c__DisplayClass87_0_o *)v5,
    0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9),
        *(_BYTE *)(v5 + 16) = isOpenPresentBox,
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)v5,
          Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_1B8880C(v6, v7);
  }
  PresentBoxOverDialog__Close_46144496(presentBoxOverDlg, v11, 0LL);
}


void __fastcall EventTradeListViewItemManager___OnClickTradeStartButton_b__62_0(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1B8880C(0LL, method);
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
    || (v3 = this, (this = (EventTradeListViewItemManager_o *)EventTradeListViewObject__GetItem(x, 0LL)) == 0LL)
    || (dragParentObject = this->fields.dragParentObject) == 0LL
    || (selectTradeGoodsEntity = v3->fields.selectTradeGoodsEntity) == 0LL )
  {
    sub_1B8880C(this, x);
  }
  return dragParentObject->fields.m_CachedPtr == selectTradeGoodsEntity->fields.id;
}


System_Collections_Generic_List_EventTradeListViewObject__o *__fastcall EventTradeListViewItemManager__get_ObjectList(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Generic_List_object__o *v4; // x22
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  EventTradeListViewItemManager___c_c *v9; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  System_Func_object__bool__o *_9__48_0; // x22
  Il2CppObject *v12; // x23
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x21
  System_Action_object__o *v18; // x22

  if ( (byte_4A5F489 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_GameObject__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_GameObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1B885B0(&System_Func_GameObject__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventTradeListViewObject__TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo);
    sub_1B885B0(&EventTradeListViewItemManager___c_TypeInfo);
    byte_4A5F489 = 1;
  }
  v3 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo);
  EventTradeListViewItemManager___c__DisplayClass48_0___ctor(
    (EventTradeListViewItemManager___c__DisplayClass48_0_o *)v3,
    0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTradeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__);
  if ( !v3 )
    goto LABEL_12;
  *(_QWORD *)(v3 + 16) = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v4, v7, v8);
  v9 = EventTradeListViewItemManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v9 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__bool__o *)v9->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__48_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__48_0,
      v12,
      Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_GameObject__bool__o *)_9__48_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__48_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GameObject___);
  v17 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v16,
                                                       (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v18 = (System_Action_object__o *)sub_1B887FC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v3,
    Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__,
    0LL);
  if ( !v17 )
LABEL_12:
    sub_1B8880C(v5, v6);
  System_Collections_Generic_List_object___ForEach(
    v17,
    (System_Action_T__o *)v18,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  return *(System_Collections_Generic_List_EventTradeListViewObject__o **)(v3 + 16);
}


void __fastcall EventTradeListViewItemManager_ResData___ctor(
        EventTradeListViewItemManager_ResData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A56390 & 1) == 0 )
  {
    sub_1B885B0(&EventTradeListViewItemManager___c_TypeInfo);
    byte_4A56390 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventTradeListViewItemManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTradeListViewItemManager___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemManager___c_o *)v1;
  sub_1B88554(EventTradeListViewItemManager___c_TypeInfo->static_fields, v1);
}


void __fastcall EventTradeListViewItemManager___c___ctor(
        EventTradeListViewItemManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_0(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A56393 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo);
    byte_4A56393 = 1;
  }
  v4 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_1(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A56394 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo);
    byte_4A56394 = 1;
  }
  v4 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_4(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4A56395 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo);
    byte_4A56395 = 1;
  }
  v4 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0LL);
}


bool __fastcall EventTradeListViewItemManager___c___IsOverPresentBoxLimit_b__87_0(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9

  if ( (byte_4A56396 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1B885B0(&EventTradeListViewItem_TypeInfo);
    byte_4A56396 = 1;
  }
  if ( !item )
LABEL_8:
    sub_1B8880C(this, item);
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1B88ACC(item);
    goto LABEL_8;
  }
  return EventTradeListViewItem__get_IsAbleReceiveRewards((EventTradeListViewItem_o *)item, 0LL);
}


EventTradeGoodsEntity_o *__fastcall EventTradeListViewItemManager___c___IsOverPresentBoxLimit_b__87_1(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9

  if ( (byte_4A56397 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1B885B0(&EventTradeListViewItem_TypeInfo);
    byte_4A56397 = 1;
  }
  if ( !item )
LABEL_8:
    sub_1B8880C(this, item);
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1B88ACC(item);
    goto LABEL_8;
  }
  return (EventTradeGoodsEntity_o *)item[1].monitor;
}


bool __fastcall EventTradeListViewItemManager___c___UpdateReceiveAllButtonState_b__85_0(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A56392 & 1) == 0 )
  {
    sub_1B885B0(&EventTradeListViewItem_TypeInfo);
    byte_4A56392 = 1;
  }
  if ( !item )
    return 0;
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0;
  if ( (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
    item = 0LL;
  if ( !item )
    return 0;
  EventTradeListViewItem__UpdateTradeUserInfo((EventTradeListViewItem_o *)item, 0LL);
  return EventTradeListViewItem__get_IsAbleReceiveRewards((EventTradeListViewItem_o *)item, 0LL);
}


bool __fastcall EventTradeListViewItemManager___c___get_ObjectList_b__48_0(
        EventTradeListViewItemManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4A56391 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56391 = 1;
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
  System_Collections_Generic_List_object__o *list; // x19
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  EventTradeListViewItemManager___c__DisplayClass48_0_o *v9; // x1
  Il2CppClass **v10; // x0

  v4 = this;
  if ( (byte_4A56398 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___);
    this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeListViewObject__Add__);
    byte_4A56398 = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          go,
                                                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___),
        !list)
    || (items = list->fields._items,
        v7 = Method_System_Collections_Generic_List_EventTradeListViewObject__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_1B8880C(this, go);
  }
  size = list->fields._size;
  v9 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    list->fields._size = size + 1;
    v10 = &items->obj.klass + size;
    v10[4] = (Il2CppClass *)v9;
    sub_1B88554(v10 + 4, v9);
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
        EventTradeListViewItemManager__OpenReconfirmDialog(_4__this, (EventTradeListViewItem_o *)this, 0LL);
        return;
      }
    }
LABEL_8:
    sub_1B8880C(this, value);
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


void __fastcall EventTradeListViewItemManager___c__DisplayClass66_0___OpenReconfirmDialog_b__0(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v9; // x20

  if ( (byte_4A56399 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__);
    sub_1B885B0(&EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo);
    byte_4A56399 = 1;
  }
  v5 = sub_1B887FC(EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1B88554(v5 + 24, this),
        *(_BYTE *)(v5 + 16) = decide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_30494572((CommonUI_o *)Instance, v9, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass66_0___OpenReconfirmDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  EventTradeListViewItemManager__OnClickWithdrawalDecide(_4__this, this->fields.item, 0LL);
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
  EventTradeListViewItemManager___c__DisplayClass66_1_o *v2; // x19
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *CS___8__locals1; // x9
  struct EventTradeListViewItemManager_o *_4__this; // x8
  struct EventTradeListViewItem_o *item; // x9
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v7; // x8
  int32_t oldCompleteNum; // w20
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v9; // x8
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  Il2CppObject *v12; // x23
  System_Action_o *monitor; // x22
  EventTradeListViewItemManager___c__DisplayClass66_1_o *v14; // x19

  v2 = this;
  if ( (byte_4A5639A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1B885B0(&StringLiteral_13403/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_4A5639A = 1;
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
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1B88554(
                                                                      &_4__this->fields.selectTradeGoodsEntity,
                                                                      TradeGoodsEntity_k__BackingField);
    v7 = v2->fields.CS___8__locals1;
    if ( !v7 )
      goto LABEL_23;
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v7->fields.item;
    if ( !this )
      goto LABEL_23;
    oldCompleteNum = v7->fields.oldCompleteNum;
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)EventTradeListViewItem__get_NowCompleteNum(
                                                                      (EventTradeListViewItem_o *)this,
                                                                      0LL);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v9 = v2->fields.CS___8__locals1;
      if ( v9 )
      {
        this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v9->fields.__4__this;
        if ( this )
        {
          EventTradeListViewItemManager__OnClickWithdrawalDecide(
            (EventTradeListViewItemManager_o *)this,
            v9->fields.item,
            0LL);
          return;
        }
      }
LABEL_23:
      sub_1B8880C(this, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13403/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
                                                                      0LL);
    v12 = (Il2CppObject *)v2->fields.CS___8__locals1;
    if ( !v12 )
      goto LABEL_23;
    monitor = (System_Action_o *)v12[2].monitor;
    v14 = this;
    if ( !monitor )
    {
      monitor = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        monitor,
        v12,
        Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__,
        0LL);
      v12[2].monitor = monitor;
      this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1B88554(&v12[2].monitor, monitor);
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
      method);
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
    sub_1B8880C(this, idx);
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
      EventTradeListViewItemManager__OpenReconfirmDialog(_4__this, this->fields.item, 0LL);
      return;
    }
LABEL_7:
    sub_1B8880C(_4__this, onDecide);
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
  Il2CppObject *v3; // x20
  Il2CppClass *klass; // x19
  void *monitor; // x8
  EventTradePointRewardDialogComponent_o *v6; // x21
  int32_t v7; // w22
  int32_t v8; // w23
  __int64 v9; // x26
  System_Action_o *v10; // x24
  __int64 v11; // x23
  System_Action_o *v12; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4A5639B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__);
    byte_4A5639B = 1;
  }
  klass = v3[1].klass;
  if ( !klass )
    goto LABEL_14;
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  if ( klass->_1.namespaze )
  {
    v6 = (EventTradePointRewardDialogComponent_o *)*((_QWORD *)monitor + 53);
    v7 = *((_DWORD *)monitor + 126);
    v8 = *((_DWORD *)monitor + 125);
    v9 = *((_QWORD *)monitor + 64);
    v10 = (System_Action_o *)v3[3].monitor;
    if ( !v10 )
    {
      v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        v3,
        Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__,
        0LL);
      v3[3].monitor = v10;
      this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B88554(&v3[3].monitor, v10);
    }
    if ( v6 )
    {
      EventTradePointRewardDialogComponent__Open(v6, v7, v8, (BattleDropItem_array *)klass, v9 == 0, v10, v2);
      return;
    }
LABEL_14:
    sub_1B8880C(this, method);
  }
  v11 = *((_QWORD *)monitor + 67);
  v12 = (System_Action_o *)v3[4].monitor;
  if ( !v12 )
  {
    v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__,
      0LL);
    v3[4].monitor = v12;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B88554(&v3[4].monitor, v12);
  }
  if ( !v11 )
    goto LABEL_14;
  (*(void (__fastcall **)(_QWORD, Il2CppClass *, _QWORD, System_Action_o *, _QWORD))(v11 + 24))(
    *(_QWORD *)(v11 + 64),
    klass,
    0LL,
    v12,
    *(_QWORD *)(v11 + 40));
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__1(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _QWORD *monitor; // x8
  __int64 v4; // x23
  System_Action_o *klass; // x21
  Il2CppClass *v6; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4A5639C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__);
    byte_4A5639C = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v4 = monitor[67];
  klass = (System_Action_o *)v2[3].klass;
  v6 = v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__,
      0LL);
    v2[3].klass = (Il2CppClass *)klass;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B88554(&v2[3], klass);
  }
  if ( !v4 )
LABEL_8:
    sub_1B8880C(this, method);
  (*(void (__fastcall **)(_QWORD, Il2CppClass *, _QWORD, System_Action_o *, _QWORD))(v4 + 24))(
    *(_QWORD *)(v4 + 64),
    v6,
    0LL,
    klass,
    *(_QWORD *)(v4 + 40));
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v2; // x19
  System_Action_o *_9__5; // x22
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21

  v2 = this;
  if ( (byte_4A5639E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__);
    byte_4A5639E = 1;
  }
  _9__5 = v2->fields.__9__5;
  _4__this = v2->fields.__4__this;
  oldEventPoint = v2->fields.oldEventPoint;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v2,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__,
      0LL);
    v2->fields.__9__5 = _9__5;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B88554(&v2->fields.__9__5, _9__5);
  }
  if ( !_4__this )
    sub_1B8880C(this, method);
  EventTradeListViewItemManager__CheckOpenQuest(_4__this, oldEventPoint, _9__5, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__3(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v2; // x19
  System_Action_o *_9__4; // x22
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21

  v2 = this;
  if ( (byte_4A5639D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B885B0(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__);
    byte_4A5639D = 1;
  }
  _9__4 = v2->fields.__9__4;
  _4__this = v2->fields.__4__this;
  oldEventPoint = v2->fields.oldEventPoint;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__,
      0LL);
    v2->fields.__9__4 = _9__4;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1B88554(&v2->fields.__9__4, _9__4);
  }
  if ( !_4__this )
    sub_1B8880C(this, method);
  EventTradeListViewItemManager__CheckOpenQuest(_4__this, oldEventPoint, _9__4, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__4(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_5;
  if ( EventTradeListViewItemManager__ExecuteCloseDialogCallBack(_4__this, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_5:
    sub_1B8880C(_4__this, method);
  EventTradeListViewItemManager__OpenReplenishmentDialog(_4__this, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__5(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_5;
  if ( EventTradeListViewItemManager__ExecuteCloseDialogCallBack(_4__this, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_5:
    sub_1B8880C(_4__this, method);
  EventTradeListViewItemManager__OpenReplenishmentDialog(_4__this, 0LL);
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
  EventTradeGoodsMaster_o *Master_object; // x0
  __int64 v4; // x1
  struct EventTradeListViewItemManager_o *_4__this; // x8
  struct EventTradeListViewItem_array *itemList; // x8
  EventTradeListViewItem_o *v7; // x8
  EventTradeGoodsMaster_o *klass; // x2
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x0
  struct EventTradeListViewItemManager_o *v12; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x9

  if ( (byte_4A5639F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_string___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_14547/*"TradeNotificationDialogOpenTime"*/);
    byte_4A5639F = 1;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_14547/*"TradeNotificationDialogOpenTime"*/, this->fields.openTime, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
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
        sub_1B88814(Master_object, v4);
      v7 = itemList->m_Items[0];
      if ( v7 )
      {
        Master_object = (EventTradeGoodsMaster_o *)v7->fields._TradeGoodsEntity_k__BackingField;
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
    sub_1B8880C(Master_object, v4);
  }
  v9 = Method_System_Array_Empty_string___;
  v10 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v10 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_string___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BDA48C();
  if ( !*(_DWORD *)(v11 + 224) )
    j_il2cpp_runtime_class_init_0(v11);
  Master_object = *(EventTradeGoodsMaster_o **)(v9[7] + 16LL);
  if ( (*((_BYTE *)&Master_object[4].fields._MasterKind_k__BackingField + 5) & 1) == 0 )
    Master_object = (EventTradeGoodsMaster_o *)sub_1BDA48C();
  klass = (EventTradeGoodsMaster_o *)Master_object[2].fields._lookup->klass;
LABEL_23:
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_26;
  playVoiceAction = v12->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_26;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, EventTradeGoodsMaster_o *, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
    playVoiceAction->fields.original_method_info,
    (unsigned int)v12->fields.svtId,
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
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3

  if ( (byte_4A563A0 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    sub_1B885B0(&StringLiteral_12623/*"ServantCombine"*/);
    byte_4A563A0 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664432(v5, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1B8880C(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12623/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0LL);
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
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_4A563A1 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12627/*"ServantEquipList"*/);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    sub_1B885B0(&StringLiteral_12626/*"ServantEQCombine"*/);
    byte_4A563A1 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664432(v5, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B8880C(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12627/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664344(v5, (System_String_o *)StringLiteral_12626/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v8, 1, (Il2CppObject *)v5, 0LL);
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
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A563A2 & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    byte_4A563A2 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_38664432(v4, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1B8880C(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0LL);
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
      sub_1B8880C(this, method);
    boxOverDlgCloseCallBack = _4__this->fields.boxOverDlgCloseCallBack;
    if ( boxOverDlgCloseCallBack )
      ActionExtensions__Call(boxOverDlgCloseCallBack, 0LL);
  }
}
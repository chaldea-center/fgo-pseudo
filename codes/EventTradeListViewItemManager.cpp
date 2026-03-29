void EventTradeListViewItemManager___ctor(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CURRENT_PICKUP_INFO_BOARD_POS.fields.x = xmmword_D00C20;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventTradeListViewItemManager__CheckIsSerializeFieldNotNull(Il2CppObject *targetObj, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  int monitor; // w8
  Il2CppObject *v4; // x20
  unsigned int v5; // w24
  System_Reflection_MemberInfo_o *v6; // x21
  Il2CppType *v7; // x22
  System_Type_o *TypeFromHandle; // x0
  int v9; // w22
  __int64 v10; // x23

  v2 = targetObj;
  if ( (byte_4D2B26D & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_var);
    sub_1C93AD4(&UnityEngine_SerializeField_var);
    targetObj = (Il2CppObject *)sub_1C93AD4(&System_Type_TypeInfo);
    byte_4D2B26D = 1;
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
        sub_1C93D34(targetObj);
      v6 = (System_Reflection_MemberInfo_o *)*((_QWORD *)&v4[2].klass + (int)v5);
      v7 = UnityEngine_SerializeField_var;
      if ( !System_Type_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
      TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v7, 0);
      targetObj = (Il2CppObject *)System_Reflection_CustomAttributeExtensions__IsDefined(v6, TypeFromHandle, 0);
      if ( !v6 )
        break;
      v9 = (int)targetObj;
      v10 = ((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, const char *))v6->klass[1]._1.name)(
              v6,
              v6->klass[1]._1.namespaze);
      targetObj = (Il2CppObject *)System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)UnityEngine_Object_var, 0);
      if ( !v10 )
        break;
      targetObj = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, Il2CppObject *, _QWORD))(*(_QWORD *)v10 + 648LL))(
                                    v10,
                                    targetObj,
                                    *(_QWORD *)(*(_QWORD *)v10 + 656LL));
      if ( (v9 & (unsigned int)targetObj & 1) != 0 )
        targetObj = (Il2CppObject *)((__int64 (__fastcall *)(System_Reflection_MemberInfo_o *, Il2CppObject *, void *))v6->klass[1]._1.properties)(
                                      v6,
                                      v2,
                                      v6->klass[1]._1.methods);
      monitor = (int)v4[1].monitor;
      if ( (int)++v5 >= monitor )
        return;
    }
LABEL_17:
    sub_1C93D2C(targetObj, method);
  }
}


void EventTradeListViewItemManager__CheckOpenQuest(
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

  if ( (byte_4D2B269 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&EventInfoTradeRankControl_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B269 = 1;
  }
  currentEventId = this->fields.currentEventId;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo);
  EventInfoTradeRankControl__UpdateOldPoint(currentEventId, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = this->fields.currentEventId;
  v10 = (CommonUI_o *)Instance;
  v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__, 0);
  if ( !v10 )
    sub_1C93D2C(v12, v13);
  if ( !CommonUI__CheckOpenQuestByEventPoint(
          v10,
          v9,
          oldEventPoint,
          v11,
          0,
          -2.0,
          0,
          (System_String_o *)StringLiteral_1/*""*/,
          0) )
    ActionExtensions__Call(callback, 0);
}


void EventTradeListViewItemManager__CreateList(EventTradeListViewItemManager_o *this, const MethodInfo *method)
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
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  struct EventTradeGoodsEntity_array *v18; // x8
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_4D2B250 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__);
    sub_1C93AD4(&EventTradeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_5734/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_4D2B250 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
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
        sub_1C93D34(itemList);
      v8 = tradeGoodsEntities->m_Items[v7];
      if ( !v8 )
        break;
      id = v8->fields.id;
      currentEventId = this->fields.currentEventId;
      v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)this,
        Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
        0);
      v12 = (EventTradeListViewItem_o *)sub_1C93D20(EventTradeListViewItem_TypeInfo);
      EventTradeListViewItem___ctor(v12, id, v8, currentEventId, v11, v13);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v15 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v12,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v12;
        itemList = (System_Collections_Generic_List_object__o *)sub_1C93A78(v17 + 4, v12);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_14;
    }
LABEL_20:
    sub_1C93D2C(itemList, v4);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
  v18 = this->fields.tradeGoodsEntities;
  if ( !v18 )
    goto LABEL_20;
  if ( !v18->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5734/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
                                                              0);
    if ( !emptyMessageLabel )
      goto LABEL_20;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0);
  }
}


void EventTradeListViewItemManager__DestroyList(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  EventTradeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *tradeRewardDialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *tradePointRewardDialog; // x20
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  struct EventTradePickupInfoDispControl_o **p_nextPickupInfoDispControl; // x19
  UnityEngine_Object_o *v19; // x20

  if ( (byte_4D2B252 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B252 = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventTradeAssetManager__Release(assetManager, this->fields.currentEventId, v3);
  tradeRewardDialog = (UnityEngine_Object_o *)this->fields.tradeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeRewardDialog, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.tradeRewardDialog;
    if ( !v7 )
      goto LABEL_48;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    this->fields.tradeRewardDialog = 0;
    sub_1C93A78(&this->fields.tradeRewardDialog, 0);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradePointRewardDialog, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.tradePointRewardDialog;
    if ( !v7 )
      goto LABEL_48;
    v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v10, 0);
    this->fields.tradePointRewardDialog = 0;
    sub_1C93A78(&this->fields.tradePointRewardDialog, 0);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeSweetsNumConfirmDialog, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.tradeSweetsNumConfirmDialog;
    if ( !v7 )
      goto LABEL_48;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v12, 0);
    this->fields.tradeSweetsNumConfirmDialog = 0;
    sub_1C93A78(&this->fields.tradeSweetsNumConfirmDialog, 0);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeSweetsWithdrawalConfirmDialog, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
    if ( !v7 )
      goto LABEL_48;
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v14, 0);
    this->fields.tradeSweetsWithdrawalConfirmDialog = 0;
    sub_1C93A78(&this->fields.tradeSweetsWithdrawalConfirmDialog, 0);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentPickupInfoDispControl, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.currentPickupInfoDispControl;
    if ( !v7 )
      goto LABEL_48;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v16, 0);
    this->fields.currentPickupInfoDispControl = 0;
    sub_1C93A78(&this->fields.currentPickupInfoDispControl, 0);
  }
  nextPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.nextPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nextPickupInfoDispControl, 0, 0) )
  {
    p_nextPickupInfoDispControl = &this->fields.nextPickupInfoDispControl;
    v7 = (UnityEngine_Component_o *)*p_nextPickupInfoDispControl;
    if ( *p_nextPickupInfoDispControl )
    {
      v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v19, 0);
      *p_nextPickupInfoDispControl = 0;
      sub_1C93A78(p_nextPickupInfoDispControl, 0);
      return;
    }
LABEL_48:
    sub_1C93D2C(v7, v6);
  }
}


void EventTradeListViewItemManager__DispPickupInfoBoard(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  int64_t Time; // x21
  System_DateTime_o v5; // x0
  int64_t Time_42095976; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x22
  bool EntityListTargetTime; // w21
  char v10; // w20
  const MethodInfo *v11; // x4
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *infoPanel; // x20
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Object_o *svtIndexPanel; // x20
  UnityEngine_GameObject_o *v17; // x0
  uint64_t dateData; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *v19; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D2B273 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B273 = 1;
  }
  pickupEntityList = 0;
  v19 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  dateData = NetworkManager__getDateTime(0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v5.fields._dateData = System_DateTime__AddDays((System_DateTime_o)&dateData, 1.0, 0).fields._dateData;
  Time_42095976 = NetworkManager__getTime_42095976(v5, 0);
  if ( !Master_object )
    goto LABEL_32;
  v8 = Time_42095976;
  EntityListTargetTime = EventTradePickupMaster__TryGetEntityListTargetTime(
                           (EventTradePickupMaster_o *)Master_object,
                           &pickupEntityList,
                           this->fields.currentEventId,
                           Time,
                           0);
  Time_42095976 = EventTradePickupMaster__TryGetEntityListTargetTime(
                    (EventTradePickupMaster_o *)Master_object,
                    &v19,
                    this->fields.currentEventId,
                    v8,
                    0);
  if ( !this->fields.currentPickupInfoDispControl )
    goto LABEL_32;
  v10 = Time_42095976;
  EventTradePickupInfoDispControl__Init(this->fields.currentPickupInfoDispControl, v7);
  Time_42095976 = (int64_t)this->fields.nextPickupInfoDispControl;
  if ( !Time_42095976 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__Init((EventTradePickupInfoDispControl_o *)Time_42095976, v7);
  if ( !EntityListTargetTime )
  {
    if ( (v10 & 1) == 0 )
      return;
LABEL_18:
    Time_42095976 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_42095976 )
      goto LABEL_32;
    EventTradePickupInfoDispControl__SetUi(
      (EventTradePickupInfoDispControl_o *)Time_42095976,
      this->fields.currentEventId,
      v19,
      0,
      v11);
    Time_42095976 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_42095976 )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_42095976, 0);
    GameObjectExtensions__SetLocalPosition_36745064(gameObject, this->fields.NEXT_PICKUP_INFO_BOARD_POS, 0);
    goto LABEL_21;
  }
  Time_42095976 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_42095976 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__SetUi(
    (EventTradePickupInfoDispControl_o *)Time_42095976,
    this->fields.currentEventId,
    pickupEntityList,
    1,
    v11);
  Time_42095976 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_42095976 )
    goto LABEL_32;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_42095976, 0);
  GameObjectExtensions__SetLocalPosition_36745064(v12, this->fields.CURRENT_PICKUP_INFO_BOARD_POS, 0);
  if ( (v10 & 1) != 0 )
    goto LABEL_18;
LABEL_21:
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0, 0) )
  {
    Time_42095976 = (int64_t)this->fields.infoPanel;
    if ( !Time_42095976 )
      goto LABEL_32;
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_42095976, 0);
    GameObjectExtensions__SetLocalPositionY(v15, -33.0, 0);
  }
  svtIndexPanel = (UnityEngine_Object_o *)this->fields.svtIndexPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(svtIndexPanel, 0, 0) )
  {
    Time_42095976 = (int64_t)this->fields.svtIndexPanel;
    if ( Time_42095976 )
    {
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_42095976, 0);
      GameObjectExtensions__SetLocalPositionY(v17, -92.0, 0);
      return;
    }
LABEL_32:
    sub_1C93D2C(Time_42095976, v7);
  }
}


bool EventTradeListViewItemManager__ExecuteCloseDialogCallBack(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *closeDialogCallBack; // x8

  closeDialogCallBack = this->fields.closeDialogCallBack;
  return closeDialogCallBack
      && ((bool (__fastcall *)(intptr_t, intptr_t))closeDialogCallBack->fields.invoke_impl)(
           closeDialogCallBack->fields.method_code,
           closeDialogCallBack->fields.method);
}


System_Collections_Generic_List_EventTradeListViewItem__o *EventTradeListViewItemManager__GetPickupList(
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
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4D2B251 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__get_Current__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__);
    sub_1C93AD4(&EventTradeListViewItem_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTradeListViewItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventTradeListViewItem__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2B251 = 1;
  }
  pickupEntityList = 0;
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventTradeListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  currentEventId = this->fields.currentEventId;
  v6 = (EventTradePickupMaster_o *)Master_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v6 )
    goto LABEL_29;
  if ( !EventTradePickupMaster__TryGetEntityListTargetTime(v6, &pickupEntityList, currentEventId, Time, 0) )
    return (System_Collections_Generic_List_EventTradeListViewItem__o *)v3;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !pickupEntityList )
LABEL_29:
    sub_1C93D2C(Time, v8);
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Time;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)pickupEntityList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v28.fields._current )
      sub_1C93D2C(v10, v11);
    if ( !v9 )
      sub_1C93D2C(v10, v11);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v9,
               (int32_t)v28.fields._current[1].klass,
               (const MethodInfo_3463274 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    v14 = (EventTradeGoodsEntity_o *)Entity;
    if ( !Entity )
      sub_1C93D2C(0, v13);
    klass = (int32_t)Entity[1].klass;
    v16 = this->fields.currentEventId;
    v17 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
      0);
    v18 = (EventTradeListViewItem_o *)sub_1C93D20(EventTradeListViewItem_TypeInfo);
    EventTradeListViewItem___ctor(v18, klass, v14, v16, v17, v19);
    if ( !v3 )
      sub_1C93D2C(v20, v21);
    items = v3->fields._items;
    v23 = Method_System_Collections_Generic_List_EventTradeListViewItem__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C93D2C(v20, v21);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v18,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v25[4] = (Il2CppClass *)v18;
      sub_1C93A78(v25 + 4, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__);
  return (System_Collections_Generic_List_EventTradeListViewItem__o *)v3;
}


int64_t EventTradeListViewItemManager__GetUpdateTime(EventTradeListViewItemManager_o *this, const MethodInfo *method)
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

  if ( (byte_4D2B26B & 1) == 0 )
  {
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&EventTradeTimeCalculation_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2B26B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getLocalDateTime(0).fields._dateData;
  Time = NetworkManager__getTime(0);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  Hour = System_DateTime__get_Hour((System_DateTime_o)&dateData, 0);
  Minute = System_DateTime__get_Minute((System_DateTime_o)&dateData, 0);
  Second = System_DateTime__get_Second((System_DateTime_o)&dateData, 0);
  v6 = EventTradeTimeCalculation_TypeInfo;
  v7 = Second;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
    v6 = EventTradeTimeCalculation_TypeInfo;
  }
  v8 = v6->static_fields->TRADE_TIME_OFFSET + Time - (v7 + 60 * (Minute + 60 * Hour));
  if ( NetworkManager__getTime(0) < v8 )
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


void EventTradeListViewItemManager__Init(
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
  EventTradeGoodsMaster_o *Master_object; // x0
  __int64 v20; // x1
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x8
  EventTradeGoodsEntity_o *v24; // x8
  int32_t eventPointItemId; // w8
  EventTradeAssetManager_o *v26; // x22
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  UILabel_o *tradeNoticeLb; // x21
  const MethodInfo *v30; // x1
  EventTradeAssetManager_o *assetManager; // x21
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x3

  if ( (byte_4D2B24F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&EventTradeAssetManager_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager__Init_b__53_0__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13584/*"TRADE_EVENT_PUSH_BTN_LABEL"*/);
    byte_4D2B24F = 1;
  }
  this->fields.svtId = svtId;
  this->fields.currentEventId = eventId;
  this->fields.tradeCallback = tradeCallback;
  sub_1C93A78(&this->fields.tradeCallback, tradeCallback);
  this->fields.rewardDialogCallBack = rewardDialogCallBack;
  sub_1C93A78(&this->fields.rewardDialogCallBack, rewardDialogCallBack);
  this->fields.playVoiceAction = playVoice;
  sub_1C93A78(&this->fields.playVoiceAction, playVoice);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_1C93A78(&this->fields.presentBoxOverDlg, boxOverDlg);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_1C93A78(&this->fields.boxOverDlgCloseCallBack, boxOverDlgCallBack);
  this->fields.closeDialogCallBack = closeDialogCallBack;
  sub_1C93A78(&this->fields.closeDialogCallBack, closeDialogCallBack);
  this->fields.maskPanel = maskPanel;
  sub_1C93A78(&this->fields.maskPanel, maskPanel);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_19;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(Master_object, this->fields.currentEventId, 0);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_1C93A78(&this->fields.tradeGoodsEntities, TradeGoodsEntityArray);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_19;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  Master_object = (EventTradeGoodsMaster_o *)sub_1C93A78(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_19;
  if ( !LODWORD(tradeGoodsEntities->max_length) )
    sub_1C93D34(Master_object);
  v24 = tradeGoodsEntities->m_Items[0];
  if ( !v24 )
    goto LABEL_19;
  eventPointItemId = v24->fields.eventPointItemId;
  this->fields.selectTradeGoodsEntity = 0;
  this->fields.eventPointItemId = eventPointItemId;
  sub_1C93A78(&this->fields.selectTradeGoodsEntity, 0);
  Master_object = (EventTradeGoodsMaster_o *)this->fields.touchPanel;
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (EventTradeGoodsMaster_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Master_object,
                                               0);
  if ( !Master_object )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  if ( !this->fields.assetManager )
  {
    v26 = (EventTradeAssetManager_o *)sub_1C93D20(EventTradeAssetManager_TypeInfo);
    EventTradeAssetManager___ctor(v26, v27);
    this->fields.assetManager = v26;
    sub_1C93A78(&this->fields.assetManager, v26);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetTradeNotification(0);
  EventTradeListViewItemManager__UpdateNoticeButtonDisp(this, v28);
  tradeNoticeLb = this->fields.tradeNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13584/*"TRADE_EVENT_PUSH_BTN_LABEL"*/, 0);
  if ( !tradeNoticeLb
    || (UILabel__set_text(tradeNoticeLb, (System_String_o *)Master_object, 0),
        EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v30),
        assetManager = this->fields.assetManager,
        v32 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v32, (Il2CppObject *)this, Method_EventTradeListViewItemManager__Init_b__53_0__, 0),
        !assetManager) )
  {
LABEL_19:
    sub_1C93D2C(Master_object, v20);
  }
  EventTradeAssetManager__GetAssets(assetManager, eventId, v32, v33);
}


bool EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  System_String_o *String_72078212; // x0
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1
  int64_t v5; // x20
  EventTradeListViewItemManager_o *UpdateTime; // x0
  const MethodInfo *v7; // x1
  int64_t v9; // x0
  EventTradeTimeCalculation_c *v10; // x8
  int64_t v11; // x19
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2B26A & 1) == 0 )
  {
    sub_1C93AD4(&EventTradeTimeCalculation_TypeInfo);
    sub_1C93AD4(&StringLiteral_14668/*"TradeNotificationDialogOpenTime"*/);
    byte_4D2B26A = 1;
  }
  result = 0;
  String_72078212 = UnityEngine_PlayerPrefs__GetString_72078212((System_String_o *)StringLiteral_14668/*"TradeNotificationDialogOpenTime"*/, 0);
  v3 = System_Int64__TryParse(String_72078212, &result, 0);
  if ( v3 )
    v5 = result;
  else
    v5 = 0;
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


bool EventTradeListViewItemManager__IsOverPossessionLimit(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Master_object; // x0
  __int64 v4; // x1
  UserServantMaster_o *v5; // x21
  Il2CppObject *v6; // x19
  CommonUI_o *v7; // x19
  int32_t v8; // w21
  int32_t svtKeep; // w20
  ServantFrameShortDlgComponent_CallbackFunc_o *v10; // x22
  Il2CppObject *v11; // x23
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  CommonUI_o *v13; // x0
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  CommonUI_o *v17; // x19
  int32_t v18; // w21
  int32_t svtEquipKeep; // w20
  Il2CppObject *v20; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v21; // x0
  bool v22; // w8
  bool result; // w0
  int32_t Count; // w19
  CommonUI_o *v25; // x21
  BalanceConfig_c *v26; // x8
  Il2CppObject *v27; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v28; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B26F & 1) == 0 )
  {
    sub_1C93AD4(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__);
    sub_1C93AD4(&EventTradeListViewItemManager___c_TypeInfo);
    byte_4D2B26F = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_45;
  v5 = (UserServantMaster_o *)Master_object;
  UserServantMaster__getCount((UserServantMaster_o *)Master_object, &servantEquipSum[1], servantEquipSum, 1, 0);
  v6 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v5, 1, 0) )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v7 = (CommonUI_o *)Master_object;
      v8 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
      if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
        Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
      }
      v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Master_object + 184) + 24LL);
      if ( !v10 )
      {
        if ( !*(_DWORD *)(Master_object + 224) )
        {
          j_il2cpp_runtime_class_init_0(Master_object);
          Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
        }
        v11 = **(Il2CppObject ***)(Master_object + 184);
        v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C93D20(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v10,
          v11,
          Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__,
          0);
        static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
        static_fields->__9__86_0 = v10;
        Master_object = sub_1C93A78(&static_fields->__9__86_0, v10);
      }
      if ( v7 )
      {
        v13 = v7;
        v14 = v8;
        v15 = svtKeep;
        v16 = 0;
        goto LABEL_42;
      }
    }
LABEL_45:
    sub_1C93D2C(Master_object, v4);
  }
  Master_object = UserServantMaster__CheckEquipAdd(v5, 1, 1, 0);
  if ( (Master_object & 1) != 0 )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v17 = (CommonUI_o *)Master_object;
    v18 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
    if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
      Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Master_object + 184) + 32LL);
    if ( !v10 )
    {
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
      }
      v20 = **(Il2CppObject ***)(Master_object + 184);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C93D20(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v20,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__,
        0);
      v21 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v21->__9__86_1 = v10;
      Master_object = sub_1C93A78(&v21->__9__86_1, v10);
    }
    if ( !v17 )
      goto LABEL_45;
    v16 = 1;
    v13 = v17;
    v14 = v18;
  }
  else
  {
    if ( !v6 )
      goto LABEL_45;
    v22 = UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v6, 0, 0);
    result = 0;
    if ( !v22 )
      return result;
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v6, 0);
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v25 = (CommonUI_o *)Master_object;
    if ( !byte_4D2AB39 )
    {
      sub_1C93AD4(&BalanceConfig_TypeInfo);
      byte_4D2AB39 = 1;
    }
    v26 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
    svtEquipKeep = v26->static_fields->CommandCodeFrameMax;
    if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
      Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
    }
    v10 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Master_object + 184) + 40LL);
    if ( !v10 )
    {
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object);
        Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
      }
      v27 = **(Il2CppObject ***)(Master_object + 184);
      v10 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1C93D20(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v10,
        v27,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__,
        0);
      v28 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v28->__9__86_4 = v10;
      Master_object = sub_1C93A78(&v28->__9__86_4, v10);
    }
    if ( !v25 )
      goto LABEL_45;
    v16 = 2;
    v13 = v25;
    v14 = Count;
  }
  v15 = svtEquipKeep;
LABEL_42:
  CommonUI__OpenSvtFrameShortDlg(v13, v14, v15, v16, 1, v10, 4, 0);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_45;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Master_object, 0);
  return 1;
}


bool EventTradeListViewItemManager__IsOverPresentBoxLimit(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager___c_c *v3; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Func_object__bool__o *_9__87_0; // x21
  Il2CppObject *v6; // x22
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  EventTradeListViewItemManager___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  System_Func_object__object__o *_9__87_1; // x21
  Il2CppObject *v12; // x22
  struct EventTradeListViewItemManager___c_StaticFields *v13; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x22
  __int64 v15; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v17; // x0
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *v19; // x23
  System_Collections_Generic_HashSet_int__o *v20; // x21
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x22
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  GiftEntity_array *GiftListById; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v39; // x1
  int max_length; // w8
  int i; // w29
  GiftEntity_o *v42; // x8
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  int32_t count; // w21
  BalanceConfig_c *v48; // x0
  int32_t PresentBoxMax; // w23
  int32_t v50; // w24
  System_String_o *v51; // x0
  BalanceConfig_c *v52; // x8
  System_String_o *v53; // x20
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v57; // x21
  PresentBoxOverDialog_ClickDelegate_o *v58; // x22
  int32_t v60; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D2B270 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_ListViewItem___);
    sub_1C93AD4(&Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__);
    sub_1C93AD4(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1C93AD4(&System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__);
    sub_1C93AD4(&EventTradeListViewItemManager___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_13556/*"TRADE_CHECK_PRESENT_NUM_TXT"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B270 = 1;
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
    _9__87_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__87_0,
      v6,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__,
      0);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Func_ListViewItem__bool__o *)_9__87_0;
    sub_1C93A78(&static_fields->__9__87_0, _9__87_0);
  }
  v8 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
         (System_Func_TSource__bool__o *)_9__87_0,
         (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_ListViewItem___);
  v9 = EventTradeListViewItemManager___c_TypeInfo;
  v10 = v8;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v9 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__87_1 = (System_Func_object__object__o *)v9->static_fields->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__87_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__87_1,
      v12,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__,
      0);
    v13 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    v13->__9__87_1 = (struct System_Func_ListViewItem__EventTradeGoodsEntity__o *)_9__87_1;
    sub_1C93A78(&v13->__9__87_1, _9__87_1);
  }
  v14 = System_Linq_Enumerable__Select_object__object_(
          v10,
          (System_Func_TSource__TResult__o *)_9__87_1,
          (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v17 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v17 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_80;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)Master_object,
                v17->static_fields->userIdNumber,
                0);
  v19 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GiftMaster___);
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v20,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v14 )
    goto LABEL_80;
  klass = v14->klass;
  v22 = *(unsigned __int16 *)&v14->klass->_2.rank;
  if ( *(_WORD *)&v14->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_29:
    v24 = sub_1C69E5C(v14, System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo, 0);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v24)(
          v14,
          *(_QWORD *)(v24 + 8));
  if ( !v26 )
    sub_1C93D2C(0, v25);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_36;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_36:
      v30 = sub_1C69E5C(v26, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v26;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_43;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_43:
      v34 = sub_1C69E5C(v26, System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo, 0);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    if ( !v35 )
      sub_1C93D2C(0, v36);
    if ( !v19 )
      sub_1C93D2C(v35, v36);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v19, *(_DWORD *)(v35 + 44), 0);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GiftListById, 0);
    if ( !IsNullOrEmpty )
    {
      if ( !GiftListById )
        sub_1C93D2C(IsNullOrEmpty, v39);
      max_length = GiftListById->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C93D34(IsNullOrEmpty);
          v42 = GiftListById->m_Items[i];
          if ( !v42 )
            sub_1C93D2C(IsNullOrEmpty, v39);
          if ( !v20 )
            sub_1C93D2C(IsNullOrEmpty, v39);
          IsNullOrEmpty = System_Collections_Generic_HashSet_int___Add(
                            v20,
                            v42->fields.type,
                            (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
          max_length = GiftListById->max_length;
        }
      }
    }
  }
  v43 = *(_QWORD *)v26;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_60;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_60:
    v46 = sub_1C69E5C(v26, System_IDisposable_TypeInfo, 0);
  }
  v17 = (NetworkManager_c *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v26, *(_QWORD *)(v46 + 8));
  if ( !VaildList || !v20 )
    goto LABEL_80;
  count = v20->fields._count;
  v48 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v48 = BalanceConfig_TypeInfo;
  }
  PresentBoxMax = v48->static_fields->PresentBoxMax;
  v50 = count + LODWORD(VaildList->max_length);
  if ( v50 > PresentBoxMax )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_13556/*"TRADE_CHECK_PRESENT_NUM_TXT"*/, 0);
    v52 = BalanceConfig_TypeInfo;
    v53 = v51;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v52 = BalanceConfig_TypeInfo;
    }
    v60 = v52->static_fields->PresentBoxMax;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    v55 = System_String__Format(v53, v54, 0);
    presentBoxOverDlg = this->fields.presentBoxOverDlg;
    v57 = v55;
    v58 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1C93D20(PresentBoxOverDialog_ClickDelegate_TypeInfo);
    PresentBoxOverDialog_ClickDelegate___ctor(
      v58,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__,
      0);
    if ( presentBoxOverDlg )
    {
      PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v57, v58, 26, 0);
      return v50 > PresentBoxMax;
    }
LABEL_80:
    sub_1C93D2C(v17, v15);
  }
  return v50 > PresentBoxMax;
}


void EventTradeListViewItemManager__LocateDialogToTradePanel(
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  this = (EventTradeListViewItemManager_o *)UnityEngine_Component__get_gameObject(v4, 0);
  if ( !this )
    goto LABEL_9;
  this = (EventTradeListViewItemManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !transform )
    goto LABEL_9;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0);
  this = (EventTradeListViewItemManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)dialog, 0);
  v6 = this;
  if ( !byte_4D2A13E )
  {
    this = (EventTradeListViewItemManager_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  if ( !v6
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v6,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0),
        (this = (EventTradeListViewItemManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)dialog,
                                                     0)) == 0) )
  {
LABEL_9:
    sub_1C93D2C(this, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventTradeListViewItemManager__LocateObjectToTradePanel(
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
  transform = UnityEngine_GameObject__get_transform(obj, 0);
  this = (EventTradeListViewItemManager_o *)UnityEngine_Component__get_gameObject(v4, 0);
  if ( !this )
    goto LABEL_8;
  this = (EventTradeListViewItemManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !transform )
    goto LABEL_8;
  UnityEngine_Transform__SetParent(transform, (UnityEngine_Transform_o *)this, 0);
  this = (EventTradeListViewItemManager_o *)UnityEngine_GameObject__get_transform(obj, 0);
  v6 = this;
  if ( !byte_4D2A13E )
  {
    this = (EventTradeListViewItemManager_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  if ( !v6 )
LABEL_8:
    sub_1C93D2C(this, obj);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v6,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  UnityEngine_GameObject__SetActive(obj, 0, 0);
}


void EventTradeListViewItemManager__OnClickListView(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4D2B256 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickListView__);
    byte_4D2B256 = 1;
  }
  if ( !obj
    || (this = (EventTradeListViewItemManager_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0 )
  {
    sub_1C93D2C(this, obj);
  }
  v4 = this;
  if ( !this->fields.sortOrderButton
    && EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)this, (const MethodInfo *)obj)
    || !BYTE4(v4->fields.listDragPrefab) )
  {
    v5 = Method_EventTradeListViewItemManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_EventTradeListViewItemManager_OnClickListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


void EventTradeListViewItemManager__OnClickNoticeButton(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D2B272 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickNoticeButton__);
    byte_4D2B272 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = isButtonOn ^ 1;
  v4 = Method_EventTradeListViewItemManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_EventTradeListViewItemManager_OnClickNoticeButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0, 0);
  EventRewardSaveData__SetTradeNotification(this->fields.isButtonOn, 0);
  EventTradeListViewItemManager__UpdateNoticeButtonDisp(this, v6);
}


void EventTradeListViewItemManager__OnClickReceiveAll(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v2; // x19
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 maskPanel; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  long double inited; // q0
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v10; // x20
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4D2B263 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_TradeReceiveResponse__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    this = (EventTradeListViewItemManager_o *)sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2B263 = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, method)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v2, v3) )
  {
    maskPanel = (__int64)v2->fields.maskPanel;
    if ( !maskPanel )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
    v2->fields.selectTradeGoodsEntity = 0;
    sub_1C93A78(&v2->fields.selectTradeGoodsEntity, 0);
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)v2,
      Method_EventTradeListViewItemManager_TradeReceiveResponse__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v6,
                       (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
    currentEventId = v2->fields.currentEventId;
    v10 = (TradeReceiveRequest_o *)Request_object;
    v11 = Method_System_Array_Empty_int___;
    v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v12 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    maskPanel = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(maskPanel + 309) & 1) == 0 )
      maskPanel = sub_1C69B68(inited);
    if ( !v10 )
LABEL_19:
      sub_1C93D2C(maskPanel, v4);
    TradeReceiveRequest__beginRequest(v10, currentEventId, **(System_Int32_array ***)(maskPanel + 184), 0, 0, 0);
  }
}


void EventTradeListViewItemManager__OnClickReceiveAllButton(
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
  if ( (byte_4D2B25E & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickReceiveAllButton__);
    byte_4D2B25E = 1;
  }
  receiveAllButton = v2->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_1C93D2C(this, method);
  mState = receiveAllButton->fields.mState;
  v5 = Method_EventTradeListViewItemManager_OnClickReceiveAllButton__;
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C93AEC(Method_EventTradeListViewItemManager_OnClickReceiveAllButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
  if ( mState == 3 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
    EventTradeListViewItemManager__OnClickReceiveAll(v2, v7);
  }
}


void EventTradeListViewItemManager__OnClickReceiveButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  unsigned int displayMode; // w8
  int v7; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  EventTradeListViewItem_o *Item; // x21
  const MethodInfo *v12; // x2
  int64_t Time; // x22
  int32_t CompleteNum; // w21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_c *klass; // x8
  const MethodInfo *v18; // x1
  struct EventTradeGoodsEntity_o *monitor; // x1

  if ( (byte_4D2B258 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickReceiveButton__);
    sub_1C93AD4(&EventTradeTimeCalculation_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2B258 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
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
        UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
        return;
      }
LABEL_21:
      sub_1C93D2C(maskPanel, obj);
    }
    if ( (v7 & 0x30) != 0 )
    {
      v8 = Method_EventTradeListViewItemManager_OnClickReceiveButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveButton__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C93AEC(Method_EventTradeListViewItemManager_OnClickReceiveButton__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
      Item = EventTradeListViewObject__GetItem(obj, v10);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo);
      CompleteNum = EventTradeTimeCalculation__GetCompleteNum(Item, Time, v12);
      maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v15);
      if ( !maskPanel )
        goto LABEL_21;
      klass = maskPanel[6].klass;
      if ( !klass )
        goto LABEL_21;
      EventTradeListViewItemManager__OnClickReceiveDecide(this, (int32_t)klass->_1.name, CompleteNum, v16);
      maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v18);
      if ( !maskPanel )
        goto LABEL_21;
      monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
      this->fields.selectTradeGoodsEntity = monitor;
      sub_1C93A78(&this->fields.selectTradeGoodsEntity, monitor);
      goto LABEL_18;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTradeListViewItemManager__OnClickReceiveDecide(
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
  if ( (byte_4D2B262 & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventTradeListViewItemManager_TradeReceiveResponse__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    this = (EventTradeListViewItemManager_o *)sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2B262 = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, *(const MethodInfo **)&storeIdx)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v6, v7) )
  {
    maskPanel = (__int64)v6->fields.maskPanel;
    if ( maskPanel )
    {
      if ( receiveNum <= 0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
        return;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v6,
        Method_EventTradeListViewItemManager_TradeReceiveResponse__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = NetworkManager__getRequest_object_(
                         v10,
                         (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
      currentEventId = v6->fields.currentEventId;
      v13 = (TradeReceiveRequest_o *)Request_object;
      maskPanel = sub_1C93B7C(int___TypeInfo, 1);
      if ( maskPanel )
      {
        if ( !*(_DWORD *)(maskPanel + 24) )
          sub_1C93D34(maskPanel);
        *(_DWORD *)(maskPanel + 32) = storeIdx;
        if ( v13 )
        {
          TradeReceiveRequest__beginRequest(v13, currentEventId, (System_Int32_array *)maskPanel, receiveNum, 0, 0);
          return;
        }
      }
    }
    sub_1C93D2C(maskPanel, v8);
  }
}


void EventTradeListViewItemManager__OnClickReplenishmentButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0
  unsigned int displayMode; // w8
  int v7; // w8
  bool IsRefillable; // w21
  _QWORD *v9; // x8
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  const MethodInfo *v13; // x1
  EventTradeListViewItem_o *Item; // x22
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_c *klass; // x8
  int32_t name; // w23
  System_Action_int__int__int__o *v18; // x24
  const MethodInfo *v19; // x5
  const MethodInfo *v20; // x1
  struct EventTradeGoodsEntity_o *monitor; // x1

  if ( (byte_4D2B259 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__int__int__TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__);
    byte_4D2B259 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
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
        UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
        return;
      }
LABEL_22:
      sub_1C93D2C(maskPanel, obj);
    }
    if ( (v7 & 0x30) != 0 )
    {
      maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj);
      if ( !maskPanel )
        goto LABEL_22;
      IsRefillable = EventTradeListViewItem__get_IsRefillable(
                       (EventTradeListViewItem_o *)maskPanel,
                       (const MethodInfo *)obj);
      v9 = Method_EventTradeListViewItemManager_OnClickReplenishmentButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C93AEC(Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
      if ( IsRefillable )
      {
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
        maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsNumConfirmDialog;
        if ( !maskPanel )
          goto LABEL_22;
        EventTradeSweetsNumConfirmDialogComponent__Init(
          (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
          this->fields.currentEventId,
          v11);
        tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
        Item = EventTradeListViewObject__GetItem(obj, v13);
        maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v15);
        if ( !maskPanel )
          goto LABEL_22;
        klass = maskPanel[6].klass;
        if ( !klass )
          goto LABEL_22;
        name = (int32_t)klass->_1.name;
        v18 = (System_Action_int__int__int__o *)sub_1C93D20(System_Action_int__int__int__TypeInfo);
        System_Action_int__int__int____ctor(
          v18,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
          0);
        if ( !tradeSweetsNumConfirmDialog )
          goto LABEL_22;
        EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, Item, name, v18, 1, v19);
        maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v20);
        if ( !maskPanel )
          goto LABEL_22;
        monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
        this->fields.selectTradeGoodsEntity = monitor;
        sub_1C93A78(&this->fields.selectTradeGoodsEntity, monitor);
        goto LABEL_18;
      }
      OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTradeListViewItemManager__OnClickTradeReplenishmentDecide(
        EventTradeListViewItemManager_o *this,
        int32_t storeIdx,
        int32_t goodsId,
        int32_t createNum,
        const MethodInfo *method)
{
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x23
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_4D2B25D & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventTradeListViewItemManager_TradeReplenishmentResponse__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2B25D = 1;
  }
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_13;
  EventTradeSweetsNumConfirmDialogComponent__Close(tradeSweetsNumConfirmDialog, *(const MethodInfo **)&storeIdx);
  tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_13;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 1, 0);
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_TradeReplenishmentResponse__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                   v10,
                                                                                   (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeSweetsNumConfirmDialog )
    {
      TradeStartRequest__beginRequest(
        (TradeStartRequest_o *)tradeSweetsNumConfirmDialog,
        this->fields.currentEventId,
        storeIdx,
        goodsId,
        createNum,
        0,
        0);
      return;
    }
LABEL_13:
    sub_1C93D2C(tradeSweetsNumConfirmDialog, *(_QWORD *)&storeIdx);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 0, 0);
  closeDialogCallBack = this->fields.closeDialogCallBack;
  if ( closeDialogCallBack )
    ((void (__fastcall *)(intptr_t, intptr_t))closeDialogCallBack->fields.invoke_impl)(
      closeDialogCallBack->fields.method_code,
      closeDialogCallBack->fields.method);
}


void EventTradeListViewItemManager__OnClickTradeStartButton(
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
  const MethodInfo *v12; // x2
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  const MethodInfo *v14; // x1
  EventTradeListViewItem_o *Item; // x0
  int32_t v16; // w22
  EventTradeListViewItem_o *v17; // x23
  System_Action_int__int__int__o *v18; // x24
  const MethodInfo *v19; // x5
  const MethodInfo *v20; // x1
  struct EventTradeGoodsEntity_o *monitor; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  System_Action_o *v25; // x23
  int32_t storeIdx; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4D2B257 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__int__int__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickTradeStartDecide__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_13574/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_13573/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_4D2B257 = 1;
  }
  storeIdx = 0;
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
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
    maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj);
    if ( !maskPanel )
      goto LABEL_25;
    IsBuyAble = EventTradeListViewItem__get_IsBuyAble((EventTradeListViewItem_o *)maskPanel, (const MethodInfo *)obj);
    v9 = Method_EventTradeListViewItemManager_OnClickTradeStartButton__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickTradeStartButton__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C93AEC(Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
    if ( IsBuyAble )
    {
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      if ( EventTradeListViewItemManager__TryGetAvailableStoreIdx(this, &storeIdx, v11) )
      {
        maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsNumConfirmDialog;
        if ( maskPanel )
        {
          EventTradeSweetsNumConfirmDialogComponent__Init(
            (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
            this->fields.currentEventId,
            v12);
          tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
          Item = EventTradeListViewObject__GetItem(obj, v14);
          v16 = storeIdx;
          v17 = Item;
          v18 = (System_Action_int__int__int__o *)sub_1C93D20(System_Action_int__int__int__TypeInfo);
          System_Action_int__int__int____ctor(
            v18,
            (Il2CppObject *)this,
            Method_EventTradeListViewItemManager_OnClickTradeStartDecide__,
            0);
          if ( tradeSweetsNumConfirmDialog )
          {
            EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v17, v16, v18, 0, v19);
            maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v20);
            if ( maskPanel )
            {
              monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
              this->fields.selectTradeGoodsEntity = monitor;
              sub_1C93A78(&this->fields.selectTradeGoodsEntity, monitor);
              goto LABEL_18;
            }
          }
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_13574/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/, 0);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_13573/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
        v25 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          v25,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__,
          0);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog_31582080(
            (CommonUI_o *)Instance,
            v23,
            v24,
            v25,
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
LABEL_25:
      sub_1C93D2C(maskPanel, obj);
    }
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
  }
LABEL_18:
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventTradeListViewItemManager__OnClickTradeStartDecide(
        EventTradeListViewItemManager_o *this,
        int32_t storeIdx,
        int32_t goodsId,
        int32_t createNum,
        const MethodInfo *method)
{
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x0
  NetworkManager_ResultCallbackFunc_o *v10; // x23

  if ( (byte_4D2B25C & 1) == 0 )
  {
    sub_1C93AD4(&Method_EventTradeListViewItemManager_TradeStartResponse__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2B25C = 1;
  }
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_11;
  EventTradeSweetsNumConfirmDialogComponent__Close(tradeSweetsNumConfirmDialog, *(const MethodInfo **)&storeIdx);
  tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_11;
  if ( createNum > 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 1, 0);
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_TradeStartResponse__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                   v10,
                                                                                   (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeSweetsNumConfirmDialog )
    {
      TradeStartRequest__beginRequest(
        (TradeStartRequest_o *)tradeSweetsNumConfirmDialog,
        this->fields.currentEventId,
        storeIdx,
        goodsId,
        createNum,
        0,
        0);
      return;
    }
LABEL_11:
    sub_1C93D2C(tradeSweetsNumConfirmDialog, *(_QWORD *)&storeIdx);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 0, 0);
}


void EventTradeListViewItemManager__OnClickWithdrawalButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  UnityEngine_GameObject_o *maskPanel; // x0
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o **p_monitor; // x21
  unsigned int klass; // w8
  int v10; // w8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x2
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x21
  EventTradeListViewItem_o *Item; // x22
  System_Action_bool__o *v16; // x23
  const MethodInfo *v17; // x3

  if ( (byte_4D2B25A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo);
    byte_4D2B25A = 1;
  }
  v5 = (Il2CppObject *)sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_18;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C93A78(&v5[1], this);
  v5[1].monitor = obj;
  p_monitor = (UnityEngine_GameObject_o **)&v5[1].monitor;
  sub_1C93A78(&v5[1].monitor, obj);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !*p_monitor )
    goto LABEL_18;
  klass = (unsigned int)(*p_monitor)[5].klass;
  if ( klass <= 5 )
  {
    v10 = 1 << klass;
    if ( (v10 & 0xD) != 0 )
    {
LABEL_15:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
        return;
      }
LABEL_18:
      sub_1C93D2C(maskPanel, v7);
    }
    if ( (v10 & 0x30) != 0 )
    {
      v11 = Method_EventTradeListViewItemManager_OnClickWithdrawalButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C93AEC(Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
      maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
      if ( !maskPanel )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Init(
        (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)maskPanel,
        this->fields.currentEventId,
        v13);
      maskPanel = *p_monitor;
      if ( !*p_monitor )
        goto LABEL_18;
      tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
      Item = EventTradeListViewObject__GetItem((EventTradeListViewObject_o *)maskPanel, v7);
      v16 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v16,
        v5,
        Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__,
        0);
      if ( !tradeSweetsWithdrawalConfirmDialog )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Open(tradeSweetsWithdrawalConfirmDialog, Item, v16, v17);
      goto LABEL_15;
    }
  }
}


void EventTradeListViewItemManager__OnClickWithdrawalDecide(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x22
  __int64 tradeSweetsWithdrawalConfirmDialog; // x0
  const MethodInfo *v7; // x1
  EventTradeListViewItem_o **p_monitor; // x20
  EventTradeListViewItemManager_o *v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  struct EventTradeSweetsWithdrawalConfirmDialogComponent_o *v12; // x19
  EventTradeListViewItem_o *monitor; // x20
  System_Action_bool__o *v14; // x21
  const MethodInfo *v15; // x3
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v19; // x21
  EventTradeListViewItem_o *v20; // x8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x9
  System_Int32_array *v22; // x20

  if ( (byte_4D2B264 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_WithdrawalResponse__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo);
    byte_4D2B264 = 1;
  }
  v5 = (Il2CppObject *)sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_20;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C93A78(&v5[1], this);
  v5[1].monitor = item;
  p_monitor = (EventTradeListViewItem_o **)&v5[1].monitor;
  v9 = (EventTradeListViewItemManager_o *)sub_1C93A78(&v5[1].monitor, item);
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(v9, v10)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(this, v11) )
  {
    tradeSweetsWithdrawalConfirmDialog = (__int64)this->fields.tradeSweetsWithdrawalConfirmDialog;
    if ( tradeSweetsWithdrawalConfirmDialog )
    {
      EventTradeSweetsWithdrawalConfirmDialogComponent__Close(
        (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)tradeSweetsWithdrawalConfirmDialog,
        v7);
      tradeSweetsWithdrawalConfirmDialog = (__int64)this->fields.maskPanel;
      if ( tradeSweetsWithdrawalConfirmDialog )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsWithdrawalConfirmDialog, 1, 0);
        v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager_WithdrawalResponse__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Request_object = NetworkManager__getRequest_object_(
                           v16,
                           (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
        currentEventId = this->fields.currentEventId;
        v19 = (TradeReceiveRequest_o *)Request_object;
        tradeSweetsWithdrawalConfirmDialog = sub_1C93B7C(int___TypeInfo, 1);
        v20 = *p_monitor;
        if ( *p_monitor )
        {
          TradeInfo_k__BackingField = v20->fields._TradeInfo_k__BackingField;
          if ( TradeInfo_k__BackingField )
          {
            v22 = (System_Int32_array *)tradeSweetsWithdrawalConfirmDialog;
            if ( tradeSweetsWithdrawalConfirmDialog )
            {
              if ( !*(_DWORD *)(tradeSweetsWithdrawalConfirmDialog + 24) )
                sub_1C93D34(tradeSweetsWithdrawalConfirmDialog);
              *(_DWORD *)(tradeSweetsWithdrawalConfirmDialog + 32) = TradeInfo_k__BackingField->fields.storeIdx;
              tradeSweetsWithdrawalConfirmDialog = EventTradeListViewItem__get_NowCompleteNum(v20, v7);
              if ( v19 )
              {
                TradeReceiveRequest__beginRequest(v19, currentEventId, v22, tradeSweetsWithdrawalConfirmDialog, 1, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C93D2C(tradeSweetsWithdrawalConfirmDialog, v7);
  }
  v12 = this->fields.tradeSweetsWithdrawalConfirmDialog;
  monitor = (EventTradeListViewItem_o *)v5[1].monitor;
  v14 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v14,
    v5,
    Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__,
    0);
  if ( !v12 )
    goto LABEL_20;
  if ( v12->fields.state == 3 )
  {
    EventTradeSweetsWithdrawalConfirmDialogComponent__SetUp(v12, monitor, v14, v15);
    v12->fields.state = 2;
  }
}


void EventTradeListViewItemManager__OnMoveEnd(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0

  if ( (byte_4D2B255 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B255 = 1;
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
          sub_1C93D2C(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
    }
  }
}


void EventTradeListViewItemManager__OpenReconfirmDialog(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BaseDialog_o *tradeSweetsWithdrawalConfirmDialog; // x0
  const MethodInfo *v7; // x1
  BaseDialog_o **v8; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  System_String_o *v13; // x24
  CommonConfirmDialog_ClickDelegate_o *v14; // x25

  if ( (byte_4D2B25B & 1) == 0 )
  {
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_13607/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_3709/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_13606/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_4D2B25B = 1;
  }
  v5 = sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78(v5 + 16, this);
  *(_QWORD *)(v5 + 24) = item;
  v8 = (BaseDialog_o **)(v5 + 24);
  sub_1C93A78(v5 + 24, item);
  tradeSweetsWithdrawalConfirmDialog = (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !tradeSweetsWithdrawalConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(tradeSweetsWithdrawalConfirmDialog, 0) )
    return;
  tradeSweetsWithdrawalConfirmDialog = *v8;
  if ( !*v8 )
    goto LABEL_12;
  *(_DWORD *)(v5 + 32) = EventTradeListViewItem__get_NowCompleteNum(
                           (EventTradeListViewItem_o *)tradeSweetsWithdrawalConfirmDialog,
                           v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13607/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_13606/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3709/*"COMMON_CONFIRM_EXECUTE"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__,
    0);
  if ( !Instance )
LABEL_12:
    sub_1C93D2C(tradeSweetsWithdrawalConfirmDialog, v7);
  CommonUI__OpenConfirmDialog_31580640((CommonUI_o *)Instance, v10, v11, v12, v13, 1, v14, 30, 26, 180.0, 13.0, 0, 0, 0);
}


bool EventTradeListViewItemManager__OpenReplenishmentDialog(
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
  const MethodInfo *v10; // x2
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t storeIdx; // w22
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  System_Action_int__int__int__o *v14; // x23
  const MethodInfo *v15; // x5
  bool v16; // w19

  if ( (byte_4D2B268 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__int__int__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__);
    sub_1C93AD4(&System_Func_EventTradeListViewObject__bool__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B268 = 1;
  }
  if ( !this->fields.selectTradeGoodsEntity )
    return 0;
  ObjectList = EventTradeListViewItemManager__get_ObjectList(this, method);
  v4 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventTradeListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__,
    0);
  v5 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
         (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_22;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields.currentEventId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Equality(
                                                                  (UnityEngine_Object_o *)v5,
                                                                  0,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return 0;
  if ( !Entity )
    goto LABEL_22;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventEntity__IsEventPeriod(
                                                                  (EventEntity_o *)Entity,
                                                                  0,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return 0;
  if ( !v5
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventTradeListViewObject__GetItem(
                                                                        (EventTradeListViewObject_o *)v5,
                                                                        v7)) == 0 )
  {
LABEL_22:
    sub_1C93D2C(Master_object, v7);
  }
  v9 = (EventTradeListViewItem_o *)Master_object;
  if ( !Master_object[2].klass
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
    v10);
  TradeInfo_k__BackingField = v9->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_22;
  storeIdx = TradeInfo_k__BackingField->fields.storeIdx;
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  v14 = (System_Action_int__int__int__o *)sub_1C93D20(System_Action_int__int__int__TypeInfo);
  System_Action_int__int__int____ctor(
    v14,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
    0);
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_22;
  v16 = 1;
  EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v9, storeIdx, v14, 1, v15);
  return v16;
}


void EventTradeListViewItemManager__OpenRewardDialog(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItemManager_ResData_o *resData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  EventTradeRewardDialogComponent_o *tradeRewardDialog; // x0
  const MethodInfo *v7; // x1
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  EventTradeRewardDialogComponent_o *v10; // x27
  int32_t eventPointNum; // w26
  int32_t eventPointItemId; // w25
  int32_t currentEventId; // w24
  BattleDropItem_array *resultTradeRewardInfos; // x23
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x19
  BattleDropItem_array *v16; // x22
  System_Action_o *closeCallback; // x20
  const MethodInfo *v18; // [xsp+8h] [xbp-58h]

  if ( (byte_4D2B267 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo);
    byte_4D2B267 = 1;
  }
  v5 = sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78(v5 + 24, this);
  tradeRewardDialog = this->fields.tradeRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradeRewardDialogComponent__Init(tradeRewardDialog, v7);
  tradeRewardDialog = (EventTradeRewardDialogComponent_o *)this->fields.tradePointRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradePointRewardDialogComponent__Init((EventTradePointRewardDialogComponent_o *)tradeRewardDialog, v7);
  if ( !resData )
    goto LABEL_14;
  resultEventRewardInfos = resData->fields.resultEventRewardInfos;
  *(_QWORD *)(v5 + 16) = resultEventRewardInfos;
  tradeRewardDialog = (EventTradeRewardDialogComponent_o *)sub_1C93A78(v5 + 16, resultEventRewardInfos);
  oldUserEventPoint = resData->fields.oldUserEventPoint;
  if ( oldUserEventPoint )
  {
    if ( LODWORD(oldUserEventPoint->max_length) )
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
  v10 = this->fields.tradeRewardDialog;
  eventPointNum = resData->fields.eventPointNum;
  eventPointItemId = this->fields.eventPointItemId;
  currentEventId = this->fields.currentEventId;
  resultTradeRewardInfos = resData->fields.resultTradeRewardInfos;
  selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
  v16 = *(BattleDropItem_array **)(v5 + 16);
  closeCallback = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v5,
    Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__,
    0);
  if ( !v10 )
LABEL_14:
    sub_1C93D2C(tradeRewardDialog, v7);
  EventTradeRewardDialogComponent__Open(
    v10,
    eventPointNum,
    eventPointItemId,
    currentEventId,
    resultTradeRewardInfos,
    v16,
    selectTradeGoodsEntity,
    selectTradeGoodsEntity == 0,
    closeCallback,
    v18);
}


void EventTradeListViewItemManager__OpenSweetsNotificationDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t PickupList; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  System_Object_array *v7; // x0
  void **p_monitor; // x21
  const MethodInfo *v9; // x1
  System_String_o *v10; // x0
  EventTradePopularSweetsNotificationDialogComponent_o *tradePopularSweetsNotificationDialog; // x19
  EventTradeListViewItem_array *monitor; // x21
  System_Action_o *v13; // x22
  EventTradeListViewItemManager_o *v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x4
  int64_t Time; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2B26C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo);
    byte_4D2B26C = 1;
  }
  v3 = (Il2CppObject *)sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !v3 )
    goto LABEL_14;
  v3[1].klass = (Il2CppClass *)this;
  sub_1C93A78(&v3[1], this);
  PickupList = (int64_t)EventTradeListViewItemManager__GetPickupList(this, v6);
  if ( !PickupList )
    goto LABEL_14;
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)PickupList,
         (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__);
  v3[1].monitor = v7;
  p_monitor = &v3[1].monitor;
  sub_1C93A78(&v3[1].monitor, v7);
  PickupList = EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(this, v9);
  if ( (PickupList & 1) != 0 )
    return;
  if ( !*p_monitor )
    goto LABEL_14;
  if ( !*((_QWORD *)*p_monitor + 3) )
    return;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v10 = System_Int64__ToString((int64_t)&Time, 0);
  v3[2].klass = (Il2CppClass *)v10;
  sub_1C93A78(&v3[2], v10);
  PickupList = (int64_t)this->fields.tradePopularSweetsNotificationDialog;
  if ( !PickupList
    || (EventTradePopularSweetsNotificationDialogComponent__Init(
          (EventTradePopularSweetsNotificationDialogComponent_o *)PickupList,
          v5),
        tradePopularSweetsNotificationDialog = this->fields.tradePopularSweetsNotificationDialog,
        monitor = (EventTradeListViewItem_array *)v3[1].monitor,
        v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          v3,
          Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__,
          0),
        PickupList = EventTradeListViewItemManager__GetUpdateTime(v14, v15),
        !tradePopularSweetsNotificationDialog) )
  {
LABEL_14:
    sub_1C93D2C(PickupList, v5);
  }
  EventTradePopularSweetsNotificationDialogComponent__Open(
    tradePopularSweetsNotificationDialog,
    monitor,
    v13,
    PickupList,
    v16);
}


void EventTradeListViewItemManager__RequestListObject(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  int32_t size; // w8
  Il2CppObject *current; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2B254 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__get_Current__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnMoveEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTradeListViewObject__get_Count__);
    sub_1C93AD4(&StringLiteral_9998/*"OnMoveEnd"*/);
    byte_4D2B254 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ObjectList = (System_Collections_Generic_List_object__o *)EventTradeListViewItemManager__get_ObjectList(this, method);
  if ( !ObjectList )
    sub_1C93D2C(0, v4);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9998/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      ObjectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__) )
    {
      current = v11.fields._current;
      v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C93D2C(v8, v9);
      EventTradeListViewObject__Init_33070416((EventTradeListViewObject_o *)current, 3, v7, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__);
  }
}


void EventTradeListViewItemManager__SetCallBack(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  EventTradeListViewItemManager__RequestListObject(this, v3);
}


void EventTradeListViewItemManager__SetObjectItem(
        EventTradeListViewItemManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Action_object__o *v11; // x21
  System_Action_object__o *v12; // x22
  System_Action_object__o *v13; // x23
  System_Action_object__o *v14; // x24
  const MethodInfo *v15; // x5

  if ( (byte_4D2B253 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_EventTradeListViewObject__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickReceiveButton__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager_OnMoveEnd__);
    sub_1C93AD4(&EventTradeListViewObject_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B253 = 1;
  }
  if ( obj )
  {
    naturalAligment = EventTradeListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (EventTradeListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventTradeListViewObject_TypeInfo )
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
    v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0);
    if ( !obj )
      sub_1C93D2C(v8, v9);
    EventTradeListViewObject__Init_33070416((EventTradeListViewObject_o *)obj, 3, v7, v10);
    v11 = (System_Action_object__o *)sub_1C93D20(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickTradeStartButton__,
      0);
    v12 = (System_Action_object__o *)sub_1C93D20(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v12,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReceiveButton__,
      0);
    v13 = (System_Action_object__o *)sub_1C93D20(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__,
      0);
    v14 = (System_Action_object__o *)sub_1C93D20(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v14,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__,
      0);
    EventTradeListViewObject__SetOnClickAction(
      (EventTradeListViewObject_o *)obj,
      (System_Action_EventTradeListViewObject__o *)v11,
      (System_Action_EventTradeListViewObject__o *)v12,
      (System_Action_EventTradeListViewObject__o *)v13,
      (System_Action_EventTradeListViewObject__o *)v14,
      v15);
  }
}


void EventTradeListViewItemManager__SetReceiveAllButton(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  int32_t currentEventId; // w20
  UISprite_o *receiveAllButtonSprite; // x21
  UILabel_o *receiveAllButtonLabel; // x20
  __int64 receiveAllButton; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeButtonBlinkEffect_k__BackingField; // x20
  struct UnityEngine_GameObject_o **p_tradeButtonBlinkEffect; // x19
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v13; // x0
  UnityEngine_Transform_o *v14; // x20

  if ( (byte_4D2B24E & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3374/*"CHECK_TRADE_BUTTON_LABEL"*/);
    sub_1C93AD4(&StringLiteral_17619/*"btn_getreward"*/);
    byte_4D2B24E = 1;
  }
  currentEventId = this->fields.currentEventId;
  receiveAllButtonSprite = this->fields.receiveAllButtonSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_41320352(currentEventId, receiveAllButtonSprite, (System_String_o *)StringLiteral_17619/*"btn_getreward"*/, 0);
  receiveAllButtonLabel = this->fields.receiveAllButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  receiveAllButton = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3374/*"CHECK_TRADE_BUTTON_LABEL"*/, 0);
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
        TradeButtonBlinkEffect_k__BackingField = (Il2CppObject *)assetManager->fields._TradeButtonBlinkEffect_k__BackingField;
        p_tradeButtonBlinkEffect = &this->fields.tradeButtonBlinkEffect;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)receiveAllButton, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__Instantiate_object__52629400(
                TradeButtonBlinkEffect_k__BackingField,
                transform,
                (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
        *p_tradeButtonBlinkEffect = (struct UnityEngine_GameObject_o *)v13;
        sub_1C93A78(p_tradeButtonBlinkEffect, v13);
        receiveAllButton = (__int64)*p_tradeButtonBlinkEffect;
        if ( *p_tradeButtonBlinkEffect )
        {
          receiveAllButton = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)receiveAllButton,
                                        0);
          v14 = (UnityEngine_Transform_o *)receiveAllButton;
          if ( !byte_4D2A13E )
          {
            receiveAllButton = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A13E = 1;
          }
          if ( v14 )
          {
            UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
            receiveAllButton = (__int64)*p_tradeButtonBlinkEffect;
            if ( *p_tradeButtonBlinkEffect )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButton, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C93D2C(receiveAllButton, v7);
  }
}


void EventTradeListViewItemManager__SetTradeObject(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tradeRewardDialog; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *tradePointRewardDialog; // x20
  struct EventTradeAssetManager_o *v11; // x8
  Il2CppObject *TradePointRewardDialog_k__BackingField; // x20
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
  struct EventTradeAssetManager_o *v16; // x8
  Il2CppObject *TradeSweetsNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  struct EventTradeAssetManager_o *v21; // x8
  Il2CppObject *TradeSweetsWithdrawalConfirmDialog_k__BackingField; // x20
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *tradePopularSweetsNotificationDialog; // x20
  struct EventTradeAssetManager_o *v26; // x8
  Il2CppObject *TradePopularSweetsNotificationDialog_k__BackingField; // x20
  Il2CppObject *v28; // x0
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  struct EventTradeAssetManager_o *v31; // x8
  Il2CppObject *TradePickupInfoBoard_k__BackingField; // x20
  struct EventTradePickupInfoDispControl_o **p_currentPickupInfoDispControl; // x20
  Il2CppObject *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  struct EventTradeAssetManager_o *v38; // x8
  Il2CppObject *v39; // x20
  struct EventTradePickupInfoDispControl_o **p_nextPickupInfoDispControl; // x20
  Il2CppObject *v41; // x0
  UnityEngine_GameObject_o *v42; // x1
  const MethodInfo *v43; // x2

  if ( (byte_4D2B24D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_9491/*"NextTradePickupInfoBoard"*/);
    sub_1C93AD4(&StringLiteral_4924/*"CurrentTradePickupInfoBoard"*/);
    byte_4D2B24D = 1;
  }
  tradeRewardDialog = (UnityEngine_Object_o *)this->fields.tradeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeRewardDialog, 0, 0);
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
                                               (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___);
    this->fields.tradeRewardDialog = (struct EventTradeRewardDialogComponent_o *)Component_object;
    sub_1C93A78(&this->fields.tradeRewardDialog, Component_object);
    EventTradeListViewItemManager__LocateDialogToTradePanel(this, (BaseDialog_o *)this->fields.tradeRewardDialog, v9);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradePointRewardDialog, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v11 = this->fields.assetManager;
    if ( !v11 )
      goto LABEL_66;
    TradePointRewardDialog_k__BackingField = (Il2CppObject *)v11->fields._TradePointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePointRewardDialog_k__BackingField,
                                               (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v13 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___);
    this->fields.tradePointRewardDialog = (struct EventTradePointRewardDialogComponent_o *)v13;
    sub_1C93A78(&this->fields.tradePointRewardDialog, v13);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePointRewardDialog,
      v14);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsNumConfirmDialog, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( !v16 )
      goto LABEL_66;
    TradeSweetsNumConfirmDialog_k__BackingField = (Il2CppObject *)v16->fields._TradeSweetsNumConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsNumConfirmDialog_k__BackingField,
                                               (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v18 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___);
    this->fields.tradeSweetsNumConfirmDialog = (struct EventTradeSweetsNumConfirmDialogComponent_o *)v18;
    sub_1C93A78(&this->fields.tradeSweetsNumConfirmDialog, v18);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsNumConfirmDialog,
      v19);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsWithdrawalConfirmDialog, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v21 = this->fields.assetManager;
    if ( !v21 )
      goto LABEL_66;
    TradeSweetsWithdrawalConfirmDialog_k__BackingField = (Il2CppObject *)v21->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsWithdrawalConfirmDialog_k__BackingField,
                                               (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v23 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___);
    this->fields.tradeSweetsWithdrawalConfirmDialog = (struct EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v23;
    sub_1C93A78(&this->fields.tradeSweetsWithdrawalConfirmDialog, v23);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog,
      v24);
  }
  tradePopularSweetsNotificationDialog = (UnityEngine_Object_o *)this->fields.tradePopularSweetsNotificationDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradePopularSweetsNotificationDialog, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v26 = this->fields.assetManager;
    if ( !v26 )
      goto LABEL_66;
    TradePopularSweetsNotificationDialog_k__BackingField = (Il2CppObject *)v26->fields._TradePopularSweetsNotificationDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePopularSweetsNotificationDialog_k__BackingField,
                                               (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v28 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___);
    this->fields.tradePopularSweetsNotificationDialog = (struct EventTradePopularSweetsNotificationDialogComponent_o *)v28;
    sub_1C93A78(&this->fields.tradePopularSweetsNotificationDialog, v28);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePopularSweetsNotificationDialog,
      v29);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(currentPickupInfoDispControl, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v31 = this->fields.assetManager;
    if ( !v31 )
      goto LABEL_66;
    TradePickupInfoBoard_k__BackingField = (Il2CppObject *)v31->fields._TradePickupInfoBoard_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePickupInfoBoard_k__BackingField,
                                               (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    p_currentPickupInfoDispControl = &this->fields.currentPickupInfoDispControl;
    v34 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
    this->fields.currentPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v34;
    sub_1C93A78(&this->fields.currentPickupInfoDispControl, v34);
    gameObject = (UnityEngine_GameObject_o *)this->fields.currentPickupInfoDispControl;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_4924/*"CurrentTradePickupInfoBoard"*/, 0);
    gameObject = (UnityEngine_GameObject_o *)*p_currentPickupInfoDispControl;
    if ( !*p_currentPickupInfoDispControl )
      goto LABEL_66;
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    EventTradeListViewItemManager__LocateObjectToTradePanel(this, v35, v36);
  }
  nextPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.nextPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(nextPickupInfoDispControl, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v38 = this->fields.assetManager;
    if ( v38 )
    {
      v39 = (Il2CppObject *)v38->fields._TradePickupInfoBoard_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                 v39,
                                                 (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( gameObject )
      {
        p_nextPickupInfoDispControl = &this->fields.nextPickupInfoDispControl;
        v41 = UnityEngine_GameObject__GetComponent_object_(
                gameObject,
                (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
        this->fields.nextPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v41;
        sub_1C93A78(&this->fields.nextPickupInfoDispControl, v41);
        gameObject = (UnityEngine_GameObject_o *)this->fields.nextPickupInfoDispControl;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_9491/*"NextTradePickupInfoBoard"*/, 0);
            gameObject = (UnityEngine_GameObject_o *)*p_nextPickupInfoDispControl;
            if ( *p_nextPickupInfoDispControl )
            {
              v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              EventTradeListViewItemManager__LocateObjectToTradePanel(this, v42, v43);
              return;
            }
          }
        }
      }
    }
LABEL_66:
    sub_1C93D2C(gameObject, v5);
  }
}


void EventTradeListViewItemManager__TradeReceiveResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v7; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *v10; // x20
  EventTradeStoreMaster_o *v11; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2B265 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D2B265 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1C93A78(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v9);
    v10 = (Il2CppObject *)System_String__Concat_64463988(
                            (System_String_o *)StringLiteral_15904/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16156/*"]"*/,
                            0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v10,
                                                 (const MethodInfo_3213F70 *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel
      || (v11 = Master_object,
          (Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this->fields.touchPanel,
                                                        0)) == 0)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel) == 0)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0),
          EventTradeListViewItemManager__RequestListObject(this, v12),
          !v11) )
    {
LABEL_15:
      sub_1C93D2C(Master_object, v7);
    }
    if ( !LODWORD(v11->fields._MasterName_k__BackingField) )
      sub_1C93D34(Master_object);
    EventTradeListViewItemManager__OpenRewardDialog(
      this,
      *(EventTradeListViewItemManager_ResData_o **)&v11->fields.revision,
      v13);
    ActionExtensions__Call(this->fields.tradeCallback, 0);
  }
}


void EventTradeListViewItemManager__TradeReplenishmentResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v7; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_4D2B261 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D2B261 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1C93A78(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v9);
    Master_object = (EventTradeStoreMaster_o *)this->fields.touchPanel;
    if ( !Master_object )
      goto LABEL_15;
    Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Master_object,
                                                 0);
    if ( !Master_object )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel;
    if ( !Master_object
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0),
          EventTradeListViewItemManager__RequestListObject(this, v10),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0),
          !playVoiceAction) )
    {
LABEL_15:
      sub_1C93D2C(Master_object, v7);
    }
    ((void (__fastcall *)(intptr_t, _QWORD, EventTradeStoreMaster_o *, _QWORD, intptr_t))playVoiceAction->fields.invoke_impl)(
      playVoiceAction->fields.method_code,
      svtId,
      Master_object,
      0,
      playVoiceAction->fields.method);
    closeDialogCallBack = this->fields.closeDialogCallBack;
    if ( closeDialogCallBack )
      ((void (__fastcall *)(intptr_t, intptr_t))closeDialogCallBack->fields.invoke_impl)(
        closeDialogCallBack->fields.method_code,
        closeDialogCallBack->fields.method);
    ActionExtensions__Call(this->fields.tradeCallback, 0);
  }
}


void EventTradeListViewItemManager__TradeStartResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v7; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20

  if ( (byte_4D2B260 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D2B260 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_13;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1C93A78(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v9);
    Master_object = (EventTradeStoreMaster_o *)this->fields.touchPanel;
    if ( !Master_object )
      goto LABEL_13;
    Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Master_object,
                                                 0);
    if ( !Master_object )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel;
    if ( !Master_object
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0),
          EventTradeListViewItemManager__RequestListObject(this, v10),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeStartVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0),
          !playVoiceAction) )
    {
LABEL_13:
      sub_1C93D2C(Master_object, v7);
    }
    ((void (__fastcall *)(intptr_t, _QWORD, EventTradeStoreMaster_o *, _QWORD, intptr_t))playVoiceAction->fields.invoke_impl)(
      playVoiceAction->fields.method_code,
      svtId,
      Master_object,
      0,
      playVoiceAction->fields.method);
    ActionExtensions__Call(this->fields.tradeCallback, 0);
  }
}


bool EventTradeListViewItemManager__TryGetAvailableStoreIdx(
        EventTradeListViewItemManager_o *this,
        int32_t *storeIdx,
        const MethodInfo *method)
{
  UserEventTradeMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x24
  unsigned __int64 v8; // x25
  Il2CppObject *v9; // x20
  Il2CppClass *v10; // x1
  Il2CppObject *v11; // x21
  System_Int32_array *v12; // x22
  System_Func_int__bool__o *v13; // x23
  struct EventTradeStoreEntity_array *v14; // x8
  il2cpp_array_size_t max_length; // x9
  EventTradeStoreEntity_o *v16; // x8
  int32_t *v18; // [xsp+8h] [xbp-78h]
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-70h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D2B25F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo);
    byte_4D2B25F = 1;
  }
  usedStoreIdx = 0;
  entity = 0;
  *storeIdx = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventTradeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
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
        v9 = (Il2CppObject *)sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo);
        System_Object___ctor(v9, 0);
        if ( v8 >= LODWORD(tradeStoreEntities->max_length) )
          goto LABEL_27;
        if ( !v9 )
          goto LABEL_26;
        v10 = (Il2CppClass *)tradeStoreEntities->m_Items[v8];
        v9[1].klass = v10;
        v11 = v9 + 1;
        sub_1C93A78(&v9[1], v10);
        v12 = usedStoreIdx;
        v13 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v13,
          v9,
          Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__,
          0);
        Master_object = (UserEventTradeMaster_o *)BasicHelper__Any_int__51960056(
                                                    v12,
                                                    (System_Func_T__bool__o *)v13,
                                                    (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        if ( (__int64)++v8 >= SLODWORD(tradeStoreEntities->max_length) )
          return 0;
      }
      if ( v11->klass )
      {
        *v18 = HIDWORD(v11->klass->_1.name);
        return 1;
      }
LABEL_26:
      sub_1C93D2C(Master_object, v6);
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
    sub_1C93D34(Master_object);
  v16 = v14->m_Items[0];
  if ( !v16 )
    goto LABEL_26;
  *storeIdx = v16->fields.idx;
  return 1;
}


void EventTradeListViewItemManager__UpdateNoticeButtonDisp(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UISprite_o *tradeNoticeBtnSp; // x0
  __int64 *v4; // x8

  if ( (byte_4D2B271 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17638/*"btn_on"*/);
    sub_1C93AD4(&StringLiteral_17637/*"btn_off"*/);
    byte_4D2B271 = 1;
  }
  tradeNoticeBtnSp = this->fields.tradeNoticeBtnSp;
  if ( !tradeNoticeBtnSp )
    sub_1C93D2C(0, method);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17638/*"btn_on"*/;
  else
    v4 = &StringLiteral_17637/*"btn_off"*/;
  UISprite__set_spriteName(tradeNoticeBtnSp, (System_String_o *)*v4, 0);
}


void EventTradeListViewItemManager__UpdateReceiveAllButtonState(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager___c_c *v3; // x0
  System_Collections_Generic_List_T__o *itemList; // x20
  System_Func_object__bool__o *_9__85_0; // x21
  Il2CppObject *v6; // x22
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  UIWidget_o *receiveAllButtonLabel; // x0
  __int64 v9; // x1
  long double v10; // q0
  struct UICommonButton_o *receiveAllButton; // x8
  char v12; // w20
  __int64 v13; // x1
  float v14; // s8
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2B26E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_ListViewItem___);
    sub_1C93AD4(&System_Func_ListViewItem__bool__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__);
    sub_1C93AD4(&EventTradeListViewItemManager___c_TypeInfo);
    byte_4D2B26E = 1;
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
    _9__85_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__85_0,
      v6,
      Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__,
      0);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_ListViewItem__bool__o *)_9__85_0;
    sub_1C93A78(&static_fields->__9__85_0, _9__85_0);
  }
  receiveAllButtonLabel = (UIWidget_o *)BasicHelper__Any_object_(
                                          itemList,
                                          (System_Func_T__bool__o *)_9__85_0,
                                          (const MethodInfo_318DB78 *)Method_BasicHelper_Any_ListViewItem___);
  receiveAllButton = this->fields.receiveAllButton;
  if ( !receiveAllButton )
    goto LABEL_23;
  v12 = (char)receiveAllButtonLabel;
  LODWORD(v10) = 0.5;
  v13 = ((unsigned __int8)receiveAllButtonLabel & 1) != 0 ? 0LL : 3LL;
  v14 = ((unsigned __int8)receiveAllButtonLabel & 1) != 0 ? 1.0 : 0.5;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *, long double))receiveAllButton->klass->vtable._14_SetState.methodPtr)(
    this->fields.receiveAllButton,
    v13,
    1,
    receiveAllButton->klass->vtable._14_SetState.method,
    v10);
  receiveAllButtonLabel = (UIWidget_o *)this->fields.receiveAllButtonLabel;
  if ( !receiveAllButtonLabel )
    goto LABEL_23;
  v16.fields.a = 1.0;
  v16.fields.r = v14;
  v16.fields.g = v14;
  v16.fields.b = v14;
  UIWidget__set_color(receiveAllButtonLabel, v16, 0);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0, 0) )
  {
    receiveAllButtonLabel = (UIWidget_o *)this->fields.tradeButtonBlinkEffect;
    if ( receiveAllButtonLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButtonLabel, v12 & 1, 0);
      return;
    }
LABEL_23:
    sub_1C93D2C(receiveAllButtonLabel, v9);
  }
}


void EventTradeListViewItemManager__UpdateTradeQuoteLb(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v2; // x19
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x8
  int max_length; // w22
  int v5; // w8
  int v6; // w21
  System_String_o **v7; // x8
  System_String_o *v8; // x20
  UILabel_o *tradeQuotaLb; // x19
  System_String_o *v10; // x20
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  int v13; // [xsp+8h] [xbp-48h] BYREF
  int v14; // [xsp+Ch] [xbp-44h] BYREF
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-40h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4D2B274 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_13594/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/);
    this = (EventTradeListViewItemManager_o *)sub_1C93AD4(&StringLiteral_13593/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/);
    byte_4D2B274 = 1;
  }
  usedStoreIdx = 0;
  entity = 0;
  tradeStoreEntities = v2->fields.tradeStoreEntities;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (EventTradeListViewItemManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !this )
    goto LABEL_20;
  if ( !UserEventTradeMaster__TryGetEntity((UserEventTradeMaster_o *)this, &entity, v2->fields.currentEventId, 0) )
    goto LABEL_12;
  this = (EventTradeListViewItemManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  this = (EventTradeListViewItemManager_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0);
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
  v7 = (System_String_o **)(max_length == v5 ? &StringLiteral_13594/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_13593/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/);
  v8 = *v7;
  tradeQuotaLb = v2->fields.tradeQuotaLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get(v8, 0);
  v14 = v6;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = max_length;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  this = (EventTradeListViewItemManager_o *)System_String__Format_64467032(v10, v11, v12, 0);
  if ( !tradeQuotaLb )
LABEL_20:
    sub_1C93D2C(this, method);
  UILabel__set_text(tradeQuotaLb, (System_String_o *)this, 0);
}


void EventTradeListViewItemManager__WithdrawalResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  EventTradeListViewItemManager_ResData_o *v7; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *v10; // x20
  EventTradeStoreMaster_o *v11; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  struct BattleDropItem_array *resultTradeRewardInfos; // x8

  if ( (byte_4D2B266 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D2B266 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_19;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1C93A78(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v9);
    v10 = (Il2CppObject *)System_String__Concat_64463988(
                            (System_String_o *)StringLiteral_15904/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16156/*"]"*/,
                            0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v10,
                                                 (const MethodInfo_3213F70 *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel )
      goto LABEL_19;
    v11 = Master_object;
    Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this->fields.touchPanel,
                                                 0);
    if ( !Master_object )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel;
    if ( !Master_object )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    EventTradeListViewItemManager__RequestListObject(this, v12);
    if ( !v11 )
      goto LABEL_19;
    if ( !LODWORD(v11->fields._MasterName_k__BackingField) )
      sub_1C93D34(Master_object);
    v7 = *(EventTradeListViewItemManager_ResData_o **)&v11->fields.revision;
    if ( !v7 || (resultTradeRewardInfos = v7->fields.resultTradeRewardInfos) == 0 )
LABEL_19:
      sub_1C93D2C(Master_object, v7);
    if ( resultTradeRewardInfos->max_length )
      EventTradeListViewItemManager__OpenRewardDialog(this, v7, v13);
    ActionExtensions__Call(this->fields.tradeCallback, 0);
  }
}


void EventTradeListViewItemManager___CheckOpenQuest_b__80_0(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *closeDialogCallBack; // x8

  closeDialogCallBack = this->fields.closeDialogCallBack;
  if ( closeDialogCallBack )
    ((void (__fastcall *)(intptr_t, intptr_t))closeDialogCallBack->fields.invoke_impl)(
      closeDialogCallBack->fields.method_code,
      closeDialogCallBack->fields.method);
}


void EventTradeListViewItemManager___Init_b__53_0(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  EventTradeListViewItemManager__SetTradeObject(this, method);
  EventTradeListViewItemManager__CreateList(this, v3);
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  EventTradeListViewItemManager__RequestListObject(this, v4);
  EventTradeListViewItemManager__OpenSweetsNotificationDialog(this, v5);
  EventTradeListViewItemManager__SetReceiveAllButton(this, v6);
  EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v7);
  EventTradeListViewItemManager__DispPickupInfoBoard(this, v8);
}


void EventTradeListViewItemManager___IsOverPresentBoxLimit_b__87_2(
        EventTradeListViewItemManager_o *this,
        bool isOpenPresentBox,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v9; // x20

  if ( (byte_4D2B275 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo);
    byte_4D2B275 = 1;
  }
  v5 = sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C93A78(v5 + 24, this),
        *(_BYTE *)(v5 + 16) = isOpenPresentBox,
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__,
          0),
        !presentBoxOverDlg) )
  {
    sub_1C93D2C(v6, v7);
  }
  PresentBoxOverDialog__Close_32974724(presentBoxOverDlg, v9, 0);
}


void EventTradeListViewItemManager___OnClickTradeStartButton_b__62_0(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1C93D2C(0, method);
  UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
}


bool EventTradeListViewItemManager___OpenReplenishmentDialog_b__79_0(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *x,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v3; // x19
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  struct EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x9

  if ( !x
    || (v3 = this,
        (this = (EventTradeListViewItemManager_o *)EventTradeListViewObject__GetItem(x, (const MethodInfo *)x)) == 0)
    || (dropList = this->fields.dropList) == 0
    || (selectTradeGoodsEntity = v3->fields.selectTradeGoodsEntity) == 0 )
  {
    sub_1C93D2C(this, x);
  }
  return LODWORD(dropList->fields._items) == selectTradeGoodsEntity->fields.id;
}


System_Collections_Generic_List_EventTradeListViewObject__o *EventTradeListViewItemManager__get_ObjectList(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Generic_List_object__o *v4; // x22
  __int64 v5; // x0
  __int64 v6; // x1
  EventTradeListViewItemManager___c_c *v7; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  System_Func_object__bool__o *_9__48_0; // x22
  Il2CppObject *v10; // x23
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_List_object__o *v13; // x21
  System_Action_object__o *v14; // x22

  if ( (byte_4D2B24C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_GameObject__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_GameObject___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C93AD4(&System_Func_GameObject__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventTradeListViewObject__TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo);
    sub_1C93AD4(&EventTradeListViewItemManager___c_TypeInfo);
    byte_4D2B24C = 1;
  }
  v3 = sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventTradeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__);
  if ( !v3 )
    goto LABEL_12;
  *(_QWORD *)(v3 + 16) = v4;
  sub_1C93A78(v3 + 16, v4);
  v7 = EventTradeListViewItemManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo);
    v7 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__bool__o *)v7->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__48_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__48_0,
      v10,
      Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__,
      0);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_GameObject__bool__o *)_9__48_0;
    sub_1C93A78(&static_fields->__9__48_0, _9__48_0);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__48_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_GameObject___);
  v13 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v12,
                                                       (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v14 = (System_Action_object__o *)sub_1C93D20(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__,
    0);
  if ( !v13 )
LABEL_12:
    sub_1C93D2C(v5, v6);
  System_Collections_Generic_List_object___ForEach(
    v13,
    (System_Action_T__o *)v14,
    (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  return *(System_Collections_Generic_List_EventTradeListViewObject__o **)(v3 + 16);
}


void EventTradeListViewItemManager_ResData___ctor(
        EventTradeListViewItemManager_ResData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D2B276 & 1) == 0 )
  {
    sub_1C93AD4(&EventTradeListViewItemManager___c_TypeInfo);
    byte_4D2B276 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventTradeListViewItemManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradeListViewItemManager___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemManager___c_o *)v1;
  sub_1C93A78(EventTradeListViewItemManager___c_TypeInfo->static_fields, v1);
}


void EventTradeListViewItemManager___c___ctor(EventTradeListViewItemManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_0(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4D2B279 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo);
    byte_4D2B279 = 1;
  }
  v4 = sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__,
          0),
        !Instance) )
  {
    sub_1C93D2C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_1(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4D2B27A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo);
    byte_4D2B27A = 1;
  }
  v4 = sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__,
          0),
        !Instance) )
  {
    sub_1C93D2C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


void EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_4(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v8; // x21

  if ( (byte_4D2B27B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo);
    byte_4D2B27B = 1;
  }
  v4 = sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__,
          0),
        !Instance) )
  {
    sub_1C93D2C(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


bool EventTradeListViewItemManager___c___IsOverPresentBoxLimit_b__87_0(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  __int64 v5; // x8

  if ( (byte_4D2B27C & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1C93AD4(&EventTradeListViewItem_TypeInfo);
    byte_4D2B27C = 1;
  }
  if ( !item )
LABEL_12:
    sub_1C93D2C(this, item);
  naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventTradeListViewItem_TypeInfo )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1C940C8(item);
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


EventTradeGoodsEntity_o *EventTradeListViewItemManager___c___IsOverPresentBoxLimit_b__87_1(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x9

  if ( (byte_4D2B27D & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1C93AD4(&EventTradeListViewItem_TypeInfo);
    byte_4D2B27D = 1;
  }
  if ( !item )
LABEL_8:
    sub_1C93D2C(this, item);
  naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventTradeListViewItem_TypeInfo )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1C940C8(item);
    goto LABEL_8;
  }
  return (EventTradeGoodsEntity_o *)item[1].monitor;
}


bool EventTradeListViewItemManager___c___UpdateReceiveAllButtonState_b__85_0(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventTradeListViewItem_o *v3; // x19
  __int64 naturalAligment; // x10
  const MethodInfo *v5; // x1
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8

  v3 = (EventTradeListViewItem_o *)item;
  if ( (byte_4D2B278 & 1) == 0 )
  {
    sub_1C93AD4(&EventTradeListViewItem_TypeInfo);
    byte_4D2B278 = 1;
  }
  if ( !v3 )
    return 0;
  naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventTradeListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != EventTradeListViewItem_TypeInfo )
    v3 = 0;
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


bool EventTradeListViewItemManager___c___get_ObjectList_b__48_0(
        EventTradeListViewItemManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_4D2B277 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B277 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0, 0);
}


void EventTradeListViewItemManager___c__DisplayClass48_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c__DisplayClass48_0___get_ObjectList_b__1(
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
  if ( (byte_4D2B27E & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___);
    this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_EventTradeListViewObject__Add__);
    byte_4D2B27E = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          go,
                                                                          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___),
        !list)
    || (items = list->fields._items,
        v7 = Method_System_Collections_Generic_List_EventTradeListViewObject__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_1C93D2C(this, go);
  }
  size = list->fields._size;
  v9 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    list->fields._size = size + 1;
    v10 = &items->obj.klass + size;
    v10[4] = (Il2CppClass *)v9;
    sub_1C93A78(v10 + 4, v9);
  }
}


void EventTradeListViewItemManager___c__DisplayClass65_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventTradeListViewItemManager___c__DisplayClass65_0___OnClickWithdrawalButton_b__0(
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
    sub_1C93D2C(this, value);
  }
  if ( !_4__this )
    goto LABEL_8;
  this = (EventTradeListViewItemManager___c__DisplayClass65_0_o *)_4__this->fields.maskPanel;
  if ( !this )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void EventTradeListViewItemManager___c__DisplayClass66_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c__DisplayClass66_0___OpenReconfirmDialog_b__0(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  System_Action_o *v9; // x20

  if ( (byte_4D2B27F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__);
    sub_1C93AD4(&EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo);
    byte_4D2B27F = 1;
  }
  v5 = sub_1C93D20(EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C93A78(v5 + 24, this),
        *(_BYTE *)(v5 + 16) = decide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_1C93D2C(v6, v7);
  }
  CommonUI__CloseConfirmDialog_31581328((CommonUI_o *)Instance, v9, 0);
}


void EventTradeListViewItemManager___c__DisplayClass66_0___OpenReconfirmDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  EventTradeListViewItemManager__OnClickWithdrawalDecide(this->fields.__4__this, this->fields.item, v2);
}


void EventTradeListViewItemManager___c__DisplayClass66_1___ctor(
        EventTradeListViewItemManager___c__DisplayClass66_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c__DisplayClass66_1___OpenReconfirmDialog_b__1(
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
  const MethodInfo *v9; // x2
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v10; // x8
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  Il2CppObject *v13; // x23
  System_Action_o *monitor; // x22
  EventTradeListViewItemManager___c__DisplayClass66_1_o *v15; // x19

  v2 = this;
  if ( (byte_4D2B280 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1C93AD4(&StringLiteral_13592/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_4D2B280 = 1;
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
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1C93A78(
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
                                                                      method);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v10 = v2->fields.CS___8__locals1;
      if ( v10 )
      {
        this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v10->fields.__4__this;
        if ( this )
        {
          EventTradeListViewItemManager__OnClickWithdrawalDecide(
            (EventTradeListViewItemManager_o *)this,
            v10->fields.item,
            v9);
          return;
        }
      }
LABEL_23:
      sub_1C93D2C(this, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13592/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
                                                                      0);
    v13 = (Il2CppObject *)v2->fields.CS___8__locals1;
    if ( !v13 )
      goto LABEL_23;
    monitor = (System_Action_o *)v13[2].monitor;
    v15 = this;
    if ( !monitor )
    {
      monitor = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        monitor,
        v13,
        Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__,
        0);
      v13[2].monitor = monitor;
      this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1C93A78(&v13[2].monitor, monitor);
    }
    if ( !Instance )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      Empty,
      (System_String_o *)v15,
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
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)_4__this->fields.tradeSweetsWithdrawalConfirmDialog;
    if ( !this )
      goto LABEL_23;
    EventTradeSweetsWithdrawalConfirmDialogComponent__Close(
      (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)this,
      method);
  }
}


void EventTradeListViewItemManager___c__DisplayClass70_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTradeListViewItemManager___c__DisplayClass70_0___TryGetAvailableStoreIdx_b__0(
        EventTradeListViewItemManager___c__DisplayClass70_0_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct EventTradeStoreEntity_o *storeEntity; // x8

  storeEntity = this->fields.storeEntity;
  if ( !storeEntity )
    sub_1C93D2C(this, idx);
  return storeEntity->fields.idx == idx;
}


void EventTradeListViewItemManager___c__DisplayClass75_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c__DisplayClass75_0___OnClickWithdrawalDecide_b__0(
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
    sub_1C93D2C(_4__this, onDecide);
  }
  if ( !_4__this )
    goto LABEL_7;
  _4__this = (struct EventTradeListViewItemManager_o *)_4__this->fields.maskPanel;
  if ( !_4__this )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
}


void EventTradeListViewItemManager___c__DisplayClass78_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__0(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  Il2CppObject *v3; // x20
  BattleDropItem_array *klass; // x19
  void *monitor; // x8
  EventTradePointRewardDialogComponent_o *v6; // x21
  int32_t v7; // w22
  int32_t v8; // w23
  __int64 v9; // x26
  System_Action_o *v10; // x24
  __int64 v11; // x23
  System_Action_o *v12; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4D2B281 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__);
    byte_4D2B281 = 1;
  }
  klass = (BattleDropItem_array *)v3[1].klass;
  if ( !klass )
    goto LABEL_14;
  monitor = v3[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  if ( klass->max_length )
  {
    v6 = (EventTradePointRewardDialogComponent_o *)*((_QWORD *)monitor + 53);
    v7 = *((_DWORD *)monitor + 126);
    v8 = *((_DWORD *)monitor + 125);
    v9 = *((_QWORD *)monitor + 64);
    v10 = (System_Action_o *)v3[3].monitor;
    if ( !v10 )
    {
      v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v10,
        v3,
        Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__,
        0);
      v3[3].monitor = v10;
      this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1C93A78(&v3[3].monitor, v10);
    }
    if ( v6 )
    {
      EventTradePointRewardDialogComponent__Open(v6, v7, v8, klass, v9 == 0, v10, v2);
      return;
    }
LABEL_14:
    sub_1C93D2C(this, method);
  }
  v11 = *((_QWORD *)monitor + 67);
  v12 = (System_Action_o *)v3[4].monitor;
  if ( !v12 )
  {
    v12 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__,
      0);
    v3[4].monitor = v12;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1C93A78(&v3[4].monitor, v12);
  }
  if ( !v11 )
    goto LABEL_14;
  (*(void (__fastcall **)(_QWORD, BattleDropItem_array *, _QWORD, System_Action_o *, _QWORD))(v11 + 24))(
    *(_QWORD *)(v11 + 64),
    klass,
    0,
    v12,
    *(_QWORD *)(v11 + 40));
}


void EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__1(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _QWORD *monitor; // x8
  __int64 v4; // x23
  System_Action_o *klass; // x21
  Il2CppClass *v6; // x20

  v2 = (Il2CppObject *)this;
  if ( (byte_4D2B282 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__);
    byte_4D2B282 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v4 = monitor[67];
  klass = (System_Action_o *)v2[3].klass;
  v6 = v2[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v2,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__,
      0);
    v2[3].klass = (Il2CppClass *)klass;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1C93A78(&v2[3], klass);
  }
  if ( !v4 )
LABEL_8:
    sub_1C93D2C(this, method);
  (*(void (__fastcall **)(_QWORD, Il2CppClass *, _QWORD, System_Action_o *, _QWORD))(v4 + 24))(
    *(_QWORD *)(v4 + 64),
    v6,
    0,
    klass,
    *(_QWORD *)(v4 + 40));
}


void EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v3; // x19
  System_Action_o *_9__5; // x22
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21

  v3 = this;
  if ( (byte_4D2B284 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__);
    byte_4D2B284 = 1;
  }
  _9__5 = v3->fields.__9__5;
  _4__this = v3->fields.__4__this;
  oldEventPoint = v3->fields.oldEventPoint;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__,
      0);
    v3->fields.__9__5 = _9__5;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1C93A78(&v3->fields.__9__5, _9__5);
  }
  if ( !_4__this )
    sub_1C93D2C(this, method);
  EventTradeListViewItemManager__CheckOpenQuest(_4__this, oldEventPoint, _9__5, v2);
}


void EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__3(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v3; // x19
  System_Action_o *_9__4; // x22
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21

  v3 = this;
  if ( (byte_4D2B283 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1C93AD4(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__);
    byte_4D2B283 = 1;
  }
  _9__4 = v3->fields.__9__4;
  _4__this = v3->fields.__4__this;
  oldEventPoint = v3->fields.oldEventPoint;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__,
      0);
    v3->fields.__9__4 = _9__4;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1C93A78(&v3->fields.__9__4, _9__4);
  }
  if ( !_4__this )
    sub_1C93D2C(this, method);
  EventTradeListViewItemManager__CheckOpenQuest(_4__this, oldEventPoint, _9__4, v2);
}


void EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__4(
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
    if ( (((__int64 (__fastcall *)(intptr_t, intptr_t))closeDialogCallBack->fields.invoke_impl)(
            closeDialogCallBack->fields.method_code,
            closeDialogCallBack->fields.method)
        & 1) != 0 )
      return;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
LABEL_6:
      sub_1C93D2C(_4__this, method);
  }
  EventTradeListViewItemManager__OpenReplenishmentDialog(_4__this, method);
}


void EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__5(
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
    if ( (((__int64 (__fastcall *)(intptr_t, intptr_t))closeDialogCallBack->fields.invoke_impl)(
            closeDialogCallBack->fields.method_code,
            closeDialogCallBack->fields.method)
        & 1) != 0 )
      return;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
LABEL_6:
      sub_1C93D2C(_4__this, method);
  }
  EventTradeListViewItemManager__OpenReplenishmentDialog(_4__this, method);
}


void EventTradeListViewItemManager___c__DisplayClass83_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c__DisplayClass83_0___OpenSweetsNotificationDialog_b__0(
        EventTradeListViewItemManager___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  EventTradeGoodsMaster_o *Master_object; // x0
  __int64 v4; // x1
  struct EventTradeListViewItemManager_o *_4__this; // x8
  long double inited; // q0
  struct EventTradeListViewItem_array *itemList; // x8
  EventTradeListViewItem_o *v8; // x8
  EventTradeGoodsMaster_o *klass; // x2
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  struct EventTradeListViewItemManager_o *v13; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x9

  if ( (byte_4D2B285 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_string___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_14668/*"TradeNotificationDialogOpenTime"*/);
    byte_4D2B285 = 1;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_14668/*"TradeNotificationDialogOpenTime"*/, this->fields.openTime, 0);
  UnityEngine_PlayerPrefs__Save(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Master_object )
    goto LABEL_26;
  Master_object = (EventTradeGoodsMaster_o *)EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                                               Master_object,
                                               _4__this->fields.currentEventId,
                                               0);
  if ( Master_object && LODWORD(Master_object->fields._MasterName_k__BackingField) )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      if ( !LODWORD(itemList->max_length) )
        sub_1C93D34(Master_object);
      v8 = itemList->m_Items[0];
      if ( v8 )
      {
        Master_object = (EventTradeGoodsMaster_o *)v8->fields._TradeGoodsEntity_k__BackingField;
        if ( Master_object )
        {
          Master_object = (EventTradeGoodsMaster_o *)EventTradeGoodsEntity__GetTradePickupVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0);
          klass = Master_object;
          goto LABEL_23;
        }
      }
    }
LABEL_26:
    sub_1C93D2C(Master_object, v4);
  }
  v10 = Method_System_Array_Empty_string___;
  v11 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v11 )
  {
    sub_1C69BC4(Method_System_Array_Empty_string___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  Master_object = *(EventTradeGoodsMaster_o **)(v10[7] + 16LL);
  if ( (*((_BYTE *)&Master_object[4].fields._MasterKind_k__BackingField + 5) & 1) == 0 )
    Master_object = (EventTradeGoodsMaster_o *)sub_1C69B68(inited);
  klass = (EventTradeGoodsMaster_o *)Master_object[2].fields.list->klass;
LABEL_23:
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_26;
  playVoiceAction = v13->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_26;
  ((void (__fastcall *)(intptr_t, _QWORD, EventTradeGoodsMaster_o *, _QWORD, intptr_t))playVoiceAction->fields.invoke_impl)(
    playVoiceAction->fields.method_code,
    (unsigned int)v13->fields.svtId,
    klass,
    0,
    playVoiceAction->fields.method);
}


void EventTradeListViewItemManager___c__DisplayClass86_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c__DisplayClass86_0___IsOverPossessionLimit_b__2(
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

  if ( (byte_4D2B286 & 1) == 0 )
  {
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12785/*"SellServant"*/);
    sub_1C93AD4(&StringLiteral_12821/*"ServantCombine"*/);
    byte_4D2B286 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42211596(v5, (System_String_o *)StringLiteral_12785/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1C93D2C(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42211508(v5, (System_String_o *)StringLiteral_12821/*"ServantCombine"*/, 0);
      if ( Instance )
      {
        v8 = 32;
LABEL_10:
        v6 = Instance;
        v9 = (Il2CppObject *)v5;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
      }
      goto LABEL_15;
  }
}


void EventTradeListViewItemManager___c__DisplayClass86_1___ctor(
        EventTradeListViewItemManager___c__DisplayClass86_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c__DisplayClass86_1___IsOverPossessionLimit_b__3(
        EventTradeListViewItemManager___c__DisplayClass86_1_o *this,
        const MethodInfo *method)
{
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1

  if ( (byte_4D2B287 & 1) == 0 )
  {
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12825/*"ServantEquipList"*/);
    sub_1C93AD4(&StringLiteral_12785/*"SellServant"*/);
    sub_1C93AD4(&StringLiteral_12824/*"ServantEQCombine"*/);
    byte_4D2B287 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42211596(v5, (System_String_o *)StringLiteral_12785/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C93D2C(v6, v7);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42211508(v5, (System_String_o *)StringLiteral_12825/*"ServantEquipList"*/, 0);
      if ( Instance )
      {
        v8 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_42211508(v5, (System_String_o *)StringLiteral_12824/*"ServantEQCombine"*/, 0);
      if ( Instance )
      {
        v8 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v8, 1, (Il2CppObject *)v5, 0);
        return;
      }
      goto LABEL_14;
  }
}


void EventTradeListViewItemManager___c__DisplayClass86_2___ctor(
        EventTradeListViewItemManager___c__DisplayClass86_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c__DisplayClass86_2___IsOverPossessionLimit_b__5(
        EventTradeListViewItemManager___c__DisplayClass86_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  SceneJumpInfo_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2B288 & 1) == 0 )
  {
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12785/*"SellServant"*/);
    byte_4D2B288 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_42211596(v4, (System_String_o *)StringLiteral_12785/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_1C93D2C(v5, v6);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v4, 0);
  }
}


void EventTradeListViewItemManager___c__DisplayClass87_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventTradeListViewItemManager___c__DisplayClass87_0___IsOverPresentBoxLimit_b__3(
        EventTradeListViewItemManager___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  struct EventTradeListViewItemManager_o *_4__this; // x8
  System_Action_o *boxOverDlgCloseCallBack; // x0

  if ( this->fields.isOpenPresentBox )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_1C93D2C(this, method);
    boxOverDlgCloseCallBack = _4__this->fields.boxOverDlgCloseCallBack;
    if ( boxOverDlgCloseCallBack )
      ActionExtensions__Call(boxOverDlgCloseCallBack, 0);
  }
}
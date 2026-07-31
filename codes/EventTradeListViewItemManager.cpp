void EventTradeListViewItemManager___ctor(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CURRENT_PICKUP_INFO_BOARD_POS.fields.x = xmmword_E949D0;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventTradeListViewItemManager__CheckIsSerializeFieldNotNull(Il2CppObject *targetObj, const MethodInfo *method)
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
  if ( (byte_5932C49 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_var);
    targetObj = (Il2CppObject *)sub_21FFC50(&UnityEngine_SerializeField_var);
    byte_5932C49 = 1;
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5932C45 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&EventInfoTradeRankControl_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932C45 = 1;
  }
  currentEventId = this->fields.currentEventId;
  if ( !*(&EventInfoTradeRankControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo, *(_QWORD *)&oldEventPoint, callback);
  EventInfoTradeRankControl__UpdateOldPoint(currentEventId, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = this->fields.currentEventId;
  v10 = (CommonUI_o *)Instance;
  v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__, 0);
  if ( !v10 )
    sub_21FFECC(v12, v13);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  __int64 v24; // x2
  struct EventTradeGoodsEntity_array *v25; // x8
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_5932C2C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__);
    sub_21FFC50(&EventTradeListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5927/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/);
    byte_5932C2C = 1;
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
        sub_21FFED4(itemList);
      v8 = tradeGoodsEntities->m_Items[v7];
      if ( !v8 )
        break;
      id = v8->fields.id;
      currentEventId = this->fields.currentEventId;
      v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v11,
        (Il2CppObject *)this,
        Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
        0);
      v12 = (EventTradeListViewItem_o *)sub_21FFEBC(EventTradeListViewItem_TypeInfo);
      EventTradeListViewItem___ctor(v12, id, v8, currentEventId, v11, v13);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v12,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v12, v14, v15, v16, v17, v18, v19);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_14;
    }
LABEL_20:
    sub_21FFECC(itemList, v4);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0);
  v25 = this->fields.tradeGoodsEntities;
  if ( !v25 )
    goto LABEL_20;
  if ( !v25->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v24);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5927/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
                                                              0);
    if ( !emptyMessageLabel )
      goto LABEL_20;
    UILabel__set_text(emptyMessageLabel, (System_String_o *)itemList, 0);
  }
}


void EventTradeListViewItemManager__DestroyList(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  EventTradeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *tradeRewardDialog; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Component_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Object_o *tradePointRewardDialog; // x20
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
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
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
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_Object_o *v56; // x20
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  UnityEngine_Object_o *v66; // x20
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7

  if ( (byte_5932C2E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C2E = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventTradeAssetManager__Release(assetManager, this->fields.currentEventId, v4);
  tradeRewardDialog = (UnityEngine_Object_o *)this->fields.tradeRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(tradeRewardDialog, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.tradeRewardDialog;
    if ( !v9 )
      goto LABEL_48;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    this->fields.tradeRewardDialog = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tradeRewardDialog, 0, v13, v14, v15, v16, v17, v18);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(tradePointRewardDialog, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.tradePointRewardDialog;
    if ( !v9 )
      goto LABEL_48;
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
    UnityEngine_Object__Destroy_83246496(v23, 0);
    this->fields.tradePointRewardDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradePointRewardDialog,
      0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v20);
  if ( UnityEngine_Object__op_Inequality(tradeSweetsNumConfirmDialog, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.tradeSweetsNumConfirmDialog;
    if ( !v9 )
      goto LABEL_48;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
    UnityEngine_Object__Destroy_83246496(v34, 0);
    this->fields.tradeSweetsNumConfirmDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradeSweetsNumConfirmDialog,
      0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v31);
  if ( UnityEngine_Object__op_Inequality(tradeSweetsWithdrawalConfirmDialog, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
    if ( !v9 )
      goto LABEL_48;
    v45 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
    UnityEngine_Object__Destroy_83246496(v45, 0);
    this->fields.tradeSweetsWithdrawalConfirmDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradeSweetsWithdrawalConfirmDialog,
      0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v42);
  if ( UnityEngine_Object__op_Inequality(currentPickupInfoDispControl, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.currentPickupInfoDispControl;
    if ( !v9 )
      goto LABEL_48;
    v56 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
    UnityEngine_Object__Destroy_83246496(v56, 0);
    this->fields.currentPickupInfoDispControl = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentPickupInfoDispControl,
      0,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  nextPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.nextPickupInfoDispControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v53);
  if ( UnityEngine_Object__op_Inequality(nextPickupInfoDispControl, 0, 0) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.nextPickupInfoDispControl;
    if ( v9 )
    {
      v66 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64, v65);
      UnityEngine_Object__Destroy_83246496(v66, 0);
      this->fields.nextPickupInfoDispControl = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.nextPickupInfoDispControl,
        0,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      return;
    }
LABEL_48:
    sub_21FFECC(v9, v7);
  }
}


void EventTradeListViewItemManager__DispPickupInfoBoard(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x20
  int64_t Time; // x21
  System_DateTime_o v9; // x1
  System_DateTime_o v10; // x2
  System_DateTime_o v11; // x0
  System_DateTime_o v12; // x0
  int64_t Time_48310584; // x0
  const MethodInfo *v14; // x1
  int64_t v15; // x22
  bool EntityListTargetTime; // w21
  char v17; // w20
  const MethodInfo *v18; // x4
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *infoPanel; // x20
  __int64 v23; // x2
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Object_o *svtIndexPanel; // x20
  UnityEngine_GameObject_o *v26; // x0
  uint64_t dateData; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *v28; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5932C4F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C4F = 1;
  }
  pickupEntityList = 0;
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  dateData = 0;
  v28 = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  Time = NetworkManager__getTime(0);
  dateData = NetworkManager__getDateTime(0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v9.fields._dateData, v10.fields._dateData);
  v11.fields._dateData = (uint64_t)&dateData;
  v12.fields._dateData = System_DateTime__AddDays(v11, 1.0, 0).fields._dateData;
  Time_48310584 = NetworkManager__getTime_48310584(v12, 0);
  if ( !Master_object )
    goto LABEL_32;
  v15 = Time_48310584;
  EntityListTargetTime = EventTradePickupMaster__TryGetEntityListTargetTime(
                           (EventTradePickupMaster_o *)Master_object,
                           &pickupEntityList,
                           this->fields.currentEventId,
                           Time,
                           0);
  Time_48310584 = EventTradePickupMaster__TryGetEntityListTargetTime(
                    (EventTradePickupMaster_o *)Master_object,
                    &v28,
                    this->fields.currentEventId,
                    v15,
                    0);
  if ( !this->fields.currentPickupInfoDispControl )
    goto LABEL_32;
  v17 = Time_48310584;
  EventTradePickupInfoDispControl__Init(this->fields.currentPickupInfoDispControl, v14);
  Time_48310584 = (int64_t)this->fields.nextPickupInfoDispControl;
  if ( !Time_48310584 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__Init((EventTradePickupInfoDispControl_o *)Time_48310584, v14);
  if ( !EntityListTargetTime )
  {
    if ( (v17 & 1) == 0 )
      return;
LABEL_18:
    Time_48310584 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_48310584 )
      goto LABEL_32;
    EventTradePickupInfoDispControl__SetUi(
      (EventTradePickupInfoDispControl_o *)Time_48310584,
      this->fields.currentEventId,
      v28,
      0,
      v18);
    Time_48310584 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_48310584 )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_48310584, 0);
    GameObjectExtensions__SetLocalPosition_42876016(gameObject, this->fields.NEXT_PICKUP_INFO_BOARD_POS, 0);
    goto LABEL_21;
  }
  Time_48310584 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_48310584 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__SetUi(
    (EventTradePickupInfoDispControl_o *)Time_48310584,
    this->fields.currentEventId,
    pickupEntityList,
    1,
    v18);
  Time_48310584 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_48310584 )
    goto LABEL_32;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_48310584, 0);
  GameObjectExtensions__SetLocalPosition_42876016(v19, this->fields.CURRENT_PICKUP_INFO_BOARD_POS, 0);
  if ( (v17 & 1) != 0 )
    goto LABEL_18;
LABEL_21:
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v20);
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0, 0) )
  {
    Time_48310584 = (int64_t)this->fields.infoPanel;
    if ( !Time_48310584 )
      goto LABEL_32;
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_48310584, 0);
    GameObjectExtensions__SetLocalPositionY(v24, -33.0, 0);
  }
  svtIndexPanel = (UnityEngine_Object_o *)this->fields.svtIndexPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v23);
  if ( UnityEngine_Object__op_Inequality(svtIndexPanel, 0, 0) )
  {
    Time_48310584 = (int64_t)this->fields.svtIndexPanel;
    if ( Time_48310584 )
    {
      v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_48310584, 0);
      GameObjectExtensions__SetLocalPositionY(v26, -92.0, 0);
      return;
    }
LABEL_32:
    sub_21FFECC(Time_48310584, v14);
  }
}


bool EventTradeListViewItemManager__ExecuteCloseDialogCallBack(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  struct System_Func_bool__o *closeDialogCallBack; // x8

  closeDialogCallBack = this->fields.closeDialogCallBack;
  if ( closeDialogCallBack )
    return ((__int64 (__fastcall *)(intptr_t, intptr_t))closeDialogCallBack->fields.invoke_impl)(
             closeDialogCallBack->fields.method_code,
             closeDialogCallBack->fields.method);
  else
    return 0;
}


System_Collections_Generic_List_EventTradeListViewItem__o *EventTradeListViewItemManager__GetPickupList(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t currentEventId; // w21
  EventTradePickupMaster_o *v10; // x22
  int64_t Time; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  __int64 v19; // x1
  EventTradeGoodsEntity_o *v20; // x23
  int32_t klass; // w25
  int32_t v22; // w24
  System_Action_o *v23; // x26
  EventTradeListViewItem_o *v24; // x22
  const MethodInfo *v25; // x5
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5932C2D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradePickupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__get_Current__);
    sub_21FFC50(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__);
    sub_21FFC50(&EventTradeListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventTradeListViewItem__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932C2D = 1;
  }
  pickupEntityList = 0;
  memset(&v40, 0, sizeof(v40));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTradeListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  currentEventId = this->fields.currentEventId;
  v10 = (EventTradePickupMaster_o *)Master_object;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
  Time = NetworkManager__getTime(0);
  if ( !v10 )
    goto LABEL_28;
  if ( !EventTradePickupMaster__TryGetEntityListTargetTime(v10, &pickupEntityList, currentEventId, Time, 0) )
    return (System_Collections_Generic_List_EventTradeListViewItem__o *)v3;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !pickupEntityList )
LABEL_28:
    sub_21FFECC(Time, v12);
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Time;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)pickupEntityList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__);
  v40 = v39;
  v39.fields._list = 0;
  *(_QWORD *)&v39.fields._index = &v40;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__);
    if ( !v16 )
      break;
    if ( !v40.fields._current )
      sub_21FFECC(v16, v17);
    if ( !v15 )
      sub_21FFECC(v16, v17);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v15,
               (int32_t)v40.fields._current[1].klass,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    v20 = (EventTradeGoodsEntity_o *)Entity;
    if ( !Entity )
      sub_21FFECC(0, v19);
    klass = (int32_t)Entity[1].klass;
    v22 = this->fields.currentEventId;
    v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
      0);
    v24 = (EventTradeListViewItem_o *)sub_21FFEBC(EventTradeListViewItem_TypeInfo);
    EventTradeListViewItem___ctor(v24, klass, v20, v22, v23, v25);
    if ( !v3
      || (items = v3->fields._items,
          v35 = Method_System_Collections_Generic_List_EventTradeListViewItem__Add__,
          ++v3->fields._version,
          !items) )
    {
      sub_21FFECC(v26, v27);
    }
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v24,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v37[4] = (Il2CppClass *)v24;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 4), (int32_t)v24, v28, v29, v30, v31, v32, v33);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__);
  return (System_Collections_Generic_List_EventTradeListViewItem__o *)v3;
}


int64_t EventTradeListViewItemManager__GetUpdateTime(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v3; // w8
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t Time; // x19
  System_DateTime_o v7; // x0
  int32_t Hour; // w20
  System_DateTime_o v9; // x0
  int32_t Minute; // w21
  System_DateTime_o v11; // x0
  int32_t Second; // w0
  __int64 v13; // x1
  __int64 v14; // x2
  EventTradeTimeCalculation_c *v15; // x8
  int32_t v16; // w22
  int64_t v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  EventTradeTimeCalculation_c *v20; // x0
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5932C47 & 1) == 0 )
  {
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&EventTradeTimeCalculation_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932C47 = 1;
  }
  v3 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  dateData = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  dateData = NetworkManager__getLocalDateTime(0).fields._dateData;
  Time = NetworkManager__getTime(0);
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v4, v5);
  v7.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v7, 0);
  v9.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v9, 0);
  v11.fields._dateData = (uint64_t)&dateData;
  Second = System_DateTime__get_Second(v11, 0);
  v15 = EventTradeTimeCalculation_TypeInfo;
  v16 = Second;
  if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v13, v14);
    v15 = EventTradeTimeCalculation_TypeInfo;
  }
  v17 = v15->static_fields->TRADE_TIME_OFFSET + Time - (v16 + 60 * (Minute + 60 * Hour));
  if ( NetworkManager__getTime(0) < v17 )
  {
    v20 = EventTradeTimeCalculation_TypeInfo;
    if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v18, v19);
      v20 = EventTradeTimeCalculation_TypeInfo;
    }
    v17 -= v20->static_fields->ONE_DAY_SECOND;
  }
  return v17;
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x1
  __int64 v56; // x2
  EventTradeGoodsMaster_o *Master_object; // x0
  __int64 v58; // x1
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x8
  EventTradeGoodsEntity_o *v80; // x8
  int32_t eventPointItemId; // w8
  EventTradeAssetManager_o *v82; // x21
  const MethodInfo *v83; // x1
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  const MethodInfo *v90; // x1
  __int64 v91; // x1
  __int64 v92; // x2
  UILabel_o *tradeNoticeLb; // x21
  const MethodInfo *v94; // x1
  EventTradeAssetManager_o *assetManager; // x21
  System_Action_o *v96; // x22
  const MethodInfo *v97; // x3

  if ( (byte_5932C2B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&EventTradeAssetManager_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager__Init_b__53_0__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_14013/*"TRADE_EVENT_PUSH_BTN_LABEL"*/);
    byte_5932C2B = 1;
  }
  this->fields.svtId = svtId;
  this->fields.currentEventId = eventId;
  this->fields.tradeCallback = tradeCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tradeCallback,
    (int32_t)tradeCallback,
    *(System_String_o **)&svtId,
    (System_String_o *)tradeCallback,
    (int32_t)playVoice,
    (int32_t)rewardDialogCallBack,
    (bool)maskPanel,
    (bool)boxOverDlg);
  this->fields.rewardDialogCallBack = rewardDialogCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rewardDialogCallBack,
    (int32_t)rewardDialogCallBack,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.playVoiceAction = playVoice;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceAction,
    (int32_t)playVoice,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.presentBoxOverDlg,
    (int32_t)boxOverDlg,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.boxOverDlgCloseCallBack,
    (int32_t)boxOverDlgCallBack,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.closeDialogCallBack = closeDialogCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeDialogCallBack,
    (int32_t)closeDialogCallBack,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.maskPanel = maskPanel;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.maskPanel,
    (int32_t)maskPanel,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v55, v56);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_19;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(Master_object, this->fields.currentEventId, 0);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tradeGoodsEntities,
    (int32_t)TradeGoodsEntityArray,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_19;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tradeStoreEntities,
    (int32_t)OpenTradeStoreEntityArray,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_19;
  if ( !LODWORD(tradeGoodsEntities->max_length) )
    sub_21FFED4(Master_object);
  v80 = tradeGoodsEntities->m_Items[0];
  if ( !v80 )
    goto LABEL_19;
  eventPointItemId = v80->fields.eventPointItemId;
  this->fields.selectTradeGoodsEntity = 0;
  this->fields.eventPointItemId = eventPointItemId;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectTradeGoodsEntity, 0, v73, v74, v75, v76, v77, v78);
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
    v82 = (EventTradeAssetManager_o *)sub_21FFEBC(EventTradeAssetManager_TypeInfo);
    EventTradeAssetManager___ctor(v82, v83);
    this->fields.assetManager = v82;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.assetManager,
      (int32_t)v82,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetTradeNotification(0);
  EventTradeListViewItemManager__UpdateNoticeButtonDisp(this, v90);
  tradeNoticeLb = this->fields.tradeNoticeLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91, v92);
  Master_object = (EventTradeGoodsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_14013/*"TRADE_EVENT_PUSH_BTN_LABEL"*/, 0);
  if ( !tradeNoticeLb
    || (UILabel__set_text(tradeNoticeLb, (System_String_o *)Master_object, 0),
        EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v94),
        assetManager = this->fields.assetManager,
        v96 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v96, (Il2CppObject *)this, Method_EventTradeListViewItemManager__Init_b__53_0__, 0),
        !assetManager) )
  {
LABEL_19:
    sub_21FFECC(Master_object, v58);
  }
  EventTradeAssetManager__GetAssets(assetManager, eventId, v96, v97);
}


bool EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  System_String_o *String_83184936; // x0
  _BOOL8 v3; // x0
  const MethodInfo *v4; // x1
  int64_t v5; // x20
  EventTradeListViewItemManager_o *UpdateTime; // x0
  const MethodInfo *v7; // x1
  int64_t v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  EventTradeTimeCalculation_c *v12; // x8
  int64_t v13; // x19
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5932C46 & 1) == 0 )
  {
    sub_21FFC50(&EventTradeTimeCalculation_TypeInfo);
    sub_21FFC50(&StringLiteral_15134/*"TradeNotificationDialogOpenTime"*/);
    byte_5932C46 = 1;
  }
  result = 0;
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936((System_String_o *)StringLiteral_15134/*"TradeNotificationDialogOpenTime"*/, 0);
  v3 = System_Int64__TryParse(String_83184936, &result, 0);
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
  v12 = EventTradeTimeCalculation_TypeInfo;
  v13 = v9;
  if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v10, v11);
    v12 = EventTradeTimeCalculation_TypeInfo;
  }
  return v5 < v12->static_fields->ONE_DAY_SECOND + v13;
}


bool EventTradeListViewItemManager__IsOverPossessionLimit(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  UserGameEntity_o *SelfUserGame; // x19
  void *Master_object; // x0
  __int64 v6; // x1
  UserServantMaster_o *v7; // x21
  Il2CppObject *v8; // x20
  __int64 v9; // x2
  CommonUI_o *v10; // x20
  int32_t v11; // w21
  int32_t svtKeep; // w19
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x8
  ServantFrameShortDlgComponent_CallbackFunc_o *_9__86_0; // x22
  Il2CppObject *v15; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  CommonUI_o *v23; // x0
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x2
  CommonUI_o *v28; // x20
  int32_t v29; // w21
  int32_t svtEquipKeep; // w19
  struct EventTradeListViewItemManager___c_StaticFields *v31; // x8
  Il2CppObject *v32; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  bool v40; // w8
  bool result; // w0
  int32_t Count; // w20
  __int64 v43; // x2
  CommonUI_o *v44; // x21
  BalanceConfig_c *v45; // x8
  int32_t CommandCodeFrameMax; // w19
  struct EventTradeListViewItemManager___c_StaticFields *v47; // x8
  Il2CppObject *v48; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5932C4B & 1) == 0 )
  {
    sub_21FFC50(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__);
    sub_21FFC50(&EventTradeListViewItemManager___c_TypeInfo);
    byte_5932C4B = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v2, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_44;
  v7 = (UserServantMaster_o *)Master_object;
  UserServantMaster__getCount((UserServantMaster_o *)Master_object, &servantEquipSum[1], servantEquipSum, 1, 0);
  v8 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v7, 1, 0) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v10 = (CommonUI_o *)Master_object;
      v11 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
      if ( !*(&EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, v6, v9);
        Master_object = EventTradeListViewItemManager___c_TypeInfo;
      }
      static_fields = (struct EventTradeListViewItemManager___c_StaticFields *)*((_QWORD *)Master_object + 23);
      _9__86_0 = static_fields->__9__86_0;
      if ( !_9__86_0 )
      {
        if ( !*((_DWORD *)Master_object + 57) )
        {
          j_il2cpp_runtime_class_init_0(Master_object, v6, v9);
          static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
        }
        v15 = (Il2CppObject *)static_fields->__9;
        _9__86_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          _9__86_0,
          v15,
          Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__,
          0);
        v16 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
        v16->__9__86_0 = _9__86_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v16->__9__86_0,
          (int32_t)_9__86_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      if ( v10 )
      {
        v23 = v10;
        v24 = v11;
        v25 = svtKeep;
        v26 = 0;
        goto LABEL_41;
      }
    }
LABEL_44:
    sub_21FFECC(Master_object, v6);
  }
  Master_object = (void *)UserServantMaster__CheckEquipAdd(v7, 1, 1, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_44;
    v28 = (CommonUI_o *)Master_object;
    v29 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Master_object = EventTradeListViewItemManager___c_TypeInfo;
    if ( !*(&EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, v6, v27);
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
    }
    v31 = (struct EventTradeListViewItemManager___c_StaticFields *)*((_QWORD *)Master_object + 23);
    _9__86_0 = v31->__9__86_1;
    if ( !_9__86_0 )
    {
      if ( !*((_DWORD *)Master_object + 57) )
      {
        j_il2cpp_runtime_class_init_0(Master_object, v6, v27);
        v31 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)v31->__9;
      _9__86_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__86_0,
        v32,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__,
        0);
      v33 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v33->__9__86_1 = _9__86_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->__9__86_1, (int32_t)_9__86_0, v34, v35, v36, v37, v38, v39);
    }
    if ( !v28 )
      goto LABEL_44;
    v23 = v28;
    v24 = v29;
    v25 = svtEquipKeep;
    v26 = 1;
  }
  else
  {
    if ( !v8 )
      goto LABEL_44;
    v40 = UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v8, 0, 0);
    result = 0;
    if ( !v40 )
      return result;
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v8, 0);
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_44;
    v44 = (CommonUI_o *)Master_object;
    if ( !byte_59324C8 )
    {
      sub_21FFC50(&BalanceConfig_TypeInfo);
      byte_59324C8 = 1;
    }
    v45 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v43);
      v45 = BalanceConfig_TypeInfo;
    }
    Master_object = EventTradeListViewItemManager___c_TypeInfo;
    CommandCodeFrameMax = v45->static_fields->CommandCodeFrameMax;
    if ( !*(&EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, v6, v43);
      Master_object = EventTradeListViewItemManager___c_TypeInfo;
    }
    v47 = (struct EventTradeListViewItemManager___c_StaticFields *)*((_QWORD *)Master_object + 23);
    _9__86_0 = v47->__9__86_4;
    if ( !_9__86_0 )
    {
      if ( !*((_DWORD *)Master_object + 57) )
      {
        j_il2cpp_runtime_class_init_0(Master_object, v6, v43);
        v47 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)v47->__9;
      _9__86_0 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_21FFEBC(ServantFrameShortDlgComponent_CallbackFunc_TypeInfo);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        _9__86_0,
        v48,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__,
        0);
      v49 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v49->__9__86_4 = _9__86_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v49->__9__86_4, (int32_t)_9__86_0, v50, v51, v52, v53, v54, v55);
    }
    if ( !v44 )
      goto LABEL_44;
    v23 = v44;
    v24 = Count;
    v25 = CommandCodeFrameMax;
    v26 = 2;
  }
LABEL_41:
  CommonUI__OpenSvtFrameShortDlg(v23, v24, v25, v26, 1, _9__86_0, 4, 0);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Master_object, 0);
  return 1;
}


bool EventTradeListViewItemManager__IsOverPresentBoxLimit(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventTradeListViewItemManager___c_c *v4; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__87_0; // x21
  Il2CppObject *v8; // x22
  struct EventTradeListViewItemManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  EventTradeListViewItemManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  struct EventTradeListViewItemManager___c_StaticFields *v21; // x9
  System_Func_object__object__o *_9__87_1; // x21
  Il2CppObject *v23; // x22
  struct EventTradeListViewItemManager___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_IEnumerable_TResult__o *v33; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *Master_object; // x20
  __int64 v37; // x0
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *v39; // x22
  System_Collections_Generic_HashSet_int__o *v40; // x21
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 v44; // x0
  __int64 IsNullOrEmpty; // x0
  __int64 v46; // x1
  __int64 v47; // x23
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x2
  __int64 v53; // x23
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  GiftEntity_array *GiftListById; // x23
  int max_length; // w8
  __int64 v62; // x27
  GiftEntity_o *v63; // x8
  __int64 v64; // x23
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  int32_t count; // w21
  BalanceConfig_c *v70; // x0
  int32_t PresentBoxMax; // w23
  int32_t v72; // w24
  System_String_o *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  BalanceConfig_c *v76; // x8
  System_String_o *v77; // x20
  Il2CppObject *v78; // x0
  System_String_o *v79; // x20
  PresentBoxOverDialog_o *presentBoxOverDlg; // x21
  PresentBoxOverDialog_ClickDelegate_o *v81; // x22
  _QWORD v83[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v84; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5932C4C & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&PresentBoxOverDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserPresentBoxMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ListViewItem___);
    sub_21FFC50(&Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__);
    sub_21FFC50(&System_Func_ListViewItem__bool__TypeInfo);
    sub_21FFC50(&System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__);
    sub_21FFC50(&EventTradeListViewItemManager___c_TypeInfo);
    sub_21FFC50(&StringLiteral_13985/*"TRADE_CHECK_PRESENT_NUM_TXT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932C4C = 1;
  }
  v4 = EventTradeListViewItemManager___c_TypeInfo;
  itemList = this->fields.itemList;
  v84 = 0;
  if ( !*(&EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, method, v2);
    v4 = EventTradeListViewItemManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__87_0 = (System_Func_object__bool__o *)static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__87_0,
      v8,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__,
      0);
    v9 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    v9->__9__87_0 = (struct System_Func_ListViewItem__bool__o *)_9__87_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__87_0, (int32_t)_9__87_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
          (System_Func_TSource__bool__o *)_9__87_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ListViewItem___);
  v19 = EventTradeListViewItemManager___c_TypeInfo;
  v20 = v16;
  if ( !*(&EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, v17, v18);
    v19 = EventTradeListViewItemManager___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__87_1 = (System_Func_object__object__o *)v21->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !*(&v19->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v19, v17, v18);
      v21 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__87_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__87_1,
      v23,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__,
      0);
    v24 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    v24->__9__87_1 = (struct System_Func_ListViewItem__EventTradeGoodsEntity__o *)_9__87_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__87_1, (int32_t)_9__87_1, v25, v26, v27, v28, v29, v30);
  }
  v33 = System_Linq_Enumerable__Select_object__object_(
          v20,
          (System_Func_TSource__TResult__o *)_9__87_1,
          (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31, v32);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34, v35);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v37 = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34, v35);
    v37 = (__int64)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_86;
  VaildList = UserPresentBoxMaster__getVaildList(
                (UserPresentBoxMaster_o *)Master_object,
                *(_QWORD *)(*(_QWORD *)(v37 + 184) + 64LL),
                0);
  v39 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
  v40 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v40,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v33 )
    goto LABEL_86;
  klass = v33->klass;
  v42 = *(unsigned __int16 *)&v33->klass->_2.rank;
  if ( *(_WORD *)&v33->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo )
    {
      --v42;
      p_offset += 4;
      if ( !v42 )
        goto LABEL_29;
    }
    v44 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_29:
    v44 = sub_2237E2C(v33, System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo, 0);
  }
  IsNullOrEmpty = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v44)(
                    v33,
                    *(_QWORD *)(v44 + 8));
  v84 = IsNullOrEmpty;
  v83[0] = 0;
  v83[1] = &v84;
  if ( !IsNullOrEmpty )
LABEL_58:
    sub_21FFECC(IsNullOrEmpty, v46);
  v47 = IsNullOrEmpty;
  while ( 1 )
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_37;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_37:
      v51 = sub_2237E2C(v47, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8));
    if ( (v37 & 1) == 0 )
      break;
    v53 = v84;
    if ( !v84 )
      sub_21FFECC(v37, v34);
    v54 = *(_QWORD *)v84;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__c **)v56 - 1) != System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_45;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_45:
      v57 = sub_2237E2C(v84, System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo, 0);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
    if ( !v58 )
      sub_21FFECC(0, v59);
    if ( !v39 )
      sub_21FFECC(v58, v59);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v39, *(_DWORD *)(v58 + 44), 0);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GiftListById, 0);
    if ( (IsNullOrEmpty & 1) == 0 )
    {
      if ( !GiftListById )
        sub_21FFECC(IsNullOrEmpty, v46);
      max_length = GiftListById->max_length;
      if ( max_length >= 1 )
      {
        v62 = 0;
        do
        {
          if ( (unsigned int)v62 >= max_length )
            sub_21FFED4(IsNullOrEmpty);
          v63 = GiftListById->m_Items[v62];
          if ( !v63 )
            sub_21FFECC(IsNullOrEmpty, v46);
          if ( !v40 )
            sub_21FFECC(IsNullOrEmpty, v46);
          IsNullOrEmpty = System_Collections_Generic_HashSet_int___Add(
                            v40,
                            v63->fields.type,
                            (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
          max_length = GiftListById->max_length;
          ++v62;
        }
        while ( (int)v62 < max_length );
      }
    }
    v47 = v84;
    if ( !v84 )
      goto LABEL_58;
  }
  v64 = v84;
  if ( v84 )
  {
    v65 = *(_QWORD *)v84;
    v66 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
      {
        --v66;
        v67 += 4;
        if ( !v66 )
          goto LABEL_64;
      }
      v68 = v65 + 16LL * *v67 + 312;
    }
    else
    {
LABEL_64:
      v68 = sub_2237E2C(v84, System_IDisposable_TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v64, *(_QWORD *)(v68 + 8));
  }
  if ( !VaildList || !v40 )
    goto LABEL_86;
  count = v40->fields._count;
  v70 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v34, v52);
    v70 = BalanceConfig_TypeInfo;
  }
  PresentBoxMax = v70->static_fields->PresentBoxMax;
  v72 = count + LODWORD(VaildList->max_length);
  if ( v72 > PresentBoxMax )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v52);
    v73 = LocalizationManager__Get((System_String_o *)StringLiteral_13985/*"TRADE_CHECK_PRESENT_NUM_TXT"*/, 0);
    v76 = BalanceConfig_TypeInfo;
    v77 = v73;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v74, v75);
      v76 = BalanceConfig_TypeInfo;
    }
    LODWORD(v83[0]) = v76->static_fields->PresentBoxMax;
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, v83);
    v79 = System_String__Format(v77, v78, 0);
    presentBoxOverDlg = this->fields.presentBoxOverDlg;
    v81 = (PresentBoxOverDialog_ClickDelegate_o *)sub_21FFEBC(PresentBoxOverDialog_ClickDelegate_TypeInfo);
    PresentBoxOverDialog_ClickDelegate___ctor(
      v81,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__,
      0);
    if ( presentBoxOverDlg )
    {
      PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v79, v81, 26, 0);
      return v72 > PresentBoxMax;
    }
LABEL_86:
    sub_21FFECC(v37, v34);
  }
  return v72 > PresentBoxMax;
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
  if ( !byte_5931945 )
  {
    this = (EventTradeListViewItemManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
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
    sub_21FFECC(this, dialog);
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
  if ( !byte_5931945 )
  {
    this = (EventTradeListViewItemManager_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v6 )
LABEL_8:
    sub_21FFECC(this, obj);
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

  if ( (byte_5932C32 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickListView__);
    byte_5932C32 = 1;
  }
  if ( !obj
    || (this = (EventTradeListViewItemManager_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0 )
  {
    sub_21FFECC(this, obj);
  }
  v4 = this;
  if ( !this->fields.sortOrderButton
    && EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)this, (const MethodInfo *)obj)
    || !BYTE4(v4->fields.listDragPrefab) )
  {
    v5 = Method_EventTradeListViewItemManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_EventTradeListViewItemManager_OnClickListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


void EventTradeListViewItemManager__OnClickNoticeButton(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _BYTE *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5932C4E & 1) == 0 )
  {
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickNoticeButton__);
    byte_5932C4E = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  v4 = Method_EventTradeListViewItemManager_OnClickNoticeButton__;
  this->fields.isButtonOn = isButtonOn ^ 1;
  if ( (v4[83] & 2) != 0 )
    v4 = (_BYTE *)sub_21FFC68(v4);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, *((_QWORD *)v4 + 4));
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x2
  Il2CppObject *Request_object; // x20
  long double v17; // q0
  int32_t currentEventId; // w19
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x0

  v2 = this;
  if ( (byte_5932C3F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_EventTradeListViewItemManager_TradeReceiveResponse__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    this = (EventTradeListViewItemManager_o *)sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5932C3F = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, method)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v2, v3) )
  {
    maskPanel = (__int64)v2->fields.maskPanel;
    if ( !maskPanel )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
    v2->fields.selectTradeGoodsEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.selectTradeGoodsEntity, 0, v6, v7, v8, v9, v10, v11);
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v2,
      Method_EventTradeListViewItemManager_TradeReceiveResponse__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13, v14);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
    currentEventId = v2->fields.currentEventId;
    v19 = Method_System_Array_Empty_int___;
    v20 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v20 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v20 = v19[7];
    }
    v21 = *(_QWORD *)(v20 + 16);
    if ( (*(_WORD *)(v21 + 309) & 1) == 0 )
      v21 = sub_2237AF8(v17);
    if ( !*(_DWORD *)(v21 + 228) )
      *(__n128 *)&v17 = j_il2cpp_runtime_class_init_0(v21, v4, v15);
    maskPanel = *(_QWORD *)(v19[7] + 16LL);
    if ( (*(_WORD *)(maskPanel + 309) & 1) == 0 )
      maskPanel = sub_2237AF8(v17);
    if ( !Request_object )
LABEL_19:
      sub_21FFECC(maskPanel, v4);
    TradeReceiveRequest__beginRequest(
      (TradeReceiveRequest_o *)Request_object,
      currentEventId,
      **(System_Int32_array ***)(maskPanel + 184),
      0,
      0,
      0);
  }
}


void EventTradeListViewItemManager__OnClickReceiveAllButton(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager_o *v2; // x19
  struct UICommonButton_o *receiveAllButton; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  v2 = this;
  if ( (byte_5932C3A & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickReceiveAllButton__);
    byte_5932C3A = 1;
  }
  receiveAllButton = v2->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_21FFECC(this, method);
  v4 = Method_EventTradeListViewItemManager_OnClickReceiveAllButton__;
  if ( receiveAllButton->fields.mState == 3 )
  {
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_EventTradeListViewItemManager_OnClickReceiveAllButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_EventTradeListViewItemManager_OnClickReceiveAllButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
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
  __int64 v11; // x1
  __int64 v12; // x2
  EventTradeListViewItem_o *Item; // x21
  __int64 v14; // x1
  __int64 v15; // x2
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

  if ( (byte_5932C34 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickReceiveButton__);
    sub_21FFC50(&EventTradeTimeCalculation_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932C34 = 1;
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
      sub_21FFECC(maskPanel, obj);
    }
    if ( (v7 & 0x30) != 0 )
    {
      v8 = Method_EventTradeListViewItemManager_OnClickReceiveButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveButton__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_21FFC68(Method_EventTradeListViewItemManager_OnClickReceiveButton__);
      v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
      Item = EventTradeListViewObject__GetItem(obj, v10);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      Time = NetworkManager__getTime(0);
      if ( !*(&EventTradeTimeCalculation_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v14, v15);
      CompleteNum = EventTradeTimeCalculation__GetCompleteNum(Item, Time, 0);
      maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v18);
      if ( !maskPanel )
        goto LABEL_21;
      klass = maskPanel[6].klass;
      if ( !klass )
        goto LABEL_21;
      EventTradeListViewItemManager__OnClickReceiveDecide(this, (int32_t)klass->_1.name, CompleteNum, v19);
      maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v21);
      if ( !maskPanel )
        goto LABEL_21;
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
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Request_object; // x22
  int32_t currentEventId; // w21

  v6 = this;
  if ( (byte_5932C3E & 1) == 0 )
  {
    sub_21FFC50(&Method_EventTradeListViewItemManager_TradeReceiveResponse__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    this = (EventTradeListViewItemManager_o *)sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5932C3E = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, *(const MethodInfo **)&storeIdx)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v6, v7) )
  {
    maskPanel = (__int64)v6->fields.maskPanel;
    if ( receiveNum <= 0 )
    {
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0);
        return;
      }
    }
    else if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v6,
        Method_EventTradeListViewItemManager_TradeReceiveResponse__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      Request_object = NetworkManager__getRequest_object_(
                         v10,
                         (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
      currentEventId = v6->fields.currentEventId;
      maskPanel = sub_21FFD10(int___TypeInfo, 1);
      if ( maskPanel )
      {
        if ( !*(_DWORD *)(maskPanel + 24) )
          sub_21FFED4(maskPanel);
        *(_DWORD *)(maskPanel + 32) = storeIdx;
        if ( Request_object )
        {
          TradeReceiveRequest__beginRequest(
            (TradeReceiveRequest_o *)Request_object,
            currentEventId,
            (System_Int32_array *)maskPanel,
            receiveNum,
            0,
            0);
          return;
        }
      }
    }
    sub_21FFECC(maskPanel, v8);
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
  bool IsRefillable; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  const MethodInfo *v12; // x1
  EventTradeListViewItem_o *Item; // x22
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_c *klass; // x8
  int32_t name; // w23
  System_Action_int__int__int__o *v17; // x24
  const MethodInfo *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct EventTradeGoodsEntity_o *monitor; // x1
  System_Reflection_MethodBase_o *v26; // x0

  if ( (byte_5932C35 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__int__int__TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__);
    byte_5932C35 = 1;
  }
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !obj )
    goto LABEL_24;
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
LABEL_24:
      sub_21FFECC(maskPanel, obj);
    }
    if ( (v7 & 0x30) != 0 )
    {
      maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj);
      if ( !maskPanel )
        goto LABEL_24;
      IsRefillable = EventTradeListViewItem__get_IsRefillable(
                       (EventTradeListViewItem_o *)maskPanel,
                       (const MethodInfo *)obj);
      v9 = Method_EventTradeListViewItemManager_OnClickReplenishmentButton__;
      if ( IsRefillable )
      {
        if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_21FFC68(Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
        v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
        maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsNumConfirmDialog;
        if ( !maskPanel )
          goto LABEL_24;
        EventTradeSweetsNumConfirmDialogComponent__Init(
          (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
          this->fields.currentEventId,
          0);
        tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
        Item = EventTradeListViewObject__GetItem(obj, v12);
        maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v14);
        if ( !maskPanel )
          goto LABEL_24;
        klass = maskPanel[6].klass;
        if ( !klass )
          goto LABEL_24;
        name = (int32_t)klass->_1.name;
        v17 = (System_Action_int__int__int__o *)sub_21FFEBC(System_Action_int__int__int__TypeInfo);
        System_Action_int__int__int____ctor(
          v17,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
          0);
        if ( !tradeSweetsNumConfirmDialog )
          goto LABEL_24;
        EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, Item, name, v17, 1, 0);
        maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v18);
        if ( !maskPanel )
          goto LABEL_24;
        monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
        this->fields.selectTradeGoodsEntity = monitor;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.selectTradeGoodsEntity,
          (int32_t)monitor,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        goto LABEL_18;
      }
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_21FFC68(Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
      v26 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0, 0);
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
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_5932C39 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventTradeListViewItemManager_TradeReplenishmentResponse__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5932C39 = 1;
  }
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_14;
  EventTradeSweetsNumConfirmDialogComponent__Close(tradeSweetsNumConfirmDialog, 0);
  tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( createNum > 0 )
  {
    if ( tradeSweetsNumConfirmDialog )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 1, 0);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_EventTradeListViewItemManager_TradeReplenishmentResponse__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                     v10,
                                                                                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeStartRequest___);
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
    }
LABEL_14:
    sub_21FFECC(tradeSweetsNumConfirmDialog, *(_QWORD *)&storeIdx);
  }
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_14;
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
  bool IsBuyAble; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  const MethodInfo *v13; // x1
  EventTradeListViewItem_o *Item; // x23
  int32_t v15; // w22
  System_Action_int__int__int__o *v16; // x24
  const MethodInfo *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct EventTradeGoodsEntity_o *monitor; // x1
  System_Reflection_MethodBase_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v29; // x21
  System_String_o *v30; // x22
  System_Action_o *v31; // x23
  int32_t storeIdx; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_5932C33 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__int__int__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickTradeStartDecide__);
    sub_21FFC50(&Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_14003/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_14002/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_5932C33 = 1;
  }
  maskPanel = this->fields.maskPanel;
  storeIdx = 0;
  if ( !maskPanel )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !obj )
    goto LABEL_27;
  displayMode = obj->fields.displayMode;
  if ( displayMode > 5 )
    return;
  v7 = 1 << displayMode;
  if ( (v7 & 0x31) != 0 )
  {
LABEL_20:
    maskPanel = this->fields.maskPanel;
    if ( maskPanel )
    {
      UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
      return;
    }
LABEL_27:
    sub_21FFECC(maskPanel, obj);
  }
  if ( (v7 & 0xC) == 0 )
    return;
  maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj);
  if ( !maskPanel )
    goto LABEL_27;
  IsBuyAble = EventTradeListViewItem__get_IsBuyAble((EventTradeListViewItem_o *)maskPanel, (const MethodInfo *)obj);
  v9 = Method_EventTradeListViewItemManager_OnClickTradeStartButton__;
  if ( !IsBuyAble )
  {
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickTradeStartButton__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    v25 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0, 0);
    goto LABEL_20;
  }
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickTradeStartButton__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_21FFC68(Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
  v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
  if ( EventTradeListViewItemManager__TryGetAvailableStoreIdx(this, &storeIdx, v11) )
  {
    maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsNumConfirmDialog;
    if ( !maskPanel )
      goto LABEL_27;
    EventTradeSweetsNumConfirmDialogComponent__Init(
      (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
      this->fields.currentEventId,
      0);
    tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
    Item = EventTradeListViewObject__GetItem(obj, v13);
    v15 = storeIdx;
    v16 = (System_Action_int__int__int__o *)sub_21FFEBC(System_Action_int__int__int__TypeInfo);
    System_Action_int__int__int____ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_OnClickTradeStartDecide__,
      0);
    if ( !tradeSweetsNumConfirmDialog )
      goto LABEL_27;
    EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, Item, v15, v16, 0, 0);
    maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v17);
    if ( !maskPanel )
      goto LABEL_27;
    monitor = (struct EventTradeGoodsEntity_o *)maskPanel[5].monitor;
    this->fields.selectTradeGoodsEntity = monitor;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectTradeGoodsEntity,
      (int32_t)monitor,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    goto LABEL_20;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_14003/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/, 0);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_14002/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__,
    0);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__OpenNotificationDialog_37293356(
    (CommonUI_o *)Instance,
    v29,
    v30,
    v31,
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
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_5932C38 & 1) == 0 )
  {
    sub_21FFC50(&Method_EventTradeListViewItemManager_TradeStartResponse__);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeStartRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5932C38 = 1;
  }
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_12;
  EventTradeSweetsNumConfirmDialogComponent__Close(tradeSweetsNumConfirmDialog, 0);
  tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)this->fields.maskPanel;
  if ( createNum > 0 )
  {
    if ( tradeSweetsNumConfirmDialog )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 1, 0);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_EventTradeListViewItemManager_TradeStartResponse__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                     v10,
                                                                                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeStartRequest___);
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
    }
LABEL_12:
    sub_21FFECC(tradeSweetsNumConfirmDialog, *(_QWORD *)&storeIdx);
  }
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 0, 0);
}


void EventTradeListViewItemManager__OnClickWithdrawalButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
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
  int v22; // w8
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x21
  EventTradeListViewItem_o *Item; // x22
  System_Action_bool__o *v27; // x23

  if ( (byte_5932C36 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo);
    byte_5932C36 = 1;
  }
  v5 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = obj;
  v14 = (UnityEngine_GameObject_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)obj, v15, v16, v17, v18, v19, v20);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0);
  if ( !*v14 )
    goto LABEL_18;
  klass = (unsigned int)(*v14)[5].klass;
  if ( klass <= 5 )
  {
    v22 = 1 << klass;
    if ( (v22 & 0xD) != 0 )
    {
LABEL_15:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive(maskPanel, 0, 0);
        return;
      }
LABEL_18:
      sub_21FFECC(maskPanel, v7);
    }
    if ( (v22 & 0x30) != 0 )
    {
      v23 = Method_EventTradeListViewItemManager_OnClickWithdrawalButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_21FFC68(Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
      v24 = (System_Reflection_MethodBase_o *)sub_21FFC34(v23, v23[4]);
      OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
      maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
      if ( !maskPanel )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Init(
        (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)maskPanel,
        this->fields.currentEventId,
        0);
      maskPanel = *v14;
      if ( !*v14 )
        goto LABEL_18;
      tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
      Item = EventTradeListViewObject__GetItem((EventTradeListViewObject_o *)maskPanel, v7);
      v27 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
      System_Action_bool____ctor(
        v27,
        (Il2CppObject *)v5,
        Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__,
        0);
      if ( !tradeSweetsWithdrawalConfirmDialog )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Open(tradeSweetsWithdrawalConfirmDialog, Item, v27, 0);
      goto LABEL_15;
    }
  }
}


void EventTradeListViewItemManager__OnClickWithdrawalDecide(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 maskPanel; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  EventTradeListViewItem_o **v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  EventTradeListViewItemManager_o *v21; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x19
  EventTradeListViewItem_o *v25; // x20
  System_Action_bool__o *v26; // x21
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *Request_object; // x21
  int32_t currentEventId; // w19
  EventTradeListViewItem_o *v32; // x8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x9
  System_Int32_array *v34; // x20

  if ( (byte_5932C40 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager_WithdrawalResponse__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_TradeReceiveRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo);
    byte_5932C40 = 1;
  }
  v5 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  v14 = (EventTradeListViewItem_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)item, v15, v16, v17, v18, v19, v20);
  if ( EventTradeListViewItemManager__IsOverPossessionLimit(v21, v22)
    || EventTradeListViewItemManager__IsOverPresentBoxLimit(this, v23) )
  {
    tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
    v25 = *(EventTradeListViewItem_o **)(v5 + 24);
    v26 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v26,
      (Il2CppObject *)v5,
      Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__,
      0);
    if ( tradeSweetsWithdrawalConfirmDialog )
    {
      EventTradeSweetsWithdrawalConfirmDialogComponent__Resume(tradeSweetsWithdrawalConfirmDialog, v25, v26, 0);
      return;
    }
LABEL_18:
    sub_21FFECC(maskPanel, v7);
  }
  maskPanel = (__int64)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !maskPanel )
    goto LABEL_18;
  EventTradeSweetsWithdrawalConfirmDialogComponent__Close(
    (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)maskPanel,
    0);
  maskPanel = (__int64)this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_WithdrawalResponse__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28, v29);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  currentEventId = this->fields.currentEventId;
  maskPanel = sub_21FFD10(int___TypeInfo, 1);
  v32 = *v14;
  if ( !*v14 )
    goto LABEL_18;
  TradeInfo_k__BackingField = v32->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_18;
  v34 = (System_Int32_array *)maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  if ( !*(_DWORD *)(maskPanel + 24) )
    sub_21FFED4(maskPanel);
  *(_DWORD *)(maskPanel + 32) = TradeInfo_k__BackingField->fields.storeIdx;
  maskPanel = EventTradeListViewItem__get_NowCompleteNum(v32, v7);
  if ( !Request_object )
    goto LABEL_18;
  TradeReceiveRequest__beginRequest((TradeReceiveRequest_o *)Request_object, currentEventId, v34, maskPanel, 1, 0);
}


void EventTradeListViewItemManager__OnMoveEnd(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_5932C31 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C31 = 1;
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


void EventTradeListViewItemManager__OpenReconfirmDialog(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BaseDialog_o *tradeSweetsWithdrawalConfirmDialog; // x0
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

  if ( (byte_5932C37 & 1) == 0 )
  {
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo);
    sub_21FFC50(&StringLiteral_14036/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3825/*"COMMON_CONFIRM_EXECUTE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_14035/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_5932C37 = 1;
  }
  v5 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  v14 = (BaseDialog_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)item, v15, v16, v17, v18, v19, v20);
  tradeSweetsWithdrawalConfirmDialog = (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !tradeSweetsWithdrawalConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(tradeSweetsWithdrawalConfirmDialog, 0) )
    return;
  tradeSweetsWithdrawalConfirmDialog = *v14;
  if ( !*v14 )
    goto LABEL_12;
  *(_DWORD *)(v5 + 32) = EventTradeListViewItem__get_NowCompleteNum(
                           (EventTradeListViewItem_o *)tradeSweetsWithdrawalConfirmDialog,
                           v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_14036/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_14035/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3825/*"COMMON_CONFIRM_EXECUTE"*/, 0);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v28,
    (Il2CppObject *)v5,
    Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__,
    0);
  if ( !Instance )
LABEL_12:
    sub_21FFECC(tradeSweetsWithdrawalConfirmDialog, v7);
  CommonUI__OpenConfirmDialog_37291768((CommonUI_o *)Instance, v24, v25, v26, v27, 1, v28, 30, 26, 180.0, 13.0, 0, 0, 0);
}


bool EventTradeListViewItemManager__OpenReplenishmentDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventTradeListViewObject__o *ObjectList; // x20
  System_Func_object__bool__o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Entity; // x21
  EventTradeListViewItem_o *v13; // x20
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x22
  int32_t storeIdx; // w21
  System_Action_int__int__int__o *v17; // x23
  bool v18; // w19

  if ( (byte_5932C44 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__int__int__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__);
    sub_21FFC50(&Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__);
    sub_21FFC50(&System_Func_EventTradeListViewObject__bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C44 = 1;
  }
  if ( !this->fields.selectTradeGoodsEntity )
    return 0;
  ObjectList = EventTradeListViewItemManager__get_ObjectList(this, method);
  v4 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventTradeListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__,
    0);
  v7 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
         (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_22;
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
  if ( !v7
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventTradeListViewObject__GetItem(
                                                                        (EventTradeListViewObject_o *)v7,
                                                                        v9)) == 0 )
  {
LABEL_22:
    sub_21FFECC(Master_object, v9);
  }
  v13 = (EventTradeListViewItem_o *)Master_object;
  if ( !Master_object[2].klass
    || !EventTradeListViewItem__get_IsRefillable((EventTradeListViewItem_o *)Master_object, v9) )
  {
    return 0;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !Master_object )
    goto LABEL_22;
  EventTradeSweetsNumConfirmDialogComponent__Init(
    (EventTradeSweetsNumConfirmDialogComponent_o *)Master_object,
    this->fields.currentEventId,
    0);
  TradeInfo_k__BackingField = v13->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_22;
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  storeIdx = TradeInfo_k__BackingField->fields.storeIdx;
  v17 = (System_Action_int__int__int__o *)sub_21FFEBC(System_Action_int__int__int__TypeInfo);
  System_Action_int__int__int____ctor(
    v17,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
    0);
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_22;
  v18 = 1;
  EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v13, storeIdx, v17, 1, 0);
  return v18;
}


void EventTradeListViewItemManager__OpenRewardDialog(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItemManager_ResData_o *resData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  EventTradeRewardDialogComponent_o *tradeRewardDialog; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  EventTradeRewardDialogComponent_o *v22; // x22
  int32_t eventPointNum; // w23
  int32_t eventPointItemId; // w24
  int32_t currentEventId; // w25
  System_Action_c *v26; // x0
  BattleDropItem_array *resultTradeRewardInfos; // x19
  BattleDropItem_array *v28; // x26
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x20
  System_Action_o *closeCallback; // x27

  if ( (byte_5932C43 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo);
    byte_5932C43 = 1;
  }
  v5 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  tradeRewardDialog = this->fields.tradeRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradeRewardDialogComponent__Init(tradeRewardDialog, 0);
  tradeRewardDialog = (EventTradeRewardDialogComponent_o *)this->fields.tradePointRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradePointRewardDialogComponent__Init((EventTradePointRewardDialogComponent_o *)tradeRewardDialog, v7);
  if ( !resData )
    goto LABEL_14;
  resultEventRewardInfos = resData->fields.resultEventRewardInfos;
  *(_QWORD *)(v5 + 16) = resultEventRewardInfos;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v5 + 16),
    (int32_t)resultEventRewardInfos,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  v22 = this->fields.tradeRewardDialog;
  eventPointNum = resData->fields.eventPointNum;
  eventPointItemId = this->fields.eventPointItemId;
  currentEventId = this->fields.currentEventId;
  v26 = System_Action_TypeInfo;
  resultTradeRewardInfos = resData->fields.resultTradeRewardInfos;
  v28 = *(BattleDropItem_array **)(v5 + 16);
  selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
  *(_DWORD *)(v5 + 32) = (_DWORD)oldUserEventPoint;
  closeCallback = (System_Action_o *)sub_21FFEBC(v26);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v5,
    Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__,
    0);
  if ( !v22 )
LABEL_14:
    sub_21FFECC(tradeRewardDialog, v7);
  EventTradeRewardDialogComponent__Open(
    v22,
    eventPointNum,
    eventPointItemId,
    currentEventId,
    resultTradeRewardInfos,
    v28,
    selectTradeGoodsEntity,
    selectTradeGoodsEntity == 0,
    closeCallback,
    0);
}


void EventTradeListViewItemManager__OpenSweetsNotificationDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t PickupList; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  System_Object_array *v13; // x0
  __int64 v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  System_String_o *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  EventTradePopularSweetsNotificationDialogComponent_o *tradePopularSweetsNotificationDialog; // x19
  EventTradeListViewItem_array *v31; // x21
  System_Action_o *v32; // x22
  EventTradeListViewItemManager_o *v33; // x0
  const MethodInfo *v34; // x1
  int64_t Time; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5932C48 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo);
    byte_5932C48 = 1;
  }
  Time = 0;
  v3 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  PickupList = (int64_t)EventTradeListViewItemManager__GetPickupList(this, v12);
  if ( !PickupList )
    goto LABEL_14;
  v13 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)PickupList,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__);
  *(_QWORD *)(v3 + 24) = v13;
  v14 = v3 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v13, v15, v16, v17, v18, v19, v20);
  PickupList = EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(this, v21);
  if ( (PickupList & 1) != 0 )
    return;
  if ( !*(_QWORD *)v14 )
    goto LABEL_14;
  if ( !*(_QWORD *)(*(_QWORD *)v14 + 24LL) )
    return;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v22);
  Time = NetworkManager__getTime(0);
  v23 = System_Int64__ToString((int64_t)&Time, 0);
  *(_QWORD *)(v3 + 32) = v23;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v23, v24, v25, v26, v27, v28, v29);
  PickupList = (int64_t)this->fields.tradePopularSweetsNotificationDialog;
  if ( !PickupList
    || (EventTradePopularSweetsNotificationDialogComponent__Init(
          (EventTradePopularSweetsNotificationDialogComponent_o *)PickupList,
          0),
        tradePopularSweetsNotificationDialog = this->fields.tradePopularSweetsNotificationDialog,
        v31 = *(EventTradeListViewItem_array **)(v3 + 24),
        v32 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v3,
          Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__,
          0),
        PickupList = EventTradeListViewItemManager__GetUpdateTime(v33, v34),
        !tradePopularSweetsNotificationDialog) )
  {
LABEL_14:
    sub_21FFECC(PickupList, v5);
  }
  EventTradePopularSweetsNotificationDialogComponent__Open(
    tradePopularSweetsNotificationDialog,
    v31,
    v32,
    PickupList,
    0);
}


void EventTradeListViewItemManager__RequestListObject(EventTradeListViewItemManager_o *this, const MethodInfo *method)
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

  if ( (byte_5932C30 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__get_Current__);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnMoveEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeListViewObject__get_Count__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_5932C30 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)EventTradeListViewItemManager__get_ObjectList(this, method);
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
    v6 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      ObjectList,
      v6);
    v12 = 0;
    v13 = &v14;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__) )
    {
      current = v14.fields._current;
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v9, v10);
      EventTradeListViewObject__Init_38989880((EventTradeListViewObject_o *)current, 3, v8, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__);
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
  const MethodInfo *v15; // x5

  v4 = obj;
  if ( (byte_5932C2F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_EventTradeListViewObject__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickReceiveButton__);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
    sub_21FFC50(&Method_EventTradeListViewItemManager_OnMoveEnd__);
    sub_21FFC50(&EventTradeListViewObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C2F = 1;
  }
  if ( v4 )
  {
    naturalAligment = EventTradeListViewObject_TypeInfo->_2.naturalAligment;
    if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (EventTradeListViewObject_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != EventTradeListViewObject_TypeInfo )
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
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0);
    if ( !v4 )
      sub_21FFECC(v8, v9);
    EventTradeListViewObject__Init_38989880((EventTradeListViewObject_o *)v4, 3, v7, v10);
    v11 = (System_Action_object__o *)sub_21FFEBC(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickTradeStartButton__,
      0);
    v12 = (System_Action_object__o *)sub_21FFEBC(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v12,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReceiveButton__,
      0);
    v13 = (System_Action_object__o *)sub_21FFEBC(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__,
      0);
    v14 = (System_Action_object__o *)sub_21FFEBC(System_Action_EventTradeListViewObject__TypeInfo);
    System_Action_object____ctor(
      v14,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__,
      0);
    EventTradeListViewObject__SetOnClickAction(
      (EventTradeListViewObject_o *)v4,
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
  __int64 v2; // x2
  int32_t currentEventId; // w20
  UISprite_o *receiveAllButtonSprite; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *receiveAllButtonLabel; // x20
  __int64 receiveAllButton; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeButtonBlinkEffect_k__BackingField; // x20
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

  if ( (byte_5932C2A & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3488/*"CHECK_TRADE_BUTTON_LABEL"*/);
    sub_21FFC50(&StringLiteral_18218/*"btn_getreward"*/);
    byte_5932C2A = 1;
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
        TradeButtonBlinkEffect_k__BackingField = (Il2CppObject *)assetManager->fields._TradeButtonBlinkEffect_k__BackingField;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)receiveAllButton, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
        v19 = UnityEngine_Object__Instantiate_object__59506996(
                TradeButtonBlinkEffect_k__BackingField,
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
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_21FFECC(receiveAllButton, v10);
  }
}


void EventTradeListViewItemManager__SetTradeObject(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *tradeRewardDialog; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *tradePointRewardDialog; // x20
  __int64 v19; // x2
  struct EventTradeAssetManager_o *v20; // x8
  Il2CppObject *TradePointRewardDialog_k__BackingField; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
  __int64 v31; // x2
  struct EventTradeAssetManager_o *v32; // x8
  Il2CppObject *TradeSweetsNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  const MethodInfo *v41; // x2
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  __int64 v43; // x2
  struct EventTradeAssetManager_o *v44; // x8
  Il2CppObject *TradeSweetsWithdrawalConfirmDialog_k__BackingField; // x20
  Il2CppObject *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  const MethodInfo *v53; // x2
  UnityEngine_Object_o *tradePopularSweetsNotificationDialog; // x20
  __int64 v55; // x2
  struct EventTradeAssetManager_o *v56; // x8
  Il2CppObject *TradePopularSweetsNotificationDialog_k__BackingField; // x20
  Il2CppObject *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  const MethodInfo *v65; // x2
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  __int64 v67; // x2
  struct EventTradeAssetManager_o *v68; // x8
  Il2CppObject *TradePickupInfoBoard_k__BackingField; // x20
  Il2CppObject *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  UnityEngine_GameObject_o *v77; // x0
  const MethodInfo *v78; // x2
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  __int64 v80; // x2
  struct EventTradeAssetManager_o *v81; // x8
  Il2CppObject *v82; // x20
  Il2CppObject *v83; // x0
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  UnityEngine_GameObject_o *v90; // x1
  const MethodInfo *v91; // x2

  if ( (byte_5932C29 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_9813/*"NextTradePickupInfoBoard"*/);
    sub_21FFC50(&StringLiteral_5079/*"CurrentTradePickupInfoBoard"*/);
    byte_5932C29 = 1;
  }
  tradeRewardDialog = (UnityEngine_Object_o *)this->fields.tradeRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeRewardDialog, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_66;
    TradeRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._TradeRewardDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeRewardDialog_k__BackingField,
                                               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___);
    this->fields.tradeRewardDialog = (struct EventTradeRewardDialogComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradeRewardDialog,
      (int32_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    EventTradeListViewItemManager__LocateDialogToTradePanel(this, (BaseDialog_o *)this->fields.tradeRewardDialog, v17);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradePointRewardDialog, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v20 = this->fields.assetManager;
    if ( !v20 )
      goto LABEL_66;
    TradePointRewardDialog_k__BackingField = (Il2CppObject *)v20->fields._TradePointRewardDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v19);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePointRewardDialog_k__BackingField,
                                               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v22 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___);
    this->fields.tradePointRewardDialog = (struct EventTradePointRewardDialogComponent_o *)v22;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradePointRewardDialog,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePointRewardDialog,
      v29);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v19);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsNumConfirmDialog, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v32 = this->fields.assetManager;
    if ( !v32 )
      goto LABEL_66;
    TradeSweetsNumConfirmDialog_k__BackingField = (Il2CppObject *)v32->fields._TradeSweetsNumConfirmDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v31);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsNumConfirmDialog_k__BackingField,
                                               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v34 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___);
    this->fields.tradeSweetsNumConfirmDialog = (struct EventTradeSweetsNumConfirmDialogComponent_o *)v34;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradeSweetsNumConfirmDialog,
      (int32_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsNumConfirmDialog,
      v41);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v31);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsWithdrawalConfirmDialog, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v44 = this->fields.assetManager;
    if ( !v44 )
      goto LABEL_66;
    TradeSweetsWithdrawalConfirmDialog_k__BackingField = (Il2CppObject *)v44->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v43);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsWithdrawalConfirmDialog_k__BackingField,
                                               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v46 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___);
    this->fields.tradeSweetsWithdrawalConfirmDialog = (struct EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v46;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradeSweetsWithdrawalConfirmDialog,
      (int32_t)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog,
      v53);
  }
  tradePopularSweetsNotificationDialog = (UnityEngine_Object_o *)this->fields.tradePopularSweetsNotificationDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v43);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradePopularSweetsNotificationDialog, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v56 = this->fields.assetManager;
    if ( !v56 )
      goto LABEL_66;
    TradePopularSweetsNotificationDialog_k__BackingField = (Il2CppObject *)v56->fields._TradePopularSweetsNotificationDialog_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v55);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePopularSweetsNotificationDialog_k__BackingField,
                                               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v58 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___);
    this->fields.tradePopularSweetsNotificationDialog = (struct EventTradePopularSweetsNotificationDialogComponent_o *)v58;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradePopularSweetsNotificationDialog,
      (int32_t)v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePopularSweetsNotificationDialog,
      v65);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v55);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(currentPickupInfoDispControl, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v68 = this->fields.assetManager;
    if ( !v68 )
      goto LABEL_66;
    TradePickupInfoBoard_k__BackingField = (Il2CppObject *)v68->fields._TradePickupInfoBoard_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v67);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePickupInfoBoard_k__BackingField,
                                               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v70 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
    this->fields.currentPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v70;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentPickupInfoDispControl,
      (int32_t)v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
    gameObject = (UnityEngine_GameObject_o *)this->fields.currentPickupInfoDispControl;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_5079/*"CurrentTradePickupInfoBoard"*/, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.currentPickupInfoDispControl;
    if ( !gameObject )
      goto LABEL_66;
    v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    EventTradeListViewItemManager__LocateObjectToTradePanel(this, v77, v78);
  }
  nextPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.nextPickupInfoDispControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v67);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(nextPickupInfoDispControl, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v81 = this->fields.assetManager;
    if ( v81 )
    {
      v82 = (Il2CppObject *)v81->fields._TradePickupInfoBoard_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v80);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                 v82,
                                                 (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( gameObject )
      {
        v83 = UnityEngine_GameObject__GetComponent_object_(
                gameObject,
                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
        this->fields.nextPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v83;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.nextPickupInfoDispControl,
          (int32_t)v83,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89);
        gameObject = (UnityEngine_GameObject_o *)this->fields.nextPickupInfoDispControl;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_9813/*"NextTradePickupInfoBoard"*/, 0);
            gameObject = (UnityEngine_GameObject_o *)this->fields.nextPickupInfoDispControl;
            if ( gameObject )
            {
              v90 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              EventTradeListViewItemManager__LocateObjectToTradePanel(this, v90, v91);
              return;
            }
          }
        }
      }
    }
LABEL_66:
    sub_21FFECC(gameObject, v6);
  }
}


void EventTradeListViewItemManager__TradeReceiveResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v9; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *v20; // x20
  EventTradeStoreMaster_o *v21; // x20
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2

  if ( (byte_5932C41 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5932C41 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v17);
    v20 = (Il2CppObject *)System_String__Concat_75481624(
                            (System_String_o *)StringLiteral_16395/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16659/*"]"*/,
                            0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18, v19);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v20,
                                                 (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel
      || (v21 = Master_object,
          (Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this->fields.touchPanel,
                                                        0)) == 0)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel) == 0)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0),
          EventTradeListViewItemManager__RequestListObject(this, v22),
          !v21) )
    {
LABEL_15:
      sub_21FFECC(Master_object, v9);
    }
    if ( !LODWORD(v21->fields._MasterName_k__BackingField) )
      sub_21FFED4(Master_object);
    EventTradeListViewItemManager__OpenRewardDialog(
      this,
      *(EventTradeListViewItemManager_ResData_o **)&v21->fields.revision,
      v23);
    ActionExtensions__Call(this->fields.tradeCallback, 0);
  }
}


void EventTradeListViewItemManager__TradeReplenishmentResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v9; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_5932C3D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_5932C3D = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v17);
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
          EventTradeListViewItemManager__RequestListObject(this, v18),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0),
          !playVoiceAction) )
    {
LABEL_15:
      sub_21FFECC(Master_object, v9);
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
  __int64 v6; // x1
  __int64 v7; // x2
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v9; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20

  if ( (byte_5932C3C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_5932C3C = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_13;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v17);
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
          EventTradeListViewItemManager__RequestListObject(this, v18),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeStartVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0),
          !playVoiceAction) )
    {
LABEL_13:
      sub_21FFECC(Master_object, v9);
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
  if ( (byte_5932C3B & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo);
    byte_5932C3B = 1;
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
        v11 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo);
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
          Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__,
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


void EventTradeListViewItemManager__UpdateNoticeButtonDisp(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UISprite_o *tradeNoticeBtnSp; // x0
  __int64 *v4; // x8

  if ( (byte_5932C4D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18237/*"btn_on"*/);
    sub_21FFC50(&StringLiteral_18236/*"btn_off"*/);
    byte_5932C4D = 1;
  }
  tradeNoticeBtnSp = this->fields.tradeNoticeBtnSp;
  if ( !tradeNoticeBtnSp )
    sub_21FFECC(0, method);
  v4 = &StringLiteral_18236/*"btn_off"*/;
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_18237/*"btn_on"*/;
  UISprite__set_spriteName(tradeNoticeBtnSp, (System_String_o *)*v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventTradeListViewItemManager__UpdateReceiveAllButtonState(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventTradeListViewItemManager___c_c *v4; // x0
  System_Collections_Generic_List_T__o *itemList; // x20
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__85_0; // x21
  Il2CppObject *v8; // x22
  struct EventTradeListViewItemManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UIWidget_o *receiveAllButtonLabel; // x0
  __int64 v17; // x1
  struct UICommonButton_o *receiveAllButton; // x8
  char v19; // w20
  __int64 v20; // x1
  float v21; // s0 OVERLAPPED
  float v22; // s3
  float v23; // s1
  float v24; // s2
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21

  if ( (byte_5932C4A & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_ListViewItem___);
    sub_21FFC50(&System_Func_ListViewItem__bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__);
    sub_21FFC50(&EventTradeListViewItemManager___c_TypeInfo);
    byte_5932C4A = 1;
  }
  v4 = EventTradeListViewItemManager___c_TypeInfo;
  itemList = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  if ( !*(&EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, method, v2);
    v4 = EventTradeListViewItemManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__85_0 = (System_Func_object__bool__o *)static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__85_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ListViewItem__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__85_0,
      v8,
      Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__,
      0);
    v9 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    v9->__9__85_0 = (struct System_Func_ListViewItem__bool__o *)_9__85_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__85_0, (int32_t)_9__85_0, v10, v11, v12, v13, v14, v15);
  }
  receiveAllButtonLabel = (UIWidget_o *)BasicHelper__Any_object_(
                                          itemList,
                                          (System_Func_T__bool__o *)_9__85_0,
                                          (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ListViewItem___);
  receiveAllButton = this->fields.receiveAllButton;
  if ( !receiveAllButton )
    goto LABEL_22;
  v19 = (char)receiveAllButtonLabel;
  v20 = ((unsigned __int8)receiveAllButtonLabel & 1) != 0 ? 0LL : 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, const MethodInfo *))receiveAllButton->klass->vtable._14_SetState.methodPtr)(
    this->fields.receiveAllButton,
    v20,
    1,
    receiveAllButton->klass->vtable._14_SetState.method);
  receiveAllButtonLabel = (UIWidget_o *)this->fields.receiveAllButtonLabel;
  if ( !receiveAllButtonLabel )
    goto LABEL_22;
  v21 = 0.5;
  v22 = 1.0;
  if ( (v19 & 1) != 0 )
    v21 = 1.0;
  v23 = v21;
  v24 = v21;
  UIWidget__set_color(receiveAllButtonLabel, *(UnityEngine_Color_o *)&v21, 0);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0, 0) )
  {
    receiveAllButtonLabel = (UIWidget_o *)this->fields.tradeButtonBlinkEffect;
    if ( receiveAllButtonLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButtonLabel, v19 & 1, 0);
      return;
    }
LABEL_22:
    sub_21FFECC(receiveAllButtonLabel, v17);
  }
}


void EventTradeListViewItemManager__UpdateTradeQuoteLb(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventTradeListViewItemManager_o *v3; // x19
  struct EventTradeStoreEntity_array *tradeStoreEntities; // x8
  int max_length; // w22
  __int64 v6; // x2
  int v7; // w8
  int v8; // w21
  UILabel_o *tradeQuotaLb; // x19
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
  if ( (byte_5932C50 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventTradeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_14023/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/);
    this = (EventTradeListViewItemManager_o *)sub_21FFC50(&StringLiteral_14022/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/);
    byte_5932C50 = 1;
  }
  tradeStoreEntities = v3->fields.tradeStoreEntities;
  usedStoreIdx = 0;
  entity = 0;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  this = (EventTradeListViewItemManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !this )
    goto LABEL_20;
  if ( !UserEventTradeMaster__TryGetEntity((UserEventTradeMaster_o *)this, &entity, v3->fields.currentEventId, 0) )
    goto LABEL_12;
  this = (EventTradeListViewItemManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  this = (EventTradeListViewItemManager_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0);
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
  tradeQuotaLb = v3->fields.tradeQuotaLb;
  v10 = (System_String_o **)(max_length == v7 ? &StringLiteral_14023/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_14022/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/);
  v11 = *v10;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v6);
  v12 = LocalizationManager__Get(v11, 0);
  v16 = v8;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v16);
  v15 = max_length;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v15);
  this = (EventTradeListViewItemManager_o *)System_String__Format_75484576(v12, v13, v14, 0);
  if ( !tradeQuotaLb )
LABEL_20:
    sub_21FFECC(this, method);
  UILabel__set_text(tradeQuotaLb, (System_String_o *)this, 0);
}


void EventTradeListViewItemManager__WithdrawalResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  EventTradeStoreMaster_o *Master_object; // x0
  EventTradeListViewItemManager_ResData_o *v9; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *v20; // x20
  EventTradeStoreMaster_o *v21; // x20
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  struct BattleDropItem_array *resultTradeRewardInfos; // x8

  if ( (byte_5932C42 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeStoreMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_5932C42 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v5);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_19;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tradeStoreEntities,
      (int32_t)OpenTradeStoreEntityArray,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v17);
    v20 = (Il2CppObject *)System_String__Concat_75481624(
                            (System_String_o *)StringLiteral_16395/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16659/*"]"*/,
                            0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v18, v19);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v20,
                                                 (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel )
      goto LABEL_19;
    v21 = Master_object;
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
    EventTradeListViewItemManager__RequestListObject(this, v22);
    if ( !v21 )
      goto LABEL_19;
    if ( !LODWORD(v21->fields._MasterName_k__BackingField) )
      sub_21FFED4(Master_object);
    v9 = *(EventTradeListViewItemManager_ResData_o **)&v21->fields.revision;
    if ( !v9 || (resultTradeRewardInfos = v9->fields.resultTradeRewardInfos) == 0 )
LABEL_19:
      sub_21FFECC(Master_object, v9);
    if ( resultTradeRewardInfos->max_length )
      EventTradeListViewItemManager__OpenRewardDialog(this, v9, v23);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_c *v14; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  System_Action_o *v16; // x20

  if ( (byte_5932C51 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo);
    byte_5932C51 = 1;
  }
  v5 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = System_Action_TypeInfo,
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        *(_BYTE *)(v5 + 16) = isOpenPresentBox,
        v16 = (System_Action_o *)sub_21FFEBC(v14),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__,
          0),
        !presentBoxOverDlg) )
  {
    sub_21FFECC(v6, v7);
  }
  PresentBoxOverDialog__Close_38898400(presentBoxOverDlg, v16, 0);
}


void EventTradeListViewItemManager___OnClickTradeStartButton_b__62_0(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_21FFECC(0, method);
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
    sub_21FFECC(this, x);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  EventTradeListViewItemManager___c_c *v15; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__48_0; // x22
  Il2CppObject *v19; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_object__o *v28; // x21
  System_Action_object__o *v29; // x22

  if ( (byte_5932C28 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_GameObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_21FFC50(&System_Func_GameObject__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventTradeListViewObject__TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo);
    sub_21FFC50(&EventTradeListViewItemManager___c_TypeInfo);
    byte_5932C28 = 1;
  }
  v3 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventTradeListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__);
  if ( !v3 )
    goto LABEL_12;
  *(_QWORD *)(v3 + 16) = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  v15 = EventTradeListViewItemManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !*(&EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, v13, v14);
    v15 = EventTradeListViewItemManager___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__48_0 = (System_Func_object__bool__o *)static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v13, v14);
      static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__48_0,
      v19,
      Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__,
      0);
    v20 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    v20->__9__48_0 = (struct System_Func_GameObject__bool__o *)_9__48_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__48_0, (int32_t)_9__48_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__48_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v28 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v27,
                                                       (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v29 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v3,
    Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__,
    0);
  if ( !v28 )
LABEL_12:
    sub_21FFECC(v5, v6);
  System_Collections_Generic_List_object___ForEach(
    v28,
    (System_Action_T__o *)v29,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932C52 & 1) == 0 )
  {
    sub_21FFC50(&EventTradeListViewItemManager___c_TypeInfo);
    byte_5932C52 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventTradeListViewItemManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradeListViewItemManager___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventTradeListViewItemManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_5932C55 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo);
    byte_5932C55 = 1;
  }
  v4 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
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

  if ( (byte_5932C56 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo);
    byte_5932C56 = 1;
  }
  v4 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
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

  if ( (byte_5932C57 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo);
    byte_5932C57 = 1;
  }
  v4 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4
    || (*(_DWORD *)(v4 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__,
          0),
        !Instance) )
  {
    sub_21FFECC(v5, v6);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v8, 0);
}


bool EventTradeListViewItemManager___c___IsOverPresentBoxLimit_b__87_0(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 naturalAligment; // x9
  __int64 v6; // x8

  if ( (byte_5932C58 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_21FFC50(&EventTradeListViewItem_TypeInfo);
    byte_5932C58 = 1;
  }
  if ( !item )
LABEL_12:
    sub_21FFECC(this, item);
  naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventTradeListViewItem_TypeInfo )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_220024C(item, EventTradeListViewItem_TypeInfo, method, v3);
    goto LABEL_12;
  }
  v6 = *(_QWORD *)&item[1].fields.sortIndex;
  if ( !v6 )
    return 0;
  if ( *(int *)(v6 + 32) <= 0 )
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
  __int64 v3; // x3
  __int64 naturalAligment; // x9

  if ( (byte_5932C59 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_21FFC50(&EventTradeListViewItem_TypeInfo);
    byte_5932C59 = 1;
  }
  if ( !item )
LABEL_8:
    sub_21FFECC(this, item);
  naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventTradeListViewItem_TypeInfo )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_220024C(item, EventTradeListViewItem_TypeInfo, method, v3);
    goto LABEL_8;
  }
  return (EventTradeGoodsEntity_o *)item[1].monitor;
}


bool EventTradeListViewItemManager___c___UpdateReceiveAllButtonState_b__85_0(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  const MethodInfo *v6; // x1
  __int64 v7; // x8

  if ( (byte_5932C54 & 1) == 0 )
  {
    sub_21FFC50(&EventTradeListViewItem_TypeInfo);
    byte_5932C54 = 1;
  }
  if ( !item )
    return 0;
  naturalAligment = EventTradeListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventTradeListViewItem_TypeInfo )
    return 0;
  EventTradeListViewItem__UpdateTradeUserInfo((EventTradeListViewItem_o *)item, (const MethodInfo *)item);
  v7 = *(_QWORD *)&item[1].fields.sortIndex;
  if ( !v7 )
    return 0;
  if ( *(int *)(v7 + 32) <= 0 )
    return EventTradeListViewItem__get_NowCompleteNum((EventTradeListViewItem_o *)item, v6) > 0;
  return 1;
}


bool EventTradeListViewItemManager___c___get_ObjectList_b__48_0(
        EventTradeListViewItemManager___c_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  if ( (byte_5932C53 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C53 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  EventTradeListViewItemManager___c__DisplayClass48_0_o *v15; // x1
  Il2CppClass **v16; // x0

  v4 = this;
  if ( (byte_5932C5A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___);
    this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_EventTradeListViewObject__Add__);
    byte_5932C5A = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          go,
                                                                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___),
        !list)
    || (items = list->fields._items,
        v13 = Method_System_Collections_Generic_List_EventTradeListViewObject__Add__,
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
    sub_21FFECC(this, value);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo_476E8C0 *v14; // x0
  Il2CppObject *Instance; // x19
  System_Action_o *v16; // x20

  if ( (byte_5932C5B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__);
    sub_21FFC50(&EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo);
    byte_5932C5B = 1;
  }
  v5 = sub_21FFEBC(EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo);
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
          Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__,
          0),
        !Instance) )
  {
    sub_21FFECC(v6, v7);
  }
  CommonUI__CloseConfirmDialog_37292452((CommonUI_o *)Instance, v16, 0);
}


void EventTradeListViewItemManager___c__DisplayClass66_0___OpenReconfirmDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventTradeListViewItemManager___c__DisplayClass66_1_o *v8; // x19
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *CS___8__locals1; // x8
  struct EventTradeListViewItem_o *item; // x9
  struct EventTradeListViewItemManager_o *_4__this; // x8
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v13; // x8
  int32_t oldCompleteNum; // w20
  const MethodInfo *v15; // x2
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v16; // x8
  struct EventTradeListViewItemManager_o *v17; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x21
  System_String_o *v21; // x20
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v22; // x23
  EventTradeListViewItemManager___c__DisplayClass66_1_o *v23; // x19
  System_Action_o *_9__2; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  v8 = this;
  if ( (byte_5932C5C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_21FFC50(&StringLiteral_14021/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/);
    byte_5932C5C = 1;
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
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v13->fields.item;
    if ( !this )
      goto LABEL_24;
    oldCompleteNum = v13->fields.oldCompleteNum;
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)EventTradeListViewItem__get_NowCompleteNum(
                                                                      (EventTradeListViewItem_o *)this,
                                                                      method);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v16 = v8->fields.CS___8__locals1;
      if ( v16 )
      {
        this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v16->fields.__4__this;
        if ( this )
        {
          EventTradeListViewItemManager__OnClickWithdrawalDecide(
            (EventTradeListViewItemManager_o *)this,
            v16->fields.item,
            v15);
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
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_14021/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
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
        Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__,
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
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v17->fields.tradeSweetsWithdrawalConfirmDialog;
    if ( !this )
      goto LABEL_24;
    EventTradeSweetsWithdrawalConfirmDialogComponent__Close(
      (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)this,
      0);
  }
}


void EventTradeListViewItemManager___c__DisplayClass70_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool EventTradeListViewItemManager___c__DisplayClass70_0___TryGetAvailableStoreIdx_b__0(
        EventTradeListViewItemManager___c__DisplayClass70_0_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct EventTradeStoreEntity_o *storeEntity; // x8

  storeEntity = this->fields.storeEntity;
  if ( !storeEntity )
    sub_21FFECC(this, *(_QWORD *)&idx);
  return storeEntity->fields.idx == idx;
}


void EventTradeListViewItemManager___c__DisplayClass75_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(_4__this, onDecide);
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
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v3; // x20
  BattleDropItem_array *resultEventRewardInfos; // x19
  struct EventTradeListViewItemManager_o *_4__this; // x8
  EventTradePointRewardDialogComponent_o *tradePointRewardDialog; // x21
  int32_t eventPointItemId; // w22
  System_Action_o *_9__1; // x24
  int32_t currentEventId; // w23
  struct EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x26
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Action_BattleDropItem____int__Action__o *rewardDialogCallBack; // x23
  System_Action_o *_9__2; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  v3 = this;
  if ( (byte_5932C5D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__);
    byte_5932C5D = 1;
  }
  resultEventRewardInfos = v3->fields.resultEventRewardInfos;
  if ( !resultEventRewardInfos )
    goto LABEL_15;
  _4__this = v3->fields.__4__this;
  if ( resultEventRewardInfos->max_length )
  {
    if ( _4__this )
    {
      tradePointRewardDialog = _4__this->fields.tradePointRewardDialog;
      eventPointItemId = _4__this->fields.eventPointItemId;
      _9__1 = v3->fields.__9__1;
      currentEventId = _4__this->fields.currentEventId;
      selectTradeGoodsEntity = _4__this->fields.selectTradeGoodsEntity;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)v3,
          Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__,
          0);
        v3->fields.__9__1 = _9__1;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1,
          (int32_t)_9__1,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      if ( tradePointRewardDialog )
      {
        EventTradePointRewardDialogComponent__Open(
          tradePointRewardDialog,
          eventPointItemId,
          currentEventId,
          resultEventRewardInfos,
          selectTradeGoodsEntity == 0,
          _9__1,
          v2);
        return;
      }
    }
LABEL_15:
    sub_21FFECC(this, method);
  }
  if ( !_4__this )
    goto LABEL_15;
  rewardDialogCallBack = _4__this->fields.rewardDialogCallBack;
  _9__2 = v3->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__,
      0);
    v3->fields.__9__2 = _9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__2, (int32_t)_9__2, v19, v20, v21, v22, v23, v24);
  }
  if ( !rewardDialogCallBack )
    goto LABEL_15;
  ((void (__fastcall *)(intptr_t, BattleDropItem_array *, _QWORD, System_Action_o *, intptr_t))rewardDialogCallBack->fields.invoke_impl)(
    rewardDialogCallBack->fields.method_code,
    resultEventRewardInfos,
    0,
    _9__2,
    rewardDialogCallBack->fields.method);
}


void EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__1(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v2; // x19
  struct EventTradeListViewItemManager_o *_4__this; // x8
  struct System_Action_BattleDropItem____int__Action__o *rewardDialogCallBack; // x23
  System_Action_o *_9__3; // x21
  struct BattleDropItem_array *resultEventRewardInfos; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v2 = this;
  if ( (byte_5932C5E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__);
    byte_5932C5E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  rewardDialogCallBack = _4__this->fields.rewardDialogCallBack;
  _9__3 = v2->fields.__9__3;
  resultEventRewardInfos = v2->fields.resultEventRewardInfos;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__,
      0);
    v2->fields.__9__3 = _9__3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v7, v8, v9, v10, v11, v12);
  }
  if ( !rewardDialogCallBack )
LABEL_8:
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, struct BattleDropItem_array *, _QWORD, System_Action_o *, intptr_t))rewardDialogCallBack->fields.invoke_impl)(
    rewardDialogCallBack->fields.method_code,
    resultEventRewardInfos,
    0,
    _9__3,
    rewardDialogCallBack->fields.method);
}


void EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v3; // x19
  System_Action_o *_9__5; // x23
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_5932C60 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__);
    byte_5932C60 = 1;
  }
  _9__5 = v3->fields.__9__5;
  _4__this = v3->fields.__4__this;
  oldEventPoint = v3->fields.oldEventPoint;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__,
      0);
    v3->fields.__9__5 = _9__5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__5, (int32_t)_9__5, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
  EventTradeListViewItemManager__CheckOpenQuest(_4__this, oldEventPoint, _9__5, v2);
}


void EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__3(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v3; // x19
  System_Action_o *_9__4; // x23
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_5932C5F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_21FFC50(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__);
    byte_5932C5F = 1;
  }
  _9__4 = v3->fields.__9__4;
  _4__this = v3->fields.__4__this;
  oldEventPoint = v3->fields.oldEventPoint;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v3,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__,
      0);
    v3->fields.__9__4 = _9__4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__4, (int32_t)_9__4, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
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
      sub_21FFECC(_4__this, method);
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
      sub_21FFECC(_4__this, method);
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
  __int64 v3; // x1
  __int64 v4; // x2
  void *Master_object; // x0
  __int64 v6; // x1
  struct EventTradeListViewItemManager_o *_4__this; // x8
  __int64 v8; // x2
  long double v9; // q0
  struct EventTradeListViewItem_array *itemList; // x8
  EventTradeListViewItem_o *v11; // x8
  void *v12; // x2
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x0
  struct EventTradeListViewItemManager_o *v16; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x9

  if ( (byte_5932C61 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_string___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventTradeGoodsMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_15134/*"TradeNotificationDialogOpenTime"*/);
    byte_5932C61 = 1;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_15134/*"TradeNotificationDialogOpenTime"*/, this->fields.openTime, 0);
  UnityEngine_PlayerPrefs__Save(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !Master_object )
    goto LABEL_26;
  Master_object = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                    (EventTradeGoodsMaster_o *)Master_object,
                    _4__this->fields.currentEventId,
                    0);
  if ( Master_object && *((_DWORD *)Master_object + 6) )
  {
    itemList = this->fields.itemList;
    if ( itemList )
    {
      if ( !LODWORD(itemList->max_length) )
        sub_21FFED4(Master_object);
      v11 = itemList->m_Items[0];
      if ( v11 )
      {
        Master_object = v11->fields._TradeGoodsEntity_k__BackingField;
        if ( Master_object )
        {
          Master_object = EventTradeGoodsEntity__GetTradePickupVoiceIds((EventTradeGoodsEntity_o *)Master_object, 0);
          v12 = Master_object;
          goto LABEL_23;
        }
      }
    }
LABEL_26:
    sub_21FFECC(Master_object, v6);
  }
  v13 = Method_System_Array_Empty_string___;
  v14 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v14 )
  {
    sub_2237B54(Method_System_Array_Empty_string___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_2237AF8(v9);
  if ( !*(_DWORD *)(v15 + 228) )
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(v15, v6, v8);
  Master_object = *(void **)(v13[7] + 16LL);
  if ( (*(_WORD *)((_BYTE *)Master_object + 309) & 1) == 0 )
    Master_object = (void *)sub_2237AF8(v9);
  v12 = (void *)**((_QWORD **)Master_object + 23);
LABEL_23:
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_26;
  playVoiceAction = v16->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_26;
  ((void (__fastcall *)(intptr_t, _QWORD, void *, _QWORD, intptr_t))playVoiceAction->fields.invoke_impl)(
    playVoiceAction->fields.method_code,
    (unsigned int)v16->fields.svtId,
    v12,
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
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w1
  Il2CppObject *v9; // x3
  Il2CppObject *Instance; // x19

  if ( (byte_5932C62 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    sub_21FFC50(&StringLiteral_13235/*"ServantCombine"*/);
    byte_5932C62 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427172(v5, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 0, 0);
      if ( Instance )
      {
        v6 = Instance;
        v8 = 22;
        goto LABEL_12;
      }
LABEL_15:
      sub_21FFECC(v6, v7);
    case 1:
      v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v6 )
      {
        v8 = 71;
        v9 = 0;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v6, v8, 1, v9, 0);
        return;
      }
      goto LABEL_15;
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13235/*"ServantCombine"*/, 0);
      if ( v4 )
      {
        v6 = v4;
        v8 = 32;
LABEL_12:
        v9 = (Il2CppObject *)v5;
        goto LABEL_13;
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
  Il2CppObject *v4; // x19
  SceneJumpInfo_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  AvalonSceneManager_o *v8; // x0
  int32_t v9; // w1
  Il2CppObject *v10; // x19
  Il2CppObject *Instance; // x19

  if ( (byte_5932C63 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13240/*"ServantEquipList"*/);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    sub_21FFC50(&StringLiteral_13239/*"ServantEQCombine"*/);
    byte_5932C63 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427172(v5, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 1, 0);
      if ( Instance )
      {
        v8 = (AvalonSceneManager_o *)Instance;
        v9 = 22;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13240/*"ServantEquipList"*/, 0);
      if ( v10 )
      {
        v8 = (AvalonSceneManager_o *)v10;
        v9 = 71;
        goto LABEL_12;
      }
LABEL_14:
      sub_21FFECC(v6, v7);
    case 0:
      v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v5 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427084(v5, (System_String_o *)StringLiteral_13239/*"ServantEQCombine"*/, 0);
      if ( v4 )
      {
        v8 = (AvalonSceneManager_o *)v4;
        v9 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene(v8, v9, 1, (Il2CppObject *)v5, 0);
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

  if ( (byte_5932C64 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&StringLiteral_13198/*"SellServant"*/);
    byte_5932C64 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v4 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_48427172(v4, (System_String_o *)StringLiteral_13198/*"SellServant"*/, 2, 0);
    if ( !Instance )
      sub_21FFECC(v5, v6);
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
      sub_21FFECC(this, method);
    boxOverDlgCloseCallBack = _4__this->fields.boxOverDlgCloseCallBack;
    if ( boxOverDlgCloseCallBack )
      ActionExtensions__Call(boxOverDlgCloseCallBack, 0);
  }
}
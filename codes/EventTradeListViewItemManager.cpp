void __fastcall EventTradeListViewItemManager___ctor(EventTradeListViewItemManager_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CURRENT_PICKUP_INFO_BOARD_POS.fields.x = xmmword_BD29E0;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager__CheckIsSerializeFieldNotNull(
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
  if ( (byte_4B112A7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_var, method, v2);
    sub_1BCA7E0(&UnityEngine_SerializeField_var, v4, v5);
    targetObj = (Il2CppObject *)sub_1BCA7E0(&System_Type_TypeInfo, v6, v7);
    byte_4B112A7 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager__CheckOpenQuest(
        EventTradeListViewItemManager_o *this,
        int32_t oldEventPoint,
        System_Action_o *callback,
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
  int32_t currentEventId; // w22
  Il2CppObject *Instance; // x0
  int32_t v17; // w22
  CommonUI_o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1

  if ( (byte_4B112A3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&oldEventPoint, callback);
    sub_1BCA7E0(&EventInfoTradeRankControl_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B112A3 = 1;
  }
  currentEventId = this->fields.currentEventId;
  if ( !EventInfoTradeRankControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoTradeRankControl_TypeInfo, *(_QWORD *)&oldEventPoint);
  EventInfoTradeRankControl__UpdateOldPoint(currentEventId, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = this->fields.currentEventId;
  v18 = (CommonUI_o *)Instance;
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_EventTradeListViewItemManager__CheckOpenQuest_b__80_0__, 0LL);
  if ( !v18 )
    sub_1BCAA3C(v23, v24);
  if ( !CommonUI__CheckOpenQuestByEventPoint(
          v18,
          v17,
          oldEventPoint,
          v22,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x25
  int max_length; // w8
  unsigned int v20; // w26
  EventTradeGoodsEntity_o *v21; // x21
  int32_t id; // w22
  int32_t currentEventId; // w23
  System_Action_o *v24; // x24
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  EventTradeListViewItem_o *v28; // x20
  const MethodInfo *v29; // x5
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  struct EventTradeGoodsEntity_array *v34; // x8
  UILabel_o *emptyMessageLabel; // x19

  if ( (byte_4B1128A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__, v4, v5);
    sub_1BCA7E0(&EventTradeListViewItem_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/, v12, v13);
    byte_4B1128A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_20;
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
      currentEventId = this->fields.currentEventId;
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
      System_Action___ctor(
        v24,
        (Il2CppObject *)this,
        Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
        0LL);
      v28 = (EventTradeListViewItem_o *)sub_1BCAA2C(EventTradeListViewItem_TypeInfo, v25, v26, v27);
      EventTradeListViewItem___ctor(v28, id, v21, currentEventId, v24, v29);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v28,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v28;
        itemList = (System_Collections_Generic_List_object__o *)sub_1BCA784(v33 + 4, v28);
      }
      max_length = tradeGoodsEntities->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_14;
    }
LABEL_20:
    sub_1BCAA3C(itemList, v15);
  }
LABEL_14:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckVerticalScrollBar((ListViewManager_o *)this, 0LL);
  v34 = this->fields.tradeGoodsEntities;
  if ( !v34 )
    goto LABEL_20;
  if ( !*(_QWORD *)&v34->max_length )
  {
    emptyMessageLabel = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    itemList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_5787/*"EVENT_REWARD_SHOP_LIST_EMPTY"*/,
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
  __int64 v2; // x2
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  EventTradeAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *tradeRewardDialog; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *tradePointRewardDialog; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x21
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x21
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  struct EventTradePickupInfoDispControl_o **p_nextPickupInfoDispControl; // x19
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x20

  if ( (byte_4B1128C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1128C = 1;
  }
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventTradeAssetManager__Release(assetManager, this->fields.currentEventId, v5);
  tradeRewardDialog = (UnityEngine_Object_o *)this->fields.tradeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(tradeRewardDialog, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.tradeRewardDialog;
    if ( !v9 )
      goto LABEL_48;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    this->fields.tradeRewardDialog = 0LL;
    sub_1BCA784(&this->fields.tradeRewardDialog, 0LL);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(tradePointRewardDialog, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.tradePointRewardDialog;
    if ( !v9 )
      goto LABEL_48;
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__Destroy_70154244(v14, 0LL);
    this->fields.tradePointRewardDialog = 0LL;
    sub_1BCA784(&this->fields.tradePointRewardDialog, 0LL);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(tradeSweetsNumConfirmDialog, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.tradeSweetsNumConfirmDialog;
    if ( !v9 )
      goto LABEL_48;
    v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    UnityEngine_Object__Destroy_70154244(v17, 0LL);
    this->fields.tradeSweetsNumConfirmDialog = 0LL;
    sub_1BCA784(&this->fields.tradeSweetsNumConfirmDialog, 0LL);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(tradeSweetsWithdrawalConfirmDialog, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
    if ( !v9 )
      goto LABEL_48;
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    UnityEngine_Object__Destroy_70154244(v20, 0LL);
    this->fields.tradeSweetsWithdrawalConfirmDialog = 0LL;
    sub_1BCA784(&this->fields.tradeSweetsWithdrawalConfirmDialog, 0LL);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(currentPickupInfoDispControl, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.currentPickupInfoDispControl;
    if ( !v9 )
      goto LABEL_48;
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    UnityEngine_Object__Destroy_70154244(v23, 0LL);
    this->fields.currentPickupInfoDispControl = 0LL;
    sub_1BCA784(&this->fields.currentPickupInfoDispControl, 0LL);
  }
  nextPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.nextPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(nextPickupInfoDispControl, 0LL, 0LL) )
  {
    p_nextPickupInfoDispControl = &this->fields.nextPickupInfoDispControl;
    v9 = (UnityEngine_Component_o *)*p_nextPickupInfoDispControl;
    if ( *p_nextPickupInfoDispControl )
    {
      v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      UnityEngine_Object__Destroy_70154244(v27, 0LL);
      *p_nextPickupInfoDispControl = 0LL;
      sub_1BCA784(p_nextPickupInfoDispControl, 0LL);
      return;
    }
LABEL_48:
    sub_1BCAA3C(v9, v8);
  }
}


void __fastcall EventTradeListViewItemManager__DispPickupInfoBoard(
        EventTradeListViewItemManager_o *this,
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
  Il2CppObject *Master_object; // x20
  int64_t Time; // x21
  __int64 v15; // x1
  int64_t Time_39269384; // x0
  const MethodInfo *v17; // x1
  int64_t v18; // x22
  bool EntityListTargetTime; // w21
  char v20; // w20
  const MethodInfo *v21; // x4
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *infoPanel; // x20
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *svtIndexPanel; // x20
  UnityEngine_GameObject_o *v27; // x0
  uint64_t dateData; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *v29; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8

  if ( (byte_4B112AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradePickupMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B112AD = 1;
  }
  pickupEntityList = 0LL;
  v29 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Time = NetworkManager__getTime(0LL);
  dateData = NetworkManager__getDateTime(0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v15);
  v31.fields._dateData = (uint64_t)&dateData;
  v32.fields._dateData = System_DateTime__AddDays(v31, 1.0, 0LL).fields._dateData;
  Time_39269384 = NetworkManager__getTime_39269384(v32, 0LL);
  if ( !Master_object )
    goto LABEL_32;
  v18 = Time_39269384;
  EntityListTargetTime = EventTradePickupMaster__TryGetEntityListTargetTime(
                           (EventTradePickupMaster_o *)Master_object,
                           &pickupEntityList,
                           this->fields.currentEventId,
                           Time,
                           0LL);
  Time_39269384 = EventTradePickupMaster__TryGetEntityListTargetTime(
                    (EventTradePickupMaster_o *)Master_object,
                    &v29,
                    this->fields.currentEventId,
                    v18,
                    0LL);
  if ( !this->fields.currentPickupInfoDispControl )
    goto LABEL_32;
  v20 = Time_39269384;
  EventTradePickupInfoDispControl__Init(this->fields.currentPickupInfoDispControl, v17);
  Time_39269384 = (int64_t)this->fields.nextPickupInfoDispControl;
  if ( !Time_39269384 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__Init((EventTradePickupInfoDispControl_o *)Time_39269384, v17);
  if ( !EntityListTargetTime )
  {
    if ( (v20 & 1) == 0 )
      return;
LABEL_18:
    Time_39269384 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_39269384 )
      goto LABEL_32;
    EventTradePickupInfoDispControl__SetUi(
      (EventTradePickupInfoDispControl_o *)Time_39269384,
      this->fields.currentEventId,
      v29,
      0,
      v21);
    Time_39269384 = (int64_t)this->fields.nextPickupInfoDispControl;
    if ( !Time_39269384 )
      goto LABEL_32;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_39269384, 0LL);
    GameObjectExtensions__SetLocalPosition_34330940(gameObject, this->fields.NEXT_PICKUP_INFO_BOARD_POS, 0LL);
    goto LABEL_21;
  }
  Time_39269384 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_39269384 )
    goto LABEL_32;
  EventTradePickupInfoDispControl__SetUi(
    (EventTradePickupInfoDispControl_o *)Time_39269384,
    this->fields.currentEventId,
    pickupEntityList,
    1,
    v21);
  Time_39269384 = (int64_t)this->fields.currentPickupInfoDispControl;
  if ( !Time_39269384 )
    goto LABEL_32;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_39269384, 0LL);
  GameObjectExtensions__SetLocalPosition_34330940(v22, this->fields.CURRENT_PICKUP_INFO_BOARD_POS, 0LL);
  if ( (v20 & 1) != 0 )
    goto LABEL_18;
LABEL_21:
  infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(infoPanel, 0LL, 0LL) )
  {
    Time_39269384 = (int64_t)this->fields.infoPanel;
    if ( !Time_39269384 )
      goto LABEL_32;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_39269384, 0LL);
    GameObjectExtensions__SetLocalPositionY(v25, -33.0, 0LL);
  }
  svtIndexPanel = (UnityEngine_Object_o *)this->fields.svtIndexPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(svtIndexPanel, 0LL, 0LL) )
  {
    Time_39269384 = (int64_t)this->fields.svtIndexPanel;
    if ( Time_39269384 )
    {
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time_39269384, 0LL);
      GameObjectExtensions__SetLocalPositionY(v27, -92.0, 0LL);
      return;
    }
LABEL_32:
    sub_1BCAA3C(Time_39269384, v17);
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_object__o *v33; // x19
  __int64 v34; // x1
  Il2CppObject *Master_object; // x0
  __int64 v36; // x1
  int32_t currentEventId; // w21
  EventTradePickupMaster_o *v38; // x22
  int64_t Time; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x21
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *Entity; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  EventTradeGoodsEntity_o *v49; // x23
  int32_t klass; // w25
  int32_t v51; // w24
  System_Action_o *v52; // x26
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  EventTradeListViewItem_o *v56; // x22
  const MethodInfo *v57; // x5
  __int64 v58; // x0
  __int64 v59; // x1
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventTradePickupEntity__o *pickupEntityList; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B1128B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradePickupMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__, v19, v20);
    sub_1BCA7E0(&EventTradeListViewItem_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeListViewItem__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTradeListViewItem__TypeInfo, v29, v30);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v31, v32);
    byte_4B1128B = 1;
  }
  pickupEntityList = 0LL;
  memset(&v66, 0, sizeof(v66));
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTradeListViewItem__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTradeListViewItem___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradePickupMaster___);
  currentEventId = this->fields.currentEventId;
  v38 = (EventTradePickupMaster_o *)Master_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36);
  Time = NetworkManager__getTime(0LL);
  if ( !v38 )
    goto LABEL_29;
  if ( !EventTradePickupMaster__TryGetEntityListTargetTime(v38, &pickupEntityList, currentEventId, Time, 0LL) )
    return (System_Collections_Generic_List_EventTradeListViewItem__o *)v33;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v41);
  Time = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !pickupEntityList )
LABEL_29:
    sub_1BCAA3C(Time, v40);
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)Time;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_object__o *)pickupEntityList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventTradePickupEntity__GetEnumerator__);
  v66 = v65;
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__MoveNext__);
    if ( !v43 )
      break;
    if ( !v66.fields._current )
      sub_1BCAA3C(v43, v44);
    if ( !v42 )
      sub_1BCAA3C(v43, v44);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v42,
               (int32_t)v66.fields._current[1].klass,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventTradeGoodsMaster__EventTradeGoodsEntity__int__GetEntity__);
    v49 = (EventTradeGoodsEntity_o *)Entity;
    if ( !Entity )
      sub_1BCAA3C(0LL, v46);
    klass = (int32_t)Entity[1].klass;
    v51 = this->fields.currentEventId;
    v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
    System_Action___ctor(
      v52,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_UpdateReceiveAllButtonState__,
      0LL);
    v56 = (EventTradeListViewItem_o *)sub_1BCAA2C(EventTradeListViewItem_TypeInfo, v53, v54, v55);
    EventTradeListViewItem___ctor(v56, klass, v49, v51, v52, v57);
    if ( !v33 )
      sub_1BCAA3C(v58, v59);
    items = v33->fields._items;
    v61 = Method_System_Collections_Generic_List_EventTradeListViewItem__Add__;
    ++v33->fields._version;
    if ( !items )
      sub_1BCAA3C(v58, v59);
    size = v33->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v33,
        (Il2CppObject *)v56,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &items->obj.klass + size;
      v33->fields._size = size + 1;
      v63[4] = (Il2CppClass *)v56;
      sub_1BCA784(v63 + 4, v56);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventTradePickupEntity__Dispose__);
  return (System_Collections_Generic_List_EventTradeListViewItem__o *)v33;
}


int64_t __fastcall EventTradeListViewItemManager__GetUpdateTime(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  int64_t Time; // x19
  int32_t Hour; // w20
  int32_t Minute; // w21
  int32_t Second; // w0
  __int64 v12; // x1
  EventTradeTimeCalculation_c *v13; // x8
  int32_t v14; // w22
  int64_t v15; // x19
  __int64 v16; // x1
  EventTradeTimeCalculation_c *v17; // x0
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8

  if ( (byte_4B112A5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, method, v2);
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, v3, v4);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    byte_4B112A5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  dateData = NetworkManager__getLocalDateTime(0LL).fields._dateData;
  Time = NetworkManager__getTime(0LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v7);
  v20.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v20, 0LL);
  v21.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v21, 0LL);
  v22.fields._dateData = (uint64_t)&dateData;
  Second = System_DateTime__get_Second(v22, 0LL);
  v13 = EventTradeTimeCalculation_TypeInfo;
  v14 = Second;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v12);
    v13 = EventTradeTimeCalculation_TypeInfo;
  }
  v15 = v13->static_fields->TRADE_TIME_OFFSET + Time - (v14 + 60 * (Minute + 60 * Hour));
  if ( NetworkManager__getTime(0LL) < v15 )
  {
    v17 = EventTradeTimeCalculation_TypeInfo;
    if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v16);
      v17 = EventTradeTimeCalculation_TypeInfo;
    }
    v15 -= v17->static_fields->ONE_DAY_SECOND;
  }
  return v15;
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
  EventTradeGoodsMaster_o *Master_object; // x0
  __int64 v35; // x1
  struct EventTradeGoodsEntity_array *TradeGoodsEntityArray; // x0
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  struct EventTradeGoodsEntity_array *tradeGoodsEntities; // x8
  EventTradeGoodsEntity_o *v39; // x8
  int32_t eventPointItemId; // w8
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  EventTradeAssetManager_o *v44; // x22
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  __int64 v47; // x1
  UILabel_o *tradeNoticeLb; // x21
  const MethodInfo *v49; // x1
  EventTradeAssetManager_o *assetManager; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x22
  const MethodInfo *v55; // x3

  if ( (byte_4B11289 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeStoreMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&EventTradeAssetManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager__Init_b__53_0__, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_13558/*"TRADE_EVENT_PUSH_BTN_LABEL"*/, v31, v32);
    byte_4B11289 = 1;
  }
  this->fields.svtId = svtId;
  this->fields.currentEventId = eventId;
  this->fields.tradeCallback = tradeCallback;
  sub_1BCA784(&this->fields.tradeCallback, tradeCallback);
  this->fields.rewardDialogCallBack = rewardDialogCallBack;
  sub_1BCA784(&this->fields.rewardDialogCallBack, rewardDialogCallBack);
  this->fields.playVoiceAction = playVoice;
  sub_1BCA784(&this->fields.playVoiceAction, playVoice);
  this->fields.presentBoxOverDlg = boxOverDlg;
  sub_1BCA784(&this->fields.presentBoxOverDlg, boxOverDlg);
  this->fields.boxOverDlgCloseCallBack = boxOverDlgCallBack;
  sub_1BCA784(&this->fields.boxOverDlgCloseCallBack, boxOverDlgCallBack);
  this->fields.closeDialogCallBack = closeDialogCallBack;
  sub_1BCA784(&this->fields.closeDialogCallBack, closeDialogCallBack);
  this->fields.maskPanel = maskPanel;
  sub_1BCA784(&this->fields.maskPanel, maskPanel);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
  if ( !Master_object )
    goto LABEL_19;
  TradeGoodsEntityArray = EventTradeGoodsMaster__GetTradeGoodsEntityArray(
                            Master_object,
                            this->fields.currentEventId,
                            0LL);
  this->fields.tradeGoodsEntities = TradeGoodsEntityArray;
  sub_1BCA784(&this->fields.tradeGoodsEntities, TradeGoodsEntityArray);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
  if ( !Master_object )
    goto LABEL_19;
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                (EventTradeStoreMaster_o *)Master_object,
                                this->fields.currentEventId,
                                0LL);
  this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
  Master_object = (EventTradeGoodsMaster_o *)sub_1BCA784(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
  tradeGoodsEntities = this->fields.tradeGoodsEntities;
  if ( !tradeGoodsEntities )
    goto LABEL_19;
  if ( !tradeGoodsEntities->max_length )
    sub_1BCAA44(Master_object, v35);
  v39 = tradeGoodsEntities->m_Items[0];
  if ( !v39 )
    goto LABEL_19;
  eventPointItemId = v39->fields.eventPointItemId;
  this->fields.selectTradeGoodsEntity = 0LL;
  this->fields.eventPointItemId = eventPointItemId;
  sub_1BCA784(&this->fields.selectTradeGoodsEntity, 0LL);
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
    v44 = (EventTradeAssetManager_o *)sub_1BCAA2C(EventTradeAssetManager_TypeInfo, v41, v42, v43);
    EventTradeAssetManager___ctor(v44, v45);
    this->fields.assetManager = v44;
    sub_1BCA784(&this->fields.assetManager, v44);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetTradeNotification(0LL);
  EventTradeListViewItemManager__UpdateNoticeButtonDisp(this, v46);
  tradeNoticeLb = this->fields.tradeNoticeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
  Master_object = (EventTradeGoodsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13558/*"TRADE_EVENT_PUSH_BTN_LABEL"*/, 0LL);
  if ( !tradeNoticeLb
    || (UILabel__set_text(tradeNoticeLb, (System_String_o *)Master_object, 0LL),
        EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v49),
        assetManager = this->fields.assetManager,
        v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53),
        System_Action___ctor(v54, (Il2CppObject *)this, Method_EventTradeListViewItemManager__Init_b__53_0__, 0LL),
        !assetManager) )
  {
LABEL_19:
    sub_1BCAA3C(Master_object, v35);
  }
  EventTradeAssetManager__GetAssets(assetManager, eventId, v54, v55);
}


bool __fastcall EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *String_70112520; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x20
  EventTradeListViewItemManager_o *UpdateTime; // x0
  const MethodInfo *v10; // x1
  int64_t v12; // x0
  __int64 v13; // x1
  EventTradeTimeCalculation_c *v14; // x8
  int64_t v15; // x19
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B112A4 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_14712/*"TradeNotificationDialogOpenTime"*/, v3, v4);
    byte_4B112A4 = 1;
  }
  result = 0LL;
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520((System_String_o *)StringLiteral_14712/*"TradeNotificationDialogOpenTime"*/, 0LL);
  v6 = System_Int64__TryParse(String_70112520, &result, 0LL);
  if ( v6 )
    v8 = result;
  else
    v8 = 0LL;
  UpdateTime = (EventTradeListViewItemManager_o *)EventTradeListViewItemManager__GetUpdateTime(
                                                    (EventTradeListViewItemManager_o *)v6,
                                                    v7);
  if ( (__int64)UpdateTime > v8 )
    return 0;
  v12 = EventTradeListViewItemManager__GetUpdateTime(UpdateTime, v10);
  v14 = EventTradeTimeCalculation_TypeInfo;
  v15 = v12;
  if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v13);
    v14 = EventTradeTimeCalculation_TypeInfo;
  }
  return v8 < v14->static_fields->ONE_DAY_SECOND + v15;
}


bool __fastcall EventTradeListViewItemManager__IsOverPossessionLimit(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
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
  UserGameEntity_o *SelfUserGame; // x20
  __int64 Master_object; // x0
  __int64 v24; // x1
  UserServantMaster_o *v25; // x21
  Il2CppObject *v26; // x19
  __int64 v27; // x2
  __int64 v28; // x3
  CommonUI_o *v29; // x19
  int32_t v30; // w21
  int32_t svtKeep; // w20
  ServantFrameShortDlgComponent_CallbackFunc_o *v32; // x22
  Il2CppObject *v33; // x23
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  CommonUI_o *v35; // x0
  int32_t v36; // w1
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x2
  __int64 v40; // x3
  CommonUI_o *v41; // x19
  int32_t v42; // w21
  int32_t svtEquipKeep; // w20
  Il2CppObject *v44; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v45; // x0
  bool v46; // w8
  bool result; // w0
  int32_t Count; // w19
  __int64 v49; // x2
  __int64 v50; // x3
  CommonUI_o *v51; // x21
  BalanceConfig_c *v52; // x8
  Il2CppObject *v53; // x23
  struct EventTradeListViewItemManager___c_StaticFields *v54; // x0
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B112A9 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFrameShortDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserCommandCodeMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__, v13, v14);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__, v15, v16);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__, v17, v18);
    sub_1BCA7E0(&EventTradeListViewItemManager___c_TypeInfo, v19, v20);
    byte_4B112A9 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_45;
  v25 = (UserServantMaster_o *)Master_object;
  UserServantMaster__getCount((UserServantMaster_o *)Master_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  v26 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( UserServantMaster__CheckServantAdd(v25, 1, 0LL) )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( SelfUserGame )
    {
      v29 = (CommonUI_o *)Master_object;
      v30 = servantEquipSum[1];
      svtKeep = SelfUserGame->fields.svtKeep;
      Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
      if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, v24);
        Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
      }
      v32 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Master_object + 184) + 24LL);
      if ( !v32 )
      {
        if ( !*(_DWORD *)(Master_object + 224) )
        {
          j_il2cpp_runtime_class_init_0(Master_object, v24);
          Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
        }
        v33 = **(Il2CppObject ***)(Master_object + 184);
        v32 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                                v24,
                                                                v27,
                                                                v28);
        ServantFrameShortDlgComponent_CallbackFunc___ctor(
          v32,
          v33,
          Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_0__,
          0LL);
        static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
        static_fields->__9__86_0 = v32;
        Master_object = sub_1BCA784(&static_fields->__9__86_0, v32);
      }
      if ( v29 )
      {
        v35 = v29;
        v36 = v30;
        v37 = svtKeep;
        v38 = 0;
        goto LABEL_42;
      }
    }
LABEL_45:
    sub_1BCAA3C(Master_object, v24);
  }
  Master_object = UserServantMaster__CheckEquipAdd(v25, 1, 1, 0LL);
  if ( (Master_object & 1) != 0 )
  {
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v41 = (CommonUI_o *)Master_object;
    v42 = servantEquipSum[0];
    svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
    Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
    if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, v24);
      Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
    }
    v32 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Master_object + 184) + 32LL);
    if ( !v32 )
    {
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object, v24);
        Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
      }
      v44 = **(Il2CppObject ***)(Master_object + 184);
      v32 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v24,
                                                              v39,
                                                              v40);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v32,
        v44,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_1__,
        0LL);
      v45 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v45->__9__86_1 = v32;
      Master_object = sub_1BCA784(&v45->__9__86_1, v32);
    }
    if ( !v41 )
      goto LABEL_45;
    v38 = 1;
    v35 = v41;
    v36 = v42;
  }
  else
  {
    if ( !v26 )
      goto LABEL_45;
    v46 = UserCommandCodeMaster__CheckCommandCodeAdd((UserCommandCodeMaster_o *)v26, 0, 0LL);
    result = 0;
    if ( !v46 )
      return result;
    Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)v26, 0LL);
    Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !SelfUserGame )
      goto LABEL_45;
    v51 = (CommonUI_o *)Master_object;
    if ( !byte_4B112D7 )
    {
      sub_1BCA7E0(&BalanceConfig_TypeInfo, v24, v49);
      byte_4B112D7 = 1;
    }
    v52 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v24);
      v52 = BalanceConfig_TypeInfo;
    }
    Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
    svtEquipKeep = v52->static_fields->CommandCodeFrameMax;
    if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, v24);
      Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
    }
    v32 = *(ServantFrameShortDlgComponent_CallbackFunc_o **)(*(_QWORD *)(Master_object + 184) + 40LL);
    if ( !v32 )
    {
      if ( !*(_DWORD *)(Master_object + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_object, v24);
        Master_object = (__int64)EventTradeListViewItemManager___c_TypeInfo;
      }
      v53 = **(Il2CppObject ***)(Master_object + 184);
      v32 = (ServantFrameShortDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ServantFrameShortDlgComponent_CallbackFunc_TypeInfo,
                                                              v24,
                                                              v49,
                                                              v50);
      ServantFrameShortDlgComponent_CallbackFunc___ctor(
        v32,
        v53,
        Method_EventTradeListViewItemManager___c__IsOverPossessionLimit_b__86_4__,
        0LL);
      v54 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
      v54->__9__86_4 = v32;
      Master_object = sub_1BCA784(&v54->__9__86_4, v32);
    }
    if ( !v51 )
      goto LABEL_45;
    v38 = 2;
    v35 = v51;
    v36 = Count;
  }
  v37 = svtEquipKeep;
LABEL_42:
  CommonUI__OpenSvtFrameShortDlg(v35, v36, v37, v38, 1, v32, 4, 0LL);
  Master_object = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  EventTradeListViewItemManager___c_c *v55; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  System_Func_object__bool__o *_9__87_0; // x21
  Il2CppObject *v58; // x22
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  EventTradeListViewItemManager___c_c *v64; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x20
  System_Func_object__object__o *_9__87_1; // x21
  Il2CppObject *v67; // x22
  struct EventTradeListViewItemManager___c_StaticFields *v68; // x0
  __int64 v69; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v70; // x22
  __int64 v71; // x1
  Il2CppObject *Master_object; // x20
  __int64 UserId; // x0
  __int64 v74; // x1
  UserPresentBoxEntity_array *VaildList; // x20
  Il2CppObject *v76; // x23
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  System_Collections_Generic_HashSet_int__o *v80; // x21
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v82; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v85; // x1
  __int64 v86; // x22
  __int64 v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  __int64 v91; // x8
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x1
  GiftEntity_array *GiftListById; // x24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v99; // x1
  int max_length; // w8
  int i; // w29
  GiftEntity_o *v102; // x8
  __int64 v103; // x8
  __int64 v104; // x9
  int *v105; // x10
  __int64 v106; // x0
  int32_t count; // w21
  BalanceConfig_c *v108; // x0
  int32_t PresentBoxMax; // w23
  int32_t v110; // w24
  System_String_o *v111; // x0
  __int64 v112; // x1
  BalanceConfig_c *v113; // x8
  System_String_o *v114; // x20
  Il2CppObject *v115; // x0
  System_String_o *v116; // x0
  PresentBoxOverDialog_o *presentBoxOverDlg; // x20
  System_String_o *v118; // x21
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x3
  PresentBoxOverDialog_ClickDelegate_o *v122; // x22
  int32_t v124; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B112AA & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&PresentBoxOverDialog_ClickDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserPresentBoxMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ListViewItem___, v15, v16);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__, v17, v18);
    sub_1BCA7E0(&System_Func_ListViewItem__bool__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo, v35, v36);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v37, v38);
    sub_1BCA7E0(&int_TypeInfo, v39, v40);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v41, v42);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__, v45, v46);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__, v47, v48);
    sub_1BCA7E0(&EventTradeListViewItemManager___c_TypeInfo, v49, v50);
    sub_1BCA7E0(&StringLiteral_13530/*"TRADE_CHECK_PRESENT_NUM_TXT"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v53, v54);
    byte_4B112AA = 1;
  }
  v55 = EventTradeListViewItemManager___c_TypeInfo;
  itemList = this->fields.itemList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, method);
    v55 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__87_0 = (System_Func_object__bool__o *)v55->static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55, method);
      v55 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v55->static_fields->__9;
    _9__87_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ListViewItem__bool__TypeInfo, method, v2, v3);
    System_Func_object__bool____ctor(
      _9__87_0,
      v58,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Func_ListViewItem__bool__o *)_9__87_0;
    sub_1BCA784(&static_fields->__9__87_0, _9__87_0);
  }
  v60 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)itemList,
          (System_Func_TSource__bool__o *)_9__87_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ListViewItem___);
  v64 = EventTradeListViewItemManager___c_TypeInfo;
  v65 = v60;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, v61);
    v64 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__87_1 = (System_Func_object__object__o *)v64->static_fields->__9__87_1;
  if ( !_9__87_1 )
  {
    if ( !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64, v61);
      v64 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v64->static_fields->__9;
    _9__87_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_ListViewItem__EventTradeGoodsEntity__TypeInfo,
                                                  v61,
                                                  v62,
                                                  v63);
    System_Func_object__object____ctor(
      _9__87_1,
      v67,
      Method_EventTradeListViewItemManager___c__IsOverPresentBoxLimit_b__87_1__,
      0LL);
    v68 = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    v68->__9__87_1 = (struct System_Func_ListViewItem__EventTradeGoodsEntity__o *)_9__87_1;
    sub_1BCA784(&v68->__9__87_1, _9__87_1);
  }
  v70 = System_Linq_Enumerable__Select_object__object_(
          v65,
          (System_Func_TSource__TResult__o *)_9__87_1,
          (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_ListViewItem__EventTradeGoodsEntity___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v69);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserPresentBoxMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v71);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_76;
  VaildList = UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Master_object, UserId, 0LL);
  v76 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  v80 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v77,
                                                       v78,
                                                       v79);
  System_Collections_Generic_HashSet_int____ctor(
    v80,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v70 )
    goto LABEL_76;
  klass = v70->klass;
  v82 = *(unsigned __int16 *)(&v70->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v70->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo )
    {
      --v82;
      p_offset += 4;
      if ( !v82 )
        goto LABEL_25;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_25:
    p_method = sub_1C1C7C0(v70, System_Collections_Generic_IEnumerable_EventTradeGoodsEntity__TypeInfo, 0LL);
  }
  v86 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v70,
          *(_QWORD *)(p_method + 8));
  if ( !v86 )
    sub_1BCAA3C(0LL, v85);
  while ( 1 )
  {
    v87 = *(_QWORD *)v86;
    v88 = *(unsigned __int16 *)(*(_QWORD *)v86 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v86 + 302LL) )
    {
      v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v89 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v88;
        v89 += 4;
        if ( !v88 )
          goto LABEL_32;
      }
      v90 = v87 + 16LL * *v89 + 312;
    }
    else
    {
LABEL_32:
      v90 = sub_1C1C7C0(v86, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8)) & 1) == 0 )
      break;
    v91 = *(_QWORD *)v86;
    v92 = *(unsigned __int16 *)(*(_QWORD *)v86 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v86 + 302LL) )
    {
      v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__c **)v93 - 1) != System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo )
      {
        --v92;
        v93 += 4;
        if ( !v92 )
          goto LABEL_39;
      }
      v94 = v91 + 16LL * *v93 + 312;
    }
    else
    {
LABEL_39:
      v94 = sub_1C1C7C0(v86, System_Collections_Generic_IEnumerator_EventTradeGoodsEntity__TypeInfo, 0LL);
    }
    v95 = (*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v86, *(_QWORD *)(v94 + 8));
    if ( !v95 )
      sub_1BCAA3C(0LL, v96);
    if ( !v76 )
      sub_1BCAA3C(v95, v96);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v76, *(_DWORD *)(v95 + 36), 0LL);
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)GiftListById, 0LL);
    if ( !IsNullOrEmpty )
    {
      if ( !GiftListById )
        sub_1BCAA3C(IsNullOrEmpty, v99);
      max_length = GiftListById->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1BCAA44(IsNullOrEmpty, v99);
          v102 = GiftListById->m_Items[i];
          if ( !v102 )
            sub_1BCAA3C(IsNullOrEmpty, v99);
          if ( !v80 )
            sub_1BCAA3C(IsNullOrEmpty, v99);
          IsNullOrEmpty = System_Collections_Generic_HashSet_int___Add(
                            v80,
                            v102->fields.type,
                            (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          max_length = GiftListById->max_length;
        }
      }
    }
  }
  v103 = *(_QWORD *)v86;
  v104 = *(unsigned __int16 *)(*(_QWORD *)v86 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v86 + 302LL) )
  {
    v105 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v105 - 1) != System_IDisposable_TypeInfo )
    {
      --v104;
      v105 += 4;
      if ( !v104 )
        goto LABEL_56;
    }
    v106 = v103 + 16LL * *v105 + 312;
  }
  else
  {
LABEL_56:
    v106 = sub_1C1C7C0(v86, System_IDisposable_TypeInfo, 0LL);
  }
  UserId = (*(__int64 (__fastcall **)(__int64, _QWORD))v106)(v86, *(_QWORD *)(v106 + 8));
  if ( !VaildList || !v80 )
    goto LABEL_76;
  count = v80->fields._count;
  v108 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v74);
    v108 = BalanceConfig_TypeInfo;
  }
  PresentBoxMax = v108->static_fields->PresentBoxMax;
  v110 = count + VaildList->max_length;
  if ( v110 > PresentBoxMax )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v74);
    v111 = LocalizationManager__Get((System_String_o *)StringLiteral_13530/*"TRADE_CHECK_PRESENT_NUM_TXT"*/, 0LL);
    v113 = BalanceConfig_TypeInfo;
    v114 = v111;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v112);
      v113 = BalanceConfig_TypeInfo;
    }
    v124 = v113->static_fields->PresentBoxMax;
    v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v124);
    v116 = System_String__Format(v114, v115, 0LL);
    presentBoxOverDlg = this->fields.presentBoxOverDlg;
    v118 = v116;
    v122 = (PresentBoxOverDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                     PresentBoxOverDialog_ClickDelegate_TypeInfo,
                                                     v119,
                                                     v120,
                                                     v121);
    PresentBoxOverDialog_ClickDelegate___ctor(
      v122,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager__IsOverPresentBoxLimit_b__87_2__,
      0LL);
    if ( presentBoxOverDlg )
    {
      PresentBoxOverDialog__Open(presentBoxOverDlg, (System_String_o *)StringLiteral_1/*""*/, v118, v122, 26, 0LL);
      return v110 > PresentBoxMax;
    }
LABEL_76:
    sub_1BCAA3C(UserId, v74);
  }
  return v110 > PresentBoxMax;
}


void __fastcall EventTradeListViewItemManager__LocateDialogToTradePanel(
        EventTradeListViewItemManager_o *this,
        BaseDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x21
  UnityEngine_Transform_o *transform; // x20
  __int64 v6; // x2
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
  if ( !byte_4B109C6 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, dialog, v6);
    byte_4B109C6 = 1;
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
    sub_1BCAA3C(this, dialog);
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
  __int64 v6; // x2
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
  if ( !byte_4B109C6 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, obj, v6);
    byte_4B109C6 = 1;
  }
  if ( !v7 )
LABEL_8:
    sub_1BCAA3C(this, obj);
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
  EventTradeListViewItemManager_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4B11290 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1BCA7E0(
                                                &Method_EventTradeListViewItemManager_OnClickListView__,
                                                obj,
                                                method);
    byte_4B11290 = 1;
  }
  if ( !obj
    || (this = (EventTradeListViewItemManager_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj)) == 0LL )
  {
    sub_1BCAA3C(this, obj);
  }
  v4 = this;
  if ( !this->fields.sortKindButton
    && EventTradeListViewItem__get_IsEventEnd((EventTradeListViewItem_o *)this, (const MethodInfo *)obj)
    || !BYTE4(v4->fields.sortOrderButton) )
  {
    v5 = Method_EventTradeListViewItemManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickListView__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_EventTradeListViewItemManager_OnClickListView__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager__OnClickNoticeButton(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isButtonOn; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B112AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickNoticeButton__, method, v2);
    byte_4B112AC = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v5 = Method_EventTradeListViewItemManager_OnClickNoticeButton__;
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickNoticeButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_EventTradeListViewItemManager_OnClickNoticeButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, isButtonOn, 0LL);
  EventRewardSaveData__SetTradeNotification(this->fields.isButtonOn, 0LL);
  EventTradeListViewItemManager__UpdateNoticeButtonDisp(this, v7);
}


void __fastcall EventTradeListViewItemManager__OnClickReceiveAll(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventTradeListViewItemManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 maskPanel; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  __int64 v19; // x1
  Il2CppObject *Request_object; // x0
  long double inited; // q0
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v23; // x20
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x0

  v3 = this;
  if ( (byte_4B1129D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_TradeReceiveResponse__, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    this = (EventTradeListViewItemManager_o *)sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B1129D = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, method)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v3, v12) )
  {
    maskPanel = (__int64)v3->fields.maskPanel;
    if ( !maskPanel )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 1, 0LL);
    v3->fields.selectTradeGoodsEntity = 0LL;
    sub_1BCA784(&v3->fields.selectTradeGoodsEntity, 0LL);
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16, v17);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)v3,
      Method_EventTradeListViewItemManager_TradeReceiveResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
    Request_object = NetworkManager__getRequest_object_(
                       v18,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
    currentEventId = v3->fields.currentEventId;
    v23 = (TradeReceiveRequest_o *)Request_object;
    v24 = Method_System_Array_Empty_int___;
    v25 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v25 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v13);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = ((__int64 (*)(void))sub_1C1C6BC)();
    if ( !*(_DWORD *)(v26 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v26, v13);
    maskPanel = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(maskPanel + 309) & 1) == 0 )
      maskPanel = sub_1C1C6BC(inited);
    if ( !v23 )
LABEL_19:
      sub_1BCAA3C(maskPanel, v13);
    TradeReceiveRequest__beginRequest(v23, currentEventId, **(System_Int32_array ***)(maskPanel + 184), 0, 0, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager__OnClickReceiveAllButton(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventTradeListViewItemManager_o *v3; // x19
  struct UICommonButton_o *receiveAllButton; // x8
  int32_t mState; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  v3 = this;
  if ( (byte_4B11298 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager_o *)sub_1BCA7E0(
                                                &Method_EventTradeListViewItemManager_OnClickReceiveAllButton__,
                                                method,
                                                v2);
    byte_4B11298 = 1;
  }
  receiveAllButton = v3->fields.receiveAllButton;
  if ( !receiveAllButton )
    sub_1BCAA3C(this, method);
  mState = receiveAllButton->fields.mState;
  v6 = Method_EventTradeListViewItemManager_OnClickReceiveAllButton__;
  if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveAllButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_EventTradeListViewItemManager_OnClickReceiveAllButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  if ( mState == 3 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    EventTradeListViewItemManager__OnClickReceiveAll(v3, v8);
  }
}


void __fastcall EventTradeListViewItemManager__OnClickReceiveButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *maskPanel; // x0
  unsigned int displayMode; // w8
  int v11; // w8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  EventTradeListViewItem_o *Item; // x21
  __int64 v17; // x1
  int64_t Time; // x22
  int32_t CompleteNum; // w21
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  const MethodInfo *v23; // x1
  struct EventTradeGoodsEntity_o *v24; // x1

  if ( (byte_4B11292 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickReceiveButton__, obj, method);
    sub_1BCA7E0(&EventTradeTimeCalculation_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    byte_4B11292 = 1;
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
    v11 = 1 << displayMode;
    if ( (v11 & 0xD) != 0 )
    {
LABEL_18:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
        return;
      }
LABEL_21:
      sub_1BCAA3C(maskPanel, obj);
    }
    if ( (v11 & 0x30) != 0 )
    {
      v12 = Method_EventTradeListViewItemManager_OnClickReceiveButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReceiveButton__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1BCA7F8(Method_EventTradeListViewItemManager_OnClickReceiveButton__);
      v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0LL);
      Item = EventTradeListViewObject__GetItem(obj, v14);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
      Time = NetworkManager__getTime(0LL);
      if ( !EventTradeTimeCalculation_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventTradeTimeCalculation_TypeInfo, v17);
      CompleteNum = EventTradeTimeCalculation__GetCompleteNum(Item, Time, 0LL);
      maskPanel = EventTradeListViewObject__GetItem(obj, v20);
      if ( !maskPanel )
        goto LABEL_21;
      v22 = *((_QWORD *)maskPanel + 17);
      if ( !v22 )
        goto LABEL_21;
      EventTradeListViewItemManager__OnClickReceiveDecide(this, *(_DWORD *)(v22 + 16), CompleteNum, v21);
      maskPanel = EventTradeListViewObject__GetItem(obj, v23);
      if ( !maskPanel )
        goto LABEL_21;
      v24 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
      this->fields.selectTradeGoodsEntity = v24;
      sub_1BCA784(&this->fields.selectTradeGoodsEntity, v24);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  __int64 maskPanel; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  NetworkManager_ResultCallbackFunc_o *v21; // x22
  __int64 v22; // x1
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w21
  TradeReceiveRequest_o *v25; // x22

  v6 = this;
  if ( (byte_4B1129C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_EventTradeListViewItemManager_TradeReceiveResponse__,
      *(_QWORD *)&storeIdx,
      *(_QWORD *)&receiveNum);
    sub_1BCA7E0(&int___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    this = (EventTradeListViewItemManager_o *)sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    byte_4B1129C = 1;
  }
  if ( !EventTradeListViewItemManager__IsOverPossessionLimit(this, *(const MethodInfo **)&storeIdx)
    && !EventTradeListViewItemManager__IsOverPresentBoxLimit(v6, v15) )
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
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)v6,
        Method_EventTradeListViewItemManager_TradeReceiveResponse__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
      Request_object = NetworkManager__getRequest_object_(
                         v21,
                         (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
      currentEventId = v6->fields.currentEventId;
      v25 = (TradeReceiveRequest_o *)Request_object;
      maskPanel = sub_1BCA888(int___TypeInfo, 1LL);
      if ( maskPanel )
      {
        if ( !*(_DWORD *)(maskPanel + 24) )
          sub_1BCAA44(maskPanel, v16);
        *(_DWORD *)(maskPanel + 32) = storeIdx;
        if ( v25 )
        {
          TradeReceiveRequest__beginRequest(v25, currentEventId, (System_Int32_array *)maskPanel, receiveNum, 0, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(maskPanel, v16);
  }
}


void __fastcall EventTradeListViewItemManager__OnClickReplenishmentButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *maskPanel; // x0
  unsigned int displayMode; // w8
  int v11; // w8
  bool IsRefillable; // w21
  _QWORD *v13; // x8
  System_Reflection_MethodBase_o *v14; // x0
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  const MethodInfo *v16; // x1
  EventTradeListViewItem_o *Item; // x22
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x8
  int32_t v22; // w23
  System_Action_int__int__int__o *v23; // x24
  const MethodInfo *v24; // x1
  struct EventTradeGoodsEntity_o *v25; // x1

  if ( (byte_4B11293 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__int__int__TypeInfo, obj, method);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__, v5, v6);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__, v7, v8);
    byte_4B11293 = 1;
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
    v11 = 1 << displayMode;
    if ( (v11 & 0xD) != 0 )
    {
LABEL_18:
      maskPanel = this->fields.maskPanel;
      if ( maskPanel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskPanel, 0, 0LL);
        return;
      }
LABEL_22:
      sub_1BCAA3C(maskPanel, obj);
    }
    if ( (v11 & 0x30) != 0 )
    {
      maskPanel = EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj);
      if ( !maskPanel )
        goto LABEL_22;
      IsRefillable = EventTradeListViewItem__get_IsRefillable(
                       (EventTradeListViewItem_o *)maskPanel,
                       (const MethodInfo *)obj);
      v13 = Method_EventTradeListViewItemManager_OnClickReplenishmentButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1BCA7F8(Method_EventTradeListViewItemManager_OnClickReplenishmentButton__);
      v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
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
        v23 = (System_Action_int__int__int__o *)sub_1BCAA2C(System_Action_int__int__int__TypeInfo, obj, v19, v20);
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
        v25 = (struct EventTradeGoodsEntity_o *)*((_QWORD *)maskPanel + 15);
        this->fields.selectTradeGoodsEntity = v25;
        sub_1BCA784(&this->fields.selectTradeGoodsEntity, v25);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  NetworkManager_ResultCallbackFunc_o *v19; // x23
  __int64 v20; // x1
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_4B11297 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_EventTradeListViewItemManager_TradeReplenishmentResponse__,
      *(_QWORD *)&storeIdx,
      *(_QWORD *)&goodsId);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeStartRequest___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    byte_4B11297 = 1;
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
    v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17, v18);
    NetworkManager_ResultCallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_TradeReplenishmentResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
    tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                   v19,
                                                                                   (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeSweetsNumConfirmDialog )
    {
      TradeStartRequest__beginRequest(
        (TradeStartRequest_o *)tradeSweetsNumConfirmDialog,
        this->fields.currentEventId,
        storeIdx,
        goodsId,
        createNum,
        0,
        0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(tradeSweetsNumConfirmDialog, *(_QWORD *)&storeIdx);
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
  int v23; // w8
  bool IsBuyAble; // w21
  _QWORD *v25; // x8
  System_Reflection_MethodBase_o *v26; // x0
  const MethodInfo *v27; // x2
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  const MethodInfo *v29; // x1
  EventTradeListViewItem_o *Item; // x0
  int32_t v31; // w22
  EventTradeListViewItem_o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_int__int__int__o *v36; // x24
  const MethodInfo *v37; // x1
  struct EventTradeGoodsEntity_o *klass; // x1
  __int64 v39; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x23
  int32_t storeIdx; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4B11291 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__int__int__TypeInfo, obj, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__, v7, v8);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickTradeStartDecide__, v9, v10);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_13548/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_13547/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/, v19, v20);
    byte_4B11291 = 1;
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
  v23 = 1 << displayMode;
  if ( (v23 & 0x31) == 0 )
  {
    if ( (v23 & 0xC) == 0 )
      return;
    maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, (const MethodInfo *)obj);
    if ( !maskPanel )
      goto LABEL_25;
    IsBuyAble = EventTradeListViewItem__get_IsBuyAble((EventTradeListViewItem_o *)maskPanel, (const MethodInfo *)obj);
    v25 = Method_EventTradeListViewItemManager_OnClickTradeStartButton__;
    if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickTradeStartButton__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1BCA7F8(Method_EventTradeListViewItemManager_OnClickTradeStartButton__);
    v26 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v25, v25[4]);
    if ( IsBuyAble )
    {
      OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
      if ( EventTradeListViewItemManager__TryGetAvailableStoreIdx(this, &storeIdx, v27) )
      {
        maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsNumConfirmDialog;
        if ( maskPanel )
        {
          EventTradeSweetsNumConfirmDialogComponent__Init(
            (EventTradeSweetsNumConfirmDialogComponent_o *)maskPanel,
            this->fields.currentEventId,
            0LL);
          tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
          Item = EventTradeListViewObject__GetItem(obj, v29);
          v31 = storeIdx;
          v32 = Item;
          v36 = (System_Action_int__int__int__o *)sub_1BCAA2C(System_Action_int__int__int__TypeInfo, v33, v34, v35);
          System_Action_int__int__int____ctor(
            v36,
            (Il2CppObject *)this,
            Method_EventTradeListViewItemManager_OnClickTradeStartDecide__,
            0LL);
          if ( tradeSweetsNumConfirmDialog )
          {
            EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v32, v31, v36, 0, 0LL);
            maskPanel = (UnityEngine_GameObject_o *)EventTradeListViewObject__GetItem(obj, v37);
            if ( maskPanel )
            {
              klass = (struct EventTradeGoodsEntity_o *)maskPanel[5].klass;
              this->fields.selectTradeGoodsEntity = klass;
              sub_1BCA784(&this->fields.selectTradeGoodsEntity, klass);
              goto LABEL_18;
            }
          }
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_13548/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_13547/*"TRADE_EVENT_IMPOSSIBLE_TRADE_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
        v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
        System_Action___ctor(
          v46,
          (Il2CppObject *)this,
          Method_EventTradeListViewItemManager__OnClickTradeStartButton_b__62_0__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog_30767520(
            (CommonUI_o *)Instance,
            v41,
            v42,
            v46,
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
LABEL_25:
      sub_1BCAA3C(maskPanel, obj);
    }
    OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  NetworkManager_ResultCallbackFunc_o *v19; // x23
  __int64 v20; // x1

  if ( (byte_4B11296 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_TradeStartResponse__, *(_QWORD *)&storeIdx, *(_QWORD *)&goodsId);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeStartRequest___, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    byte_4B11296 = 1;
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
    v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17, v18);
    NetworkManager_ResultCallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventTradeListViewItemManager_TradeStartResponse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
    tradeSweetsNumConfirmDialog = (EventTradeSweetsNumConfirmDialogComponent_o *)NetworkManager__getRequest_object_(
                                                                                   v19,
                                                                                   (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeStartRequest___);
    if ( tradeSweetsNumConfirmDialog )
    {
      TradeStartRequest__beginRequest(
        (TradeStartRequest_o *)tradeSweetsNumConfirmDialog,
        this->fields.currentEventId,
        storeIdx,
        goodsId,
        createNum,
        0,
        0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(tradeSweetsNumConfirmDialog, *(_QWORD *)&storeIdx);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tradeSweetsNumConfirmDialog, 0, 0LL);
}


void __fastcall EventTradeListViewItemManager__OnClickWithdrawalButton(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x20
  UnityEngine_GameObject_o *maskPanel; // x0
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o **p_monitor; // x21
  unsigned int klass; // w8
  int v17; // w8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x21
  EventTradeListViewItem_o *Item; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_bool__o *v25; // x23

  if ( (byte_4B11294 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, obj, method);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__, v6, v7);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__, v8, v9);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo, v10, v11);
    byte_4B11294 = 1;
  }
  v12 = (Il2CppObject *)sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass65_0_TypeInfo, obj, method, v3);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  v12[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v12[1], this);
  v12[1].monitor = obj;
  p_monitor = (UnityEngine_GameObject_o **)&v12[1].monitor;
  sub_1BCA784(&v12[1].monitor, obj);
  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(maskPanel, 1, 0LL);
  if ( !*p_monitor )
    goto LABEL_18;
  klass = (unsigned int)(*p_monitor)[5].klass;
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
      sub_1BCAA3C(maskPanel, v14);
    }
    if ( (v17 & 0x30) != 0 )
    {
      v18 = Method_EventTradeListViewItemManager_OnClickWithdrawalButton__;
      if ( (*((_BYTE *)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1BCA7F8(Method_EventTradeListViewItemManager_OnClickWithdrawalButton__);
      v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
      maskPanel = (UnityEngine_GameObject_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
      if ( !maskPanel )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Init(
        (EventTradeSweetsWithdrawalConfirmDialogComponent_o *)maskPanel,
        this->fields.currentEventId,
        0LL);
      maskPanel = *p_monitor;
      if ( !*p_monitor )
        goto LABEL_18;
      tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
      Item = EventTradeListViewObject__GetItem((EventTradeListViewObject_o *)maskPanel, v14);
      v25 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v22, v23, v24);
      System_Action_bool____ctor(
        v25,
        v12,
        Method_EventTradeListViewItemManager___c__DisplayClass65_0__OnClickWithdrawalButton_b__0__,
        0LL);
      if ( !tradeSweetsWithdrawalConfirmDialog )
        goto LABEL_18;
      EventTradeSweetsWithdrawalConfirmDialogComponent__Open(tradeSweetsWithdrawalConfirmDialog, Item, v25, 0LL);
      goto LABEL_15;
    }
  }
}


void __fastcall EventTradeListViewItemManager__OnClickWithdrawalDecide(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItem_o *item,
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
  Il2CppObject *v20; // x22
  __int64 maskPanel; // x0
  const MethodInfo *v22; // x1
  EventTradeListViewItem_o **p_monitor; // x20
  EventTradeListViewItemManager_o *v24; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  EventTradeSweetsWithdrawalConfirmDialogComponent_o *tradeSweetsWithdrawalConfirmDialog; // x19
  EventTradeListViewItem_o *monitor; // x20
  System_Action_bool__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  NetworkManager_ResultCallbackFunc_o *v34; // x21
  __int64 v35; // x1
  Il2CppObject *Request_object; // x0
  int32_t currentEventId; // w19
  TradeReceiveRequest_o *v38; // x21
  EventTradeListViewItem_o *v39; // x8
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x9
  System_Int32_array *v41; // x20

  if ( (byte_4B1129E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, item, method);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_WithdrawalResponse__, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TradeReceiveRequest___, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__, v16, v17);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo, v18, v19);
    byte_4B1129E = 1;
  }
  v20 = (Il2CppObject *)sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass75_0_TypeInfo, item, method, v3);
  System_Object___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  v20[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v20[1], this);
  v20[1].monitor = item;
  p_monitor = (EventTradeListViewItem_o **)&v20[1].monitor;
  v24 = (EventTradeListViewItemManager_o *)sub_1BCA784(&v20[1].monitor, item);
  if ( EventTradeListViewItemManager__IsOverPossessionLimit(v24, v25)
    || EventTradeListViewItemManager__IsOverPresentBoxLimit(this, v22) )
  {
    tradeSweetsWithdrawalConfirmDialog = this->fields.tradeSweetsWithdrawalConfirmDialog;
    monitor = (EventTradeListViewItem_o *)v20[1].monitor;
    v30 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v22, v26, v27);
    System_Action_bool____ctor(
      v30,
      v20,
      Method_EventTradeListViewItemManager___c__DisplayClass75_0__OnClickWithdrawalDecide_b__0__,
      0LL);
    if ( tradeSweetsWithdrawalConfirmDialog )
    {
      EventTradeSweetsWithdrawalConfirmDialogComponent__Resume(tradeSweetsWithdrawalConfirmDialog, monitor, v30, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(maskPanel, v22);
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
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v31, v32, v33);
  NetworkManager_ResultCallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_WithdrawalResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
  Request_object = NetworkManager__getRequest_object_(
                     v34,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TradeReceiveRequest___);
  currentEventId = this->fields.currentEventId;
  v38 = (TradeReceiveRequest_o *)Request_object;
  maskPanel = sub_1BCA888(int___TypeInfo, 1LL);
  v39 = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_18;
  TradeInfo_k__BackingField = v39->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_18;
  v41 = (System_Int32_array *)maskPanel;
  if ( !maskPanel )
    goto LABEL_18;
  if ( !*(_DWORD *)(maskPanel + 24) )
    sub_1BCAA44(maskPanel, v22);
  *(_DWORD *)(maskPanel + 32) = TradeInfo_k__BackingField->fields.storeIdx;
  maskPanel = EventTradeListViewItem__get_NowCompleteNum(v39, v22);
  if ( !v38 )
    goto LABEL_18;
  TradeReceiveRequest__beginRequest(v38, currentEventId, v41, maskPanel, 1, 0LL);
}


void __fastcall EventTradeListViewItemManager__OnMoveEnd(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  __int64 v7; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x0

  if ( (byte_4B1128F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1128F = 1;
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


void __fastcall EventTradeListViewItemManager__OpenReconfirmDialog(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItem_o *item,
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
  BaseDialog_o *tradeSweetsWithdrawalConfirmDialog; // x0
  const MethodInfo *v24; // x1
  BaseDialog_o **v25; // x22
  __int64 v26; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v28; // x21
  System_String_o *v29; // x22
  System_String_o *v30; // x23
  System_String_o *v31; // x24
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  CommonConfirmDialog_ClickDelegate_o *v35; // x25

  if ( (byte_4B11295 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, item, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__, v10, v11);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_13581/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3789/*"COMMON_CONFIRM_EXECUTE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_13580/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, v20, v21);
    byte_4B11295 = 1;
  }
  v22 = sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass66_0_TypeInfo, item, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_12;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BCA784(v22 + 16, this);
  *(_QWORD *)(v22 + 24) = item;
  v25 = (BaseDialog_o **)(v22 + 24);
  sub_1BCA784(v22 + 24, item);
  tradeSweetsWithdrawalConfirmDialog = (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !tradeSweetsWithdrawalConfirmDialog )
    goto LABEL_12;
  if ( !BaseDialog__get_IsBusy(tradeSweetsWithdrawalConfirmDialog, 0LL) )
    return;
  tradeSweetsWithdrawalConfirmDialog = *v25;
  if ( !*v25 )
    goto LABEL_12;
  *(_DWORD *)(v22 + 32) = EventTradeListViewItem__get_NowCompleteNum(
                            (EventTradeListViewItem_o *)tradeSweetsWithdrawalConfirmDialog,
                            v24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13581/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_TITLE"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13580/*"TRADE_EVENT_WITHDRAWAL_RECONFIRMATION_NOTIFICATION_DIALOG_MESSAGE"*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3789/*"COMMON_CONFIRM_EXECUTE"*/, 0LL);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  v35 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v32, v33, v34);
  CommonConfirmDialog_ClickDelegate___ctor(
    v35,
    (Il2CppObject *)v22,
    Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(tradeSweetsWithdrawalConfirmDialog, v24);
  CommonUI__OpenConfirmDialog_30766268(
    (CommonUI_o *)Instance,
    v28,
    v29,
    v30,
    v31,
    1,
    v35,
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
  System_Collections_Generic_List_EventTradeListViewObject__o *ObjectList; // x20
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
  EventTradeListViewItem_o *v31; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  struct EventTradeInfo_o *TradeInfo_k__BackingField; // x8
  int32_t storeIdx; // w22
  EventTradeSweetsNumConfirmDialogComponent_o *tradeSweetsNumConfirmDialog; // x21
  System_Action_int__int__int__o *v37; // x23
  bool v38; // w19

  if ( (byte_4B112A2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__int__int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___, v10, v11);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__, v12, v13);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__, v14, v15);
    sub_1BCA7E0(&System_Func_EventTradeListViewObject__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    byte_4B112A2 = 1;
  }
  if ( !this->fields.selectTradeGoodsEntity )
    return 0;
  ObjectList = EventTradeListViewItemManager__get_ObjectList(this, method);
  v24 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventTradeListViewObject__bool__TypeInfo, v21, v22, v23);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager__OpenReplenishmentDialog_b__79_0__,
    0LL);
  v26 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)ObjectList,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventTradeListViewObject___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_22;
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
  if ( !v26
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventTradeListViewObject__GetItem(
                                                                        (EventTradeListViewObject_o *)v26,
                                                                        v28)) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(Master_object, v28);
  }
  v31 = (EventTradeListViewItem_o *)Master_object;
  if ( !*(_QWORD *)&Master_object[1].fields.revision
    || !EventTradeListViewItem__get_IsRefillable((EventTradeListViewItem_o *)Master_object, v28) )
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
  TradeInfo_k__BackingField = v31->fields._TradeInfo_k__BackingField;
  if ( !TradeInfo_k__BackingField )
    goto LABEL_22;
  storeIdx = TradeInfo_k__BackingField->fields.storeIdx;
  tradeSweetsNumConfirmDialog = this->fields.tradeSweetsNumConfirmDialog;
  v37 = (System_Action_int__int__int__o *)sub_1BCAA2C(System_Action_int__int__int__TypeInfo, v28, v32, v33);
  System_Action_int__int__int____ctor(
    v37,
    (Il2CppObject *)this,
    Method_EventTradeListViewItemManager_OnClickTradeReplenishmentDecide__,
    0LL);
  if ( !tradeSweetsNumConfirmDialog )
    goto LABEL_22;
  v38 = 1;
  EventTradeSweetsNumConfirmDialogComponent__Open(tradeSweetsNumConfirmDialog, v31, storeIdx, v37, 1, 0LL);
  return v38;
}


void __fastcall EventTradeListViewItemManager__OpenRewardDialog(
        EventTradeListViewItemManager_o *this,
        EventTradeListViewItemManager_ResData_o *resData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  EventTradeRewardDialogComponent_o *tradeRewardDialog; // x0
  const MethodInfo *v12; // x1
  struct BattleDropItem_array *resultEventRewardInfos; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  EventTradeRewardDialogComponent_o *v17; // x27
  int32_t eventPointNum; // w26
  int32_t eventPointItemId; // w25
  int32_t currentEventId; // w24
  BattleDropItem_array *resultTradeRewardInfos; // x23
  EventTradeGoodsEntity_o *selectTradeGoodsEntity; // x19
  BattleDropItem_array *v23; // x22
  System_Action_o *closeCallback; // x20

  if ( (byte_4B112A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, resData, method);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__, v6, v7);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo, v8, v9);
    byte_4B112A1 = 1;
  }
  v10 = sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass78_0_TypeInfo, resData, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_14;
  *(_QWORD *)(v10 + 24) = this;
  sub_1BCA784(v10 + 24, this);
  tradeRewardDialog = this->fields.tradeRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradeRewardDialogComponent__Init(tradeRewardDialog, 0LL);
  tradeRewardDialog = (EventTradeRewardDialogComponent_o *)this->fields.tradePointRewardDialog;
  if ( !tradeRewardDialog )
    goto LABEL_14;
  EventTradePointRewardDialogComponent__Init((EventTradePointRewardDialogComponent_o *)tradeRewardDialog, v12);
  if ( !resData )
    goto LABEL_14;
  resultEventRewardInfos = resData->fields.resultEventRewardInfos;
  *(_QWORD *)(v10 + 16) = resultEventRewardInfos;
  tradeRewardDialog = (EventTradeRewardDialogComponent_o *)sub_1BCA784(v10 + 16, resultEventRewardInfos);
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
  *(_DWORD *)(v10 + 32) = (_DWORD)oldUserEventPoint;
  v17 = this->fields.tradeRewardDialog;
  eventPointNum = resData->fields.eventPointNum;
  eventPointItemId = this->fields.eventPointItemId;
  currentEventId = this->fields.currentEventId;
  resultTradeRewardInfos = resData->fields.resultTradeRewardInfos;
  selectTradeGoodsEntity = this->fields.selectTradeGoodsEntity;
  v23 = *(BattleDropItem_array **)(v10 + 16);
  closeCallback = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v14, v15);
  System_Action___ctor(
    closeCallback,
    (Il2CppObject *)v10,
    Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__0__,
    0LL);
  if ( !v17 )
LABEL_14:
    sub_1BCAA3C(tradeRewardDialog, v12);
  EventTradeRewardDialogComponent__Open(
    v17,
    eventPointNum,
    eventPointItemId,
    currentEventId,
    resultTradeRewardInfos,
    v23,
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x20
  int64_t PickupList; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  System_Object_array *v17; // x0
  void **p_monitor; // x21
  const MethodInfo *v19; // x1
  System_String_o *v20; // x0
  EventTradePopularSweetsNotificationDialogComponent_o *tradePopularSweetsNotificationDialog; // x19
  EventTradeListViewItem_array *monitor; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x22
  EventTradeListViewItemManager_o *v27; // x0
  const MethodInfo *v28; // x1
  int64_t Time; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B112A6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(
      &Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__,
      v9,
      v10);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo, v11, v12);
    byte_4B112A6 = 1;
  }
  v13 = (Il2CppObject *)sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass83_0_TypeInfo, method, v2, v3);
  System_Object___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  v13[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v13[1], this);
  PickupList = (int64_t)EventTradeListViewItemManager__GetPickupList(this, v16);
  if ( !PickupList )
    goto LABEL_14;
  v17 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)PickupList,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventTradeListViewItem__ToArray__);
  v13[1].monitor = v17;
  p_monitor = &v13[1].monitor;
  sub_1BCA784(&v13[1].monitor, v17);
  PickupList = EventTradeListViewItemManager__IsAlreadyOpenTodayDialog(this, v19);
  if ( (PickupList & 1) != 0 )
    return;
  if ( !*p_monitor )
    goto LABEL_14;
  if ( !*((_QWORD *)*p_monitor + 3) )
    return;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Time = NetworkManager__getTime(0LL);
  v20 = System_Int64__ToString((int64_t)&Time, 0LL);
  v13[2].klass = (Il2CppClass *)v20;
  sub_1BCA784(&v13[2], v20);
  PickupList = (int64_t)this->fields.tradePopularSweetsNotificationDialog;
  if ( !PickupList
    || (EventTradePopularSweetsNotificationDialogComponent__Init(
          (EventTradePopularSweetsNotificationDialogComponent_o *)PickupList,
          0LL),
        tradePopularSweetsNotificationDialog = this->fields.tradePopularSweetsNotificationDialog,
        monitor = (EventTradeListViewItem_array *)v13[1].monitor,
        v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25),
        System_Action___ctor(
          v26,
          v13,
          Method_EventTradeListViewItemManager___c__DisplayClass83_0__OpenSweetsNotificationDialog_b__0__,
          0LL),
        PickupList = EventTradeListViewItemManager__GetUpdateTime(v27, v28),
        !tradePopularSweetsNotificationDialog) )
  {
LABEL_14:
    sub_1BCAA3C(PickupList, v15);
  }
  EventTradePopularSweetsNotificationDialogComponent__Open(
    tradePopularSweetsNotificationDialog,
    monitor,
    v26,
    PickupList,
    0LL);
}


void __fastcall EventTradeListViewItemManager__RequestListObject(
        EventTradeListViewItemManager_o *this,
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
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1128E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnMoveEnd__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeListViewObject__get_Count__, v14, v15);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v16, v17);
    byte_4B1128E = 1;
  }
  memset(&v29, 0, sizeof(v29));
  ObjectList = (System_Collections_Generic_List_object__o *)EventTradeListViewItemManager__get_ObjectList(this, method);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventTradeListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__MoveNext__) )
    {
      current = v29.fields._current;
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v26, v27);
      EventTradeListViewObject__Init_31277188((EventTradeListViewObject_o *)current, 3, v25, v28);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventTradeListViewObject__Dispose__);
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
  __int64 methodPtr_low; // x11
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_object__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_object__o *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_object__o *v41; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_object__o *v45; // x24
  const MethodInfo *v46; // x5

  v4 = obj;
  if ( (byte_4B1128D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventTradeListViewObject__TypeInfo, obj, item);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickReceiveButton__, v8, v9);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickReplenishmentButton__, v10, v11);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickTradeStartButton__, v12, v13);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnClickWithdrawalButton__, v14, v15);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager_OnMoveEnd__, v16, v17);
    sub_1BCA7E0(&EventTradeListViewObject_TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    byte_4B1128D = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0LL, 0LL) )
  {
    v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_EventTradeListViewItemManager_OnMoveEnd__, 0LL);
    if ( !v4 )
      sub_1BCAA3C(v27, v28);
    EventTradeListViewObject__Init_31277188((EventTradeListViewObject_o *)v4, 3, v26, v29);
    v33 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventTradeListViewObject__TypeInfo, v30, v31, v32);
    System_Action_object____ctor(
      v33,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickTradeStartButton__,
      0LL);
    v37 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventTradeListViewObject__TypeInfo, v34, v35, v36);
    System_Action_object____ctor(
      v37,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReceiveButton__,
      0LL);
    v41 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventTradeListViewObject__TypeInfo, v38, v39, v40);
    System_Action_object____ctor(
      v41,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickReplenishmentButton__,
      0LL);
    v45 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventTradeListViewObject__TypeInfo, v42, v43, v44);
    System_Action_object____ctor(
      v45,
      (Il2CppObject *)this,
      (intptr_t)Method_EventTradeListViewItemManager_OnClickWithdrawalButton__,
      0LL);
    EventTradeListViewObject__SetOnClickAction(
      (EventTradeListViewObject_o *)v4,
      (System_Action_EventTradeListViewObject__o *)v33,
      (System_Action_EventTradeListViewObject__o *)v37,
      (System_Action_EventTradeListViewObject__o *)v41,
      (System_Action_EventTradeListViewObject__o *)v45,
      v46);
  }
}


void __fastcall EventTradeListViewItemManager__SetReceiveAllButton(
        EventTradeListViewItemManager_o *this,
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
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x20
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeButtonBlinkEffect_k__BackingField; // x20
  struct UnityEngine_GameObject_o **p_tradeButtonBlinkEffect; // x19
  __int64 v25; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v27; // x0
  __int64 v28; // x2
  UnityEngine_Transform_o *v29; // x20

  if ( (byte_4B11288 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_3490/*"CHECK_TRADE_BUTTON_LABEL"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17689/*"btn_getreward"*/, v12, v13);
    byte_4B11288 = 1;
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
        TradeButtonBlinkEffect_k__BackingField = (Il2CppObject *)assetManager->fields._TradeButtonBlinkEffect_k__BackingField;
        p_tradeButtonBlinkEffect = &this->fields.tradeButtonBlinkEffect;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)receiveAllButton, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
        v27 = UnityEngine_Object__Instantiate_object__49903816(
                TradeButtonBlinkEffect_k__BackingField,
                transform,
                (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        *p_tradeButtonBlinkEffect = (struct UnityEngine_GameObject_o *)v27;
        sub_1BCA784(p_tradeButtonBlinkEffect, v27);
        receiveAllButton = (__int64)*p_tradeButtonBlinkEffect;
        if ( *p_tradeButtonBlinkEffect )
        {
          receiveAllButton = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)receiveAllButton,
                                        0LL);
          v29 = (UnityEngine_Transform_o *)receiveAllButton;
          if ( !byte_4B109C6 )
          {
            receiveAllButton = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v19, v28);
            byte_4B109C6 = 1;
          }
          if ( v29 )
          {
            UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            receiveAllButton = (__int64)*p_tradeButtonBlinkEffect;
            if ( *p_tradeButtonBlinkEffect )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButton, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(receiveAllButton, v19);
  }
}


void __fastcall EventTradeListViewItemManager__SetTradeObject(
        EventTradeListViewItemManager_o *this,
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
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *tradeRewardDialog; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  struct EventTradeAssetManager_o *assetManager; // x8
  Il2CppObject *TradeRewardDialog_k__BackingField; // x20
  Il2CppObject *Component_object; // x0
  const MethodInfo *v28; // x2
  UnityEngine_Object_o *tradePointRewardDialog; // x20
  struct EventTradeAssetManager_o *v30; // x8
  Il2CppObject *TradePointRewardDialog_k__BackingField; // x20
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *tradeSweetsNumConfirmDialog; // x20
  struct EventTradeAssetManager_o *v35; // x8
  Il2CppObject *TradeSweetsNumConfirmDialog_k__BackingField; // x20
  Il2CppObject *v37; // x0
  const MethodInfo *v38; // x2
  UnityEngine_Object_o *tradeSweetsWithdrawalConfirmDialog; // x20
  struct EventTradeAssetManager_o *v40; // x8
  Il2CppObject *TradeSweetsWithdrawalConfirmDialog_k__BackingField; // x20
  Il2CppObject *v42; // x0
  const MethodInfo *v43; // x2
  UnityEngine_Object_o *tradePopularSweetsNotificationDialog; // x20
  struct EventTradeAssetManager_o *v45; // x8
  Il2CppObject *TradePopularSweetsNotificationDialog_k__BackingField; // x20
  Il2CppObject *v47; // x0
  const MethodInfo *v48; // x2
  UnityEngine_Object_o *currentPickupInfoDispControl; // x20
  struct EventTradeAssetManager_o *v50; // x8
  Il2CppObject *TradePickupInfoBoard_k__BackingField; // x20
  struct EventTradePickupInfoDispControl_o **p_currentPickupInfoDispControl; // x20
  Il2CppObject *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  const MethodInfo *v55; // x2
  UnityEngine_Object_o *nextPickupInfoDispControl; // x20
  struct EventTradeAssetManager_o *v57; // x8
  Il2CppObject *v58; // x20
  struct EventTradePickupInfoDispControl_o **p_nextPickupInfoDispControl; // x20
  Il2CppObject *v60; // x0
  UnityEngine_GameObject_o *v61; // x1
  const MethodInfo *v62; // x2

  if ( (byte_4B11287 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___, v4, v5);
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___,
      v6,
      v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___, v10, v11);
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___,
      v12,
      v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_9541/*"NextTradePickupInfoBoard"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_5012/*"CurrentTradePickupInfoBoard"*/, v20, v21);
    byte_4B11287 = 1;
  }
  tradeRewardDialog = (UnityEngine_Object_o *)this->fields.tradeRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_66;
    TradeRewardDialog_k__BackingField = (Il2CppObject *)assetManager->fields._TradeRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeRewardDialog_k__BackingField,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventTradeRewardDialogComponent___);
    this->fields.tradeRewardDialog = (struct EventTradeRewardDialogComponent_o *)Component_object;
    sub_1BCA784(&this->fields.tradeRewardDialog, Component_object);
    EventTradeListViewItemManager__LocateDialogToTradePanel(this, (BaseDialog_o *)this->fields.tradeRewardDialog, v28);
  }
  tradePointRewardDialog = (UnityEngine_Object_o *)this->fields.tradePointRewardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradePointRewardDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v30 = this->fields.assetManager;
    if ( !v30 )
      goto LABEL_66;
    TradePointRewardDialog_k__BackingField = (Il2CppObject *)v30->fields._TradePointRewardDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePointRewardDialog_k__BackingField,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v32 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventTradePointRewardDialogComponent___);
    this->fields.tradePointRewardDialog = (struct EventTradePointRewardDialogComponent_o *)v32;
    sub_1BCA784(&this->fields.tradePointRewardDialog, v32);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePointRewardDialog,
      v33);
  }
  tradeSweetsNumConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsNumConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsNumConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v35 = this->fields.assetManager;
    if ( !v35 )
      goto LABEL_66;
    TradeSweetsNumConfirmDialog_k__BackingField = (Il2CppObject *)v35->fields._TradeSweetsNumConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsNumConfirmDialog_k__BackingField,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v37 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsNumConfirmDialogComponent___);
    this->fields.tradeSweetsNumConfirmDialog = (struct EventTradeSweetsNumConfirmDialogComponent_o *)v37;
    sub_1BCA784(&this->fields.tradeSweetsNumConfirmDialog, v37);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsNumConfirmDialog,
      v38);
  }
  tradeSweetsWithdrawalConfirmDialog = (UnityEngine_Object_o *)this->fields.tradeSweetsWithdrawalConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(tradeSweetsWithdrawalConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v40 = this->fields.assetManager;
    if ( !v40 )
      goto LABEL_66;
    TradeSweetsWithdrawalConfirmDialog_k__BackingField = (Il2CppObject *)v40->fields._TradeSweetsWithdrawalConfirmDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradeSweetsWithdrawalConfirmDialog_k__BackingField,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v42 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventTradeSweetsWithdrawalConfirmDialogComponent___);
    this->fields.tradeSweetsWithdrawalConfirmDialog = (struct EventTradeSweetsWithdrawalConfirmDialogComponent_o *)v42;
    sub_1BCA784(&this->fields.tradeSweetsWithdrawalConfirmDialog, v42);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradeSweetsWithdrawalConfirmDialog,
      v43);
  }
  tradePopularSweetsNotificationDialog = (UnityEngine_Object_o *)this->fields.tradePopularSweetsNotificationDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                             tradePopularSweetsNotificationDialog,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v45 = this->fields.assetManager;
    if ( !v45 )
      goto LABEL_66;
    TradePopularSweetsNotificationDialog_k__BackingField = (Il2CppObject *)v45->fields._TradePopularSweetsNotificationDialog_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePopularSweetsNotificationDialog_k__BackingField,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    v47 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventTradePopularSweetsNotificationDialogComponent___);
    this->fields.tradePopularSweetsNotificationDialog = (struct EventTradePopularSweetsNotificationDialogComponent_o *)v47;
    sub_1BCA784(&this->fields.tradePopularSweetsNotificationDialog, v47);
    EventTradeListViewItemManager__LocateDialogToTradePanel(
      this,
      (BaseDialog_o *)this->fields.tradePopularSweetsNotificationDialog,
      v48);
  }
  currentPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.currentPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(currentPickupInfoDispControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v50 = this->fields.assetManager;
    if ( !v50 )
      goto LABEL_66;
    TradePickupInfoBoard_k__BackingField = (Il2CppObject *)v50->fields._TradePickupInfoBoard_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                               TradePickupInfoBoard_k__BackingField,
                                               (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !gameObject )
      goto LABEL_66;
    p_currentPickupInfoDispControl = &this->fields.currentPickupInfoDispControl;
    v53 = UnityEngine_GameObject__GetComponent_object_(
            gameObject,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
    this->fields.currentPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v53;
    sub_1BCA784(&this->fields.currentPickupInfoDispControl, v53);
    gameObject = (UnityEngine_GameObject_o *)this->fields.currentPickupInfoDispControl;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_5012/*"CurrentTradePickupInfoBoard"*/, 0LL);
    gameObject = (UnityEngine_GameObject_o *)*p_currentPickupInfoDispControl;
    if ( !*p_currentPickupInfoDispControl )
      goto LABEL_66;
    v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    EventTradeListViewItemManager__LocateObjectToTradePanel(this, v54, v55);
  }
  nextPickupInfoDispControl = (UnityEngine_Object_o *)this->fields.nextPickupInfoDispControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(nextPickupInfoDispControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v57 = this->fields.assetManager;
    if ( v57 )
    {
      v58 = (Il2CppObject *)v57->fields._TradePickupInfoBoard_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                 v58,
                                                 (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( gameObject )
      {
        p_nextPickupInfoDispControl = &this->fields.nextPickupInfoDispControl;
        v60 = UnityEngine_GameObject__GetComponent_object_(
                gameObject,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventTradePickupInfoDispControl___);
        this->fields.nextPickupInfoDispControl = (struct EventTradePickupInfoDispControl_o *)v60;
        sub_1BCA784(&this->fields.nextPickupInfoDispControl, v60);
        gameObject = (UnityEngine_GameObject_o *)this->fields.nextPickupInfoDispControl;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_Object__set_name((UnityEngine_Object_o *)gameObject, (System_String_o *)StringLiteral_9541/*"NextTradePickupInfoBoard"*/, 0LL);
            gameObject = (UnityEngine_GameObject_o *)*p_nextPickupInfoDispControl;
            if ( *p_nextPickupInfoDispControl )
            {
              v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
              EventTradeListViewItemManager__LocateObjectToTradePanel(this, v61, v62);
              return;
            }
          }
        }
      }
    }
LABEL_66:
    sub_1BCAA3C(gameObject, v24);
  }
}


void __fastcall EventTradeListViewItemManager__TradeReceiveResponse(
        EventTradeListViewItemManager_o *this,
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v20; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  Il2CppObject *v24; // x20
  EventTradeStoreMaster_o *v25; // x20
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2

  if ( (byte_4B1129F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___, v7, v8);
    sub_1BCA7E0(&JsonManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v15, v16);
    byte_4B1129F = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v17);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1BCA784(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v22);
    v24 = (Il2CppObject *)System_String__Concat_62412480(
                            (System_String_o *)StringLiteral_15978/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16236/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v23);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v24,
                                                 (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel
      || (v25 = Master_object,
          (Master_object = (EventTradeStoreMaster_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this->fields.touchPanel,
                                                        0LL)) == 0LL)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.maskPanel) == 0LL)
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL),
          EventTradeListViewItemManager__RequestListObject(this, v26),
          !v25) )
    {
LABEL_15:
      sub_1BCAA3C(Master_object, v20);
    }
    if ( !LODWORD(v25->fields._MasterName_k__BackingField) )
      sub_1BCAA44(Master_object, v20);
    EventTradeListViewItemManager__OpenRewardDialog(
      this,
      (EventTradeListViewItemManager_ResData_o *)v25->fields.list,
      v27);
    ActionExtensions__Call(this->fields.tradeCallback, 0LL);
  }
}


void __fastcall EventTradeListViewItemManager__TradeReplenishmentResponse(
        EventTradeListViewItemManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v12; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20
  struct System_Func_bool__o *closeDialogCallBack; // x8

  if ( (byte_4B1129B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B1129B = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v9);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_15;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1BCA784(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v14);
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
          EventTradeListViewItemManager__RequestListObject(this, v15),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0LL)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeReplenishmentVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0LL),
          !playVoiceAction) )
    {
LABEL_15:
      sub_1BCAA3C(Master_object, v12);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  __int64 v12; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  struct System_Action_int__string____Action__o *playVoiceAction; // x21
  unsigned int svtId; // w20

  if ( (byte_4B1129A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B1129A = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v9);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_13;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1BCA784(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v14);
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
          EventTradeListViewItemManager__RequestListObject(this, v15),
          (Master_object = (EventTradeStoreMaster_o *)this->fields.selectTradeGoodsEntity) == 0LL)
      || (playVoiceAction = this->fields.playVoiceAction,
          svtId = this->fields.svtId,
          Master_object = (EventTradeStoreMaster_o *)EventTradeGoodsEntity__GetTradeStartVoiceIds(
                                                       (EventTradeGoodsEntity_o *)Master_object,
                                                       0LL),
          !playVoiceAction) )
    {
LABEL_13:
      sub_1BCAA3C(Master_object, v12);
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
  Il2CppObject *v21; // x20
  Il2CppClass *v22; // x1
  Il2CppObject *v23; // x21
  System_Int32_array *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Func_int__bool__o *v28; // x23
  struct EventTradeStoreEntity_array *v29; // x8
  __int64 v30; // x9
  EventTradeStoreEntity_o *v31; // x8
  int32_t *v33; // [xsp+8h] [xbp-78h]
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-70h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B11299 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, storeIdx, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventTradeMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__, v11, v12);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo, v13, v14);
    byte_4B11299 = 1;
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
      v33 = storeIdx;
      v20 = 0LL;
      while ( 1 )
      {
        v21 = (Il2CppObject *)sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass70_0_TypeInfo, v16, v17, v18);
        System_Object___ctor(v21, 0LL);
        if ( v20 >= tradeStoreEntities->max_length )
          goto LABEL_27;
        if ( !v21 )
          goto LABEL_26;
        v22 = (Il2CppClass *)tradeStoreEntities->m_Items[v20];
        v21[1].klass = v22;
        v23 = v21 + 1;
        sub_1BCA784(&v21[1], v22);
        v24 = usedStoreIdx;
        v28 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v25, v26, v27);
        System_Func_int__bool____ctor(
          v28,
          v21,
          Method_EventTradeListViewItemManager___c__DisplayClass70_0__TryGetAvailableStoreIdx_b__0__,
          0LL);
        Master_object = (UserEventTradeMaster_o *)BasicHelper__Any_int__49273364(
                                                    v24,
                                                    (System_Func_T__bool__o *)v28,
                                                    (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          break;
        if ( (__int64)++v20 >= (int)tradeStoreEntities->max_length )
          return 0;
      }
      if ( v23->klass )
      {
        *v33 = HIDWORD(v23->klass->_1.name);
        return 1;
      }
LABEL_26:
      sub_1BCAA3C(Master_object, v16);
    }
    return 0;
  }
  v29 = this->fields.tradeStoreEntities;
  if ( !v29 )
    goto LABEL_26;
  v30 = *(_QWORD *)&v29->max_length;
  if ( !v30 )
    return 0;
  if ( !(_DWORD)v30 )
LABEL_27:
    sub_1BCAA44(Master_object, v16);
  v31 = v29->m_Items[0];
  if ( !v31 )
    goto LABEL_26;
  *storeIdx = v31->fields.idx;
  return 1;
}


void __fastcall EventTradeListViewItemManager__UpdateNoticeButtonDisp(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UISprite_o *tradeNoticeBtnSp; // x0
  __int64 *v7; // x8

  if ( (byte_4B112AB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B112AB = 1;
  }
  tradeNoticeBtnSp = this->fields.tradeNoticeBtnSp;
  if ( !tradeNoticeBtnSp )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isButtonOn )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UISprite__set_spriteName(tradeNoticeBtnSp, (System_String_o *)*v7, 0LL);
}


void __fastcall EventTradeListViewItemManager__UpdateReceiveAllButtonState(
        EventTradeListViewItemManager_o *this,
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
  EventTradeListViewItemManager___c_c *v13; // x0
  System_Collections_Generic_List_T__o *itemList; // x20
  System_Func_object__bool__o *_9__85_0; // x21
  Il2CppObject *v16; // x22
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  UIWidget_o *receiveAllButtonLabel; // x0
  __int64 v19; // x1
  long double v20; // q0
  struct UICommonButton_o *receiveAllButton; // x8
  char v22; // w20
  __int64 v23; // x1
  float v24; // s8
  __int64 v25; // x1
  UnityEngine_Object_o *tradeButtonBlinkEffect; // x21
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B112A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ListViewItem___, method, v2);
    sub_1BCA7E0(&System_Func_ListViewItem__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__, v9, v10);
    sub_1BCA7E0(&EventTradeListViewItemManager___c_TypeInfo, v11, v12);
    byte_4B112A8 = 1;
  }
  v13 = EventTradeListViewItemManager___c_TypeInfo;
  itemList = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, method);
    v13 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__85_0 = (System_Func_object__bool__o *)v13->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__85_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ListViewItem__bool__TypeInfo, method, v2, v3);
    System_Func_object__bool____ctor(
      _9__85_0,
      v16,
      Method_EventTradeListViewItemManager___c__UpdateReceiveAllButtonState_b__85_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_ListViewItem__bool__o *)_9__85_0;
    sub_1BCA784(&static_fields->__9__85_0, _9__85_0);
  }
  receiveAllButtonLabel = (UIWidget_o *)BasicHelper__Any_object_(
                                          itemList,
                                          (System_Func_T__bool__o *)_9__85_0,
                                          (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ListViewItem___);
  receiveAllButton = this->fields.receiveAllButton;
  if ( !receiveAllButton )
    goto LABEL_23;
  v22 = (char)receiveAllButtonLabel;
  LODWORD(v20) = 0.5;
  v23 = ((unsigned __int8)receiveAllButtonLabel & 1) != 0 ? 0LL : 3LL;
  v24 = ((unsigned __int8)receiveAllButtonLabel & 1) != 0 ? 1.0 : 0.5;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer, long double))receiveAllButton->klass->vtable._14_SetState.method)(
    this->fields.receiveAllButton,
    v23,
    1LL,
    receiveAllButton->klass->vtable._15_OnPress.methodPtr,
    v20);
  receiveAllButtonLabel = (UIWidget_o *)this->fields.receiveAllButtonLabel;
  if ( !receiveAllButtonLabel )
    goto LABEL_23;
  v27.fields.a = 1.0;
  v27.fields.r = v24;
  v27.fields.g = v24;
  v27.fields.b = v24;
  UIWidget__set_color(receiveAllButtonLabel, v27, 0LL);
  tradeButtonBlinkEffect = (UnityEngine_Object_o *)this->fields.tradeButtonBlinkEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(tradeButtonBlinkEffect, 0LL, 0LL) )
  {
    receiveAllButtonLabel = (UIWidget_o *)this->fields.tradeButtonBlinkEffect;
    if ( receiveAllButtonLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)receiveAllButtonLabel, v22 & 1, 0LL);
      return;
    }
LABEL_23:
    sub_1BCAA3C(receiveAllButtonLabel, v19);
  }
}


void __fastcall EventTradeListViewItemManager__UpdateTradeQuoteLb(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventTradeListViewItemManager_o *v3; // x19
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
  UILabel_o *tradeQuotaLb; // x19
  System_String_o *v21; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  int v24; // [xsp+8h] [xbp-48h] BYREF
  int v25; // [xsp+Ch] [xbp-44h] BYREF
  System_Int32_array *usedStoreIdx; // [xsp+10h] [xbp-40h] BYREF
  UserEventTradeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4B112AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventTradeMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_13568/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/, v10, v11);
    this = (EventTradeListViewItemManager_o *)sub_1BCA7E0(&StringLiteral_13567/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/, v12, v13);
    byte_4B112AE = 1;
  }
  usedStoreIdx = 0LL;
  entity = 0LL;
  tradeStoreEntities = v3->fields.tradeStoreEntities;
  if ( !tradeStoreEntities )
    goto LABEL_20;
  max_length = tradeStoreEntities->max_length;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (EventTradeListViewItemManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventTradeMaster___);
  if ( !this )
    goto LABEL_20;
  if ( !UserEventTradeMaster__TryGetEntity((UserEventTradeMaster_o *)this, &entity, v3->fields.currentEventId, 0LL) )
    goto LABEL_12;
  this = (EventTradeListViewItemManager_o *)entity;
  if ( !entity )
    goto LABEL_20;
  this = (EventTradeListViewItemManager_o *)UserEventTradeEntity__TryGetUsedStoreIdx(entity, &usedStoreIdx, 0LL);
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
  v18 = (System_String_o **)(max_length == v16 ? &StringLiteral_13568/*"TRADE_EVENT_TITLE_QUOTA_NOTHING_LABEL"*/ : &StringLiteral_13567/*"TRADE_EVENT_TITLE_QUOTA_LABEL"*/);
  v19 = *v18;
  tradeQuotaLb = v3->fields.tradeQuotaLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v21 = LocalizationManager__Get(v19, 0LL);
  v25 = v17;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = max_length;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  this = (EventTradeListViewItemManager_o *)System_String__Format_62415592(v21, v22, v23, 0LL);
  if ( !tradeQuotaLb )
LABEL_20:
    sub_1BCAA3C(this, method);
  UILabel__set_text(tradeQuotaLb, (System_String_o *)this, 0LL);
}


void __fastcall EventTradeListViewItemManager__WithdrawalResponse(
        EventTradeListViewItemManager_o *this,
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  EventTradeStoreMaster_o *Master_object; // x0
  EventTradeListViewItemManager_ResData_o *list; // x1
  struct EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  Il2CppObject *v24; // x20
  EventTradeStoreMaster_o *v25; // x20
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  struct BattleDropItem_array *resultTradeRewardInfos; // x8

  if ( (byte_4B112A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeStoreMaster___, result, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___, v7, v8);
    sub_1BCA7E0(&JsonManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v15, v16);
    byte_4B112A0 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    EventTradeListViewItemManager__UpdateReceiveAllButtonState(this, v17);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
    Master_object = (EventTradeStoreMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeStoreMaster___);
    if ( !Master_object )
      goto LABEL_19;
    OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                  Master_object,
                                  this->fields.currentEventId,
                                  0LL);
    this->fields.tradeStoreEntities = OpenTradeStoreEntityArray;
    sub_1BCA784(&this->fields.tradeStoreEntities, OpenTradeStoreEntityArray);
    EventTradeListViewItemManager__UpdateTradeQuoteLb(this, v22);
    v24 = (Il2CppObject *)System_String__Concat_62412480(
                            (System_String_o *)StringLiteral_15978/*"["*/,
                            result,
                            (System_String_o *)StringLiteral_16236/*"]"*/,
                            0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v23);
    Master_object = (EventTradeStoreMaster_o *)JsonManager__DeserializeArray_object_(
                                                 v24,
                                                 (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventTradeListViewItemManager_ResData___);
    if ( !this->fields.touchPanel )
      goto LABEL_19;
    v25 = Master_object;
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
    EventTradeListViewItemManager__RequestListObject(this, v26);
    if ( !v25 )
      goto LABEL_19;
    if ( !LODWORD(v25->fields._MasterName_k__BackingField) )
      sub_1BCAA44(Master_object, list);
    list = (EventTradeListViewItemManager_ResData_o *)v25->fields.list;
    if ( !list || (resultTradeRewardInfos = list->fields.resultTradeRewardInfos) == 0LL )
LABEL_19:
      sub_1BCAA3C(Master_object, list);
    if ( *(_QWORD *)&resultTradeRewardInfos->max_length )
      EventTradeListViewItemManager__OpenRewardDialog(this, list, v27);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  PresentBoxOverDialog_o *presentBoxOverDlg; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x20

  if ( (byte_4B112AF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isOpenPresentBox, method);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__, v6, v7);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo, v8, v9);
    byte_4B112AF = 1;
  }
  v10 = sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass87_0_TypeInfo, isOpenPresentBox, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 24) = this,
        sub_1BCA784(v10 + 24, this),
        *(_BYTE *)(v10 + 16) = isOpenPresentBox,
        presentBoxOverDlg = this->fields.presentBoxOverDlg,
        v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16),
        System_Action___ctor(
          v17,
          (Il2CppObject *)v10,
          Method_EventTradeListViewItemManager___c__DisplayClass87_0__IsOverPresentBoxLimit_b__3__,
          0LL),
        !presentBoxOverDlg) )
  {
    sub_1BCAA3C(v11, v12);
  }
  PresentBoxOverDialog__Close_31185648(presentBoxOverDlg, v17, 0LL);
}


void __fastcall EventTradeListViewItemManager___OnClickTradeStartButton_b__62_0(
        EventTradeListViewItemManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskPanel; // x0

  maskPanel = this->fields.maskPanel;
  if ( !maskPanel )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(this, x);
  }
  return dragParentObject->fields.m_CachedPtr == selectTradeGoodsEntity->fields.id;
}


System_Collections_Generic_List_EventTradeListViewObject__o *__fastcall EventTradeListViewItemManager__get_ObjectList(
        EventTradeListViewItemManager_o *this,
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
  System_Collections_Generic_List_object__o *v29; // x22
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  EventTradeListViewItemManager___c_c *v35; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  System_Func_object__bool__o *_9__48_0; // x22
  Il2CppObject *v38; // x23
  struct EventTradeListViewItemManager___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_object__o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_object__o *v45; // x22

  if ( (byte_4B11286 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GameObject__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_GameObject___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GameObject___, v7, v8);
    sub_1BCA7E0(&System_Func_GameObject__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ForEach__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTradeListViewObject__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__, v17, v18);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__, v19, v20);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&EventTradeListViewItemManager___c_TypeInfo, v23, v24);
    byte_4B11286 = 1;
  }
  v25 = sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass48_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTradeListViewObject__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTradeListViewObject___ctor__);
  if ( !v25 )
    goto LABEL_12;
  *(_QWORD *)(v25 + 16) = v29;
  sub_1BCA784(v25 + 16, v29);
  v35 = EventTradeListViewItemManager___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !EventTradeListViewItemManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradeListViewItemManager___c_TypeInfo, v32);
    v35 = EventTradeListViewItemManager___c_TypeInfo;
  }
  _9__48_0 = (System_Func_object__bool__o *)v35->static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35, v32);
      v35 = EventTradeListViewItemManager___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__48_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GameObject__bool__TypeInfo, v32, v33, v34);
    System_Func_object__bool____ctor(
      _9__48_0,
      v38,
      Method_EventTradeListViewItemManager___c__get_ObjectList_b__48_0__,
      0LL);
    static_fields = EventTradeListViewItemManager___c_TypeInfo->static_fields;
    static_fields->__9__48_0 = (struct System_Func_GameObject__bool__o *)_9__48_0;
    sub_1BCA784(&static_fields->__9__48_0, _9__48_0);
  }
  v40 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
          (System_Func_TSource__bool__o *)_9__48_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GameObject___);
  v41 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v40,
                                                       (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_GameObject___);
  v45 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameObject__TypeInfo, v42, v43, v44);
  System_Action_object____ctor(
    v45,
    (Il2CppObject *)v25,
    Method_EventTradeListViewItemManager___c__DisplayClass48_0__get_ObjectList_b__1__,
    0LL);
  if ( !v41 )
LABEL_12:
    sub_1BCAA3C(v30, v31);
  System_Collections_Generic_List_object___ForEach(
    v41,
    (System_Action_T__o *)v45,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  return *(System_Collections_Generic_List_EventTradeListViewObject__o **)(v25 + 16);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B112B0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradeListViewItemManager___c_TypeInfo, v1, v2);
    byte_4B112B0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventTradeListViewItemManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventTradeListViewItemManager___c_TypeInfo->static_fields->__9 = (struct EventTradeListViewItemManager___c_o *)v4;
  sub_1BCA784(EventTradeListViewItemManager___c_TypeInfo->static_fields, v4);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B112B3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__, v7, v8);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo, v9, v10);
    byte_4B112B3 = 1;
  }
  v11 = sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass86_0_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventTradeListViewItemManager___c__DisplayClass86_0__IsOverPossessionLimit_b__2__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_1(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B112B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__, v7, v8);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo, v9, v10);
    byte_4B112B4 = 1;
  }
  v11 = sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass86_1_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventTradeListViewItemManager___c__DisplayClass86_1__IsOverPossessionLimit_b__3__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradeListViewItemManager___c___IsOverPossessionLimit_b__86_4(
        EventTradeListViewItemManager___c_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x21

  if ( (byte_4B112B5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__, v7, v8);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo, v9, v10);
    byte_4B112B5 = 1;
  }
  v11 = sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass86_2_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_DWORD *)(v11 + 16) = result,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v11,
          Method_EventTradeListViewItemManager___c__DisplayClass86_2__IsOverPossessionLimit_b__5__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v12, v13);
  }
  CommonUI__CloseSvtFrameShortDlg((CommonUI_o *)Instance, v18, 0LL);
}


bool __fastcall EventTradeListViewItemManager___c___IsOverPresentBoxLimit_b__87_0(
        EventTradeListViewItemManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  __int64 v5; // x8

  if ( (byte_4B112B6 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1BCA7E0(&EventTradeListViewItem_TypeInfo, item, method);
    byte_4B112B6 = 1;
  }
  if ( !item )
LABEL_12:
    sub_1BCAA3C(this, item);
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1BCACFC(item);
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

  if ( (byte_4B112B7 & 1) == 0 )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1BCA7E0(&EventTradeListViewItem_TypeInfo, item, method);
    byte_4B112B7 = 1;
  }
  if ( !item )
LABEL_8:
    sub_1BCAA3C(this, item);
  methodPtr_low = LOBYTE(EventTradeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (EventTradeListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTradeListViewItem_TypeInfo )
  {
    this = (EventTradeListViewItemManager___c_o *)sub_1BCACFC(item);
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
  if ( (byte_4B112B2 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradeListViewItem_TypeInfo, item, method);
    byte_4B112B2 = 1;
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
  if ( (byte_4B112B1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, go, method);
    byte_4B112B1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
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
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *list; // x19
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  EventTradeListViewItemManager___c__DisplayClass48_0_o *v11; // x1
  Il2CppClass **v12; // x0

  v4 = this;
  if ( (byte_4B112B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___, go, method);
    this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)sub_1BCA7E0(
                                                                      &Method_System_Collections_Generic_List_EventTradeListViewObject__Add__,
                                                                      v5,
                                                                      v6);
    byte_4B112B8 = 1;
  }
  if ( !go
    || (list = (System_Collections_Generic_List_object__o *)v4->fields.list,
        this = (EventTradeListViewItemManager___c__DisplayClass48_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          go,
                                                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventTradeListViewObject___),
        !list)
    || (items = list->fields._items,
        v9 = Method_System_Collections_Generic_List_EventTradeListViewObject__Add__,
        ++list->fields._version,
        !items) )
  {
    sub_1BCAA3C(this, go);
  }
  size = list->fields._size;
  v11 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    list->fields._size = size + 1;
    v12 = &items->obj.klass + size;
    v12[4] = (Il2CppClass *)v11;
    sub_1BCA784(v12 + 4, v11);
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
    sub_1BCAA3C(this, value);
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
  Il2CppObject *Instance; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x20

  if ( (byte_4B112B9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, decide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__, v8, v9);
    sub_1BCA7E0(&EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo, v10, v11);
    byte_4B112B9 = 1;
  }
  v12 = sub_1BCAA2C(EventTradeListViewItemManager___c__DisplayClass66_1_TypeInfo, decide, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        sub_1BCA784(v12 + 24, this),
        *(_BYTE *)(v12 + 16) = decide,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v12,
          Method_EventTradeListViewItemManager___c__DisplayClass66_1__OpenReconfirmDialog_b__1__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v19, 0LL);
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass66_0___OpenReconfirmDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  EventTradeListViewItemManager___c__DisplayClass66_1_o *v3; // x19
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
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *CS___8__locals1; // x9
  struct EventTradeListViewItemManager_o *_4__this; // x8
  struct EventTradeListViewItem_o *item; // x9
  struct EventTradeGoodsEntity_o *TradeGoodsEntity_k__BackingField; // x1
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v18; // x8
  int32_t oldCompleteNum; // w20
  const MethodInfo *v20; // x2
  struct EventTradeListViewItemManager___c__DisplayClass66_0_o *v21; // x8
  __int64 v22; // x1
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *v27; // x23
  System_Action_o *monitor; // x22
  EventTradeListViewItemManager___c__DisplayClass66_1_o *v29; // x19

  v3 = this;
  if ( (byte_4B112BA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&string_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__, v10, v11);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1BCA7E0(&StringLiteral_13566/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/, v12, v13);
    byte_4B112BA = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_23;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( v3->fields.decide )
  {
    item = CS___8__locals1->fields.item;
    if ( !item )
      goto LABEL_23;
    if ( !_4__this )
      goto LABEL_23;
    TradeGoodsEntity_k__BackingField = item->fields._TradeGoodsEntity_k__BackingField;
    _4__this->fields.selectTradeGoodsEntity = TradeGoodsEntity_k__BackingField;
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1BCA784(
                                                                      &_4__this->fields.selectTradeGoodsEntity,
                                                                      TradeGoodsEntity_k__BackingField);
    v18 = v3->fields.CS___8__locals1;
    if ( !v18 )
      goto LABEL_23;
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v18->fields.item;
    if ( !this )
      goto LABEL_23;
    oldCompleteNum = v18->fields.oldCompleteNum;
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)EventTradeListViewItem__get_NowCompleteNum(
                                                                      (EventTradeListViewItem_o *)this,
                                                                      method);
    if ( oldCompleteNum == (_DWORD)this )
    {
      v21 = v3->fields.CS___8__locals1;
      if ( v21 )
      {
        this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)v21->fields.__4__this;
        if ( this )
        {
          EventTradeListViewItemManager__OnClickWithdrawalDecide(
            (EventTradeListViewItemManager_o *)this,
            v21->fields.item,
            v20);
          return;
        }
      }
LABEL_23:
      sub_1BCAA3C(this, method);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_13566/*"TRADE_EVENT_STATE_CHANGE_NOTIFICATION_DIALOG_MESSAGE"*/,
                                                                      0LL);
    v27 = (Il2CppObject *)v3->fields.CS___8__locals1;
    if ( !v27 )
      goto LABEL_23;
    monitor = (System_Action_o *)v27[2].monitor;
    v29 = this;
    if ( !monitor )
    {
      monitor = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v25, v26);
      System_Action___ctor(
        monitor,
        v27,
        Method_EventTradeListViewItemManager___c__DisplayClass66_0__OpenReconfirmDialog_b__2__,
        0LL);
      v27[2].monitor = monitor;
      this = (EventTradeListViewItemManager___c__DisplayClass66_1_o *)sub_1BCA784(&v27[2].monitor, monitor);
    }
    if ( !Instance )
      goto LABEL_23;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      Empty,
      (System_String_o *)v29,
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
      0LL);
  }
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass70_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTradeListViewItemManager___c__DisplayClass70_0___TryGetAvailableStoreIdx_b__0(
        EventTradeListViewItemManager___c__DisplayClass70_0_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct EventTradeStoreEntity_o *storeEntity; // x8

  storeEntity = this->fields.storeEntity;
  if ( !storeEntity )
    sub_1BCAA3C(this, *(_QWORD *)&idx);
  return storeEntity->fields.idx == idx;
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass75_0___ctor(
        EventTradeListViewItemManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(_4__this, onDecide);
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
  __int64 v3; // x3
  const MethodInfo *v4; // x6
  Il2CppObject *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppClass *klass; // x19
  void *monitor; // x8
  EventTradePointRewardDialogComponent_o *v12; // x21
  int32_t v13; // w22
  int32_t v14; // w23
  __int64 v15; // x26
  System_Action_o *v16; // x24
  __int64 v17; // x23
  System_Action_o *v18; // x21

  v5 = (Il2CppObject *)this;
  if ( (byte_4B112BB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__, v6, v7);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1BCA7E0(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__,
                                                                      v8,
                                                                      v9);
    byte_4B112BB = 1;
  }
  klass = v5[1].klass;
  if ( !klass )
    goto LABEL_14;
  monitor = v5[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  if ( klass->_1.namespaze )
  {
    v12 = (EventTradePointRewardDialogComponent_o *)*((_QWORD *)monitor + 53);
    v13 = *((_DWORD *)monitor + 126);
    v14 = *((_DWORD *)monitor + 125);
    v15 = *((_QWORD *)monitor + 64);
    v16 = (System_Action_o *)v5[3].monitor;
    if ( !v16 )
    {
      v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(
        v16,
        v5,
        Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__1__,
        0LL);
      v5[3].monitor = v16;
      this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1BCA784(&v5[3].monitor, v16);
    }
    if ( v12 )
    {
      EventTradePointRewardDialogComponent__Open(v12, v13, v14, (BattleDropItem_array *)klass, v15 == 0, v16, v4);
      return;
    }
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  v17 = *((_QWORD *)monitor + 67);
  v18 = (System_Action_o *)v5[4].monitor;
  if ( !v18 )
  {
    v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      v18,
      v5,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__2__,
      0LL);
    v5[4].monitor = v18;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1BCA784(&v5[4].monitor, v18);
  }
  if ( !v17 )
    goto LABEL_14;
  (*(void (__fastcall **)(_QWORD, Il2CppClass *, _QWORD, System_Action_o *, _QWORD))(v17 + 24))(
    *(_QWORD *)(v17 + 64),
    klass,
    0LL,
    v18,
    *(_QWORD *)(v17 + 40));
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__1(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *monitor; // x8
  __int64 v8; // x23
  System_Action_o *klass; // x21
  Il2CppClass *v10; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_4B112BC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1BCA7E0(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__,
                                                                      v5,
                                                                      v6);
    byte_4B112BC = 1;
  }
  monitor = v4[1].monitor;
  if ( !monitor )
    goto LABEL_8;
  v8 = monitor[67];
  klass = (System_Action_o *)v4[3].klass;
  v10 = v4[1].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      klass,
      v4,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__3__,
      0LL);
    v4[3].klass = (Il2CppClass *)klass;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1BCA784(&v4[3], klass);
  }
  if ( !v8 )
LABEL_8:
    sub_1BCAA3C(this, method);
  (*(void (__fastcall **)(_QWORD, Il2CppClass *, _QWORD, System_Action_o *, _QWORD))(v8 + 24))(
    *(_QWORD *)(v8 + 64),
    v10,
    0LL,
    klass,
    *(_QWORD *)(v8 + 40));
}


void __fastcall EventTradeListViewItemManager___c__DisplayClass78_0___OpenRewardDialog_b__2(
        EventTradeListViewItemManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  EventTradeListViewItemManager___c__DisplayClass78_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__5; // x22
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21

  v4 = this;
  if ( (byte_4B112BE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1BCA7E0(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__,
                                                                      v5,
                                                                      v6);
    byte_4B112BE = 1;
  }
  _9__5 = v4->fields.__9__5;
  _4__this = v4->fields.__4__this;
  oldEventPoint = v4->fields.oldEventPoint;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)v4,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__5__,
      0LL);
    v4->fields.__9__5 = _9__5;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1BCA784(&v4->fields.__9__5, _9__5);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x2
  System_Action_o *_9__4; // x22
  EventTradeListViewItemManager_o *_4__this; // x20
  int32_t oldEventPoint; // w21

  v4 = this;
  if ( (byte_4B112BD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1BCA7E0(
                                                                      &Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__,
                                                                      v5,
                                                                      v6);
    byte_4B112BD = 1;
  }
  _9__4 = v4->fields.__9__4;
  _4__this = v4->fields.__4__this;
  oldEventPoint = v4->fields.oldEventPoint;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v4,
      Method_EventTradeListViewItemManager___c__DisplayClass78_0__OpenRewardDialog_b__4__,
      0LL);
    v4->fields.__9__4 = _9__4;
    this = (EventTradeListViewItemManager___c__DisplayClass78_0_o *)sub_1BCA784(&v4->fields.__9__4, _9__4);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
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
      sub_1BCAA3C(_4__this, method);
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
      sub_1BCAA3C(_4__this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  EventTradeGoodsMaster_o *Master_object; // x0
  __int64 v12; // x1
  struct EventTradeListViewItemManager_o *_4__this; // x8
  long double inited; // q0
  struct EventTradeListViewItem_array *itemList; // x8
  EventTradeListViewItem_o *v16; // x8
  EventTradeGoodsMaster_o *klass; // x2
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x0
  struct EventTradeListViewItemManager_o *v21; // x8
  struct System_Action_int__string____Action__o *playVoiceAction; // x9

  if ( (byte_4B112BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_string___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventTradeGoodsMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_14712/*"TradeNotificationDialogOpenTime"*/, v8, v9);
    byte_4B112BF = 1;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_14712/*"TradeNotificationDialogOpenTime"*/, this->fields.openTime, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = (EventTradeGoodsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventTradeGoodsMaster___);
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
        sub_1BCAA44(Master_object, v12);
      v16 = itemList->m_Items[0];
      if ( v16 )
      {
        Master_object = (EventTradeGoodsMaster_o *)v16->fields._TradeGoodsEntity_k__BackingField;
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
    sub_1BCAA3C(Master_object, v12);
  }
  v18 = Method_System_Array_Empty_string___;
  v19 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v19 )
  {
    sub_1C1C718(Method_System_Array_Empty_string___, v12);
    v19 = v18[7];
  }
  v20 = *(_QWORD *)(v19 + 16);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v20 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v20, v12);
  Master_object = *(EventTradeGoodsMaster_o **)(v18[7] + 16LL);
  if ( (*((_BYTE *)&Master_object[4].fields._MasterKind_k__BackingField + 5) & 1) == 0 )
    Master_object = (EventTradeGoodsMaster_o *)sub_1C1C6BC(inited);
  klass = (EventTradeGoodsMaster_o *)Master_object[2].fields._lookup->klass;
LABEL_23:
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_26;
  playVoiceAction = v21->fields.playVoiceAction;
  if ( !playVoiceAction )
    goto LABEL_26;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, EventTradeGoodsMaster_o *, _QWORD, _QWORD))playVoiceAction->fields.m_target)(
    playVoiceAction->fields.original_method_info,
    (unsigned int)v21->fields.svtId,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  SceneJumpInfo_o *v15; // x20
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  Il2CppObject *v22; // x3

  if ( (byte_4B112C0 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12781/*"ServantCombine"*/, v8, v9);
    byte_4B112C0 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v19, v20, v21);
      SceneJumpInfo___ctor_39380884(v15, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 0, 0LL);
      if ( Instance )
      {
        v18 = 22;
        goto LABEL_10;
      }
LABEL_15:
      sub_1BCAA3C(v16, v17);
    case 1:
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v16 )
      {
        v18 = 71;
        v22 = 0LL;
        goto LABEL_13;
      }
      goto LABEL_15;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v15 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v12, v13, v14);
      SceneJumpInfo___ctor_39380796(v15, (System_String_o *)StringLiteral_12781/*"ServantCombine"*/, 0LL);
      if ( Instance )
      {
        v18 = 32;
LABEL_10:
        v16 = Instance;
        v22 = (Il2CppObject *)v15;
LABEL_13:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)v16, v18, 1, v22, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t result; // w8
  Il2CppObject *Instance; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  SceneJumpInfo_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3

  if ( (byte_4B112C1 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12785/*"ServantEquipList"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12784/*"ServantEQCombine"*/, v10, v11);
    byte_4B112C1 = 1;
  }
  result = this->fields.result;
  switch ( result )
  {
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v21, v22, v23);
      SceneJumpInfo___ctor_39380884(v17, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 1, 0LL);
      if ( Instance )
      {
        v20 = 22;
        goto LABEL_12;
      }
LABEL_14:
      sub_1BCAA3C(v18, v19);
    case 1:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v24, v25, v26);
      SceneJumpInfo___ctor_39380796(v17, (System_String_o *)StringLiteral_12785/*"ServantEquipList"*/, 0LL);
      if ( Instance )
      {
        v20 = 71;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      v17 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v14, v15, v16);
      SceneJumpInfo___ctor_39380796(v17, (System_String_o *)StringLiteral_12784/*"ServantEQCombine"*/, 0LL);
      if ( Instance )
      {
        v20 = 32;
LABEL_12:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, v20, 1, (Il2CppObject *)v17, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  SceneJumpInfo_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B112C2 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v6, v7);
    byte_4B112C2 = 1;
  }
  if ( this->fields.result == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    v12 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v9, v10, v11);
    SceneJumpInfo___ctor_39380884(v12, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 2, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v13, v14);
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)v12, 0LL);
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
      sub_1BCAA3C(this, method);
    boxOverDlgCloseCallBack = _4__this->fields.boxOverDlgCloseCallBack;
    if ( boxOverDlgCloseCallBack )
      ActionExtensions__Call(boxOverDlgCloseCallBack, 0LL);
  }
}
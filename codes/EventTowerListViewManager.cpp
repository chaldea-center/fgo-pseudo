void EventTowerListViewManager___ctor(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventTowerListViewManager__CreateList(
        EventTowerListViewManager_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        int64_t nowFloor,
        bool isNextOpen,
        EventTowerRewardEntity_array *towerRewardList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v12; // x1
  il2cpp_array_size_t max_length; // x8
  int v14; // w28
  int v15; // w29
  EventTowerRewardEntity_o *v16; // x25
  int32_t towerId; // w8
  bool v18; // w26
  bool v19; // w9
  bool v20; // w8
  bool v21; // w27
  EventTowerListViewItem_o *v22; // x24
  const MethodInfo *v23; // x4
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8

  if ( (byte_4CE8F4E & 1) == 0 )
  {
    sub_1C7BAE8(&EventTowerListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4CE8F4E = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !towerRewardList )
    goto LABEL_24;
  max_length = towerRewardList->max_length;
  v14 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = towerRewardList->m_Items[v15];
      if ( !v16 )
        break;
      towerId = v16->fields.towerId;
      v18 = towerId < nowTowerId || towerId == nowTowerId && v16->fields.floor <= nowFloor;
      v19 = towerId <= nowTowerId + 1;
      v20 = towerId <= nowTowerId;
      v21 = isNextOpen ? v19 : v20;
      v22 = (EventTowerListViewItem_o *)sub_1C7BD34(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v22, v16, v18, v21, v23);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v22,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v22;
        itemList = (System_Collections_Generic_List_object__o *)sub_1C7BA8C(v27 + 4, v22);
      }
      if ( v14 == v15 )
        goto LABEL_23;
      if ( (unsigned int)++v15 >= LODWORD(towerRewardList->max_length) )
        sub_1C7BD48(itemList);
    }
LABEL_24:
    sub_1C7BD40(itemList, v12);
  }
LABEL_23:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void EventTowerListViewManager__CreateList_32942900(
        EventTowerListViewManager_o *this,
        int32_t eventId,
        int32_t firstTowerId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v10; // x21
  int v11; // w25
  int v12; // w26
  EventTowerRewardEntity_o *v13; // x23
  bool v14; // w24
  EventTowerListViewItem_o *v15; // x22
  const MethodInfo *v16; // x4
  intptr_t m_CachedPtr; // x8
  _QWORD *v18; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v20; // x8

  if ( (byte_4CE8F4F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventTowerRewardMaster___);
    sub_1C7BAE8(&EventTowerListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE8F4F = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventTowerRewardMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)EventTowerRewardMaster__GetTowerRewardAllEntityList(
                                (EventTowerRewardMaster_o *)Instance,
                                eventId,
                                0);
  if ( !Instance )
    goto LABEL_18;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v10 = Instance;
  v11 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = (EventTowerRewardEntity_o *)*((_QWORD *)&v10->fields._DispLog + v12);
      if ( !v13 )
        break;
      v14 = v13->fields.towerId <= firstTowerId;
      v15 = (EventTowerListViewItem_o *)sub_1C7BD34(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v15, v13, 0, v14, v16);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v15,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v20 + 32) = v15;
        Instance = (DataManager_o *)sub_1C7BA8C(v20 + 32, v15);
      }
      if ( v11 == v12 )
        goto LABEL_17;
      if ( (unsigned int)++v12 >= LODWORD(v10->fields.m_CancellationTokenSource) )
        sub_1C7BD48(Instance);
    }
LABEL_18:
    sub_1C7BD40(Instance, v8);
  }
LABEL_17:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


EventTowerListViewItem_o *EventTowerListViewManager__GetItem(
        EventTowerListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventTowerListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CE8F51 & 1) == 0 )
  {
    sub_1C7BAE8(&EventTowerListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CE8F51 = 1;
  }
  result = (EventTowerListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventTowerListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = EventTowerListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (EventTowerListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != EventTowerListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void EventTowerListViewManager__OnClickListView(
        EventTowerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CommonUI_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x10
  struct EventMaskFade_o *eventMaskFade; // x8
  CommonUI_o *v11; // x20
  struct MaskFade_o *maskFade; // x8
  struct ConnectMark_o *connectMark; // x8
  CommonUI_o *v14; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  intptr_t m_CachedPtr; // x22
  int32_t v17; // w21
  ServantStatusDialog_EndDelegate_o *v18; // x22
  struct MaskFade_o *v19; // x8
  Il2CppObject *Instance; // x0
  ItemEntity_o *skipAnimation; // x20
  CommonUI_o *v22; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v23; // x22
  struct MaskFade_o *v24; // x8
  struct ErrorDialog_o *warningDialog; // x8
  System_String_o *basePanel; // x21
  System_String_o *baseWindow; // x22
  CommonUI_o *v28; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v29; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4CE8F57 & 1) == 0 )
  {
    sub_1C7BAE8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C7BAE8(&Method_EventTowerListViewManager_OnClickListView__);
    sub_1C7BAE8(&Method_EventTowerListViewManager_closeItemDetail__);
    sub_1C7BAE8(&Method_EventTowerListViewManager_closeSvtDetail__);
    sub_1C7BAE8(&EventTowerListViewObject_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE8F57 = 1;
  }
  v5 = Method_EventTowerListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventTowerListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C7BB00(Method_EventTowerListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !obj
    || (naturalAligment = EventTowerListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventTowerListViewObject_TypeInfo
    || (Item = (CommonUI_o *)EventTowerListViewObject__GetItem((EventTowerListViewObject_o *)obj, v8)) == 0
    || (eventMaskFade = Item->fields.eventMaskFade, v11 = Item, !eventMaskFade) )
  {
LABEL_28:
    sub_1C7BD40(Item, v8);
  }
  switch ( HIDWORD(eventMaskFade->fields.m_CachedPtr) )
  {
    case 1:
    case 6:
    case 7:
      maskFade = Item->fields.maskFade;
      if ( !maskFade )
        goto LABEL_28;
      if ( LODWORD(maskFade->fields.maskSprite) )
        return;
      Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      connectMark = v11->fields.connectMark;
      if ( !connectMark )
        goto LABEL_28;
      v14 = Item;
      m_CachedPtr = connectMark->fields.m_CachedPtr;
      m_CancellationTokenSource = connectMark->fields.m_CancellationTokenSource;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v30.fields.currentCryptoKey = m_CachedPtr;
      *(_QWORD *)&v30.fields.fakeValue = m_CancellationTokenSource;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v30, 0);
      v18 = (ServantStatusDialog_EndDelegate_o *)sub_1C7BD34(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v18,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeSvtDetail__,
        0);
      if ( !v14 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_31495732(v14, 7, v17, v18, 0);
      break;
    case 2:
      v19 = Item->fields.maskFade;
      if ( !v19 )
        goto LABEL_28;
      if ( LODWORD(v19->fields.maskSprite) )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      skipAnimation = (ItemEntity_o *)v11->fields.skipAnimation;
      v22 = (CommonUI_o *)Instance;
      v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C7BD34(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        (intptr_t)Method_EventTowerListViewManager_closeItemDetail__,
        0);
      if ( !v22 )
        goto LABEL_28;
      CommonUI__OpenItemDetailDialog(v22, skipAnimation, v23, 50, 0);
      break;
    case 9:
      v24 = Item->fields.maskFade;
      if ( !v24 )
        goto LABEL_28;
      if ( LODWORD(v24->fields.maskSprite) )
        return;
      Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      warningDialog = v11->fields.warningDialog;
      if ( !warningDialog )
        goto LABEL_28;
      basePanel = (System_String_o *)warningDialog->fields.basePanel;
      baseWindow = (System_String_o *)warningDialog->fields.baseWindow;
      v28 = Item;
      v29 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C7BD34(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        (intptr_t)Method_EventTowerListViewManager_closeItemDetail__,
        0);
      if ( !v28 )
        goto LABEL_28;
      CommonUI__OpenItemDetailDialog_31559204(v28, basePanel, baseWindow, v29, 0);
      break;
    default:
      return;
  }
}


void EventTowerListViewManager__OnMoveEnd(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *CallbackFunc; // x20

  if ( (byte_4CE8F56 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8F56 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !gameObject )
          goto LABEL_20;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.element_class)(
          gameObject,
          1,
          gameObject->klass[1]._1.castClass);
      }
      if ( this->fields.initMode != 1 )
        goto LABEL_18;
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
        goto LABEL_18;
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
LABEL_18:
          CallbackFunc = this->fields.CallbackFunc;
          this->fields.CallbackFunc = 0;
          sub_1C7BA8C(&this->fields.CallbackFunc, 0);
          if ( CallbackFunc )
            ((void (__fastcall *)(intptr_t, intptr_t))CallbackFunc->fields.invoke_impl)(
              CallbackFunc->fields.method_code,
              CallbackFunc->fields.method);
          return;
        }
      }
LABEL_20:
      sub_1C7BD40(gameObject, v7);
    }
  }
}


void EventTowerListViewManager__RequestInto(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w24
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w25
  int32_t i; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3

  if ( (byte_4CE8F55 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventTowerListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CE8F55 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = EventTowerListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C7BD40(ObjectList, v5);
  size = ObjectList->fields._size;
  v7 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v8 = 0;
  for ( i = 0; i != size; ++i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             i,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      EventTowerListViewObject__Init_32945320((EventTowerListViewObject_o *)Item, 4, v11, this->fields.listInDelay, v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
  }
  if ( !v8 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTowerListViewManager__RequestListObject(
        EventTowerListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v13; // x24
  const MethodInfo *v14; // x3

  if ( (byte_4CE8F54 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventTowerListViewManager_OnMoveEnd__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
    sub_1C7BAE8(&StringLiteral_9968/*"OnMoveEnd"*/);
    byte_4CE8F54 = 1;
  }
  ObjectList = EventTowerListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v10 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v11 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v11,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      EventTowerListViewObject__Init_32944800((EventTowerListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_1C7BD40(ObjectList, v8);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9968/*"OnMoveEnd"*/,
    delay,
    0);
}


void EventTowerListViewManager__SetMode(
        EventTowerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc = callback;
  sub_1C7BA8C(&this->fields.CallbackFunc, callback);
  EventTowerListViewManager__SetMode_32944076(this, mode, v6);
}


void EventTowerListViewManager__SetMode_32944076(
        EventTowerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4CE8F53 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11395/*"RequestInto"*/);
    byte_4CE8F53 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  switch ( mode )
  {
    case 1:
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
        {
          sub_1C7BD40(gameObject, v8);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11395/*"RequestInto"*/,
        0.0,
        0);
      break;
    case 3:
      v6 = 3;
      goto LABEL_15;
    case 2:
      v6 = 2;
LABEL_15:
      EventTowerListViewManager__RequestListObject(this, v6, 0.0, v5);
      break;
  }
}


void EventTowerListViewManager__SetMode_32944380(
        EventTowerListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.CallbackFunc = callback;
  sub_1C7BA8C(&this->fields.CallbackFunc, callback);
  EventTowerListViewManager__SetMode_32944076(this, mode, v7);
}


void EventTowerListViewManager__SetNextFloorInfo(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  int size; // w8
  int v7; // w21
  int32_t v8; // w20
  __int64 naturalAligment; // x10

  if ( (byte_4CE8F50 & 1) == 0 )
  {
    sub_1C7BAE8(&EventTowerListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CE8F50 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
  {
    this->fields.itemList = itemSortList;
    sub_1C7BA8C(&this->fields.itemList, itemSortList);
    Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    if ( !Item )
      goto LABEL_13;
    size = Item->fields._size;
    v7 = size - 1;
    if ( size >= 1 )
    {
      v8 = 0;
      do
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v8,
                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          break;
        naturalAligment = EventTowerListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (EventTowerListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != EventTowerListViewItem_TypeInfo )
        {
          break;
        }
        if ( !LOBYTE(Item[3].klass) )
          goto LABEL_15;
        if ( v7 == v8 )
          goto LABEL_14;
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        ++v8;
      }
      while ( Item );
LABEL_13:
      sub_1C7BD40(Item, v4);
    }
LABEL_14:
    v8 = 0;
LABEL_15:
    ListViewManager__SetTopItem((ListViewManager_o *)this, v8, 0);
  }
}


void EventTowerListViewManager__SetObjectItem(
        EventTowerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventTowerListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4CE8F52 & 1) == 0 )
  {
    this = (EventTowerListViewManager_o *)sub_1C7BAE8(&EventTowerListViewObject_TypeInfo);
    byte_4CE8F52 = 1;
  }
  if ( !obj
    || (naturalAligment = EventTowerListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventTowerListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  EventTowerListViewObject__Init_32943948((EventTowerListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void EventTowerListViewManager__Update(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__Update((ListViewManager_o *)this, 0);
}


void EventTowerListViewManager__add_CallbackFunc(
        EventTowerListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc; // x21
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventTowerListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CE8F4A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CE8F4A = 1;
  }
  CallbackFunc = (System_Delegate_o *)this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(CallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_1C7C0DC(v7);
  EventTowerListViewManager__remove_CallbackFunc(v10, v11, v12);
}


void EventTowerListViewManager__closeItemDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CE8F58 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_EventTowerListViewManager_closeItemDetail__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE8F58 = 1;
  }
  v3 = Method_EventTowerListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventTowerListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_EventTowerListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void EventTowerListViewManager__closeSvtDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CE8F59 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CE8F59 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


System_Collections_Generic_List_EventTowerListViewObject__o *EventTowerListViewManager__get_ClippingObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v9; // x22
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 v12; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4CE8F4D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8F4D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !objectList )
          break;
        v9 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)EventTowerListViewObject__GetItem(
                                                                    (EventTowerListViewObject_o *)objectList,
                                                                    v4);
        if ( !objectList )
          break;
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44341312(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v11 = Method_System_Collections_Generic_List_EventTowerListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v12 = v3->fields._size;
          if ( (unsigned int)v12 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v9,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
          }
          else
          {
            v13 = &items->obj.klass + v12;
            v3->fields._size = v12 + 1;
            v13[4] = (Il2CppClass *)v9;
            sub_1C7BA8C(v13 + 4, v9);
          }
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1C7BD40(objectList, v4);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
}


System_Collections_Generic_List_EventTowerListViewObject__o *EventTowerListViewManager__get_ObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v7; // w21
  Il2CppObject *Item; // x22
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  System_Collections_Generic_List_object__o *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4CE8F4C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8F4C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v7,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0,
                                                                  0);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v10 = Method_System_Collections_Generic_List_EventTowerListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v11 = v3->fields._size;
        v12 = objectList;
        if ( (unsigned int)v11 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)objectList,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + v11;
          v3->fields._size = v11 + 1;
          v13[4] = (Il2CppClass *)v12;
          sub_1C7BA8C(v13 + 4, v12);
        }
      }
      if ( size == ++v7 )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1C7BD40(objectList, v4);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
}


void EventTowerListViewManager__remove_CallbackFunc(
        EventTowerListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc; // x21
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventTowerListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CE8F4B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CE8F4B = 1;
  }
  CallbackFunc = (System_Delegate_o *)this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(CallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CD78BC(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_1C7C0DC(v7);
  EventTowerListViewManager__Update(v10, v11);
}
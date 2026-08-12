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
  il2cpp_array_size_t max_length; // x27
  __int64 v14; // x28
  int v15; // w29
  EventTowerRewardEntity_o *v16; // x24
  int32_t towerId; // w8
  bool v18; // w25
  bool v19; // w26
  EventTowerListViewItem_o *v20; // x23
  const MethodInfo *v21; // x4
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8

  if ( (byte_596ACFF & 1) == 0 )
  {
    sub_2213A60(&EventTowerListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_596ACFF = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !towerRewardList )
    goto LABEL_20;
  max_length = towerRewardList->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    v15 = isNextOpen + nowTowerId;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= LODWORD(towerRewardList->max_length) )
        sub_2213CE4(itemList);
      v16 = towerRewardList->m_Items[v14];
      if ( !v16 )
        break;
      towerId = v16->fields.towerId;
      v18 = towerId < nowTowerId || towerId == nowTowerId && v16->fields.floor <= nowFloor;
      v19 = towerId <= v15;
      v20 = (EventTowerListViewItem_o *)sub_2213CCC(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v20, v16, v18, v19, v21);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v20,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v20;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v20, v22, v23, v24, v25, v26, v27);
      }
      if ( (_DWORD)max_length == (_DWORD)++v14 )
        goto LABEL_19;
    }
LABEL_20:
    sub_2213CDC(itemList, v12);
  }
LABEL_19:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void EventTowerListViewManager__CreateList_38963068(
        EventTowerListViewManager_o *this,
        int32_t eventId,
        int32_t firstTowerId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x25
  DataManager_o *v10; // x21
  __int64 v11; // x26
  EventTowerRewardEntity_o *v12; // x23
  bool v13; // w24
  EventTowerListViewItem_o *v14; // x22
  const MethodInfo *v15; // x4
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v25; // x8

  if ( (byte_596AD00 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventTowerRewardMaster___);
    sub_2213A60(&EventTowerListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AD00 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventTowerRewardMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)EventTowerRewardMaster__GetTowerRewardAllEntityList(
                                (EventTowerRewardMaster_o *)Instance,
                                eventId,
                                0);
  if ( !Instance )
    goto LABEL_17;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v10 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= LODWORD(v10->fields.m_CancellationTokenSource) )
        sub_2213CE4(Instance);
      v12 = (EventTowerRewardEntity_o *)*((_QWORD *)&v10->fields._DispLog + v11);
      if ( !v12 )
        break;
      v13 = v12->fields.towerId <= firstTowerId;
      v14 = (EventTowerListViewItem_o *)sub_2213CCC(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v14, v12, 0, v13, v15);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v14,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v25 + 32) = v14;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 32), (int32_t)v14, v16, v17, v18, v19, v20, v21);
      }
      if ( (_DWORD)m_CancellationTokenSource == (_DWORD)++v11 )
        goto LABEL_16;
    }
LABEL_17:
    sub_2213CDC(Instance, v8);
  }
LABEL_16:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


EventTowerListViewItem_o *EventTowerListViewManager__GetItem(
        EventTowerListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventTowerListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596AD02 & 1) == 0 )
  {
    sub_2213A60(&EventTowerListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596AD02 = 1;
  }
  result = (EventTowerListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventTowerListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int m_CachedPtr_high; // w8
  struct MaskFade_o *v13; // x8
  struct ErrorDialog_o *warningDialog; // x8
  CommonUI_o *v15; // x20
  System_String_o *basePanel; // x21
  System_String_o *baseWindow; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x23
  struct MaskFade_o *maskFade; // x8
  Il2CppObject *Instance; // x21
  ItemEntity_o *skipAnimation; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v22; // x22
  struct MaskFade_o *v23; // x8
  __int64 v24; // x2
  struct ConnectMark_o *connectMark; // x8
  CommonUI_o *v26; // x20
  intptr_t m_CachedPtr; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x22
  int32_t v29; // w21
  ServantStatusDialog_EndDelegate_o *v30; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_596AD08 & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_EventTowerListViewManager_OnClickListView__);
    sub_2213A60(&Method_EventTowerListViewManager_closeItemDetail__);
    sub_2213A60(&Method_EventTowerListViewManager_closeSvtDetail__);
    sub_2213A60(&EventTowerListViewObject_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AD08 = 1;
  }
  v5 = Method_EventTowerListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventTowerListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_EventTowerListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !obj )
    goto LABEL_32;
  naturalAligment = EventTowerListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_32;
  if ( (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventTowerListViewObject_TypeInfo )
    goto LABEL_32;
  Item = (CommonUI_o *)EventTowerListViewObject__GetItem((EventTowerListViewObject_o *)obj, v8);
  if ( !Item )
    goto LABEL_32;
  eventMaskFade = Item->fields.eventMaskFade;
  v11 = Item;
  if ( !eventMaskFade )
    goto LABEL_32;
  m_CachedPtr_high = HIDWORD(eventMaskFade->fields.m_CachedPtr);
  if ( m_CachedPtr_high <= 5 )
  {
    if ( m_CachedPtr_high != 1 )
    {
      if ( m_CachedPtr_high == 2 )
      {
        maskFade = Item->fields.maskFade;
        if ( !maskFade )
          goto LABEL_32;
        if ( !LODWORD(maskFade->fields.maskSprite) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          skipAnimation = (ItemEntity_o *)v11->fields.skipAnimation;
          v22 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v22,
            (Il2CppObject *)this,
            (intptr_t)Method_EventTowerListViewManager_closeItemDetail__,
            0);
          if ( !Instance )
            goto LABEL_32;
          CommonUI__OpenItemDetailDialog((CommonUI_o *)Instance, skipAnimation, v22, 50, 0);
        }
      }
      return;
    }
    goto LABEL_24;
  }
  if ( (unsigned int)(m_CachedPtr_high - 6) < 2 )
  {
LABEL_24:
    v23 = Item->fields.maskFade;
    if ( !v23 )
      goto LABEL_32;
    if ( !LODWORD(v23->fields.maskSprite) )
    {
      Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      connectMark = v11->fields.connectMark;
      if ( !connectMark )
        goto LABEL_32;
      v26 = Item;
      m_CachedPtr = connectMark->fields.m_CachedPtr;
      m_CancellationTokenSource = connectMark->fields.m_CancellationTokenSource;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v24);
      *(_QWORD *)&v31.fields.currentCryptoKey = m_CachedPtr;
      *(_QWORD *)&v31.fields.fakeValue = m_CancellationTokenSource;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v31, 0);
      v30 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v30,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeSvtDetail__,
        0);
      if ( !v26 )
        goto LABEL_32;
      CommonUI__OpenServantStatusDialog_37386528(v26, 7, v29, v30, 0);
    }
    return;
  }
  if ( m_CachedPtr_high == 9 )
  {
    v13 = Item->fields.maskFade;
    if ( !v13 )
      goto LABEL_32;
    if ( !LODWORD(v13->fields.maskSprite) )
    {
      Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      warningDialog = v11->fields.warningDialog;
      if ( warningDialog )
      {
        v15 = Item;
        basePanel = (System_String_o *)warningDialog->fields.basePanel;
        baseWindow = (System_String_o *)warningDialog->fields.baseWindow;
        v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          (intptr_t)Method_EventTowerListViewManager_closeItemDetail__,
          0);
        if ( v15 )
        {
          CommonUI__OpenItemDetailDialog_37450192(v15, basePanel, baseWindow, v18, 0);
          return;
        }
      }
LABEL_32:
      sub_2213CDC(Item, v8);
    }
  }
}


void EventTowerListViewManager__OnMoveEnd(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *CallbackFunc; // x20

  if ( (byte_596AD07 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596AD07 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc, 0, v9, v10, v11, v12, v13, v14);
          if ( CallbackFunc )
            ((void (__fastcall *)(intptr_t, intptr_t))CallbackFunc->fields.invoke_impl)(
              CallbackFunc->fields.method_code,
              CallbackFunc->fields.method);
          return;
        }
      }
LABEL_20:
      sub_2213CDC(gameObject, v8);
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
  System_String_o *v13; // x1
  float v14; // s0

  if ( (byte_596AD06 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventTowerListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596AD06 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = EventTowerListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_2213CDC(ObjectList, v5);
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
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      EventTowerListViewObject__Init_38965488((EventTowerListViewObject_o *)Item, 4, v11, this->fields.listInDelay, v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
  }
  if ( !v8 )
  {
LABEL_12:
    v13 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
    v14 = this->fields.listInDelay + 0.5;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v13, v14, 0);
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
  System_String_o *v15; // x1

  if ( (byte_596AD05 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventTowerListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596AD05 = 1;
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        break;
      EventTowerListViewObject__Init_38964968((EventTowerListViewObject_o *)Item, mode, v13, v14);
      if ( size == ++v11 )
        return;
    }
LABEL_10:
    sub_2213CDC(ObjectList, v8);
  }
  v15 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v15, delay, 0);
}


void EventTowerListViewManager__SetMode(
        EventTowerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.CallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  EventTowerListViewManager__SetMode_38964240(this, mode, v10);
}


void EventTowerListViewManager__SetMode_38964240(
        EventTowerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  EventTowerListViewManager_o *v6; // x0
  int32_t v7; // w1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v11; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596AD04 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11840/*"RequestInto"*/);
    byte_596AD04 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0);
  switch ( mode )
  {
    case 1:
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
        {
          sub_2213CDC(gameObject, v11);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11840/*"RequestInto"*/,
        0.0,
        0);
      break;
    case 3:
      v6 = this;
      v7 = 3;
      goto LABEL_8;
    case 2:
      v6 = this;
      v7 = 2;
LABEL_8:
      EventTowerListViewManager__RequestListObject(v6, v7, 0.0, v5);
      break;
  }
}


void EventTowerListViewManager__SetMode_38964548(
        EventTowerListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.CallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  EventTowerListViewManager__SetMode_38964240(this, mode, v11);
}


void EventTowerListViewManager__SetNextFloorInfo(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v12; // x8
  int size; // w21
  int32_t v14; // w20
  __int64 naturalAligment; // x10

  if ( (byte_596AD01 & 1) == 0 )
  {
    sub_2213A60(&EventTowerListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596AD01 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
  {
    this->fields.itemList = itemSortList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.itemList,
      (int32_t)itemSortList,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v12 = this->fields.itemSortList;
    if ( !v12 )
      goto LABEL_16;
    size = v12->fields._size;
    if ( size >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v14,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          break;
        naturalAligment = EventTowerListViewItem_TypeInfo->_2.naturalAligment;
        if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (EventTowerListViewItem_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != EventTowerListViewItem_TypeInfo )
        {
          break;
        }
        if ( !LOBYTE(Item[3].klass) )
          goto LABEL_14;
        if ( size == ++v14 )
          goto LABEL_13;
      }
LABEL_16:
      sub_2213CDC(Item, v11);
    }
LABEL_13:
    v14 = 0;
LABEL_14:
    ListViewManager__SetTopItem((ListViewManager_o *)this, v14, 0);
  }
}


void EventTowerListViewManager__SetObjectItem(
        EventTowerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596AD03 & 1) == 0 )
  {
    sub_2213A60(&EventTowerListViewObject_TypeInfo);
    byte_596AD03 = 1;
  }
  if ( obj
    && (naturalAligment = EventTowerListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == EventTowerListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 3 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  EventTowerListViewObject__Init_38964112((EventTowerListViewObject_o *)v7, v8, (const MethodInfo *)item);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventTowerListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596ACFB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596ACFB = 1;
  }
  CallbackFunc = (System_Delegate_o *)this->fields.CallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(CallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.CallbackFunc, v6, CallbackFunc);
    v10 = v9 == (_QWORD)CallbackFunc;
    CallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventTowerListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EventTowerListViewManager__remove_CallbackFunc(v11, v12, v13);
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

  if ( (byte_596AD09 & 1) == 0 )
  {
    sub_2213A60(&Method_EventTowerListViewManager_closeItemDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AD09 = 1;
  }
  v3 = Method_EventTowerListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventTowerListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventTowerListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void EventTowerListViewManager__closeSvtDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596AD0A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596AD0A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


System_Collections_Generic_List_EventTowerListViewObject__o *EventTowerListViewManager__get_ClippingObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  Il2CppObject *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0

  if ( (byte_596ACFE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ACFE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_22;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !Component_object )
          break;
        v12 = (Il2CppObject *)Component_object;
        Component_object = (System_Collections_Generic_List_object__o *)EventTowerListViewObject__GetItem(
                                                                          (EventTowerListViewObject_o *)Component_object,
                                                                          v5);
        if ( !Component_object )
          break;
        v5 = (const MethodInfo *)Component_object;
        if ( !LOBYTE(Component_object[2].fields._items)
          || (Component_object = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50835204(
                                                                                (ListViewManager_o *)this,
                                                                                (ListViewItem_o *)Component_object,
                                                                                0),
              ((unsigned __int8)Component_object & 1) != 0) )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v20 = Method_System_Collections_Generic_List_EventTowerListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          v21 = v3->fields._size;
          if ( (unsigned int)v21 >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v12,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + v21;
            v3->fields._size = v21 + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
    }
LABEL_22:
    sub_2213CDC(Component_object, v5);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
}


System_Collections_Generic_List_EventTowerListViewObject__o *EventTowerListViewManager__get_ObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *Component_object; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x8
  int size; // w23
  int32_t v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Item; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  System_Collections_Generic_List_object__o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_596ACFD & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596ACFD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_18;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Component_object = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !Component_object )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               Component_object,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                        (UnityEngine_Object_o *)Item,
                                                                        0,
                                                                        0);
      if ( ((unsigned __int8)Component_object & 1) != 0 )
      {
        if ( !Item )
          break;
        Component_object = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          (UnityEngine_GameObject_o *)Item,
                                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_EventTowerListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        v20 = v3->fields._size;
        v21 = Component_object;
        if ( (unsigned int)v20 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)Component_object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + v20;
          v3->fields._size = v20 + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( size == ++v8 )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
    }
LABEL_18:
    sub_2213CDC(Component_object, v5);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
}


void EventTowerListViewManager__remove_CallbackFunc(
        EventTowerListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *CallbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventTowerListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596ACFC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596ACFC = 1;
  }
  CallbackFunc = (System_Delegate_o *)this->fields.CallbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(CallbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.CallbackFunc, v6, CallbackFunc);
    v10 = v9 == (_QWORD)CallbackFunc;
    CallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventTowerListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EventTowerListViewManager__Update(v11, v12);
}
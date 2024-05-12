void __fastcall EventTowerListViewManager___ctor(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventTowerListViewManager__CreateList(
        EventTowerListViewManager_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        int64_t nowFloor,
        bool isNextOpen,
        EventTowerRewardEntity_array *towerRewardList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v11; // x1
  __int64 v12; // x28
  il2cpp_array_size_t v13; // w22
  EventTowerRewardEntity_o *v14; // x24
  int32_t towerId; // w8
  bool v16; // w25
  bool v17; // w9
  bool v18; // w8
  bool v19; // w27
  EventTowerListViewItem_o *v20; // x26
  const MethodInfo *v21; // x4
  __int64 v22; // x0

  if ( (byte_438A67B & 1) == 0 )
  {
    sub_B775C4(&EventTowerListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_438A67B = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !towerRewardList )
    goto LABEL_20;
  v12 = *(_QWORD *)&towerRewardList->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = towerRewardList->m_Items[v13];
      if ( !v14 )
        break;
      towerId = v14->fields.towerId;
      v16 = towerId < nowTowerId || towerId == nowTowerId && v14->fields.floor <= nowFloor;
      v17 = towerId <= nowTowerId + 1;
      v18 = towerId <= nowTowerId;
      v19 = isNextOpen ? v17 : v18;
      v20 = (EventTowerListViewItem_o *)sub_B77694(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v20, v14, v16, v19, v21);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v13 >= (int)v12 )
        goto LABEL_19;
      if ( v13 >= towerRewardList->max_length )
      {
        v22 = sub_B776C8(itemList);
        sub_B77668(v22, 0LL);
      }
    }
LABEL_20:
    sub_B7769C(itemList, v11);
  }
LABEL_19:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventTowerListViewManager__CreateList_24025160(
        EventTowerListViewManager_o *this,
        int32_t eventId,
        int32_t firstTowerId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct DataMasterBase_array *datalist; // x25
  DataManager_o *v11; // x21
  unsigned int v12; // w26
  EventTowerRewardEntity_o *v13; // x23
  bool v14; // w24
  EventTowerListViewItem_o *v15; // x22
  const MethodInfo *v16; // x4
  __int64 v17; // x0

  if ( (byte_438A67C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventTowerRewardMaster___);
    sub_B775C4(&EventTowerListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A67C = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventTowerRewardMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)EventTowerRewardMaster__GetTowerRewardAllEntityList(
                                (EventTowerRewardMaster_o *)Instance,
                                eventId,
                                v9);
  if ( !Instance )
    goto LABEL_14;
  datalist = Instance->fields.datalist;
  v11 = Instance;
  if ( (int)datalist >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = (EventTowerRewardEntity_o *)*((_QWORD *)&v11->fields.lookup + (int)v12);
      if ( !v13 )
        break;
      v14 = v13->fields.towerId <= firstTowerId;
      v15 = (EventTowerListViewItem_o *)sub_B77694(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v15, v13, 0, v14, v16);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v12 >= (int)datalist )
        goto LABEL_13;
      if ( v12 >= LODWORD(v11->fields.datalist) )
      {
        v17 = sub_B776C8(Instance);
        sub_B77668(v17, 0LL);
      }
    }
LABEL_14:
    sub_B7769C(Instance, v8);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


EventTowerListViewItem_o *__fastcall EventTowerListViewManager__GetItem(
        EventTowerListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438A67E & 1) == 0 )
  {
    sub_B775C4(&EventTowerListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438A67E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&EventTowerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (EventTowerListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == EventTowerListViewItem_TypeInfo )
    return (EventTowerListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall EventTowerListViewManager__OnClickListView(
        EventTowerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CommonUI_o *Item; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x10
  __int64 v8; // x10
  ListViewObject_o *v9; // x0
  struct MaskFade_o *maskFade; // x8
  CommonUI_o *v11; // x20
  struct UnityEngine_Camera_o *bgCamera; // x8
  struct UnityEngine_GameObject_o *skipAnimation; // x8
  CommonUI_o *v14; // x20
  UnityEngine_GameObject_c *klass; // x21
  __int64 v16; // x22
  int32_t v17; // w21
  ServantStatusDialog_EndDelegate_o *v18; // x22
  struct UnityEngine_Camera_o *v19; // x8
  WebViewManager_o *Instance; // x0
  ItemEntity_o *eventMaskFade; // x20
  CommonUI_o *v22; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v23; // x22
  struct UnityEngine_Camera_o *v24; // x8
  struct ConnectMark_o *connectMark; // x8
  System_String_o *markBase; // x21
  System_String_o *markSprite; // x22
  CommonUI_o *v28; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v29; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_438A684 & 1) == 0 )
  {
    sub_B775C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_EventTowerListViewManager_closeItemDetail__);
    sub_B775C4(&Method_EventTowerListViewManager_closeSvtDetail__);
    sub_B775C4(&EventTowerListViewObject_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A684 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj
    || (v7 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != EventTowerListViewObject_TypeInfo
    || ((v8 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1),
         *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v8)
      ? ((EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] != EventTowerListViewObject_TypeInfo
       ? (v9 = 0LL)
       : (v9 = obj))
      : (v9 = 0LL),
        (Item = (CommonUI_o *)EventTowerListViewObject__GetItem((EventTowerListViewObject_o *)v9, v6)) == 0LL
     || (maskFade = Item->fields.maskFade, v11 = Item, !maskFade)) )
  {
LABEL_35:
    sub_B7769C(Item, v6);
  }
  switch ( *((_DWORD *)&maskFade->fields.BaseMonoBehaviour_Fields + 1) )
  {
    case 1:
    case 6:
    case 7:
      bgCamera = Item->fields.bgCamera;
      if ( !bgCamera )
        goto LABEL_35;
      if ( LODWORD(bgCamera[1].monitor) )
        return;
      Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      skipAnimation = v11->fields.skipAnimation;
      if ( !skipAnimation )
        goto LABEL_35;
      v14 = Item;
      v16 = *(_QWORD *)&skipAnimation->fields.m_CachedPtr;
      klass = skipAnimation[1].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v30.fields.currentCryptoKey = v16;
      *(_QWORD *)&v30.fields.fakeValue = klass;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v30, 0LL);
      v18 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v18,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeSvtDetail__,
        0LL);
      if ( !v14 )
        goto LABEL_35;
      CommonUI__OpenServantStatusDialog_18069932(v14, 7, v17, v18, 0LL);
      break;
    case 2:
      v19 = Item->fields.bgCamera;
      if ( !v19 )
        goto LABEL_35;
      if ( LODWORD(v19[1].monitor) )
        return;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      eventMaskFade = (ItemEntity_o *)v11->fields.eventMaskFade;
      v22 = (CommonUI_o *)Instance;
      v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B77694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v22 )
        goto LABEL_35;
      CommonUI__OpenItemDetailDialog(v22, eventMaskFade, v23, 50, 0LL);
      break;
    case 9:
      v24 = Item->fields.bgCamera;
      if ( !v24 )
        goto LABEL_35;
      if ( LODWORD(v24[1].monitor) )
        return;
      Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      connectMark = v11->fields.connectMark;
      if ( !connectMark )
        goto LABEL_35;
      markBase = (System_String_o *)connectMark->fields.markBase;
      markSprite = (System_String_o *)connectMark->fields.markSprite;
      v28 = Item;
      v29 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B77694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v28 )
        goto LABEL_35;
      CommonUI__OpenItemDetailDialog_18121640(v28, markBase, markSprite, v29, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall EventTowerListViewManager__OnMoveEnd(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  System_Action_o *CallbackFunc; // x20

  if ( (byte_438A683 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A683 = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !gameObject )
          goto LABEL_22;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.castClass)(
          gameObject,
          1LL,
          gameObject->klass[1]._1.declaringType);
      }
      if ( this->fields.initMode != 1 )
        goto LABEL_20;
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
        goto LABEL_20;
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
LABEL_20:
          CallbackFunc = this->fields.CallbackFunc;
          this->fields.CallbackFunc = 0LL;
          sub_B77560((BattleServantConfConponent_o *)&this->fields.CallbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
          if ( CallbackFunc )
            System_Action__Invoke(CallbackFunc, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B7769C(gameObject, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__RequestInto(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  signed __int64 size; // x23
  System_Collections_Generic_List_EventTowerListViewObject__o *v7; // x20
  unsigned __int64 v8; // x25
  int v9; // w24
  EventTowerListViewObject_o *v10; // x21
  System_Action_o *v11; // x22
  float listInDelay; // s8
  const MethodInfo *v13; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438A682 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventTowerListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438A682 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventTowerListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_15:
    sub_B7769C(ObjectList, v5);
  size = ObjectList->fields._size;
  v7 = ObjectList;
  this->fields.callbackCount = size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v8 = 0LL;
  v9 = 0;
  do
  {
    if ( v8 >= (unsigned int)v7->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v10 = v7->fields._items->m_Items[v8];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v10, 0LL) )
    {
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
      if ( !v10 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v9;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventTowerListViewObject__Init(v10, 4, v11, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v13);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v8;
  }
  while ( (__int64)v8 < size );
  if ( !v9 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__RequestListObject(
        EventTowerListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventTowerListViewObject__o *v10; // x21
  int v11; // w24
  __int64 v12; // x25
  unsigned int v13; // w8
  EventTowerListViewObject_o *v14; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438A681 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventTowerListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438A681 = 1;
  }
  ObjectList = EventTowerListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v10 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v11 = ObjectList->fields._size;
    if ( v11 >= 1 )
    {
      v12 = 0LL;
      v13 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v13 <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v14 = v10->fields._items->m_Items[v12];
        v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
        if ( !v14 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventTowerListViewObject__Init(v14, mode, v15, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
        if ( (int)v12 + 1 >= v11 )
          return;
        v13 = v10->fields._size;
        ++v12;
      }
LABEL_14:
      sub_B7769C(ObjectList, v8);
    }
  }
}


void __fastcall EventTowerListViewManager__SetMode(
        EventTowerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.CallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventTowerListViewManager__SetMode_24026976(this, mode, v10);
}


void __fastcall EventTowerListViewManager__SetMode_24026976(
        EventTowerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_438A680 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_11644/*"RequestInto"*/);
    byte_438A680 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  switch ( mode )
  {
    case 1:
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
        {
          sub_B7769C(gameObject, v8);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11644/*"RequestInto"*/,
        0.0,
        0LL);
      break;
    case 3:
      v6 = 3;
      goto LABEL_8;
    case 2:
      v6 = 2;
LABEL_8:
      EventTowerListViewManager__RequestListObject(this, v6, 0.0, v5);
      break;
  }
}


void __fastcall EventTowerListViewManager__SetMode_24027304(
        EventTowerListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.CallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventTowerListViewManager__SetMode_24026976(this, mode, v11);
}


void __fastcall EventTowerListViewManager__SetNextFloorInfo(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x1
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v12; // x23
  int size; // w21
  int32_t v14; // w20
  ListViewItem_o *v15; // x8
  __int64 v16; // x11

  if ( (byte_438A67D & 1) == 0 )
  {
    sub_B775C4(&EventTowerListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438A67D = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
  {
    this->fields.itemList = itemSortList;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.itemList,
      (System_Int32_array **)itemSortList,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v12 = this->fields.itemSortList;
    if ( !v12 )
      goto LABEL_17;
    size = v12->fields._size;
    if ( size >= 1 )
    {
      v14 = 0;
      do
      {
        if ( v12->fields._size <= (unsigned int)v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v15 = v12->fields._items->m_Items[v14];
        if ( !v15 )
          break;
        v16 = *(&EventTowerListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v15->klass->_2.bitflags2 + 1) < (unsigned int)v16
          || (EventTowerListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] != EventTowerListViewItem_TypeInfo )
        {
          break;
        }
        if ( (EventTowerListViewItem_c *)v15->klass->_2.typeHierarchy[*(&EventTowerListViewItem_TypeInfo->_2.bitflags2
                                                                      + 1)
                                                                    - 1] != EventTowerListViewItem_TypeInfo )
          v15 = 0LL;
        if ( !LOBYTE(v15[1].klass) )
          goto LABEL_19;
        if ( ++v14 >= size )
          goto LABEL_18;
        v12 = this->fields.itemSortList;
      }
      while ( v12 );
LABEL_17:
      sub_B7769C(v10, v11);
    }
LABEL_18:
    v14 = 0;
LABEL_19:
    ListViewManager__SetTopItem((ListViewManager_o *)this, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__SetObjectItem(
        EventTowerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventTowerListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_438A67F & 1) == 0 )
  {
    this = (EventTowerListViewManager_o *)sub_B775C4(&EventTowerListViewObject_TypeInfo);
    byte_438A67F = 1;
  }
  if ( !obj
    || (v6 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventTowerListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 3 )
    v12 = 3;
  else
    v12 = 2;
  EventTowerListViewObject__Init((EventTowerListViewObject_o *)obj, v12, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v9, v8);
}


void __fastcall EventTowerListViewManager__Update(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__Update((ListViewManager_o *)this, 0LL);
}


void __fastcall EventTowerListViewManager__add_CallbackFunc(
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

  if ( (byte_438A677 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438A677 = 1;
  }
  CallbackFunc = (System_Delegate_o *)this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(CallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_B77990(v7);
  EventTowerListViewManager__remove_CallbackFunc(v10, v11, v12);
}


void __fastcall EventTowerListViewManager__closeItemDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438A685 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A685 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall EventTowerListViewManager__closeSvtDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438A686 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438A686 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventTowerListViewObject__o *__fastcall EventTowerListViewManager__get_ClippingObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x21

  if ( (byte_438A67A & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A67A = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Inequality(
                                                                                         v9,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v9,
                                                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v10 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)EventTowerListViewObject__GetItem(
                                                                                           (EventTowerListViewObject_o *)Component_srcLineSprite,
                                                                                           v5);
        if ( !Component_srcLineSprite )
          break;
        v5 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_24185472(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v3 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v10,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
        }
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B7769C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
}


System_Collections_Generic_List_EventTowerListViewObject__o *__fastcall EventTowerListViewManager__get_ObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21

  if ( (byte_438A679 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A679 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v9 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v9,
                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !v3 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
      }
      if ( (__int64)++v8 >= size )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B7769C(Component_srcLineSprite, v5);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v3;
}


void __fastcall EventTowerListViewManager__remove_CallbackFunc(
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

  if ( (byte_438A678 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438A678 = 1;
  }
  CallbackFunc = (System_Delegate_o *)this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(CallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_B77990(v7);
  EventTowerListViewManager__Update(v10, v11);
}
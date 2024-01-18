void __fastcall EventTowerListViewManager___ctor(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__CreateList(
        EventTowerListViewManager_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        int64_t nowFloor,
        bool isNextOpen,
        EventTowerRewardEntity_array *towerRewardList,
        const MethodInfo *method)
{
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v12; // x1
  __int64 v13; // x28
  il2cpp_array_size_t v14; // w22
  EventTowerRewardEntity_o *v15; // x24
  int32_t towerId; // w8
  bool v17; // w25
  bool v18; // w9
  bool v19; // w8
  bool v20; // w27
  EventTowerListViewItem_o *v21; // x26
  const MethodInfo *v22; // x4
  __int64 v23; // x0

  if ( (byte_4188234 & 1) == 0 )
  {
    sub_B2C35C(&EventTowerListViewItem_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    byte_4188234 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !towerRewardList )
    goto LABEL_20;
  v13 = *(_QWORD *)&towerRewardList->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = towerRewardList->m_Items[v14];
      if ( !v15 )
        break;
      towerId = v15->fields.towerId;
      v17 = towerId < nowTowerId || towerId == nowTowerId && v15->fields.floor <= nowFloor;
      v18 = towerId <= nowTowerId + 1;
      v19 = towerId <= nowTowerId;
      v20 = isNextOpen ? v18 : v19;
      v21 = (EventTowerListViewItem_o *)sub_B2C42C(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v21, v15, v17, v20, v22);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v14 >= (int)v13 )
        goto LABEL_19;
      if ( v14 >= towerRewardList->max_length )
      {
        v23 = sub_B2C460(itemList);
        sub_B2C400(v23, 0LL);
      }
    }
LABEL_20:
    sub_B2C434(itemList, v12);
  }
LABEL_19:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__CreateList_26038272(
        EventTowerListViewManager_o *this,
        int32_t eventId,
        int32_t firstTowerId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct DataMasterBase_array *datalist; // x25
  DataManager_o *v14; // x21
  unsigned int v15; // w26
  EventTowerRewardEntity_o *v16; // x23
  bool v17; // w24
  EventTowerListViewItem_o *v18; // x22
  const MethodInfo *v19; // x4
  __int64 v20; // x0

  if ( (byte_4188235 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTowerRewardMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&EventTowerListViewItem_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4188235 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTowerRewardMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)EventTowerRewardMaster__GetTowerRewardAllEntityList(
                                (EventTowerRewardMaster_o *)Instance,
                                eventId,
                                v12);
  if ( !Instance )
    goto LABEL_14;
  datalist = Instance->fields.datalist;
  v14 = Instance;
  if ( (int)datalist >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = (EventTowerRewardEntity_o *)*((_QWORD *)&v14->fields.lookup + (int)v15);
      if ( !v16 )
        break;
      v17 = v16->fields.towerId <= firstTowerId;
      v18 = (EventTowerListViewItem_o *)sub_B2C42C(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v18, v16, 0, v17, v19);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v15 >= (int)datalist )
        goto LABEL_13;
      if ( v15 >= LODWORD(v14->fields.datalist) )
      {
        v20 = sub_B2C460(Instance);
        sub_B2C400(v20, 0LL);
      }
    }
LABEL_14:
    sub_B2C434(Instance, v11);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventTowerListViewItem_o *__fastcall EventTowerListViewManager__GetItem(
        EventTowerListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4188237 & 1) == 0 )
  {
    sub_B2C35C(&EventTowerListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4188237 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&EventTowerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (EventTowerListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == EventTowerListViewItem_TypeInfo )
    return (EventTowerListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall EventTowerListViewManager__OnClickListView(
        EventTowerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CommonUI_o *Item; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x10
  __int64 v15; // x10
  ListViewObject_o *v16; // x0
  struct MaskFade_o *maskFade; // x8
  CommonUI_o *v18; // x20
  struct UnityEngine_Camera_o *bgCamera; // x8
  struct UnityEngine_GameObject_o *skipAnimation; // x8
  CommonUI_o *v21; // x20
  UnityEngine_GameObject_c *klass; // x21
  __int64 v23; // x22
  int32_t v24; // w21
  ServantStatusDialog_EndDelegate_o *v25; // x22
  struct UnityEngine_Camera_o *v26; // x8
  WebViewManager_o *Instance; // x0
  ItemEntity_o *eventMaskFade; // x20
  CommonUI_o *v29; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v30; // x22
  struct UnityEngine_Camera_o *v31; // x8
  struct ConnectMark_o *connectMark; // x8
  System_String_o *markBase; // x21
  System_String_o *markSprite; // x22
  CommonUI_o *v35; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v36; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_418823D & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_EventTowerListViewManager_closeItemDetail__, v6);
    sub_B2C35C(&Method_EventTowerListViewManager_closeSvtDetail__, v7);
    sub_B2C35C(&EventTowerListViewObject_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    byte_418823D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj
    || (v14 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v14)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v14 - 1] != EventTowerListViewObject_TypeInfo
    || ((v15 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1),
         *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v15)
      ? ((EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v15 - 1] != EventTowerListViewObject_TypeInfo
       ? (v16 = 0LL)
       : (v16 = obj))
      : (v16 = 0LL),
        (Item = (CommonUI_o *)EventTowerListViewObject__GetItem((EventTowerListViewObject_o *)v16, v13)) == 0LL
     || (maskFade = Item->fields.maskFade, v18 = Item, !maskFade)) )
  {
LABEL_35:
    sub_B2C434(Item, v13);
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
      Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      skipAnimation = v18->fields.skipAnimation;
      if ( !skipAnimation )
        goto LABEL_35;
      v21 = Item;
      v23 = *(_QWORD *)&skipAnimation->fields.m_CachedPtr;
      klass = skipAnimation[1].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = v23;
      *(_QWORD *)&v37.fields.fakeValue = klass;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v37, 0LL);
      v25 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v25,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeSvtDetail__,
        0LL);
      if ( !v21 )
        goto LABEL_35;
      CommonUI__OpenServantStatusDialog_17985072(v21, 7, v24, v25, 0LL);
      break;
    case 2:
      v26 = Item->fields.bgCamera;
      if ( !v26 )
        goto LABEL_35;
      if ( LODWORD(v26[1].monitor) )
        return;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      eventMaskFade = (ItemEntity_o *)v18->fields.eventMaskFade;
      v29 = (CommonUI_o *)Instance;
      v30 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v29 )
        goto LABEL_35;
      CommonUI__OpenItemDetailDialog(v29, eventMaskFade, v30, 50, 0LL);
      break;
    case 9:
      v31 = Item->fields.bgCamera;
      if ( !v31 )
        goto LABEL_35;
      if ( LODWORD(v31[1].monitor) )
        return;
      Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      connectMark = v18->fields.connectMark;
      if ( !connectMark )
        goto LABEL_35;
      markBase = (System_String_o *)connectMark->fields.markBase;
      markSprite = (System_String_o *)connectMark->fields.markSprite;
      v35 = Item;
      v36 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v35 )
        goto LABEL_35;
      CommonUI__OpenItemDetailDialog_18036692(v35, markBase, markSprite, v36, 0LL);
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

  if ( (byte_418823C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418823C = 1;
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
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.CallbackFunc, 0LL, v8, v9, v10, v11, v12, v13);
          if ( CallbackFunc )
            System_Action__Invoke(CallbackFunc, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B2C434(gameObject, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__RequestInto(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  signed __int64 size; // x23
  System_Collections_Generic_List_EventTowerListViewObject__o *v11; // x20
  unsigned __int64 v12; // x25
  int v13; // w24
  EventTowerListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  float listInDelay; // s8
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418823B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventTowerListViewManager_OnMoveEnd__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__, v5);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v6);
    byte_418823B = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventTowerListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B2C434(ObjectList, v9);
  size = ObjectList->fields._size;
  v11 = ObjectList;
  this->fields.callbackCount = size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( v12 >= (unsigned int)v11->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = v11->fields._items->m_Items[v12];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v14, 0LL) )
    {
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v13;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventTowerListViewObject__Init(v14, 4, v15, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v17);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v12;
  }
  while ( (__int64)v12 < size );
  if ( !v13 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v12; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventTowerListViewObject__o *v14; // x21
  int v15; // w24
  __int64 v16; // x25
  unsigned int v17; // w8
  EventTowerListViewObject_o *v18; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418823A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_EventTowerListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__, v9);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v10);
    byte_418823A = 1;
  }
  ObjectList = EventTowerListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v14 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v15 = ObjectList->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      v17 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v17 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v18 = v14->fields._items->m_Items[v16];
        v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
        if ( !v18 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventTowerListViewObject__Init(v18, mode, v19, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v20);
        if ( (int)v16 + 1 >= v15 )
          return;
        v17 = v14->fields._size;
        ++v16;
      }
LABEL_14:
      sub_B2C434(ObjectList, v12);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventTowerListViewManager__SetMode_26040088(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__SetMode_26040088(
        EventTowerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4188239 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&StringLiteral_11429/*"RequestInto"*/, v5);
    byte_4188239 = 1;
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
          sub_B2C434(gameObject, v9);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11429/*"RequestInto"*/,
        0.0,
        0LL);
      break;
    case 3:
      v7 = 3;
      goto LABEL_8;
    case 2:
      v7 = 2;
LABEL_8:
      EventTowerListViewManager__RequestListObject(this, v7, 0.0, v6);
      break;
  }
}


void __fastcall EventTowerListViewManager__SetMode_26040416(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventTowerListViewManager__SetMode_26040088(this, mode, v11);
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
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v14; // x23
  int size; // w21
  int32_t v16; // w20
  ListViewItem_o *v17; // x8
  __int64 v18; // x11

  if ( (byte_4188236 & 1) == 0 )
  {
    sub_B2C35C(&EventTowerListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_4188236 = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
  {
    this->fields.itemList = itemSortList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.itemList,
      (System_Int32_array **)itemSortList,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v14 = this->fields.itemSortList;
    if ( !v14 )
      goto LABEL_17;
    size = v14->fields._size;
    if ( size >= 1 )
    {
      v16 = 0;
      do
      {
        if ( v14->fields._size <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v17 = v14->fields._items->m_Items[v16];
        if ( !v17 )
          break;
        v18 = *(&EventTowerListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v18
          || (EventTowerListViewItem_c *)v17->klass->_2.typeHierarchy[v18 - 1] != EventTowerListViewItem_TypeInfo )
        {
          break;
        }
        if ( (EventTowerListViewItem_c *)v17->klass->_2.typeHierarchy[*(&EventTowerListViewItem_TypeInfo->_2.bitflags2
                                                                      + 1)
                                                                    - 1] != EventTowerListViewItem_TypeInfo )
          v17 = 0LL;
        if ( !LOBYTE(v17[1].klass) )
          goto LABEL_19;
        if ( ++v16 >= size )
          goto LABEL_18;
        v14 = this->fields.itemSortList;
      }
      while ( v14 );
LABEL_17:
      sub_B2C434(v12, v13);
    }
LABEL_18:
    v16 = 0;
LABEL_19:
    ListViewManager__SetTopItem((ListViewManager_o *)this, v16, 0LL);
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
  if ( (byte_4188238 & 1) == 0 )
  {
    this = (EventTowerListViewManager_o *)sub_B2C35C(&EventTowerListViewObject_TypeInfo, obj);
    byte_4188238 = 1;
  }
  if ( !obj
    || (v6 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventTowerListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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

  if ( (byte_4188230 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4188230 = 1;
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
    v8 = sub_B20D74(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_B2C728(v7);
  EventTowerListViewManager__remove_CallbackFunc(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__closeItemDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418823E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418823E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__closeSvtDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418823F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418823F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventTowerListViewObject__o *__fastcall EventTowerListViewManager__get_ClippingObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v16; // x21

  if ( (byte_4188233 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4188233 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Inequality(
                                                                                         v15,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v15,
                                                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v16 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)EventTowerListViewObject__GetItem(
                                                                                           (EventTowerListViewObject_o *)Component_srcLineSprite,
                                                                                           v11);
        if ( !Component_srcLineSprite )
          break;
        v11 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_24147020(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v9 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            v16,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
        }
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v9;
}


System_Collections_Generic_List_EventTowerListViewObject__o *__fastcall EventTowerListViewManager__get_ObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v14; // x23
  UnityEngine_Object_o *v15; // x21

  if ( (byte_4188232 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4188232 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v15 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v14];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v15 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v15,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
      }
      if ( (__int64)++v14 >= size )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v9;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B2C434(Component_srcLineSprite, v11);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v9;
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

  if ( (byte_4188231 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4188231 = 1;
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
    v8 = sub_B20D74(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_B2C728(v7);
  EventTowerListViewManager__Update(v10, v11);
}
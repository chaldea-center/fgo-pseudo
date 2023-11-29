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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x28
  il2cpp_array_size_t v16; // w22
  EventTowerRewardEntity_o *v17; // x24
  int32_t towerId; // w8
  bool v19; // w25
  bool v20; // w9
  bool v21; // w8
  bool v22; // w27
  EventTowerListViewItem_o *v23; // x26
  const MethodInfo *v24; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v26; // x0

  if ( (byte_40F9BB9 & 1) == 0 )
  {
    sub_B16FFC(&EventTowerListViewItem_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    byte_40F9BB9 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !towerRewardList )
    goto LABEL_20;
  v15 = *(_QWORD *)&towerRewardList->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = towerRewardList->m_Items[v16];
      if ( !v17 )
        break;
      towerId = v17->fields.towerId;
      v19 = towerId < nowTowerId || towerId == nowTowerId && v17->fields.floor <= nowFloor;
      v20 = towerId <= nowTowerId + 1;
      v21 = towerId <= nowTowerId;
      v22 = isNextOpen ? v20 : v21;
      v23 = (EventTowerListViewItem_o *)sub_B170CC(EventTowerListViewItem_TypeInfo, v11, v12, v13, v14);
      EventTowerListViewItem___ctor(v23, v17, v19, v22, v24);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v16 >= (int)v15 )
        goto LABEL_19;
      if ( v16 >= towerRewardList->max_length )
      {
        sub_B17100(v26, v11, v12);
        sub_B170A0();
      }
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_19:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__CreateList_24560908(
        EventTowerListViewManager_o *this,
        int32_t eventId,
        int32_t firstTowerId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  EventTowerRewardMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v12; // x2
  EventTowerRewardEntity_array *TowerRewardAllEntityList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x25
  EventTowerRewardEntity_array *v19; // x21
  il2cpp_array_size_t v20; // w26
  EventTowerRewardEntity_o *v21; // x23
  bool v22; // w24
  EventTowerListViewItem_o *v23; // x22
  const MethodInfo *v24; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v26; // x0

  if ( (byte_40F9BBA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTowerRewardMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&EventTowerListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F9BBA = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (EventTowerRewardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTowerRewardMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  TowerRewardAllEntityList = EventTowerRewardMaster__GetTowerRewardAllEntityList(
                               MasterData_WarQuestSelectionMaster,
                               eventId,
                               v12);
  if ( !TowerRewardAllEntityList )
    goto LABEL_14;
  v18 = *(_QWORD *)&TowerRewardAllEntityList->max_length;
  v19 = TowerRewardAllEntityList;
  if ( (int)v18 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = v19->m_Items[v20];
      if ( !v21 )
        break;
      v22 = v21->fields.towerId <= firstTowerId;
      v23 = (EventTowerListViewItem_o *)sub_B170CC(EventTowerListViewItem_TypeInfo, v14, v15, v16, v17);
      EventTowerListViewItem___ctor(v23, v21, 0, v22, v24);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v20 >= (int)v18 )
        goto LABEL_13;
      if ( v20 >= v19->max_length )
      {
        sub_B17100(v26, v14, v15);
        sub_B170A0();
      }
    }
LABEL_14:
    sub_B170D4();
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

  if ( (byte_40F9BBC & 1) == 0 )
  {
    sub_B16FFC(&EventTowerListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40F9BBC = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  const MethodInfo *v12; // x1
  __int64 v13; // x10
  __int64 v14; // x10
  ListViewObject_o *v15; // x0
  EventTowerListViewItem_o *Item; // x0
  struct GiftEntity_o *clearReward; // x8
  EventTowerListViewItem_o *v18; // x20
  struct EventTowerRewardEntity_o *itemInfo; // x8
  WebViewManager_o *Instance; // x0
  struct ServantEntity_o *servantEntity; // x8
  CommonUI_o *v22; // x20
  __int64 v23; // x21
  __int64 v24; // x22
  int32_t v25; // w21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  ServantStatusDialog_EndDelegate_o *v30; // x22
  struct EventTowerRewardEntity_o *v31; // x8
  WebViewManager_o *v32; // x0
  ItemEntity_o *itemEntity; // x20
  CommonUI_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v39; // x22
  struct EventTowerRewardEntity_o *v40; // x8
  WebViewManager_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  struct ServantCostumeEntity_o *servantCostumeEntity; // x8
  System_String_o *name; // x21
  System_String_o *detail; // x22
  CommonUI_o *v49; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v50; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_40F9BC2 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_EventTowerListViewManager_closeItemDetail__, v6);
    sub_B16FFC(&Method_EventTowerListViewManager_closeSvtDetail__, v7);
    sub_B16FFC(&EventTowerListViewObject_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    byte_40F9BC2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj
    || (v13 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v13)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v13 - 1] != EventTowerListViewObject_TypeInfo
    || ((v14 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1),
         *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v14)
      ? ((EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v14 - 1] != EventTowerListViewObject_TypeInfo
       ? (v15 = 0LL)
       : (v15 = obj))
      : (v15 = 0LL),
        (Item = EventTowerListViewObject__GetItem((EventTowerListViewObject_o *)v15, v12)) == 0LL
     || (clearReward = Item->fields.clearReward, v18 = Item, !clearReward)) )
  {
LABEL_35:
    sub_B170D4();
  }
  switch ( clearReward->fields.type )
  {
    case 1:
    case 6:
    case 7:
      itemInfo = Item->fields.itemInfo;
      if ( !itemInfo )
        goto LABEL_35;
      if ( itemInfo->fields.iconId )
        return;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantEntity = v18->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_35;
      v22 = (CommonUI_o *)Instance;
      v24 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v23 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v51.fields.currentCryptoKey = v24;
      *(_QWORD *)&v51.fields.fakeValue = v23;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v51, 0LL);
      v30 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                   ServantStatusDialog_EndDelegate_TypeInfo,
                                                   v26,
                                                   v27,
                                                   v28,
                                                   v29);
      ServantStatusDialog_EndDelegate___ctor(
        v30,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeSvtDetail__,
        0LL);
      if ( !v22 )
        goto LABEL_35;
      CommonUI__OpenServantStatusDialog_18251308(v22, 7, v25, v30, 0LL);
      break;
    case 2:
      v31 = Item->fields.itemInfo;
      if ( !v31 )
        goto LABEL_35;
      if ( v31->fields.iconId )
        return;
      v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEntity = v18->fields.itemEntity;
      v34 = (CommonUI_o *)v32;
      v39 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                        ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                        v35,
                                                        v36,
                                                        v37,
                                                        v38);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v39,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v34 )
        goto LABEL_35;
      CommonUI__OpenItemDetailDialog(v34, itemEntity, v39, 50, 0LL);
      break;
    case 9:
      v40 = Item->fields.itemInfo;
      if ( !v40 )
        goto LABEL_35;
      if ( v40->fields.iconId )
        return;
      v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      servantCostumeEntity = v18->fields.servantCostumeEntity;
      if ( !servantCostumeEntity )
        goto LABEL_35;
      name = servantCostumeEntity->fields.name;
      detail = servantCostumeEntity->fields.detail;
      v49 = (CommonUI_o *)v41;
      v50 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                        ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                        v42,
                                                        v43,
                                                        v44,
                                                        v45);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v50,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v49 )
        goto LABEL_35;
      CommonUI__OpenItemDetailDialog_18297320(v49, name, detail, v50, 0LL);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *CallbackFunc; // x20

  if ( (byte_40F9BC1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9BC1 = 1;
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
        v13 = this->fields.scrollView;
        if ( !v13 )
          goto LABEL_22;
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
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
      v15 = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( v15 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
LABEL_20:
          CallbackFunc = this->fields.CallbackFunc;
          this->fields.CallbackFunc = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.CallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
          if ( CallbackFunc )
            System_Action__Invoke(CallbackFunc, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B170D4();
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
  signed __int64 size; // x23
  System_Collections_Generic_List_EventTowerListViewObject__o *v10; // x20
  unsigned __int64 v11; // x25
  int v12; // w24
  EventTowerListViewObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22
  float listInDelay; // s8
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9BC0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventTowerListViewManager_OnMoveEnd__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__, v5);
    sub_B16FFC(&StringLiteral_10004, v6);
    byte_40F9BC0 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventTowerListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B170D4();
  size = ObjectList->fields._size;
  v10 = ObjectList;
  this->fields.callbackCount = size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( v11 >= (unsigned int)v10->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = v10->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventTowerListViewObject__Init(v13, 4, v18, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v20);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v11;
  }
  while ( (__int64)v11 < size );
  if ( !v12 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  int32_t size; // w8
  System_Collections_Generic_List_EventTowerListViewObject__o *v17; // x21
  int v18; // w24
  __int64 v19; // x25
  unsigned int v20; // w8
  EventTowerListViewObject_o *v21; // x22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F9BBF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_EventTowerListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__, v9);
    sub_B16FFC(&StringLiteral_10004, v10);
    byte_40F9BBF = 1;
  }
  ObjectList = EventTowerListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v17 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v18 = ObjectList->fields._size;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      v20 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v20 <= (unsigned int)v19 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v21 = v17->fields._items->m_Items[v19];
        v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
        System_Action___ctor(v22, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
        if ( !v21 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventTowerListViewObject__Init(v21, mode, v22, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v23);
        if ( (int)v19 + 1 >= v18 )
          return;
        v20 = v17->fields._size;
        ++v19;
      }
LABEL_14:
      sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventTowerListViewManager__SetMode_24562724(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__SetMode_24562724(
        EventTowerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9BBE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&StringLiteral_11393, v5);
    byte_40F9BBE = 1;
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
        v9 = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !v9 || (gameObject = UnityEngine_Component__get_gameObject(v9, 0LL)) == 0LL )
          sub_B170D4();
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11393,
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


void __fastcall EventTowerListViewManager__SetMode_24563052(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventTowerListViewManager__SetMode_24562724(this, mode, v11);
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
  struct System_Collections_Generic_List_ListViewItem__o *v12; // x23
  int size; // w21
  int32_t v14; // w20
  ListViewItem_o *v15; // x8
  __int64 v16; // x11

  if ( (byte_40F9BBB & 1) == 0 )
  {
    sub_B16FFC(&EventTowerListViewItem_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    byte_40F9BBB = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
  {
    this->fields.itemList = itemSortList;
    sub_B16F98(
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
      sub_B170D4();
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
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  if ( (byte_40F9BBD & 1) == 0 )
  {
    sub_B16FFC(&EventTowerListViewObject_TypeInfo, obj);
    byte_40F9BBD = 1;
  }
  if ( !obj
    || (v6 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventTowerListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
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

  if ( (byte_40F9BB5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F9BB5 = 1;
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
    v8 = sub_B0BA14(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_B173C8(v7);
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

  if ( (byte_40F9BC3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F9BC3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__closeSvtDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40F9BC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F9BC4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventTowerListViewObject__o *__fastcall EventTowerListViewManager__get_ClippingObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  EventTowerListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40F9BB8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F9BB8 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventTowerListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (EventTowerListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  v16,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
        Item = (ListViewItem_o *)EventTowerListViewObject__GetItem(Component_srcLineSprite, v18);
        if ( !Item )
          break;
        if ( !Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            v19,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
        }
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v12;
}


System_Collections_Generic_List_EventTowerListViewObject__o *__fastcall EventTowerListViewManager__get_ObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v15; // x23
  UnityEngine_GameObject_o *v16; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40F9BB7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F9BB7 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventTowerListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = objectList->fields._items->m_Items[v15];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
      {
        if ( !v16 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v16,
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
      }
      if ( (__int64)++v15 >= size )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v12;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v12;
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

  if ( (byte_40F9BB6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40F9BB6 = 1;
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
    v8 = sub_B0BA14(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_B173C8(v7);
  EventTowerListViewManager__Update(v10, v11);
}
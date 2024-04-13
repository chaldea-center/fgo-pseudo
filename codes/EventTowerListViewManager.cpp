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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v14; // x1
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
  __int64 v25; // x0

  if ( (byte_42E8479 & 1) == 0 )
  {
    sub_B5D5C4(&EventTowerListViewItem_TypeInfo, eventId, nowTowerId, nowFloor);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10, v11, v12);
    byte_42E8479 = 1;
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
      v23 = (EventTowerListViewItem_o *)sub_B5D694(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v23, v17, v19, v22, v24);
      itemList = this->fields.itemList;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v16 >= (int)v15 )
        goto LABEL_19;
      if ( v16 >= towerRewardList->max_length )
      {
        v25 = sub_B5D6C8(itemList);
        sub_B5D668(v25, 0LL);
      }
    }
LABEL_20:
    sub_B5D69C(itemList, v14);
  }
LABEL_19:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventTowerListViewManager__CreateList_24701456(
        EventTowerListViewManager_o *this,
        int32_t eventId,
        int32_t firstTowerId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct DataMasterBase_array *datalist; // x25
  DataManager_o *v20; // x21
  unsigned int v21; // w26
  EventTowerRewardEntity_o *v22; // x23
  bool v23; // w24
  EventTowerListViewItem_o *v24; // x22
  const MethodInfo *v25; // x4
  __int64 v26; // x0

  if ( (byte_42E847A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTowerRewardMaster___, eventId, firstTowerId, method);
    sub_B5D5C4(&EventTowerListViewItem_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42E847A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTowerRewardMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)EventTowerRewardMaster__GetTowerRewardAllEntityList(
                                (EventTowerRewardMaster_o *)Instance,
                                eventId,
                                v18);
  if ( !Instance )
    goto LABEL_14;
  datalist = Instance->fields.datalist;
  v20 = Instance;
  if ( (int)datalist >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = (EventTowerRewardEntity_o *)*((_QWORD *)&v20->fields.lookup + (int)v21);
      if ( !v22 )
        break;
      v23 = v22->fields.towerId <= firstTowerId;
      v24 = (EventTowerListViewItem_o *)sub_B5D694(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v24, v22, 0, v23, v25);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      if ( (int)++v21 >= (int)datalist )
        goto LABEL_13;
      if ( v21 >= LODWORD(v20->fields.datalist) )
      {
        v26 = sub_B5D6C8(Instance);
        sub_B5D668(v26, 0LL);
      }
    }
LABEL_14:
    sub_B5D69C(Instance, v17);
  }
LABEL_13:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


EventTowerListViewItem_o *__fastcall EventTowerListViewManager__GetItem(
        EventTowerListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E847C & 1) == 0 )
  {
    sub_B5D5C4(&EventTowerListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42E847C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&EventTowerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (EventTowerListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == EventTowerListViewItem_TypeInfo )
    return (EventTowerListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall EventTowerListViewManager__OnClickListView(
        EventTowerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  CommonUI_o *Item; // x0
  const MethodInfo *v28; // x1
  __int64 v29; // x10
  __int64 v30; // x10
  ListViewObject_o *v31; // x0
  struct MaskFade_o *maskFade; // x8
  CommonUI_o *v33; // x20
  struct UnityEngine_Camera_o *bgCamera; // x8
  struct UnityEngine_GameObject_o *skipAnimation; // x8
  CommonUI_o *v36; // x20
  UnityEngine_GameObject_c *klass; // x21
  __int64 v38; // x22
  int32_t v39; // w21
  ServantStatusDialog_EndDelegate_o *v40; // x22
  struct UnityEngine_Camera_o *v41; // x8
  WebViewManager_o *Instance; // x0
  ItemEntity_o *eventMaskFade; // x20
  CommonUI_o *v44; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v45; // x22
  struct UnityEngine_Camera_o *v46; // x8
  struct ConnectMark_o *connectMark; // x8
  System_String_o *markBase; // x21
  System_String_o *markSprite; // x22
  CommonUI_o *v50; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v51; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42E8482 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_EventTowerListViewManager_closeItemDetail__, v9, v10, v11);
    sub_B5D5C4(&Method_EventTowerListViewManager_closeSvtDetail__, v12, v13, v14);
    sub_B5D5C4(&EventTowerListViewObject_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&SoundManager_TypeInfo, v24, v25, v26);
    byte_42E8482 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj
    || (v29 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v29)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v29 - 1] != EventTowerListViewObject_TypeInfo
    || ((v30 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1),
         *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v30)
      ? ((EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v30 - 1] != EventTowerListViewObject_TypeInfo
       ? (v31 = 0LL)
       : (v31 = obj))
      : (v31 = 0LL),
        (Item = (CommonUI_o *)EventTowerListViewObject__GetItem((EventTowerListViewObject_o *)v31, v28)) == 0LL
     || (maskFade = Item->fields.maskFade, v33 = Item, !maskFade)) )
  {
LABEL_35:
    sub_B5D69C(Item, v28);
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
      Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      skipAnimation = v33->fields.skipAnimation;
      if ( !skipAnimation )
        goto LABEL_35;
      v36 = Item;
      v38 = *(_QWORD *)&skipAnimation->fields.m_CachedPtr;
      klass = skipAnimation[1].klass;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v52.fields.currentCryptoKey = v38;
      *(_QWORD *)&v52.fields.fakeValue = klass;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v52, 0LL);
      v40 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v40,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeSvtDetail__,
        0LL);
      if ( !v36 )
        goto LABEL_35;
      CommonUI__OpenServantStatusDialog_18215952(v36, 7, v39, v40, 0LL);
      break;
    case 2:
      v41 = Item->fields.bgCamera;
      if ( !v41 )
        goto LABEL_35;
      if ( LODWORD(v41[1].monitor) )
        return;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      eventMaskFade = (ItemEntity_o *)v33->fields.eventMaskFade;
      v44 = (CommonUI_o *)Instance;
      v45 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v45,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v44 )
        goto LABEL_35;
      CommonUI__OpenItemDetailDialog(v44, eventMaskFade, v45, 50, 0LL);
      break;
    case 9:
      v46 = Item->fields.bgCamera;
      if ( !v46 )
        goto LABEL_35;
      if ( LODWORD(v46[1].monitor) )
        return;
      Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      connectMark = v33->fields.connectMark;
      if ( !connectMark )
        goto LABEL_35;
      markBase = (System_String_o *)connectMark->fields.markBase;
      markSprite = (System_String_o *)connectMark->fields.markSprite;
      v50 = Item;
      v51 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v51,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v50 )
        goto LABEL_35;
      CommonUI__OpenItemDetailDialog_18267660(v50, markBase, markSprite, v51, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall EventTowerListViewManager__OnMoveEnd(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  System_Action_o *CallbackFunc; // x20

  if ( (byte_42E8481 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8481 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
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
          sub_B5D560((BattleServantConfConponent_o *)&this->fields.CallbackFunc, 0LL, v10, v11, v12, v13, v14, v15);
          if ( CallbackFunc )
            System_Action__Invoke(CallbackFunc, 0LL);
          return;
        }
      }
LABEL_22:
      sub_B5D69C(gameObject, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__RequestInto(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v19; // x1
  signed __int64 size; // x23
  System_Collections_Generic_List_EventTowerListViewObject__o *v21; // x20
  unsigned __int64 v22; // x25
  int v23; // w24
  EventTowerListViewObject_o *v24; // x21
  System_Action_o *v25; // x22
  float listInDelay; // s8
  const MethodInfo *v27; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8480 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventTowerListViewManager_OnMoveEnd__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v14, v15, v16);
    byte_42E8480 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventTowerListViewManager__get_ObjectList(this, v17);
  if ( !ObjectList )
LABEL_15:
    sub_B5D69C(ObjectList, v19);
  size = ObjectList->fields._size;
  v21 = ObjectList;
  this->fields.callbackCount = size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v22 = 0LL;
  v23 = 0;
  do
  {
    if ( v22 >= (unsigned int)v21->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v24 = v21->fields._items->m_Items[v22];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v24, 0LL) )
    {
      v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
      if ( !v24 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v23;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventTowerListViewObject__Init(v24, 4, v25, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v27);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v22;
  }
  while ( (__int64)v22 < size );
  if ( !v23 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
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
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v21; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventTowerListViewObject__o *v23; // x21
  int v24; // w24
  __int64 v25; // x25
  unsigned int v26; // w8
  EventTowerListViewObject_o *v27; // x22
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E847F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_EventTowerListViewManager_OnMoveEnd__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v17, v18, v19);
    byte_42E847F = 1;
  }
  ObjectList = EventTowerListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_14;
  size = ObjectList->fields._size;
  v23 = ObjectList;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    v24 = ObjectList->fields._size;
    if ( v24 >= 1 )
    {
      v25 = 0LL;
      v26 = ObjectList->fields._size;
      while ( 1 )
      {
        if ( v26 <= (unsigned int)v25 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v27 = v23->fields._items->m_Items[v25];
        v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v28, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
        if ( !v27 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        EventTowerListViewObject__Init(v27, mode, v28, 0.0, *(UnityEngine_Vector3_o *)&zero.fields.y, v29);
        if ( (int)v25 + 1 >= v24 )
          return;
        v26 = v23->fields._size;
        ++v25;
      }
LABEL_14:
      sub_B5D69C(ObjectList, v21);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventTowerListViewManager__SetMode_24703272(this, mode, v10);
}


void __fastcall EventTowerListViewManager__SetMode_24703272(
        EventTowerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x2
  int32_t v10; // w1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42E847E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11562/*"RequestInto"*/, v6, v7, v8);
    byte_42E847E = 1;
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
          sub_B5D69C(gameObject, v12);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11562/*"RequestInto"*/,
        0.0,
        0LL);
      break;
    case 3:
      v10 = 3;
      goto LABEL_8;
    case 2:
      v10 = 2;
LABEL_8:
      EventTowerListViewManager__RequestListObject(this, v10, 0.0, v9);
      break;
  }
}


void __fastcall EventTowerListViewManager__SetMode_24703600(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.CallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventTowerListViewManager__SetMode_24703272(this, mode, v11);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x1
  __int64 v16; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v18; // x23
  int size; // w21
  int32_t v20; // w20
  ListViewItem_o *v21; // x8
  __int64 v22; // x11

  if ( (byte_42E847B & 1) == 0 )
  {
    sub_B5D5C4(&EventTowerListViewItem_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v12, v13, v14);
    byte_42E847B = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
  {
    this->fields.itemList = itemSortList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.itemList,
      (System_Int32_array **)itemSortList,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v18 = this->fields.itemSortList;
    if ( !v18 )
      goto LABEL_17;
    size = v18->fields._size;
    if ( size >= 1 )
    {
      v20 = 0;
      do
      {
        if ( v18->fields._size <= (unsigned int)v20 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v21 = v18->fields._items->m_Items[v20];
        if ( !v21 )
          break;
        v22 = *(&EventTowerListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21->klass->_2.bitflags2 + 1) < (unsigned int)v22
          || (EventTowerListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] != EventTowerListViewItem_TypeInfo )
        {
          break;
        }
        if ( (EventTowerListViewItem_c *)v21->klass->_2.typeHierarchy[*(&EventTowerListViewItem_TypeInfo->_2.bitflags2
                                                                      + 1)
                                                                    - 1] != EventTowerListViewItem_TypeInfo )
          v21 = 0LL;
        if ( !LOBYTE(v21[1].klass) )
          goto LABEL_19;
        if ( ++v20 >= size )
          goto LABEL_18;
        v18 = this->fields.itemSortList;
      }
      while ( v18 );
LABEL_17:
      sub_B5D69C(v16, v17);
    }
LABEL_18:
    v20 = 0;
LABEL_19:
    ListViewManager__SetTopItem((ListViewManager_o *)this, v20, 0LL);
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
  if ( (byte_42E847D & 1) == 0 )
  {
    this = (EventTowerListViewManager_o *)sub_B5D5C4(
                                            &EventTowerListViewObject_TypeInfo,
                                            (_DWORD)obj,
                                            (_DWORD)item,
                                            method);
    byte_42E847D = 1;
  }
  if ( !obj
    || (v6 = *(&EventTowerListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventTowerListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  __int64 v3; // x3
  System_Delegate_o *CallbackFunc; // x21
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventTowerListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E8475 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8475 = 1;
  }
  CallbackFunc = (System_Delegate_o *)this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(CallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_CallbackFunc, v8, CallbackFunc);
    v10 = CallbackFunc == (System_Delegate_o *)v9;
    CallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventTowerListViewManager_o *)sub_B5D990(v8);
  EventTowerListViewManager__remove_CallbackFunc(v11, v12, v13);
}


void __fastcall EventTowerListViewManager__closeItemDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CommonUI_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E8483 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v4, v5, v6);
    byte_42E8483 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall EventTowerListViewManager__closeSvtDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E8484 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E8484 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventTowerListViewObject__o *__fastcall EventTowerListViewManager__get_ClippingObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x21

  if ( (byte_42E8478 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E8478 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v29 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_Object__op_Inequality(
                                                                                         v29,
                                                                                         0LL,
                                                                                         0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v29 )
          break;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           (UnityEngine_GameObject_o *)v29,
                                                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !Component_srcLineSprite )
          break;
        v30 = Component_srcLineSprite;
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)EventTowerListViewObject__GetItem(
                                                                                           (EventTowerListViewObject_o *)Component_srcLineSprite,
                                                                                           v25);
        if ( !Component_srcLineSprite )
          break;
        v25 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[2].monitor)
          || (Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)ListViewManager__ClippingItem_23920288(
                                                                                                 (ListViewManager_o *)this,
                                                                                                 (ListViewItem_o *)Component_srcLineSprite,
                                                                                                 0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v23 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            v30,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
        }
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v23;
}


System_Collections_Generic_List_EventTowerListViewObject__o *__fastcall EventTowerListViewManager__get_ObjectList(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  signed __int64 size; // x22
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x21

  if ( (byte_42E8477 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42E8477 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( (int)size >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)objectList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v29 = (UnityEngine_Object_o *)objectList->fields._items->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        if ( !v29 )
          break;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)v29,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !v23 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v23,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventTowerListViewObject__Add__);
      }
      if ( (__int64)++v28 >= size )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v23;
      objectList = this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_B5D69C(Component_srcLineSprite, v25);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v23;
}


void __fastcall EventTowerListViewManager__remove_CallbackFunc(
        EventTowerListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *CallbackFunc; // x21
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventTowerListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E8476 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8476 = 1;
  }
  CallbackFunc = (System_Delegate_o *)this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(CallbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_CallbackFunc, v8, CallbackFunc);
    v10 = CallbackFunc == (System_Delegate_o *)v9;
    CallbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventTowerListViewManager_o *)sub_B5D990(v8);
  EventTowerListViewManager__Update(v11, v12);
}
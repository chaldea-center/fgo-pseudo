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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  int v15; // w28
  int v16; // w29
  EventTowerRewardEntity_o *v17; // x25
  int32_t towerId; // w8
  bool v19; // w26
  bool v20; // w9
  bool v21; // w8
  bool v22; // w27
  EventTowerListViewItem_o *v23; // x24
  const MethodInfo *v24; // x4
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8
  __int64 v29; // x2

  if ( (byte_4B3F4FD & 1) == 0 )
  {
    sub_1BDB878(&EventTowerListViewItem_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11);
    byte_4B3F4FD = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !towerRewardList )
    goto LABEL_24;
  v14 = *(_QWORD *)&towerRewardList->max_length;
  v15 = v14 - 1;
  if ( (int)v14 >= 1 )
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
      v23 = (EventTowerListViewItem_o *)sub_1BDBAC4(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v23, v17, v19, v22, v24);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v23,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v23;
        itemList = (System_Collections_Generic_List_object__o *)sub_1BDB81C(v28 + 4);
      }
      if ( v15 == v16 )
        goto LABEL_23;
      if ( ++v16 >= towerRewardList->max_length )
        sub_1BDBADC(itemList, v13, v29);
    }
LABEL_24:
    sub_1BDBAD4(itemList, v13);
  }
LABEL_23:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__CreateList_31607120(
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v13; // x21
  int v14; // w25
  int v15; // w26
  EventTowerRewardEntity_o *v16; // x23
  bool v17; // w24
  EventTowerListViewItem_o *v18; // x22
  const MethodInfo *v19; // x4
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8
  __int64 v24; // x2

  if ( (byte_4B3F4FE & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventTowerRewardMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&EventTowerListViewItem_TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B3F4FE = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventTowerRewardMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)EventTowerRewardMaster__GetTowerRewardAllEntityList(
                                (EventTowerRewardMaster_o *)Instance,
                                eventId,
                                0LL);
  if ( !Instance )
    goto LABEL_18;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v13 = Instance;
  v14 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = (EventTowerRewardEntity_o *)*((_QWORD *)&v13->fields._DispLog + v15);
      if ( !v16 )
        break;
      v17 = v16->fields.towerId <= firstTowerId;
      v18 = (EventTowerListViewItem_o *)sub_1BDBAC4(EventTowerListViewItem_TypeInfo);
      EventTowerListViewItem___ctor(v18, v16, 0, v17, v19);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      v20 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v20 )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v18,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = v20 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v23 + 32) = v18;
        Instance = (DataManager_o *)sub_1BDB81C(v23 + 32);
      }
      if ( v14 == v15 )
        goto LABEL_17;
      if ( (unsigned int)++v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
        sub_1BDBADC(Instance, v11, v24);
    }
LABEL_18:
    sub_1BDBAD4(Instance, v11);
  }
LABEL_17:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventTowerListViewItem_o *__fastcall EventTowerListViewManager__GetItem(
        EventTowerListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventTowerListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B3F500 & 1) == 0 )
  {
    sub_1BDB878(&EventTowerListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B3F500 = 1;
  }
  result = (EventTowerListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventTowerListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventTowerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventTowerListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTowerListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
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
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  CommonUI_o *Item; // x0
  const MethodInfo *v15; // x1
  __int64 methodPtr_low; // x10
  struct UnityEngine_Transform_o *baseMountSystemUI; // x8
  CommonUI_o *v18; // x20
  struct UnityEngine_Transform_o *baseMount; // x8
  struct MaskFade_o *maskFade; // x8
  CommonUI_o *v21; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  __int64 v23; // x22
  int32_t v24; // w21
  ServantStatusDialog_EndDelegate_o *v25; // x22
  struct UnityEngine_Transform_o *v26; // x8
  Il2CppObject *Instance; // x0
  ItemEntity_o *bgCamera; // x20
  CommonUI_o *v29; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v30; // x22
  struct UnityEngine_Transform_o *v31; // x8
  struct EventMaskFade_o *eventMaskFade; // x8
  System_String_o *maskSprite; // x21
  System_String_o *v34; // x22
  CommonUI_o *v35; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v36; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B3F506 & 1) == 0 )
  {
    sub_1BDB878(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_1BDB878(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1BDB878(&Method_EventTowerListViewManager_OnClickListView__, v6);
    sub_1BDB878(&Method_EventTowerListViewManager_closeItemDetail__, v7);
    sub_1BDB878(&Method_EventTowerListViewManager_closeSvtDetail__, v8);
    sub_1BDB878(&EventTowerListViewObject_TypeInfo, v9);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_4B3F506 = 1;
  }
  v12 = Method_EventTowerListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventTowerListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BDB890(Method_EventTowerListViewManager_OnClickListView__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(EventTowerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTowerListViewObject_TypeInfo
    || (Item = (CommonUI_o *)EventTowerListViewObject__GetItem((EventTowerListViewObject_o *)obj, v15)) == 0LL
    || (baseMountSystemUI = Item->fields.baseMountSystemUI, v18 = Item, !baseMountSystemUI) )
  {
LABEL_28:
    sub_1BDBAD4(Item, v15);
  }
  switch ( *((_DWORD *)&baseMountSystemUI->fields + 1) )
  {
    case 1:
    case 6:
    case 7:
      baseMount = Item->fields.baseMount;
      if ( !baseMount )
        goto LABEL_28;
      if ( LODWORD(baseMount[1].monitor) )
        return;
      Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      maskFade = v18->fields.maskFade;
      if ( !maskFade )
        goto LABEL_28;
      v21 = Item;
      v23 = *(_QWORD *)&maskFade->fields.m_CachedPtr;
      m_CancellationTokenSource = maskFade->fields.m_CancellationTokenSource;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v23;
      *(_QWORD *)&v37.fields.fakeValue = m_CancellationTokenSource;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v37, 0LL);
      v25 = (ServantStatusDialog_EndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v25,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeSvtDetail__,
        0LL);
      if ( !v21 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30846840(v21, 7, v24, v25, 0LL);
      break;
    case 2:
      v26 = Item->fields.baseMount;
      if ( !v26 )
        goto LABEL_28;
      if ( LODWORD(v26[1].monitor) )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      bgCamera = (ItemEntity_o *)v18->fields.bgCamera;
      v29 = (CommonUI_o *)Instance;
      v30 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BDBAC4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        (intptr_t)Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v29 )
        goto LABEL_28;
      CommonUI__OpenItemDetailDialog(v29, bgCamera, v30, 50, 0LL);
      break;
    case 9:
      v31 = Item->fields.baseMount;
      if ( !v31 )
        goto LABEL_28;
      if ( LODWORD(v31[1].monitor) )
        return;
      Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      eventMaskFade = v18->fields.eventMaskFade;
      if ( !eventMaskFade )
        goto LABEL_28;
      maskSprite = (System_String_o *)eventMaskFade->fields.maskSprite;
      v34 = *(System_String_o **)&eventMaskFade->fields.maskKind;
      v35 = Item;
      v36 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BDBAC4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        (intptr_t)Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v35 )
        goto LABEL_28;
      CommonUI__OpenItemDetailDialog_30911904(v35, maskSprite, v34, v36, 0LL);
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
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *CallbackFunc; // x20

  if ( (byte_4B3F505 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3F505 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( !gameObject )
          goto LABEL_20;
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.castClass)(
          gameObject,
          1LL,
          gameObject->klass[1]._1.declaringType);
      }
      if ( this->fields.initMode != 1 )
        goto LABEL_18;
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
        goto LABEL_18;
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
LABEL_18:
          CallbackFunc = this->fields.CallbackFunc;
          this->fields.CallbackFunc = 0LL;
          sub_1BDB81C(&this->fields.CallbackFunc);
          if ( CallbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))CallbackFunc->fields.m_target)(
              CallbackFunc->fields.original_method_info,
              *(_QWORD *)&CallbackFunc->fields.extra_arg);
          return;
        }
      }
LABEL_20:
      sub_1BDBAD4(gameObject, v7);
    }
  }
}


void __fastcall EventTowerListViewManager__RequestInto(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w24
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w25
  int32_t i; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4B3F504 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventTowerListViewManager_OnMoveEnd__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__, v5);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v6);
    byte_4B3F504 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventTowerListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1BDBAD4(ObjectList, v9);
  size = ObjectList->fields._size;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v12 = 0;
  for ( i = 0; i != size; ++i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             i,
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      EventTowerListViewObject__Init_31609540((EventTowerListViewObject_o *)Item, 4, v15, this->fields.listInDelay, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
  }
  if ( !v12 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
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
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w22
  Il2CppObject *Item; // x23
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x3

  if ( (byte_4B3F503 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_EventTowerListViewManager_OnMoveEnd__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__, v9);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v10);
    byte_4B3F503 = 1;
  }
  ObjectList = EventTowerListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v14 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v15 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v14,
               v15,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
      v17 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventTowerListViewObject__Init_31609020((EventTowerListViewObject_o *)Item, mode, v17, v18);
      if ( size == ++v15 )
        return;
    }
LABEL_10:
    sub_1BDBAD4(ObjectList, v12);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
    delay,
    0LL);
}


void __fastcall EventTowerListViewManager__SetMode(
        EventTowerListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.CallbackFunc = callback;
  sub_1BDB81C(&this->fields.CallbackFunc);
  EventTowerListViewManager__SetMode_31608296(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__SetMode_31608296(
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

  if ( (byte_4B3F502 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&StringLiteral_11316/*"RequestInto"*/, v5);
    byte_4B3F502 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 3, 0LL);
  switch ( mode )
  {
    case 1:
      ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
        {
          sub_1BDBAD4(gameObject, v9);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11316/*"RequestInto"*/,
        0.0,
        0LL);
      break;
    case 3:
      v7 = 3;
      goto LABEL_15;
    case 2:
      v7 = 2;
LABEL_15:
      EventTowerListViewManager__RequestListObject(this, v7, 0.0, v6);
      break;
  }
}


void __fastcall EventTowerListViewManager__SetMode_31608600(
        EventTowerListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.CallbackFunc = callback;
  sub_1BDB81C(&this->fields.CallbackFunc);
  EventTowerListViewManager__SetMode_31608296(this, mode, v7);
}


void __fastcall EventTowerListViewManager__SetNextFloorInfo(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  int size; // w8
  int v9; // w21
  int32_t v10; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4B3F4FF & 1) == 0 )
  {
    sub_1BDB878(&EventTowerListViewItem_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    byte_4B3F4FF = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
  {
    this->fields.itemList = itemSortList;
    sub_1BDB81C(&this->fields.itemList);
    Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    if ( !Item )
      goto LABEL_13;
    size = Item->fields._size;
    v9 = size - 1;
    if ( size >= 1 )
    {
      v10 = 0;
      do
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v10,
                                                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          break;
        methodPtr_low = LOBYTE(EventTowerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (EventTowerListViewItem_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTowerListViewItem_TypeInfo )
        {
          break;
        }
        if ( !LOBYTE(Item[2].fields._syncRoot) )
          goto LABEL_15;
        if ( v9 == v10 )
          goto LABEL_14;
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        ++v10;
      }
      while ( Item );
LABEL_13:
      sub_1BDBAD4(Item, v6);
    }
LABEL_14:
    v10 = 0;
LABEL_15:
    ListViewManager__SetTopItem((ListViewManager_o *)this, v10, 0LL);
  }
}


void __fastcall EventTowerListViewManager__SetObjectItem(
        EventTowerListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventTowerListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B3F501 & 1) == 0 )
  {
    this = (EventTowerListViewManager_o *)sub_1BDB878(&EventTowerListViewObject_TypeInfo, obj);
    byte_4B3F501 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventTowerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTowerListViewObject_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  EventTowerListViewObject__Init_31608168((EventTowerListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4B3F4F9 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B3F4F9 = 1;
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
    v8 = sub_1C15B34(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_1BDBD94(v7);
  EventTowerListViewManager__remove_CallbackFunc(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__closeItemDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B3F507 & 1) == 0 )
  {
    sub_1BDB878(&Method_EventTowerListViewManager_closeItemDetail__, isDecide);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B3F507 = 1;
  }
  v4 = Method_EventTowerListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventTowerListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BDB890(Method_EventTowerListViewManager_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v7);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__closeSvtDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3F508 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B3F508 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v15; // x22
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B3F4FC & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BDB878(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B3F4FC = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !objectList )
          break;
        v15 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)EventTowerListViewObject__GetItem(
                                                                    (EventTowerListViewObject_o *)objectList,
                                                                    v10);
        if ( !objectList )
          break;
        v10 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_42750172(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v17 = Method_System_Collections_Generic_List_EventTowerListViewObject__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          v18 = v9->fields._size;
          if ( (unsigned int)v18 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v15,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + v18;
            v9->fields._size = v18 + 1;
            v19[4] = (Il2CppClass *)v15;
            sub_1BDB81C(v19 + 4);
          }
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1BDBAD4(objectList, v10);
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
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  System_Collections_Generic_List_object__o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4B3F4FB & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6);
    sub_1BDB878(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B3F4FB = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventTowerListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v13,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                                  (UnityEngine_Object_o *)Item,
                                                                  0LL,
                                                                  0LL);
      if ( ((unsigned __int8)objectList & 1) != 0 )
      {
        if ( !Item )
          break;
        objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Item,
                                                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v16 = Method_System_Collections_Generic_List_EventTowerListViewObject__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        v17 = v9->fields._size;
        v18 = objectList;
        if ( (unsigned int)v17 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)objectList,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v17;
          v9->fields._size = v17 + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1BDB81C(v19 + 4);
        }
      }
      if ( size == ++v13 )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v9;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BDBAD4(objectList, v10);
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

  if ( (byte_4B3F4FA & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, value);
    byte_4B3F4FA = 1;
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
    v8 = sub_1C15B34(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_1BDBD94(v7);
  EventTowerListViewManager__Update(v10, v11);
}
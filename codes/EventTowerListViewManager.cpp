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
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x8
  int v18; // w28
  int v19; // w29
  EventTowerRewardEntity_o *v20; // x25
  int32_t towerId; // w8
  bool v22; // w26
  bool v23; // w9
  bool v24; // w8
  bool v25; // w27
  EventTowerListViewItem_o *v26; // x24
  const MethodInfo *v27; // x4
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8

  if ( (byte_4B11259 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTowerListViewItem_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&nowTowerId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12);
    byte_4B11259 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !towerRewardList )
    goto LABEL_24;
  v17 = *(_QWORD *)&towerRewardList->max_length;
  v18 = v17 - 1;
  if ( (int)v17 >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = towerRewardList->m_Items[v19];
      if ( !v20 )
        break;
      towerId = v20->fields.towerId;
      v22 = towerId < nowTowerId || towerId == nowTowerId && v20->fields.floor <= nowFloor;
      v23 = towerId <= nowTowerId + 1;
      v24 = towerId <= nowTowerId;
      v25 = isNextOpen ? v23 : v24;
      v26 = (EventTowerListViewItem_o *)sub_1BCAA2C(EventTowerListViewItem_TypeInfo, v14, v15, v16);
      EventTowerListViewItem___ctor(v26, v20, v22, v25, v27);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v26,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v26;
        itemList = (System_Collections_Generic_List_object__o *)sub_1BCA784(v31 + 4, v26);
      }
      if ( v18 == v19 )
        goto LABEL_23;
      if ( ++v19 >= towerRewardList->max_length )
        sub_1BCAA44(itemList, v14);
    }
LABEL_24:
    sub_1BCAA3C(itemList, v14);
  }
LABEL_23:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__CreateList_31250828(
        EventTowerListViewManager_o *this,
        int32_t eventId,
        int32_t firstTowerId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v18; // x21
  int v19; // w25
  int v20; // w26
  EventTowerRewardEntity_o *v21; // x23
  bool v22; // w24
  EventTowerListViewItem_o *v23; // x22
  const MethodInfo *v24; // x4
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v28; // x8

  if ( (byte_4B1125A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_EventTowerRewardMaster___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&firstTowerId);
    sub_1BCA7E0(&EventTowerListViewItem_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B1125A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTowerRewardMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)EventTowerRewardMaster__GetTowerRewardAllEntityList(
                                (EventTowerRewardMaster_o *)Instance,
                                eventId,
                                0LL);
  if ( !Instance )
    goto LABEL_18;
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v18 = Instance;
  v19 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = (EventTowerRewardEntity_o *)*((_QWORD *)&v18->fields._DispLog + v20);
      if ( !v21 )
        break;
      v22 = v21->fields.towerId <= firstTowerId;
      v23 = (EventTowerListViewItem_o *)sub_1BCAA2C(EventTowerListViewItem_TypeInfo, v14, v15, v16);
      EventTowerListViewItem___ctor(v23, v21, 0, v22, v24);
      Instance = (DataManager_o *)this->fields.itemList;
      if ( !Instance )
        break;
      v25 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v25 )
        break;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v25 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v23,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = v25 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v28 + 32) = v23;
        Instance = (DataManager_o *)sub_1BCA784(v28 + 32, v23);
      }
      if ( v19 == v20 )
        goto LABEL_17;
      if ( (unsigned int)++v20 >= LODWORD(v18->fields.m_CancellationTokenSource) )
        sub_1BCAA44(Instance, v14);
    }
LABEL_18:
    sub_1BCAA3C(Instance, v14);
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
  __int64 v6; // x2
  EventTowerListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1125C & 1) == 0 )
  {
    sub_1BCA7E0(&EventTowerListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B1125C = 1;
  }
  result = (EventTowerListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventTowerListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  CommonUI_o *Item; // x0
  const MethodInfo *v22; // x1
  __int64 methodPtr_low; // x10
  struct UnityEngine_Transform_o *baseMountSystemUI; // x8
  CommonUI_o *v25; // x20
  struct UnityEngine_Transform_o *baseMount; // x8
  struct MaskFade_o *maskFade; // x8
  CommonUI_o *v28; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  __int64 v30; // x22
  int32_t v31; // w21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  ServantStatusDialog_EndDelegate_o *v35; // x22
  struct UnityEngine_Transform_o *v36; // x8
  Il2CppObject *Instance; // x0
  ItemEntity_o *bgCamera; // x20
  CommonUI_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v43; // x22
  struct UnityEngine_Transform_o *v44; // x8
  __int64 v45; // x2
  __int64 v46; // x3
  struct EventMaskFade_o *eventMaskFade; // x8
  System_String_o *maskSprite; // x21
  System_String_o *v49; // x22
  CommonUI_o *v50; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v51; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4B11262 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj, method);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventTowerListViewManager_OnClickListView__, v7, v8);
    sub_1BCA7E0(&Method_EventTowerListViewManager_closeItemDetail__, v9, v10);
    sub_1BCA7E0(&Method_EventTowerListViewManager_closeSvtDetail__, v11, v12);
    sub_1BCA7E0(&EventTowerListViewObject_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    byte_4B11262 = 1;
  }
  v19 = Method_EventTowerListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventTowerListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BCA7F8(Method_EventTowerListViewManager_OnClickListView__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
  if ( !obj
    || (methodPtr_low = LOBYTE(EventTowerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTowerListViewObject_TypeInfo
    || (Item = (CommonUI_o *)EventTowerListViewObject__GetItem((EventTowerListViewObject_o *)obj, v22)) == 0LL
    || (baseMountSystemUI = Item->fields.baseMountSystemUI, v25 = Item, !baseMountSystemUI) )
  {
LABEL_28:
    sub_1BCAA3C(Item, v22);
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
      Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      maskFade = v25->fields.maskFade;
      if ( !maskFade )
        goto LABEL_28;
      v28 = Item;
      v30 = *(_QWORD *)&maskFade->fields.m_CachedPtr;
      m_CancellationTokenSource = maskFade->fields.m_CancellationTokenSource;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
      *(_QWORD *)&v52.fields.currentCryptoKey = v30;
      *(_QWORD *)&v52.fields.fakeValue = m_CancellationTokenSource;
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
      v35 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v32, v33, v34);
      ServantStatusDialog_EndDelegate___ctor(
        v35,
        (Il2CppObject *)this,
        Method_EventTowerListViewManager_closeSvtDetail__,
        0LL);
      if ( !v28 )
        goto LABEL_28;
      CommonUI__OpenServantStatusDialog_30779656(v28, 7, v31, v35, 0LL);
      break;
    case 2:
      v36 = Item->fields.baseMount;
      if ( !v36 )
        goto LABEL_28;
      if ( LODWORD(v36[1].monitor) )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      bgCamera = (ItemEntity_o *)v25->fields.bgCamera;
      v39 = (CommonUI_o *)Instance;
      v43 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                        v40,
                                                        v41,
                                                        v42);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        (intptr_t)Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v39 )
        goto LABEL_28;
      CommonUI__OpenItemDetailDialog(v39, bgCamera, v43, 50, 0LL);
      break;
    case 9:
      v44 = Item->fields.baseMount;
      if ( !v44 )
        goto LABEL_28;
      if ( LODWORD(v44[1].monitor) )
        return;
      Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      eventMaskFade = v25->fields.eventMaskFade;
      if ( !eventMaskFade )
        goto LABEL_28;
      maskSprite = (System_String_o *)eventMaskFade->fields.maskSprite;
      v49 = *(System_String_o **)&eventMaskFade->fields.maskKind;
      v50 = Item;
      v51 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                        v22,
                                                        v45,
                                                        v46);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v51,
        (Il2CppObject *)this,
        (intptr_t)Method_EventTowerListViewManager_closeItemDetail__,
        0LL);
      if ( !v50 )
        goto LABEL_28;
      CommonUI__OpenItemDetailDialog_30842472(v50, maskSprite, v49, v51, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall EventTowerListViewManager__OnMoveEnd(EventTowerListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollBar; // x20
  struct System_Action_o *CallbackFunc; // x20

  if ( (byte_4B11261 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11261 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
          sub_1BCA784(&this->fields.CallbackFunc, 0LL);
          if ( CallbackFunc )
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))CallbackFunc->fields.m_target)(
              CallbackFunc->fields.original_method_info,
              *(_QWORD *)&CallbackFunc->fields.extra_arg);
          return;
        }
      }
LABEL_20:
      sub_1BCAA3C(gameObject, v8);
    }
  }
}


void __fastcall EventTowerListViewManager__RequestInto(EventTowerListViewManager_o *this, const MethodInfo *method)
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
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w24
  System_Collections_Generic_List_object__o *v16; // x20
  int v17; // w25
  int32_t i; // w21
  Il2CppObject *Item; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x3

  if ( (byte_4B11260 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventTowerListViewManager_OnMoveEnd__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__, v8, v9);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v10, v11);
    byte_4B11260 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventTowerListViewManager__get_ObjectList(this, v12);
  if ( !ObjectList )
LABEL_13:
    sub_1BCAA3C(ObjectList, v14);
  size = ObjectList->fields._size;
  v16 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v17 = 0;
  for ( i = 0; i != size; ++i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v16,
             i,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v17;
      EventTowerListViewObject__Init_31253248((EventTowerListViewObject_o *)Item, 4, v23, this->fields.listInDelay, v24);
    }
    else
    {
      --this->fields.callbackCount;
    }
  }
  if ( !v17 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventTowerListViewObject__o *ObjectList; // x0
  __int64 v16; // x1
  int32_t size; // w25
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w22
  Il2CppObject *Item; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x24
  const MethodInfo *v25; // x3

  if ( (byte_4B1125F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_EventTowerListViewManager_OnMoveEnd__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__, v11, v12);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v13, v14);
    byte_4B1125F = 1;
  }
  ObjectList = EventTowerListViewManager__get_ObjectList(this, *(const MethodInfo **)&mode);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  v18 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( size >= 1 )
  {
    v19 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v18,
               v19,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventTowerListViewObject__get_Item__);
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_EventTowerListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        break;
      EventTowerListViewObject__Init_31252728((EventTowerListViewObject_o *)Item, mode, v24, v25);
      if ( size == ++v19 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(ObjectList, v16);
  }
  this->fields.callbackCount = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
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
  sub_1BCA784(&this->fields.CallbackFunc, callback);
  EventTowerListViewManager__SetMode_31252004(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__SetMode_31252004(
        EventTowerListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x2
  int32_t v8; // w1
  __int64 v9; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v11; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B1125E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&StringLiteral_11448/*"RequestInto"*/, v5, v6);
    byte_4B1125E = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
        {
          sub_1BCAA3C(gameObject, v11);
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_11448/*"RequestInto"*/,
        0.0,
        0LL);
      break;
    case 3:
      v8 = 3;
      goto LABEL_15;
    case 2:
      v8 = 2;
LABEL_15:
      EventTowerListViewManager__RequestListObject(this, v8, 0.0, v7);
      break;
  }
}


void __fastcall EventTowerListViewManager__SetMode_31252308(
        EventTowerListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.CallbackFunc = callback;
  sub_1BCA784(&this->fields.CallbackFunc, callback);
  EventTowerListViewManager__SetMode_31252004(this, mode, v7);
}


void __fastcall EventTowerListViewManager__SetNextFloorInfo(
        EventTowerListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  int size; // w8
  int v12; // w21
  int32_t v13; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4B1125B & 1) == 0 )
  {
    sub_1BCA7E0(&EventTowerListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7);
    byte_4B1125B = 1;
  }
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
  {
    this->fields.itemList = itemSortList;
    sub_1BCA784(&this->fields.itemList, itemSortList);
    Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    if ( !Item )
      goto LABEL_13;
    size = Item->fields._size;
    v12 = size - 1;
    if ( size >= 1 )
    {
      v13 = 0;
      do
      {
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v13,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        if ( v12 == v13 )
          goto LABEL_14;
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        ++v13;
      }
      while ( Item );
LABEL_13:
      sub_1BCAA3C(Item, v9);
    }
LABEL_14:
    v13 = 0;
LABEL_15:
    ListViewManager__SetTopItem((ListViewManager_o *)this, v13, 0LL);
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
  if ( (byte_4B1125D & 1) == 0 )
  {
    this = (EventTowerListViewManager_o *)sub_1BCA7E0(&EventTowerListViewObject_TypeInfo, obj, item);
    byte_4B1125D = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventTowerListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventTowerListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventTowerListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 3 )
    v7 = 3;
  else
    v7 = 2;
  EventTowerListViewObject__Init_31251876((EventTowerListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4B11255 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11255 = 1;
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
    v8 = sub_1C05CD0(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_1BCACFC(v7);
  EventTowerListViewManager__remove_CallbackFunc(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewManager__closeItemDetail(
        EventTowerListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B11263 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventTowerListViewManager_closeItemDetail__, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B11263 = 1;
  }
  v5 = Method_EventTowerListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventTowerListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_EventTowerListViewManager_closeItemDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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

  if ( (byte_4B11264 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B11264 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventTowerListViewObject__o *__fastcall EventTowerListViewManager__get_ClippingObjectList(
        EventTowerListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v17; // x20
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v24; // x22
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B11258 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B11258 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTowerListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_21;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
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
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !objectList )
          break;
        v24 = (Il2CppObject *)objectList;
        objectList = (System_Collections_Generic_List_object__o *)EventTowerListViewObject__GetItem(
                                                                    (EventTowerListViewObject_o *)objectList,
                                                                    v18);
        if ( !objectList )
          break;
        v18 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v26 = Method_System_Collections_Generic_List_EventTowerListViewObject__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          v27 = v17->fields._size;
          if ( (unsigned int)v27 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v24,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + v27;
            v17->fields._size = v27 + 1;
            v28[4] = (Il2CppClass *)v24;
            sub_1BCA784(v28 + 4, v24);
          }
        }
      }
      if ( size == ++v21 )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v17;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_21:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v17;
}


System_Collections_Generic_List_EventTowerListViewObject__o *__fastcall EventTowerListViewManager__get_ObjectList(
        EventTowerListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int size; // w23
  int32_t v21; // w21
  __int64 v22; // x1
  Il2CppObject *Item; // x22
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  System_Collections_Generic_List_object__o *v27; // x1
  Il2CppClass **v28; // x0

  if ( (byte_4B11257 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTowerListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B11257 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTowerListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTowerListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_17;
  size = objectList->fields._size;
  if ( size >= 1 )
  {
    v21 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               objectList,
               v21,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
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
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventTowerListViewObject___);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v25 = Method_System_Collections_Generic_List_EventTowerListViewObject__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        v26 = v17->fields._size;
        v27 = objectList;
        if ( (unsigned int)v26 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)objectList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + v26;
          v17->fields._size = v26 + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1BCA784(v28 + 4, v27);
        }
      }
      if ( size == ++v21 )
        return (System_Collections_Generic_List_EventTowerListViewObject__o *)v17;
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    }
    while ( objectList );
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  }
  return (System_Collections_Generic_List_EventTowerListViewObject__o *)v17;
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

  if ( (byte_4B11256 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11256 = 1;
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
    v8 = sub_1C05CD0(p_CallbackFunc, v7, CallbackFunc);
    v9 = CallbackFunc == (System_Delegate_o *)v8;
    CallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventTowerListViewManager_o *)sub_1BCACFC(v7);
  EventTowerListViewManager__Update(v10, v11);
}
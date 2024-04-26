void __fastcall ShopEventListViewManager___ctor(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopEventListViewManager__CreateList(
        ShopEventListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EventEntity_array *OpenedEventEntityList; // x20
  int max_length; // w8
  __int64 v9; // x21
  EventEntity_o *v10; // x8
  int32_t id; // w23
  ShopEventListViewItem_o *v12; // x22
  const MethodInfo *v13; // x3
  int32_t eventId; // w23
  UILabel_o *emptyMessageLabel; // x20
  __int64 v16; // x0

  if ( (byte_4357A5D & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&ShopEventListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_12308/*"SHOP_EVENT_LIST_EMPTY"*/);
    byte_4357A5D = 1;
  }
  if ( !kind )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_24;
    OpenedEventEntityList = EventMaster__GetOpenedEventEntityList((EventMaster_o *)Instance, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !OpenedEventEntityList )
      goto LABEL_24;
    max_length = OpenedEventEntityList->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= max_length )
        {
          v16 = sub_B70798(Instance);
          sub_B70738(v16, 0LL);
        }
        v10 = OpenedEventEntityList->m_Items[v9];
        if ( !v10 )
          break;
        id = v10->fields.id;
        v12 = (ShopEventListViewItem_o *)sub_B70764(ShopEventListViewItem_TypeInfo);
        ShopEventListViewItem___ctor(v12, v9, id, v13);
        if ( !v12 )
          break;
        eventId = v12->fields.eventId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        Instance = (DataManager_o *)AtlasManager__IsExistShopBanner(eventId, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        max_length = OpenedEventEntityList->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_19;
      }
LABEL_24:
      sub_B7076C(Instance, v6);
    }
  }
LABEL_19:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12308/*"SHOP_EVENT_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_24;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0LL);
}


void __fastcall ShopEventListViewManager__DestroyList(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


float __fastcall ShopEventListViewManager__GetInvokeDelay(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  float result; // s0

  result = 0.6;
  if ( initMode != 1 && (unsigned int)(initMode - 3) >= 2 )
    return 0.0;
  return result;
}


ShopEventListViewItem_o *__fastcall ShopEventListViewManager__GetItem(
        ShopEventListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_4357A5F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B70694(&ShopEventListViewItem_TypeInfo);
    byte_4357A5F = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&ShopEventListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (ShopEventListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == ShopEventListViewItem_TypeInfo )
    return (ShopEventListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


float __fastcall ShopEventListViewManager__GetObjectInitDelay(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  float result; // s0

  result = 0.1;
  if ( initMode != 1 && (unsigned int)(initMode - 3) >= 3 )
    return 0.0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ShopEventListViewObject__o *__fastcall ShopEventListViewManager__GetObjectList(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 1 )
    return ShopEventListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
  else
    return ShopEventListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
}


void __fastcall ShopEventListViewManager__InvalidateList(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_ShopEventListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w8
  System_Collections_Generic_List_ShopEventListViewObject__o *v6; // x19
  unsigned int v7; // w20

  if ( (byte_4357A5E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
    byte_4357A5E = 1;
  }
  ObjectList = ShopEventListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_11;
  size = ObjectList->fields._size;
  v6 = ObjectList;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      ObjectList = (System_Collections_Generic_List_ShopEventListViewObject__o *)v6->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      ShopEventListViewObject__SetupDisp((ShopEventListViewObject_o *)ObjectList, v4);
      size = v6->fields._size;
      if ( (int)++v7 >= size )
        return;
    }
LABEL_11:
    sub_B7076C(ObjectList, v4);
  }
}


void __fastcall ShopEventListViewManager__OnClickListView(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 v5; // x10
  EventDetailEntity_o *Entity; // x19
  CommonUI_o *v7; // x20
  System_String_o *Empty; // x21
  System_String_o *v9; // x19
  ShopEventListViewManager___c_c *v10; // x8
  struct ShopEventListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__31_0; // x22
  Il2CppObject *v13; // x23
  struct ShopEventListViewManager___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  EventEntity_o *v21; // x20
  struct UnityEngine_GameObject_o *dropDragPrefab; // x22
  System_String_o *ShopCondMessage; // x22
  CommonUI_o *Instance; // x21
  System_String_o *v25; // x19
  Il2CppObject *EventName; // x0
  System_String_o *v27; // x20
  ShopEventListViewManager___c_c *v28; // x8
  struct ShopEventListViewManager___c_StaticFields *v29; // x9
  System_Action_o *_9__31_1; // x22
  Il2CppObject *v31; // x23
  struct ShopEventListViewManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_4357A66 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&ShopEventListViewItem_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&Method_ShopEventListViewManager___c__OnClickListView_b__31_0__);
    sub_B70694(&Method_ShopEventListViewManager___c__OnClickListView_b__31_1__);
    this = (ShopEventListViewManager_o *)sub_B70694(&ShopEventListViewManager___c_TypeInfo);
    byte_4357A66 = 1;
  }
  if ( !obj )
    goto LABEL_48;
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    goto LABEL_48;
  v5 = *(&ShopEventListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] != ShopEventListViewItem_TypeInfo )
  {
    goto LABEL_48;
  }
  if ( !LOBYTE(linkItem[1].fields.sortValue0) && BYTE1(linkItem[1].fields.sortValue0) )
  {
    this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (ShopEventListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !this )
      goto LABEL_48;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      (int32_t)linkItem[1].klass,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( BYTE2(linkItem[1].fields.sortValue0) )
    {
      this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Entity )
      {
        v7 = (CommonUI_o *)this;
        Empty = string_TypeInfo->static_fields->Empty;
        this = (ShopEventListViewManager_o *)EventDetailEntity__GetShopCondMessage(Entity, 0LL);
        v9 = (System_String_o *)this;
        v10 = ShopEventListViewManager___c_TypeInfo;
        if ( (BYTE3(ShopEventListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopEventListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo);
          v10 = ShopEventListViewManager___c_TypeInfo;
        }
        static_fields = v10->static_fields;
        _9__31_0 = static_fields->__9__31_0;
        if ( !_9__31_0 )
        {
          if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            static_fields = ShopEventListViewManager___c_TypeInfo->static_fields;
          }
          v13 = (Il2CppObject *)static_fields->__9;
          _9__31_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(_9__31_0, v13, Method_ShopEventListViewManager___c__OnClickListView_b__31_0__, 0LL);
          v14 = ShopEventListViewManager___c_TypeInfo->static_fields;
          v14->__9__31_0 = _9__31_0;
          sub_B70630(
            (BattleServantConfConponent_o *)&v14->__9__31_0,
            (System_Int32_array **)_9__31_0,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
        }
        if ( v7 )
        {
          CommonUI__OpenNotificationDialog(v7, Empty, v9, _9__31_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
          return;
        }
      }
      goto LABEL_48;
    }
    this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (ShopEventListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !this )
      goto LABEL_48;
    this = (ShopEventListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           (int32_t)linkItem[1].klass,
                                           (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_48;
    v21 = (EventEntity_o *)this;
    dropDragPrefab = this->fields.dropDragPrefab;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (ShopEventListViewManager_o *)NetworkManager__getTime(0LL);
    if ( (__int64)dropDragPrefab >= (__int64)this )
    {
      if ( !Entity )
        goto LABEL_48;
      ShopCondMessage = EventDetailEntity__GetShopCondMessage(Entity, 0LL);
      if ( EventDetailEntity__IsClosePurchaseShop(Entity, 0LL) )
      {
        this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_48;
        this = (ShopEventListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( !this )
          goto LABEL_48;
        if ( !ShopMaster__CloseLimitEventShop((ShopMaster_o *)this, (int32_t)linkItem[1].klass, 0LL)
          && System_String__op_Inequality(Entity->fields.entryCondMessage, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          ShopCondMessage = Entity->fields.entryCondMessage;
        }
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v25 = string_TypeInfo->static_fields->Empty;
      EventName = (Il2CppObject *)EventEntity__getEventName(v21, 0LL);
      this = (ShopEventListViewManager_o *)System_String__Format(ShopCondMessage, EventName, 0LL);
      v27 = (System_String_o *)this;
      v28 = ShopEventListViewManager___c_TypeInfo;
      if ( (BYTE3(ShopEventListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEventListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo);
        v28 = ShopEventListViewManager___c_TypeInfo;
      }
      v29 = v28->static_fields;
      _9__31_1 = v29->__9__31_1;
      if ( !_9__31_1 )
      {
        if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v29 = ShopEventListViewManager___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)v29->__9;
        _9__31_1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(_9__31_1, v31, Method_ShopEventListViewManager___c__OnClickListView_b__31_1__, 0LL);
        v32 = ShopEventListViewManager___c_TypeInfo->static_fields;
        v32->__9__31_1 = _9__31_1;
        sub_B70630(
          (BattleServantConfConponent_o *)&v32->__9__31_1,
          (System_Int32_array **)_9__31_1,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      if ( !Instance )
LABEL_48:
        sub_B7076C(this, obj);
      CommonUI__OpenNotificationDialog(Instance, v25, v27, _9__31_1, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
    }
  }
}


void __fastcall ShopEventListViewManager__OnClickListViewEvent(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_int__o *onClickListViewItem; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t Index; // w1

  if ( (byte_4357A67 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int__Invoke__);
    byte_4357A67 = 1;
  }
  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    this->fields.onClickListViewItem = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !obj )
      sub_B7076C(v11, v12);
    Index = ListViewObject__get_Index(obj, 0LL);
    System_Action_int___Invoke(
      onClickListViewItem,
      Index,
      (const MethodInfo_264ABCC *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ShopEventListViewManager__OnMoveEnd(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  ShopEventListViewManager_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  int32_t initMode; // w1
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *onMoveEnd; // x20

  if ( (byte_4357A65 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357A65 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( v5 <= 0 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      initMode = this->fields.initMode;
      if ( (initMode | 4) == 5 )
      {
        ShopEventListViewManager__SetScrollBarActive(v6, this->fields.scrollBar, 1, v8);
        initMode = this->fields.initMode;
      }
      ShopEventListViewManager__SetScrollViewUnPressed(this, initMode, v7);
      if ( this->fields.initMode == 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_20;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( !emptyMessageBase )
          goto LABEL_20;
        UnityEngine_GameObject__SetActive(emptyMessageBase, itemSortList->fields._size < 1, 0LL);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_18;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.castClass)(
          emptyMessageBase,
          1LL,
          emptyMessageBase->klass[1]._1.declaringType);
LABEL_18:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0LL;
          sub_B70630((BattleServantConfConponent_o *)&this->fields.onMoveEnd, 0LL, v14, v15, v16, v17, v18, v19);
          System_Action__Invoke(onMoveEnd, 0LL);
        }
        return;
      }
LABEL_20:
      sub_B7076C(emptyMessageBase, v11);
    }
  }
}


void __fastcall ShopEventListViewManager__RequestInto(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopEventListViewManager__RequestListObject(this, this->fields.initMode, v2);
}


void __fastcall ShopEventListViewManager__RequestListObject(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int32_t v5; // w21
  int v6; // w25
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_ShopEventListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  float v10; // s8
  System_Collections_Generic_List_ShopEventListViewObject__o *v11; // x22
  __int64 size; // x8
  char v13; // w23
  __int64 v14; // x26
  unsigned __int64 v15; // x24
  ShopEventListViewObject_o *v16; // x23
  System_Action_o *v17; // x24
  const MethodInfo *v18; // x3
  __int64 v19; // x9
  float v20; // s0

  if ( (byte_4357A64 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
    sub_B70694(&Method_ShopEventListViewManager_OnMoveEnd__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4357A64 = 1;
  }
  v5 = 3;
  switch ( initMode )
  {
    case 1:
      v6 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      ObjectList = ShopEventListViewManager__GetObjectList(this, 1, v7);
      v10 = 0.1;
      v11 = ObjectList;
      v5 = 4;
      if ( !ObjectList )
        goto LABEL_37;
      goto LABEL_15;
    case 2:
      goto LABEL_11;
    case 3:
      v5 = 5;
      goto LABEL_11;
    case 4:
      v5 = 6;
      goto LABEL_11;
    case 5:
      v5 = 7;
      goto LABEL_11;
    case 6:
      v5 = 8;
      goto LABEL_11;
    default:
      v5 = 0;
LABEL_11:
      ObjectList = ShopEventListViewManager__GetObjectList(this, initMode, method);
      v11 = ObjectList;
      v6 = 0;
      if ( (unsigned int)(initMode - 3) >= 3 )
        v10 = 0.0;
      else
        v10 = 0.1;
      if ( !ObjectList )
        goto LABEL_37;
LABEL_15:
      this->fields.callbackCount = v11->fields._size;
      LODWORD(size) = v11->fields._size;
      if ( (int)size >= 1 )
      {
        v13 = 0;
        v14 = 4LL;
        while ( 1 )
        {
          v15 = v14 - 4;
          if ( !v6 )
            goto LABEL_22;
          if ( v15 >= (unsigned int)size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          if ( ListViewManager__ClippingItem(
                 (ListViewManager_o *)this,
                 *((ListViewObject_o **)&v11->fields._items->obj.klass + v14),
                 0LL) )
          {
            break;
          }
          --this->fields.callbackCount;
LABEL_27:
          size = v11->fields._size;
          v19 = v14 - 3;
          ++v14;
          if ( v19 >= size )
            goto LABEL_30;
        }
        LODWORD(size) = v11->fields._size;
LABEL_22:
        if ( v15 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v16 = (ShopEventListViewObject_o *)*((_QWORD *)&v11->fields._items->obj.klass + v14);
        v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopEventListViewManager_OnMoveEnd__, 0LL);
        if ( !v16 )
LABEL_37:
          sub_B7076C(ObjectList, v9);
        ShopEventListViewObject__Init(v16, v5, v17, v10, v18);
        v13 = 1;
        goto LABEL_27;
      }
      v13 = 0;
LABEL_30:
      if ( initMode != 6 && (v13 & 1) == 0 )
      {
        this->fields.callbackCount = 1;
        v20 = 0.6;
        if ( (v6 & 1) == 0 && (unsigned int)(initMode - 3) >= 2 )
          v20 = 0.0;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
          v20,
          0LL);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
ShopEventListViewItem_o *__fastcall ShopEventListViewManager__SearchItem(
        ShopEventListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t v6; // w21

  v4 = this;
  if ( (byte_4357A60 & 1) == 0 )
  {
    this = (ShopEventListViewManager_o *)sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4357A60 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_9:
    sub_B7076C(this, *(_QWORD *)&eventId);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    this = (ShopEventListViewManager_o *)ShopEventListViewManager__GetItem(v4, v6, method);
    if ( !this )
      goto LABEL_9;
    if ( LODWORD(this->fields.dragParentObject) == eventId )
      return (ShopEventListViewItem_o *)this;
    itemList = v4->fields.itemList;
    ++v6;
    if ( !itemList )
      goto LABEL_9;
  }
  return 0LL;
}


void __fastcall ShopEventListViewManager__SetDragMaskStart(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode <= 5 && ((1 << initMode) & 0x3A) != 0 )
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopEventListViewManager__SetEmptyMessageBaseUnEnable(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyMessageBase; // x0

  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
  {
    emptyMessageBase = this->fields.emptyMessageBase;
    if ( !emptyMessageBase )
      sub_B7076C(0LL, initMode);
    UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0LL);
  }
}


void __fastcall ShopEventListViewManager__SetMode(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        System_Action_int__o *onClickListViewItem,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
    (System_Int32_array **)onClickListViewItem,
    (System_String_array **)onClickListViewItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_35185056(this, initMode, v10);
}


void __fastcall ShopEventListViewManager__SetMode_35185056(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  this->fields.initMode = initMode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, initMode == 2, 0LL);
  if ( (unsigned int)(initMode - 3) < 3 )
    goto LABEL_4;
  if ( initMode == 6 )
  {
LABEL_6:
    ShopEventListViewManager__SetScrollBarActive(v5, this->fields.scrollBar, 0, v7);
    goto LABEL_7;
  }
  if ( initMode == 1 )
  {
LABEL_4:
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
    if ( (unsigned int)initMode <= 5 && ((1 << initMode) & 0x3A) != 0 )
      goto LABEL_6;
  }
LABEL_7:
  ShopEventListViewManager__SetEmptyMessageBaseUnEnable(this, initMode, v6);
  ShopEventListViewManager__RequestListObject(this, initMode, v8);
}


void __fastcall ShopEventListViewManager__SetMode_35185224(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onMoveEnd = onMoveEnd;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    (System_String_array **)onMoveEnd,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_35185056(this, initMode, v10);
}


void __fastcall ShopEventListViewManager__SetObjectItem(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4357A61 & 1) == 0 )
  {
    this = (ShopEventListViewManager_o *)sub_B70694(&ShopEventListViewObject_TypeInfo);
    byte_4357A61 = 1;
  }
  if ( !obj
    || (v6 = *(&ShopEventListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ShopEventListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ShopEventListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ShopEventListViewObject__Init((ShopEventListViewObject_o *)obj, v7, 0LL, 0.0, method);
}


void __fastcall ShopEventListViewManager__SetScrollBarActive(
        ShopEventListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4357A62 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357A62 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_B7076C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ShopEventListViewManager__SetScrollBarEnable(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (initMode | 4) == 5 )
    ShopEventListViewManager__SetScrollBarActive(this, this->fields.scrollBar, 1, v3);
}


void __fastcall ShopEventListViewManager__SetScrollBarUnEnable(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (unsigned int)(initMode - 3) < 4 || initMode == 1 )
    ShopEventListViewManager__SetScrollBarActive(this, this->fields.scrollBar, 0, v3);
}


void __fastcall ShopEventListViewManager__SetScrollViewUnPressed(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_4357A63 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357A63 = 1;
  }
  if ( (initMode | 4) == 5 )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    {
      v7 = this->fields.scrollView;
      if ( !v7 )
        sub_B7076C(0LL, v6);
      UIScrollView__Press(v7, 0, 0LL);
    }
  }
}


System_Collections_Generic_List_ShopEventListViewObject__o *__fastcall ShopEventListViewManager__get_ClippingObjectList(
        ShopEventListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x26
  UnityEngine_Object_o *v9; // x21
  struct System_Collections_Generic_List_GameObject__o *v10; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21

  if ( (byte_4357A5C & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357A5C = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B7076C(Component_srcLineSprite, v5);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopEventListViewObject__o *)v3;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v10 = this->fields.objectList;
      if ( !v10 )
        goto LABEL_23;
      if ( v8 >= (unsigned int)v10->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v10->fields._items->obj.klass + v7);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ShopEventListViewObject__GetItem(
                                                              (ShopEventListViewObject_o *)Component_srcLineSprite,
                                                              v5);
      if ( Component_srcLineSprite )
      {
        v5 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23985548(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v3,
            v11,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ShopEventListViewObject__o *__fastcall ShopEventListViewManager__get_ObjectList(
        ShopEventListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v7; // x22
  unsigned __int64 v8; // x26
  UnityEngine_Object_o *v9; // x21
  struct System_Collections_Generic_List_GameObject__o *v10; // x21

  if ( (byte_4357A5B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B70694(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4357A5B = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B7076C(Component_srcLineSprite, v5);
  v7 = 4LL;
  while ( 1 )
  {
    v8 = v7 - 4;
    if ( v7 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopEventListViewObject__o *)v3;
    if ( v8 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v9 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v10 = this->fields.objectList;
      if ( !v10 )
        goto LABEL_19;
      if ( v8 >= (unsigned int)v10->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v10->fields._items->obj.klass + v7);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !v3 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v7;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ShopEventListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F87B & 1) == 0 )
  {
    sub_B70694(&ShopEventListViewManager___c_TypeInfo);
    byte_434F87B = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ShopEventListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)ShopEventListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall ShopEventListViewManager___c___ctor(ShopEventListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopEventListViewManager___c___OnClickListView_b__31_0(
        ShopEventListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopEventListViewManager___c___OnClickListView_b__31_1(
        ShopEventListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}
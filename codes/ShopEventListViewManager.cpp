void ShopEventListViewManager___ctor(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ShopEventListViewManager__CreateList(ShopEventListViewManager_o *this, int32_t kind, const MethodInfo *method)
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v24; // x8
  UILabel_o *emptyMessageLabel; // x20

  if ( (byte_4D289E1 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&ShopEventListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_12150/*"SHOP_EVENT_LIST_EMPTY"*/);
    byte_4D289E1 = 1;
  }
  if ( !kind )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_25;
    OpenedEventEntityList = EventMaster__GetOpenedEventEntityList((EventMaster_o *)Instance, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( !OpenedEventEntityList )
      goto LABEL_25;
    max_length = OpenedEventEntityList->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= max_length )
          sub_1C942F8(Instance);
        v10 = OpenedEventEntityList->m_Items[v9];
        if ( !v10 )
          break;
        id = v10->fields.id;
        v12 = (ShopEventListViewItem_o *)sub_1C942E4(ShopEventListViewItem_TypeInfo);
        ShopEventListViewItem___ctor(v12, v9, id, v13);
        if ( !v12 )
          break;
        eventId = v12->fields.eventId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        Instance = (DataManager_o *)AtlasManager__IsExistShopBanner(eventId, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            break;
          m_CachedPtr = Instance->fields.m_CachedPtr;
          v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v12,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v24 + 32) = v12;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 32), (int32_t)v12, v15, v16, v17, v18, v19, v20);
          }
        }
        max_length = OpenedEventEntityList->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_21;
      }
LABEL_25:
      sub_1C942F0(Instance, v6);
    }
  }
LABEL_21:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12150/*"SHOP_EVENT_LIST_EMPTY"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_25;
  UILabel__set_text(emptyMessageLabel, (System_String_o *)Instance, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, 3, 0);
}


void ShopEventListViewManager__DestroyList(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


float ShopEventListViewManager__GetInvokeDelay(
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


ShopEventListViewItem_o *ShopEventListViewManager__GetItem(
        ShopEventListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopEventListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D289E3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C94098(&ShopEventListViewItem_TypeInfo);
    byte_4D289E3 = 1;
  }
  result = (ShopEventListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopEventListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          index,
                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ShopEventListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ShopEventListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ShopEventListViewItem_TypeInfo )
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


float ShopEventListViewManager__GetObjectInitDelay(
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
System_Collections_Generic_List_ShopEventListViewObject__o *ShopEventListViewManager__GetObjectList(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)(initMode - 1) > 1 )
    return ShopEventListViewManager__get_ClippingObjectList(this, *(const MethodInfo **)&initMode);
  else
    return ShopEventListViewManager__get_ObjectList(this, *(const MethodInfo **)&initMode);
}


void ShopEventListViewManager__InvalidateList(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *v5; // x19
  int32_t v6; // w20

  if ( (byte_4D289E2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
    byte_4D289E2 = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)ShopEventListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_9;
  v5 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v6,
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ShopEventListViewObject__SetupDisp((ShopEventListViewObject_o *)ObjectList, v4);
      if ( ++v6 >= v5->fields._size )
        return;
    }
LABEL_9:
    sub_1C942F0(ObjectList, v4);
  }
}


void ShopEventListViewManager__OnClickListView(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x21
  __int64 naturalAligment; // x10
  EventDetailEntity_o *Entity; // x19
  CommonUI_o *v7; // x20
  System_String_o *Empty; // x21
  ShopEventListViewManager_o *v9; // x19
  ShopEventListViewManager___c_c *v10; // x8
  System_Action_o *_9__31_0; // x22
  Il2CppObject *v12; // x23
  struct ShopEventListViewManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  EventEntity_o *v20; // x20
  struct ListViewItemSeed_o *seed; // x22
  System_String_o *ShopCondMessage; // x22
  Il2CppObject *Instance; // x21
  System_String_o *v24; // x19
  Il2CppObject *EventName; // x0
  ShopEventListViewManager_o *v26; // x20
  ShopEventListViewManager___c_c *v27; // x8
  System_Action_o *_9__31_1; // x22
  Il2CppObject *v29; // x23
  struct ShopEventListViewManager___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( (byte_4D289EA & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&ShopEventListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&Method_ShopEventListViewManager___c__OnClickListView_b__31_0__);
    sub_1C94098(&Method_ShopEventListViewManager___c__OnClickListView_b__31_1__);
    this = (ShopEventListViewManager_o *)sub_1C94098(&ShopEventListViewManager___c_TypeInfo);
    byte_4D289EA = 1;
  }
  if ( !obj )
    goto LABEL_43;
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    goto LABEL_43;
  naturalAligment = ShopEventListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ShopEventListViewItem_TypeInfo )
  {
    goto LABEL_43;
  }
  if ( !LOBYTE(linkItem[1].fields.sortValue0) && BYTE1(linkItem[1].fields.sortValue0) )
  {
    this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_43;
    this = (ShopEventListViewManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !this )
      goto LABEL_43;
    Entity = (EventDetailEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      (int32_t)linkItem[1].klass,
                                      (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( BYTE2(linkItem[1].fields.sortValue0) )
    {
      this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Entity )
      {
        v7 = (CommonUI_o *)this;
        Empty = string_TypeInfo->static_fields->Empty;
        this = (ShopEventListViewManager_o *)EventDetailEntity__GetShopCondMessage(Entity, 0);
        v9 = this;
        v10 = ShopEventListViewManager___c_TypeInfo;
        if ( !ShopEventListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo);
          v10 = ShopEventListViewManager___c_TypeInfo;
        }
        _9__31_0 = v10->static_fields->__9__31_0;
        if ( !_9__31_0 )
        {
          if ( !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            v10 = ShopEventListViewManager___c_TypeInfo;
          }
          v12 = (Il2CppObject *)v10->static_fields->__9;
          _9__31_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
          System_Action___ctor(_9__31_0, v12, Method_ShopEventListViewManager___c__OnClickListView_b__31_0__, 0);
          static_fields = ShopEventListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__31_0 = _9__31_0;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__31_0,
            (int32_t)_9__31_0,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
        }
        if ( v7 )
        {
          CommonUI__OpenNotificationDialog(
            v7,
            Empty,
            (System_String_o *)v9,
            _9__31_0,
            -1,
            0,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0.0,
            0,
            0);
          return;
        }
      }
      goto LABEL_43;
    }
    this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_43;
    this = (ShopEventListViewManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !this )
      goto LABEL_43;
    this = (ShopEventListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (int32_t)linkItem[1].klass,
                                           (const MethodInfo_345B4C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_43;
    v20 = (EventEntity_o *)this;
    seed = this->fields.seed;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (ShopEventListViewManager_o *)NetworkManager__getTime(0);
    if ( (__int64)seed >= (__int64)this )
    {
      if ( !Entity )
        goto LABEL_43;
      ShopCondMessage = EventDetailEntity__GetShopCondMessage(Entity, 0);
      if ( EventDetailEntity__IsClosePurchaseShop(Entity, 0) )
      {
        this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_43;
        this = (ShopEventListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( !this )
          goto LABEL_43;
        if ( !ShopMaster__CloseLimitEventShop((ShopMaster_o *)this, (int32_t)linkItem[1].klass, 0)
          && System_String__op_Inequality(Entity->fields.entryCondMessage, string_TypeInfo->static_fields->Empty, 0) )
        {
          ShopCondMessage = Entity->fields.entryCondMessage;
        }
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = string_TypeInfo->static_fields->Empty;
      EventName = (Il2CppObject *)EventEntity__getEventName(v20, 0);
      this = (ShopEventListViewManager_o *)System_String__Format(ShopCondMessage, EventName, 0);
      v26 = this;
      v27 = ShopEventListViewManager___c_TypeInfo;
      if ( !ShopEventListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo);
        v27 = ShopEventListViewManager___c_TypeInfo;
      }
      _9__31_1 = v27->static_fields->__9__31_1;
      if ( !_9__31_1 )
      {
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v27 = ShopEventListViewManager___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v27->static_fields->__9;
        _9__31_1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(_9__31_1, v29, Method_ShopEventListViewManager___c__OnClickListView_b__31_1__, 0);
        v30 = ShopEventListViewManager___c_TypeInfo->static_fields;
        v30->__9__31_1 = _9__31_1;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v30->__9__31_1, (int32_t)_9__31_1, v31, v32, v33, v34, v35, v36);
      }
      if ( !Instance )
LABEL_43:
        sub_1C942F0(this, obj);
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)Instance,
        v24,
        (System_String_o *)v26,
        _9__31_1,
        -1,
        0,
        0,
        0,
        0,
        0,
        0,
        5,
        0,
        0.0,
        0,
        0);
    }
  }
}


void ShopEventListViewManager__OnClickListViewEvent(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_int__o *onClickListViewItem; // x20
  GrandQuestFolderBoardItem_o *p_onClickListViewItem; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int Index; // w0

  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    p_onClickListViewItem = (GrandQuestFolderBoardItem_o *)&this->fields.onClickListViewItem;
    p_onClickListViewItem->klass = 0;
    sub_1C9403C(p_onClickListViewItem, 0, (int32_t)method, v3, v4, v5, v6, v7);
    if ( !obj )
      sub_1C942F0(v11, v12);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickListViewItem->fields.invoke_impl)(
      onClickListViewItem->fields.method_code,
      Index,
      onClickListViewItem->fields.method);
  }
}


void ShopEventListViewManager__OnMoveEnd(ShopEventListViewManager_o *this, const MethodInfo *method)
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4D289E9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D289E9 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
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
          goto LABEL_19;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( !emptyMessageBase )
          goto LABEL_19;
        UnityEngine_GameObject__SetActive(emptyMessageBase, itemSortList->fields._size < 1, 0);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_16;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.element_class)(
          emptyMessageBase,
          1,
          emptyMessageBase->klass[1]._1.castClass);
LABEL_16:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd, 0, v14, v15, v16, v17, v18, v19);
          ((void (__fastcall *)(intptr_t, intptr_t))onMoveEnd->fields.invoke_impl)(
            onMoveEnd->fields.method_code,
            onMoveEnd->fields.method);
        }
        return;
      }
LABEL_19:
      sub_1C942F0(emptyMessageBase, v11);
    }
  }
}


void ShopEventListViewManager__RequestInto(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopEventListViewManager__RequestListObject(this, this->fields.initMode, v2);
}


void ShopEventListViewManager__RequestListObject(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  int32_t v5; // w21
  int v6; // w26
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_ShopEventListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  float v10; // s8
  System_Collections_Generic_List_object__o *v11; // x22
  int32_t size; // w8
  char v13; // w24
  int32_t v14; // w23
  Il2CppObject *v15; // x0
  Il2CppObject *Item; // x24
  System_Action_o *v17; // x25
  const MethodInfo *v18; // x3
  float v19; // s0

  if ( (byte_4D289E8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
    sub_1C94098(&Method_ShopEventListViewManager_OnMoveEnd__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D289E8 = 1;
  }
  v5 = 3;
  switch ( initMode )
  {
    case 1:
      v6 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
      ObjectList = ShopEventListViewManager__GetObjectList(this, 1, v7);
      v10 = 0.1;
      v11 = (System_Collections_Generic_List_object__o *)ObjectList;
      v5 = 4;
      goto LABEL_13;
    case 2:
      goto LABEL_10;
    case 3:
      v5 = 5;
      goto LABEL_10;
    case 4:
      v5 = 6;
      goto LABEL_10;
    case 5:
      v5 = 7;
      goto LABEL_10;
    case 6:
      v5 = 8;
      goto LABEL_10;
    default:
      v5 = 0;
LABEL_10:
      ObjectList = ShopEventListViewManager__GetObjectList(this, initMode, method);
      v11 = (System_Collections_Generic_List_object__o *)ObjectList;
      v6 = 0;
      if ( (unsigned int)(initMode - 3) >= 3 )
        v10 = 0.0;
      else
        v10 = 0.1;
LABEL_13:
      if ( !v11 )
        goto LABEL_28;
      size = v11->fields._size;
      v13 = 0;
      this->fields.callbackCount = size;
      if ( size >= 1 )
      {
        v14 = 0;
        do
        {
          if ( v6
            && (v15 = System_Collections_Generic_List_object___get_Item(
                        v11,
                        v14,
                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__),
                !ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v15, 0)) )
          {
            --this->fields.callbackCount;
          }
          else
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v11,
                     v14,
                     (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
            v17 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
            System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopEventListViewManager_OnMoveEnd__, 0);
            if ( !Item )
LABEL_28:
              sub_1C942F0(ObjectList, v9);
            ShopEventListViewObject__Init((ShopEventListViewObject_o *)Item, v5, v17, v10, v18);
            v13 = 1;
          }
          ++v14;
        }
        while ( v14 < v11->fields._size );
      }
      if ( initMode != 6 && (v13 & 1) == 0 )
      {
        this->fields.callbackCount = 1;
        v19 = 0.6;
        if ( !(((unsigned int)(initMode - 3) < 2) | v6) )
          v19 = 0.0;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
          v19,
          0);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
ShopEventListViewItem_o *ShopEventListViewManager__SearchItem(
        ShopEventListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t v6; // w21

  v4 = this;
  if ( (byte_4D289E4 & 1) == 0 )
  {
    this = (ShopEventListViewManager_o *)sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4D289E4 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_9:
    sub_1C942F0(this, *(_QWORD *)&eventId);
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
  return 0;
}


void ShopEventListViewManager__SetDragMaskStart(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  if ( (unsigned int)initMode <= 5 && ((1 << initMode) & 0x3A) != 0 )
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
}


void ShopEventListViewManager__SetEmptyMessageBaseUnEnable(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyMessageBase; // x0

  if ( (unsigned int)initMode <= 4 && ((1 << initMode) & 0x1A) != 0 )
  {
    emptyMessageBase = this->fields.emptyMessageBase;
    if ( !emptyMessageBase )
      sub_1C942F0(0, initMode);
    UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0);
  }
}


void ShopEventListViewManager__SetMode(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        System_Action_int__o *onClickListViewItem,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)onClickListViewItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_35892488(this, initMode, v10);
}


void ShopEventListViewManager__SetMode_35892488(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  this->fields.initMode = initMode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, initMode == 2, 0);
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
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
    if ( (unsigned int)initMode <= 5 && ((1 << initMode) & 0x3A) != 0 )
      goto LABEL_6;
  }
LABEL_7:
  ShopEventListViewManager__SetEmptyMessageBaseUnEnable(this, initMode, v6);
  ShopEventListViewManager__RequestListObject(this, initMode, v8);
}


void ShopEventListViewManager__SetMode_35892652(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onMoveEnd = onMoveEnd;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onMoveEnd,
    (int32_t)onMoveEnd,
    (int32_t)onMoveEnd,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_35892488(this, initMode, v10);
}


void ShopEventListViewManager__SetObjectItem(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D289E5 & 1) == 0 )
  {
    this = (ShopEventListViewManager_o *)sub_1C94098(&ShopEventListViewObject_TypeInfo);
    byte_4D289E5 = 1;
  }
  if ( !obj
    || (naturalAligment = ShopEventListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ShopEventListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ShopEventListViewObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ShopEventListViewObject__Init((ShopEventListViewObject_o *)obj, v7, 0, 0.0, method);
}


void ShopEventListViewManager__SetScrollBarActive(
        ShopEventListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4D289E6 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D289E6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0)) == 0 )
    {
      sub_1C942F0(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
}


void ShopEventListViewManager__SetScrollBarEnable(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (initMode | 4) == 5 )
    ShopEventListViewManager__SetScrollBarActive(this, this->fields.scrollBar, 1, v3);
}


void ShopEventListViewManager__SetScrollBarUnEnable(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (unsigned int)(initMode - 3) < 4 || initMode == 1 )
    ShopEventListViewManager__SetScrollBarActive(this, this->fields.scrollBar, 0, v3);
}


void ShopEventListViewManager__SetScrollViewUnPressed(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_4D289E7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D289E7 = 1;
  }
  if ( (initMode | 4) == 5 )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
    {
      v7 = this->fields.scrollView;
      if ( !v7 )
        sub_1C942F0(0, v6);
      UIScrollView__Press(v7, 0, 0);
    }
  }
}


System_Collections_Generic_List_ShopEventListViewObject__o *ShopEventListViewManager__get_ClippingObjectList(
        ShopEventListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D289E0 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D289E0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1C942F0(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v8 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopEventListViewObject__GetItem(
                                                                  (ShopEventListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_44610268(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v16 = Method_System_Collections_Generic_List_ShopEventListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v8,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ShopEventListViewObject__o *)v3;
}


System_Collections_Generic_List_ShopEventListViewObject__o *ShopEventListViewManager__get_ObjectList(
        ShopEventListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v6; // w21
  Il2CppObject *Item; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4D289DF & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D289DF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1C942F0(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v15 = Method_System_Collections_Generic_List_ShopEventListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v17 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v17, v8, v9, v10, v11, v12, v13);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v6;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ShopEventListViewObject__o *)v3;
}


void ShopEventListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D289EB & 1) == 0 )
  {
    sub_1C94098(&ShopEventListViewManager___c_TypeInfo);
    byte_4D289EB = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ShopEventListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopEventListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopEventListViewManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ShopEventListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopEventListViewManager___c___ctor(ShopEventListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopEventListViewManager___c___OnClickListView_b__31_0(
        ShopEventListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ShopEventListViewManager___c___OnClickListView_b__31_1(
        ShopEventListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}
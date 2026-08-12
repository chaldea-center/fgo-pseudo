void ShopEventListViewManager___ctor(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopEventListViewManager__CreateList(ShopEventListViewManager_o *this, int32_t kind, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  EventEntity_array *OpenedEventEntityList; // x20
  int max_length; // w8
  __int64 v8; // x21
  EventEntity_o *v9; // x8
  int32_t id; // w23
  ShopEventListViewItem_o *v11; // x22
  const MethodInfo *v12; // x3
  __int64 v13; // x2
  int32_t eventId; // w23
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v23; // x8
  UILabel_o *emptyMessageLabel; // x20

  if ( (byte_596C842 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&ShopEventListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12619/*"SHOP_EVENT_LIST_EMPTY"*/);
    byte_596C842 = 1;
  }
  if ( !kind )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_25;
    OpenedEventEntityList = EventMaster__GetOpenedEventEntityList((EventMaster_o *)Instance, 0);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
    if ( !OpenedEventEntityList )
      goto LABEL_25;
    max_length = OpenedEventEntityList->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= max_length )
          sub_2213CE4(Instance);
        v9 = OpenedEventEntityList->m_Items[v8];
        if ( !v9 )
          break;
        id = v9->fields.id;
        v11 = (ShopEventListViewItem_o *)sub_2213CCC(ShopEventListViewItem_TypeInfo);
        ShopEventListViewItem___ctor(v11, v8, id, v12);
        if ( !v11 )
          break;
        eventId = v11->fields.eventId;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&kind, v13);
        Instance = (DataManager_o *)AtlasManager__IsExistShopBanner(eventId, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            break;
          m_CachedPtr = Instance->fields.m_CachedPtr;
          v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            break;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v11,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v23 + 32) = v11;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v23 + 32),
              (int32_t)v11,
              (System_String_o *)method,
              v15,
              v16,
              v17,
              v18,
              v19);
          }
        }
        max_length = OpenedEventEntityList->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_21;
      }
LABEL_25:
      sub_2213CDC(Instance, *(_QWORD *)&kind);
    }
  }
LABEL_21:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, method);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12619/*"SHOP_EVENT_LIST_EMPTY"*/, 0);
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

  result = 0.0;
  if ( (unsigned int)(initMode - 3) < 2 || initMode == 1 )
    return 0.6;
  return result;
}


ShopEventListViewItem_o *ShopEventListViewManager__GetItem(
        ShopEventListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ShopEventListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596C844 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&ShopEventListViewItem_TypeInfo);
    byte_596C844 = 1;
  }
  result = (ShopEventListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopEventListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          index,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  result = 0.0;
  if ( (unsigned int)(initMode - 3) < 3 || initMode == 1 )
    return 0.1;
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

  if ( (byte_596C843 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
    byte_596C843 = 1;
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
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ShopEventListViewObject__SetupDisp((ShopEventListViewObject_o *)ObjectList, v4);
      if ( ++v6 >= v5->fields._size )
        return;
    }
LABEL_9:
    sub_2213CDC(ObjectList, v4);
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
  System_String_o *v8; // x21
  __int64 v9; // x2
  ShopEventListViewManager_o *v10; // x19
  ShopEventListViewManager___c_c *v11; // x8
  struct ShopEventListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__31_0; // x22
  Il2CppObject *v14; // x23
  struct ShopEventListViewManager___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x2
  EventEntity_o *v23; // x20
  struct ListViewItemSeed_o *seed; // x22
  System_String_o *ShopCondMessage; // x22
  Il2CppObject *Instance; // x21
  System_String_o *v27; // x19
  Il2CppObject *EventName; // x0
  __int64 v29; // x2
  ShopEventListViewManager_o *v30; // x20
  ShopEventListViewManager___c_c *v31; // x8
  struct ShopEventListViewManager___c_StaticFields *v32; // x9
  System_Action_o *_9__31_1; // x22
  Il2CppObject *v34; // x23
  struct ShopEventListViewManager___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  if ( (byte_596C84B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ShopEventListViewItem_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ShopEventListViewManager___c__OnClickListView_b__31_0__);
    sub_2213A60(&Method_ShopEventListViewManager___c__OnClickListView_b__31_1__);
    this = (ShopEventListViewManager_o *)sub_2213A60(&ShopEventListViewManager___c_TypeInfo);
    byte_596C84B = 1;
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
    this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_43;
    this = (ShopEventListViewManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !this )
      goto LABEL_43;
    Entity = (EventDetailEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      (int32_t)linkItem[1].klass,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( BYTE2(linkItem[1].fields.sortValue0) )
    {
      this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Entity )
      {
        v7 = (CommonUI_o *)this;
        v8 = **(System_String_o ***)(qword_5984390 + 184);
        this = (ShopEventListViewManager_o *)EventDetailEntity__GetShopCondMessage(Entity, 0);
        v10 = this;
        v11 = ShopEventListViewManager___c_TypeInfo;
        if ( !*(&ShopEventListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo, obj, v9);
          v11 = ShopEventListViewManager___c_TypeInfo;
        }
        static_fields = v11->static_fields;
        _9__31_0 = static_fields->__9__31_0;
        if ( !_9__31_0 )
        {
          if ( !*(&v11->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v11, obj, v9);
            static_fields = ShopEventListViewManager___c_TypeInfo->static_fields;
          }
          v14 = (Il2CppObject *)static_fields->__9;
          _9__31_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(_9__31_0, v14, Method_ShopEventListViewManager___c__OnClickListView_b__31_0__, 0);
          v15 = ShopEventListViewManager___c_TypeInfo->static_fields;
          v15->__9__31_0 = _9__31_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v15->__9__31_0,
            (int32_t)_9__31_0,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
        }
        if ( v7 )
        {
          CommonUI__OpenNotificationDialog(
            v7,
            v8,
            (System_String_o *)v10,
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
    this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_43;
    this = (ShopEventListViewManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !this )
      goto LABEL_43;
    this = (ShopEventListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (int32_t)linkItem[1].klass,
                                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_43;
    v23 = (EventEntity_o *)this;
    seed = this->fields.seed;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, obj, v22);
    this = (ShopEventListViewManager_o *)NetworkManager__getTime(0);
    if ( (__int64)seed >= (__int64)this )
    {
      if ( !Entity )
        goto LABEL_43;
      ShopCondMessage = EventDetailEntity__GetShopCondMessage(Entity, 0);
      if ( EventDetailEntity__IsClosePurchaseShop(Entity, 0) )
      {
        this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_43;
        this = (ShopEventListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( !this )
          goto LABEL_43;
        if ( !ShopMaster__CloseLimitEventShop((ShopMaster_o *)this, (int32_t)linkItem[1].klass, 0)
          && System_String__op_Inequality(
               Entity->fields.entryCondMessage,
               **(System_String_o ***)(qword_5984390 + 184),
               0) )
        {
          ShopCondMessage = Entity->fields.entryCondMessage;
        }
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = **(System_String_o ***)(qword_5984390 + 184);
      EventName = (Il2CppObject *)EventEntity__getEventName(v23, 0);
      this = (ShopEventListViewManager_o *)System_String__Format(ShopCondMessage, EventName, 0);
      v30 = this;
      v31 = ShopEventListViewManager___c_TypeInfo;
      if ( !*(&ShopEventListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo, obj, v29);
        v31 = ShopEventListViewManager___c_TypeInfo;
      }
      v32 = v31->static_fields;
      _9__31_1 = v32->__9__31_1;
      if ( !_9__31_1 )
      {
        if ( !*(&v31->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v31, obj, v29);
          v32 = ShopEventListViewManager___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)v32->__9;
        _9__31_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(_9__31_1, v34, Method_ShopEventListViewManager___c__OnClickListView_b__31_1__, 0);
        v35 = ShopEventListViewManager___c_TypeInfo->static_fields;
        v35->__9__31_1 = _9__31_1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v35->__9__31_1,
          (int32_t)_9__31_1,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      if ( !Instance )
LABEL_43:
        sub_2213CDC(this, obj);
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)Instance,
        v27,
        (System_String_o *)v30,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o *onClickListViewItem; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 Index; // x1

  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    this->fields.onClickListViewItem = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onClickListViewItem,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !obj )
      sub_2213CDC(v10, v11);
    Index = (unsigned int)ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))onClickListViewItem->fields.invoke_impl)(
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *scrollView; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_596C84A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C84A = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
        goto LABEL_17;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.element_class)(
          emptyMessageBase,
          1,
          emptyMessageBase->klass[1]._1.castClass);
LABEL_17:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd, 0, v15, v16, v17, v18, v19, v20);
          ((void (__fastcall *)(intptr_t, intptr_t))onMoveEnd->fields.invoke_impl)(
            onMoveEnd->fields.method_code,
            onMoveEnd->fields.method);
        }
        return;
      }
LABEL_19:
      sub_2213CDC(emptyMessageBase, v11);
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
  int v5; // w27
  int32_t v6; // w21
  System_Collections_Generic_List_ShopEventListViewObject__o *ObjectList; // x0
  __int64 v8; // x1
  int v9; // w9
  float v10; // s8
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v12; // x22
  char v13; // w24
  int32_t v14; // w23
  Il2CppObject *v15; // x0
  Il2CppObject *Item; // x24
  System_Action_o *v17; // x25
  const MethodInfo *v18; // x3
  float v19; // s0
  int v20; // w9
  System_String_o *v21; // x1

  if ( (byte_596C849 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
    sub_2213A60(&Method_ShopEventListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596C849 = 1;
  }
  if ( initMode > 3 )
  {
    if ( initMode == 4 )
    {
      v5 = 0;
      v6 = 6;
      goto LABEL_17;
    }
    if ( initMode != 5 )
    {
      if ( initMode == 6 )
      {
        v5 = 0;
        v6 = 8;
        goto LABEL_17;
      }
      goto LABEL_14;
    }
    v5 = 0;
    v6 = 7;
  }
  else
  {
    if ( initMode == 1 )
    {
      v5 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
      v6 = 4;
      goto LABEL_17;
    }
    if ( initMode != 2 )
    {
      if ( initMode == 3 )
      {
        v5 = 0;
        v6 = 5;
        goto LABEL_17;
      }
LABEL_14:
      v5 = 0;
      v6 = 0;
      goto LABEL_17;
    }
    v5 = 0;
    v6 = 3;
  }
LABEL_17:
  ObjectList = ShopEventListViewManager__GetObjectList(this, initMode, method);
  if ( (unsigned int)(initMode - 3) < 3 )
    v9 = 1;
  else
    v9 = v5;
  if ( v9 )
    v10 = 0.1;
  else
    v10 = 0.0;
  if ( !ObjectList )
LABEL_41:
    sub_2213CDC(ObjectList, v8);
  size = ObjectList->fields._size;
  v12 = (System_Collections_Generic_List_object__o *)ObjectList;
  v13 = 0;
  this->fields.callbackCount = size;
  if ( size >= 1 )
  {
    v14 = 0;
    do
    {
      if ( v5
        && (v15 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    v14,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__),
            !ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v15, 0)) )
      {
        --this->fields.callbackCount;
      }
      else
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v12,
                 v14,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
        v17 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopEventListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          goto LABEL_41;
        ShopEventListViewObject__Init((ShopEventListViewObject_o *)Item, v6, v17, v10, v18);
        v13 = 1;
      }
      ++v14;
    }
    while ( v14 < v12->fields._size );
  }
  if ( initMode != 6 && (v13 & 1) == 0 )
  {
    v19 = 0.0;
    if ( (unsigned int)(initMode - 3) < 2 )
      v20 = 1;
    else
      v20 = v5;
    v21 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
    if ( v20 )
      v19 = 0.6;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v21, v19, 0);
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
  if ( (byte_596C845 & 1) == 0 )
  {
    this = (ShopEventListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_596C845 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&eventId);
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


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(0, *(_QWORD *)&initMode);
    UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0);
  }
}


void ShopEventListViewManager__SetMode(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        System_Action_int__o *onClickListViewItem,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickListViewItem,
    (int32_t)onClickListViewItem,
    (System_String_o *)onClickListViewItem,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_41987496(this, initMode, v10);
}


void ShopEventListViewManager__SetMode_41987496(
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


void ShopEventListViewManager__SetMode_41987660(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.onMoveEnd = onMoveEnd;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onMoveEnd,
    (int32_t)onMoveEnd,
    (System_String_o *)onMoveEnd,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_41987496(this, initMode, v10);
}


void ShopEventListViewManager__SetObjectItem(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596C846 & 1) == 0 )
  {
    sub_2213A60(&ShopEventListViewObject_TypeInfo);
    byte_596C846 = 1;
  }
  if ( obj
    && (naturalAligment = ShopEventListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ShopEventListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ShopEventListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
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
  ShopEventListViewObject__Init((ShopEventListViewObject_o *)v7, v8, 0, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void ShopEventListViewManager__SetScrollBarActive(
        ShopEventListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_596C847 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C847 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scrollBar, isActive);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v7);
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


// local variable allocation has failed, the output may be wrong!
void ShopEventListViewManager__SetScrollViewUnPressed(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_596C848 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C848 = 1;
  }
  if ( (initMode | 4) == 5 )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode, method);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
    {
      v7 = this->fields.scrollView;
      if ( !v7 )
        sub_2213CDC(0, v6);
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22
  Il2CppObject *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_596C841 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C841 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_2213CDC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v10 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopEventListViewObject__GetItem(
                                                                  (ShopEventListViewObject_o *)objectList,
                                                                  v4);
      if ( objectList )
      {
        v4 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].fields._items)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_50835204(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v3 )
            goto LABEL_21;
          items = v3->fields._items;
          v18 = Method_System_Collections_Generic_List_ShopEventListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v10,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_List_object__o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_596C840 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C840 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_2213CDC(objectList, v4);
  v6 = 0;
  while ( v6 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v6,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !v3 )
        goto LABEL_17;
      items = v3->fields._items;
      v17 = Method_System_Collections_Generic_List_ShopEventListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v3->fields._size;
      v19 = objectList;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)objectList,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C84C & 1) == 0 )
  {
    sub_2213A60(&ShopEventListViewManager___c_TypeInfo);
    byte_596C84C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ShopEventListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopEventListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopEventListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ShopEventListViewManager___c_TypeInfo->static_fields,
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
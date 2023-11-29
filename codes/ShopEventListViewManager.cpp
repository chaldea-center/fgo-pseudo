void __fastcall ShopEventListViewManager___ctor(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewManager__CreateList(
        ShopEventListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventEntity_array *OpenedEventEntityList; // x20
  _BOOL8 IsExistShopBanner; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int max_length; // w8
  __int64 v20; // x21
  EventEntity_o *v21; // x8
  int32_t id; // w23
  ShopEventListViewItem_o *v23; // x22
  const MethodInfo *v24; // x3
  int32_t eventId; // w23
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  UILabel_o *emptyMessageLabel; // x20
  System_String_o *v28; // x0

  if ( (byte_40FF886 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&ShopEventListViewItem_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_12088, v10);
    byte_40FF886 = 1;
  }
  if ( !kind )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_24;
    OpenedEventEntityList = EventMaster__GetOpenedEventEntityList(MasterData_WarQuestSelectionMaster, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !OpenedEventEntityList )
      goto LABEL_24;
    max_length = OpenedEventEntityList->max_length;
    if ( max_length >= 1 )
    {
      v20 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= max_length )
        {
          sub_B17100(IsExistShopBanner, v15, v16);
          sub_B170A0();
        }
        v21 = OpenedEventEntityList->m_Items[v20];
        if ( !v21 )
          break;
        id = v21->fields.id;
        v23 = (ShopEventListViewItem_o *)sub_B170CC(ShopEventListViewItem_TypeInfo, v15, v16, v17, v18);
        ShopEventListViewItem___ctor(v23, v20, id, v24);
        if ( !v23 )
          break;
        eventId = v23->fields.eventId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        IsExistShopBanner = AtlasManager__IsExistShopBanner(eventId, 0LL);
        if ( IsExistShopBanner )
        {
          itemList = this->fields.itemList;
          if ( !itemList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        max_length = OpenedEventEntityList->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_19;
      }
LABEL_24:
      sub_B170D4();
    }
  }
LABEL_19:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12088, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_24;
  UILabel__set_text(emptyMessageLabel, v28, 0LL);
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


// local variable allocation has failed, the output may be wrong!
ShopEventListViewItem_o *__fastcall ShopEventListViewManager__GetItem(
        ShopEventListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40FF888 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B16FFC(&ShopEventListViewItem_TypeInfo, v5);
    byte_40FF888 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&ShopEventListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (ShopEventListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ShopEventListViewItem_TypeInfo )
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
  __int64 v3; // x1
  System_Collections_Generic_List_ShopEventListViewObject__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w8
  System_Collections_Generic_List_ShopEventListViewObject__o *v7; // x19
  unsigned int v8; // w20
  ShopEventListViewObject_o *v9; // x0

  if ( (byte_40FF887 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__, v3);
    byte_40FF887 = 1;
  }
  ObjectList = ShopEventListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_11;
  size = ObjectList->fields._size;
  v7 = ObjectList;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v9 = v7->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      ShopEventListViewObject__SetupDisp(v9, v5);
      size = v7->fields._size;
      if ( (int)++v8 >= size )
        return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall ShopEventListViewManager__OnClickListView(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct ListViewItem_o *linkItem; // x21
  __int64 v18; // x10
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventDetailEntity_o *Entity; // x19
  WebViewManager_o *v22; // x0
  CommonUI_o *v23; // x20
  System_String_o *Empty; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_String_o *ShopCondMessage; // x19
  ShopEventListViewManager___c_c *v30; // x8
  struct ShopEventListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__31_0; // x22
  Il2CppObject *v33; // x23
  struct ShopEventListViewManager___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WebViewManager_o *v41; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x0
  WarEntity_o *v43; // x0
  EventEntity_o *v44; // x20
  int64_t v45; // x22
  System_String_o *entryCondMessage; // x22
  WebViewManager_o *v47; // x0
  ShopMaster_o *v48; // x0
  CommonUI_o *v49; // x21
  System_String_o *v50; // x19
  Il2CppObject *EventName; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_String_o *v56; // x20
  ShopEventListViewManager___c_c *v57; // x8
  struct ShopEventListViewManager___c_StaticFields *v58; // x9
  System_Action_o *_9__31_1; // x22
  Il2CppObject *v60; // x23
  struct ShopEventListViewManager___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7

  if ( (byte_40FF88F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&ShopEventListViewItem_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B16FFC(&string_TypeInfo, v13);
    sub_B16FFC(&Method_ShopEventListViewManager___c__OnClickListView_b__31_0__, v14);
    sub_B16FFC(&Method_ShopEventListViewManager___c__OnClickListView_b__31_1__, v15);
    sub_B16FFC(&ShopEventListViewManager___c_TypeInfo, v16);
    byte_40FF88F = 1;
  }
  if ( !obj )
    goto LABEL_48;
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    goto LABEL_48;
  v18 = *(&ShopEventListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v18
    || (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[v18 - 1] != ShopEventListViewItem_TypeInfo )
  {
    goto LABEL_48;
  }
  if ( !LOBYTE(linkItem[1].fields.sortValue0) && BYTE1(linkItem[1].fields.sortValue0) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_48;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)linkItem[1].klass,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( BYTE2(linkItem[1].fields.sortValue0) )
    {
      v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Entity )
      {
        v23 = (CommonUI_o *)v22;
        Empty = string_TypeInfo->static_fields->Empty;
        ShopCondMessage = EventDetailEntity__GetShopCondMessage(Entity, 0LL);
        v30 = ShopEventListViewManager___c_TypeInfo;
        if ( (BYTE3(ShopEventListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopEventListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo);
          v30 = ShopEventListViewManager___c_TypeInfo;
        }
        static_fields = v30->static_fields;
        _9__31_0 = static_fields->__9__31_0;
        if ( !_9__31_0 )
        {
          if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v30);
            static_fields = ShopEventListViewManager___c_TypeInfo->static_fields;
          }
          v33 = (Il2CppObject *)static_fields->__9;
          _9__31_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
          System_Action___ctor(_9__31_0, v33, Method_ShopEventListViewManager___c__OnClickListView_b__31_0__, 0LL);
          v34 = ShopEventListViewManager___c_TypeInfo->static_fields;
          v34->__9__31_0 = _9__31_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v34->__9__31_0,
            (System_Int32_array **)_9__31_0,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
        }
        if ( v23 )
        {
          CommonUI__OpenNotificationDialog(v23, Empty, ShopCondMessage, _9__31_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
          return;
        }
      }
      goto LABEL_48;
    }
    v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v41 )
      goto LABEL_48;
    v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v41,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !v42 )
      goto LABEL_48;
    v43 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v42,
            (int32_t)linkItem[1].klass,
            (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !v43 )
      goto LABEL_48;
    v44 = (EventEntity_o *)v43;
    v45 = *(_QWORD *)&v43->fields.eventId;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v45 >= NetworkManager__getTime(0LL) )
    {
      if ( !Entity )
        goto LABEL_48;
      entryCondMessage = EventDetailEntity__GetShopCondMessage(Entity, 0LL);
      if ( EventDetailEntity__IsClosePurchaseShop(Entity, 0LL) )
      {
        v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v47 )
          goto LABEL_48;
        v48 = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v47,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( !v48 )
          goto LABEL_48;
        if ( !ShopMaster__CloseLimitEventShop(v48, (int32_t)linkItem[1].klass, 0LL)
          && System_String__op_Inequality(Entity->fields.entryCondMessage, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          entryCondMessage = Entity->fields.entryCondMessage;
        }
      }
      v49 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v50 = string_TypeInfo->static_fields->Empty;
      EventName = (Il2CppObject *)EventEntity__getEventName(v44, 0LL);
      v56 = System_String__Format(entryCondMessage, EventName, 0LL);
      v57 = ShopEventListViewManager___c_TypeInfo;
      if ( (BYTE3(ShopEventListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEventListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo);
        v57 = ShopEventListViewManager___c_TypeInfo;
      }
      v58 = v57->static_fields;
      _9__31_1 = v58->__9__31_1;
      if ( !_9__31_1 )
      {
        if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          v58 = ShopEventListViewManager___c_TypeInfo->static_fields;
        }
        v60 = (Il2CppObject *)v58->__9;
        _9__31_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v52, v53, v54, v55);
        System_Action___ctor(_9__31_1, v60, Method_ShopEventListViewManager___c__OnClickListView_b__31_1__, 0LL);
        v61 = ShopEventListViewManager___c_TypeInfo->static_fields;
        v61->__9__31_1 = _9__31_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v61->__9__31_1,
          (System_Int32_array **)_9__31_1,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
      }
      if ( !v49 )
LABEL_48:
        sub_B170D4();
      CommonUI__OpenNotificationDialog(v49, v50, v56, _9__31_1, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
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
  int32_t Index; // w1

  if ( (byte_40FF890 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int__Invoke__, obj);
    byte_40FF890 = 1;
  }
  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    this->fields.onClickListViewItem = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !obj )
      sub_B170D4();
    Index = ListViewObject__get_Index(obj, 0LL);
    System_Action_int___Invoke(
      onClickListViewItem,
      Index,
      (const MethodInfo_24B5D94 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ShopEventListViewManager__OnMoveEnd(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  ShopEventListViewManager_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  int32_t initMode; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UIScrollView_o *v20; // x0
  System_Action_o *onMoveEnd; // x20

  if ( (byte_40FF88E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FF88E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( v6 <= 0 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      initMode = this->fields.initMode;
      if ( (initMode | 4) == 5 )
      {
        ShopEventListViewManager__SetScrollBarActive(v7, this->fields.scrollBar, 1, v9);
        initMode = this->fields.initMode;
      }
      ShopEventListViewManager__SetScrollViewUnPressed(this, initMode, v8);
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
      v20 = this->fields.scrollView;
      if ( v20 )
      {
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v20->klass->vtable._8_UpdateScrollbars.method)(
          v20,
          1LL,
          v20->klass->vtable._9_SetDragAmount.methodPtr);
LABEL_18:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.onMoveEnd, 0LL, v14, v15, v16, v17, v18, v19);
          System_Action__Invoke(onMoveEnd, 0LL);
        }
        return;
      }
LABEL_20:
      sub_B170D4();
    }
  }
}


void __fastcall ShopEventListViewManager__RequestInto(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ShopEventListViewManager__RequestListObject(this, this->fields.initMode, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewManager__RequestListObject(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w21
  int v10; // w25
  const MethodInfo *v11; // x2
  float v12; // s8
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_ShopEventListViewObject__o *ObjectList; // x22
  System_Collections_Generic_List_ShopEventListViewObject__o *v18; // x0
  __int64 size; // x8
  char v20; // w23
  __int64 v21; // x26
  unsigned __int64 v22; // x24
  ShopEventListViewObject_o *v23; // x23
  System_Action_o *v24; // x24
  const MethodInfo *v25; // x3
  __int64 v26; // x9
  float v27; // s0

  if ( (byte_40FF88D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&initMode);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__, v6);
    sub_B16FFC(&Method_ShopEventListViewManager_OnMoveEnd__, v7);
    sub_B16FFC(&StringLiteral_10004, v8);
    byte_40FF88D = 1;
  }
  v9 = 3;
  switch ( initMode )
  {
    case 1:
      v10 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      v12 = 0.1;
      ObjectList = ShopEventListViewManager__GetObjectList(this, 1, v11);
      v9 = 4;
      if ( !ObjectList )
        goto LABEL_37;
      goto LABEL_15;
    case 2:
      goto LABEL_11;
    case 3:
      v9 = 5;
      goto LABEL_11;
    case 4:
      v9 = 6;
      goto LABEL_11;
    case 5:
      v9 = 7;
      goto LABEL_11;
    case 6:
      v9 = 8;
      goto LABEL_11;
    default:
      v9 = 0;
LABEL_11:
      v18 = ShopEventListViewManager__GetObjectList(this, initMode, method);
      ObjectList = v18;
      v10 = 0;
      if ( (unsigned int)(initMode - 3) >= 3 )
        v12 = 0.0;
      else
        v12 = 0.1;
      if ( !v18 )
        goto LABEL_37;
LABEL_15:
      this->fields.callbackCount = ObjectList->fields._size;
      LODWORD(size) = ObjectList->fields._size;
      if ( (int)size >= 1 )
      {
        v20 = 0;
        v21 = 4LL;
        while ( 1 )
        {
          v22 = v21 - 4;
          if ( !v10 )
            goto LABEL_22;
          if ( v22 >= (unsigned int)size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( ListViewManager__ClippingItem(
                 (ListViewManager_o *)this,
                 *((ListViewObject_o **)&ObjectList->fields._items->obj.klass + v21),
                 0LL) )
          {
            break;
          }
          --this->fields.callbackCount;
LABEL_27:
          size = ObjectList->fields._size;
          v26 = v21 - 3;
          ++v21;
          if ( v26 >= size )
            goto LABEL_30;
        }
        LODWORD(size) = ObjectList->fields._size;
LABEL_22:
        if ( v22 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v23 = (ShopEventListViewObject_o *)*((_QWORD *)&ObjectList->fields._items->obj.klass + v21);
        v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
        System_Action___ctor(v24, (Il2CppObject *)this, Method_ShopEventListViewManager_OnMoveEnd__, 0LL);
        if ( !v23 )
LABEL_37:
          sub_B170D4();
        ShopEventListViewObject__Init(v23, v9, v24, v12, v25);
        v20 = 1;
        goto LABEL_27;
      }
      v20 = 0;
LABEL_30:
      if ( initMode != 6 && (v20 & 1) == 0 )
      {
        this->fields.callbackCount = 1;
        v27 = 0.6;
        if ( (v10 & 1) == 0 && (unsigned int)(initMode - 3) >= 2 )
          v27 = 0.0;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10004,
          v27,
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t v6; // w21
  ShopEventListViewItem_o *result; // x0

  if ( (byte_40FF889 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&eventId);
    byte_40FF889 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_9:
    sub_B170D4();
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    result = ShopEventListViewManager__GetItem(this, v6, method);
    if ( !result )
      goto LABEL_9;
    if ( result->fields.eventId == eventId )
      return result;
    itemList = this->fields.itemList;
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
      sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
    (System_Int32_array **)onClickListViewItem,
    (System_String_array **)onClickListViewItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_34569780(this, initMode, v10);
}


void __fastcall ShopEventListViewManager__SetMode_34569780(
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


void __fastcall ShopEventListViewManager__SetMode_34569948(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    (System_String_array **)onMoveEnd,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_34569780(this, initMode, v10);
}


void __fastcall ShopEventListViewManager__SetObjectItem(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t v7; // w1

  if ( (byte_40FF88A & 1) == 0 )
  {
    sub_B16FFC(&ShopEventListViewObject_TypeInfo, obj);
    byte_40FF88A = 1;
  }
  if ( !obj
    || (v6 = *(&ShopEventListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ShopEventListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ShopEventListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  if ( this->fields.initMode == 2 )
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

  if ( (byte_40FF88B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, scrollBar);
    byte_40FF88B = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL) )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_B170D4();
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewManager__SetScrollViewUnPressed(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v6; // x0

  if ( (byte_40FF88C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode);
    byte_40FF88C = 1;
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
      v6 = this->fields.scrollView;
      if ( !v6 )
        sub_B170D4();
      UIScrollView__Press(v6, 0, 0LL);
    }
  }
}


System_Collections_Generic_List_ShopEventListViewObject__o *__fastcall ShopEventListViewManager__get_ClippingObjectList(
        ShopEventListViewManager_o *this,
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
  __int64 v14; // x22
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct System_Collections_Generic_List_GameObject__o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  ShopEventListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v20; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x21
  ListViewItem_o *Item; // x0

  if ( (byte_40FF885 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FF885 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEventListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopEventListViewObject__o *)v12;
    if ( v15 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
    {
      v17 = this->fields.objectList;
      if ( !v17 )
        goto LABEL_23;
      if ( v15 >= (unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->fields._items->obj.klass + v14);
      if ( !v18 )
        goto LABEL_23;
      Component_srcLineSprite = (ShopEventListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v18,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Item = (ListViewItem_o *)ShopEventListViewObject__GetItem(Component_srcLineSprite, v20);
      if ( Item
        && (!Item->fields.isTermination || ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL)) )
      {
        if ( !v12 )
          goto LABEL_23;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v21,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
      }
    }
    objectList = this->fields.objectList;
    ++v14;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ShopEventListViewObject__o *__fastcall ShopEventListViewManager__get_ObjectList(
        ShopEventListViewManager_o *this,
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
  __int64 v14; // x22
  unsigned __int64 v15; // x26
  UnityEngine_Object_o *v16; // x21
  struct System_Collections_Generic_List_GameObject__o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0

  if ( (byte_40FF884 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FF884 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEventListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B170D4();
  v14 = 4LL;
  while ( 1 )
  {
    v15 = v14 - 4;
    if ( v14 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopEventListViewObject__o *)v12;
    if ( v15 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
    {
      v17 = this->fields.objectList;
      if ( !v17 )
        goto LABEL_19;
      if ( v15 >= (unsigned int)v17->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v18 = (UnityEngine_GameObject_o *)*((_QWORD *)&v17->fields._items->obj.klass + v14);
      if ( !v18 )
        goto LABEL_19;
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         v18,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !v12 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v14;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ShopEventListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79E5 & 1) == 0 )
  {
    sub_B16FFC(&ShopEventListViewManager___c_TypeInfo, v1);
    byte_40F79E5 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ShopEventListViewManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ShopEventListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
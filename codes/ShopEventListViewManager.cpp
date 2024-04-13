void __fastcall ShopEventListViewManager___ctor(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ShopEventListViewManager__CreateList(
        ShopEventListViewManager_o *this,
        int32_t kind,
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
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  EventEntity_array *OpenedEventEntityList; // x20
  int max_length; // w8
  __int64 v28; // x21
  EventEntity_o *v29; // x8
  int32_t id; // w23
  ShopEventListViewItem_o *v31; // x22
  const MethodInfo *v32; // x3
  int32_t eventId; // w23
  UILabel_o *emptyMessageLabel; // x20
  __int64 v35; // x0

  if ( (byte_42EE5D5 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ShopEventListViewItem_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12287/*"SHOP_EVENT_LIST_EMPTY"*/, v21, v22, v23);
    byte_42EE5D5 = 1;
  }
  if ( !kind )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_24;
    OpenedEventEntityList = EventMaster__GetOpenedEventEntityList((EventMaster_o *)Instance, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !OpenedEventEntityList )
      goto LABEL_24;
    max_length = OpenedEventEntityList->max_length;
    if ( max_length >= 1 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v28 >= max_length )
        {
          v35 = sub_B5D6C8(Instance);
          sub_B5D668(v35, 0LL);
        }
        v29 = OpenedEventEntityList->m_Items[v28];
        if ( !v29 )
          break;
        id = v29->fields.id;
        v31 = (ShopEventListViewItem_o *)sub_B5D694(ShopEventListViewItem_TypeInfo);
        ShopEventListViewItem___ctor(v31, v28, id, v32);
        if ( !v31 )
          break;
        eventId = v31->fields.eventId;
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
            (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
        max_length = OpenedEventEntityList->max_length;
        if ( (int)++v28 >= max_length )
          goto LABEL_19;
      }
LABEL_24:
      sub_B5D69C(Instance, v25);
    }
  }
LABEL_19:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12287/*"SHOP_EVENT_LIST_EMPTY"*/, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EE5D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, index, (_DWORD)method, v3);
    sub_B5D5C4(&ShopEventListViewItem_TypeInfo, v6, v7, v8);
    byte_42EE5D7 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&ShopEventListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (ShopEventListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ShopEventListViewItem_TypeInfo )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_ShopEventListViewObject__o *ObjectList; // x0
  const MethodInfo *v9; // x1
  int size; // w8
  System_Collections_Generic_List_ShopEventListViewObject__o *v11; // x19
  unsigned int v12; // w20

  if ( (byte_42EE5D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__, v5, v6, v7);
    byte_42EE5D6 = 1;
  }
  ObjectList = ShopEventListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_11;
  size = ObjectList->fields._size;
  v11 = ObjectList;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( size <= v12 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = (System_Collections_Generic_List_ShopEventListViewObject__o *)v11->fields._items->m_Items[v12];
      if ( !ObjectList )
        break;
      ShopEventListViewObject__SetupDisp((ShopEventListViewObject_o *)ObjectList, v9);
      size = v11->fields._size;
      if ( (int)++v12 >= size )
        return;
    }
LABEL_11:
    sub_B5D69C(ObjectList, v9);
  }
}


void __fastcall ShopEventListViewManager__OnClickListView(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  struct ListViewItem_o *linkItem; // x21
  __int64 v45; // x10
  EventDetailEntity_o *Entity; // x19
  CommonUI_o *v47; // x20
  System_String_o *Empty; // x21
  System_String_o *v49; // x19
  ShopEventListViewManager___c_c *v50; // x8
  struct ShopEventListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__31_0; // x22
  Il2CppObject *v53; // x23
  struct ShopEventListViewManager___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  EventEntity_o *v61; // x20
  struct UnityEngine_GameObject_o *dropDragPrefab; // x22
  System_String_o *ShopCondMessage; // x22
  CommonUI_o *Instance; // x21
  System_String_o *v65; // x19
  Il2CppObject *EventName; // x0
  System_String_o *v67; // x20
  ShopEventListViewManager___c_c *v68; // x8
  struct ShopEventListViewManager___c_StaticFields *v69; // x9
  System_Action_o *_9__31_1; // x22
  Il2CppObject *v71; // x23
  struct ShopEventListViewManager___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7

  if ( (byte_42EE5DE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ShopEventListViewItem_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&string_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_ShopEventListViewManager___c__OnClickListView_b__31_0__, v35, v36, v37);
    sub_B5D5C4(&Method_ShopEventListViewManager___c__OnClickListView_b__31_1__, v38, v39, v40);
    this = (ShopEventListViewManager_o *)sub_B5D5C4(&ShopEventListViewManager___c_TypeInfo, v41, v42, v43);
    byte_42EE5DE = 1;
  }
  if ( !obj )
    goto LABEL_48;
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    goto LABEL_48;
  v45 = *(&ShopEventListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v45
    || (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[v45 - 1] != ShopEventListViewItem_TypeInfo )
  {
    goto LABEL_48;
  }
  if ( !LOBYTE(linkItem[1].fields.sortValue0) && BYTE1(linkItem[1].fields.sortValue0) )
  {
    this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (ShopEventListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !this )
      goto LABEL_48;
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      (int32_t)linkItem[1].klass,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( BYTE2(linkItem[1].fields.sortValue0) )
    {
      this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Entity )
      {
        v47 = (CommonUI_o *)this;
        Empty = string_TypeInfo->static_fields->Empty;
        this = (ShopEventListViewManager_o *)EventDetailEntity__GetShopCondMessage(Entity, 0LL);
        v49 = (System_String_o *)this;
        v50 = ShopEventListViewManager___c_TypeInfo;
        if ( (BYTE3(ShopEventListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopEventListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo);
          v50 = ShopEventListViewManager___c_TypeInfo;
        }
        static_fields = v50->static_fields;
        _9__31_0 = static_fields->__9__31_0;
        if ( !_9__31_0 )
        {
          if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v50);
            static_fields = ShopEventListViewManager___c_TypeInfo->static_fields;
          }
          v53 = (Il2CppObject *)static_fields->__9;
          _9__31_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(_9__31_0, v53, Method_ShopEventListViewManager___c__OnClickListView_b__31_0__, 0LL);
          v54 = ShopEventListViewManager___c_TypeInfo->static_fields;
          v54->__9__31_0 = _9__31_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v54->__9__31_0,
            (System_Int32_array **)_9__31_0,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60);
        }
        if ( v47 )
        {
          CommonUI__OpenNotificationDialog(v47, Empty, v49, _9__31_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
          return;
        }
      }
      goto LABEL_48;
    }
    this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (ShopEventListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !this )
      goto LABEL_48;
    this = (ShopEventListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                           (int32_t)linkItem[1].klass,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_48;
    v61 = (EventEntity_o *)this;
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
        this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_48;
        this = (ShopEventListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( !this )
          goto LABEL_48;
        if ( !ShopMaster__CloseLimitEventShop((ShopMaster_o *)this, (int32_t)linkItem[1].klass, 0LL)
          && System_String__op_Inequality(Entity->fields.entryCondMessage, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          ShopCondMessage = Entity->fields.entryCondMessage;
        }
      }
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v65 = string_TypeInfo->static_fields->Empty;
      EventName = (Il2CppObject *)EventEntity__getEventName(v61, 0LL);
      this = (ShopEventListViewManager_o *)System_String__Format(ShopCondMessage, EventName, 0LL);
      v67 = (System_String_o *)this;
      v68 = ShopEventListViewManager___c_TypeInfo;
      if ( (BYTE3(ShopEventListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopEventListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo);
        v68 = ShopEventListViewManager___c_TypeInfo;
      }
      v69 = v68->static_fields;
      _9__31_1 = v69->__9__31_1;
      if ( !_9__31_1 )
      {
        if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          v69 = ShopEventListViewManager___c_TypeInfo->static_fields;
        }
        v71 = (Il2CppObject *)v69->__9;
        _9__31_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__31_1, v71, Method_ShopEventListViewManager___c__OnClickListView_b__31_1__, 0LL);
        v72 = ShopEventListViewManager___c_TypeInfo->static_fields;
        v72->__9__31_1 = _9__31_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v72->__9__31_1,
          (System_Int32_array **)_9__31_1,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78);
      }
      if ( !Instance )
LABEL_48:
        sub_B5D69C(this, obj);
      CommonUI__OpenNotificationDialog(Instance, v65, v67, _9__31_1, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
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

  if ( (byte_42EE5DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, (_DWORD)obj, (_DWORD)method, v3);
    byte_42EE5DF = 1;
  }
  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    this->fields.onClickListViewItem = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( !obj )
      sub_B5D69C(v11, v12);
    Index = ListViewObject__get_Index(obj, 0LL);
    System_Action_int___Invoke(
      onClickListViewItem,
      Index,
      (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall ShopEventListViewManager__OnMoveEnd(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t callbackCount; // w8
  bool v9; // vf
  int32_t v10; // w8
  ShopEventListViewManager_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  int32_t initMode; // w1
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_o *onMoveEnd; // x20

  if ( (byte_42EE5DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE5DD = 1;
  }
  callbackCount = this->fields.callbackCount;
  v9 = __OFSUB__(callbackCount, 1);
  v10 = callbackCount - 1;
  if ( v10 < 0 == v9 )
  {
    this->fields.callbackCount = v10;
    if ( v10 <= 0 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      initMode = this->fields.initMode;
      if ( (initMode | 4) == 5 )
      {
        ShopEventListViewManager__SetScrollBarActive(v11, this->fields.scrollBar, 1, v13);
        initMode = this->fields.initMode;
      }
      ShopEventListViewManager__SetScrollViewUnPressed(this, initMode, v12);
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
          sub_B5D560((BattleServantConfConponent_o *)&this->fields.onMoveEnd, 0LL, v19, v20, v21, v22, v23, v24);
          System_Action__Invoke(onMoveEnd, 0LL);
        }
        return;
      }
LABEL_20:
      sub_B5D69C(emptyMessageBase, v16);
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
  int32_t v18; // w21
  int v19; // w25
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_ShopEventListViewObject__o *ObjectList; // x0
  __int64 v22; // x1
  float v23; // s8
  System_Collections_Generic_List_ShopEventListViewObject__o *v24; // x22
  __int64 size; // x8
  char v26; // w23
  __int64 v27; // x26
  unsigned __int64 v28; // x24
  ShopEventListViewObject_o *v29; // x23
  System_Action_o *v30; // x24
  const MethodInfo *v31; // x3
  __int64 v32; // x9
  float v33; // s0

  if ( (byte_42EE5DC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, initMode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_ShopEventListViewManager_OnMoveEnd__, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v15, v16, v17);
    byte_42EE5DC = 1;
  }
  v18 = 3;
  switch ( initMode )
  {
    case 1:
      v19 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      ObjectList = ShopEventListViewManager__GetObjectList(this, 1, v20);
      v23 = 0.1;
      v24 = ObjectList;
      v18 = 4;
      if ( !ObjectList )
        goto LABEL_37;
      goto LABEL_15;
    case 2:
      goto LABEL_11;
    case 3:
      v18 = 5;
      goto LABEL_11;
    case 4:
      v18 = 6;
      goto LABEL_11;
    case 5:
      v18 = 7;
      goto LABEL_11;
    case 6:
      v18 = 8;
      goto LABEL_11;
    default:
      v18 = 0;
LABEL_11:
      ObjectList = ShopEventListViewManager__GetObjectList(this, initMode, method);
      v24 = ObjectList;
      v19 = 0;
      if ( (unsigned int)(initMode - 3) >= 3 )
        v23 = 0.0;
      else
        v23 = 0.1;
      if ( !ObjectList )
        goto LABEL_37;
LABEL_15:
      this->fields.callbackCount = v24->fields._size;
      LODWORD(size) = v24->fields._size;
      if ( (int)size >= 1 )
      {
        v26 = 0;
        v27 = 4LL;
        while ( 1 )
        {
          v28 = v27 - 4;
          if ( !v19 )
            goto LABEL_22;
          if ( v28 >= (unsigned int)size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( ListViewManager__ClippingItem(
                 (ListViewManager_o *)this,
                 *((ListViewObject_o **)&v24->fields._items->obj.klass + v27),
                 0LL) )
          {
            break;
          }
          --this->fields.callbackCount;
LABEL_27:
          size = v24->fields._size;
          v32 = v27 - 3;
          ++v27;
          if ( v32 >= size )
            goto LABEL_30;
        }
        LODWORD(size) = v24->fields._size;
LABEL_22:
        if ( v28 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v29 = (ShopEventListViewObject_o *)*((_QWORD *)&v24->fields._items->obj.klass + v27);
        v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v30, (Il2CppObject *)this, Method_ShopEventListViewManager_OnMoveEnd__, 0LL);
        if ( !v29 )
LABEL_37:
          sub_B5D69C(ObjectList, v22);
        ShopEventListViewObject__Init(v29, v18, v30, v23, v31);
        v26 = 1;
        goto LABEL_27;
      }
      v26 = 0;
LABEL_30:
      if ( initMode != 6 && (v26 & 1) == 0 )
      {
        this->fields.callbackCount = 1;
        v33 = 0.6;
        if ( (v19 & 1) == 0 && (unsigned int)(initMode - 3) >= 2 )
          v33 = 0.0;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
          v33,
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
  __int64 v3; // x3
  ShopEventListViewManager_o *v5; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t v7; // w21

  v5 = this;
  if ( (byte_42EE5D8 & 1) == 0 )
  {
    this = (ShopEventListViewManager_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                           eventId,
                                           (_DWORD)method,
                                           v3);
    byte_42EE5D8 = 1;
  }
  itemList = v5->fields.itemList;
  if ( !itemList )
LABEL_9:
    sub_B5D69C(this, *(_QWORD *)&eventId);
  v7 = 0;
  while ( v7 < itemList->fields._size )
  {
    this = (ShopEventListViewManager_o *)ShopEventListViewManager__GetItem(v5, v7, method);
    if ( !this )
      goto LABEL_9;
    if ( LODWORD(this->fields.dragParentObject) == eventId )
      return (ShopEventListViewItem_o *)this;
    itemList = v5->fields.itemList;
    ++v7;
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
      sub_B5D69C(0LL, initMode);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClickListViewItem,
    (System_Int32_array **)onClickListViewItem,
    (System_String_array **)onClickListViewItem,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_35114648(this, initMode, v10);
}


void __fastcall ShopEventListViewManager__SetMode_35114648(
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


void __fastcall ShopEventListViewManager__SetMode_35114816(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onMoveEnd,
    (System_Int32_array **)onMoveEnd,
    (System_String_array **)onMoveEnd,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_35114648(this, initMode, v10);
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
  if ( (byte_42EE5D9 & 1) == 0 )
  {
    this = (ShopEventListViewManager_o *)sub_B5D5C4(
                                           &ShopEventListViewObject_TypeInfo,
                                           (_DWORD)obj,
                                           (_DWORD)item,
                                           method);
    byte_42EE5D9 = 1;
  }
  if ( !obj
    || (v6 = *(&ShopEventListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ShopEventListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ShopEventListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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

  if ( (byte_42EE5DA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)scrollBar, isActive, method);
    byte_42EE5DA = 1;
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
      sub_B5D69C(gameObject, v7);
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
  __int64 v3; // x3
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_42EE5DB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, initMode, (_DWORD)method, v3);
    byte_42EE5DB = 1;
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
      v8 = this->fields.scrollView;
      if ( !v8 )
        sub_B5D69C(0LL, v7);
      UIScrollView__Press(v8, 0, 0LL);
    }
  }
}


System_Collections_Generic_List_ShopEventListViewObject__o *__fastcall ShopEventListViewManager__get_ClippingObjectList(
        ShopEventListViewManager_o *this,
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
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  __int64 v27; // x22
  unsigned __int64 v28; // x26
  UnityEngine_Object_o *v29; // x21
  struct System_Collections_Generic_List_GameObject__o *v30; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x21

  if ( (byte_42EE5D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EE5D4 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_23:
    sub_B5D69C(Component_srcLineSprite, v25);
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopEventListViewObject__o *)v23;
    if ( v28 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v29 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v27);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v30 = this->fields.objectList;
      if ( !v30 )
        goto LABEL_23;
      if ( v28 >= (unsigned int)v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Component_srcLineSprite = (UnityEngine_GameObject_o *)*((_QWORD *)&v30->fields._items->obj.klass + v27);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Component_srcLineSprite,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !Component_srcLineSprite )
        goto LABEL_23;
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)ShopEventListViewObject__GetItem(
                                                              (ShopEventListViewObject_o *)Component_srcLineSprite,
                                                              v25);
      if ( Component_srcLineSprite )
      {
        v25 = (const MethodInfo *)Component_srcLineSprite;
        if ( !LOBYTE(Component_srcLineSprite[3].fields.m_CachedPtr)
          || (Component_srcLineSprite = (UnityEngine_GameObject_o *)ListViewManager__ClippingItem_23920288(
                                                                      (ListViewManager_o *)this,
                                                                      (ListViewItem_o *)Component_srcLineSprite,
                                                                      0LL),
              ((unsigned __int8)Component_srcLineSprite & 1) != 0) )
        {
          if ( !v23 )
            goto LABEL_23;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            v31,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
        }
      }
    }
    objectList = this->fields.objectList;
    ++v27;
    if ( !objectList )
      goto LABEL_23;
  }
}


System_Collections_Generic_List_ShopEventListViewObject__o *__fastcall ShopEventListViewManager__get_ObjectList(
        ShopEventListViewManager_o *this,
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
  __int64 v27; // x22
  unsigned __int64 v28; // x26
  UnityEngine_Object_o *v29; // x21
  struct System_Collections_Generic_List_GameObject__o *v30; // x21

  if ( (byte_42EE5D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    byte_42EE5D3 = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEventListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
LABEL_19:
    sub_B5D69C(Component_srcLineSprite, v25);
  v27 = 4LL;
  while ( 1 )
  {
    v28 = v27 - 4;
    if ( v27 - 4 >= objectList->fields._size )
      return (System_Collections_Generic_List_ShopEventListViewObject__o *)v23;
    if ( v28 >= (unsigned int)objectList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v29 = (UnityEngine_Object_o *)*((_QWORD *)&objectList->fields._items->obj.klass + v27);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v30 = this->fields.objectList;
      if ( !v30 )
        goto LABEL_19;
      if ( v28 >= (unsigned int)v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      Component_srcLineSprite = (srcLineSprite_o *)*((_QWORD *)&v30->fields._items->obj.klass + v27);
      if ( !Component_srcLineSprite )
        goto LABEL_19;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)Component_srcLineSprite,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !v23 )
        goto LABEL_19;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEventListViewObject__Add__);
    }
    objectList = this->fields.objectList;
    ++v27;
    if ( !objectList )
      goto LABEL_19;
  }
}


void __fastcall ShopEventListViewManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ShopEventListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DC2 & 1) == 0 )
  {
    sub_B5D5C4(&ShopEventListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5DC2 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ShopEventListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ShopEventListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ShopEventListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
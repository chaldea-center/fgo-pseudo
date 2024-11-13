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
  DataManager_o *Instance; // x0
  EventEntity_array *OpenedEventEntityList; // x20
  int64_t v19; // x2
  __int64 v20; // x3
  int max_length; // w8
  __int64 v22; // x21
  EventEntity_o *v23; // x8
  int32_t id; // w23
  ShopEventListViewItem_o *v25; // x22
  const MethodInfo *v26; // x3
  int32_t eventId; // w23
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v35; // x8
  UILabel_o *emptyMessageLabel; // x20

  if ( (byte_4B1271D & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&ShopEventListViewItem_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_12180/*"SHOP_EVENT_LIST_EMPTY"*/, v15, v16);
    byte_4B1271D = 1;
  }
  if ( !kind )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_25;
    OpenedEventEntityList = EventMaster__GetOpenedEventEntityList((EventMaster_o *)Instance, 0LL);
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
    if ( !OpenedEventEntityList )
      goto LABEL_25;
    max_length = OpenedEventEntityList->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v22 >= max_length )
          sub_1BCAA44(Instance, *(_QWORD *)&kind);
        v23 = OpenedEventEntityList->m_Items[v22];
        if ( !v23 )
          break;
        id = v23->fields.id;
        v25 = (ShopEventListViewItem_o *)sub_1BCAA2C(ShopEventListViewItem_TypeInfo, *(_QWORD *)&kind, v19, v20);
        ShopEventListViewItem___ctor(v25, v22, id, v26);
        if ( !v25 )
          break;
        eventId = v25->fields.eventId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&kind);
        Instance = (DataManager_o *)AtlasManager__IsExistShopBanner(eventId, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)this->fields.itemList;
          if ( !Instance )
            break;
          v32 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !v32 )
            break;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v32 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v25,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = v32 + 8 * m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v35 + 32) = v25;
            sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)v25, v19, v20, v28, v29, v30, v31);
          }
        }
        max_length = OpenedEventEntityList->max_length;
        if ( (int)++v22 >= max_length )
          goto LABEL_21;
      }
LABEL_25:
      sub_1BCAA3C(Instance, *(_QWORD *)&kind);
    }
  }
LABEL_21:
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12180/*"SHOP_EVENT_LIST_EMPTY"*/, 0LL);
  if ( !emptyMessageLabel )
    goto LABEL_25;
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


// local variable allocation has failed, the output may be wrong!
ShopEventListViewItem_o *__fastcall ShopEventListViewManager__GetItem(
        ShopEventListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ShopEventListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1271F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&ShopEventListViewItem_TypeInfo, v5, v6);
    byte_4B1271F = 1;
  }
  result = (ShopEventListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ShopEventListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)result,
                                          index,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ShopEventListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ShopEventListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEventListViewItem_TypeInfo )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *v8; // x19
  int32_t v9; // w20

  if ( (byte_4B1271E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__, v4, v5);
    byte_4B1271E = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)ShopEventListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_9;
  v8 = ObjectList;
  if ( ObjectList->fields._size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v8,
                                                                  v9,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ShopEventListViewObject__SetupDisp((ShopEventListViewObject_o *)ObjectList, v7);
      if ( ++v9 >= v8->fields._size )
        return;
    }
LABEL_9:
    sub_1BCAA3C(ObjectList, v7);
  }
}


void __fastcall ShopEventListViewManager__OnClickListView(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  struct ListViewItem_o *linkItem; // x21
  __int64 methodPtr_low; // x10
  EventDetailEntity_o *Entity; // x19
  CommonUI_o *v33; // x20
  System_String_o *Empty; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  ShopEventListViewManager_o *v37; // x19
  ShopEventListViewManager___c_c *v38; // x8
  System_Action_o *_9__31_0; // x22
  Il2CppObject *v40; // x23
  struct ShopEventListViewManager___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  EventEntity_o *v48; // x20
  struct ListViewItemSeed_o *seed; // x22
  System_String_o *ShopCondMessage; // x22
  Il2CppObject *Instance; // x21
  System_String_o *v52; // x19
  Il2CppObject *EventName; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  ShopEventListViewManager_o *v56; // x20
  ShopEventListViewManager___c_c *v57; // x8
  System_Action_o *_9__31_1; // x22
  Il2CppObject *v59; // x23
  struct ShopEventListViewManager___c_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7

  if ( (byte_4B12726 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&ShopEventListViewItem_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&string_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_ShopEventListViewManager___c__OnClickListView_b__31_0__, v24, v25);
    sub_1BCA7E0(&Method_ShopEventListViewManager___c__OnClickListView_b__31_1__, v26, v27);
    this = (ShopEventListViewManager_o *)sub_1BCA7E0(&ShopEventListViewManager___c_TypeInfo, v28, v29);
    byte_4B12726 = 1;
  }
  if ( !obj )
    goto LABEL_43;
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    goto LABEL_43;
  methodPtr_low = LOBYTE(ShopEventListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ShopEventListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEventListViewItem_TypeInfo )
  {
    goto LABEL_43;
  }
  if ( !LOBYTE(linkItem[1].fields.sortValue0) && BYTE1(linkItem[1].fields.sortValue0) )
  {
    this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_43;
    this = (ShopEventListViewManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !this )
      goto LABEL_43;
    Entity = (EventDetailEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      (int32_t)linkItem[1].klass,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( BYTE2(linkItem[1].fields.sortValue0) )
    {
      this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Entity )
      {
        v33 = (CommonUI_o *)this;
        Empty = string_TypeInfo->static_fields->Empty;
        this = (ShopEventListViewManager_o *)EventDetailEntity__GetShopCondMessage(Entity, 0LL);
        v37 = this;
        v38 = ShopEventListViewManager___c_TypeInfo;
        if ( !ShopEventListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo, obj);
          v38 = ShopEventListViewManager___c_TypeInfo;
        }
        _9__31_0 = v38->static_fields->__9__31_0;
        if ( !_9__31_0 )
        {
          if ( !v38->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v38, obj);
            v38 = ShopEventListViewManager___c_TypeInfo;
          }
          v40 = (Il2CppObject *)v38->static_fields->__9;
          _9__31_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, obj, v35, v36);
          System_Action___ctor(_9__31_0, v40, Method_ShopEventListViewManager___c__OnClickListView_b__31_0__, 0LL);
          static_fields = ShopEventListViewManager___c_TypeInfo->static_fields;
          static_fields->__9__31_0 = _9__31_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
            (int64_t)_9__31_0,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
        }
        if ( v33 )
        {
          CommonUI__OpenNotificationDialog(
            v33,
            Empty,
            (System_String_o *)v37,
            _9__31_0,
            -1,
            0,
            0,
            0,
            0,
            0,
            1,
            0,
            0LL,
            0.0,
            0LL);
          return;
        }
      }
      goto LABEL_43;
    }
    this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_43;
    this = (ShopEventListViewManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !this )
      goto LABEL_43;
    this = (ShopEventListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           (int32_t)linkItem[1].klass,
                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( !this )
      goto LABEL_43;
    v48 = (EventEntity_o *)this;
    seed = this->fields.seed;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, obj);
    this = (ShopEventListViewManager_o *)NetworkManager__getTime(0LL);
    if ( (__int64)seed >= (__int64)this )
    {
      if ( !Entity )
        goto LABEL_43;
      ShopCondMessage = EventDetailEntity__GetShopCondMessage(Entity, 0LL);
      if ( EventDetailEntity__IsClosePurchaseShop(Entity, 0LL) )
      {
        this = (ShopEventListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_43;
        this = (ShopEventListViewManager_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( !this )
          goto LABEL_43;
        if ( !ShopMaster__CloseLimitEventShop((ShopMaster_o *)this, (int32_t)linkItem[1].klass, 0LL)
          && System_String__op_Inequality(Entity->fields.entryCondMessage, string_TypeInfo->static_fields->Empty, 0LL) )
        {
          ShopCondMessage = Entity->fields.entryCondMessage;
        }
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v52 = string_TypeInfo->static_fields->Empty;
      EventName = (Il2CppObject *)EventEntity__getEventName(v48, 0LL);
      this = (ShopEventListViewManager_o *)System_String__Format(ShopCondMessage, EventName, 0LL);
      v56 = this;
      v57 = ShopEventListViewManager___c_TypeInfo;
      if ( !ShopEventListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopEventListViewManager___c_TypeInfo, obj);
        v57 = ShopEventListViewManager___c_TypeInfo;
      }
      _9__31_1 = v57->static_fields->__9__31_1;
      if ( !_9__31_1 )
      {
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57, obj);
          v57 = ShopEventListViewManager___c_TypeInfo;
        }
        v59 = (Il2CppObject *)v57->static_fields->__9;
        _9__31_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, obj, v54, v55);
        System_Action___ctor(_9__31_1, v59, Method_ShopEventListViewManager___c__OnClickListView_b__31_1__, 0LL);
        v60 = ShopEventListViewManager___c_TypeInfo->static_fields;
        v60->__9__31_1 = _9__31_1;
        sub_1BCA784((PartyOrganizationUtility_o *)&v60->__9__31_1, (int64_t)_9__31_1, v61, v62, v63, v64, v65, v66);
      }
      if ( !Instance )
LABEL_43:
        sub_1BCAA3C(this, obj);
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)Instance,
        v52,
        (System_String_o *)v56,
        _9__31_1,
        -1,
        0,
        0,
        0,
        0,
        0,
        0,
        5,
        0LL,
        0.0,
        0LL);
    }
  }
}


void __fastcall ShopEventListViewManager__OnClickListViewEvent(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_int__o *onClickListViewItem; // x20
  PartyOrganizationUtility_o *p_onClickListViewItem; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int Index; // w0

  onClickListViewItem = this->fields.onClickListViewItem;
  if ( onClickListViewItem )
  {
    p_onClickListViewItem = (PartyOrganizationUtility_o *)&this->fields.onClickListViewItem;
    p_onClickListViewItem->klass = 0LL;
    sub_1BCA784(p_onClickListViewItem, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    if ( !obj )
      sub_1BCAA3C(v11, v12);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickListViewItem->fields.m_target)(
      onClickListViewItem->fields.original_method_info,
      Index,
      *(_QWORD *)&onClickListViewItem->fields.extra_arg);
  }
}


void __fastcall ShopEventListViewManager__OnMoveEnd(ShopEventListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t callbackCount; // w8
  bool v7; // vf
  int32_t v8; // w8
  ShopEventListViewManager_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  int32_t initMode; // w1
  UnityEngine_GameObject_o *emptyMessageBase; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *scrollView; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Action_o *onMoveEnd; // x20

  if ( (byte_4B12725 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12725 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v7 = __OFSUB__(callbackCount, 1);
  v8 = callbackCount - 1;
  if ( v8 < 0 == v7 )
  {
    this->fields.callbackCount = v8;
    if ( !v8 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0LL);
      initMode = this->fields.initMode;
      if ( (initMode | 4) == 5 )
      {
        ShopEventListViewManager__SetScrollBarActive(v9, this->fields.scrollBar, 1, v11);
        initMode = this->fields.initMode;
      }
      ShopEventListViewManager__SetScrollViewUnPressed(this, initMode, v10);
      if ( this->fields.initMode == 1 )
      {
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_19;
        emptyMessageBase = this->fields.emptyMessageBase;
        if ( !emptyMessageBase )
          goto LABEL_19;
        UnityEngine_GameObject__SetActive(emptyMessageBase, itemSortList->fields._size < 1, 0LL);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        goto LABEL_16;
      emptyMessageBase = (UnityEngine_GameObject_o *)this->fields.scrollView;
      if ( emptyMessageBase )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))emptyMessageBase->klass[1]._1.castClass)(
          emptyMessageBase,
          1LL,
          emptyMessageBase->klass[1]._1.declaringType);
LABEL_16:
        onMoveEnd = this->fields.onMoveEnd;
        if ( onMoveEnd )
        {
          this->fields.onMoveEnd = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onMoveEnd, 0LL, v17, v18, v19, v20, v21, v22);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onMoveEnd->fields.m_target)(
            onMoveEnd->fields.original_method_info,
            *(_QWORD *)&onMoveEnd->fields.extra_arg);
        }
        return;
      }
LABEL_19:
      sub_1BCAA3C(emptyMessageBase, v14);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t v13; // w21
  int v14; // w26
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_ShopEventListViewObject__o *ObjectList; // x0
  __int64 v17; // x1
  float v18; // s8
  System_Collections_Generic_List_object__o *v19; // x22
  int32_t size; // w8
  char v21; // w24
  int32_t v22; // w23
  Il2CppObject *v23; // x0
  Il2CppObject *Item; // x24
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x25
  const MethodInfo *v29; // x3
  float v30; // s0

  if ( (byte_4B12724 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&initMode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_ShopEventListViewManager_OnMoveEnd__, v9, v10);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v11, v12);
    byte_4B12724 = 1;
  }
  v13 = 3;
  switch ( initMode )
  {
    case 1:
      v14 = 1;
      ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
      ObjectList = ShopEventListViewManager__GetObjectList(this, 1, v15);
      v18 = 0.1;
      v19 = (System_Collections_Generic_List_object__o *)ObjectList;
      v13 = 4;
      goto LABEL_13;
    case 2:
      goto LABEL_10;
    case 3:
      v13 = 5;
      goto LABEL_10;
    case 4:
      v13 = 6;
      goto LABEL_10;
    case 5:
      v13 = 7;
      goto LABEL_10;
    case 6:
      v13 = 8;
      goto LABEL_10;
    default:
      v13 = 0;
LABEL_10:
      ObjectList = ShopEventListViewManager__GetObjectList(this, initMode, method);
      v19 = (System_Collections_Generic_List_object__o *)ObjectList;
      v14 = 0;
      if ( (unsigned int)(initMode - 3) >= 3 )
        v18 = 0.0;
      else
        v18 = 0.1;
LABEL_13:
      if ( !v19 )
        goto LABEL_28;
      size = v19->fields._size;
      v21 = 0;
      this->fields.callbackCount = size;
      if ( size >= 1 )
      {
        v22 = 0;
        do
        {
          if ( v14
            && (v23 = System_Collections_Generic_List_object___get_Item(
                        v19,
                        v22,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__),
                !ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v23, 0LL)) )
          {
            --this->fields.callbackCount;
          }
          else
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     v19,
                     v22,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ShopEventListViewObject__get_Item__);
            v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
            System_Action___ctor(v28, (Il2CppObject *)this, Method_ShopEventListViewManager_OnMoveEnd__, 0LL);
            if ( !Item )
LABEL_28:
              sub_1BCAA3C(ObjectList, v17);
            ShopEventListViewObject__Init((ShopEventListViewObject_o *)Item, v13, v28, v18, v29);
            v21 = 1;
          }
          ++v22;
        }
        while ( v22 < v19->fields._size );
      }
      if ( initMode != 6 && (v21 & 1) == 0 )
      {
        this->fields.callbackCount = 1;
        v30 = 0.6;
        if ( !(((unsigned int)(initMode - 3) < 2) | v14) )
          v30 = 0.0;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
          v30,
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
  if ( (byte_4B12720 & 1) == 0 )
  {
    this = (ShopEventListViewManager_o *)sub_1BCA7E0(
                                           &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                           *(_QWORD *)&eventId,
                                           method);
    byte_4B12720 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_9:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
  v6 = 0;
  while ( v6 < itemList->fields._size )
  {
    this = (ShopEventListViewManager_o *)ShopEventListViewManager__GetItem(v4, v6, method);
    if ( !this )
      goto LABEL_9;
    if ( LODWORD(this->fields.clipRange.fields.x) == eventId )
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


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&initMode);
    UnityEngine_GameObject__SetActive(emptyMessageBase, 0, 0LL);
  }
}


void __fastcall ShopEventListViewManager__SetMode(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        System_Action_int__o *onClickListViewItem,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onClickListViewItem = onClickListViewItem;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClickListViewItem,
    (int64_t)onClickListViewItem,
    (int64_t)onClickListViewItem,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_33494864(this, initMode, v10);
}


void __fastcall ShopEventListViewManager__SetMode_33494864(
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


void __fastcall ShopEventListViewManager__SetMode_33495028(
        ShopEventListViewManager_o *this,
        int32_t initMode,
        System_Action_o *onMoveEnd,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.onMoveEnd = onMoveEnd;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onMoveEnd,
    (int64_t)onMoveEnd,
    (int64_t)onMoveEnd,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ShopEventListViewManager__SetMode_33494864(this, initMode, v10);
}


void __fastcall ShopEventListViewManager__SetObjectItem(
        ShopEventListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ShopEventListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B12721 & 1) == 0 )
  {
    this = (ShopEventListViewManager_o *)sub_1BCA7E0(&ShopEventListViewObject_TypeInfo, obj, item);
    byte_4B12721 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ShopEventListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ShopEventListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopEventListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  ShopEventListViewObject__Init((ShopEventListViewObject_o *)obj, v7, 0LL, 0.0, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopEventListViewManager__SetScrollBarActive(
        ShopEventListViewManager_o *this,
        UIScrollBar_o *scrollBar,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B12722 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, scrollBar, isActive);
    byte_4B12722 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scrollBar);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollBar, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !scrollBar
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v7);
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
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_4B12723 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode, method);
    byte_4B12723 = 1;
  }
  if ( (initMode | 4) == 5 )
  {
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&initMode);
    if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
    {
      v7 = this->fields.scrollView;
      if ( !v7 )
        sub_1BCAA3C(0LL, v6);
      UIScrollView__Press(v7, 0, 0LL);
    }
  }
}


System_Collections_Generic_List_ShopEventListViewObject__o *__fastcall ShopEventListViewManager__get_ClippingObjectList(
        ShopEventListViewManager_o *this,
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
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *Item; // x22
  Il2CppObject *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B1271C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1271C = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEventListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_21:
    sub_1BCAA3C(objectList, v18);
  v20 = 0;
  while ( v20 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v20,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_21;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !objectList )
        goto LABEL_21;
      v23 = (Il2CppObject *)objectList;
      objectList = (System_Collections_Generic_List_object__o *)ShopEventListViewObject__GetItem(
                                                                  (ShopEventListViewObject_o *)objectList,
                                                                  v18);
      if ( objectList )
      {
        v18 = (const MethodInfo *)objectList;
        if ( !LOBYTE(objectList[2].monitor)
          || (objectList = (System_Collections_Generic_List_object__o *)ListViewManager__ClippingItem_41463120(
                                                                          (ListViewManager_o *)this,
                                                                          (ListViewItem_o *)objectList,
                                                                          0LL),
              ((unsigned __int8)objectList & 1) != 0) )
        {
          if ( !v17 )
            goto LABEL_21;
          items = v17->fields._items;
          v31 = Method_System_Collections_Generic_List_ShopEventListViewObject__Add__;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v23,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v23;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
          }
        }
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v20;
    if ( !objectList )
      goto LABEL_21;
  }
  return (System_Collections_Generic_List_ShopEventListViewObject__o *)v17;
}


System_Collections_Generic_List_ShopEventListViewObject__o *__fastcall ShopEventListViewManager__get_ObjectList(
        ShopEventListViewManager_o *this,
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
  int32_t v20; // w21
  __int64 v21; // x1
  Il2CppObject *Item; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int64_t v32; // x1
  Il2CppClass **v33; // x0

  if ( (byte_4B1271B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEventListViewObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ShopEventListViewObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1271B = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ShopEventListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ShopEventListViewObject___ctor__);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_17:
    sub_1BCAA3C(objectList, v18);
  v20 = 0;
  while ( v20 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v20,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v20,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !objectList )
        goto LABEL_17;
      objectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)objectList,
                                                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ShopEventListViewObject___);
      if ( !v17 )
        goto LABEL_17;
      items = v17->fields._items;
      v30 = Method_System_Collections_Generic_List_ShopEventListViewObject__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_17;
      size = v17->fields._size;
      v32 = (int64_t)objectList;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)objectList,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v32;
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v32, v23, v24, v25, v26, v27, v28);
      }
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v20;
    if ( !objectList )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_ShopEventListViewObject__o *)v17;
}


void __fastcall ShopEventListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12727 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopEventListViewManager___c_TypeInfo, v1, v2);
    byte_4B12727 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ShopEventListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ShopEventListViewManager___c_TypeInfo->static_fields->__9 = (struct ShopEventListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ShopEventListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
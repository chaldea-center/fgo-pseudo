void SubmarineSelectScannerListViewManager___ctor(
        SubmarineSelectScannerListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void SubmarineSelectScannerListViewManager__CreateList(
        SubmarineSelectScannerListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  EventPanelScanEntity_array *ListByEventId; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x24
  EventPanelScanEntity_o *v12; // x26
  char v13; // w27
  int32_t iconImageId; // w23
  struct System_String_o *name; // x28
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t id; // w20
  __int64 v18; // x26
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  DataManager_o *v35; // [xsp+0h] [xbp-70h]

  if ( (byte_5934E54 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SubmarineSelectScannerListViewItem_TypeInfo);
    sub_21FFC50(&StringLiteral_5949/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/);
    byte_5934E54 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_25;
  ListByEventId = EventPanelScanMaster__GetListByEventId((EventPanelScanMaster_o *)MasterData_object, eventId, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5949/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0);
  v35 = Instance;
  if ( !ListByEventId )
    goto LABEL_25;
  max_length = ListByEventId->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_21FFED4(Instance);
      v12 = ListByEventId->m_Items[v11];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    (EventPanelScanMaster_o *)MasterData_object,
                                    v12,
                                    0);
      v13 = (char)Instance;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v12 )
          break;
        iconImageId = v12->fields.iconImageId;
        name = v12->fields.name;
      }
      else
      {
        if ( !v12 )
          break;
        name = (struct System_String_o *)v35;
        iconImageId = 0;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      id = v12->fields.id;
      v18 = sub_21FFEBC(SubmarineSelectScannerListViewItem_TypeInfo);
      ListViewItem___ctor_50749276((ListViewItem_o *)v18, v11, 0);
      *(_DWORD *)(v18 + 128) = iconImageId;
      *(_DWORD *)(v18 + 120) = eventId;
      *(_DWORD *)(v18 + 124) = id;
      *(_QWORD *)(v18 + 136) = name;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 136), (int32_t)name, v19, v20, v21, v22, v23, v24);
      *(_BYTE *)(v18 + 144) = v13 & 1;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v18,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), v18, v25, v26, v27, v28, v29, v30);
      }
      LODWORD(max_length) = ListByEventId->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        goto LABEL_23;
    }
LABEL_25:
    sub_21FFECC(Instance, v5);
  }
LABEL_23:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  Instance = (DataManager_o *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_25;
  UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
}


void SubmarineSelectScannerListViewManager__OnClickListView(
        SubmarineSelectScannerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SubmarineSelectScannerListViewManager_o *v5; // x19
  struct ListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x9
  System_Action_T1__T2__o *OnClickItemAction_k__BackingField; // x8

  v5 = this;
  if ( (byte_5934E55 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_int__bool___);
    this = (SubmarineSelectScannerListViewManager_o *)sub_21FFC50(&SubmarineSelectScannerListViewItem_TypeInfo);
    byte_5934E55 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_21FFECC(this, obj);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  naturalAligment = SubmarineSelectScannerListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    sub_220024C(linkItem, SubmarineSelectScannerListViewItem_TypeInfo, method, v3);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v5->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortIndex,
      (const MethodInfo_36CE1DC *)Method_ActionExtensions_Call_int__bool___);
}


System_Action_int__bool__o *SubmarineSelectScannerListViewManager__get_OnClickItemAction(
        SubmarineSelectScannerListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickItemAction_k__BackingField;
}


void SubmarineSelectScannerListViewManager__set_OnClickItemAction(
        SubmarineSelectScannerListViewManager_o *this,
        System_Action_int__bool__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnClickItemAction_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickItemAction_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
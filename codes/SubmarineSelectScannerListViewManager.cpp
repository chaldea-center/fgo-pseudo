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
  Il2CppObject *MasterData_object; // x21
  EventPanelScanEntity_array *ListByEventId; // x22
  int max_length; // w8
  __int64 v8; // x24
  EventPanelScanEntity_o *v9; // x26
  char v10; // w27
  int32_t iconImageId; // w23
  struct System_String_o *name; // x28
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t id; // w20
  __int64 v15; // x26
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  DataManager_o *v24; // [xsp+0h] [xbp-70h]

  if ( (byte_4C3437C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&SubmarineSelectScannerListViewItem_TypeInfo);
    sub_1C32C20(&StringLiteral_5729/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/);
    byte_4C3437C = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_25;
  ListByEventId = EventPanelScanMaster__GetListByEventId((EventPanelScanMaster_o *)MasterData_object, eventId, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5729/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0);
  v24 = Instance;
  if ( !ListByEventId )
    goto LABEL_25;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_1C32E84(Instance);
      v9 = ListByEventId->m_Items[v8];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    (EventPanelScanMaster_o *)MasterData_object,
                                    v9,
                                    0);
      v10 = (char)Instance;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v9 )
          break;
        iconImageId = v9->fields.iconImageId;
        name = v9->fields.name;
      }
      else
      {
        if ( !v9 )
          break;
        name = (struct System_String_o *)v24;
        iconImageId = 0;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      id = v9->fields.id;
      v15 = sub_1C32E6C(SubmarineSelectScannerListViewItem_TypeInfo);
      ListViewItem___ctor_43702564((ListViewItem_o *)v15, v8, 0);
      *(_DWORD *)(v15 + 128) = iconImageId;
      *(_DWORD *)(v15 + 120) = eventId;
      *(_DWORD *)(v15 + 124) = id;
      *(_QWORD *)(v15 + 136) = name;
      sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 136), (int32_t)name, v16, v17);
      *(_BYTE *)(v15 + 152) = v10 & 1;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v15,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v15;
        sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), v15, v18, v19);
      }
      max_length = ListByEventId->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C32E7C(Instance);
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
  SubmarineSelectScannerListViewManager_o *v4; // x19
  struct ListViewItem_o *linkItem; // x0
  __int64 naturalAligment; // x9
  System_Action_T1__T2__o *OnClickItemAction_k__BackingField; // x8

  v4 = this;
  if ( (byte_4C3437D & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_int__bool___);
    this = (SubmarineSelectScannerListViewManager_o *)sub_1C32C20(&SubmarineSelectScannerListViewItem_TypeInfo);
    byte_4C3437D = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1C32E7C(this);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  naturalAligment = SubmarineSelectScannerListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    sub_1C3313C(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v4->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortValue0,
      (const MethodInfo_3029F74 *)Method_ActionExtensions_Call_int__bool___);
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
  const MethodInfo *v3; // x3

  this->fields._OnClickItemAction_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._OnClickItemAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}
void __fastcall SubmarineSelectScannerListViewManager___ctor(
        SubmarineSelectScannerListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSelectScannerListViewManager__CreateList(
        SubmarineSelectScannerListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  EventPanelScanEntity_array *ListByEventId; // x22
  __int64 v14; // x2
  int max_length; // w8
  __int64 v16; // x24
  EventPanelScanEntity_o *v17; // x26
  char v18; // w27
  int32_t iconImageId; // w23
  struct System_String_o *name; // x28
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t id; // w20
  __int64 v23; // x26
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  DataManager_o *v32; // [xsp+0h] [xbp-70h]

  if ( (byte_4B18F44 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&SubmarineSelectScannerListViewItem_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_5684/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, v9);
    byte_4B18F44 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_25;
  ListByEventId = EventPanelScanMaster__GetListByEventId((EventPanelScanMaster_o *)MasterData_object, eventId, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5684/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0LL);
  v32 = Instance;
  if ( !ListByEventId )
    goto LABEL_25;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v16 >= max_length )
        sub_1BCB25C(Instance, v11, v14);
      v17 = ListByEventId->m_Items[v16];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    (EventPanelScanMaster_o *)MasterData_object,
                                    v17,
                                    0LL);
      v18 = (char)Instance;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v17 )
          break;
        iconImageId = v17->fields.iconImageId;
        name = v17->fields.name;
      }
      else
      {
        if ( !v17 )
          break;
        name = (struct System_String_o *)v32;
        iconImageId = 0;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      id = v17->fields.id;
      v23 = sub_1BCB244(SubmarineSelectScannerListViewItem_TypeInfo);
      ListViewItem___ctor_42932312((ListViewItem_o *)v23, v16, 0LL);
      *(_DWORD *)(v23 + 120) = iconImageId;
      *(_DWORD *)(v23 + 112) = eventId;
      *(_DWORD *)(v23 + 116) = id;
      *(_QWORD *)(v23 + 128) = name;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 128), (int32_t)name, v24, v25);
      *(_BYTE *)(v23 + 144) = v18 & 1;
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
          (Il2CppObject *)v23,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v23;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v31 + 4), v23, v26, v27);
      }
      max_length = ListByEventId->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_23;
    }
LABEL_25:
    sub_1BCB254(Instance, v11);
  }
LABEL_23:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Instance = (DataManager_o *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_25;
  UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0LL);
}


void __fastcall SubmarineSelectScannerListViewManager__OnClickListView(
        SubmarineSelectScannerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SubmarineSelectScannerListViewManager_o *v4; // x19
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x9
  System_Action_T1__T2__o *OnClickItemAction_k__BackingField; // x8

  v4 = this;
  if ( (byte_4B18F45 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_int__bool___, obj);
    this = (SubmarineSelectScannerListViewManager_o *)sub_1BCAFF8(&SubmarineSelectScannerListViewItem_TypeInfo, v5);
    byte_4B18F45 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1BCB254(this, obj);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  methodPtr_low = LOBYTE(SubmarineSelectScannerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    sub_1BCB514(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v4->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortValue0,
      (const MethodInfo_2F6A380 *)Method_ActionExtensions_Call_int__bool___);
}


System_Action_int__bool__o *__fastcall SubmarineSelectScannerListViewManager__get_OnClickItemAction(
        SubmarineSelectScannerListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickItemAction_k__BackingField;
}


void __fastcall SubmarineSelectScannerListViewManager__set_OnClickItemAction(
        SubmarineSelectScannerListViewManager_o *this,
        System_Action_int__bool__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickItemAction_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._OnClickItemAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}
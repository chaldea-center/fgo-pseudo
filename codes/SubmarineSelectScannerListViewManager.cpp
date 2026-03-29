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
  EventPanelScanEntity_array *ListByEventId; // x22
  int max_length; // w8
  __int64 v9; // x24
  EventPanelScanEntity_o *v10; // x26
  char v11; // w27
  int32_t iconImageId; // w23
  struct System_String_o *name; // x28
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t id; // w20
  __int64 v16; // x26
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  DataManager_o *v33; // [xsp+0h] [xbp-70h]

  if ( (byte_4D2D2C3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SubmarineSelectScannerListViewItem_TypeInfo);
    sub_1C93AD4(&StringLiteral_5756/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/);
    byte_4D2D2C3 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_25;
  ListByEventId = EventPanelScanMaster__GetListByEventId((EventPanelScanMaster_o *)MasterData_object, eventId, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5756/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0);
  v33 = Instance;
  if ( !ListByEventId )
    goto LABEL_25;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
        sub_1C93D34(Instance);
      v10 = ListByEventId->m_Items[v9];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    (EventPanelScanMaster_o *)MasterData_object,
                                    v10,
                                    0);
      v11 = (char)Instance;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v10 )
          break;
        iconImageId = v10->fields.iconImageId;
        name = v10->fields.name;
      }
      else
      {
        if ( !v10 )
          break;
        name = (struct System_String_o *)v33;
        iconImageId = 0;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      id = v10->fields.id;
      v16 = sub_1C93D20(SubmarineSelectScannerListViewItem_TypeInfo);
      ListViewItem___ctor_44487500((ListViewItem_o *)v16, v9, 0);
      *(_DWORD *)(v16 + 128) = iconImageId;
      *(_DWORD *)(v16 + 120) = eventId;
      *(_DWORD *)(v16 + 124) = id;
      *(_QWORD *)(v16 + 136) = name;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 136), (int32_t)name, v17, v18, v19, v20, v21, v22);
      *(_BYTE *)(v16 + 144) = v11 & 1;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v16,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 4), v16, v23, v24, v25, v26, v27, v28);
      }
      max_length = ListByEventId->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C93D2C(Instance, v5);
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
  if ( (byte_4D2D2C4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_int__bool___);
    this = (SubmarineSelectScannerListViewManager_o *)sub_1C93AD4(&SubmarineSelectScannerListViewItem_TypeInfo);
    byte_4D2D2C4 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1C93D2C(this, obj);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  naturalAligment = SubmarineSelectScannerListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    sub_1C940C8(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v4->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortIndex,
      (const MethodInfo_30EBEE8 *)Method_ActionExtensions_Call_int__bool___);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._OnClickItemAction_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._OnClickItemAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
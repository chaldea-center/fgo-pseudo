void __fastcall SubmarineSelectScannerListViewManager___ctor(
        SubmarineSelectScannerListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall SubmarineSelectScannerListViewManager__CreateList(
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
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  DataManager_o *v25; // [xsp+0h] [xbp-70h]

  if ( (byte_4A57E62 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SubmarineSelectScannerListViewItem_TypeInfo);
    sub_1B885B0(&StringLiteral_5725/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/);
    byte_4A57E62 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_25;
  ListByEventId = EventPanelScanMaster__GetListByEventId((EventPanelScanMaster_o *)MasterData_object, eventId, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5725/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0LL);
  v25 = Instance;
  if ( !ListByEventId )
    goto LABEL_25;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
        sub_1B88814(Instance, v5);
      v10 = ListByEventId->m_Items[v9];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    (EventPanelScanMaster_o *)MasterData_object,
                                    v10,
                                    0LL);
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
        name = (struct System_String_o *)v25;
        iconImageId = 0;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      id = v10->fields.id;
      v16 = sub_1B887FC(SubmarineSelectScannerListViewItem_TypeInfo);
      ListViewItem___ctor_40706472((ListViewItem_o *)v16, v9, 0LL);
      *(_DWORD *)(v16 + 120) = iconImageId;
      *(_DWORD *)(v16 + 112) = eventId;
      *(_DWORD *)(v16 + 116) = id;
      *(_QWORD *)(v16 + 128) = name;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 128), (int32_t)name, v17, v18);
      *(_BYTE *)(v16 + 144) = v11 & 1;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v16,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), v16, v19, v20);
      }
      max_length = ListByEventId->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B8880C(Instance, v5);
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
  struct ListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x9
  System_Action_T1__T2__o *OnClickItemAction_k__BackingField; // x8

  v4 = this;
  if ( (byte_4A57E63 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_int__bool___);
    this = (SubmarineSelectScannerListViewManager_o *)sub_1B885B0(&SubmarineSelectScannerListViewItem_TypeInfo);
    byte_4A57E63 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1B8880C(this, obj);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  methodPtr_low = LOBYTE(SubmarineSelectScannerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    sub_1B88ACC(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v4->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortValue0,
      (const MethodInfo_2DD5A94 *)Method_ActionExtensions_Call_int__bool___);
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
  int32_t v3; // w3

  this->fields._OnClickItemAction_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickItemAction_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}
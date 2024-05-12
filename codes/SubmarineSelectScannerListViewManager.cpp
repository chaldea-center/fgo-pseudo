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
  __int64 v4; // x1
  EventPanelScanMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventPanelScanEntity_array *ListByEventId; // x22
  int max_length; // w8
  __int64 v8; // x24
  EventPanelScanEntity_o *v9; // x25
  int32_t iconImageId; // w26
  System_String_o *name; // x28
  bool v12; // w27
  int32_t id; // w20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  SubmarineSelectScannerListViewItem_o *v15; // x25
  __int64 v16; // x0
  System_String_o *v17; // [xsp+8h] [xbp-68h]

  if ( (byte_438CE91 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&SubmarineSelectScannerListViewItem_TypeInfo);
    sub_B775C4(&StringLiteral_5876/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/);
    byte_438CE91 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  ListByEventId = EventPanelScanMaster__GetListByEventId(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5876/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0LL);
  v17 = (System_String_o *)Instance;
  if ( !ListByEventId )
    goto LABEL_22;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
      {
        v16 = sub_B776C8(Instance);
        sub_B77668(v16, 0LL);
      }
      v9 = ListByEventId->m_Items[v8];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    MasterData_WarQuestSelectionMaster,
                                    v9,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v9 )
          break;
        iconImageId = v9->fields.iconImageId;
        name = v9->fields.name;
        v12 = 1;
      }
      else
      {
        if ( !v9 )
          break;
        name = v17;
        v12 = 0;
        iconImageId = 0;
      }
      id = v9->fields.id;
      itemList = this->fields.itemList;
      v15 = (SubmarineSelectScannerListViewItem_o *)sub_B77694(SubmarineSelectScannerListViewItem_TypeInfo);
      SubmarineSelectScannerListViewItem___ctor(v15, v8, eventId, id, iconImageId, name, v12, 0LL);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = ListByEventId->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_B7769C(Instance, v4);
  }
LABEL_20:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Instance = (DataManager_o *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_22;
  UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0LL);
}


void __fastcall SubmarineSelectScannerListViewManager__OnClickListView(
        SubmarineSelectScannerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  SubmarineSelectScannerListViewManager_o *v4; // x19
  struct ListViewItem_o *linkItem; // x0
  __int64 v6; // x9
  System_Action_T1__T2__o *OnClickItemAction_k__BackingField; // x8

  v4 = this;
  if ( (byte_438CE92 & 1) == 0 )
  {
    sub_B775C4(&Method_ActionExtensions_Call_int__bool___);
    this = (SubmarineSelectScannerListViewManager_o *)sub_B775C4(&SubmarineSelectScannerListViewItem_TypeInfo);
    byte_438CE92 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B7769C(this, obj);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  v6 = *(&SubmarineSelectScannerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    this = (SubmarineSelectScannerListViewManager_o *)sub_B77990(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v4->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortValue0,
      (const MethodInfo_2C3C400 *)Method_ActionExtensions_Call_int__bool___);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickItemAction_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._OnClickItemAction_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  EventPanelScanMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventPanelScanEntity_array *ListByEventId; // x22
  int max_length; // w8
  __int64 v13; // x24
  EventPanelScanEntity_o *v14; // x25
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t iconImageId; // w26
  System_String_o *name; // x28
  bool v19; // w27
  int32_t id; // w20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  SubmarineSelectScannerListViewItem_o *v22; // x25
  __int64 v23; // x0
  System_String_o *v24; // [xsp+8h] [xbp-68h]

  if ( (byte_4215F59 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v4);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&SubmarineSelectScannerListViewItem_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_5748/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, v8);
    byte_4215F59 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  ListByEventId = EventPanelScanMaster__GetListByEventId(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5748/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0LL);
  v24 = (System_String_o *)Instance;
  if ( !ListByEventId )
    goto LABEL_22;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
      {
        v23 = sub_B0D9A8(Instance);
        sub_B0D948(v23, 0LL);
      }
      v14 = ListByEventId->m_Items[v13];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    MasterData_WarQuestSelectionMaster,
                                    v14,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v14 )
          break;
        iconImageId = v14->fields.iconImageId;
        name = v14->fields.name;
        v19 = 1;
      }
      else
      {
        if ( !v14 )
          break;
        name = v24;
        v19 = 0;
        iconImageId = 0;
      }
      id = v14->fields.id;
      itemList = this->fields.itemList;
      v22 = (SubmarineSelectScannerListViewItem_o *)sub_B0D974(SubmarineSelectScannerListViewItem_TypeInfo, v15, v16);
      SubmarineSelectScannerListViewItem___ctor(v22, v13, eventId, id, iconImageId, name, v19, 0LL);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = ListByEventId->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_B0D97C(Instance);
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
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v7; // x9
  System_Action_T1__T2__o *OnClickItemAction_k__BackingField; // x8

  v4 = this;
  if ( (byte_4215F5A & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_int__bool___, obj);
    this = (SubmarineSelectScannerListViewManager_o *)sub_B0D8A4(&SubmarineSelectScannerListViewItem_TypeInfo, v5);
    byte_4215F5A = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B0D97C(this);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  v7 = *(&SubmarineSelectScannerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    this = (SubmarineSelectScannerListViewManager_o *)sub_B0DC70(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v4->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortValue0,
      (const MethodInfo_2D9673C *)Method_ActionExtensions_Call_int__bool___);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._OnClickItemAction_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
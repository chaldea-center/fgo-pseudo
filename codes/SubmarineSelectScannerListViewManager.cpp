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
  WebViewManager_o *Instance; // x0
  EventPanelScanMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v11; // x0
  EventPanelScanEntity_array *ListByEventId; // x22
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  __int64 v17; // x24
  EventPanelScanEntity_o *v18; // x25
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t iconImageId; // w20
  System_Int32_array **name; // x26
  char v25; // w23
  int32_t id; // w19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  __int64 v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UIScrollView_o *scrollView; // x0
  System_Int32_array **v36; // [xsp+8h] [xbp-68h]

  if ( (byte_40F7CDA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&SubmarineSelectScannerListViewItem_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_5714, v8);
    byte_40F7CDA = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11 )
    goto LABEL_22;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)v11,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  ListByEventId = EventPanelScanMaster__GetListByEventId(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5714, 0LL);
  v36 = (System_Int32_array **)v13;
  if ( !ListByEventId )
    goto LABEL_22;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= max_length )
      {
        sub_B17100(v13, v14, v15);
        sub_B170A0();
      }
      v18 = ListByEventId->m_Items[v17];
      if ( EventPanelScanMaster__IsSatisfyReleaseCondition(MasterData_WarQuestSelectionMaster, v18, 0LL) )
      {
        if ( !v18 )
          break;
        iconImageId = v18->fields.iconImageId;
        name = (System_Int32_array **)v18->fields.name;
        v25 = 1;
      }
      else
      {
        if ( !v18 )
          break;
        name = v36;
        v25 = 0;
        iconImageId = 0;
      }
      id = v18->fields.id;
      itemList = this->fields.itemList;
      v28 = sub_B170CC(SubmarineSelectScannerListViewItem_TypeInfo, v19, v20, v21, v22);
      ListViewItem___ctor_30173668((ListViewItem_o *)v28, v17, 0LL);
      *(_DWORD *)(v28 + 120) = iconImageId;
      *(_DWORD *)(v28 + 112) = eventId;
      *(_DWORD *)(v28 + 116) = id;
      *(_QWORD *)(v28 + 128) = name;
      sub_B16F98((BattleServantConfConponent_o *)(v28 + 128), name, v29, v30, v31, v32, v33, v34);
      *(_BYTE *)(v28 + 144) = v25;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = ListByEventId->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_20:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_22;
  UIScrollView__ResetPosition(scrollView, 0LL);
}


void __fastcall SubmarineSelectScannerListViewManager__OnClickListView(
        SubmarineSelectScannerListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ListViewItem_o *linkItem; // x0
  __int64 v7; // x9
  System_Action_T1__T2__o *OnClickItemAction_k__BackingField; // x8

  if ( (byte_40F7CDB & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_int__bool___, obj);
    sub_B16FFC(&SubmarineSelectScannerListViewItem_TypeInfo, v5);
    byte_40F7CDB = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B170D4();
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  v7 = *(&SubmarineSelectScannerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    sub_B173C8(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)this->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortValue0,
      (const MethodInfo_2D39FB0 *)Method_ActionExtensions_Call_int__bool___);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._OnClickItemAction_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
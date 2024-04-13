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
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  EventPanelScanMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventPanelScanEntity_array *ListByEventId; // x22
  int max_length; // w8
  __int64 v27; // x24
  EventPanelScanEntity_o *v28; // x25
  int32_t iconImageId; // w26
  System_String_o *name; // x28
  bool v31; // w27
  int32_t id; // w20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  SubmarineSelectScannerListViewItem_o *v34; // x25
  __int64 v35; // x0
  System_String_o *v36; // [xsp+8h] [xbp-68h]

  if ( (byte_42EA37B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&SubmarineSelectScannerListViewItem_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_5809/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, v19, v20, v21);
    byte_42EA37B = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  ListByEventId = EventPanelScanMaster__GetListByEventId(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5809/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0LL);
  v36 = (System_String_o *)Instance;
  if ( !ListByEventId )
    goto LABEL_22;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v27 >= max_length )
      {
        v35 = sub_B5D6C8(Instance);
        sub_B5D668(v35, 0LL);
      }
      v28 = ListByEventId->m_Items[v27];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    MasterData_WarQuestSelectionMaster,
                                    v28,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v28 )
          break;
        iconImageId = v28->fields.iconImageId;
        name = v28->fields.name;
        v31 = 1;
      }
      else
      {
        if ( !v28 )
          break;
        name = v36;
        v31 = 0;
        iconImageId = 0;
      }
      id = v28->fields.id;
      itemList = this->fields.itemList;
      v34 = (SubmarineSelectScannerListViewItem_o *)sub_B5D694(SubmarineSelectScannerListViewItem_TypeInfo);
      SubmarineSelectScannerListViewItem___ctor(v34, v27, eventId, id, iconImageId, name, v31, 0LL);
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = ListByEventId->max_length;
      if ( (int)++v27 >= max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_B5D69C(Instance, v23);
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
  __int64 v3; // x3
  SubmarineSelectScannerListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct ListViewItem_o *linkItem; // x0
  __int64 v10; // x9
  System_Action_T1__T2__o *OnClickItemAction_k__BackingField; // x8

  v5 = this;
  if ( (byte_42EA37C & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_int__bool___, (_DWORD)obj, (_DWORD)method, v3);
    this = (SubmarineSelectScannerListViewManager_o *)sub_B5D5C4(
                                                        &SubmarineSelectScannerListViewItem_TypeInfo,
                                                        v6,
                                                        v7,
                                                        v8);
    byte_42EA37C = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B5D69C(this, obj);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  v10 = *(&SubmarineSelectScannerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v10 - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    this = (SubmarineSelectScannerListViewManager_o *)sub_B5D990(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v5->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortValue0,
      (const MethodInfo_2CECDFC *)Method_ActionExtensions_Call_int__bool___);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickItemAction_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
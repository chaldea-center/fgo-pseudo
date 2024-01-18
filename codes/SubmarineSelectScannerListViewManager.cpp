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
  __int64 v10; // x1
  EventPanelScanMaster_o *MasterData_WarQuestSelectionMaster; // x21
  EventPanelScanEntity_array *ListByEventId; // x22
  int max_length; // w8
  __int64 v14; // x24
  EventPanelScanEntity_o *v15; // x25
  int32_t iconImageId; // w20
  struct System_String_o *name; // x26
  char v18; // w23
  int32_t id; // w19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  __int64 v21; // x25
  __int64 v22; // x0
  DataManager_o *v23; // [xsp+8h] [xbp-68h]

  if ( (byte_4185846 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&SubmarineSelectScannerListViewItem_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_5732/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, v8);
    byte_4185846 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (EventPanelScanMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  ListByEventId = EventPanelScanMaster__GetListByEventId(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0LL);
  v23 = Instance;
  if ( !ListByEventId )
    goto LABEL_22;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
      {
        v22 = sub_B2C460(Instance);
        sub_B2C400(v22, 0LL);
      }
      v15 = ListByEventId->m_Items[v14];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    MasterData_WarQuestSelectionMaster,
                                    v15,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v15 )
          break;
        iconImageId = v15->fields.iconImageId;
        name = v15->fields.name;
        v18 = 1;
      }
      else
      {
        if ( !v15 )
          break;
        name = (struct System_String_o *)v23;
        v18 = 0;
        iconImageId = 0;
      }
      id = v15->fields.id;
      itemList = this->fields.itemList;
      v21 = sub_B2C42C(SubmarineSelectScannerListViewItem_TypeInfo);
      ListViewItem___ctor_24128628((ListViewItem_o *)v21, v14, 0LL);
      *(_DWORD *)(v21 + 120) = iconImageId;
      *(_DWORD *)(v21 + 112) = eventId;
      *(_DWORD *)(v21 + 116) = id;
      *(_QWORD *)(v21 + 128) = name;
      sub_B2C2F8(v21 + 128, name);
      *(_BYTE *)(v21 + 144) = v18;
      if ( !itemList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = ListByEventId->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_B2C434(Instance, v10);
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
  if ( (byte_4185847 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_int__bool___, obj);
    this = (SubmarineSelectScannerListViewManager_o *)sub_B2C35C(&SubmarineSelectScannerListViewItem_TypeInfo, v5);
    byte_4185847 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B2C434(this, obj);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  v7 = *(&SubmarineSelectScannerListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[v7 - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    this = (SubmarineSelectScannerListViewManager_o *)sub_B2C728(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v4->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortValue0,
      (const MethodInfo_2D65BB4 *)Method_ActionExtensions_Call_int__bool___);
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
  this->fields._OnClickItemAction_k__BackingField = value;
  sub_B2C2F8(&this->fields._OnClickItemAction_k__BackingField, value);
}
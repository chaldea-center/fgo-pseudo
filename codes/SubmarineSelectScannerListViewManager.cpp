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
  int max_length; // w8
  __int64 v15; // x24
  EventPanelScanEntity_o *v16; // x26
  char v17; // w27
  int32_t iconImageId; // w23
  int64_t name; // x28
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t id; // w20
  int64_t v22; // x26
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  DataManager_o *v39; // [xsp+0h] [xbp-70h]

  if ( (byte_4BFA2CD & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C2E12C(&SubmarineSelectScannerListViewItem_TypeInfo, v8);
    sub_1C2E12C(&StringLiteral_5843/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, v9);
    byte_4BFA2CD = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_25;
  ListByEventId = EventPanelScanMaster__GetListByEventId((EventPanelScanMaster_o *)MasterData_object, eventId, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5843/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0LL);
  v39 = Instance;
  if ( !ListByEventId )
    goto LABEL_25;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= max_length )
        sub_1C2E390(Instance, v11);
      v16 = ListByEventId->m_Items[v15];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    (EventPanelScanMaster_o *)MasterData_object,
                                    v16,
                                    0LL);
      v17 = (char)Instance;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v16 )
          break;
        iconImageId = v16->fields.iconImageId;
        name = (int64_t)v16->fields.name;
      }
      else
      {
        if ( !v16 )
          break;
        name = (int64_t)v39;
        iconImageId = 0;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      id = v16->fields.id;
      v22 = sub_1C2E378(SubmarineSelectScannerListViewItem_TypeInfo);
      ListViewItem___ctor_42081352((ListViewItem_o *)v22, v15, 0LL);
      *(_DWORD *)(v22 + 120) = iconImageId;
      *(_DWORD *)(v22 + 112) = eventId;
      *(_DWORD *)(v22 + 116) = id;
      *(_QWORD *)(v22 + 128) = name;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 128), name, v23, v24, v25, v26, v27, v28);
      *(_BYTE *)(v22 + 144) = v17 & 1;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v22,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v22;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v38 + 4), v22, v29, v30, v31, v32, v33, v34);
      }
      max_length = ListByEventId->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C2E388(Instance, v11);
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
  if ( (byte_4BFA2CE & 1) == 0 )
  {
    sub_1C2E12C(&Method_ActionExtensions_Call_int__bool___, obj);
    this = (SubmarineSelectScannerListViewManager_o *)sub_1C2E12C(&SubmarineSelectScannerListViewItem_TypeInfo, v5);
    byte_4BFA2CE = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1C2E388(this, obj);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  methodPtr_low = LOBYTE(SubmarineSelectScannerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    sub_1C2E648(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v4->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortValue0,
      (const MethodInfo_2F241DC *)Method_ActionExtensions_Call_int__bool___);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnClickItemAction_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._OnClickItemAction_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
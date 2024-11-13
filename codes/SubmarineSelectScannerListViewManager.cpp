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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v19; // x1
  EventPanelScanEntity_array *ListByEventId; // x22
  int max_length; // w8
  __int64 v22; // x24
  EventPanelScanEntity_o *v23; // x26
  __int64 v24; // x2
  __int64 v25; // x3
  char v26; // w27
  int32_t iconImageId; // w23
  int64_t name; // x28
  System_Collections_Generic_List_object__o *itemList; // x25
  int32_t id; // w20
  int64_t v31; // x26
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  DataManager_o *v48; // [xsp+0h] [xbp-70h]

  if ( (byte_4B12E13 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&SubmarineSelectScannerListViewItem_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_5809/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, v14, v15);
    byte_4B12E13 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_object )
    goto LABEL_25;
  ListByEventId = EventPanelScanMaster__GetListByEventId((EventPanelScanMaster_o *)MasterData_object, eventId, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5809/*"EVENT_SUBMARINE_UNKNOWN_VALUE"*/, 0LL);
  v48 = Instance;
  if ( !ListByEventId )
    goto LABEL_25;
  max_length = ListByEventId->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v22 >= max_length )
        sub_1BCAA44(Instance, v17);
      v23 = ListByEventId->m_Items[v22];
      Instance = (DataManager_o *)EventPanelScanMaster__IsSatisfyReleaseCondition(
                                    (EventPanelScanMaster_o *)MasterData_object,
                                    v23,
                                    0LL);
      v26 = (char)Instance;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v23 )
          break;
        iconImageId = v23->fields.iconImageId;
        name = (int64_t)v23->fields.name;
      }
      else
      {
        if ( !v23 )
          break;
        name = (int64_t)v48;
        iconImageId = 0;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      id = v23->fields.id;
      v31 = sub_1BCAA2C(SubmarineSelectScannerListViewItem_TypeInfo, v17, v24, v25);
      ListViewItem___ctor_41447164((ListViewItem_o *)v31, v22, 0LL);
      *(_DWORD *)(v31 + 120) = iconImageId;
      *(_DWORD *)(v31 + 112) = eventId;
      *(_DWORD *)(v31 + 116) = id;
      *(_QWORD *)(v31 + 128) = name;
      sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 128), name, v32, v33, v34, v35, v36, v37);
      *(_BYTE *)(v31 + 144) = v26 & 1;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v45 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v31,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v31;
        sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 4), v31, v38, v39, v40, v41, v42, v43);
      }
      max_length = ListByEventId->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_23;
    }
LABEL_25:
    sub_1BCAA3C(Instance, v17);
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
  __int64 v6; // x2
  struct ListViewItem_o *linkItem; // x0
  __int64 methodPtr_low; // x9
  System_Action_T1__T2__o *OnClickItemAction_k__BackingField; // x8

  v4 = this;
  if ( (byte_4B12E14 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int__bool___, obj, method);
    this = (SubmarineSelectScannerListViewManager_o *)sub_1BCA7E0(&SubmarineSelectScannerListViewItem_TypeInfo, v5, v6);
    byte_4B12E14 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_1BCAA3C(this, obj);
  linkItem = obj->fields.linkItem;
  if ( !linkItem )
    return;
  methodPtr_low = LOBYTE(SubmarineSelectScannerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SubmarineSelectScannerListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
  {
    sub_1BCACFC(linkItem);
    goto LABEL_11;
  }
  OnClickItemAction_k__BackingField = (System_Action_T1__T2__o *)v4->fields._OnClickItemAction_k__BackingField;
  if ( OnClickItemAction_k__BackingField )
    ActionExtensions__Call_int__bool_(
      OnClickItemAction_k__BackingField,
      HIDWORD(linkItem[1].klass),
      linkItem[1].fields.sortValue0,
      (const MethodInfo_2E657C4 *)Method_ActionExtensions_Call_int__bool___);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OnClickItemAction_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
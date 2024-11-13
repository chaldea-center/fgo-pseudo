void __fastcall EventHeelPortraitListViewManager___ctor(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventHeelPortraitListViewManager__CreateList(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  int64_t Master_object; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *DispEntity; // x20
  int size; // w27
  char v25; // w21
  int32_t i; // w22
  System_Collections_Generic_IEnumerable_TSource__o *heelPortraitIds; // x23
  bool v28; // w29
  System_Collections_Generic_List_object__o *itemList; // x23
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  System_Collections_Generic_List_int__o *displayedId; // x24
  int64_t v32; // x25
  bool v33; // w26
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  int64_t v37; // x24
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1A2C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_HeelPortraitMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v8, v9);
    sub_1BCA7E0(&EventHeelPortraitListViewItem_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__, v18, v19);
    byte_4B1A2C6 = 1;
  }
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  DispEntity = (System_Collections_Generic_List_object__o *)HeelPortraitMaster__GetDispEntity(
                                                              (HeelPortraitMaster_o *)Master_object,
                                                              this->fields.eventId,
                                                              0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  Master_object = UserHeelPortraitMaster__TryGetEntity(
                    (UserHeelPortraitMaster_o *)Master_object,
                    &entity,
                    this->fields.eventId,
                    0LL);
  if ( DispEntity )
  {
    size = DispEntity->fields._size;
    if ( size >= 1 )
    {
      v25 = Master_object;
      for ( i = 0; i != size; ++i )
      {
        if ( (v25 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_26;
          heelPortraitIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds;
          Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                     DispEntity,
                                     i,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_26;
          v28 = System_Linq_Enumerable__Contains_int_(
                  heelPortraitIds,
                  *(_DWORD *)(Master_object + 16),
                  (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        }
        else
        {
          v28 = 0;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   DispEntity,
                                   i,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_26;
        displayedId = saveData->fields.displayedId;
        v32 = Master_object;
        Master_object = (int64_t)System_Collections_Generic_List_object___get_Item(
                                   DispEntity,
                                   i,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_26;
        if ( !displayedId )
          goto LABEL_26;
        v33 = System_Collections_Generic_List_int___Contains(
                displayedId,
                *(_DWORD *)(Master_object + 16),
                (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        v37 = sub_1BCAA2C(EventHeelPortraitListViewItem_TypeInfo, v34, v35, v36);
        ListViewItem___ctor_41447164((ListViewItem_o *)v37, i, 0LL);
        *(_QWORD *)(v37 + 112) = v32;
        sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 112), v32, v38, v39, v40, v41, v42, v43);
        *(_BYTE *)(v37 + 120) = v28;
        *(_BYTE *)(v37 + 121) = v33;
        if ( !itemList )
          goto LABEL_26;
        items = itemList->fields._items;
        v51 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_26;
        v52 = itemList->fields._size;
        if ( (unsigned int)v52 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v37,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &items->obj.klass + v52;
          itemList->fields._size = v52 + 1;
          v53[4] = (Il2CppClass *)v37;
          sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), v37, v44, v45, v46, v47, v48, v49);
        }
      }
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Master_object = (int64_t)this->fields.scrollView;
  if ( !Master_object )
LABEL_26:
    sub_1BCAA3C(Master_object, v22);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0LL);
}


void __fastcall EventHeelPortraitListViewManager__DestroyList(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventHeelPortraitAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *heelPortraitDetailDialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o **p_heelPortraitDetailDialog; // x19
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B1A2CA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A2CA = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventHeelPortraitAssetManager__Release(assetManager, this->fields.eventId, v2);
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(heelPortraitDetailDialog, 0LL, 0LL) )
  {
    p_heelPortraitDetailDialog = (UnityEngine_Component_o **)&this->fields.heelPortraitDetailDialog;
    if ( !*p_heelPortraitDetailDialog )
      sub_1BCAA3C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_heelPortraitDetailDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_heelPortraitDetailDialog, 0LL, v10, v11, v12, v13, v14, v15);
  }
}


EventHeelPortraitListViewManager_HeelPortraitSaveData_o *__fastcall EventHeelPortraitListViewManager__GetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *HeelPortraitDetailDialogState; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v10; // x19
  const MethodInfo *v11; // x1

  if ( (byte_4B1A2C9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo, method, v2);
    sub_1BCA7E0(
      &Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___,
      v4,
      v5);
    byte_4B1A2C9 = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0LL);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0LL) )
    return (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        HeelPortraitDetailDialogState,
                                                                        (const MethodInfo_2F7A630 *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v10 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_1BCAA2C(
                                                                     EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo,
                                                                     v7,
                                                                     v8,
                                                                     v9);
  EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(v10, v11);
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHeelPortraitListViewManager__Init(
        EventHeelPortraitListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *SaveData; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  EventHeelPortraitAssetManager_o *assetManager; // x21
  PartyOrganizationUtility_o *p_assetManager; // x19
  EventHeelPortraitAssetManager_o *v34; // x21
  const MethodInfo *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int32_t v42; // w19
  System_Action_o *v43; // x22
  const MethodInfo *v44; // x3

  if ( (byte_4B1A2C5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&EventHeelPortraitAssetManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__, v8, v9);
    sub_1BCA7E0(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo, v10, v11);
    byte_4B1A2C5 = 1;
  }
  v12 = sub_1BCAA2C(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_8;
  *(_QWORD *)(v12 + 24) = this;
  *(_DWORD *)(v12 + 16) = eventId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v15, v16, v17, v18, v19, v20);
  this->fields.eventId = *(_DWORD *)(v12 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v21);
  this->fields.saveData = SaveData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.saveData, (int64_t)SaveData, v23, v24, v25, v26, v27, v28);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
    v34 = (EventHeelPortraitAssetManager_o *)sub_1BCAA2C(EventHeelPortraitAssetManager_TypeInfo, v29, v30, v31);
    EventHeelPortraitAssetManager___ctor(v34, v35);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v34;
    sub_1BCA784(p_assetManager, (int64_t)v34, v36, v37, v38, v39, v40, v41);
    assetManager = (EventHeelPortraitAssetManager_o *)p_assetManager->klass;
  }
  v42 = *(_DWORD *)(v12 + 16);
  v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v12,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_8:
    sub_1BCAA3C(v13, v14);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v42, v43, v44);
}


void __fastcall EventHeelPortraitListViewManager__InitDialog(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *heelPortraitDetailDialog; // x21
  PartyOrganizationUtility_o *p_heelPortraitDetailDialog; // x19
  __int64 klass; // x0
  const MethodInfo *v11; // x1
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  Il2CppObject *heelPortraitDetailDialog_k__BackingField; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  Il2CppObject *Component_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x2
  UnityEngine_Transform_o *v23; // x20

  if ( (byte_4B1A2C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1A2C7 = 1;
  }
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_heelPortraitDetailDialog = (PartyOrganizationUtility_o *)&this->fields.heelPortraitDetailDialog;
  klass = UnityEngine_Object__op_Equality(heelPortraitDetailDialog, 0LL, 0LL);
  if ( (klass & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_17;
    heelPortraitDetailDialog_k__BackingField = (Il2CppObject *)assetManager->fields._heelPortraitDetailDialog_k__BackingField;
    uiRoot = this->fields.uiRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    klass = (__int64)UnityEngine_Object__Instantiate_object__49903816(
                       heelPortraitDetailDialog_k__BackingField,
                       uiRoot,
                       (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    if ( !klass )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)klass,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    p_heelPortraitDetailDialog->klass = (PartyOrganizationUtility_c *)Component_object;
    sub_1BCA784(p_heelPortraitDetailDialog, (int64_t)Component_object, v16, v17, v18, v19, v20, v21);
    klass = (__int64)p_heelPortraitDetailDialog->klass;
    if ( !p_heelPortraitDetailDialog->klass )
      goto LABEL_17;
    klass = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
    v23 = (UnityEngine_Transform_o *)klass;
    if ( !byte_4B109C6 )
    {
      klass = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v11, v22);
      byte_4B109C6 = 1;
    }
    if ( !v23 )
LABEL_17:
      sub_1BCAA3C(klass, v11);
    UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  klass = (__int64)p_heelPortraitDetailDialog->klass;
  if ( !p_heelPortraitDetailDialog->klass )
    goto LABEL_17;
  HeelPortraitDetailDialogComponent__Init((HeelPortraitDetailDialogComponent_o *)klass, v11);
}


void __fastcall EventHeelPortraitListViewManager__OnClickListView(
        EventHeelPortraitListViewManager_o *this,
        EventHeelPortraitListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  EventHeelPortraitListViewItem_o *Item; // x0
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  EventHeelPortraitListViewItem_o **v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  EventHeelPortraitListViewItem_o *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x8
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  HeelPortraitEntity_o *v41; // x21
  System_Action_o *v42; // x22
  const MethodInfo *v43; // x3

  if ( (byte_4B1A2C8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_EventHeelPortraitListViewManager_OnClickListView__, v6, v7);
    sub_1BCA7E0(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__, v8, v9);
    sub_1BCA7E0(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo, v10, v11);
    byte_4B1A2C8 = 1;
  }
  v12 = sub_1BCAA2C(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo, obj, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = obj;
  v21 = (EventHeelPortraitListViewItem_o **)(v12 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)obj, v22, v23, v24, v25, v26, v27);
  Item = *(EventHeelPortraitListViewItem_o **)(v12 + 24);
  if ( !Item )
    goto LABEL_14;
  Item = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v14);
  if ( !Item )
    goto LABEL_14;
  if ( Item->fields._isHavePortrait_k__BackingField )
  {
    v28 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BCA7F8(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
    Item = *v21;
    if ( *v21 )
    {
      v30 = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v14);
      *(_QWORD *)(v12 + 32) = v30;
      sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)v30, v31, v32, v33, v34, v35, v36);
      v39 = *(_QWORD *)(v12 + 32);
      if ( v39 )
      {
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v41 = *(HeelPortraitEntity_o **)(v39 + 112);
        v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v37, v38);
        System_Action___ctor(
          v42,
          (Il2CppObject *)v12,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0LL);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, v41, v42, v43);
          return;
        }
      }
    }
LABEL_14:
    sub_1BCAA3C(Item, v14);
  }
}


void __fastcall EventHeelPortraitListViewManager__SerializeFieldNotNullCheck(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventHeelPortraitListViewManager__SetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x1

  v3 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)this->fields.saveData, 0LL);
  EventRewardSaveData__SetHeelPortraitDetailDialogState(this->fields.eventId, v3, 0LL);
}


void __fastcall EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(
        EventHeelPortraitListViewManager_HeelPortraitSaveData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_int__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1A2CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v5, v6);
    byte_4B1A2CB = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.displayedId = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventHeelPortraitListViewManager___c__DisplayClass11_0___ctor(
        EventHeelPortraitListViewManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventHeelPortraitListViewManager___c__DisplayClass11_0___OnClickListView_b__0(
        EventHeelPortraitListViewManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventHeelPortraitListViewManager___c__DisplayClass11_0_o *v3; // x19
  struct EventHeelPortraitListViewItem_o *portraitItem; // x8
  struct EventHeelPortraitListViewManager_o *_4__this; // x20
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x9
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x8
  struct EventHeelPortraitListViewManager_o *v8; // x8
  _QWORD *v9; // x9
  __int64 obj_low; // x10
  System_String_o *v11; // x0

  v3 = this;
  if ( (byte_4B1A2CC & 1) == 0 )
  {
    this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)sub_1BCA7E0(
                                                                         &Method_System_Collections_Generic_List_int__Add__,
                                                                         method,
                                                                         v2);
    byte_4B1A2CC = 1;
  }
  portraitItem = v3->fields.portraitItem;
  if ( !portraitItem )
    goto LABEL_15;
  if ( portraitItem->fields._isDispDetailDialog_k__BackingField )
    return;
  portraitItem->fields._isDispDetailDialog_k__BackingField = 1;
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  saveData = _4__this->fields.saveData;
  if ( !saveData )
    goto LABEL_15;
  Entity_k__BackingField = portraitItem->fields._Entity_k__BackingField;
  if ( !Entity_k__BackingField )
    goto LABEL_15;
  this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)saveData->fields.displayedId;
  if ( !this )
    goto LABEL_15;
  method = (const MethodInfo *)(unsigned int)Entity_k__BackingField->fields.id;
  v8 = this->fields.__4__this;
  v9 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.obj);
  if ( !v8 )
    goto LABEL_15;
  obj_low = SLODWORD(this->fields.obj);
  if ( (unsigned int)obj_low >= LODWORD(v8->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      (int32_t)method,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    _4__this = v3->fields.__4__this;
    if ( !_4__this )
      goto LABEL_15;
  }
  else
  {
    LODWORD(this->fields.obj) = obj_low + 1;
    *((_DWORD *)&v8->fields.dropObjectList + obj_low) = (_DWORD)method;
  }
  v11 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)_4__this->fields.saveData, 0LL);
  EventRewardSaveData__SetHeelPortraitDetailDialogState(_4__this->fields.eventId, v11, 0LL);
  this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)v3->fields.obj;
  if ( !this )
LABEL_15:
    sub_1BCAA3C(this, method);
  EventHeelPortraitListViewObject__ClearNewImgSprite((EventHeelPortraitListViewObject_o *)this, method);
}


void __fastcall EventHeelPortraitListViewManager___c__DisplayClass7_0___ctor(
        EventHeelPortraitListViewManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventHeelPortraitListViewManager___c__DisplayClass7_0___Init_b__0(
        EventHeelPortraitListViewManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventHeelPortraitListViewManager___c__DisplayClass7_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  int32_t eventId; // w21
  UISprite_o *bg; // x20

  v3 = this;
  if ( (byte_4B1A2CD & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_1BCA7E0(&StringLiteral_22812/*"portrait_back"*/, v4, v5);
    byte_4B1A2CD = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  eventId = v3->fields.eventId;
  bg = _4__this->fields.bg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetEventUI_38574572(eventId, bg, (System_String_o *)StringLiteral_22812/*"portrait_back"*/, 0LL);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v3->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, method),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v3->fields.__4__this) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(this, method);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, method);
}
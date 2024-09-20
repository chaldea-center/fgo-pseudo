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
  HeelPortraitMaster_o *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *DispEntity; // x20
  int size; // w27
  char v7; // w21
  int32_t i; // w22
  System_Collections_Generic_IEnumerable_TSource__o *heelPortraitIds; // x23
  bool v10; // w29
  System_Collections_Generic_List_object__o *itemList; // x23
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  System_Collections_Generic_List_int__o *displayedId; // x24
  HeelPortraitMaster_o *v14; // x25
  bool v15; // w26
  __int64 v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5F0D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserHeelPortraitMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&EventHeelPortraitListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
    byte_4A5F0D3 = 1;
  }
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (HeelPortraitMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  DispEntity = (System_Collections_Generic_List_object__o *)HeelPortraitMaster__GetDispEntity(
                                                              Master_object,
                                                              this->fields.eventId,
                                                              0LL);
  Master_object = (HeelPortraitMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  Master_object = (HeelPortraitMaster_o *)UserHeelPortraitMaster__TryGetEntity(
                                            (UserHeelPortraitMaster_o *)Master_object,
                                            &entity,
                                            this->fields.eventId,
                                            0LL);
  if ( DispEntity )
  {
    size = DispEntity->fields._size;
    if ( size >= 1 )
    {
      v7 = (char)Master_object;
      for ( i = 0; i != size; ++i )
      {
        if ( (v7 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_26;
          heelPortraitIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds;
          Master_object = (HeelPortraitMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                    DispEntity,
                                                    i,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_26;
          v10 = System_Linq_Enumerable__Contains_int_(
                  heelPortraitIds,
                  Master_object->fields._MasterKind_k__BackingField,
                  (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
        }
        else
        {
          v10 = 0;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Master_object = (HeelPortraitMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  DispEntity,
                                                  i,
                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_26;
        displayedId = saveData->fields.displayedId;
        v14 = Master_object;
        Master_object = (HeelPortraitMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  DispEntity,
                                                  i,
                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_26;
        if ( !displayedId )
          goto LABEL_26;
        v15 = System_Collections_Generic_List_int___Contains(
                displayedId,
                Master_object->fields._MasterKind_k__BackingField,
                (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        v16 = sub_1B887FC(EventHeelPortraitListViewItem_TypeInfo);
        ListViewItem___ctor_40706472((ListViewItem_o *)v16, i, 0LL);
        *(_QWORD *)(v16 + 112) = v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 112), (int32_t)v14, v17, v18);
        *(_BYTE *)(v16 + 120) = v10;
        *(_BYTE *)(v16 + 121) = v15;
        if ( !itemList )
          goto LABEL_26;
        items = itemList->fields._items;
        v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_26;
        v23 = itemList->fields._size;
        if ( (unsigned int)v23 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v16,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + v23;
          itemList->fields._size = v23 + 1;
          v24[4] = (Il2CppClass *)v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), v16, v19, v20);
        }
      }
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Master_object = (HeelPortraitMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_26:
    sub_1B8880C(Master_object, v4);
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
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5F0D7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0D7 = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventHeelPortraitAssetManager__Release(assetManager, this->fields.eventId, v2);
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(heelPortraitDetailDialog, 0LL, 0LL) )
  {
    p_heelPortraitDetailDialog = (UnityEngine_Component_o **)&this->fields.heelPortraitDetailDialog;
    if ( !*p_heelPortraitDetailDialog )
      sub_1B8880C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_heelPortraitDetailDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_heelPortraitDetailDialog, 0, v9, v10);
  }
}


EventHeelPortraitListViewManager_HeelPortraitSaveData_o *__fastcall EventHeelPortraitListViewManager__GetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *HeelPortraitDetailDialogState; // x19
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4A5F0D6 & 1) == 0 )
  {
    sub_1B885B0(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
    byte_4A5F0D6 = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0LL);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0LL) )
    return (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        HeelPortraitDetailDialogState,
                                                                        (const MethodInfo_2EE6DEC *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v4 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_1B887FC(EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
  EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(v4, v5);
  return v4;
}


void __fastcall EventHeelPortraitListViewManager__Init(
        EventHeelPortraitListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *SaveData; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  EventHeelPortraitAssetManager_o *assetManager; // x21
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  EventHeelPortraitAssetManager_o *v16; // x21
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w19
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3

  if ( (byte_4A5F0D2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&EventHeelPortraitAssetManager_TypeInfo);
    sub_1B885B0(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__);
    sub_1B885B0(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
    byte_4A5F0D2 = 1;
  }
  v5 = sub_1B887FC(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_DWORD *)(v5 + 16) = eventId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  this->fields.eventId = *(_DWORD *)(v5 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v10);
  this->fields.saveData = SaveData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.saveData, (int32_t)SaveData, v12, v13);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
    v16 = (EventHeelPortraitAssetManager_o *)sub_1B887FC(EventHeelPortraitAssetManager_TypeInfo);
    EventHeelPortraitAssetManager___ctor(v16, v17);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v16;
    sub_1B88554(p_assetManager, (int32_t)v16, v18, v19);
    assetManager = (EventHeelPortraitAssetManager_o *)p_assetManager->klass;
  }
  v20 = *(_DWORD *)(v5 + 16);
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_8:
    sub_1B8880C(v6, v7);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v20, v21, v22);
}


void __fastcall EventHeelPortraitListViewManager__InitDialog(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *heelPortraitDetailDialog; // x21
  ServantStatusBattleListViewItem_o *p_heelPortraitDetailDialog; // x19
  UnityEngine_GameObject_o *klass; // x0
  const MethodInfo *v6; // x1
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  Il2CppObject *heelPortraitDetailDialog_k__BackingField; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Transform_o *v13; // x20

  if ( (byte_4A5F0D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0D4 = 1;
  }
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_heelPortraitDetailDialog = (ServantStatusBattleListViewItem_o *)&this->fields.heelPortraitDetailDialog;
  klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(heelPortraitDetailDialog, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_17;
    heelPortraitDetailDialog_k__BackingField = (Il2CppObject *)assetManager->fields._heelPortraitDetailDialog_k__BackingField;
    uiRoot = this->fields.uiRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    klass = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49297800(
                                          heelPortraitDetailDialog_k__BackingField,
                                          uiRoot,
                                          (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    if ( !klass )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         klass,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    p_heelPortraitDetailDialog->klass = (ServantStatusBattleListViewItem_c *)Component_object;
    sub_1B88554(p_heelPortraitDetailDialog, (int32_t)Component_object, v11, v12);
    klass = (UnityEngine_GameObject_o *)p_heelPortraitDetailDialog->klass;
    if ( !p_heelPortraitDetailDialog->klass )
      goto LABEL_17;
    klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
    v13 = (UnityEngine_Transform_o *)klass;
    if ( !byte_4A55CE6 )
    {
      klass = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v13 )
LABEL_17:
      sub_1B8880C(klass, v6);
    UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  klass = (UnityEngine_GameObject_o *)p_heelPortraitDetailDialog->klass;
  if ( !p_heelPortraitDetailDialog->klass )
    goto LABEL_17;
  HeelPortraitDetailDialogComponent__Init((HeelPortraitDetailDialogComponent_o *)klass, v6);
}


void __fastcall EventHeelPortraitListViewManager__OnClickListView(
        EventHeelPortraitListViewManager_o *this,
        EventHeelPortraitListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  EventHeelPortraitListViewItem_o *Item; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  EventHeelPortraitListViewItem_o **v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  EventHeelPortraitListViewItem_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  HeelPortraitEntity_o *v20; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3

  if ( (byte_4A5F0D5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventHeelPortraitListViewManager_OnClickListView__);
    sub_1B885B0(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__);
    sub_1B885B0(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
    byte_4A5F0D5 = 1;
  }
  v5 = sub_1B887FC(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = obj;
  v10 = (EventHeelPortraitListViewItem_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)obj, v11, v12);
  Item = *(EventHeelPortraitListViewItem_o **)(v5 + 24);
  if ( !Item )
    goto LABEL_14;
  Item = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v7);
  if ( !Item )
    goto LABEL_14;
  if ( Item->fields._isHavePortrait_k__BackingField )
  {
    v13 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1B885C8(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v14 = (System_Reflection_MethodBase_o *)sub_1B88594(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    Item = *v10;
    if ( *v10 )
    {
      v15 = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v7);
      *(_QWORD *)(v5 + 32) = v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v15, v16, v17);
      v18 = *(_QWORD *)(v5 + 32);
      if ( v18 )
      {
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v20 = *(HeelPortraitEntity_o **)(v18 + 112);
        v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0LL);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, v20, v21, v22);
          return;
        }
      }
    }
LABEL_14:
    sub_1B8880C(Item, v7);
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
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5F0D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5F0D8 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.displayedId = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
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
  EventHeelPortraitListViewManager___c__DisplayClass11_0_o *v2; // x19
  struct EventHeelPortraitListViewItem_o *portraitItem; // x8
  struct EventHeelPortraitListViewManager_o *_4__this; // x20
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x9
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x8
  struct EventHeelPortraitListViewManager_o *v7; // x8
  _QWORD *v8; // x9
  __int64 obj_low; // x10
  System_String_o *v10; // x0

  v2 = this;
  if ( (byte_4A5F0D9 & 1) == 0 )
  {
    this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    byte_4A5F0D9 = 1;
  }
  portraitItem = v2->fields.portraitItem;
  if ( !portraitItem )
    goto LABEL_15;
  if ( portraitItem->fields._isDispDetailDialog_k__BackingField )
    return;
  portraitItem->fields._isDispDetailDialog_k__BackingField = 1;
  _4__this = v2->fields.__4__this;
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
  v7 = this->fields.__4__this;
  v8 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.obj);
  if ( !v7 )
    goto LABEL_15;
  obj_low = SLODWORD(this->fields.obj);
  if ( (unsigned int)obj_low >= LODWORD(v7->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      (int32_t)method,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_15;
  }
  else
  {
    LODWORD(this->fields.obj) = obj_low + 1;
    *((_DWORD *)&v7->fields.dropObjectList + obj_low) = (_DWORD)method;
  }
  v10 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)_4__this->fields.saveData, 0LL);
  EventRewardSaveData__SetHeelPortraitDetailDialogState(_4__this->fields.eventId, v10, 0LL);
  this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)v2->fields.obj;
  if ( !this )
LABEL_15:
    sub_1B8880C(this, method);
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
  EventHeelPortraitListViewManager___c__DisplayClass7_0_o *v2; // x19
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  int32_t eventId; // w21
  UISprite_o *bg; // x20

  v2 = this;
  if ( (byte_4A5F0DA & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_1B885B0(&StringLiteral_22570/*"portrait_back"*/);
    byte_4A5F0DA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  eventId = v2->fields.eventId;
  bg = _4__this->fields.bg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37859364(eventId, bg, (System_String_o *)StringLiteral_22570/*"portrait_back"*/, 0LL);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, method),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(this, method);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, method);
}
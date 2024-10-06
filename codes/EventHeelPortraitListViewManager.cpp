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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  HeelPortraitMaster_o *Master_object; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *DispEntity; // x20
  int size; // w27
  char v15; // w21
  int32_t i; // w22
  System_Collections_Generic_IEnumerable_TSource__o *heelPortraitIds; // x23
  bool v18; // w29
  System_Collections_Generic_List_object__o *itemList; // x23
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  System_Collections_Generic_List_int__o *displayedId; // x24
  HeelPortraitMaster_o *v22; // x25
  bool v23; // w26
  __int64 v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A73DEC & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_HeelPortraitMaster___, method);
    sub_1B90010(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v3);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1B90010(&EventHeelPortraitListViewItem_TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__, v10);
    byte_4A73DEC = 1;
  }
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (HeelPortraitMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  DispEntity = (System_Collections_Generic_List_object__o *)HeelPortraitMaster__GetDispEntity(
                                                              Master_object,
                                                              this->fields.eventId,
                                                              0LL);
  Master_object = (HeelPortraitMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
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
      v15 = (char)Master_object;
      for ( i = 0; i != size; ++i )
      {
        if ( (v15 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_26;
          heelPortraitIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds;
          Master_object = (HeelPortraitMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                    DispEntity,
                                                    i,
                                                    (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_26;
          v18 = System_Linq_Enumerable__Contains_int_(
                  heelPortraitIds,
                  Master_object->fields._MasterKind_k__BackingField,
                  (const MethodInfo_2EA8328 *)Method_System_Linq_Enumerable_Contains_int___);
        }
        else
        {
          v18 = 0;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Master_object = (HeelPortraitMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  DispEntity,
                                                  i,
                                                  (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_26;
        displayedId = saveData->fields.displayedId;
        v22 = Master_object;
        Master_object = (HeelPortraitMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  DispEntity,
                                                  i,
                                                  (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_26;
        if ( !displayedId )
          goto LABEL_26;
        v23 = System_Collections_Generic_List_int___Contains(
                displayedId,
                Master_object->fields._MasterKind_k__BackingField,
                (const MethodInfo_34F3D14 *)Method_System_Collections_Generic_List_int__Contains__);
        v24 = sub_1B9025C(EventHeelPortraitListViewItem_TypeInfo);
        ListViewItem___ctor_40760684((ListViewItem_o *)v24, i, 0LL);
        *(_QWORD *)(v24 + 112) = v22;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v24 + 112), (int32_t)v22, v25, v26);
        *(_BYTE *)(v24 + 120) = v18;
        *(_BYTE *)(v24 + 121) = v23;
        if ( !itemList )
          goto LABEL_26;
        items = itemList->fields._items;
        v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_26;
        v31 = itemList->fields._size;
        if ( (unsigned int)v31 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v24,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + v31;
          itemList->fields._size = v31 + 1;
          v32[4] = (Il2CppClass *)v24;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v32 + 4), v24, v27, v28);
        }
      }
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Master_object = (HeelPortraitMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_26:
    sub_1B9026C(Master_object, v12);
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

  if ( (byte_4A73DF0 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A73DF0 = 1;
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
      sub_1B9026C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
    *p_heelPortraitDetailDialog = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_heelPortraitDetailDialog, 0, v9, v10);
  }
}


EventHeelPortraitListViewManager_HeelPortraitSaveData_o *__fastcall EventHeelPortraitListViewManager__GetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *HeelPortraitDetailDialogState; // x19
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_4A73DEF & 1) == 0 )
  {
    sub_1B90010(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo, method);
    sub_1B90010(&Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___, v3);
    byte_4A73DEF = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0LL);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0LL) )
    return (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        HeelPortraitDetailDialogState,
                                                                        (const MethodInfo_2EF576C *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v5 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_1B9025C(EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
  EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(v5, v6);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHeelPortraitListViewManager__Init(
        EventHeelPortraitListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *SaveData; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  EventHeelPortraitAssetManager_o *assetManager; // x21
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  EventHeelPortraitAssetManager_o *v19; // x21
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w19
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3

  if ( (byte_4A73DEB & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1B90010(&EventHeelPortraitAssetManager_TypeInfo, v5);
    sub_1B90010(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__, v6);
    sub_1B90010(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo, v7);
    byte_4A73DEB = 1;
  }
  v8 = sub_1B9025C(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 24) = this;
  *(_DWORD *)(v8 + 16) = eventId;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12);
  this->fields.eventId = *(_DWORD *)(v8 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v13);
  this->fields.saveData = SaveData;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.saveData, (int32_t)SaveData, v15, v16);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
    v19 = (EventHeelPortraitAssetManager_o *)sub_1B9025C(EventHeelPortraitAssetManager_TypeInfo);
    EventHeelPortraitAssetManager___ctor(v19, v20);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v19;
    sub_1B8FFB4(p_assetManager, (int32_t)v19, v21, v22);
    assetManager = (EventHeelPortraitAssetManager_o *)p_assetManager->klass;
  }
  v23 = *(_DWORD *)(v8 + 16);
  v24 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_8:
    sub_1B9026C(v9, v10);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v23, v24, v25);
}


void __fastcall EventHeelPortraitListViewManager__InitDialog(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *heelPortraitDetailDialog; // x21
  ServantStatusBattleListViewItem_o *p_heelPortraitDetailDialog; // x19
  __int64 klass; // x0
  const MethodInfo *v8; // x1
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  Il2CppObject *heelPortraitDetailDialog_k__BackingField; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Transform_o *v15; // x20

  if ( (byte_4A73DED & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___, method);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject____76256160, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    byte_4A73DED = 1;
  }
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_heelPortraitDetailDialog = (ServantStatusBattleListViewItem_o *)&this->fields.heelPortraitDetailDialog;
  klass = UnityEngine_Object__op_Equality(heelPortraitDetailDialog, 0LL, 0LL);
  if ( (klass & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_17;
    heelPortraitDetailDialog_k__BackingField = (Il2CppObject *)assetManager->fields._heelPortraitDetailDialog_k__BackingField;
    uiRoot = this->fields.uiRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    klass = (__int64)UnityEngine_Object__Instantiate_object__49357576(
                       heelPortraitDetailDialog_k__BackingField,
                       uiRoot,
                       (const MethodInfo_2F12308 *)Method_UnityEngine_Object_Instantiate_GameObject____76256160);
    if ( !klass )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)klass,
                         (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    p_heelPortraitDetailDialog->klass = (ServantStatusBattleListViewItem_c *)Component_object;
    sub_1B8FFB4(p_heelPortraitDetailDialog, (int32_t)Component_object, v13, v14);
    klass = (__int64)p_heelPortraitDetailDialog->klass;
    if ( !p_heelPortraitDetailDialog->klass )
      goto LABEL_17;
    klass = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
    v15 = (UnityEngine_Transform_o *)klass;
    if ( !byte_4A6A9C6 )
    {
      klass = sub_1B90010(&UnityEngine_Vector3_TypeInfo, v8);
      byte_4A6A9C6 = 1;
    }
    if ( !v15 )
LABEL_17:
      sub_1B9026C(klass, v8);
    UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  klass = (__int64)p_heelPortraitDetailDialog->klass;
  if ( !p_heelPortraitDetailDialog->klass )
    goto LABEL_17;
  HeelPortraitDetailDialogComponent__Init((HeelPortraitDetailDialogComponent_o *)klass, v8);
}


void __fastcall EventHeelPortraitListViewManager__OnClickListView(
        EventHeelPortraitListViewManager_o *this,
        EventHeelPortraitListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  EventHeelPortraitListViewItem_o *Item; // x0
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  EventHeelPortraitListViewItem_o **v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  EventHeelPortraitListViewItem_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  HeelPortraitEntity_o *v23; // x21
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3

  if ( (byte_4A73DEE & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, obj);
    sub_1B90010(&Method_EventHeelPortraitListViewManager_OnClickListView__, v5);
    sub_1B90010(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__, v6);
    sub_1B90010(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo, v7);
    byte_4A73DEE = 1;
  }
  v8 = sub_1B9025C(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = obj;
  v13 = (EventHeelPortraitListViewItem_o **)(v8 + 24);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)obj, v14, v15);
  Item = *(EventHeelPortraitListViewItem_o **)(v8 + 24);
  if ( !Item )
    goto LABEL_14;
  Item = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v10);
  if ( !Item )
    goto LABEL_14;
  if ( Item->fields._isHavePortrait_k__BackingField )
  {
    v16 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1B90028(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
    Item = *v13;
    if ( *v13 )
    {
      v18 = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v10);
      *(_QWORD *)(v8 + 32) = v18;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)v18, v19, v20);
      v21 = *(_QWORD *)(v8 + 32);
      if ( v21 )
      {
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v23 = *(HeelPortraitEntity_o **)(v21 + 112);
        v24 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
        System_Action___ctor(
          v24,
          (Il2CppObject *)v8,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0LL);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, v23, v24, v25);
          return;
        }
      }
    }
LABEL_14:
    sub_1B9026C(Item, v10);
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
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A73DF1 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4A73DF1 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.displayedId = v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
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
  if ( (byte_4A73DF2 & 1) == 0 )
  {
    this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)sub_1B90010(
                                                                         &Method_System_Collections_Generic_List_int__Add__,
                                                                         method);
    byte_4A73DF2 = 1;
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
      *(const MethodInfo_34F399C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
    sub_1B9026C(this, method);
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
  __int64 v3; // x1
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  int32_t eventId; // w21
  UISprite_o *bg; // x20

  v2 = this;
  if ( (byte_4A73DF3 & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, method);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_1B90010(&StringLiteral_22603/*"portrait_back"*/, v3);
    byte_4A73DF3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  eventId = v2->fields.eventId;
  bg = _4__this->fields.bg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37911484(eventId, bg, (System_String_o *)StringLiteral_22603/*"portrait_back"*/, 0LL);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, method),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_9:
    sub_1B9026C(this, method);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, method);
}
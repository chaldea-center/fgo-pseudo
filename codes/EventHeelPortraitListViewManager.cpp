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
  __int64 Master_object; // x0
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
  __int64 v22; // x25
  bool v23; // w26
  __int64 v24; // x24
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B3F15A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_HeelPortraitMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_1BDB878(&EventHeelPortraitListViewItem_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__, v10);
    byte_4B3F15A = 1;
  }
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  DispEntity = (System_Collections_Generic_List_object__o *)HeelPortraitMaster__GetDispEntity(
                                                              (HeelPortraitMaster_o *)Master_object,
                                                              this->fields.eventId,
                                                              0LL);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
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
      v15 = Master_object;
      for ( i = 0; i != size; ++i )
      {
        if ( (v15 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_26;
          heelPortraitIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds;
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     DispEntity,
                                     i,
                                     (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_26;
          v18 = System_Linq_Enumerable__Contains_int_(
                  heelPortraitIds,
                  *(_DWORD *)(Master_object + 16),
                  (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
        }
        else
        {
          v18 = 0;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   DispEntity,
                                   i,
                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_26;
        displayedId = saveData->fields.displayedId;
        v22 = Master_object;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   DispEntity,
                                   i,
                                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_26;
        if ( !displayedId )
          goto LABEL_26;
        v23 = System_Collections_Generic_List_int___Contains(
                displayedId,
                *(_DWORD *)(Master_object + 16),
                (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
        v24 = sub_1BDBAC4(EventHeelPortraitListViewItem_TypeInfo);
        ListViewItem___ctor_42734232((ListViewItem_o *)v24, i, 0LL);
        *(_QWORD *)(v24 + 112) = v22;
        Master_object = sub_1BDB81C(v24 + 112);
        *(_BYTE *)(v24 + 120) = v18;
        *(_BYTE *)(v24 + 121) = v23;
        if ( !itemList )
          goto LABEL_26;
        items = itemList->fields._items;
        v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_26;
        v27 = itemList->fields._size;
        if ( (unsigned int)v27 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v24,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + v27;
          itemList->fields._size = v27 + 1;
          v28[4] = (Il2CppClass *)v24;
          Master_object = sub_1BDB81C(v28 + 4);
        }
      }
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Master_object = (__int64)this->fields.scrollView;
  if ( !Master_object )
LABEL_26:
    sub_1BDBAD4(Master_object, v12);
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

  if ( (byte_4B3F15E & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3F15E = 1;
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
      sub_1BDBAD4(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
    *p_heelPortraitDetailDialog = 0LL;
    sub_1BDB81C(p_heelPortraitDetailDialog);
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

  if ( (byte_4B3F15D & 1) == 0 )
  {
    sub_1BDB878(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo, method);
    sub_1BDB878(&Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___, v3);
    byte_4B3F15D = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0LL);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0LL) )
    return (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        HeelPortraitDetailDialogState,
                                                                        (const MethodInfo_30A1350 *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v5 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_1BDBAC4(EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
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
  const MethodInfo *v11; // x1
  EventHeelPortraitAssetManager_o *assetManager; // x21
  struct EventHeelPortraitAssetManager_o **p_assetManager; // x19
  EventHeelPortraitAssetManager_o *v14; // x21
  const MethodInfo *v15; // x1
  int32_t v16; // w19
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_4B3F159 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&EventHeelPortraitAssetManager_TypeInfo, v5);
    sub_1BDB878(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__, v6);
    sub_1BDB878(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo, v7);
    byte_4B3F159 = 1;
  }
  v8 = sub_1BDBAC4(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 24) = this;
  *(_DWORD *)(v8 + 16) = eventId;
  sub_1BDB81C(v8 + 24);
  this->fields.eventId = *(_DWORD *)(v8 + 16);
  this->fields.saveData = EventHeelPortraitListViewManager__GetSaveData(this, v11);
  sub_1BDB81C(&this->fields.saveData);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = &this->fields.assetManager;
    v14 = (EventHeelPortraitAssetManager_o *)sub_1BDBAC4(EventHeelPortraitAssetManager_TypeInfo);
    EventHeelPortraitAssetManager___ctor(v14, v15);
    *p_assetManager = v14;
    sub_1BDB81C(p_assetManager);
    assetManager = *p_assetManager;
  }
  v16 = *(_DWORD *)(v8 + 16);
  v17 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v8,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_8:
    sub_1BDBAD4(v9, v10);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v16, v17, v18);
}


void __fastcall EventHeelPortraitListViewManager__InitDialog(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *heelPortraitDetailDialog; // x21
  struct HeelPortraitDetailDialogComponent_o **p_heelPortraitDetailDialog; // x19
  __int64 transform; // x0
  const MethodInfo *v8; // x1
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  Il2CppObject *heelPortraitDetailDialog_k__BackingField; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  UnityEngine_Transform_o *v12; // x20

  if ( (byte_4B3F15B & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___, method);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject____77160024, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B3F15B = 1;
  }
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_heelPortraitDetailDialog = &this->fields.heelPortraitDetailDialog;
  transform = UnityEngine_Object__op_Equality(heelPortraitDetailDialog, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_17;
    heelPortraitDetailDialog_k__BackingField = (Il2CppObject *)assetManager->fields._heelPortraitDetailDialog_k__BackingField;
    uiRoot = this->fields.uiRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (__int64)UnityEngine_Object__Instantiate_object__51108816(
                           heelPortraitDetailDialog_k__BackingField,
                           uiRoot,
                           (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GameObject____77160024);
    if ( !transform )
      goto LABEL_17;
    *p_heelPortraitDetailDialog = (struct HeelPortraitDetailDialogComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                  (UnityEngine_GameObject_o *)transform,
                                                                                  (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    sub_1BDB81C(p_heelPortraitDetailDialog);
    transform = (__int64)*p_heelPortraitDetailDialog;
    if ( !*p_heelPortraitDetailDialog )
      goto LABEL_17;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    v12 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B3E916 )
    {
      transform = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v8);
      byte_4B3E916 = 1;
    }
    if ( !v12 )
LABEL_17:
      sub_1BDBAD4(transform, v8);
    UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  transform = (__int64)*p_heelPortraitDetailDialog;
  if ( !*p_heelPortraitDetailDialog )
    goto LABEL_17;
  HeelPortraitDetailDialogComponent__Init((HeelPortraitDetailDialogComponent_o *)transform, v8);
}


void __fastcall EventHeelPortraitListViewManager__OnClickListView(
        EventHeelPortraitListViewManager_o *this,
        EventHeelPortraitListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  EventHeelPortraitListViewItem_o *monitor; // x0
  const MethodInfo *v10; // x1
  EventHeelPortraitListViewItem_o **p_monitor; // x21
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppClass *klass; // x8
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  HeelPortraitEntity_o *interopData; // x21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_4B3F15C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, obj);
    sub_1BDB878(&Method_EventHeelPortraitListViewManager_OnClickListView__, v5);
    sub_1BDB878(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__, v6);
    sub_1BDB878(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo, v7);
    byte_4B3F15C = 1;
  }
  v8 = (Il2CppObject *)sub_1BDBAC4(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_14;
  v8[1].klass = (Il2CppClass *)this;
  sub_1BDB81C(&v8[1]);
  v8[1].monitor = obj;
  p_monitor = (EventHeelPortraitListViewItem_o **)&v8[1].monitor;
  sub_1BDB81C(&v8[1].monitor);
  monitor = (EventHeelPortraitListViewItem_o *)v8[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  monitor = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)monitor, v10);
  if ( !monitor )
    goto LABEL_14;
  if ( monitor->fields._isHavePortrait_k__BackingField )
  {
    v12 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BDB890(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
    monitor = *p_monitor;
    if ( *p_monitor )
    {
      v8[2].klass = (Il2CppClass *)EventHeelPortraitListViewObject__GetItem(
                                     (EventHeelPortraitListViewObject_o *)monitor,
                                     v10);
      monitor = (EventHeelPortraitListViewItem_o *)sub_1BDB81C(&v8[2]);
      klass = v8[2].klass;
      if ( klass )
      {
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        interopData = (HeelPortraitEntity_o *)klass->_1.interopData;
        v17 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          v17,
          v8,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0LL);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, interopData, v17, v18);
          return;
        }
      }
    }
LABEL_14:
    sub_1BDBAD4(monitor, v10);
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

  if ( (byte_4B3F15F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4B3F15F = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.displayedId = v4;
  sub_1BDB81C(&this->fields);
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
  if ( (byte_4B3F160 & 1) == 0 )
  {
    this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)sub_1BDB878(
                                                                         &Method_System_Collections_Generic_List_int__Add__,
                                                                         method);
    byte_4B3F160 = 1;
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
      *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
    sub_1BDBAD4(this, method);
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
  if ( (byte_4B3F161 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_1BDB878(&StringLiteral_22755/*"portrait_back"*/, v3);
    byte_4B3F161 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  eventId = v2->fields.eventId;
  bg = _4__this->fields.bg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39626228(eventId, bg, (System_String_o *)StringLiteral_22755/*"portrait_back"*/, 0LL);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, method),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_9:
    sub_1BDBAD4(this, method);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, method);
}
void EventHeelPortraitListViewManager___ctor(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventHeelPortraitListViewManager__CreateList(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  __int64 Master_object; // x0
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
  __int64 v14; // x25
  bool v15; // w26
  __int64 v16; // x24
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CE8AC0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserHeelPortraitMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C7BAE8(&EventHeelPortraitListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
    byte_4CE8AC0 = 1;
  }
  entity = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  DispEntity = (System_Collections_Generic_List_object__o *)HeelPortraitMaster__GetDispEntity(
                                                              (HeelPortraitMaster_o *)Master_object,
                                                              this->fields.eventId,
                                                              0);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  Master_object = UserHeelPortraitMaster__TryGetEntity(
                    (UserHeelPortraitMaster_o *)Master_object,
                    &entity,
                    this->fields.eventId,
                    0);
  if ( DispEntity )
  {
    size = DispEntity->fields._size;
    if ( size >= 1 )
    {
      v7 = Master_object;
      for ( i = 0; i != size; ++i )
      {
        if ( (v7 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_26;
          heelPortraitIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds;
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     DispEntity,
                                     i,
                                     (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_26;
          v10 = System_Linq_Enumerable__Contains_int_(
                  heelPortraitIds,
                  *(_DWORD *)(Master_object + 16),
                  (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___);
        }
        else
        {
          v10 = 0;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   DispEntity,
                                   i,
                                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_26;
        displayedId = saveData->fields.displayedId;
        v14 = Master_object;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   DispEntity,
                                   i,
                                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_26;
        if ( !displayedId )
          goto LABEL_26;
        v15 = System_Collections_Generic_List_int___Contains(
                displayedId,
                *(_DWORD *)(Master_object + 16),
                (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__);
        v16 = sub_1C7BD34(EventHeelPortraitListViewItem_TypeInfo);
        ListViewItem___ctor_44325320((ListViewItem_o *)v16, i, 0);
        *(_QWORD *)(v16 + 120) = v14;
        Master_object = sub_1C7BA8C(v16 + 120, v14);
        *(_BYTE *)(v16 + 128) = v10;
        *(_BYTE *)(v16 + 129) = v15;
        if ( !itemList )
          goto LABEL_26;
        items = itemList->fields._items;
        v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_26;
        v19 = itemList->fields._size;
        if ( (unsigned int)v19 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v16,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + v19;
          itemList->fields._size = v19 + 1;
          v20[4] = (Il2CppClass *)v16;
          Master_object = sub_1C7BA8C(v20 + 4, v16);
        }
      }
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  Master_object = (__int64)this->fields.scrollView;
  if ( !Master_object )
LABEL_26:
    sub_1C7BD40(Master_object, v4);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
}


void EventHeelPortraitListViewManager__DestroyList(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventHeelPortraitAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *heelPortraitDetailDialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o **p_heelPortraitDetailDialog; // x19
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4CE8AC4 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8AC4 = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventHeelPortraitAssetManager__Release(assetManager, this->fields.eventId, v2);
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(heelPortraitDetailDialog, 0, 0) )
  {
    p_heelPortraitDetailDialog = (UnityEngine_Component_o **)&this->fields.heelPortraitDetailDialog;
    if ( !*p_heelPortraitDetailDialog )
      sub_1C7BD40(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71870148(gameObject, 0);
    *p_heelPortraitDetailDialog = 0;
    sub_1C7BA8C(p_heelPortraitDetailDialog, 0);
  }
}


EventHeelPortraitListViewManager_HeelPortraitSaveData_o *EventHeelPortraitListViewManager__GetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *HeelPortraitDetailDialogState; // x19
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4CE8AC3 & 1) == 0 )
  {
    sub_1C7BAE8(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
    byte_4CE8AC3 = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0) )
    return (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        HeelPortraitDetailDialogState,
                                                                        (const MethodInfo_31DFE60 *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v4 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_1C7BD34(EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
  EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(v4, v5);
  return v4;
}


void EventHeelPortraitListViewManager__Init(
        EventHeelPortraitListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *SaveData; // x0
  EventHeelPortraitAssetManager_o *assetManager; // x21
  struct EventHeelPortraitAssetManager_o **p_assetManager; // x19
  EventHeelPortraitAssetManager_o *v12; // x21
  const MethodInfo *v13; // x1
  int32_t v14; // w19
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3

  if ( (byte_4CE8ABF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&EventHeelPortraitAssetManager_TypeInfo);
    sub_1C7BAE8(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__);
    sub_1C7BAE8(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
    byte_4CE8ABF = 1;
  }
  v5 = sub_1C7BD34(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_DWORD *)(v5 + 16) = eventId;
  sub_1C7BA8C(v5 + 24, this);
  this->fields.eventId = *(_DWORD *)(v5 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v8);
  this->fields.saveData = SaveData;
  sub_1C7BA8C(&this->fields.saveData, SaveData);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = &this->fields.assetManager;
    v12 = (EventHeelPortraitAssetManager_o *)sub_1C7BD34(EventHeelPortraitAssetManager_TypeInfo);
    EventHeelPortraitAssetManager___ctor(v12, v13);
    *p_assetManager = v12;
    sub_1C7BA8C(p_assetManager, v12);
    assetManager = *p_assetManager;
  }
  v14 = *(_DWORD *)(v5 + 16);
  v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0);
  if ( !assetManager )
LABEL_8:
    sub_1C7BD40(v6, v7);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v14, v15, v16);
}


void EventHeelPortraitListViewManager__InitDialog(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *heelPortraitDetailDialog; // x21
  struct HeelPortraitDetailDialogComponent_o **p_heelPortraitDetailDialog; // x19
  __int64 transform; // x0
  const MethodInfo *v6; // x1
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  Il2CppObject *heelPortraitDetailDialog_k__BackingField; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  Il2CppObject *Component_object; // x0
  UnityEngine_Transform_o *v11; // x20

  if ( (byte_4CE8AC1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8AC1 = 1;
  }
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_heelPortraitDetailDialog = &this->fields.heelPortraitDetailDialog;
  transform = UnityEngine_Object__op_Equality(heelPortraitDetailDialog, 0, 0);
  if ( (transform & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_17;
    heelPortraitDetailDialog_k__BackingField = (Il2CppObject *)assetManager->fields._heelPortraitDetailDialog_k__BackingField;
    uiRoot = this->fields.uiRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (__int64)UnityEngine_Object__Instantiate_object__52412380(
                           heelPortraitDetailDialog_k__BackingField,
                           uiRoot,
                           (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_GameObject____78879968);
    if ( !transform )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    *p_heelPortraitDetailDialog = (struct HeelPortraitDetailDialogComponent_o *)Component_object;
    sub_1C7BA8C(p_heelPortraitDetailDialog, Component_object);
    transform = (__int64)*p_heelPortraitDetailDialog;
    if ( !*p_heelPortraitDetailDialog )
      goto LABEL_17;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    v11 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4CE7E5E )
    {
      transform = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    if ( !v11 )
LABEL_17:
      sub_1C7BD40(transform, v6);
    UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  transform = (__int64)*p_heelPortraitDetailDialog;
  if ( !*p_heelPortraitDetailDialog )
    goto LABEL_17;
  HeelPortraitDetailDialogComponent__Init((HeelPortraitDetailDialogComponent_o *)transform, v6);
}


void EventHeelPortraitListViewManager__OnClickListView(
        EventHeelPortraitListViewManager_o *this,
        EventHeelPortraitListViewObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x20
  EventHeelPortraitListViewItem_o *monitor; // x0
  const MethodInfo *v7; // x1
  EventHeelPortraitListViewItem_o **p_monitor; // x21
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  EventHeelPortraitListViewItem_o *Item; // x0
  Il2CppClass *klass; // x8
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  HeelPortraitEntity_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3

  if ( (byte_4CE8AC2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_EventHeelPortraitListViewManager_OnClickListView__);
    sub_1C7BAE8(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__);
    sub_1C7BAE8(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
    byte_4CE8AC2 = 1;
  }
  v5 = (Il2CppObject *)sub_1C7BD34(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_14;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C7BA8C(&v5[1], this);
  v5[1].monitor = obj;
  p_monitor = (EventHeelPortraitListViewItem_o **)&v5[1].monitor;
  sub_1C7BA8C(&v5[1].monitor, obj);
  monitor = (EventHeelPortraitListViewItem_o *)v5[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  monitor = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)monitor, v7);
  if ( !monitor )
    goto LABEL_14;
  if ( monitor->fields._isHavePortrait_k__BackingField )
  {
    v9 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C7BB00(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    monitor = *p_monitor;
    if ( *p_monitor )
    {
      Item = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)monitor, v7);
      v5[2].klass = (Il2CppClass *)Item;
      monitor = (EventHeelPortraitListViewItem_o *)sub_1C7BA8C(&v5[2], Item);
      klass = v5[2].klass;
      if ( klass )
      {
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v14 = (HeelPortraitEntity_o *)klass->_1.klass;
        v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
        System_Action___ctor(
          v15,
          v5,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, v14, v15, v16);
          return;
        }
      }
    }
LABEL_14:
    sub_1C7BD40(monitor, v7);
  }
}


void EventHeelPortraitListViewManager__SerializeFieldNotNullCheck(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void EventHeelPortraitListViewManager__SetSaveData(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x1

  v3 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)this->fields.saveData, 0);
  EventRewardSaveData__SetHeelPortraitDetailDialogState(this->fields.eventId, v3, 0);
}


void EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(
        EventHeelPortraitListViewManager_HeelPortraitSaveData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20

  if ( (byte_4CE8AC5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CE8AC5 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.displayedId = v3;
  sub_1C7BA8C(&this->fields, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventHeelPortraitListViewManager___c__DisplayClass11_0___ctor(
        EventHeelPortraitListViewManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventHeelPortraitListViewManager___c__DisplayClass11_0___OnClickListView_b__0(
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
  if ( (byte_4CE8AC6 & 1) == 0 )
  {
    this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    byte_4CE8AC6 = 1;
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
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_15;
  }
  else
  {
    LODWORD(this->fields.obj) = obj_low + 1;
    *((_DWORD *)&v7->fields.dropObjectList + obj_low) = (_DWORD)method;
  }
  v10 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)_4__this->fields.saveData, 0);
  EventRewardSaveData__SetHeelPortraitDetailDialogState(_4__this->fields.eventId, v10, 0);
  this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)v2->fields.obj;
  if ( !this )
LABEL_15:
    sub_1C7BD40(this, method);
  EventHeelPortraitListViewObject__ClearNewImgSprite((EventHeelPortraitListViewObject_o *)this, method);
}


void EventHeelPortraitListViewManager___c__DisplayClass7_0___ctor(
        EventHeelPortraitListViewManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventHeelPortraitListViewManager___c__DisplayClass7_0___Init_b__0(
        EventHeelPortraitListViewManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  EventHeelPortraitListViewManager___c__DisplayClass7_0_o *v2; // x19
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  int32_t eventId; // w21
  UISprite_o *bg; // x20

  v2 = this;
  if ( (byte_4CE8AC7 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_1C7BAE8(&StringLiteral_22952/*"portrait_back"*/);
    byte_4CE8AC7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  eventId = v2->fields.eventId;
  bg = _4__this->fields.bg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_41168628(eventId, bg, (System_String_o *)StringLiteral_22952/*"portrait_back"*/, 0);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, method),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this) == 0) )
  {
LABEL_9:
    sub_1C7BD40(this, method);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, method);
}
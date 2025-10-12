void EventHeelPortraitListViewManager___ctor(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventHeelPortraitListViewManager__CreateList(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  __int64 Master_object; // x0
  System_Collections_Generic_List_object__o *DispEntity; // x20
  int size; // w27
  char v6; // w21
  int32_t i; // w22
  System_Collections_Generic_IEnumerable_TSource__o *heelPortraitIds; // x23
  bool v9; // w29
  System_Collections_Generic_List_object__o *itemList; // x23
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  System_Collections_Generic_List_int__o *displayedId; // x24
  __int64 v13; // x25
  bool v14; // w26
  __int64 v15; // x24
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C31F48 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserHeelPortraitMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&EventHeelPortraitListViewItem_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
    byte_4C31F48 = 1;
  }
  entity = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  DispEntity = (System_Collections_Generic_List_object__o *)HeelPortraitMaster__GetDispEntity(
                                                              (HeelPortraitMaster_o *)Master_object,
                                                              this->fields.eventId,
                                                              0);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
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
      v6 = Master_object;
      for ( i = 0; i != size; ++i )
      {
        if ( (v6 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_26;
          heelPortraitIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds;
          Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                     DispEntity,
                                     i,
                                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_26;
          v9 = System_Linq_Enumerable__Contains_int_(
                 heelPortraitIds,
                 *(_DWORD *)(Master_object + 16),
                 (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
        }
        else
        {
          v9 = 0;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   DispEntity,
                                   i,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_26;
        displayedId = saveData->fields.displayedId;
        v13 = Master_object;
        Master_object = (__int64)System_Collections_Generic_List_object___get_Item(
                                   DispEntity,
                                   i,
                                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_26;
        if ( !displayedId )
          goto LABEL_26;
        v14 = System_Collections_Generic_List_int___Contains(
                displayedId,
                *(_DWORD *)(Master_object + 16),
                (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
        v15 = sub_1C32E6C(EventHeelPortraitListViewItem_TypeInfo);
        ListViewItem___ctor_43702564((ListViewItem_o *)v15, i, 0);
        *(_QWORD *)(v15 + 120) = v13;
        Master_object = sub_1C32BC4(v15 + 120, v13);
        *(_BYTE *)(v15 + 128) = v9;
        *(_BYTE *)(v15 + 129) = v14;
        if ( !itemList )
          goto LABEL_26;
        items = itemList->fields._items;
        v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_26;
        v18 = itemList->fields._size;
        if ( (unsigned int)v18 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v15,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v18;
          itemList->fields._size = v18 + 1;
          v19[4] = (Il2CppClass *)v15;
          Master_object = sub_1C32BC4(v19 + 4, v15);
        }
      }
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  Master_object = (__int64)this->fields.scrollView;
  if ( !Master_object )
LABEL_26:
    sub_1C32E7C(Master_object);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
}


void EventHeelPortraitListViewManager__DestroyList(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventHeelPortraitAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *heelPortraitDetailDialog; // x20
  UnityEngine_Component_o **p_heelPortraitDetailDialog; // x19
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4C31F4C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31F4C = 1;
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
      sub_1C32E7C(0);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_heelPortraitDetailDialog = 0;
    sub_1C32BC4(p_heelPortraitDetailDialog, 0);
  }
}


EventHeelPortraitListViewManager_HeelPortraitSaveData_o *EventHeelPortraitListViewManager__GetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *HeelPortraitDetailDialogState; // x19
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4C31F4B & 1) == 0 )
  {
    sub_1C32C20(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
    byte_4C31F4B = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0) )
    return (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        HeelPortraitDetailDialogState,
                                                                        (const MethodInfo_314D708 *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v4 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_1C32E6C(EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
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
  const MethodInfo *v7; // x1
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *SaveData; // x0
  EventHeelPortraitAssetManager_o *assetManager; // x21
  struct EventHeelPortraitAssetManager_o **p_assetManager; // x19
  EventHeelPortraitAssetManager_o *v11; // x21
  const MethodInfo *v12; // x1
  int32_t v13; // w19
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_4C31F47 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&EventHeelPortraitAssetManager_TypeInfo);
    sub_1C32C20(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__);
    sub_1C32C20(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
    byte_4C31F47 = 1;
  }
  v5 = sub_1C32E6C(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_DWORD *)(v5 + 16) = eventId;
  sub_1C32BC4(v5 + 24, this);
  this->fields.eventId = *(_DWORD *)(v5 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v7);
  this->fields.saveData = SaveData;
  sub_1C32BC4(&this->fields.saveData, SaveData);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = &this->fields.assetManager;
    v11 = (EventHeelPortraitAssetManager_o *)sub_1C32E6C(EventHeelPortraitAssetManager_TypeInfo);
    EventHeelPortraitAssetManager___ctor(v11, v12);
    *p_assetManager = v11;
    sub_1C32BC4(p_assetManager, v11);
    assetManager = *p_assetManager;
  }
  v13 = *(_DWORD *)(v5 + 16);
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0);
  if ( !assetManager )
LABEL_8:
    sub_1C32E7C(v6);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v13, v14, v15);
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

  if ( (byte_4C31F49 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31F49 = 1;
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
    transform = (__int64)UnityEngine_Object__Instantiate_object__51812484(
                           heelPortraitDetailDialog_k__BackingField,
                           uiRoot,
                           (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    if ( !transform )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    *p_heelPortraitDetailDialog = (struct HeelPortraitDetailDialogComponent_o *)Component_object;
    sub_1C32BC4(p_heelPortraitDetailDialog, Component_object);
    transform = (__int64)*p_heelPortraitDetailDialog;
    if ( !*p_heelPortraitDetailDialog )
      goto LABEL_17;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    v11 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C313D6 )
    {
      transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    if ( !v11 )
LABEL_17:
      sub_1C32E7C(transform);
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
  EventHeelPortraitListViewItem_o **p_monitor; // x21
  const MethodInfo *v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  EventHeelPortraitListViewItem_o *Item; // x0
  Il2CppClass *klass; // x8
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  HeelPortraitEntity_o *v15; // x21
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x3

  if ( (byte_4C31F4A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventHeelPortraitListViewManager_OnClickListView__);
    sub_1C32C20(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__);
    sub_1C32C20(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
    byte_4C31F4A = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_14;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C32BC4(&v5[1], this);
  v5[1].monitor = obj;
  p_monitor = (EventHeelPortraitListViewItem_o **)&v5[1].monitor;
  sub_1C32BC4(&v5[1].monitor, obj);
  monitor = (EventHeelPortraitListViewItem_o *)v5[1].monitor;
  if ( !monitor )
    goto LABEL_14;
  monitor = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)monitor, v8);
  if ( !monitor )
    goto LABEL_14;
  if ( monitor->fields._isHavePortrait_k__BackingField )
  {
    v9 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C32C38(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C32C04(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    monitor = *p_monitor;
    if ( *p_monitor )
    {
      Item = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)monitor, v11);
      v5[2].klass = (Il2CppClass *)Item;
      monitor = (EventHeelPortraitListViewItem_o *)sub_1C32BC4(&v5[2], Item);
      klass = v5[2].klass;
      if ( klass )
      {
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v15 = (HeelPortraitEntity_o *)klass->_1.klass;
        v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          v16,
          v5,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, v15, v16, v17);
          return;
        }
      }
    }
LABEL_14:
    sub_1C32E7C(monitor);
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

  if ( (byte_4C31F4D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C31F4D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.displayedId = v3;
  sub_1C32BC4(&this->fields, v3);
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
  int32_t id; // w1
  struct EventHeelPortraitListViewManager_o *v8; // x8
  _QWORD *v9; // x9
  __int64 obj_low; // x10
  System_String_o *v11; // x0
  const MethodInfo *v12; // x1

  v2 = this;
  if ( (byte_4C31F4E & 1) == 0 )
  {
    this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C31F4E = 1;
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
  id = Entity_k__BackingField->fields.id;
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
      id,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    _4__this = v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_15;
  }
  else
  {
    LODWORD(this->fields.obj) = obj_low + 1;
    *((_DWORD *)&v8->fields.dropObjectList + obj_low) = id;
  }
  v11 = UnityEngine_JsonUtility__ToJson((Il2CppObject *)_4__this->fields.saveData, 0);
  EventRewardSaveData__SetHeelPortraitDetailDialogState(_4__this->fields.eventId, v11, 0);
  this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)v2->fields.obj;
  if ( !this )
LABEL_15:
    sub_1C32E7C(this);
  EventHeelPortraitListViewObject__ClearNewImgSprite((EventHeelPortraitListViewObject_o *)this, v12);
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
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  v2 = this;
  if ( (byte_4C31F4F & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_1C32C20(&StringLiteral_22733/*"portrait_back"*/);
    byte_4C31F4F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  eventId = v2->fields.eventId;
  bg = _4__this->fields.bg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40507600(eventId, bg, (System_String_o *)StringLiteral_22733/*"portrait_back"*/, 0);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, v6),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this) == 0) )
  {
LABEL_9:
    sub_1C32E7C(this);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, v7);
}
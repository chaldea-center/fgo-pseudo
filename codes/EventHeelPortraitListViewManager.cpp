void EventHeelPortraitListViewManager___ctor(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventHeelPortraitListViewManager__CreateList(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  HeelPortraitMaster_o *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *DispEntity; // x20
  int size; // w28
  char v9; // w21
  int32_t i; // w22
  System_Collections_Generic_IEnumerable_TSource__o *heelPortraitIds; // x23
  bool v12; // w24
  System_Collections_Generic_List_object__o *itemList; // x23
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  HeelPortraitMaster_o *v15; // x26
  System_Collections_Generic_List_int__o *displayedId; // x25
  bool v17; // w27
  __int64 v18; // x25
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5932839 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserHeelPortraitMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&EventHeelPortraitListViewItem_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
    byte_5932839 = 1;
  }
  entity = 0;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = (HeelPortraitMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  DispEntity = (System_Collections_Generic_List_object__o *)HeelPortraitMaster__GetDispEntity(
                                                              Master_object,
                                                              this->fields.eventId,
                                                              0);
  Master_object = (HeelPortraitMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_object )
    goto LABEL_26;
  Master_object = (HeelPortraitMaster_o *)UserHeelPortraitMaster__TryGetEntity(
                                            (UserHeelPortraitMaster_o *)Master_object,
                                            &entity,
                                            this->fields.eventId,
                                            0);
  if ( DispEntity )
  {
    size = DispEntity->fields._size;
    if ( size >= 1 )
    {
      v9 = (char)Master_object;
      for ( i = 0; i != size; ++i )
      {
        if ( (v9 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_26;
          heelPortraitIds = (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds;
          Master_object = (HeelPortraitMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                    DispEntity,
                                                    i,
                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
          if ( !Master_object )
            goto LABEL_26;
          v12 = System_Linq_Enumerable__Contains_int_(
                  heelPortraitIds,
                  Master_object->fields._MasterKind_k__BackingField,
                  (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
        }
        else
        {
          v12 = 0;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Master_object = (HeelPortraitMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  DispEntity,
                                                  i,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_26;
        v15 = Master_object;
        displayedId = saveData->fields.displayedId;
        Master_object = (HeelPortraitMaster_o *)System_Collections_Generic_List_object___get_Item(
                                                  DispEntity,
                                                  i,
                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
        if ( !Master_object )
          goto LABEL_26;
        if ( !displayedId )
          goto LABEL_26;
        v17 = System_Collections_Generic_List_int___Contains(
                displayedId,
                Master_object->fields._MasterKind_k__BackingField,
                (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
        v18 = sub_21FFEBC(EventHeelPortraitListViewItem_TypeInfo);
        ListViewItem___ctor_50749276((ListViewItem_o *)v18, i, 0);
        *(_QWORD *)(v18 + 120) = v15;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 120), (int32_t)v15, v19, v20, v21, v22, v23, v24);
        *(_BYTE *)(v18 + 128) = v12;
        *(_BYTE *)(v18 + 129) = v17;
        if ( !itemList )
          goto LABEL_26;
        items = itemList->fields._items;
        v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          goto LABEL_26;
        v33 = itemList->fields._size;
        if ( (unsigned int)v33 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v18,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + v33;
          itemList->fields._size = v33 + 1;
          v34[4] = (Il2CppClass *)v18;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), v18, v25, v26, v27, v28, v29, v30);
        }
      }
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  Master_object = (HeelPortraitMaster_o *)this->fields.scrollView;
  if ( !Master_object )
LABEL_26:
    sub_21FFECC(Master_object, v6);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
}


void EventHeelPortraitListViewManager__DestroyList(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventHeelPortraitAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *heelPortraitDetailDialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593283D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593283D = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventHeelPortraitAssetManager__Release(assetManager, this->fields.eventId, v2);
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(heelPortraitDetailDialog, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.heelPortraitDetailDialog;
    if ( !v7 )
      sub_21FFECC(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v7, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    this->fields.heelPortraitDetailDialog = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.heelPortraitDetailDialog,
      0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}


EventHeelPortraitListViewManager_HeelPortraitSaveData_o *EventHeelPortraitListViewManager__GetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *HeelPortraitDetailDialogState; // x19
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_593283C & 1) == 0 )
  {
    sub_21FFC50(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
    byte_593283C = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0) )
    return (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)UnityEngine_JsonUtility__FromJson_object_(
                                                                        HeelPortraitDetailDialogState,
                                                                        (const MethodInfo_38A15A8 *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v4 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_21FFEBC(EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *SaveData; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  EventHeelPortraitAssetManager_o *assetManager; // x21
  EventHeelPortraitAssetManager_o *v23; // x21
  const MethodInfo *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w19
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x3

  if ( (byte_5932838 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&EventHeelPortraitAssetManager_TypeInfo);
    sub_21FFC50(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__);
    sub_21FFC50(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
    byte_5932838 = 1;
  }
  v5 = sub_21FFEBC(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_DWORD *)(v5 + 16) = eventId;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  this->fields.eventId = *(_DWORD *)(v5 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v14);
  this->fields.saveData = SaveData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.saveData,
    (int32_t)SaveData,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    v23 = (EventHeelPortraitAssetManager_o *)sub_21FFEBC(EventHeelPortraitAssetManager_TypeInfo);
    EventHeelPortraitAssetManager___ctor(v23, v24);
    this->fields.assetManager = v23;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.assetManager,
      (int32_t)v23,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    assetManager = this->fields.assetManager;
  }
  v31 = *(_DWORD *)(v5 + 16);
  v32 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0);
  if ( !assetManager )
LABEL_8:
    sub_21FFECC(v6, v7);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v31, v32, v33);
}


void EventHeelPortraitListViewManager__InitDialog(EventHeelPortraitListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *heelPortraitDetailDialog; // x20
  __int64 transform; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  Il2CppObject *heelPortraitDetailDialog_k__BackingField; // x20
  UnityEngine_Transform_o *uiRoot; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Transform_o *v18; // x20

  if ( (byte_593283A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593283A = 1;
  }
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  transform = UnityEngine_Object__op_Equality(heelPortraitDetailDialog, 0, 0);
  if ( (transform & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_17;
    heelPortraitDetailDialog_k__BackingField = (Il2CppObject *)assetManager->fields._heelPortraitDetailDialog_k__BackingField;
    uiRoot = this->fields.uiRoot;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    transform = (__int64)UnityEngine_Object__Instantiate_object__59506996(
                           heelPortraitDetailDialog_k__BackingField,
                           uiRoot,
                           (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    if ( !transform )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    this->fields.heelPortraitDetailDialog = (struct HeelPortraitDetailDialogComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.heelPortraitDetailDialog,
      (int32_t)Component_object,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    transform = (__int64)this->fields.heelPortraitDetailDialog;
    if ( !transform )
      goto LABEL_17;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    v18 = (UnityEngine_Transform_o *)transform;
    if ( !byte_5931945 )
    {
      transform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( !v18 )
LABEL_17:
      sub_21FFECC(transform, v6);
    UnityEngine_Transform__set_localScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  transform = (__int64)this->fields.heelPortraitDetailDialog;
  if ( !transform )
    goto LABEL_17;
  HeelPortraitDetailDialogComponent__Init((HeelPortraitDetailDialogComponent_o *)transform, v6);
}


void EventHeelPortraitListViewManager__OnClickListView(
        EventHeelPortraitListViewManager_o *this,
        EventHeelPortraitListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  EventHeelPortraitListViewItem_o *Item; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  EventHeelPortraitListViewItem_o **v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  EventHeelPortraitListViewItem_o *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x8
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  HeelPortraitEntity_o *v32; // x21
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x3

  if ( (byte_593283B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventHeelPortraitListViewManager_OnClickListView__);
    sub_21FFC50(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__);
    sub_21FFC50(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
    byte_593283B = 1;
  }
  v5 = sub_21FFEBC(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = obj;
  v14 = (EventHeelPortraitListViewItem_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)obj, v15, v16, v17, v18, v19, v20);
  Item = *(EventHeelPortraitListViewItem_o **)(v5 + 24);
  if ( !Item )
    goto LABEL_14;
  Item = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v7);
  if ( !Item )
    goto LABEL_14;
  if ( Item->fields._isHavePortrait_k__BackingField )
  {
    v21 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_21FFC68(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v22 = (System_Reflection_MethodBase_o *)sub_21FFC34(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
    Item = *v14;
    if ( *v14 )
    {
      v23 = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v7);
      *(_QWORD *)(v5 + 32) = v23;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v23, v24, v25, v26, v27, v28, v29);
      v30 = *(_QWORD *)(v5 + 32);
      if ( v30 )
      {
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v32 = *(HeelPortraitEntity_o **)(v30 + 120);
        v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v33,
          (Il2CppObject *)v5,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, v32, v33, v34);
          return;
        }
      }
    }
LABEL_14:
    sub_21FFECC(Item, v7);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593283E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593283E = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.displayedId = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x10
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x9
  struct EventHeelPortraitListViewManager_o *v7; // x8
  _QWORD *v8; // x9
  __int64 obj_low; // x10
  System_String_o *v10; // x0

  v2 = this;
  if ( (byte_593283F & 1) == 0 )
  {
    this = (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    byte_593283F = 1;
  }
  portraitItem = v2->fields.portraitItem;
  if ( !portraitItem )
    goto LABEL_15;
  if ( portraitItem->fields._isDispDetailDialog_k__BackingField )
    return;
  _4__this = v2->fields.__4__this;
  portraitItem->fields._isDispDetailDialog_k__BackingField = 1;
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
  v7 = this->fields.__4__this;
  method = (const MethodInfo *)(unsigned int)Entity_k__BackingField->fields.id;
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
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
    sub_21FFECC(this, method);
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
  __int64 v2; // x2
  EventHeelPortraitListViewManager___c__DisplayClass7_0_o *v3; // x19
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *bg; // x21

  v3 = this;
  if ( (byte_5932840 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_21FFC50(&StringLiteral_23866/*"portrait_back"*/);
    byte_5932840 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  eventId = v3->fields.eventId;
  bg = _4__this->fields.bg;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetEventUI_47538316(eventId, bg, (System_String_o *)StringLiteral_23866/*"portrait_back"*/, 0);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v3->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, method),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v3->fields.__4__this) == 0) )
  {
LABEL_9:
    sub_21FFECC(this, method);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, method);
}
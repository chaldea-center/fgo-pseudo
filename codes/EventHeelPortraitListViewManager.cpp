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
  HeelPortraitMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_HeelPortraitEntity__o *DispEntity; // x20
  UserHeelPortraitMaster_o *v13; // x0
  int size; // w27
  __int64 v15; // x28
  unsigned int v16; // w22
  __int64 v17; // x8
  bool v18; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  System_Collections_Generic_List_int__o *displayedId; // x25
  __int64 v22; // x24
  bool v23; // w26
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UIScrollView_o *scrollView; // x0
  bool v36; // [xsp+4h] [xbp-5Ch]
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FB6A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_HeelPortraitMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_B16FFC(&EventHeelPortraitListViewItem_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__, v10);
    byte_40FB6A8 = 1;
  }
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  DispEntity = HeelPortraitMaster__GetDispEntity(Master_WarQuestSelectionMaster, this->fields.eventId, 0LL);
  v13 = (UserHeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !v13 )
    goto LABEL_29;
  v36 = UserHeelPortraitMaster__TryGetEntity(v13, &entity, this->fields.eventId, 0LL);
  if ( DispEntity )
  {
    size = DispEntity->fields._size;
    if ( size >= 1 )
    {
      v15 = 4LL;
      do
      {
        v16 = v15 - 4;
        if ( v36 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( DispEntity->fields._size <= v16 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v17 = *((_QWORD *)&DispEntity->fields._items->obj.klass + v15);
          if ( !v17 )
            goto LABEL_29;
          v18 = System_Linq_Enumerable__Contains_int_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds,
                  *(_DWORD *)(v17 + 16),
                  (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
        }
        else
        {
          v18 = 0;
        }
        itemList = this->fields.itemList;
        if ( DispEntity->fields._size <= v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_29;
        displayedId = saveData->fields.displayedId;
        v22 = *((_QWORD *)&DispEntity->fields._items->obj.klass + v15);
        if ( DispEntity->fields._size <= v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v22 )
          goto LABEL_29;
        if ( !displayedId )
          goto LABEL_29;
        v23 = System_Collections_Generic_List_int___Contains(
                displayedId,
                *(_DWORD *)(v22 + 16),
                (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
        v28 = sub_B170CC(EventHeelPortraitListViewItem_TypeInfo, v24, v25, v26, v27);
        ListViewItem___ctor_30173668((ListViewItem_o *)v28, v16, 0LL);
        *(_QWORD *)(v28 + 112) = v22;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v28 + 112),
          (System_Int32_array **)v22,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        *(_BYTE *)(v28 + 120) = v18;
        *(_BYTE *)(v28 + 121) = v23;
        if ( !itemList )
          goto LABEL_29;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( (int)++v15 - 4 < size );
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
LABEL_29:
    sub_B170D4();
  UIScrollView__ResetPosition(scrollView, 0LL);
}


void __fastcall EventHeelPortraitListViewManager__DestroyList(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventHeelPortraitAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *heelPortraitDetailDialog; // x20
  UnityEngine_Component_o **p_heelPortraitDetailDialog; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FB6AC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB6AC = 1;
  }
  assetManager = this->fields.assetManager;
  if ( assetManager )
    EventHeelPortraitAssetManager__Release(assetManager, this->fields.eventId, v2);
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(heelPortraitDetailDialog, 0LL, 0LL) )
  {
    p_heelPortraitDetailDialog = (UnityEngine_Component_o **)&this->fields.heelPortraitDetailDialog;
    if ( !*p_heelPortraitDetailDialog )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_heelPortraitDetailDialog = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_heelPortraitDetailDialog, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


EventHeelPortraitListViewManager_HeelPortraitSaveData_o *__fastcall EventHeelPortraitListViewManager__GetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *HeelPortraitDetailDialogState; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v9; // x19

  if ( (byte_40FB6AB & 1) == 0 )
  {
    sub_B16FFC(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___, v3);
    byte_40FB6AB = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0LL);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0LL) )
    return UnityEngine_JsonUtility__FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData_(
             HeelPortraitDetailDialogState,
             (const MethodInfo_19D7600 *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v9 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_B170CC(
                                                                    EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo,
                                                                    v5,
                                                                    v6,
                                                                    v7,
                                                                    v8);
  EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(v9, 0LL);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHeelPortraitListViewManager__Init(
        EventHeelPortraitListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *SaveData; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  EventHeelPortraitAssetManager_o *assetManager; // x21
  BattleServantConfConponent_o *p_assetManager; // x20
  EventHeelPortraitAssetManager_o *v31; // x21
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t v39; // w20
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x3

  if ( (byte_40FB6A7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&EventHeelPortraitAssetManager_TypeInfo, v7);
    sub_B16FFC(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__, v8);
    sub_B16FFC(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo, v9);
    byte_40FB6A7 = 1;
  }
  v10 = sub_B170CC(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&eventId, method, v3, v4);
  EventHeelPortraitListViewManager___c__DisplayClass7_0___ctor(
    (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_8;
  *(_QWORD *)(v10 + 24) = this;
  *(_DWORD *)(v10 + 16) = eventId;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  this->fields.eventId = *(_DWORD *)(v10 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v17);
  this->fields.saveData = SaveData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.saveData,
    (System_Int32_array **)SaveData,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
    v31 = (EventHeelPortraitAssetManager_o *)sub_B170CC(EventHeelPortraitAssetManager_TypeInfo, v25, v26, v27, v28);
    EventHeelPortraitAssetManager___ctor(v31, v32);
    p_assetManager->klass = (BattleServantConfConponent_c *)v31;
    sub_B16F98(p_assetManager, (System_Int32_array **)v31, v33, v34, v35, v36, v37, v38);
    assetManager = (EventHeelPortraitAssetManager_o *)p_assetManager->klass;
  }
  v39 = *(_DWORD *)(v10 + 16);
  v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v10,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_8:
    sub_B170D4();
  EventHeelPortraitAssetManager__GetAssets(assetManager, v39, v40, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHeelPortraitListViewManager__InitDialog(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *heelPortraitDetailDialog; // x21
  BattleServantConfConponent_o *p_heelPortraitDetailDialog; // x19
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  UILabel_o *heelPortraitDetailDialog_k__BackingField; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  UnityEngine_GameObject_o *v10; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Transform_o *transform; // x20
  int v19; // s0

  if ( (byte_40FB6A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FB6A9 = 1;
  }
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_heelPortraitDetailDialog = (BattleServantConfConponent_o *)&this->fields.heelPortraitDetailDialog;
  if ( UnityEngine_Object__op_Equality(heelPortraitDetailDialog, 0LL, 0LL) )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_17;
    heelPortraitDetailDialog_k__BackingField = (UILabel_o *)assetManager->fields._heelPortraitDetailDialog_k__BackingField;
    uiRoot = this->fields.uiRoot;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        heelPortraitDetailDialog_k__BackingField,
                                        uiRoot,
                                        (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    if ( !v10
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v10,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___),
          p_heelPortraitDetailDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite,
          sub_B16F98(p_heelPortraitDetailDialog, Component_srcLineSprite, v12, v13, v14, v15, v16, v17),
          !p_heelPortraitDetailDialog->klass)
      || (transform = UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)p_heelPortraitDetailDialog->klass,
                        0LL),
          *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL),
          !transform) )
    {
LABEL_17:
      sub_B170D4();
    }
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
  }
  if ( !p_heelPortraitDetailDialog->klass )
    goto LABEL_17;
  HeelPortraitDetailDialogComponent__Init((HeelPortraitDetailDialogComponent_o *)p_heelPortraitDetailDialog->klass, 0LL);
}


void __fastcall EventHeelPortraitListViewManager__OnClickListView(
        EventHeelPortraitListViewManager_o *this,
        EventHeelPortraitListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  EventHeelPortraitListViewObject_o **v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  EventHeelPortraitListViewItem_o *Item; // x0
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  const MethodInfo *v28; // x1
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x8
  HeelPortraitEntity_o *v41; // x21
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  System_Action_o *v43; // x22

  if ( (byte_40FB6AA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_EventHeelPortraitListViewManager_OnClickListView__, v7);
    sub_B16FFC(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__, v8);
    sub_B16FFC(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo, v9);
    byte_40FB6AA = 1;
  }
  v10 = sub_B170CC(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo, obj, method, v3, v4);
  EventHeelPortraitListViewManager___c__DisplayClass11_0___ctor(
    (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_14;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = obj;
  v17 = (EventHeelPortraitListViewObject_o **)(v10 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)obj, v18, v19, v20, v21, v22, v23);
  if ( !*(_QWORD *)(v10 + 24) )
    goto LABEL_14;
  Item = EventHeelPortraitListViewObject__GetItem(*(EventHeelPortraitListViewObject_o **)(v10 + 24), v24);
  if ( !Item )
    goto LABEL_14;
  if ( Item->fields._isHavePortrait_k__BackingField )
  {
    v26 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 75) & 2) != 0 )
      v26 = (_QWORD *)sub_B17004(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v27 = (System_Reflection_MethodBase_o *)sub_B16FE0(v26, v26[3]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
    if ( *v17 )
    {
      v29 = (System_Int32_array **)EventHeelPortraitListViewObject__GetItem(*v17, v28);
      *(_QWORD *)(v10 + 32) = v29;
      sub_B16F98((BattleServantConfConponent_o *)(v10 + 32), v29, v30, v31, v32, v33, v34, v35);
      v40 = *(_QWORD *)(v10 + 32);
      if ( v40 )
      {
        v41 = *(HeelPortraitEntity_o **)(v40 + 112);
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
        System_Action___ctor(
          v43,
          (Il2CppObject *)v10,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0LL);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, v41, v43, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F6FB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_40F6FB6 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.displayedId = v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  struct EventHeelPortraitListViewItem_o *portraitItem; // x0
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  struct EventHeelPortraitListViewItem_o *v6; // x9
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x9
  System_Collections_Generic_List_int__o *displayedId; // x0
  EventHeelPortraitListViewManager_o *v9; // x0
  EventHeelPortraitListViewObject_o *obj; // x0

  if ( (byte_40F6FB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    byte_40F6FB4 = 1;
  }
  portraitItem = this->fields.portraitItem;
  if ( !portraitItem )
    goto LABEL_13;
  if ( portraitItem->fields._isDispDetailDialog_k__BackingField )
    return;
  EventHeelPortraitListViewItem__SetIsDispDetailDialog(portraitItem, 1, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  saveData = _4__this->fields.saveData;
  if ( !saveData
    || (v6 = this->fields.portraitItem) == 0LL
    || (Entity_k__BackingField = v6->fields._Entity_k__BackingField) == 0LL
    || (displayedId = saveData->fields.displayedId) == 0LL
    || (System_Collections_Generic_List_int___Add(
          displayedId,
          Entity_k__BackingField->fields.id,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__),
        (v9 = this->fields.__4__this) == 0LL)
    || (EventHeelPortraitListViewManager__SetSaveData(v9, 0LL), (obj = this->fields.obj) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  EventHeelPortraitListViewObject__ClearNewImgSprite(obj, 0LL);
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
  __int64 v3; // x1
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *bg; // x21
  EventHeelPortraitListViewManager_o *v7; // x0
  EventHeelPortraitListViewManager_o *v8; // x0

  if ( (byte_40F6FB5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_21416, v3);
    byte_40F6FB5 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventId = this->fields.eventId;
  bg = _4__this->fields.bg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, bg, (System_String_o *)StringLiteral_21416, 0LL);
  v7 = this->fields.__4__this;
  if ( !v7 || (EventHeelPortraitListViewManager__CreateList(v7, 0LL), (v8 = this->fields.__4__this) == 0LL) )
LABEL_10:
    sub_B170D4();
  EventHeelPortraitListViewManager__InitDialog(v8, 0LL);
}
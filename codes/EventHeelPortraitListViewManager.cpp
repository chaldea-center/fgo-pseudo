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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  HeelPortraitMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_HeelPortraitEntity__o *DispEntity; // x20
  int size; // w27
  __int64 v33; // x28
  unsigned int v34; // w22
  __int64 v35; // x8
  char v36; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  System_Collections_Generic_List_int__o *displayedId; // x25
  __int64 v40; // x24
  bool v41; // w26
  __int64 v42; // x25
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  char v49; // [xsp+4h] [xbp-5Ch]
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E9F7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_HeelPortraitMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v11, v12, v13);
    sub_B5D5C4(&EventHeelPortraitListViewItem_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__, v26, v27, v28);
    byte_42E9F7D = 1;
  }
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  DispEntity = HeelPortraitMaster__GetDispEntity(Master_WarQuestSelectionMaster, this->fields.eventId, 0LL);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)UserHeelPortraitMaster__TryGetEntity(
                                                             (UserHeelPortraitMaster_o *)Master_WarQuestSelectionMaster,
                                                             &entity,
                                                             this->fields.eventId,
                                                             0LL);
  v49 = (char)Master_WarQuestSelectionMaster;
  if ( DispEntity )
  {
    size = DispEntity->fields._size;
    if ( size >= 1 )
    {
      v33 = 4LL;
      do
      {
        v34 = v33 - 4;
        if ( (v49 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( DispEntity->fields._size <= v34 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v35 = *((_QWORD *)&DispEntity->fields._items->obj.klass + v33);
          if ( !v35 )
            goto LABEL_29;
          Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)System_Linq_Enumerable__Contains_int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds,
                                                                     *(_DWORD *)(v35 + 16),
                                                                     (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
          v36 = (unsigned __int8)Master_WarQuestSelectionMaster & 1;
        }
        else
        {
          v36 = 0;
        }
        itemList = this->fields.itemList;
        if ( DispEntity->fields._size <= v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_29;
        displayedId = saveData->fields.displayedId;
        v40 = *((_QWORD *)&DispEntity->fields._items->obj.klass + v33);
        if ( DispEntity->fields._size <= v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v40 )
          goto LABEL_29;
        if ( !displayedId )
          goto LABEL_29;
        v41 = System_Collections_Generic_List_int___Contains(
                displayedId,
                *(_DWORD *)(v40 + 16),
                (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        v42 = sub_B5D694(EventHeelPortraitListViewItem_TypeInfo);
        ListViewItem___ctor_23901828((ListViewItem_o *)v42, v34, 0LL);
        *(_QWORD *)(v42 + 112) = v40;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v42 + 112),
          (System_Int32_array **)v40,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        *(_BYTE *)(v42 + 120) = v36;
        *(_BYTE *)(v42 + 121) = v41;
        if ( !itemList )
          goto LABEL_29;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( (int)++v33 - 4 < size );
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)this->fields.scrollView;
  if ( !Master_WarQuestSelectionMaster )
LABEL_29:
    sub_B5D69C(Master_WarQuestSelectionMaster, v30);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_WarQuestSelectionMaster, 0LL);
}


void __fastcall EventHeelPortraitListViewManager__DestroyList(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  EventHeelPortraitAssetManager_o *assetManager; // x0
  UnityEngine_Object_o *heelPortraitDetailDialog; // x20
  __int64 v7; // x1
  UnityEngine_Component_o **p_heelPortraitDetailDialog; // x19
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E9F81 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E9F81 = 1;
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
      sub_B5D69C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_heelPortraitDetailDialog = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_heelPortraitDetailDialog, 0LL, v10, v11, v12, v13, v14, v15);
  }
}


EventHeelPortraitListViewManager_HeelPortraitSaveData_o *__fastcall EventHeelPortraitListViewManager__GetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *HeelPortraitDetailDialogState; // x19
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v9; // x19

  if ( (byte_42E9F80 & 1) == 0 )
  {
    sub_B5D5C4(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___,
      v5,
      v6,
      v7);
    byte_42E9F80 = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0LL);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0LL) )
    return UnityEngine_JsonUtility__FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData_(
             HeelPortraitDetailDialogState,
             (const MethodInfo_1E5F018 *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v9 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_B5D694(EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
  EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(v9, 0LL);
  return v9;
}


void __fastcall EventHeelPortraitListViewManager__Init(
        EventHeelPortraitListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *SaveData; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  EventHeelPortraitAssetManager_o *assetManager; // x21
  BattleServantConfConponent_o *p_assetManager; // x20
  EventHeelPortraitAssetManager_o *v34; // x21
  const MethodInfo *v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t v42; // w20
  System_Action_o *v43; // x22
  const MethodInfo *v44; // x3

  if ( (byte_42E9F7C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&EventHeelPortraitAssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__, v9, v10, v11);
    sub_B5D5C4(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo, v12, v13, v14);
    byte_42E9F7C = 1;
  }
  v15 = sub_B5D694(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
  EventHeelPortraitListViewManager___c__DisplayClass7_0___ctor(
    (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_QWORD *)(v15 + 24) = this;
  *(_DWORD *)(v15 + 16) = eventId;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  this->fields.eventId = *(_DWORD *)(v15 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v24);
  this->fields.saveData = SaveData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.saveData,
    (System_Int32_array **)SaveData,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
    v34 = (EventHeelPortraitAssetManager_o *)sub_B5D694(EventHeelPortraitAssetManager_TypeInfo);
    EventHeelPortraitAssetManager___ctor(v34, v35);
    p_assetManager->klass = (BattleServantConfConponent_c *)v34;
    sub_B5D560(p_assetManager, (System_Int32_array **)v34, v36, v37, v38, v39, v40, v41);
    assetManager = (EventHeelPortraitAssetManager_o *)p_assetManager->klass;
  }
  v42 = *(_DWORD *)(v15 + 16);
  v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v15,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_8:
    sub_B5D69C(v16, v17);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v42, v43, v44);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHeelPortraitListViewManager__InitDialog(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *heelPortraitDetailDialog; // x21
  BattleServantConfConponent_o *p_heelPortraitDetailDialog; // x19
  UnityEngine_GameObject_o *klass; // x0
  __int64 v14; // x1
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  UILabel_o *heelPortraitDetailDialog_k__BackingField; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Transform_o *transform; // x20
  int v26; // s0

  if ( (byte_42E9F7E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E9F7E = 1;
  }
  heelPortraitDetailDialog = (UnityEngine_Object_o *)this->fields.heelPortraitDetailDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_heelPortraitDetailDialog = (BattleServantConfConponent_o *)&this->fields.heelPortraitDetailDialog;
  klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(heelPortraitDetailDialog, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
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
    klass = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                          heelPortraitDetailDialog_k__BackingField,
                                          uiRoot,
                                          (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    if ( !klass
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             klass,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___),
          p_heelPortraitDetailDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite,
          sub_B5D560(p_heelPortraitDetailDialog, Component_srcLineSprite, v19, v20, v21, v22, v23, v24),
          (klass = (UnityEngine_GameObject_o *)p_heelPortraitDetailDialog->klass) == 0LL)
      || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL),
          *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL),
          !transform) )
    {
LABEL_17:
      sub_B5D69C(klass, v14);
    }
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
  }
  klass = (UnityEngine_GameObject_o *)p_heelPortraitDetailDialog->klass;
  if ( !p_heelPortraitDetailDialog->klass )
    goto LABEL_17;
  HeelPortraitDetailDialogComponent__Init((HeelPortraitDetailDialogComponent_o *)klass, 0LL);
}


void __fastcall EventHeelPortraitListViewManager__OnClickListView(
        EventHeelPortraitListViewManager_o *this,
        EventHeelPortraitListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x20
  EventHeelPortraitListViewItem_o *Item; // x0
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  EventHeelPortraitListViewItem_o **v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x8
  HeelPortraitEntity_o *v41; // x21
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  System_Action_o *v43; // x22

  if ( (byte_42E9F7F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EventHeelPortraitListViewManager_OnClickListView__, v6, v7, v8);
    sub_B5D5C4(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__, v9, v10, v11);
    sub_B5D5C4(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo, v12, v13, v14);
    byte_42E9F7F = 1;
  }
  v15 = sub_B5D694(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
  EventHeelPortraitListViewManager___c__DisplayClass11_0___ctor(
    (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)v15,
    0LL);
  if ( !v15 )
    goto LABEL_14;
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = obj;
  v24 = (EventHeelPortraitListViewItem_o **)(v15 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)obj, v25, v26, v27, v28, v29, v30);
  Item = *(EventHeelPortraitListViewItem_o **)(v15 + 24);
  if ( !Item )
    goto LABEL_14;
  Item = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v17);
  if ( !Item )
    goto LABEL_14;
  if ( Item->fields._isHavePortrait_k__BackingField )
  {
    v31 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 75) & 2) != 0 )
      v31 = (_QWORD *)sub_B5D5CC(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v32 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v31, v31[3]);
    OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0LL);
    Item = *v24;
    if ( *v24 )
    {
      v33 = (System_Int32_array **)EventHeelPortraitListViewObject__GetItem(
                                     (EventHeelPortraitListViewObject_o *)Item,
                                     v17);
      *(_QWORD *)(v15 + 32) = v33;
      sub_B5D560((BattleServantConfConponent_o *)(v15 + 32), v33, v34, v35, v36, v37, v38, v39);
      v40 = *(_QWORD *)(v15 + 32);
      if ( v40 )
      {
        v41 = *(HeelPortraitEntity_o **)(v40 + 112);
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v43,
          (Il2CppObject *)v15,
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
    sub_B5D69C(Item, v17);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_int__o *v8; // x20

  if ( (byte_42E651C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v5, v6, v7);
    byte_42E651C = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.displayedId = v8;
  sub_B5D560(&this->fields);
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
  int v2; // w2
  __int64 v3; // x3
  EventHeelPortraitListViewItem_o *portraitItem; // x0
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  struct EventHeelPortraitListViewItem_o *v8; // x9
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x9

  if ( (byte_42E651A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    byte_42E651A = 1;
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
    || (v8 = this->fields.portraitItem) == 0LL
    || (Entity_k__BackingField = v8->fields._Entity_k__BackingField) == 0LL
    || (portraitItem = (EventHeelPortraitListViewItem_o *)saveData->fields.displayedId) == 0LL
    || (System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)portraitItem,
          Entity_k__BackingField->fields.id,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__),
        (portraitItem = (EventHeelPortraitListViewItem_o *)this->fields.__4__this) == 0LL)
    || (EventHeelPortraitListViewManager__SetSaveData((EventHeelPortraitListViewManager_o *)portraitItem, 0LL),
        (portraitItem = (EventHeelPortraitListViewItem_o *)this->fields.obj) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(portraitItem, method);
  }
  EventHeelPortraitListViewObject__ClearNewImgSprite((EventHeelPortraitListViewObject_o *)portraitItem, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  EventHeelPortraitListViewManager___c__DisplayClass7_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *bg; // x21

  v4 = this;
  if ( (byte_42E651B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_B5D5C4(&StringLiteral_21797/*"portrait_back"*/, v5, v6, v7);
    byte_42E651B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventId = v4->fields.eventId;
  bg = _4__this->fields.bg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, bg, (System_String_o *)StringLiteral_21797/*"portrait_back"*/, 0LL);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v4->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, 0LL),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(this, method);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, 0LL);
}
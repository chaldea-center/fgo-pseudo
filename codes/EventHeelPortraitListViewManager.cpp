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
  __int64 v12; // x1
  System_Collections_Generic_List_HeelPortraitEntity__o *DispEntity; // x20
  int size; // w27
  __int64 v15; // x28
  unsigned int v16; // w22
  __int64 v17; // x8
  char v18; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  System_Collections_Generic_List_int__o *displayedId; // x25
  __int64 v22; // x24
  bool v23; // w26
  __int64 v24; // x25
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  char v31; // [xsp+4h] [xbp-5Ch]
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_41890E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_HeelPortraitMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_B2C35C(&EventHeelPortraitListViewItem_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__, v10);
    byte_41890E4 = 1;
  }
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  DispEntity = HeelPortraitMaster__GetDispEntity(Master_WarQuestSelectionMaster, this->fields.eventId, 0LL);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)UserHeelPortraitMaster__TryGetEntity(
                                                             (UserHeelPortraitMaster_o *)Master_WarQuestSelectionMaster,
                                                             &entity,
                                                             this->fields.eventId,
                                                             0LL);
  v31 = (char)Master_WarQuestSelectionMaster;
  if ( DispEntity )
  {
    size = DispEntity->fields._size;
    if ( size >= 1 )
    {
      v15 = 4LL;
      do
      {
        v16 = v15 - 4;
        if ( (v31 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( DispEntity->fields._size <= v16 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v17 = *((_QWORD *)&DispEntity->fields._items->obj.klass + v15);
          if ( !v17 )
            goto LABEL_29;
          Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)System_Linq_Enumerable__Contains_int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds,
                                                                     *(_DWORD *)(v17 + 16),
                                                                     (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
          v18 = (unsigned __int8)Master_WarQuestSelectionMaster & 1;
        }
        else
        {
          v18 = 0;
        }
        itemList = this->fields.itemList;
        if ( DispEntity->fields._size <= v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_29;
        displayedId = saveData->fields.displayedId;
        v22 = *((_QWORD *)&DispEntity->fields._items->obj.klass + v15);
        if ( DispEntity->fields._size <= v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v22 )
          goto LABEL_29;
        if ( !displayedId )
          goto LABEL_29;
        v23 = System_Collections_Generic_List_int___Contains(
                displayedId,
                *(_DWORD *)(v22 + 16),
                (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        v24 = sub_B2C42C(EventHeelPortraitListViewItem_TypeInfo);
        ListViewItem___ctor_24128628((ListViewItem_o *)v24, v16, 0LL);
        *(_QWORD *)(v24 + 112) = v22;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v24 + 112),
          (System_Int32_array **)v22,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        *(_BYTE *)(v24 + 120) = v18;
        *(_BYTE *)(v24 + 121) = v23;
        if ( !itemList )
          goto LABEL_29;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( (int)++v15 - 4 < size );
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)this->fields.scrollView;
  if ( !Master_WarQuestSelectionMaster )
LABEL_29:
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_WarQuestSelectionMaster, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_41890E8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41890E8 = 1;
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
      sub_B2C434(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_heelPortraitDetailDialog = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_heelPortraitDetailDialog, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


EventHeelPortraitListViewManager_HeelPortraitSaveData_o *__fastcall EventHeelPortraitListViewManager__GetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *HeelPortraitDetailDialogState; // x19
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v5; // x19

  if ( (byte_41890E7 & 1) == 0 )
  {
    sub_B2C35C(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___, v3);
    byte_41890E7 = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0LL);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0LL) )
    return UnityEngine_JsonUtility__FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData_(
             HeelPortraitDetailDialogState,
             (const MethodInfo_1AADE2C *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v5 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_B2C42C(EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
  EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(v5, 0LL);
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
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
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
  EventHeelPortraitAssetManager_o *assetManager; // x21
  BattleServantConfConponent_o *p_assetManager; // x20
  EventHeelPortraitAssetManager_o *v27; // x21
  const MethodInfo *v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int32_t v35; // w20
  System_Action_o *v36; // x22
  const MethodInfo *v37; // x3

  if ( (byte_41890E3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&EventHeelPortraitAssetManager_TypeInfo, v5);
    sub_B2C35C(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__, v6);
    sub_B2C35C(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo, v7);
    byte_41890E3 = 1;
  }
  v8 = sub_B2C42C(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
  EventHeelPortraitListViewManager___c__DisplayClass7_0___ctor(
    (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 24) = this;
  *(_DWORD *)(v8 + 16) = eventId;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  this->fields.eventId = *(_DWORD *)(v8 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v17);
  this->fields.saveData = SaveData;
  sub_B2C2F8(
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
    v27 = (EventHeelPortraitAssetManager_o *)sub_B2C42C(EventHeelPortraitAssetManager_TypeInfo);
    EventHeelPortraitAssetManager___ctor(v27, v28);
    p_assetManager->klass = (BattleServantConfConponent_c *)v27;
    sub_B2C2F8(p_assetManager, (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
    assetManager = (EventHeelPortraitAssetManager_o *)p_assetManager->klass;
  }
  v35 = *(_DWORD *)(v8 + 16);
  v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v8,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_8:
    sub_B2C434(v9, v10);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v35, v36, v37);
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
  UnityEngine_GameObject_o *klass; // x0
  __int64 v8; // x1
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  UILabel_o *heelPortraitDetailDialog_k__BackingField; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Transform_o *transform; // x20
  int v20; // s0

  if ( (byte_41890E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_41890E5 = 1;
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
                                          (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    if ( !klass
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             klass,
                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___),
          p_heelPortraitDetailDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite,
          sub_B2C2F8(p_heelPortraitDetailDialog, Component_srcLineSprite, v13, v14, v15, v16, v17, v18),
          (klass = (UnityEngine_GameObject_o *)p_heelPortraitDetailDialog->klass) == 0LL)
      || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL),
          *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL),
          !transform) )
    {
LABEL_17:
      sub_B2C434(klass, v8);
    }
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  EventHeelPortraitListViewItem_o *Item; // x0
  const MethodInfo *v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  EventHeelPortraitListViewItem_o **v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x8
  HeelPortraitEntity_o *v34; // x21
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  System_Action_o *v36; // x22

  if ( (byte_41890E6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_EventHeelPortraitListViewManager_OnClickListView__, v5);
    sub_B2C35C(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__, v6);
    sub_B2C35C(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo, v7);
    byte_41890E6 = 1;
  }
  v8 = sub_B2C42C(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
  EventHeelPortraitListViewManager___c__DisplayClass11_0___ctor(
    (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = obj;
  v17 = (EventHeelPortraitListViewItem_o **)(v8 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)obj, v18, v19, v20, v21, v22, v23);
  Item = *(EventHeelPortraitListViewItem_o **)(v8 + 24);
  if ( !Item )
    goto LABEL_14;
  Item = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v10);
  if ( !Item )
    goto LABEL_14;
  if ( Item->fields._isHavePortrait_k__BackingField )
  {
    v24 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 75) & 2) != 0 )
      v24 = (_QWORD *)sub_B2C364(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v25 = (System_Reflection_MethodBase_o *)sub_B2C340(v24, v24[3]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    Item = *v17;
    if ( *v17 )
    {
      v26 = (System_Int32_array **)EventHeelPortraitListViewObject__GetItem(
                                     (EventHeelPortraitListViewObject_o *)Item,
                                     v10);
      *(_QWORD *)(v8 + 32) = v26;
      sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 32), v26, v27, v28, v29, v30, v31, v32);
      v33 = *(_QWORD *)(v8 + 32);
      if ( v33 )
      {
        v34 = *(HeelPortraitEntity_o **)(v33 + 112);
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v36 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v36,
          (Il2CppObject *)v8,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0LL);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, v34, v36, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B2C434(Item, v10);
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

  if ( (byte_4184AE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4184AE9 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.displayedId = v4;
  sub_B2C2F8(&this->fields, v4);
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
  EventHeelPortraitListViewItem_o *portraitItem; // x0
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  struct EventHeelPortraitListViewItem_o *v6; // x9
  struct HeelPortraitEntity_o *Entity_k__BackingField; // x9

  if ( (byte_4184AE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    byte_4184AE7 = 1;
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
    || (portraitItem = (EventHeelPortraitListViewItem_o *)saveData->fields.displayedId) == 0LL
    || (System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)portraitItem,
          Entity_k__BackingField->fields.id,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__),
        (portraitItem = (EventHeelPortraitListViewItem_o *)this->fields.__4__this) == 0LL)
    || (EventHeelPortraitListViewManager__SetSaveData((EventHeelPortraitListViewManager_o *)portraitItem, 0LL),
        (portraitItem = (EventHeelPortraitListViewItem_o *)this->fields.obj) == 0LL) )
  {
LABEL_13:
    sub_B2C434(portraitItem, method);
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
  EventHeelPortraitListViewManager___c__DisplayClass7_0_o *v2; // x19
  __int64 v3; // x1
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *bg; // x21

  v2 = this;
  if ( (byte_4184AE8 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_B2C35C(&StringLiteral_21508/*"portrait_back"*/, v3);
    byte_4184AE8 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventId = v2->fields.eventId;
  bg = _4__this->fields.bg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, bg, (System_String_o *)StringLiteral_21508/*"portrait_back"*/, 0LL);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, 0LL),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B2C434(this, method);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, 0LL);
}
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
  int size; // w27
  __int64 v14; // x28
  unsigned int v15; // w22
  __int64 v16; // x8
  char v17; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  System_Collections_Generic_List_int__o *displayedId; // x25
  __int64 v21; // x24
  bool v22; // w26
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x25
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  char v32; // [xsp+4h] [xbp-5Ch]
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42161D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_HeelPortraitMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserHeelPortraitMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_B0D8A4(&EventHeelPortraitListViewItem_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__, v10);
    byte_42161D4 = 1;
  }
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  DispEntity = HeelPortraitMaster__GetDispEntity(Master_WarQuestSelectionMaster, this->fields.eventId, 0LL);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)UserHeelPortraitMaster__TryGetEntity(
                                                             (UserHeelPortraitMaster_o *)Master_WarQuestSelectionMaster,
                                                             &entity,
                                                             this->fields.eventId,
                                                             0LL);
  v32 = (char)Master_WarQuestSelectionMaster;
  if ( DispEntity )
  {
    size = DispEntity->fields._size;
    if ( size >= 1 )
    {
      v14 = 4LL;
      do
      {
        v15 = v14 - 4;
        if ( (v32 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( DispEntity->fields._size <= v15 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v16 = *((_QWORD *)&DispEntity->fields._items->obj.klass + v14);
          if ( !v16 )
            goto LABEL_29;
          Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)System_Linq_Enumerable__Contains_int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds,
                                                                     *(_DWORD *)(v16 + 16),
                                                                     (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
          v17 = (unsigned __int8)Master_WarQuestSelectionMaster & 1;
        }
        else
        {
          v17 = 0;
        }
        itemList = this->fields.itemList;
        if ( DispEntity->fields._size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_29;
        displayedId = saveData->fields.displayedId;
        v21 = *((_QWORD *)&DispEntity->fields._items->obj.klass + v14);
        if ( DispEntity->fields._size <= v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v21 )
          goto LABEL_29;
        if ( !displayedId )
          goto LABEL_29;
        v22 = System_Collections_Generic_List_int___Contains(
                displayedId,
                *(_DWORD *)(v21 + 16),
                (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
        v25 = sub_B0D974(EventHeelPortraitListViewItem_TypeInfo, v23, v24);
        ListViewItem___ctor_23700744((ListViewItem_o *)v25, v15, 0LL);
        *(_QWORD *)(v25 + 112) = v21;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v25 + 112),
          (System_Int32_array **)v21,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        *(_BYTE *)(v25 + 120) = v17;
        *(_BYTE *)(v25 + 121) = v22;
        if ( !itemList )
          goto LABEL_29;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( (int)++v14 - 4 < size );
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)this->fields.scrollView;
  if ( !Master_WarQuestSelectionMaster )
LABEL_29:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  UIScrollView__ResetPosition((UIScrollView_o *)Master_WarQuestSelectionMaster, 0LL);
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

  if ( (byte_42161D8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42161D8 = 1;
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
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_heelPortraitDetailDialog = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_heelPortraitDetailDialog, 0LL, v8, v9, v10, v11, v12, v13);
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
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v7; // x19

  if ( (byte_42161D7 & 1) == 0 )
  {
    sub_B0D8A4(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___, v3);
    byte_42161D7 = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0LL);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0LL) )
    return UnityEngine_JsonUtility__FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData_(
             HeelPortraitDetailDialogState,
             (const MethodInfo_1B690F8 *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v7 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_B0D974(
                                                                    EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo,
                                                                    v5,
                                                                    v6);
  EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(v7, 0LL);
  return v7;
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *SaveData; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  EventHeelPortraitAssetManager_o *assetManager; // x21
  BattleServantConfConponent_o *p_assetManager; // x20
  EventHeelPortraitAssetManager_o *v28; // x21
  const MethodInfo *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t v36; // w20
  System_Action_o *v37; // x22
  const MethodInfo *v38; // x3

  if ( (byte_42161D3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&EventHeelPortraitAssetManager_TypeInfo, v5);
    sub_B0D8A4(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__, v6);
    sub_B0D8A4(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo, v7);
    byte_42161D3 = 1;
  }
  v8 = sub_B0D974(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&eventId, method);
  EventHeelPortraitListViewManager___c__DisplayClass7_0___ctor(
    (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 24) = this;
  *(_DWORD *)(v8 + 16) = eventId;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  this->fields.eventId = *(_DWORD *)(v8 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v16);
  this->fields.saveData = SaveData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.saveData,
    (System_Int32_array **)SaveData,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
    v28 = (EventHeelPortraitAssetManager_o *)sub_B0D974(EventHeelPortraitAssetManager_TypeInfo, v24, v25);
    EventHeelPortraitAssetManager___ctor(v28, v29);
    p_assetManager->klass = (BattleServantConfConponent_c *)v28;
    sub_B0D840(p_assetManager, (System_Int32_array **)v28, v30, v31, v32, v33, v34, v35);
    assetManager = (EventHeelPortraitAssetManager_o *)p_assetManager->klass;
  }
  v36 = *(_DWORD *)(v8 + 16);
  v37 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v8,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_8:
    sub_B0D97C(v9);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v36, v37, v38);
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
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  UILabel_o *heelPortraitDetailDialog_k__BackingField; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Transform_o *transform; // x20
  int v19; // s0

  if ( (byte_42161D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_42161D5 = 1;
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
                                          (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
    if ( !klass
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             klass,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___),
          p_heelPortraitDetailDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite,
          sub_B0D840(p_heelPortraitDetailDialog, Component_srcLineSprite, v12, v13, v14, v15, v16, v17),
          (klass = (UnityEngine_GameObject_o *)p_heelPortraitDetailDialog->klass) == 0LL)
      || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL),
          *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Vector3__get_one(0LL),
          !transform) )
    {
LABEL_17:
      sub_B0D97C(klass);
    }
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  EventHeelPortraitListViewItem_o **v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x1
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x8
  HeelPortraitEntity_o *v37; // x21
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  System_Action_o *v39; // x22

  if ( (byte_42161D6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&Method_EventHeelPortraitListViewManager_OnClickListView__, v5);
    sub_B0D8A4(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__, v6);
    sub_B0D8A4(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo, v7);
    byte_42161D6 = 1;
  }
  v8 = sub_B0D974(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo, obj, method);
  EventHeelPortraitListViewManager___c__DisplayClass11_0___ctor(
    (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 24) = obj;
  v16 = (EventHeelPortraitListViewItem_o **)(v8 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)obj, v17, v18, v19, v20, v21, v22);
  Item = *(EventHeelPortraitListViewItem_o **)(v8 + 24);
  if ( !Item )
    goto LABEL_14;
  Item = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v23);
  if ( !Item )
    goto LABEL_14;
  if ( Item->fields._isHavePortrait_k__BackingField )
  {
    v24 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 75) & 2) != 0 )
      v24 = (_QWORD *)sub_B0D8AC(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v25 = (System_Reflection_MethodBase_o *)sub_B0D888(v24, v24[3]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0LL);
    Item = *v16;
    if ( *v16 )
    {
      v27 = (System_Int32_array **)EventHeelPortraitListViewObject__GetItem(
                                     (EventHeelPortraitListViewObject_o *)Item,
                                     v26);
      *(_QWORD *)(v8 + 32) = v27;
      sub_B0D840((BattleServantConfConponent_o *)(v8 + 32), v27, v28, v29, v30, v31, v32, v33);
      v36 = *(_QWORD *)(v8 + 32);
      if ( v36 )
      {
        v37 = *(HeelPortraitEntity_o **)(v36 + 112);
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v39 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v34, v35);
        System_Action___ctor(
          v39,
          (Il2CppObject *)v8,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0LL);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, v37, v39, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B0D97C(Item);
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
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20

  if ( (byte_4211B48 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_4211B48 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.displayedId = v5;
  sub_B0D840(&this->fields, v5);
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

  if ( (byte_4211B46 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    byte_4211B46 = 1;
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
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__),
        (portraitItem = (EventHeelPortraitListViewItem_o *)this->fields.__4__this) == 0LL)
    || (EventHeelPortraitListViewManager__SetSaveData((EventHeelPortraitListViewManager_o *)portraitItem, 0LL),
        (portraitItem = (EventHeelPortraitListViewItem_o *)this->fields.obj) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(portraitItem);
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
  if ( (byte_4211B47 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_B0D8A4(&StringLiteral_21578/*"portrait_back"*/, v3);
    byte_4211B47 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventId = v2->fields.eventId;
  bg = _4__this->fields.bg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_27921852(eventId, bg, (System_String_o *)StringLiteral_21578/*"portrait_back"*/, 0LL);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, 0LL),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, 0LL);
}
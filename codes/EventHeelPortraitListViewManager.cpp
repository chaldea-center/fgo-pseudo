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
  HeelPortraitMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_HeelPortraitEntity__o *DispEntity; // x20
  int size; // w27
  __int64 v7; // x28
  unsigned int v8; // w22
  __int64 v9; // x8
  char v10; // w21
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *saveData; // x8
  System_Collections_Generic_List_int__o *displayedId; // x25
  __int64 v14; // x24
  bool v15; // w26
  __int64 v16; // x25
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  char v23; // [xsp+4h] [xbp-5Ch]
  UserHeelPortraitEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438CBF7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_HeelPortraitMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserHeelPortraitMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&EventHeelPortraitListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_HeelPortraitEntity__get_Item__);
    byte_438CBF7 = 1;
  }
  entity = 0LL;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_HeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  DispEntity = HeelPortraitMaster__GetDispEntity(Master_WarQuestSelectionMaster, this->fields.eventId, 0LL);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserHeelPortraitMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)UserHeelPortraitMaster__TryGetEntity(
                                                             (UserHeelPortraitMaster_o *)Master_WarQuestSelectionMaster,
                                                             &entity,
                                                             this->fields.eventId,
                                                             0LL);
  v23 = (char)Master_WarQuestSelectionMaster;
  if ( DispEntity )
  {
    size = DispEntity->fields._size;
    if ( size >= 1 )
    {
      v7 = 4LL;
      do
      {
        v8 = v7 - 4;
        if ( (v23 & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_29;
          if ( DispEntity->fields._size <= v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v9 = *((_QWORD *)&DispEntity->fields._items->obj.klass + v7);
          if ( !v9 )
            goto LABEL_29;
          Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)System_Linq_Enumerable__Contains_int_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)entity->fields.heelPortraitIds,
                                                                     *(_DWORD *)(v9 + 16),
                                                                     (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
          v10 = (unsigned __int8)Master_WarQuestSelectionMaster & 1;
        }
        else
        {
          v10 = 0;
        }
        itemList = this->fields.itemList;
        if ( DispEntity->fields._size <= v8 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        saveData = this->fields.saveData;
        if ( !saveData )
          goto LABEL_29;
        displayedId = saveData->fields.displayedId;
        v14 = *((_QWORD *)&DispEntity->fields._items->obj.klass + v7);
        if ( DispEntity->fields._size <= v8 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        if ( !v14 )
          goto LABEL_29;
        if ( !displayedId )
          goto LABEL_29;
        v15 = System_Collections_Generic_List_int___Contains(
                displayedId,
                *(_DWORD *)(v14 + 16),
                (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
        v16 = sub_B77694(EventHeelPortraitListViewItem_TypeInfo);
        ListViewItem___ctor_24167012((ListViewItem_o *)v16, v8, 0LL);
        *(_QWORD *)(v16 + 112) = v14;
        sub_B77560(
          (BattleServantConfConponent_o *)(v16 + 112),
          (System_Int32_array **)v14,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
        *(_BYTE *)(v16 + 120) = v10;
        *(_BYTE *)(v16 + 121) = v15;
        if ( !itemList )
          goto LABEL_29;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      }
      while ( (int)++v7 - 4 < size );
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  Master_WarQuestSelectionMaster = (HeelPortraitMaster_o *)this->fields.scrollView;
  if ( !Master_WarQuestSelectionMaster )
LABEL_29:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
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

  if ( (byte_438CBFB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CBFB = 1;
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
      sub_B7769C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_heelPortraitDetailDialog, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
    *p_heelPortraitDetailDialog = 0LL;
    sub_B77560((BattleServantConfConponent_o *)p_heelPortraitDetailDialog, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


EventHeelPortraitListViewManager_HeelPortraitSaveData_o *__fastcall EventHeelPortraitListViewManager__GetSaveData(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_o *HeelPortraitDetailDialogState; // x19
  EventHeelPortraitListViewManager_HeelPortraitSaveData_o *v4; // x19

  if ( (byte_438CBFA & 1) == 0 )
  {
    sub_B775C4(&EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
    sub_B775C4(&Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
    byte_438CBFA = 1;
  }
  HeelPortraitDetailDialogState = EventRewardSaveData__GetHeelPortraitDetailDialogState(this->fields.eventId, 0LL);
  if ( !System_String__IsNullOrEmpty(HeelPortraitDetailDialogState, 0LL) )
    return UnityEngine_JsonUtility__FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData_(
             HeelPortraitDetailDialogState,
             (const MethodInfo_1DF2514 *)Method_UnityEngine_JsonUtility_FromJson_EventHeelPortraitListViewManager_HeelPortraitSaveData___);
  v4 = (EventHeelPortraitListViewManager_HeelPortraitSaveData_o *)sub_B77694(EventHeelPortraitListViewManager_HeelPortraitSaveData_TypeInfo);
  EventHeelPortraitListViewManager_HeelPortraitSaveData___ctor(v4, 0LL);
  return v4;
}


void __fastcall EventHeelPortraitListViewManager__Init(
        EventHeelPortraitListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  struct EventHeelPortraitListViewManager_HeelPortraitSaveData_o *SaveData; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  EventHeelPortraitAssetManager_o *assetManager; // x21
  BattleServantConfConponent_o *p_assetManager; // x20
  EventHeelPortraitAssetManager_o *v24; // x21
  const MethodInfo *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t v32; // w20
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x3

  if ( (byte_438CBF6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&EventHeelPortraitAssetManager_TypeInfo);
    sub_B775C4(&Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__);
    sub_B775C4(&EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
    byte_438CBF6 = 1;
  }
  v5 = sub_B77694(EventHeelPortraitListViewManager___c__DisplayClass7_0_TypeInfo);
  EventHeelPortraitListViewManager___c__DisplayClass7_0___ctor(
    (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_DWORD *)(v5 + 16) = eventId;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  this->fields.eventId = *(_DWORD *)(v5 + 16);
  SaveData = EventHeelPortraitListViewManager__GetSaveData(this, v14);
  this->fields.saveData = SaveData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.saveData,
    (System_Int32_array **)SaveData,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  assetManager = this->fields.assetManager;
  if ( !assetManager )
  {
    p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
    v24 = (EventHeelPortraitAssetManager_o *)sub_B77694(EventHeelPortraitAssetManager_TypeInfo);
    EventHeelPortraitAssetManager___ctor(v24, v25);
    p_assetManager->klass = (BattleServantConfConponent_c *)v24;
    sub_B77560(p_assetManager, (System_Int32_array **)v24, v26, v27, v28, v29, v30, v31);
    assetManager = (EventHeelPortraitAssetManager_o *)p_assetManager->klass;
  }
  v32 = *(_DWORD *)(v5 + 16);
  v33 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_EventHeelPortraitListViewManager___c__DisplayClass7_0__Init_b__0__,
    0LL);
  if ( !assetManager )
LABEL_8:
    sub_B7769C(v6, v7);
  EventHeelPortraitAssetManager__GetAssets(assetManager, v32, v33, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventHeelPortraitListViewManager__InitDialog(
        EventHeelPortraitListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *heelPortraitDetailDialog; // x21
  BattleServantConfConponent_o *p_heelPortraitDetailDialog; // x19
  UnityEngine_GameObject_o *klass; // x0
  __int64 v6; // x1
  struct EventHeelPortraitAssetManager_o *assetManager; // x8
  UILabel_o *heelPortraitDetailDialog_k__BackingField; // x21
  UnityEngine_Transform_o *uiRoot; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0

  if ( (byte_438CBF8 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CBF8 = 1;
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
                                          (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    if ( !klass
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             klass,
                                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_HeelPortraitDetailDialogComponent___),
          p_heelPortraitDetailDialog->klass = (BattleServantConfConponent_c *)Component_srcLineSprite,
          sub_B77560(p_heelPortraitDetailDialog, Component_srcLineSprite, v11, v12, v13, v14, v15, v16),
          (klass = (UnityEngine_GameObject_o *)p_heelPortraitDetailDialog->klass) == 0LL)
      || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL),
          *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL),
          !transform) )
    {
LABEL_17:
      sub_B7769C(klass, v6);
    }
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
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
  __int64 v5; // x20
  EventHeelPortraitListViewItem_o *Item; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  EventHeelPortraitListViewItem_o **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x8
  HeelPortraitEntity_o *v31; // x21
  HeelPortraitDetailDialogComponent_o *heelPortraitDetailDialog; // x19
  System_Action_o *v33; // x22

  if ( (byte_438CBF9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventHeelPortraitListViewManager_OnClickListView__);
    sub_B775C4(&Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__);
    sub_B775C4(&EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
    byte_438CBF9 = 1;
  }
  v5 = sub_B77694(EventHeelPortraitListViewManager___c__DisplayClass11_0_TypeInfo);
  EventHeelPortraitListViewManager___c__DisplayClass11_0___ctor(
    (EventHeelPortraitListViewManager___c__DisplayClass11_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = obj;
  v14 = (EventHeelPortraitListViewItem_o **)(v5 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)obj, v15, v16, v17, v18, v19, v20);
  Item = *(EventHeelPortraitListViewItem_o **)(v5 + 24);
  if ( !Item )
    goto LABEL_14;
  Item = EventHeelPortraitListViewObject__GetItem((EventHeelPortraitListViewObject_o *)Item, v7);
  if ( !Item )
    goto LABEL_14;
  if ( Item->fields._isHavePortrait_k__BackingField )
  {
    v21 = Method_EventHeelPortraitListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_EventHeelPortraitListViewManager_OnClickListView__ + 75) & 2) != 0 )
      v21 = (_QWORD *)sub_B775CC(Method_EventHeelPortraitListViewManager_OnClickListView__);
    v22 = (System_Reflection_MethodBase_o *)sub_B775A8(v21, v21[3]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
    Item = *v14;
    if ( *v14 )
    {
      v23 = (System_Int32_array **)EventHeelPortraitListViewObject__GetItem(
                                     (EventHeelPortraitListViewObject_o *)Item,
                                     v7);
      *(_QWORD *)(v5 + 32) = v23;
      sub_B77560((BattleServantConfConponent_o *)(v5 + 32), v23, v24, v25, v26, v27, v28, v29);
      v30 = *(_QWORD *)(v5 + 32);
      if ( v30 )
      {
        v31 = *(HeelPortraitEntity_o **)(v30 + 112);
        heelPortraitDetailDialog = this->fields.heelPortraitDetailDialog;
        v33 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(
          v33,
          (Il2CppObject *)v5,
          Method_EventHeelPortraitListViewManager___c__DisplayClass11_0__OnClickListView_b__0__,
          0LL);
        if ( heelPortraitDetailDialog )
        {
          HeelPortraitDetailDialogComponent__Open(heelPortraitDetailDialog, v31, v33, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B7769C(Item, v7);
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

  if ( (byte_4388648 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4388648 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.displayedId = v3;
  sub_B77560(&this->fields);
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

  if ( (byte_4388646 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    byte_4388646 = 1;
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
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__),
        (portraitItem = (EventHeelPortraitListViewItem_o *)this->fields.__4__this) == 0LL)
    || (EventHeelPortraitListViewManager__SetSaveData((EventHeelPortraitListViewManager_o *)portraitItem, 0LL),
        (portraitItem = (EventHeelPortraitListViewItem_o *)this->fields.obj) == 0LL) )
  {
LABEL_13:
    sub_B7769C(portraitItem, method);
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
  struct EventHeelPortraitListViewManager_o *_4__this; // x8
  int32_t eventId; // w20
  UISprite_o *bg; // x21

  v2 = this;
  if ( (byte_4388647 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)sub_B775C4(&StringLiteral_21962/*"portrait_back"*/);
    byte_4388647 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  eventId = v2->fields.eventId;
  bg = _4__this->fields.bg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_24479740(eventId, bg, (System_String_o *)StringLiteral_21962/*"portrait_back"*/, 0LL);
  this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this;
  if ( !this
    || (EventHeelPortraitListViewManager__CreateList((EventHeelPortraitListViewManager_o *)this, 0LL),
        (this = (EventHeelPortraitListViewManager___c__DisplayClass7_0_o *)v2->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B7769C(this, method);
  }
  EventHeelPortraitListViewManager__InitDialog((EventHeelPortraitListViewManager_o *)this, 0LL);
}
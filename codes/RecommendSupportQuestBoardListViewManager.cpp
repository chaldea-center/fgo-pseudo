void RecommendSupportQuestBoardListViewManager___ctor(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.slideOutPosX = 784.0;
  *(_QWORD *)&this->fields.warArrangementPitchY = 0xFFFFFF69FFFFFF8ALL;
  *(_QWORD *)&this->fields.intoTime = 0x3E8000003F000000LL;
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void RecommendSupportQuestBoardListViewManager__CreateChapterList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfos,
        int32_t parentFolderWarId,
        int32_t focusWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v10; // x20
  WarEntity_o *Item; // x0
  __int64 v12; // x1
  int32_t size; // w29
  RecommendSupportQuestBoardListViewManager___c_c *v14; // x0
  System_Comparison_T__o *_9__22_0; // x24
  Il2CppObject *v16; // x25
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *settingQuestInfo; // x8
  struct WarEntity_o *warEntity; // x8
  int32_t id; // w1
  System_Nullable_int__o v23; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v24; // x8
  __int64 v25; // x19
  int32_t PrioredParentId; // w1
  System_Nullable_int__o v27; // x0
  int32_t v28; // w24
  __int64 v29; // x8
  char v30; // w27
  __int64 v31; // x8
  System_Collections_Generic_List_object__o *itemList; // x25
  RecommendSupportQuestBoardListViewManager_o *v33; // x21
  Il2CppObject *v34; // x28
  RecommendSupportQuestBoardListViewItem_o *v35; // x26
  const MethodInfo *v36; // x7
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  int32_t v43; // w1
  const MethodInfo *v44; // x2
  UnityEngine_Object_o *scrollBar; // x23
  struct UIScrollBar_o *v46; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v47; // x23
  System_Predicate_object__o *v48; // x24
  Il2CppObject *v49; // x0
  int32_t warId; // [xsp+1Ch] [xbp-84h]
  __int64 v52; // [xsp+28h] [xbp-78h]
  __int64 v53; // [xsp+30h] [xbp-70h] BYREF
  int32_t kind; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4C52C49 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    sub_1C3E564(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_int___ctor__);
    sub_1C3E564(&Method_System_Nullable_int__get_HasValue__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C3E564(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_15205/*"UpdateScrollPosition"*/);
    byte_4C52C49 = 1;
  }
  kind = 0;
  v10 = sub_1C3E7B0(RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_56;
  *(_DWORD *)(v10 + 16) = focusWarId;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.warArrangementPitchY, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( folderInfos )
  {
    size = folderInfos->fields._size;
    if ( size >= 2 )
    {
      v14 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v14 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v14->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v16,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__,
          0);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__22_0;
        sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v18, v19);
      }
      System_Collections_Generic_List_object___Sort_58421028(
        (System_Collections_Generic_List_object__o *)folderInfos,
        _9__22_0,
        (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
    }
  }
  else
  {
    size = 0;
  }
  settingQuestInfo = this->fields.settingQuestInfo;
  warId = parentFolderWarId;
  if ( !settingQuestInfo )
  {
    v25 = 0;
LABEL_20:
    v52 = 0;
    goto LABEL_21;
  }
  warEntity = settingQuestInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_56;
  id = warEntity->fields.id;
  v23 = (System_Nullable_int__o)&v53;
  v53 = 0;
  System_Nullable_int____ctor(v23, id, (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
  v24 = this->fields.settingQuestInfo;
  v25 = v53;
  if ( !v24 )
    goto LABEL_20;
  Item = v24->fields.warEntity;
  if ( !Item )
    goto LABEL_56;
  PrioredParentId = WarEntity__GetPrioredParentId(Item, 0);
  v27 = (System_Nullable_int__o)&v53;
  v53 = 0;
  System_Nullable_int____ctor(v27, PrioredParentId, (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
  v52 = v53;
LABEL_21:
  if ( size >= 1 )
  {
    if ( folderInfos )
    {
      v28 = 0;
      while ( 1 )
      {
        Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)folderInfos,
                                v28,
                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        if ( !Item )
          break;
        v29 = *(_QWORD *)&Item->fields.id;
        if ( !v29 )
          break;
        if ( (_BYTE)v25 && *(_DWORD *)(v29 + 16) == HIDWORD(v25) )
        {
          v30 = 1;
        }
        else
        {
          Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)folderInfos,
                                  v28,
                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( !Item )
            break;
          v31 = *(_QWORD *)&Item->fields.id;
          if ( !v31 )
            break;
          v30 = (unsigned __int8)v52 != 0 && *(_DWORD *)(v31 + 16) == HIDWORD(v52);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v33 = this;
        v34 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)folderInfos,
                v28,
                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        v35 = (RecommendSupportQuestBoardListViewItem_o *)sub_1C3E7B0(RecommendSupportQuestBoardListViewItem_TypeInfo);
        RecommendSupportQuestBoardListViewItem___ctor(
          v35,
          v28,
          (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)v34,
          0,
          v30,
          -1,
          (System_String_o *)StringLiteral_1/*""*/,
          v36);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v40 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v41 = itemList->fields._size;
        if ( (unsigned int)v41 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v35,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + v41;
          itemList->fields._size = v41 + 1;
          v42[4] = (Il2CppClass *)v35;
          sub_1C3E508((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v35, v37, v38);
        }
        ++v28;
        this = v33;
        if ( size == v28 )
          goto LABEL_38;
      }
    }
LABEL_56:
    sub_1C3E7C0(Item, v12);
  }
LABEL_38:
  Item = (WarEntity_o *)this->fields.titleInfo;
  if ( !Item )
    goto LABEL_56;
  Item = (WarEntity_o *)TitleInfoControl__TryGetTerminalTitleKind((TitleInfoControl_o *)Item, warId, &kind, 0);
  if ( !this->fields.titleInfo )
    goto LABEL_56;
  if ( ((unsigned __int8)Item & 1) != 0 )
    v43 = kind;
  else
    v43 = 94;
  TitleInfoControl__setTitleImg(this->fields.titleInfo, v43, 0, 0, 0);
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, warId, v44);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    Item = (WarEntity_o *)this->fields.scrollBar;
    if ( !Item )
      goto LABEL_56;
    Item = (WarEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
    if ( !Item )
      goto LABEL_56;
    Item = (WarEntity_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Item, 0);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      v46 = this->fields.scrollBar;
      if ( !v46 )
        goto LABEL_56;
      if ( v46->fields.mSize <= 0.98 )
      {
        v47 = this->fields.itemList;
        v48 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v48,
          (Il2CppObject *)v10,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__,
          0);
        if ( !v47 )
          goto LABEL_56;
        v49 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v47,
                (System_Predicate_T__o *)v48,
                (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v49 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v49[1].klass), 0);
      }
    }
  }
  Item = (WarEntity_o *)this->fields.selectMenuBackBtn;
  if ( !Item )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, warId != 0, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15205/*"UpdateScrollPosition"*/, 0.0, 0);
  ActionExtensions__Call(callBack, 0);
}


void RecommendSupportQuestBoardListViewManager__CreateQuestList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questInfos,
        int32_t parentFolderWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int32_t size; // w21
  System_Collections_Generic_List_TSource__o *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x23
  RecommendSupportQuestBoardListViewManager___c_c *v10; // x0
  System_Func_object__int__o *_9__23_0; // x23
  Il2CppObject *v12; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v17; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x22
  System_Func_object__int__o *_9__23_1; // x23
  Il2CppObject *v20; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v25; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x22
  System_Func_object__int__o *_9__23_2; // x23
  Il2CppObject *v28; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // w22
  void *Instance; // x0
  __int64 v35; // x1
  RecommendSupportData_o *v36; // x24
  __int64 v37; // x8
  int32_t v38; // w25
  bool IsQuestSetting; // w0
  System_Collections_Generic_List_object__o *itemList; // x24
  bool v41; // w26
  RecommendSupportQuestBoardListViewManager_o *v42; // x27
  Il2CppObject *Item; // x0
  int32_t v44; // w19
  System_String_o *v45; // x28
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v46; // x29
  RecommendSupportQuestBoardListViewItem_o *v47; // x25
  const MethodInfo *v48; // x7
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  System_Collections_ICollection_o *v55; // x22
  const MethodInfo *v56; // x2
  TitleInfoControl_o *titleInfo; // x22
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v59; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v60; // x21
  System_Predicate_object__o *v61; // x22
  Il2CppObject *v62; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x0
  System_String_o *svtName; // [xsp+10h] [xbp-70h] BYREF
  int32_t settingIndex[2]; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C52C4A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_MapMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C3E564(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C3E564(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_1C3E564(&StringLiteral_15205/*"UpdateScrollPosition"*/);
    byte_4C52C4A = 1;
  }
  svtName = 0;
  *(_QWORD *)settingIndex = 0;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.questArrangementPitchY, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( questInfos )
  {
    size = questInfos->fields._size;
    v8 = System_Linq_Enumerable__ToList_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
           (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    if ( size >= 3 )
    {
      v10 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v10 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_0 = (System_Func_object__int__o *)v10->static_fields->__9__23_0;
      if ( !_9__23_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__23_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_0,
          v12,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__,
          0);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__23_0 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_0;
        sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v14, v15);
      }
      v16 = System_Linq_Enumerable__OrderByDescending_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
              (System_Func_TSource__TKey__o *)_9__23_0,
              (const MethodInfo_3129820 *)Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v17 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v18 = v16;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v17 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_1 = (System_Func_object__int__o *)v17->static_fields->__9__23_1;
      if ( !_9__23_1 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v17->static_fields->__9;
        _9__23_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_1,
          v20,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__,
          0);
        v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v21->__9__23_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_1;
        sub_1C3E508((CGThumbnailListItem_o *)&v21->__9__23_1, (int32_t)_9__23_1, v22, v23);
      }
      v24 = System_Linq_Enumerable__ThenBy_object__int_(
              v18,
              (System_Func_TSource__TKey__o *)_9__23_1,
              (const MethodInfo_313834C *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v25 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v26 = v24;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v25 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_2 = (System_Func_object__int__o *)v25->static_fields->__9__23_2;
      if ( !_9__23_2 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v25->static_fields->__9;
        _9__23_2 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_2,
          v28,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__,
          0);
        v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v29->__9__23_2 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_2;
        sub_1C3E508((CGThumbnailListItem_o *)&v29->__9__23_2, (int32_t)_9__23_2, v30, v31);
      }
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                   v26,
                                                                   (System_Func_TSource__TKey__o *)_9__23_2,
                                                                   (const MethodInfo_313834C *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v9 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v32,
                                                          (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    }
    else
    {
      v9 = (System_Collections_Generic_List_object__o *)v8;
      if ( size < 1 )
        goto LABEL_39;
    }
    v33 = 0;
    do
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v9 )
        goto LABEL_71;
      v36 = (RecommendSupportData_o *)*((_QWORD *)Instance + 14);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v33,
                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      v37 = *((_QWORD *)Instance + 2);
      if ( !v37 )
        goto LABEL_71;
      v38 = *(_DWORD *)(v37 + 16);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v33,
                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v36 )
        goto LABEL_71;
      IsQuestSetting = RecommendSupportData__TryGetIsQuestSetting(
                         v36,
                         v38,
                         *((_DWORD *)Instance + 10),
                         settingIndex,
                         &svtName,
                         0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v41 = IsQuestSetting;
      v42 = this;
      Item = System_Collections_Generic_List_object___get_Item(
               v9,
               v33,
               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      v44 = settingIndex[0];
      v45 = svtName;
      v46 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)Item;
      v47 = (RecommendSupportQuestBoardListViewItem_o *)sub_1C3E7B0(RecommendSupportQuestBoardListViewItem_TypeInfo);
      RecommendSupportQuestBoardListViewItem___ctor(v47, v33, 0, v46, v41, v44, v45, v48);
      if ( !itemList )
        goto LABEL_71;
      items = itemList->fields._items;
      v52 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_71;
      v53 = itemList->fields._size;
      this = v42;
      if ( (unsigned int)v53 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v47,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + v53;
        itemList->fields._size = v53 + 1;
        v54[4] = (Il2CppClass *)v47;
        sub_1C3E508((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v47, v49, v50);
      }
    }
    while ( size != ++v33 );
  }
LABEL_39:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = MapMaster__getList((MapMaster_o *)Instance, parentFolderWarId, 0);
  if ( !this->fields.titleInfo )
    goto LABEL_71;
  v55 = (System_Collections_ICollection_o *)Instance;
  if ( TitleInfoControl__TryGetTerminalTitleKind(this->fields.titleInfo, parentFolderWarId, &settingIndex[1], 0) )
  {
    Instance = this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_71;
    TitleInfoControl__setTitleImg((TitleInfoControl_o *)Instance, settingIndex[1], 0, 0, 0);
  }
  else
  {
    Instance = (void *)BasicHelper__IsNullOrEmpty(v55, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v55 )
        goto LABEL_71;
      if ( !LODWORD(v55[1].monitor) )
        sub_1C3E7C8(Instance, v35);
      Instance = v55[2].klass;
      if ( !Instance )
        goto LABEL_71;
      titleInfo = this->fields.titleInfo;
      Instance = (void *)MapEntity__GetPrioredHeaderId((MapEntity_o *)Instance, 0, 0, 0);
      if ( !titleInfo )
        goto LABEL_71;
      TitleInfoControl__setTitleImgFromBanner(titleInfo, (int32_t)Instance, 0, 1, 0, 0);
    }
  }
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, parentFolderWarId, v56);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    Instance = this->fields.scrollBar;
    if ( !Instance )
      goto LABEL_71;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_71;
    Instance = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v59 = this->fields.scrollBar;
      if ( !v59 )
        goto LABEL_71;
      if ( v59->fields.mSize <= 0.98 )
      {
        v60 = this->fields.itemList;
        Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
          Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v61 = *(System_Predicate_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
        if ( !v61 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          }
          v62 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v61 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_ListViewItem__TypeInfo);
          System_Predicate_object____ctor(
            v61,
            v62,
            Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__,
            0);
          v63 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
          v63->__9__23_3 = (struct System_Predicate_ListViewItem__o *)v61;
          sub_1C3E508((CGThumbnailListItem_o *)&v63->__9__23_3, (int32_t)v61, v64, v65);
        }
        if ( v60 )
        {
          v66 = System_Collections_Generic_List_object___Find(
                  (System_Collections_Generic_List_object__o *)v60,
                  (System_Predicate_T__o *)v61,
                  (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
          if ( v66 )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v66[1].klass), 0);
          goto LABEL_69;
        }
LABEL_71:
        sub_1C3E7C0(Instance, v35);
      }
    }
  }
LABEL_69:
  Instance = this->fields.selectMenuBackBtn;
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15205/*"UpdateScrollPosition"*/, 0.0, 0);
  ActionExtensions__Call(callBack, 0);
}


void RecommendSupportQuestBoardListViewManager__DispFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo,
        int32_t warId,
        int32_t focusWarId,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v17; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v20; // s9
  System_Action_o *v21; // x19

  if ( (byte_4C52C4C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo);
    byte_4C52C4C = 1;
  }
  v9 = sub_1C3E7B0(RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = folderInfo;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)folderInfo, v14, v15);
  *(_DWORD *)(v9 + 32) = warId;
  *(_DWORD *)(v9 + 36) = focusWarId;
  slideComponent = this->fields.slideComponent;
  this->fields.state = 1;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v17);
  extiTime = this->fields.extiTime;
  v20 = OUT_POS_OFS_X;
  v21 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__,
    0);
  if ( !slideComponent )
LABEL_6:
    sub_1C3E7C0(v10, v11);
  SlideFadeObject__SlideOut_36192672(slideComponent, v20, extiTime, 0.0, v21, 0);
}


void RecommendSupportQuestBoardListViewManager__Init(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BalanceConfig_c *v7; // x0
  int32_t RecommendSupportMemberMax; // w20
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  int32_t i; // w27
  BalanceConfig_c *v14; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *v16; // x22
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_4C52C46 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C3E564(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Dictionary_int__int___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
    sub_1C3E564(&System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
    byte_4C52C46 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3152BB4 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  this->fields.slideComponent = (struct SlideFadeObject_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.slideComponent, (int32_t)Component_object, v5, v6);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  RecommendSupportMemberMax = v7->static_fields->RecommendSupportMemberMax;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
  System_Collections_Generic_List_object____ctor_58412188(
    v9,
    RecommendSupportMemberMax,
    (const MethodInfo_37B4C9C *)Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
  this->fields.selectWarId = (struct System_Collections_Generic_List_Dictionary_int__int___o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectWarId, (int32_t)v9, v10, v11);
  for ( i = 0; ; ++i )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    if ( i >= v14->static_fields->RecommendSupportMemberMax )
      break;
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v16,
      (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( !selectWarId )
      goto LABEL_17;
    items = selectWarId->fields._items;
    v21 = Method_System_Collections_Generic_List_Dictionary_int__int___Add__;
    ++selectWarId->fields._version;
    if ( !items )
      goto LABEL_17;
    size = selectWarId->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectWarId,
        (Il2CppObject *)v16,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      selectWarId->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v16;
      sub_1C3E508((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
    }
  }
  questSelectDialog = this->fields.questSelectDialog;
  if ( !questSelectDialog )
LABEL_17:
    sub_1C3E7C0(questSelectDialog, v12);
  RecommendSupportQuestSelectDialogComponent__Init(questSelectDialog, v12);
  RecommendSupportQuestBoardListViewManager__InitQuestFolderList(this, v24);
}


void RecommendSupportQuestBoardListViewManager__InitOpen(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  void *titleInfo; // x0
  RecommendSupportData_o *v6; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x21
  System_Func_object__bool__o *v8; // x22
  Il2CppObject *v9; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o **p_settingQuestInfo; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x20
  struct WarEntity_o *warEntity; // x8
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v15; // x21
  System_Func_object__bool__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v18; // x0
  const MethodInfo *v19; // x4
  System_Collections_Generic_List_object__o *selectWarId; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  RecommendSupportQuestBoardListViewManager___c_c *v22; // x0
  System_Func_object__bool__o *_9__21_1; // x21
  Il2CppObject *v24; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v29; // x0
  const MethodInfo *v30; // x5
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C52C48 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C3E564(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_1C3E564(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_4C52C48 = 1;
  }
  value = 0;
  v3 = sub_1C3E7B0(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfo, 0, 1, 0, 94, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite_39887836((TitleInfoControl_o *)titleInfo, 1, 0, 0, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)titleInfo, 3, 1, 0);
  this->fields.state = 0;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  v6 = (RecommendSupportData_o *)*((_QWORD *)titleInfo + 14);
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo || !v3 || !v6 )
    goto LABEL_26;
  RecommendSupportData__TryGetQuest(v6, *((_DWORD *)titleInfo + 30), (int32_t *)(v3 + 16), (int32_t *)(v3 + 20), 0);
  recommendQuestList = this->fields.recommendQuestList;
  v8 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__,
    0);
  v9 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
         (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
  p_settingQuestInfo = &this->fields.settingQuestInfo;
  this->fields.settingQuestInfo = (struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.settingQuestInfo, (int32_t)v9, v11, v12);
  if ( this->fields.settingQuestInfo )
  {
    v13 = sub_1C3E7B0(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v13, 0);
    if ( *p_settingQuestInfo )
    {
      warEntity = (*p_settingQuestInfo)->fields.warEntity;
      if ( warEntity )
      {
        if ( v13 )
        {
          *(_DWORD *)(v13 + 16) = warEntity->fields.id;
          v15 = this->fields.recommendQuestList;
          v16 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v16,
            (Il2CppObject *)v13,
            Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__,
            0);
          v17 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                  (System_Func_TSource__bool__o *)v16,
                  (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          v18 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)System_Linq_Enumerable__ToList_object_(v17, (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          RecommendSupportQuestBoardListViewManager__CreateQuestList(this, v18, *(_DWORD *)(v13 + 16), 0, v19);
          return;
        }
      }
    }
LABEL_26:
    sub_1C3E7C0(titleInfo, v4);
  }
  this->fields.currentFolderWarId = 0;
  selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  if ( !selectWarId )
    goto LABEL_26;
  titleInfo = System_Collections_Generic_List_object___get_Item(
                selectWarId,
                *((_DWORD *)titleInfo + 30),
                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
  if ( !titleInfo )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___TryGetValue(
    (System_Collections_Generic_Dictionary_int__int__o *)titleInfo,
    this->fields.currentFolderWarId,
    &value,
    (const MethodInfo_340501C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  v22 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    v22 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  _9__21_1 = (System_Func_object__bool__o *)v22->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__21_1 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__21_1,
      v24,
      Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__,
      0);
    static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__o *)_9__21_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__21_1, (int32_t)_9__21_1, v26, v27);
  }
  v28 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
          (System_Func_TSource__bool__o *)_9__21_1,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  v29 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_(v28, (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(this, v29, 0, value, 0, v30);
}


void RecommendSupportQuestBoardListViewManager__InitQuestFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o **p_recommendQuestFolderList; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Master_object; // x25
  Il2CppObject *v11; // x20
  CommonReleaseMaster_o *IsOpen; // x0
  __int64 dispCommonReleaseId; // x1
  CommonReleaseMaster_o *v14; // x28
  RecommendSupportQuestEntity_array *List; // x26
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x25
  unsigned int v18; // w21
  RecommendSupportQuestEntity_o *v19; // x22
  __int64 v20; // x27
  int32_t questId; // w28
  System_String_o *questMessage; // x25
  int32_t priority; // w22
  int32_t questPhase; // w28
  WarEntity_o *v25; // x23
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v26; // x29
  const MethodInfo *v27; // x6
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppClass *v30; // x8
  _QWORD *v31; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x25
  System_Func_object__bool__o *v35; // x22
  int32_t PrioredParentId; // w29
  System_Collections_Generic_List_object__o *v37; // x27
  Il2CppObject *v38; // x22
  __int64 v39; // x28
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  _BOOL8 v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_object__o *v50; // x21
  Il2CppObject *v51; // x23
  __int64 v52; // x22
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  Il2CppObject **v63; // [xsp+8h] [xbp-E8h]
  QuestEntity_o *questEnt; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o **p_recommendQuestList; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_HashSet_int__o *v66; // [xsp+20h] [xbp-D0h]
  Il2CppObject *v67; // [xsp+28h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v68; // [xsp+30h] [xbp-C0h]
  CommonReleaseMaster_o *v69; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v70; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *v71; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v72; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *v73; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4C52C47 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C3E564(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Remove__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_1C3E564(&RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
    sub_1C3E564(&RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
    byte_4C52C47 = 1;
  }
  v73 = 0;
  entity = 0;
  memset(&v72, 0, sizeof(v72));
  v71 = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  p_recommendQuestFolderList = &this->fields.recommendQuestFolderList;
  this->fields.recommendQuestFolderList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.recommendQuestFolderList, (int32_t)v3, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
  this->fields.recommendQuestList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)v7;
  p_recommendQuestList = &this->fields.recommendQuestList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.recommendQuestList, (int32_t)v7, v8, v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  v67 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestMaster___);
  v68 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_SpotMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarMaster___);
  IsOpen = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_55;
  v14 = IsOpen;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0);
  v66 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v66,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !List )
    goto LABEL_55;
  max_length = List->max_length;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)v67;
  if ( max_length >= 1 )
  {
    v18 = 0;
    v69 = v14;
    do
    {
      if ( v18 >= max_length )
        sub_1C3E7C8(IsOpen, dispCommonReleaseId);
      v19 = List->m_Items[v18];
      v20 = sub_1C3E7B0(RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v20, 0);
      if ( !v19 )
        goto LABEL_55;
      if ( !v19->fields.baseQuestId )
      {
        dispCommonReleaseId = (unsigned int)v19->fields.dispCommonReleaseId;
        if ( (_DWORD)dispCommonReleaseId )
        {
          if ( !v14 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v14, dispCommonReleaseId, 0, 0, 0);
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        else
        {
          questId = v19->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = (CommonReleaseMaster_o *)CondType__IsQuestClear_40371188(questId, -1, 0, 0);
          v14 = v69;
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        if ( !v17 )
          goto LABEL_55;
        IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v17,
                                            &entity,
                                            v19->fields.questId,
                                            (const MethodInfo_33B2FA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsOpen & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)v68;
          if ( !v68 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v68,
                                              &v73,
                                              (int32_t)entity[3].klass,
                                              (const MethodInfo_33B2FA4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsOpen & 1) != 0 )
          {
            if ( !v20 || !v73 || !v11 )
              goto LABEL_55;
            IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
                                                (Il2CppObject **)(v20 + 16),
                                                HIDWORD(v73[1].klass),
                                                (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
            {
              questMessage = v19->fields.questMessage;
              questPhase = v19->fields.questPhase;
              priority = v19->fields.priority;
              v63 = (Il2CppObject **)(v20 + 16);
              questEnt = (QuestEntity_o *)entity;
              v25 = *(WarEntity_o **)(v20 + 16);
              v26 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)sub_1C3E7B0(RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
              RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
                v26,
                questEnt,
                v25,
                questMessage,
                questPhase,
                priority,
                v27);
              IsOpen = (CommonReleaseMaster_o *)*p_recommendQuestList;
              if ( !*p_recommendQuestList )
                goto LABEL_55;
              v30 = *(Il2CppClass **)&IsOpen->fields._MasterKind_k__BackingField;
              v31 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
              ++HIDWORD(IsOpen->fields._MasterName_k__BackingField);
              if ( !v30 )
                goto LABEL_55;
              MasterName_k__BackingField_low = SLODWORD(IsOpen->fields._MasterName_k__BackingField);
              v14 = v69;
              if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v30->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)IsOpen,
                  (Il2CppObject *)v26,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &v30->_1.image + MasterName_k__BackingField_low;
                LODWORD(IsOpen->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v33[4] = v26;
                sub_1C3E508((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v26, v28, v29);
              }
              v34 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_recommendQuestFolderList;
              v35 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v35,
                (Il2CppObject *)v20,
                Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
                0);
              IsOpen = (CommonReleaseMaster_o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                                  v34,
                                                  (System_Func_TSource__bool__o *)v35,
                                                  (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
              v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)v67;
              if ( !IsOpen )
              {
                IsOpen = (CommonReleaseMaster_o *)*v63;
                if ( !*v63 )
                  goto LABEL_55;
                PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)IsOpen, 0);
                IsOpen = (CommonReleaseMaster_o *)v66;
                if ( !v66 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___Add(
                  v66,
                  PrioredParentId,
                  (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v37 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
                v38 = *v63;
                v39 = sub_1C3E7B0(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v39, 0);
                *(_QWORD *)(v39 + 16) = v38;
                sub_1C3E508((CGThumbnailListItem_o *)(v39 + 16), (int32_t)v38, v40, v41);
                *(_DWORD *)(v39 + 24) = PrioredParentId;
                if ( !v37 )
                  goto LABEL_55;
                items = v37->fields._items;
                v45 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
                ++v37->fields._version;
                if ( !items )
                  goto LABEL_55;
                size = v37->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v37,
                    (Il2CppObject *)v39,
                    *(const MethodInfo_37B5460 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                }
                else
                {
                  v47 = &items->obj.klass + size;
                  v37->fields._size = size + 1;
                  v47[4] = (Il2CppClass *)v39;
                  sub_1C3E508((CGThumbnailListItem_o *)(v47 + 4), v39, v42, v43);
                }
                v14 = v69;
              }
            }
          }
        }
      }
LABEL_12:
      max_length = List->max_length;
    }
    while ( (int)++v18 < max_length );
  }
  if ( !v66 )
LABEL_55:
    sub_1C3E7C0(IsOpen, dispCommonReleaseId);
  System_Collections_Generic_HashSet_int___Remove(
    v66,
    0,
    (const MethodInfo_366678C *)Method_System_Collections_Generic_HashSet_int__Remove__);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v70,
    v66,
    (const MethodInfo_3666A4C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v72 = v70;
  while ( 1 )
  {
    v48 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v72,
            (const MethodInfo_353BBCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v48 )
      break;
    if ( !v11 )
      sub_1C3E7C0(v48, v49);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
           &v71,
           (int32_t)v72.fields._current,
           (const MethodInfo_33B2FA4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v50 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
      v51 = v71;
      v52 = sub_1C3E7B0(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v52, 0);
      *(_QWORD *)(v52 + 16) = v51;
      sub_1C3E508((CGThumbnailListItem_o *)(v52 + 16), (int32_t)v51, v53, v54);
      *(_DWORD *)(v52 + 24) = 0;
      if ( !v50 )
        sub_1C3E7C0(v55, v56);
      v59 = v50->fields._items;
      v60 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
      ++v50->fields._version;
      if ( !v59 )
        sub_1C3E7C0(v55, v56);
      v61 = v50->fields._size;
      if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          (Il2CppObject *)v52,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &v59->obj.klass + v61;
        v50->fields._size = v61 + 1;
        v62[4] = (Il2CppClass *)v52;
        sub_1C3E508((CGThumbnailListItem_o *)(v62 + 4), v52, v57, v58);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v72,
    (const MethodInfo_353BBC8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void RecommendSupportQuestBoardListViewManager__OnClickListView(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestBoardListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  RecommendSupportQuestBoardListViewItem_o *Item; // x0
  __int64 v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int v14; // w21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  __int64 v20; // x21
  System_Collections_Generic_List_T__o *recommendQuestFolderList; // x23
  System_Func_object__bool__o *v22; // x24
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v23; // x22
  System_Func_object__bool__o *v24; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_List_TSource__o *v26; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x22
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v28; // x20
  __int64 v29; // x8
  const MethodInfo *v30; // x4
  __int64 v31; // x8
  __int64 v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x8
  RecommendSupportQuestBoardListViewItem_o *v41; // x20
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x19
  int monitor; // w23
  int v44; // w24
  System_Action_o *v45; // x22
  const MethodInfo *v46; // x4
  __int64 v47; // x21
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x22
  System_Func_object__bool__o *v52; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_List_TSource__o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v58; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v61; // s9
  System_Action_o *v62; // x19
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C52C4B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C3E564(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_1C3E564(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo);
    byte_4C52C4B = 1;
  }
  value = 0;
  v5 = sub_1C3E7B0(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  if ( !obj )
    goto LABEL_37;
  Item = RecommendSupportQuestBoardListViewObject__GetItem(obj, v7);
  *(_QWORD *)(v5 + 24) = Item;
  v11 = v5 + 24;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)Item, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_37;
  v14 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 24) + 136LL);
  v15 = Method_RecommendSupportQuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C3E57C(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C3E548(v15, v15[4]);
  if ( v14 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
  if ( !*(_QWORD *)v11 )
    goto LABEL_37;
  v19 = *(_QWORD *)(*(_QWORD *)v11 + 120LL);
  *(_QWORD *)(v5 + 16) = v19;
  v20 = v5 + 16;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), v19, v17, v18);
  if ( *(_QWORD *)(v5 + 16) )
  {
    recommendQuestFolderList = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestFolderList;
    v22 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v5,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__,
      0);
    Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                 recommendQuestFolderList,
                                 (System_Func_T__bool__o *)v22,
                                 (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v23 = this->fields.recommendQuestFolderList;
      v24 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v24,
        (Il2CppObject *)v5,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__,
        0);
      v25 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v23,
              (System_Func_TSource__bool__o *)v24,
              (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      v26 = System_Linq_Enumerable__ToList_object_(
              v25,
              (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
      v28 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v26;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance )
      {
        if ( selectWarId )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       selectWarId,
                       (int32_t)Instance[7].monitor,
                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
          if ( *(_QWORD *)v20 )
          {
            v29 = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
            if ( v29 )
            {
              if ( Instance )
              {
                Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__int___TryGetValue(
                                             (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                             *(_DWORD *)(v29 + 16),
                                             &value,
                                             (const MethodInfo_340501C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
                if ( *(_QWORD *)v20 )
                {
                  v31 = *(_QWORD *)(*(_QWORD *)v20 + 16LL);
                  if ( v31 )
                  {
                    RecommendSupportQuestBoardListViewManager__DispFolderList(
                      this,
                      v28,
                      *(_DWORD *)(v31 + 16),
                      value,
                      v30);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1C3E7C0(Instance, v7);
    }
  }
  if ( !*(_QWORD *)v11 )
    goto LABEL_37;
  if ( *(_QWORD *)(*(_QWORD *)v11 + 128LL) )
  {
    v32 = sub_1C3E7B0(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v32, 0);
    if ( !v32 )
      goto LABEL_37;
    *(_QWORD *)(v32 + 32) = v5;
    sub_1C3E508((CGThumbnailListItem_o *)(v32 + 32), v5, v33, v34);
    v37 = *(_QWORD *)(v32 + 32);
    if ( !v37 )
      goto LABEL_37;
    v38 = *(_QWORD *)(v37 + 24);
    if ( !v38 )
      goto LABEL_37;
    v39 = *(_QWORD *)(v38 + 128);
    *(_QWORD *)(v32 + 16) = v39;
    sub_1C3E508((CGThumbnailListItem_o *)(v32 + 16), v39, v35, v36);
    v40 = *(_QWORD *)(v32 + 32);
    if ( !v40 )
      goto LABEL_37;
    v41 = *(RecommendSupportQuestBoardListViewItem_o **)(v40 + 24);
    if ( !v41 )
      goto LABEL_37;
    *(_DWORD *)(v32 + 24) = v41->fields._SettingSelectIndex_k__BackingField;
    questSelectDialog = this->fields.questSelectDialog;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    monitor = (int)Instance[7].monitor;
    v44 = *(_DWORD *)(v32 + 24);
    v45 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v32,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__,
      0);
    if ( !questSelectDialog )
      goto LABEL_37;
    RecommendSupportQuestSelectDialogComponent__Open(questSelectDialog, v41, monitor == v44, v45, v46);
  }
  else
  {
    v47 = sub_1C3E7B0(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v47, 0);
    if ( !v47 )
      goto LABEL_37;
    *(_QWORD *)(v47 + 24) = v5;
    sub_1C3E508((CGThumbnailListItem_o *)(v47 + 24), v5, v48, v49);
    v50 = *(Il2CppObject **)(v47 + 24);
    if ( !v50 )
      goto LABEL_37;
    if ( v50[1].klass )
    {
      recommendQuestList = this->fields.recommendQuestList;
      v52 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v52,
        v50,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__,
        0);
      v53 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
              (System_Func_TSource__bool__o *)v52,
              (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v54 = System_Linq_Enumerable__ToList_object_(
              v53,
              (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      *(_QWORD *)(v47 + 16) = v54;
      sub_1C3E508((CGThumbnailListItem_o *)(v47 + 16), (int32_t)v54, v55, v56);
      slideComponent = this->fields.slideComponent;
      this->fields.state = 1;
      OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v58);
      extiTime = this->fields.extiTime;
      v61 = OUT_POS_OFS_X;
      v62 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v62,
        (Il2CppObject *)v47,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__,
        0);
      if ( !slideComponent )
        goto LABEL_37;
      SlideFadeObject__SlideOut_36192672(slideComponent, v61, extiTime, 0.0, v62, 0);
    }
  }
}


void RecommendSupportQuestBoardListViewManager__OnDestroy(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Collections_Generic_List_Dictionary_int__int___o *selectWarId; // x8
  int32_t size; // w2
  int v6; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x8
  int32_t v8; // w2
  int v9; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x8
  int32_t v11; // w2
  CGThumbnailListItem_o *p_recommendQuestList; // x19
  int v13; // w9

  if ( (byte_4C52C50 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Dictionary_int__int___Clear__);
    byte_4C52C50 = 1;
  }
  selectWarId = this->fields.selectWarId;
  if ( selectWarId )
  {
    size = selectWarId->fields._size;
    v6 = selectWarId->fields._version + 1;
    selectWarId->fields._size = 0;
    selectWarId->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectWarId->fields._items, 0, size, 0);
    this->fields.selectWarId = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectWarId, 0, size, v2);
  }
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  if ( recommendQuestFolderList )
  {
    v8 = recommendQuestFolderList->fields._size;
    v9 = recommendQuestFolderList->fields._version + 1;
    recommendQuestFolderList->fields._size = 0;
    recommendQuestFolderList->fields._version = v9;
    if ( v8 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestFolderList->fields._items, 0, v8, 0);
    this->fields.recommendQuestFolderList = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.recommendQuestFolderList, 0, v8, v2);
  }
  recommendQuestList = this->fields.recommendQuestList;
  if ( recommendQuestList )
  {
    v11 = recommendQuestList->fields._size;
    p_recommendQuestList = (CGThumbnailListItem_o *)&this->fields.recommendQuestList;
    v13 = recommendQuestList->fields._version + 1;
    recommendQuestList->fields._size = 0;
    recommendQuestList->fields._version = v13;
    if ( v11 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestList->fields._items, 0, v11, 0);
    p_recommendQuestList->klass = 0;
    sub_1C3E508(p_recommendQuestList, 0, v11, v2);
  }
}


void RecommendSupportQuestBoardListViewManager__OnclickBack(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  System_Func_object__bool__o *v7; // x22
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v13; // x22
  System_Func_object__bool__o *v14; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v16; // x21
  const MethodInfo *v17; // x4
  __int64 v18; // x8
  int32_t v19; // w3
  const MethodInfo *v20; // x2

  if ( (byte_4C52C4E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C3E564(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__);
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo);
    byte_4C52C4E = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_RecommendSupportQuestBoardListViewManager_OnclickBack__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( this->fields.currentFolderWarId )
    {
      v5 = sub_1C3E7B0(RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      recommendQuestFolderList = this->fields.recommendQuestFolderList;
      v7 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v7,
        (Il2CppObject *)this,
        Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__,
        0);
      Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__FirstOrDefault_object__51525108(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
                                                            (System_Func_TSource__bool__o *)v7,
                                                            (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 16) = Item;
        v12 = v5 + 16;
        sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Item, v10, v11);
        v13 = this->fields.recommendQuestFolderList;
        v14 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v14,
          (Il2CppObject *)v5,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__,
          0);
        v15 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                (System_Func_TSource__bool__o *)v14,
                (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v15,
                                                              (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        if ( Item )
        {
          v16 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)Item;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                0,
                                                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( Item )
          {
            if ( !*(_QWORD *)v12 )
            {
              v19 = 0;
              goto LABEL_16;
            }
            v18 = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
            if ( v18 )
            {
              v19 = *(_DWORD *)(v18 + 16);
LABEL_16:
              RecommendSupportQuestBoardListViewManager__DispFolderList(this, v16, Item->fields._size, v19, v17);
              return;
            }
          }
        }
      }
    }
    else
    {
      Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Item )
      {
        RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Item, 0, v20);
        return;
      }
    }
    sub_1C3E7C0(Item, v9);
  }
}


void RecommendSupportQuestBoardListViewManager__OnclickSelectMenuBackBtn(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C52C4F & 1) == 0 )
  {
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C52C4F = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3E57C(Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      sub_1C3E7C0(0, v6);
    RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v7);
  }
}


void RecommendSupportQuestBoardListViewManager__SerializeFieldNotNullCheck(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportQuestBoardListViewManager__UpdateScrollPosition(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))scrollView->klass->vtable._8_UpdateScrollbars.methodPtr)(
          scrollView,
          1,
          scrollView->klass->vtable._8_UpdateScrollbars.method),
        (scrollView = this->fields.scrollView) == 0) )
  {
    sub_1C3E7C0(scrollView, method);
  }
  UIScrollView__UpdatePosition(scrollView, 0);
}


void RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(
        RecommendSupportQuestBoardListViewManager_o *this,
        int32_t parentFolderWarId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *Instance; // x0
  __int64 v7; // x1
  bool v8; // w0
  System_Collections_Generic_List_object__o *v9; // x22
  bool v10; // w21
  int32_t currentFolderWarId; // w1
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C52C4D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C52C4D = 1;
  }
  value = 0;
  if ( parentFolderWarId )
  {
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || !selectWarId
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            selectWarId,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0
      || (v8 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                 Instance,
                 this->fields.currentFolderWarId,
                 &value,
                 (const MethodInfo_340501C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__),
          v9 = (System_Collections_Generic_List_object__o *)this->fields.selectWarId,
          v10 = v8,
          (Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
      || !v9
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v9,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0 )
    {
      sub_1C3E7C0(Instance, v7);
    }
    currentFolderWarId = this->fields.currentFolderWarId;
    if ( v10 )
      System_Collections_Generic_Dictionary_int__int___set_Item(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_3403970 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    else
      System_Collections_Generic_Dictionary_int__int___Add(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_3403984 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  }
  this->fields.currentFolderWarId = parentFolderWarId;
}


bool RecommendSupportQuestBoardListViewManager___OnclickBack_b__28_0(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0 )
    sub_1C3E7C0(this, x);
  return warEntity->fields.id == this->fields.currentFolderWarId;
}


float RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t width; // w20
  float v4; // s0

  width = UnityEngine_Screen__get_width(0);
  v4 = (float)width / (float)UnityEngine_Screen__get_height(0);
  if ( v4 >= 1.7778 )
    return this->fields.slideOutPosX + (float)((float)(v4 * 576.0) + -1024.0);
  else
    return this->fields.slideOutPosX;
}


void RecommendSupportQuestBoardListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C52C51 & 1) == 0 )
  {
    sub_1C3E564(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_4C52C51 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestBoardListViewManager___c_o *)v1;
  sub_1C3E508(
    (CGThumbnailListItem_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void RecommendSupportQuestBoardListViewManager___c___ctor(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateChapterList_b__22_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *a,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (RecommendSupportQuestBoardListViewManager___c_o *)b->fields.warEntity) == 0
    || (this = (RecommendSupportQuestBoardListViewManager___c_o *)WarEntity__GetPriority((WarEntity_o *)this, 0), !a)
    || (v5 = (int)this, (this = (RecommendSupportQuestBoardListViewManager___c_o *)a->fields.warEntity) == 0) )
  {
    sub_1C3E7C0(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.priority;
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0 )
    sub_1C3E7C0(this, x);
  return questEntity->fields.id;
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_2(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.phase;
}


bool RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_3(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  int32_t index; // w19
  RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *v7; // x0
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4C52C52 & 1) == 0 )
  {
    sub_1C3E564(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C52C52 = 1;
  }
  if ( !item )
    goto LABEL_8;
  naturalAligment = RecommendSupportQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    index = item[1].fields.index;
    this = (RecommendSupportQuestBoardListViewManager___c_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
      return index == LODWORD(this[7].monitor);
LABEL_8:
    sub_1C3E7C0(this, item);
  }
  v7 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *)sub_1C3EA80(item);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___InitQuestFolderList_b__0(v7, v8, v9);
}


bool RecommendSupportQuestBoardListViewManager___c___InitOpen_b__21_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.parentWarId == 0;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___InitQuestFolderList_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct WarEntity_o *warEnt; // x9

  if ( !x || (warEntity = x->fields.warEntity) == 0 || (warEnt = this->fields.warEnt) == 0 )
    sub_1C3E7C0(this, x);
  return warEntity->fields.id == warEnt->fields.id;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___InitOpen_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0 )
    sub_1C3E7C0(this, x);
  return questEntity->fields.id == this->fields.questId && x->fields.phase == this->fields.questPhase;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___InitOpen_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0 )
    sub_1C3E7C0(this, x);
  return warEntity->fields.id == this->fields.settingQuestWarId;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0___CreateChapterList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  const char *name; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *v9; // x0
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v10; // x1
  const MethodInfo *v11; // x2

  v3 = item;
  v4 = this;
  if ( (byte_4C52C53 & 1) == 0 )
  {
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *)sub_1C3E564(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    byte_4C52C53 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  item = (ListViewItem_o *)RecommendSupportQuestBoardListViewItem_TypeInfo;
  naturalAligment = RecommendSupportQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( v3->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (RecommendSupportQuestBoardListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
    {
      name = klass->_1.name;
      if ( name )
        return *((_DWORD *)name + 4) == v4->fields.focusWarId;
    }
LABEL_9:
    sub_1C3E7C0(this, item);
  }
  v9 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)sub_1C3EA80(v3);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__0(v9, v10, v11);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8

  if ( !x || (folderInfo = this->fields.folderInfo) == 0 || (warEntity = folderInfo->fields.warEntity) == 0 )
    sub_1C3E7C0(this, x);
  return x->fields.parentWarId == warEntity->fields.id;
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8

  if ( !x || (folderInfo = this->fields.folderInfo) == 0 || (warEntity = folderInfo->fields.warEntity) == 0 )
    sub_1C3E7C0(this, x);
  return x->fields.parentWarId == warEntity->fields.id;
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__3(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x9
  struct WarEntity_o *v5; // x9

  if ( !x
    || (warEntity = x->fields.warEntity) == 0
    || (folderInfo = this->fields.folderInfo) == 0
    || (v5 = folderInfo->fields.warEntity) == 0 )
  {
    sub_1C3E7C0(this, x);
  }
  return warEntity->fields.id == v5->fields.id;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__5(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v6; // x8
  float intoTime; // s9
  System_Action_o *_9__6; // x21
  float v9; // s8
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C52C54 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__);
    byte_4C52C54 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_9;
  intoTime = v6->fields.intoTime;
  _9__6 = this->fields.__9__6;
  v9 = OUT_POS_OFS_X;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__,
      0);
    this->fields.__9__6 = _9__6;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__6, (int32_t)_9__6, v10, v11);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1C3E7C0(_4__this, method);
  SlideFadeObject__SlideIn_36191728(slideComponent, v9, intoTime, 0.0, _9__6, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__6(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewManager_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)_4__this->fields.slideComponent) == 0)
    || (SlideFadeObject__ResetPosition((SlideFadeObject_o *)this, 0), (v4 = v3->fields.__4__this) == 0) )
  {
    sub_1C3E7C0(this, method);
  }
  v4->fields.state = 0;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1___OnClickListView_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  RecommendSupportData_o *klass; // x20
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals1; // x8
  struct RecommendSupportQuestBoardListViewItem_o *item; // x8
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  if ( (byte_4C52C55 & 1) == 0 )
  {
    sub_1C3E564(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C52C55 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = (RecommendSupportData_o *)Instance[7].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !klass )
    goto LABEL_17;
  RecommendSupportData__SetQuest(klass, (int32_t)Instance[7].monitor, this->fields.info, 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_17;
  item = CS___8__locals1->fields.item;
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsSetting_k__BackingField )
    goto LABEL_15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)Instance[7].klass) == 0
    || (RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, this->fields.index, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_31932B0 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0
    || (Instance = (Il2CppObject *)Instance[10].klass) == 0 )
  {
LABEL_17:
    sub_1C3E7C0(Instance, v4);
  }
  RecommendSupportListViewManager__SetItemSub((RecommendSupportListViewManager_o *)Instance, this->fields.index, v8);
LABEL_15:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v9);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2___OnClickListView_b__4(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *v3; // x21
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals2; // x19
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questList; // x21
  int32_t id; // w22
  System_Action_o *_9__5; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v3 = this;
  if ( (byte_4C52C56 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *)sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__);
    byte_4C52C56 = 1;
  }
  CS___8__locals2 = v3->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_10;
  folderInfo = CS___8__locals2->fields.folderInfo;
  if ( !folderInfo )
    goto LABEL_10;
  warEntity = folderInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_10;
  _4__this = CS___8__locals2->fields.__4__this;
  questList = v3->fields.questList;
  id = warEntity->fields.id;
  _9__5 = CS___8__locals2->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)CS___8__locals2,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__,
      0);
    CS___8__locals2->fields.__9__5 = _9__5;
    sub_1C3E508((CGThumbnailListItem_o *)&CS___8__locals2->fields.__9__5, (int32_t)_9__5, v11, v12);
  }
  if ( !_4__this )
LABEL_10:
    sub_1C3E7C0(this, method);
  RecommendSupportQuestBoardListViewManager__CreateQuestList(_4__this, questList, id, _9__5, v2);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *v3; // x19
  System_Action_o *_9__1; // x24
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo; // x21
  int32_t warId; // w22
  int32_t focusWarId; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v3 = this;
  if ( (byte_4C52C57 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__);
    byte_4C52C57 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  folderInfo = v3->fields.folderInfo;
  warId = v3->fields.warId;
  focusWarId = v3->fields.focusWarId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C3E508((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(_4__this, folderInfo, warId, focusWarId, _9__1, v2);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v6; // x8
  float intoTime; // s9
  System_Action_o *_9__2; // x21
  float v9; // s8
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C52C58 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__);
    byte_4C52C58 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_9;
  intoTime = v6->fields.intoTime;
  _9__2 = this->fields.__9__2;
  v9 = OUT_POS_OFS_X;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1C3E7C0(_4__this, method);
  SlideFadeObject__SlideIn_36191728(slideComponent, v9, intoTime, 0.0, _9__2, 0);
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewManager_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)_4__this->fields.slideComponent) == 0)
    || (SlideFadeObject__ResetPosition((SlideFadeObject_o *)this, 0), (v4 = v3->fields.__4__this) == 0) )
  {
    sub_1C3E7C0(this, method);
  }
  v4->fields.state = 0;
}


void RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0___OnclickBack_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *v4; // x20
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *parentWarFolder; // x8
  int32_t parentWarId; // w19
  int32_t v7; // w1
  System_Nullable_int__o v8; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v10; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C52C59 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_int___ctor__);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *)sub_1C3E564(&Method_System_Nullable_int__get_HasValue__);
    byte_4C52C59 = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  parentWarFolder = v4->fields.parentWarFolder;
  parentWarId = x->fields.parentWarId;
  if ( parentWarFolder )
  {
    v7 = parentWarFolder->fields.parentWarId;
    v8 = (System_Nullable_int__o)&v10;
    v10 = 0;
    System_Nullable_int____ctor(v8, v7, (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
    parentWarFolder = v10;
  }
  return (unsigned __int8)parentWarFolder != 0 && parentWarId == HIDWORD(parentWarFolder);
}
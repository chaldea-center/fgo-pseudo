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
  int32_t size; // w29
  RecommendSupportQuestBoardListViewManager___c_c *v13; // x0
  System_Comparison_T__o *_9__22_0; // x24
  Il2CppObject *v15; // x25
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *settingQuestInfo; // x8
  struct WarEntity_o *warEntity; // x8
  int32_t id; // w1
  System_Nullable_int__o v22; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v23; // x8
  __int64 v24; // x19
  int32_t PrioredParentId; // w1
  System_Nullable_int__o v26; // x0
  int32_t v27; // w24
  __int64 v28; // x8
  char v29; // w27
  __int64 v30; // x8
  System_Collections_Generic_List_object__o *itemList; // x25
  RecommendSupportQuestBoardListViewManager_o *v32; // x21
  Il2CppObject *v33; // x28
  RecommendSupportQuestBoardListViewItem_o *v34; // x26
  const MethodInfo *v35; // x7
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  int32_t v42; // w1
  const MethodInfo *v43; // x2
  UnityEngine_Object_o *scrollBar; // x23
  struct UIScrollBar_o *v45; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v46; // x23
  System_Predicate_object__o *v47; // x24
  Il2CppObject *v48; // x0
  int32_t warId; // [xsp+1Ch] [xbp-84h]
  __int64 v51; // [xsp+28h] [xbp-78h]
  __int64 v52; // [xsp+30h] [xbp-70h] BYREF
  int32_t kind; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4C338CD & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    sub_1C32C20(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_System_Nullable_int__get_HasValue__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C32C20(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_15193/*"UpdateScrollPosition"*/);
    byte_4C338CD = 1;
  }
  kind = 0;
  v10 = sub_1C32E6C(RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
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
      v13 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v13 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v13->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v15,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__,
          0);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__22_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v17, v18);
      }
      System_Collections_Generic_List_object___Sort_58303104(
        (System_Collections_Generic_List_object__o *)folderInfos,
        _9__22_0,
        (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
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
    v24 = 0;
LABEL_20:
    v51 = 0;
    goto LABEL_21;
  }
  warEntity = settingQuestInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_56;
  id = warEntity->fields.id;
  v22 = (System_Nullable_int__o)&v52;
  v52 = 0;
  System_Nullable_int____ctor(v22, id, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
  v23 = this->fields.settingQuestInfo;
  v24 = v52;
  if ( !v23 )
    goto LABEL_20;
  Item = v23->fields.warEntity;
  if ( !Item )
    goto LABEL_56;
  PrioredParentId = WarEntity__GetPrioredParentId(Item, 0);
  v26 = (System_Nullable_int__o)&v52;
  v52 = 0;
  System_Nullable_int____ctor(v26, PrioredParentId, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
  v51 = v52;
LABEL_21:
  if ( size >= 1 )
  {
    if ( folderInfos )
    {
      v27 = 0;
      while ( 1 )
      {
        Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)folderInfos,
                                v27,
                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        if ( !Item )
          break;
        v28 = *(_QWORD *)&Item->fields.id;
        if ( !v28 )
          break;
        if ( (_BYTE)v24 && *(_DWORD *)(v28 + 16) == HIDWORD(v24) )
        {
          v29 = 1;
        }
        else
        {
          Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)folderInfos,
                                  v27,
                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( !Item )
            break;
          v30 = *(_QWORD *)&Item->fields.id;
          if ( !v30 )
            break;
          v29 = (unsigned __int8)v51 != 0 && *(_DWORD *)(v30 + 16) == HIDWORD(v51);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v32 = this;
        v33 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)folderInfos,
                v27,
                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        v34 = (RecommendSupportQuestBoardListViewItem_o *)sub_1C32E6C(RecommendSupportQuestBoardListViewItem_TypeInfo);
        RecommendSupportQuestBoardListViewItem___ctor(
          v34,
          v27,
          (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)v33,
          0,
          v29,
          -1,
          (System_String_o *)StringLiteral_1/*""*/,
          v35);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v39 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v40 = itemList->fields._size;
        if ( (unsigned int)v40 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v34,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + v40;
          itemList->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)v34;
          sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v34, v36, v37);
        }
        ++v27;
        this = v32;
        if ( size == v27 )
          goto LABEL_38;
      }
    }
LABEL_56:
    sub_1C32E7C(Item);
  }
LABEL_38:
  Item = (WarEntity_o *)this->fields.titleInfo;
  if ( !Item )
    goto LABEL_56;
  Item = (WarEntity_o *)TitleInfoControl__TryGetTerminalTitleKind((TitleInfoControl_o *)Item, warId, &kind, 0);
  if ( !this->fields.titleInfo )
    goto LABEL_56;
  if ( ((unsigned __int8)Item & 1) != 0 )
    v42 = kind;
  else
    v42 = 94;
  TitleInfoControl__setTitleImg(this->fields.titleInfo, v42, 0, 0, 0);
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, warId, v43);
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
      v45 = this->fields.scrollBar;
      if ( !v45 )
        goto LABEL_56;
      if ( v45->fields.mSize <= 0.98 )
      {
        v46 = this->fields.itemList;
        v47 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v47,
          (Il2CppObject *)v10,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__,
          0);
        if ( !v46 )
          goto LABEL_56;
        v48 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v46,
                (System_Predicate_T__o *)v47,
                (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v48 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v48[1].klass), 0);
      }
    }
  }
  Item = (WarEntity_o *)this->fields.selectMenuBackBtn;
  if ( !Item )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, warId != 0, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15193/*"UpdateScrollPosition"*/, 0.0, 0);
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
  RecommendSupportData_o *v35; // x24
  __int64 v36; // x8
  int32_t v37; // w25
  bool IsQuestSetting; // w0
  System_Collections_Generic_List_object__o *itemList; // x24
  bool v40; // w26
  RecommendSupportQuestBoardListViewManager_o *v41; // x27
  Il2CppObject *Item; // x0
  int32_t v43; // w19
  System_String_o *v44; // x28
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v45; // x29
  RecommendSupportQuestBoardListViewItem_o *v46; // x25
  const MethodInfo *v47; // x7
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_Collections_ICollection_o *v54; // x22
  const MethodInfo *v55; // x2
  TitleInfoControl_o *titleInfo; // x22
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v58; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v59; // x21
  System_Predicate_object__o *v60; // x22
  Il2CppObject *v61; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  Il2CppObject *v65; // x0
  System_String_o *svtName; // [xsp+10h] [xbp-70h] BYREF
  int32_t settingIndex[2]; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C338CE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_MapMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C32C20(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C32C20(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_1C32C20(&StringLiteral_15193/*"UpdateScrollPosition"*/);
    byte_4C338CE = 1;
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
           (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
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
        _9__23_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_0,
          v12,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__,
          0);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__23_0 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v14, v15);
      }
      v16 = System_Linq_Enumerable__OrderByDescending_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
              (System_Func_TSource__TKey__o *)_9__23_0,
              (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
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
        _9__23_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_1,
          v20,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__,
          0);
        v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v21->__9__23_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_1;
        sub_1C32BC4((CGThumbnailListItem_o *)&v21->__9__23_1, (int32_t)_9__23_1, v22, v23);
      }
      v24 = System_Linq_Enumerable__ThenBy_object__int_(
              v18,
              (System_Func_TSource__TKey__o *)_9__23_1,
              (const MethodInfo_311BBF0 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
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
        _9__23_2 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_2,
          v28,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__,
          0);
        v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v29->__9__23_2 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_2;
        sub_1C32BC4((CGThumbnailListItem_o *)&v29->__9__23_2, (int32_t)_9__23_2, v30, v31);
      }
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                   v26,
                                                                   (System_Func_TSource__TKey__o *)_9__23_2,
                                                                   (const MethodInfo_311BBF0 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v9 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v32,
                                                          (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v9 )
        goto LABEL_71;
      v35 = (RecommendSupportData_o *)*((_QWORD *)Instance + 14);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v33,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      v36 = *((_QWORD *)Instance + 2);
      if ( !v36 )
        goto LABEL_71;
      v37 = *(_DWORD *)(v36 + 16);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v33,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v35 )
        goto LABEL_71;
      IsQuestSetting = RecommendSupportData__TryGetIsQuestSetting(
                         v35,
                         v37,
                         *((_DWORD *)Instance + 10),
                         settingIndex,
                         &svtName,
                         0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v40 = IsQuestSetting;
      v41 = this;
      Item = System_Collections_Generic_List_object___get_Item(
               v9,
               v33,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      v43 = settingIndex[0];
      v44 = svtName;
      v45 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)Item;
      v46 = (RecommendSupportQuestBoardListViewItem_o *)sub_1C32E6C(RecommendSupportQuestBoardListViewItem_TypeInfo);
      RecommendSupportQuestBoardListViewItem___ctor(v46, v33, 0, v45, v40, v43, v44, v47);
      if ( !itemList )
        goto LABEL_71;
      items = itemList->fields._items;
      v51 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_71;
      v52 = itemList->fields._size;
      this = v41;
      if ( (unsigned int)v52 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v46,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + v52;
        itemList->fields._size = v52 + 1;
        v53[4] = (Il2CppClass *)v46;
        sub_1C32BC4((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v46, v48, v49);
      }
    }
    while ( size != ++v33 );
  }
LABEL_39:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = MapMaster__getList((MapMaster_o *)Instance, parentFolderWarId, 0);
  if ( !this->fields.titleInfo )
    goto LABEL_71;
  v54 = (System_Collections_ICollection_o *)Instance;
  if ( TitleInfoControl__TryGetTerminalTitleKind(this->fields.titleInfo, parentFolderWarId, &settingIndex[1], 0) )
  {
    Instance = this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_71;
    TitleInfoControl__setTitleImg((TitleInfoControl_o *)Instance, settingIndex[1], 0, 0, 0);
  }
  else
  {
    Instance = (void *)BasicHelper__IsNullOrEmpty(v54, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v54 )
        goto LABEL_71;
      if ( !LODWORD(v54[1].monitor) )
        sub_1C32E84(Instance);
      Instance = v54[2].klass;
      if ( !Instance )
        goto LABEL_71;
      titleInfo = this->fields.titleInfo;
      Instance = (void *)MapEntity__GetPrioredHeaderId((MapEntity_o *)Instance, 0, 0, 0);
      if ( !titleInfo )
        goto LABEL_71;
      TitleInfoControl__setTitleImgFromBanner(titleInfo, (int32_t)Instance, 0, 1, 0, 0);
    }
  }
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, parentFolderWarId, v55);
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
      v58 = this->fields.scrollBar;
      if ( !v58 )
        goto LABEL_71;
      if ( v58->fields.mSize <= 0.98 )
      {
        v59 = this->fields.itemList;
        Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
          Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v60 = *(System_Predicate_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
        if ( !v60 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          }
          v61 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v60 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_ListViewItem__TypeInfo);
          System_Predicate_object____ctor(
            v60,
            v61,
            Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__,
            0);
          v62 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
          v62->__9__23_3 = (struct System_Predicate_ListViewItem__o *)v60;
          sub_1C32BC4((CGThumbnailListItem_o *)&v62->__9__23_3, (int32_t)v60, v63, v64);
        }
        if ( v59 )
        {
          v65 = System_Collections_Generic_List_object___Find(
                  (System_Collections_Generic_List_object__o *)v59,
                  (System_Predicate_T__o *)v60,
                  (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
          if ( v65 )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v65[1].klass), 0);
          goto LABEL_69;
        }
LABEL_71:
        sub_1C32E7C(Instance);
      }
    }
  }
LABEL_69:
  Instance = this->fields.selectMenuBackBtn;
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15193/*"UpdateScrollPosition"*/, 0.0, 0);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v16; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v19; // s9
  System_Action_o *v20; // x19

  if ( (byte_4C338D0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo);
    byte_4C338D0 = 1;
  }
  v9 = sub_1C32E6C(RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = folderInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 24), (int32_t)folderInfo, v13, v14);
  *(_DWORD *)(v9 + 32) = warId;
  *(_DWORD *)(v9 + 36) = focusWarId;
  slideComponent = this->fields.slideComponent;
  this->fields.state = 1;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v16);
  extiTime = this->fields.extiTime;
  v19 = OUT_POS_OFS_X;
  v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__,
    0);
  if ( !slideComponent )
LABEL_6:
    sub_1C32E7C(v10);
  SlideFadeObject__SlideOut_36053140(slideComponent, v19, extiTime, 0.0, v20, 0);
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

  if ( (byte_4C338CA & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Dictionary_int__int___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
    byte_4C338CA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  this->fields.slideComponent = (struct SlideFadeObject_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.slideComponent, (int32_t)Component_object, v5, v6);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  RecommendSupportMemberMax = v7->static_fields->RecommendSupportMemberMax;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
  System_Collections_Generic_List_object____ctor_58294264(
    v9,
    RecommendSupportMemberMax,
    (const MethodInfo_3797FF8 *)Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
  this->fields.selectWarId = (struct System_Collections_Generic_List_Dictionary_int__int___o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectWarId, (int32_t)v9, v10, v11);
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
    v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v16,
      (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
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
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      selectWarId->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v16;
      sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v16, v18, v19);
    }
  }
  questSelectDialog = this->fields.questSelectDialog;
  if ( !questSelectDialog )
LABEL_17:
    sub_1C32E7C(questSelectDialog);
  RecommendSupportQuestSelectDialogComponent__Init(questSelectDialog, v12);
  RecommendSupportQuestBoardListViewManager__InitQuestFolderList(this, v24);
}


void RecommendSupportQuestBoardListViewManager__InitOpen(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  void *titleInfo; // x0
  RecommendSupportData_o *v5; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x21
  System_Func_object__bool__o *v7; // x22
  Il2CppObject *v8; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o **p_settingQuestInfo; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x20
  struct WarEntity_o *warEntity; // x8
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v14; // x21
  System_Func_object__bool__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v17; // x0
  const MethodInfo *v18; // x4
  System_Collections_Generic_List_object__o *selectWarId; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  RecommendSupportQuestBoardListViewManager___c_c *v21; // x0
  System_Func_object__bool__o *_9__21_1; // x21
  Il2CppObject *v23; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v28; // x0
  const MethodInfo *v29; // x5
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C338CC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C32C20(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_4C338CC = 1;
  }
  value = 0;
  v3 = sub_1C32E6C(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfo, 0, 1, 0, 94, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite_39743540((TitleInfoControl_o *)titleInfo, 1, 0, 0, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)titleInfo, 3, 1, 0);
  this->fields.state = 0;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  v5 = (RecommendSupportData_o *)*((_QWORD *)titleInfo + 14);
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo || !v3 || !v5 )
    goto LABEL_26;
  RecommendSupportData__TryGetQuest(v5, *((_DWORD *)titleInfo + 30), (int32_t *)(v3 + 16), (int32_t *)(v3 + 20), 0);
  recommendQuestList = this->fields.recommendQuestList;
  v7 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__,
    0);
  v8 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
         (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
  p_settingQuestInfo = &this->fields.settingQuestInfo;
  this->fields.settingQuestInfo = (struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.settingQuestInfo, (int32_t)v8, v10, v11);
  if ( this->fields.settingQuestInfo )
  {
    v12 = sub_1C32E6C(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0);
    if ( *p_settingQuestInfo )
    {
      warEntity = (*p_settingQuestInfo)->fields.warEntity;
      if ( warEntity )
      {
        if ( v12 )
        {
          *(_DWORD *)(v12 + 16) = warEntity->fields.id;
          v14 = this->fields.recommendQuestList;
          v15 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v15,
            (Il2CppObject *)v12,
            Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__,
            0);
          v16 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                  (System_Func_TSource__bool__o *)v15,
                  (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          v17 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)System_Linq_Enumerable__ToList_object_(v16, (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          RecommendSupportQuestBoardListViewManager__CreateQuestList(this, v17, *(_DWORD *)(v12 + 16), 0, v18);
          return;
        }
      }
    }
LABEL_26:
    sub_1C32E7C(titleInfo);
  }
  this->fields.currentFolderWarId = 0;
  selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  if ( !selectWarId )
    goto LABEL_26;
  titleInfo = System_Collections_Generic_List_object___get_Item(
                selectWarId,
                *((_DWORD *)titleInfo + 30),
                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
  if ( !titleInfo )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___TryGetValue(
    (System_Collections_Generic_Dictionary_int__int__o *)titleInfo,
    this->fields.currentFolderWarId,
    &value,
    (const MethodInfo_33E88FC *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  _9__21_1 = (System_Func_object__bool__o *)v21->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__21_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__21_1,
      v23,
      Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__,
      0);
    static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__o *)_9__21_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__21_1, (int32_t)_9__21_1, v25, v26);
  }
  v27 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
          (System_Func_TSource__bool__o *)_9__21_1,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  v28 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_(v27, (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(this, v28, 0, value, 0, v29);
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
  CommonReleaseMaster_o *v13; // x28
  RecommendSupportQuestEntity_array *List; // x26
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x25
  unsigned int v17; // w21
  RecommendSupportQuestEntity_o *v18; // x22
  __int64 v19; // x27
  int32_t dispCommonReleaseId; // w1
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
  System_Collections_Generic_List_object__o *v49; // x21
  Il2CppObject *v50; // x23
  __int64 v51; // x22
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0
  Il2CppObject **v61; // [xsp+8h] [xbp-E8h]
  QuestEntity_o *questEnt; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o **p_recommendQuestList; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_HashSet_int__o *v64; // [xsp+20h] [xbp-D0h]
  Il2CppObject *v65; // [xsp+28h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v66; // [xsp+30h] [xbp-C0h]
  CommonReleaseMaster_o *v67; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v68; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *v69; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v70; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *v71; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4C338CB & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C32C20(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_1C32C20(&RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
    sub_1C32C20(&RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
    byte_4C338CB = 1;
  }
  v71 = 0;
  entity = 0;
  memset(&v70, 0, sizeof(v70));
  v69 = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  p_recommendQuestFolderList = &this->fields.recommendQuestFolderList;
  this->fields.recommendQuestFolderList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.recommendQuestFolderList, (int32_t)v3, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
  this->fields.recommendQuestList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)v7;
  p_recommendQuestList = &this->fields.recommendQuestList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.recommendQuestList, (int32_t)v7, v8, v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  v65 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestMaster___);
  v66 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SpotMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarMaster___);
  IsOpen = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_55;
  v13 = IsOpen;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0);
  v64 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v64,
    (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !List )
    goto LABEL_55;
  max_length = List->max_length;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)v65;
  if ( max_length >= 1 )
  {
    v17 = 0;
    v67 = v13;
    do
    {
      if ( v17 >= max_length )
        sub_1C32E84(IsOpen);
      v18 = List->m_Items[v17];
      v19 = sub_1C32E6C(RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v19, 0);
      if ( !v18 )
        goto LABEL_55;
      if ( !v18->fields.baseQuestId )
      {
        dispCommonReleaseId = v18->fields.dispCommonReleaseId;
        if ( dispCommonReleaseId )
        {
          if ( !v13 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v13, dispCommonReleaseId, 0, 0, 0);
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        else
        {
          questId = v18->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = (CommonReleaseMaster_o *)CondType__IsQuestClear_40225464(questId, -1, 0, 0);
          v13 = v67;
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        if ( !v16 )
          goto LABEL_55;
        IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v16,
                                            &entity,
                                            v18->fields.questId,
                                            (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsOpen & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)v66;
          if ( !v66 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v66,
                                              &v71,
                                              (int32_t)entity[3].klass,
                                              (const MethodInfo_3396884 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsOpen & 1) != 0 )
          {
            if ( !v19 || !v71 || !v11 )
              goto LABEL_55;
            IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
                                                (Il2CppObject **)(v19 + 16),
                                                HIDWORD(v71[1].klass),
                                                (const MethodInfo_3396884 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
            {
              questMessage = v18->fields.questMessage;
              questPhase = v18->fields.questPhase;
              priority = v18->fields.priority;
              v61 = (Il2CppObject **)(v19 + 16);
              questEnt = (QuestEntity_o *)entity;
              v25 = *(WarEntity_o **)(v19 + 16);
              v26 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)sub_1C32E6C(RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
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
              v13 = v67;
              if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v30->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)IsOpen,
                  (Il2CppObject *)v26,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &v30->_1.image + MasterName_k__BackingField_low;
                LODWORD(IsOpen->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v33[4] = v26;
                sub_1C32BC4((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v26, v28, v29);
              }
              v34 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_recommendQuestFolderList;
              v35 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v35,
                (Il2CppObject *)v19,
                Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
                0);
              IsOpen = (CommonReleaseMaster_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                                  v34,
                                                  (System_Func_TSource__bool__o *)v35,
                                                  (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
              v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)v65;
              if ( !IsOpen )
              {
                IsOpen = (CommonReleaseMaster_o *)*v61;
                if ( !*v61 )
                  goto LABEL_55;
                PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)IsOpen, 0);
                IsOpen = (CommonReleaseMaster_o *)v64;
                if ( !v64 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___Add(
                  v64,
                  PrioredParentId,
                  (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v37 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
                v38 = *v61;
                v39 = sub_1C32E6C(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v39, 0);
                *(_QWORD *)(v39 + 16) = v38;
                sub_1C32BC4((CGThumbnailListItem_o *)(v39 + 16), (int32_t)v38, v40, v41);
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
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                }
                else
                {
                  v47 = &items->obj.klass + size;
                  v37->fields._size = size + 1;
                  v47[4] = (Il2CppClass *)v39;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v47 + 4), v39, v42, v43);
                }
                v13 = v67;
              }
            }
          }
        }
      }
LABEL_12:
      max_length = List->max_length;
    }
    while ( (int)++v17 < max_length );
  }
  if ( !v64 )
LABEL_55:
    sub_1C32E7C(IsOpen);
  System_Collections_Generic_HashSet_int___Remove(
    v64,
    0,
    (const MethodInfo_3649AE8 *)Method_System_Collections_Generic_HashSet_int__Remove__);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v68,
    v64,
    (const MethodInfo_3649DA8 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v70 = v68;
  while ( 1 )
  {
    v48 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v70,
            (const MethodInfo_351EF28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v48 )
      break;
    if ( !v11 )
      sub_1C32E7C(v48);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v11,
           &v69,
           (int32_t)v70.fields._current,
           (const MethodInfo_3396884 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v49 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
      v50 = v69;
      v51 = sub_1C32E6C(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v51, 0);
      *(_QWORD *)(v51 + 16) = v50;
      sub_1C32BC4((CGThumbnailListItem_o *)(v51 + 16), (int32_t)v50, v52, v53);
      *(_DWORD *)(v51 + 24) = 0;
      if ( !v49 )
        sub_1C32E7C(v54);
      v57 = v49->fields._items;
      v58 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
      ++v49->fields._version;
      if ( !v57 )
        sub_1C32E7C(v54);
      v59 = v49->fields._size;
      if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v49,
          (Il2CppObject *)v51,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &v57->obj.klass + v59;
        v49->fields._size = v59 + 1;
        v60[4] = (Il2CppClass *)v51;
        sub_1C32BC4((CGThumbnailListItem_o *)(v60 + 4), v51, v55, v56);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v70,
    (const MethodInfo_351EF24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void RecommendSupportQuestBoardListViewManager__OnClickListView(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestBoardListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
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

  if ( (byte_4C338CF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C32C20(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo);
    byte_4C338CF = 1;
  }
  value = 0;
  v5 = sub_1C32E6C(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  if ( !obj )
    goto LABEL_37;
  Item = RecommendSupportQuestBoardListViewObject__GetItem(obj, v9);
  *(_QWORD *)(v5 + 24) = Item;
  v11 = v5 + 24;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)Item, v12, v13);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_37;
  v14 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 24) + 136LL);
  v15 = Method_RecommendSupportQuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C32C38(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C32C04(v15, v15[4]);
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
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), v19, v17, v18);
  if ( *(_QWORD *)(v5 + 16) )
  {
    recommendQuestFolderList = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestFolderList;
    v22 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v5,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__,
      0);
    Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                 recommendQuestFolderList,
                                 (System_Func_T__bool__o *)v22,
                                 (const MethodInfo_30C6790 *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v23 = this->fields.recommendQuestFolderList;
      v24 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v24,
        (Il2CppObject *)v5,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__,
        0);
      v25 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v23,
              (System_Func_TSource__bool__o *)v24,
              (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      v26 = System_Linq_Enumerable__ToList_object_(
              v25,
              (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
      v28 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v26;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance )
      {
        if ( selectWarId )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       selectWarId,
                       (int32_t)Instance[7].monitor,
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
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
                                             (const MethodInfo_33E88FC *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
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
      sub_1C32E7C(Instance);
    }
  }
  if ( !*(_QWORD *)v11 )
    goto LABEL_37;
  if ( *(_QWORD *)(*(_QWORD *)v11 + 128LL) )
  {
    v32 = sub_1C32E6C(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v32, 0);
    if ( !v32 )
      goto LABEL_37;
    *(_QWORD *)(v32 + 32) = v5;
    sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 32), v5, v33, v34);
    v37 = *(_QWORD *)(v32 + 32);
    if ( !v37 )
      goto LABEL_37;
    v38 = *(_QWORD *)(v37 + 24);
    if ( !v38 )
      goto LABEL_37;
    v39 = *(_QWORD *)(v38 + 128);
    *(_QWORD *)(v32 + 16) = v39;
    sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 16), v39, v35, v36);
    v40 = *(_QWORD *)(v32 + 32);
    if ( !v40 )
      goto LABEL_37;
    v41 = *(RecommendSupportQuestBoardListViewItem_o **)(v40 + 24);
    if ( !v41 )
      goto LABEL_37;
    *(_DWORD *)(v32 + 24) = v41->fields._SettingSelectIndex_k__BackingField;
    questSelectDialog = this->fields.questSelectDialog;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    monitor = (int)Instance[7].monitor;
    v44 = *(_DWORD *)(v32 + 24);
    v45 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
    v47 = sub_1C32E6C(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v47, 0);
    if ( !v47 )
      goto LABEL_37;
    *(_QWORD *)(v47 + 24) = v5;
    sub_1C32BC4((CGThumbnailListItem_o *)(v47 + 24), v5, v48, v49);
    v50 = *(Il2CppObject **)(v47 + 24);
    if ( !v50 )
      goto LABEL_37;
    if ( v50[1].klass )
    {
      recommendQuestList = this->fields.recommendQuestList;
      v52 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v52,
        v50,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__,
        0);
      v53 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
              (System_Func_TSource__bool__o *)v52,
              (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v54 = System_Linq_Enumerable__ToList_object_(
              v53,
              (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      *(_QWORD *)(v47 + 16) = v54;
      sub_1C32BC4((CGThumbnailListItem_o *)(v47 + 16), (int32_t)v54, v55, v56);
      slideComponent = this->fields.slideComponent;
      this->fields.state = 1;
      OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v58);
      extiTime = this->fields.extiTime;
      v61 = OUT_POS_OFS_X;
      v62 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v62,
        (Il2CppObject *)v47,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__,
        0);
      if ( !slideComponent )
        goto LABEL_37;
      SlideFadeObject__SlideOut_36053140(slideComponent, v61, extiTime, 0.0, v62, 0);
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

  if ( (byte_4C338D4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Dictionary_int__int___Clear__);
    byte_4C338D4 = 1;
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectWarId, 0, size, v2);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.recommendQuestFolderList, 0, v8, v2);
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
    sub_1C32BC4(p_recommendQuestList, 0, v11, v2);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v12; // x22
  System_Func_object__bool__o *v13; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v15; // x21
  const MethodInfo *v16; // x4
  __int64 v17; // x8
  int32_t v18; // w3
  const MethodInfo *v19; // x2

  if ( (byte_4C338D2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C32C20(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__);
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo);
    byte_4C338D2 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_RecommendSupportQuestBoardListViewManager_OnclickBack__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( this->fields.currentFolderWarId )
    {
      v5 = sub_1C32E6C(RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      recommendQuestFolderList = this->fields.recommendQuestFolderList;
      v7 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v7,
        (Il2CppObject *)this,
        Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__,
        0);
      Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
                                                            (System_Func_TSource__bool__o *)v7,
                                                            (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 16) = Item;
        v11 = v5 + 16;
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)Item, v9, v10);
        v12 = this->fields.recommendQuestFolderList;
        v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v13,
          (Il2CppObject *)v5,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__,
          0);
        v14 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                (System_Func_TSource__bool__o *)v13,
                (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v14,
                                                              (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        if ( Item )
        {
          v15 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)Item;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                0,
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( Item )
          {
            if ( !*(_QWORD *)v11 )
            {
              v18 = 0;
              goto LABEL_16;
            }
            v17 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
            if ( v17 )
            {
              v18 = *(_DWORD *)(v17 + 16);
LABEL_16:
              RecommendSupportQuestBoardListViewManager__DispFolderList(this, v15, Item->fields._size, v18, v16);
              return;
            }
          }
        }
      }
    }
    else
    {
      Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Item )
      {
        RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Item, 0, v19);
        return;
      }
    }
    sub_1C32E7C(Item);
  }
}


void RecommendSupportQuestBoardListViewManager__OnclickSelectMenuBackBtn(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C338D3 & 1) == 0 )
  {
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C338D3 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v6);
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
    sub_1C32E7C(scrollView);
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
  bool v7; // w0
  System_Collections_Generic_List_object__o *v8; // x22
  bool v9; // w21
  int32_t currentFolderWarId; // w1
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C338D1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C338D1 = 1;
  }
  value = 0;
  if ( parentFolderWarId )
  {
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || !selectWarId
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            selectWarId,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0
      || (v7 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                 Instance,
                 this->fields.currentFolderWarId,
                 &value,
                 (const MethodInfo_33E88FC *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__),
          v8 = (System_Collections_Generic_List_object__o *)this->fields.selectWarId,
          v9 = v7,
          (Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
      || !v8
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v8,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0 )
    {
      sub_1C32E7C(Instance);
    }
    currentFolderWarId = this->fields.currentFolderWarId;
    if ( v9 )
      System_Collections_Generic_Dictionary_int__int___set_Item(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_33E7250 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    else
      System_Collections_Generic_Dictionary_int__int___Add(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_33E7264 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C338D5 & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_4C338D5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestBoardListViewManager___c_o *)v1;
  sub_1C32BC4(
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
    sub_1C32E7C(this);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.priority;
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0 )
    sub_1C32E7C(this);
  return questEntity->fields.id;
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_2(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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

  if ( (byte_4C338D6 & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C338D6 = 1;
  }
  if ( !item )
    goto LABEL_8;
  naturalAligment = RecommendSupportQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    index = item[1].fields.index;
    this = (RecommendSupportQuestBoardListViewManager___c_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
      return index == LODWORD(this[7].monitor);
LABEL_8:
    sub_1C32E7C(this);
  }
  v7 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *)sub_1C3313C(item);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___InitQuestFolderList_b__0(v7, v8, v9);
}


bool RecommendSupportQuestBoardListViewManager___c___InitOpen_b__21_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *v4; // x19
  __int64 naturalAligment; // x9
  ListViewItem_c *klass; // x8
  const char *name; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *v9; // x0
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4C338D7 & 1) == 0 )
  {
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *)sub_1C32C20(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    byte_4C338D7 = 1;
  }
  if ( !item )
    goto LABEL_9;
  naturalAligment = RecommendSupportQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    klass = item[1].klass;
    if ( klass )
    {
      name = klass->_1.name;
      if ( name )
        return *((_DWORD *)name + 4) == v4->fields.focusWarId;
    }
LABEL_9:
    sub_1C32E7C(this);
  }
  v9 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)sub_1C3313C(item);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C338D8 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__);
    byte_4C338D8 = 1;
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
    _9__6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__,
      0);
    this->fields.__9__6 = _9__6;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__6, (int32_t)_9__6, v10, v11);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1C32E7C(_4__this);
  SlideFadeObject__SlideIn_36052196(slideComponent, v9, intoTime, 0.0, _9__6, 0);
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
    sub_1C32E7C(this);
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
  RecommendSupportData_o *klass; // x20
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals1; // x8
  struct RecommendSupportQuestBoardListViewItem_o *item; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_4C338D9 & 1) == 0 )
  {
    sub_1C32C20(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4C338D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = (RecommendSupportData_o *)Instance[7].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)Instance[7].klass) == 0
    || (RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, this->fields.index, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_3176AF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0
    || (Instance = (Il2CppObject *)Instance[10].klass) == 0 )
  {
LABEL_17:
    sub_1C32E7C(Instance);
  }
  RecommendSupportListViewManager__SetItemSub((RecommendSupportListViewManager_o *)Instance, this->fields.index, v7);
LABEL_15:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v8);
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
  if ( (byte_4C338DA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *)sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__);
    byte_4C338DA = 1;
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
    _9__5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)CS___8__locals2,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__,
      0);
    CS___8__locals2->fields.__9__5 = _9__5;
    sub_1C32BC4((CGThumbnailListItem_o *)&CS___8__locals2->fields.__9__5, (int32_t)_9__5, v11, v12);
  }
  if ( !_4__this )
LABEL_10:
    sub_1C32E7C(this);
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
  if ( (byte_4C338DB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__);
    byte_4C338DB = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  folderInfo = v3->fields.folderInfo;
  warId = v3->fields.warId;
  focusWarId = v3->fields.focusWarId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !_4__this )
    sub_1C32E7C(this);
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

  if ( (byte_4C338DC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__);
    byte_4C338DC = 1;
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
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1C32E7C(_4__this);
  SlideFadeObject__SlideIn_36052196(slideComponent, v9, intoTime, 0.0, _9__2, 0);
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
    sub_1C32E7C(this);
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
  if ( (byte_4C338DD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *)sub_1C32C20(&Method_System_Nullable_int__get_HasValue__);
    byte_4C338DD = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  parentWarFolder = v4->fields.parentWarFolder;
  parentWarId = x->fields.parentWarId;
  if ( parentWarFolder )
  {
    v7 = parentWarFolder->fields.parentWarId;
    v8 = (System_Nullable_int__o)&v10;
    v10 = 0;
    System_Nullable_int____ctor(v8, v7, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
    parentWarFolder = v10;
  }
  return (unsigned __int8)parentWarFolder != 0 && parentWarId == HIDWORD(parentWarFolder);
}
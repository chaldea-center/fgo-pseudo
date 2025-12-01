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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *settingQuestInfo; // x8
  struct WarEntity_o *warEntity; // x8
  int32_t id; // w1
  System_Nullable_int__o v27; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v28; // x8
  __int64 v29; // x19
  int32_t PrioredParentId; // w1
  System_Nullable_int__o v31; // x0
  int32_t v32; // w24
  __int64 v33; // x8
  char v34; // w27
  __int64 v35; // x8
  System_Collections_Generic_List_object__o *itemList; // x25
  RecommendSupportQuestBoardListViewManager_o *v37; // x21
  Il2CppObject *v38; // x28
  RecommendSupportQuestBoardListViewItem_o *v39; // x26
  const MethodInfo *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  int32_t v51; // w1
  const MethodInfo *v52; // x2
  UnityEngine_Object_o *scrollBar; // x23
  struct UIScrollBar_o *v54; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v55; // x23
  System_Predicate_object__o *v56; // x24
  Il2CppObject *v57; // x0
  int32_t warId; // [xsp+1Ch] [xbp-84h]
  __int64 v60; // [xsp+28h] [xbp-78h]
  __int64 v61; // [xsp+30h] [xbp-70h] BYREF
  int32_t kind; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4CC32AA & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    sub_1C713B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_int___ctor__);
    sub_1C713B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C713B0(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_15198/*"UpdateScrollPosition"*/);
    byte_4CC32AA = 1;
  }
  kind = 0;
  v10 = sub_1C715FC(RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
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
        _9__22_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v16,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__,
          0);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__22_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__22_0,
          (int32_t)_9__22_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      System_Collections_Generic_List_object___Sort_58794460(
        (System_Collections_Generic_List_object__o *)folderInfos,
        _9__22_0,
        (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
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
    v29 = 0;
LABEL_20:
    v60 = 0;
    goto LABEL_21;
  }
  warEntity = settingQuestInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_56;
  id = warEntity->fields.id;
  v27 = (System_Nullable_int__o)&v61;
  v61 = 0;
  System_Nullable_int____ctor(v27, id, (const MethodInfo_3938D3C *)Method_System_Nullable_int___ctor__);
  v28 = this->fields.settingQuestInfo;
  v29 = v61;
  if ( !v28 )
    goto LABEL_20;
  Item = v28->fields.warEntity;
  if ( !Item )
    goto LABEL_56;
  PrioredParentId = WarEntity__GetPrioredParentId(Item, 0);
  v31 = (System_Nullable_int__o)&v61;
  v61 = 0;
  System_Nullable_int____ctor(v31, PrioredParentId, (const MethodInfo_3938D3C *)Method_System_Nullable_int___ctor__);
  v60 = v61;
LABEL_21:
  if ( size >= 1 )
  {
    if ( folderInfos )
    {
      v32 = 0;
      while ( 1 )
      {
        Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)folderInfos,
                                v32,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        if ( !Item )
          break;
        v33 = *(_QWORD *)&Item->fields.id;
        if ( !v33 )
          break;
        if ( (_BYTE)v29 && *(_DWORD *)(v33 + 16) == HIDWORD(v29) )
        {
          v34 = 1;
        }
        else
        {
          Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)folderInfos,
                                  v32,
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( !Item )
            break;
          v35 = *(_QWORD *)&Item->fields.id;
          if ( !v35 )
            break;
          v34 = (unsigned __int8)v60 != 0 && *(_DWORD *)(v35 + 16) == HIDWORD(v60);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v37 = this;
        v38 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)folderInfos,
                v32,
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        v39 = (RecommendSupportQuestBoardListViewItem_o *)sub_1C715FC(RecommendSupportQuestBoardListViewItem_TypeInfo);
        RecommendSupportQuestBoardListViewItem___ctor(
          v39,
          v32,
          (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)v38,
          0,
          v34,
          -1,
          (System_String_o *)StringLiteral_1/*""*/,
          v40);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v48 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v49 = itemList->fields._size;
        if ( (unsigned int)v49 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v39,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = &items->obj.klass + v49;
          itemList->fields._size = v49 + 1;
          v50[4] = (Il2CppClass *)v39;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v50 + 4), (int32_t)v39, v41, v42, v43, v44, v45, v46);
        }
        ++v32;
        this = v37;
        if ( size == v32 )
          goto LABEL_38;
      }
    }
LABEL_56:
    sub_1C71608(Item, v12);
  }
LABEL_38:
  Item = (WarEntity_o *)this->fields.titleInfo;
  if ( !Item )
    goto LABEL_56;
  Item = (WarEntity_o *)TitleInfoControl__TryGetTerminalTitleKind((TitleInfoControl_o *)Item, warId, &kind, 0);
  if ( !this->fields.titleInfo )
    goto LABEL_56;
  if ( ((unsigned __int8)Item & 1) != 0 )
    v51 = kind;
  else
    v51 = 94;
  TitleInfoControl__setTitleImg(this->fields.titleInfo, v51, 0, 0, 0);
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, warId, v52);
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
      v54 = this->fields.scrollBar;
      if ( !v54 )
        goto LABEL_56;
      if ( v54->fields.mSize <= 0.98 )
      {
        v55 = this->fields.itemList;
        v56 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v56,
          (Il2CppObject *)v10,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__,
          0);
        if ( !v55 )
          goto LABEL_56;
        v57 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v55,
                (System_Predicate_T__o *)v56,
                (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v57 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v57[1].klass), 0);
      }
    }
  }
  Item = (WarEntity_o *)this->fields.selectMenuBackBtn;
  if ( !Item )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, warId != 0, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15198/*"UpdateScrollPosition"*/, 0.0, 0);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v21; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x22
  System_Func_object__int__o *_9__23_1; // x23
  Il2CppObject *v24; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v33; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x22
  System_Func_object__int__o *_9__23_2; // x23
  Il2CppObject *v36; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  int32_t v45; // w22
  void *Instance; // x0
  __int64 v47; // x1
  RecommendSupportData_o *v48; // x24
  __int64 v49; // x8
  int32_t v50; // w25
  bool IsQuestSetting; // w0
  System_Collections_Generic_List_object__o *itemList; // x24
  bool v53; // w26
  RecommendSupportQuestBoardListViewManager_o *v54; // x27
  Il2CppObject *Item; // x0
  int32_t v56; // w19
  System_String_o *v57; // x28
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v58; // x29
  RecommendSupportQuestBoardListViewItem_o *v59; // x25
  const MethodInfo *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  System_Collections_ICollection_o *v71; // x22
  const MethodInfo *v72; // x2
  TitleInfoControl_o *titleInfo; // x22
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v75; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v76; // x21
  System_Predicate_object__o *v77; // x22
  Il2CppObject *v78; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  Il2CppObject *v86; // x0
  System_String_o *svtName; // [xsp+10h] [xbp-70h] BYREF
  int32_t settingIndex[2]; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CC32AB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_MapMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C713B0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Find__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C713B0(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    sub_1C713B0(&StringLiteral_15198/*"UpdateScrollPosition"*/);
    byte_4CC32AB = 1;
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
           (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
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
        _9__23_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_0,
          v12,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__,
          0);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__23_0 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__23_0,
          (int32_t)_9__23_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      v20 = System_Linq_Enumerable__OrderByDescending_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
              (System_Func_TSource__TKey__o *)_9__23_0,
              (const MethodInfo_317AEBC *)Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v22 = v20;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_1 = (System_Func_object__int__o *)v21->static_fields->__9__23_1;
      if ( !_9__23_1 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v21->static_fields->__9;
        _9__23_1 = (System_Func_object__int__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_1,
          v24,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__,
          0);
        v25 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v25->__9__23_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_1;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v25->__9__23_1, (int32_t)_9__23_1, v26, v27, v28, v29, v30, v31);
      }
      v32 = System_Linq_Enumerable__ThenBy_object__int_(
              v22,
              (System_Func_TSource__TKey__o *)_9__23_1,
              (const MethodInfo_318A150 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v33 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v34 = v32;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v33 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_2 = (System_Func_object__int__o *)v33->static_fields->__9__23_2;
      if ( !_9__23_2 )
      {
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v36 = (Il2CppObject *)v33->static_fields->__9;
        _9__23_2 = (System_Func_object__int__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_2,
          v36,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__,
          0);
        v37 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v37->__9__23_2 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_2;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v37->__9__23_2, (int32_t)_9__23_2, v38, v39, v40, v41, v42, v43);
      }
      v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                   v34,
                                                                   (System_Func_TSource__TKey__o *)_9__23_2,
                                                                   (const MethodInfo_318A150 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v9 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                          v44,
                                                          (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    }
    else
    {
      v9 = (System_Collections_Generic_List_object__o *)v8;
      if ( size < 1 )
        goto LABEL_39;
    }
    v45 = 0;
    do
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v9 )
        goto LABEL_71;
      v48 = (RecommendSupportData_o *)*((_QWORD *)Instance + 14);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v45,
                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      v49 = *((_QWORD *)Instance + 2);
      if ( !v49 )
        goto LABEL_71;
      v50 = *(_DWORD *)(v49 + 16);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v9,
                   v45,
                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v48 )
        goto LABEL_71;
      IsQuestSetting = RecommendSupportData__TryGetIsQuestSetting(
                         v48,
                         v50,
                         *((_DWORD *)Instance + 10),
                         settingIndex,
                         &svtName,
                         0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v53 = IsQuestSetting;
      v54 = this;
      Item = System_Collections_Generic_List_object___get_Item(
               v9,
               v45,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      v56 = settingIndex[0];
      v57 = svtName;
      v58 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)Item;
      v59 = (RecommendSupportQuestBoardListViewItem_o *)sub_1C715FC(RecommendSupportQuestBoardListViewItem_TypeInfo);
      RecommendSupportQuestBoardListViewItem___ctor(v59, v45, 0, v58, v53, v56, v57, v60);
      if ( !itemList )
        goto LABEL_71;
      items = itemList->fields._items;
      v68 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_71;
      v69 = itemList->fields._size;
      this = v54;
      if ( (unsigned int)v69 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v59,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &items->obj.klass + v69;
        itemList->fields._size = v69 + 1;
        v70[4] = (Il2CppClass *)v59;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v70 + 4), (int32_t)v59, v61, v62, v63, v64, v65, v66);
      }
    }
    while ( size != ++v45 );
  }
LABEL_39:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = MapMaster__getList((MapMaster_o *)Instance, parentFolderWarId, 0);
  if ( !this->fields.titleInfo )
    goto LABEL_71;
  v71 = (System_Collections_ICollection_o *)Instance;
  if ( TitleInfoControl__TryGetTerminalTitleKind(this->fields.titleInfo, parentFolderWarId, &settingIndex[1], 0) )
  {
    Instance = this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_71;
    TitleInfoControl__setTitleImg((TitleInfoControl_o *)Instance, settingIndex[1], 0, 0, 0);
  }
  else
  {
    Instance = (void *)BasicHelper__IsNullOrEmpty(v71, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v71 )
        goto LABEL_71;
      if ( !LODWORD(v71[1].monitor) )
        sub_1C71610(Instance);
      Instance = v71[2].klass;
      if ( !Instance )
        goto LABEL_71;
      titleInfo = this->fields.titleInfo;
      Instance = (void *)MapEntity__GetPrioredHeaderId((MapEntity_o *)Instance, 0, 0, 0);
      if ( !titleInfo )
        goto LABEL_71;
      TitleInfoControl__setTitleImgFromBanner(titleInfo, (int32_t)Instance, 0, 1, 0, 0);
    }
  }
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, parentFolderWarId, v72);
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
      v75 = this->fields.scrollBar;
      if ( !v75 )
        goto LABEL_71;
      if ( v75->fields.mSize <= 0.98 )
      {
        v76 = this->fields.itemList;
        Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
          Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v77 = *(System_Predicate_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
        if ( !v77 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          }
          v78 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v77 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_ListViewItem__TypeInfo);
          System_Predicate_object____ctor(
            v77,
            v78,
            Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__,
            0);
          v79 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
          v79->__9__23_3 = (struct System_Predicate_ListViewItem__o *)v77;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v79->__9__23_3, (int32_t)v77, v80, v81, v82, v83, v84, v85);
        }
        if ( v76 )
        {
          v86 = System_Collections_Generic_List_object___Find(
                  (System_Collections_Generic_List_object__o *)v76,
                  (System_Predicate_T__o *)v77,
                  (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
          if ( v86 )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v86[1].klass), 0);
          goto LABEL_69;
        }
LABEL_71:
        sub_1C71608(Instance, v47);
      }
    }
  }
LABEL_69:
  Instance = this->fields.selectMenuBackBtn;
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_15198/*"UpdateScrollPosition"*/, 0.0, 0);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v25; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v28; // s9
  System_Action_o *v29; // x19

  if ( (byte_4CC32AD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo);
    byte_4CC32AD = 1;
  }
  v9 = sub_1C715FC(RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = folderInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)folderInfo, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 32) = warId;
  *(_DWORD *)(v9 + 36) = focusWarId;
  slideComponent = this->fields.slideComponent;
  this->fields.state = 1;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v25);
  extiTime = this->fields.extiTime;
  v28 = OUT_POS_OFS_X;
  v29 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__,
    0);
  if ( !slideComponent )
LABEL_6:
    sub_1C71608(v10, v11);
  SlideFadeObject__SlideOut_36406356(slideComponent, v28, extiTime, 0.0, v29, 0);
}


void RecommendSupportQuestBoardListViewManager__Init(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  BalanceConfig_c *v11; // x0
  int32_t RecommendSupportMemberMax; // w20
  System_Collections_Generic_List_object__o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1
  int32_t i; // w27
  BalanceConfig_c *v22; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *v24; // x22
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  const MethodInfo *v36; // x1

  if ( (byte_4CC32A7 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C713B0(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Dictionary_int__int___Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
    sub_1C713B0(&System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
    byte_4CC32A7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31A49B8 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  this->fields.slideComponent = (struct SlideFadeObject_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.slideComponent,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  RecommendSupportMemberMax = v11->static_fields->RecommendSupportMemberMax;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
  System_Collections_Generic_List_object____ctor_58785620(
    v13,
    RecommendSupportMemberMax,
    (const MethodInfo_380FF54 *)Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
  this->fields.selectWarId = (struct System_Collections_Generic_List_Dictionary_int__int___o *)v13;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.selectWarId, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  for ( i = 0; ; ++i )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    if ( i >= v22->static_fields->RecommendSupportMemberMax )
      break;
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v24,
      (const MethodInfo_3458E18 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( !selectWarId )
      goto LABEL_17;
    items = selectWarId->fields._items;
    v33 = Method_System_Collections_Generic_List_Dictionary_int__int___Add__;
    ++selectWarId->fields._version;
    if ( !items )
      goto LABEL_17;
    size = selectWarId->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectWarId,
        (Il2CppObject *)v24,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      selectWarId->fields._size = size + 1;
      v35[4] = (Il2CppClass *)v24;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v24, v26, v27, v28, v29, v30, v31);
    }
  }
  questSelectDialog = this->fields.questSelectDialog;
  if ( !questSelectDialog )
LABEL_17:
    sub_1C71608(questSelectDialog, v20);
  RecommendSupportQuestSelectDialogComponent__Init(questSelectDialog, v20);
  RecommendSupportQuestBoardListViewManager__InitQuestFolderList(this, v36);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x20
  struct WarEntity_o *warEntity; // x8
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v19; // x21
  System_Func_object__bool__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v22; // x0
  const MethodInfo *v23; // x4
  System_Collections_Generic_List_object__o *selectWarId; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  RecommendSupportQuestBoardListViewManager___c_c *v26; // x0
  System_Func_object__bool__o *_9__21_1; // x21
  Il2CppObject *v28; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v37; // x0
  const MethodInfo *v38; // x5
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CC32A9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C713B0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_1C713B0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_4CC32A9 = 1;
  }
  value = 0;
  v3 = sub_1C715FC(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfo, 0, 1, 0, 94, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite_40108768((TitleInfoControl_o *)titleInfo, 1, 0, 0, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)titleInfo, 3, 1, 0);
  this->fields.state = 0;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  v6 = (RecommendSupportData_o *)*((_QWORD *)titleInfo + 14);
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo || !v3 || !v6 )
    goto LABEL_26;
  RecommendSupportData__TryGetQuest(v6, *((_DWORD *)titleInfo + 30), (int32_t *)(v3 + 16), (int32_t *)(v3 + 20), 0);
  recommendQuestList = this->fields.recommendQuestList;
  v8 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__,
    0);
  v9 = System_Linq_Enumerable__FirstOrDefault_object__51858576(
         (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
  p_settingQuestInfo = &this->fields.settingQuestInfo;
  this->fields.settingQuestInfo = (struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)v9;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.settingQuestInfo, (int32_t)v9, v11, v12, v13, v14, v15, v16);
  if ( this->fields.settingQuestInfo )
  {
    v17 = sub_1C715FC(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v17, 0);
    if ( *p_settingQuestInfo )
    {
      warEntity = (*p_settingQuestInfo)->fields.warEntity;
      if ( warEntity )
      {
        if ( v17 )
        {
          *(_DWORD *)(v17 + 16) = warEntity->fields.id;
          v19 = this->fields.recommendQuestList;
          v20 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v20,
            (Il2CppObject *)v17,
            Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__,
            0);
          v21 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                  (System_Func_TSource__bool__o *)v20,
                  (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          v22 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)System_Linq_Enumerable__ToList_object_(v21, (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          RecommendSupportQuestBoardListViewManager__CreateQuestList(this, v22, *(_DWORD *)(v17 + 16), 0, v23);
          return;
        }
      }
    }
LABEL_26:
    sub_1C71608(titleInfo, v4);
  }
  this->fields.currentFolderWarId = 0;
  selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  if ( !selectWarId )
    goto LABEL_26;
  titleInfo = System_Collections_Generic_List_object___get_Item(
                selectWarId,
                *((_DWORD *)titleInfo + 30),
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
  if ( !titleInfo )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___TryGetValue(
    (System_Collections_Generic_Dictionary_int__int__o *)titleInfo,
    this->fields.currentFolderWarId,
    &value,
    (const MethodInfo_345AE74 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  v26 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    v26 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  _9__21_1 = (System_Func_object__bool__o *)v26->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__21_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__21_1,
      v28,
      Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__,
      0);
    static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__o *)_9__21_1;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_1,
      (int32_t)_9__21_1,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
          (System_Func_TSource__bool__o *)_9__21_1,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  v37 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_(v36, (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(this, v37, 0, value, 0, v38);
}


void RecommendSupportQuestBoardListViewManager__InitQuestFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o **p_recommendQuestFolderList; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *Master_object; // x25
  Il2CppObject *v19; // x20
  CommonReleaseMaster_o *IsOpen; // x0
  __int64 dispCommonReleaseId; // x1
  CommonReleaseMaster_o *v22; // x28
  RecommendSupportQuestEntity_array *List; // x26
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x25
  unsigned int v26; // w21
  RecommendSupportQuestEntity_o *v27; // x22
  __int64 v28; // x27
  int32_t questId; // w28
  System_String_o *questMessage; // x25
  int32_t priority; // w22
  int32_t questPhase; // w28
  WarEntity_o *v33; // x23
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v34; // x29
  const MethodInfo *v35; // x6
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  Il2CppClass *v42; // x8
  _QWORD *v43; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x25
  System_Func_object__bool__o *v47; // x22
  int32_t PrioredParentId; // w29
  System_Collections_Generic_List_object__o *v49; // x27
  Il2CppObject *v50; // x22
  __int64 v51; // x28
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  _BOOL8 v68; // x0
  __int64 v69; // x1
  System_Collections_Generic_List_object__o *v70; // x21
  Il2CppObject *v71; // x23
  __int64 v72; // x22
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  __int64 v79; // x0
  __int64 v80; // x1
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  Il2CppObject **v91; // [xsp+8h] [xbp-E8h]
  QuestEntity_o *questEnt; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o **p_recommendQuestList; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_HashSet_int__o *v94; // [xsp+20h] [xbp-D0h]
  Il2CppObject *v95; // [xsp+28h] [xbp-C8h]
  DataMasterBase_TMaster__TEntity__PKType__o *v96; // [xsp+30h] [xbp-C0h]
  CommonReleaseMaster_o *v97; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v98; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *v99; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v100; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *v101; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4CC32A8 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SpotMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C713B0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
    sub_1C713B0(&RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
    sub_1C713B0(&RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
    byte_4CC32A8 = 1;
  }
  v101 = 0;
  entity = 0;
  memset(&v100, 0, sizeof(v100));
  v99 = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  p_recommendQuestFolderList = &this->fields.recommendQuestFolderList;
  this->fields.recommendQuestFolderList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v3;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.recommendQuestFolderList,
    (int32_t)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
  this->fields.recommendQuestList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)v11;
  p_recommendQuestList = &this->fields.recommendQuestList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.recommendQuestList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  v95 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestMaster___);
  v96 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SpotMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarMaster___);
  IsOpen = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_55;
  v22 = IsOpen;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0);
  v94 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v94,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !List )
    goto LABEL_55;
  max_length = List->max_length;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)v95;
  if ( max_length >= 1 )
  {
    v26 = 0;
    v97 = v22;
    do
    {
      if ( v26 >= max_length )
        sub_1C71610(IsOpen);
      v27 = List->m_Items[v26];
      v28 = sub_1C715FC(RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v28, 0);
      if ( !v27 )
        goto LABEL_55;
      if ( !v27->fields.baseQuestId )
      {
        dispCommonReleaseId = (unsigned int)v27->fields.dispCommonReleaseId;
        if ( (_DWORD)dispCommonReleaseId )
        {
          if ( !v22 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v22, dispCommonReleaseId, 0, 0, 0);
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        else
        {
          questId = v27->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = (CommonReleaseMaster_o *)CondType__IsQuestClear_40596552(questId, -1, 0, 0);
          v22 = v97;
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        if ( !v25 )
          goto LABEL_55;
        IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            v25,
                                            &entity,
                                            v27->fields.questId,
                                            (const MethodInfo_3408ECC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsOpen & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)v96;
          if ( !v96 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v96,
                                              &v101,
                                              (int32_t)entity[3].klass,
                                              (const MethodInfo_3408ECC *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsOpen & 1) != 0 )
          {
            if ( !v28 || !v101 || !v19 )
              goto LABEL_55;
            IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                                                (Il2CppObject **)(v28 + 16),
                                                HIDWORD(v101[1].klass),
                                                (const MethodInfo_3408ECC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
            {
              questMessage = v27->fields.questMessage;
              questPhase = v27->fields.questPhase;
              priority = v27->fields.priority;
              v91 = (Il2CppObject **)(v28 + 16);
              questEnt = (QuestEntity_o *)entity;
              v33 = *(WarEntity_o **)(v28 + 16);
              v34 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)sub_1C715FC(RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
              RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
                v34,
                questEnt,
                v33,
                questMessage,
                questPhase,
                priority,
                v35);
              IsOpen = (CommonReleaseMaster_o *)*p_recommendQuestList;
              if ( !*p_recommendQuestList )
                goto LABEL_55;
              v42 = *(Il2CppClass **)&IsOpen->fields._MasterKind_k__BackingField;
              v43 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
              ++HIDWORD(IsOpen->fields._MasterName_k__BackingField);
              if ( !v42 )
                goto LABEL_55;
              MasterName_k__BackingField_low = SLODWORD(IsOpen->fields._MasterName_k__BackingField);
              v22 = v97;
              if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v42->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)IsOpen,
                  (Il2CppObject *)v34,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
              }
              else
              {
                v45 = &v42->_1.image + MasterName_k__BackingField_low;
                LODWORD(IsOpen->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v45[4] = v34;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v34, v36, v37, v38, v39, v40, v41);
              }
              v46 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_recommendQuestFolderList;
              v47 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v47,
                (Il2CppObject *)v28,
                Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
                0);
              IsOpen = (CommonReleaseMaster_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                                  v46,
                                                  (System_Func_TSource__bool__o *)v47,
                                                  (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
              v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)v95;
              if ( !IsOpen )
              {
                IsOpen = (CommonReleaseMaster_o *)*v91;
                if ( !*v91 )
                  goto LABEL_55;
                PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)IsOpen, 0);
                IsOpen = (CommonReleaseMaster_o *)v94;
                if ( !v94 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___Add(
                  v94,
                  PrioredParentId,
                  (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v49 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
                v50 = *v91;
                v51 = sub_1C715FC(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v51, 0);
                *(_QWORD *)(v51 + 16) = v50;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v51 + 16), (int32_t)v50, v52, v53, v54, v55, v56, v57);
                *(_DWORD *)(v51 + 24) = PrioredParentId;
                if ( !v49 )
                  goto LABEL_55;
                items = v49->fields._items;
                v65 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
                ++v49->fields._version;
                if ( !items )
                  goto LABEL_55;
                size = v49->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v49,
                    (Il2CppObject *)v51,
                    *(const MethodInfo_3810718 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
                }
                else
                {
                  v67 = &items->obj.klass + size;
                  v49->fields._size = size + 1;
                  v67[4] = (Il2CppClass *)v51;
                  sub_1C71354((GrandQuestFolderBoardItem_o *)(v67 + 4), v51, v58, v59, v60, v61, v62, v63);
                }
                v22 = v97;
              }
            }
          }
        }
      }
LABEL_12:
      max_length = List->max_length;
    }
    while ( (int)++v26 < max_length );
  }
  if ( !v94 )
LABEL_55:
    sub_1C71608(IsOpen, dispCommonReleaseId);
  System_Collections_Generic_HashSet_int___Remove(
    v94,
    0,
    (const MethodInfo_36C1628 *)Method_System_Collections_Generic_HashSet_int__Remove__);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v98,
    v94,
    (const MethodInfo_36C18E8 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v100 = v98;
  while ( 1 )
  {
    v68 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v100,
            (const MethodInfo_3592248 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v68 )
      break;
    if ( !v19 )
      sub_1C71608(v68, v69);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
           &v99,
           (int32_t)v100.fields._current,
           (const MethodInfo_3408ECC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v70 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
      v71 = v99;
      v72 = sub_1C715FC(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
      System_Object___ctor((Il2CppObject *)v72, 0);
      *(_QWORD *)(v72 + 16) = v71;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v72 + 16), (int32_t)v71, v73, v74, v75, v76, v77, v78);
      *(_DWORD *)(v72 + 24) = 0;
      if ( !v70 )
        sub_1C71608(v79, v80);
      v87 = v70->fields._items;
      v88 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
      ++v70->fields._version;
      if ( !v87 )
        sub_1C71608(v79, v80);
      v89 = v70->fields._size;
      if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v70,
          (Il2CppObject *)v72,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = &v87->obj.klass + v89;
        v70->fields._size = v89 + 1;
        v90[4] = (Il2CppClass *)v72;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v90 + 4), v72, v81, v82, v83, v84, v85, v86);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v100,
    (const MethodInfo_3592244 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  RecommendSupportQuestBoardListViewItem_o *Item; // x0
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int v22; // w21
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x21
  System_Collections_Generic_List_T__o *recommendQuestFolderList; // x23
  System_Func_object__bool__o *v34; // x24
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v35; // x22
  System_Func_object__bool__o *v36; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_TSource__o *v38; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x22
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v40; // x20
  __int64 v41; // x8
  const MethodInfo *v42; // x4
  __int64 v43; // x8
  __int64 v44; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  __int64 v57; // x8
  __int64 v58; // x8
  __int64 v59; // x1
  __int64 v60; // x8
  RecommendSupportQuestBoardListViewItem_o *v61; // x20
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x19
  int monitor; // w23
  int v64; // w24
  System_Action_o *v65; // x22
  const MethodInfo *v66; // x4
  __int64 v67; // x21
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  Il2CppObject *v74; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x22
  System_Func_object__bool__o *v76; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Collections_Generic_List_TSource__o *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v86; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v89; // s9
  System_Action_o *v90; // x19
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CC32AC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    sub_1C713B0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
    sub_1C713B0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo);
    byte_4CC32AC = 1;
  }
  value = 0;
  v5 = sub_1C715FC(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_37;
  Item = RecommendSupportQuestBoardListViewObject__GetItem(obj, v7);
  *(_QWORD *)(v5 + 24) = Item;
  v15 = v5 + 24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)Item, v16, v17, v18, v19, v20, v21);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_37;
  v22 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 24) + 136LL);
  v23 = Method_RecommendSupportQuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1C713C8(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
  v24 = (System_Reflection_MethodBase_o *)sub_1C71394(v23, v23[4]);
  if ( v22 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v24, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0, 0);
  if ( !*(_QWORD *)v15 )
    goto LABEL_37;
  v31 = *(_QWORD *)(*(_QWORD *)v15 + 120LL);
  *(_QWORD *)(v5 + 16) = v31;
  v32 = v5 + 16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), v31, v25, v26, v27, v28, v29, v30);
  if ( *(_QWORD *)(v5 + 16) )
  {
    recommendQuestFolderList = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestFolderList;
    v34 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v34,
      (Il2CppObject *)v5,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__,
      0);
    Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                 recommendQuestFolderList,
                                 (System_Func_T__bool__o *)v34,
                                 (const MethodInfo_31341D4 *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v35 = this->fields.recommendQuestFolderList;
      v36 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v36,
        (Il2CppObject *)v5,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__,
        0);
      v37 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v35,
              (System_Func_TSource__bool__o *)v36,
              (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      v38 = System_Linq_Enumerable__ToList_object_(
              v37,
              (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
      v40 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v38;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance )
      {
        if ( selectWarId )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       selectWarId,
                       (int32_t)Instance[7].monitor,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
          if ( *(_QWORD *)v32 )
          {
            v41 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
            if ( v41 )
            {
              if ( Instance )
              {
                Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__int___TryGetValue(
                                             (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                             *(_DWORD *)(v41 + 16),
                                             &value,
                                             (const MethodInfo_345AE74 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
                if ( *(_QWORD *)v32 )
                {
                  v43 = *(_QWORD *)(*(_QWORD *)v32 + 16LL);
                  if ( v43 )
                  {
                    RecommendSupportQuestBoardListViewManager__DispFolderList(
                      this,
                      v40,
                      *(_DWORD *)(v43 + 16),
                      value,
                      v42);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1C71608(Instance, v7);
    }
  }
  if ( !*(_QWORD *)v15 )
    goto LABEL_37;
  if ( *(_QWORD *)(*(_QWORD *)v15 + 128LL) )
  {
    v44 = sub_1C715FC(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v44, 0);
    if ( !v44 )
      goto LABEL_37;
    *(_QWORD *)(v44 + 32) = v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v44 + 32), v5, v45, v46, v47, v48, v49, v50);
    v57 = *(_QWORD *)(v44 + 32);
    if ( !v57 )
      goto LABEL_37;
    v58 = *(_QWORD *)(v57 + 24);
    if ( !v58 )
      goto LABEL_37;
    v59 = *(_QWORD *)(v58 + 128);
    *(_QWORD *)(v44 + 16) = v59;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v44 + 16), v59, v51, v52, v53, v54, v55, v56);
    v60 = *(_QWORD *)(v44 + 32);
    if ( !v60 )
      goto LABEL_37;
    v61 = *(RecommendSupportQuestBoardListViewItem_o **)(v60 + 24);
    if ( !v61 )
      goto LABEL_37;
    *(_DWORD *)(v44 + 24) = v61->fields._SettingSelectIndex_k__BackingField;
    questSelectDialog = this->fields.questSelectDialog;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    monitor = (int)Instance[7].monitor;
    v64 = *(_DWORD *)(v44 + 24);
    v65 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v65,
      (Il2CppObject *)v44,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__,
      0);
    if ( !questSelectDialog )
      goto LABEL_37;
    RecommendSupportQuestSelectDialogComponent__Open(questSelectDialog, v61, monitor == v64, v65, v66);
  }
  else
  {
    v67 = sub_1C715FC(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v67, 0);
    if ( !v67 )
      goto LABEL_37;
    *(_QWORD *)(v67 + 24) = v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v67 + 24), v5, v68, v69, v70, v71, v72, v73);
    v74 = *(Il2CppObject **)(v67 + 24);
    if ( !v74 )
      goto LABEL_37;
    if ( v74[1].klass )
    {
      recommendQuestList = this->fields.recommendQuestList;
      v76 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v76,
        v74,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__,
        0);
      v77 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
              (System_Func_TSource__bool__o *)v76,
              (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v78 = System_Linq_Enumerable__ToList_object_(
              v77,
              (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      *(_QWORD *)(v67 + 16) = v78;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v67 + 16), (int32_t)v78, v79, v80, v81, v82, v83, v84);
      slideComponent = this->fields.slideComponent;
      this->fields.state = 1;
      OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v86);
      extiTime = this->fields.extiTime;
      v89 = OUT_POS_OFS_X;
      v90 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        v90,
        (Il2CppObject *)v67,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__,
        0);
      if ( !slideComponent )
        goto LABEL_37;
      SlideFadeObject__SlideOut_36406356(slideComponent, v89, extiTime, 0.0, v90, 0);
    }
  }
}


void RecommendSupportQuestBoardListViewManager__OnDestroy(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct System_Collections_Generic_List_Dictionary_int__int___o *selectWarId; // x8
  int32_t size; // w2
  int v10; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x8
  int32_t v12; // w2
  int v13; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x8
  int32_t v15; // w2
  GrandQuestFolderBoardItem_o *p_recommendQuestList; // x19
  int v17; // w9

  if ( (byte_4CC32B1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Dictionary_int__int___Clear__);
    byte_4CC32B1 = 1;
  }
  selectWarId = this->fields.selectWarId;
  if ( selectWarId )
  {
    size = selectWarId->fields._size;
    v10 = selectWarId->fields._version + 1;
    selectWarId->fields._size = 0;
    selectWarId->fields._version = v10;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectWarId->fields._items, 0, size, 0);
    this->fields.selectWarId = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.selectWarId, 0, size, v2, v3, v4, v5, v6);
  }
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  if ( recommendQuestFolderList )
  {
    v12 = recommendQuestFolderList->fields._size;
    v13 = recommendQuestFolderList->fields._version + 1;
    recommendQuestFolderList->fields._size = 0;
    recommendQuestFolderList->fields._version = v13;
    if ( v12 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestFolderList->fields._items, 0, v12, 0);
    this->fields.recommendQuestFolderList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.recommendQuestFolderList, 0, v12, v2, v3, v4, v5, v6);
  }
  recommendQuestList = this->fields.recommendQuestList;
  if ( recommendQuestList )
  {
    v15 = recommendQuestList->fields._size;
    p_recommendQuestList = (GrandQuestFolderBoardItem_o *)&this->fields.recommendQuestList;
    v17 = recommendQuestList->fields._version + 1;
    recommendQuestList->fields._size = 0;
    recommendQuestList->fields._version = v17;
    if ( v15 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestList->fields._items, 0, v15, 0);
    p_recommendQuestList->klass = 0;
    sub_1C71354(p_recommendQuestList, 0, v15, v2, v3, v4, v5, v6);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v17; // x22
  System_Func_object__bool__o *v18; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v20; // x21
  const MethodInfo *v21; // x4
  __int64 v22; // x8
  int32_t v23; // w3
  const MethodInfo *v24; // x2

  if ( (byte_4CC32AF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    sub_1C713B0(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__);
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo);
    byte_4CC32AF = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_RecommendSupportQuestBoardListViewManager_OnclickBack__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( this->fields.currentFolderWarId )
    {
      v5 = sub_1C715FC(RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      recommendQuestFolderList = this->fields.recommendQuestFolderList;
      v7 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v7,
        (Il2CppObject *)this,
        Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__,
        0);
      Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
                                                            (System_Func_TSource__bool__o *)v7,
                                                            (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      if ( v5 )
      {
        *(_QWORD *)(v5 + 16) = Item;
        v16 = v5 + 16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Item, v10, v11, v12, v13, v14, v15);
        v17 = this->fields.recommendQuestFolderList;
        v18 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v18,
          (Il2CppObject *)v5,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__,
          0);
        v19 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                (System_Func_TSource__bool__o *)v18,
                (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v19,
                                                              (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        if ( Item )
        {
          v20 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)Item;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                0,
                                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( Item )
          {
            if ( !*(_QWORD *)v16 )
            {
              v23 = 0;
              goto LABEL_16;
            }
            v22 = *(_QWORD *)(*(_QWORD *)v16 + 16LL);
            if ( v22 )
            {
              v23 = *(_DWORD *)(v22 + 16);
LABEL_16:
              RecommendSupportQuestBoardListViewManager__DispFolderList(this, v20, Item->fields._size, v23, v21);
              return;
            }
          }
        }
      }
    }
    else
    {
      Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Item )
      {
        RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Item, 0, v24);
        return;
      }
    }
    sub_1C71608(Item, v9);
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

  if ( (byte_4CC32B0 & 1) == 0 )
  {
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CC32B0 = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      sub_1C71608(0, v6);
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
    sub_1C71608(scrollView, method);
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

  if ( (byte_4CC32AE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CC32AE = 1;
  }
  value = 0;
  if ( parentFolderWarId )
  {
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || !selectWarId
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            selectWarId,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0
      || (v8 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                 Instance,
                 this->fields.currentFolderWarId,
                 &value,
                 (const MethodInfo_345AE74 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__),
          v9 = (System_Collections_Generic_List_object__o *)this->fields.selectWarId,
          v10 = v8,
          (Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
      || !v9
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v9,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0 )
    {
      sub_1C71608(Instance, v7);
    }
    currentFolderWarId = this->fields.currentFolderWarId;
    if ( v10 )
      System_Collections_Generic_Dictionary_int__int___set_Item(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_34597C8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    else
      System_Collections_Generic_Dictionary_int__int___Add(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_34597DC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
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
    sub_1C71608(this, x);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC32B2 & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    byte_4CC32B2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestBoardListViewManager___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C71608(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0);
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.priority;
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0 )
    sub_1C71608(this, x);
  return questEntity->fields.id;
}


int32_t RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_2(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
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

  if ( (byte_4CC32B3 & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CC32B3 = 1;
  }
  if ( !item )
    goto LABEL_8;
  naturalAligment = RecommendSupportQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    index = item[1].fields.index;
    this = (RecommendSupportQuestBoardListViewManager___c_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
      return index == LODWORD(this[7].monitor);
LABEL_8:
    sub_1C71608(this, item);
  }
  v7 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *)sub_1C719A4(item);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___InitQuestFolderList_b__0(v7, v8, v9);
}


bool RecommendSupportQuestBoardListViewManager___c___InitOpen_b__21_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
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
    sub_1C71608(this, x);
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
    sub_1C71608(this, x);
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
    sub_1C71608(this, x);
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
  if ( (byte_4CC32B4 & 1) == 0 )
  {
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *)sub_1C713B0(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    byte_4CC32B4 = 1;
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
    sub_1C71608(this, item);
  }
  v9 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)sub_1C719A4(v3);
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
    sub_1C71608(this, x);
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
    sub_1C71608(this, x);
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
    sub_1C71608(this, x);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC32B5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__);
    byte_4CC32B5 = 1;
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
    _9__6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__,
      0);
    this->fields.__9__6 = _9__6;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__6, (int32_t)_9__6, v10, v11, v12, v13, v14, v15);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1C71608(_4__this, method);
  SlideFadeObject__SlideIn_36405412(slideComponent, v9, intoTime, 0.0, _9__6, 0);
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
    sub_1C71608(this, method);
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

  if ( (byte_4CC32B6 & 1) == 0 )
  {
    sub_1C713B0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CC32B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = (RecommendSupportData_o *)Instance[7].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)Instance[7].klass) == 0
    || (RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, this->fields.index, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_31E56D8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0
    || (Instance = (Il2CppObject *)Instance[10].klass) == 0 )
  {
LABEL_17:
    sub_1C71608(Instance, v4);
  }
  RecommendSupportListViewManager__SetItemSub((RecommendSupportListViewManager_o *)Instance, this->fields.index, v8);
LABEL_15:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v3 = this;
  if ( (byte_4CC32B7 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *)sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__);
    byte_4CC32B7 = 1;
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
    _9__5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)CS___8__locals2,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__,
      0);
    CS___8__locals2->fields.__9__5 = _9__5;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&CS___8__locals2->fields.__9__5,
      (int32_t)_9__5,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !_4__this )
LABEL_10:
    sub_1C71608(this, method);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v3 = this;
  if ( (byte_4CC32B8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__);
    byte_4CC32B8 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  folderInfo = v3->fields.folderInfo;
  warId = v3->fields.warId;
  focusWarId = v3->fields.focusWarId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
    sub_1C71608(this, method);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CC32B9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__);
    byte_4CC32B9 = 1;
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
    _9__2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1C71608(_4__this, method);
  SlideFadeObject__SlideIn_36405412(slideComponent, v9, intoTime, 0.0, _9__2, 0);
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
    sub_1C71608(this, method);
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
  if ( (byte_4CC32BA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_int___ctor__);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *)sub_1C713B0(&Method_System_Nullable_int__get_HasValue__);
    byte_4CC32BA = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  parentWarFolder = v4->fields.parentWarFolder;
  parentWarId = x->fields.parentWarId;
  if ( parentWarFolder )
  {
    v7 = parentWarFolder->fields.parentWarId;
    v8 = (System_Nullable_int__o)&v10;
    v10 = 0;
    System_Nullable_int____ctor(v8, v7, (const MethodInfo_3938D3C *)Method_System_Nullable_int___ctor__);
    parentWarFolder = v10;
  }
  return (unsigned __int8)parentWarFolder != 0 && parentWarId == HIDWORD(parentWarFolder);
}
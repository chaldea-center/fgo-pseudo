void __fastcall RecommendSupportQuestBoardListViewManager___ctor(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  this->fields.slideOutPosX = 784.0;
  *(_QWORD *)&this->fields.warArrangementPitchY = 0xFFFFFF69FFFFFF8ALL;
  *(_QWORD *)&this->fields.intoTime = 0x3E8000003F000000LL;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__CreateChapterList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfos,
        int32_t parentFolderWarId,
        int32_t focusWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x20
  WarEntity_o *Item; // x0
  __int64 v29; // x1
  int32_t size; // w29
  RecommendSupportQuestBoardListViewManager___c_c *v31; // x0
  System_Comparison_T__o *_9__22_0; // x24
  Il2CppObject *v33; // x25
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *settingQuestInfo; // x8
  struct WarEntity_o *warEntity; // x8
  int32_t id; // w1
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v40; // x8
  __int64 v41; // x19
  int32_t PrioredParentId; // w1
  int32_t v43; // w24
  __int64 v44; // x8
  char v45; // w27
  __int64 v46; // x8
  System_Collections_Generic_List_object__o *itemList; // x25
  RecommendSupportQuestBoardListViewManager_o *v48; // x21
  Il2CppObject *v49; // x28
  RecommendSupportQuestBoardListViewItem_o *v50; // x26
  const MethodInfo *v51; // x7
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  int32_t v58; // w1
  const MethodInfo *v59; // x2
  UnityEngine_Object_o *scrollBar; // x23
  struct UIScrollBar_o *v61; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v62; // x23
  System_Predicate_object__o *v63; // x24
  Il2CppObject *v64; // x0
  int32_t warId; // [xsp+1Ch] [xbp-84h]
  __int64 v67; // [xsp+28h] [xbp-78h]
  __int64 v68; // [xsp+30h] [xbp-70h] BYREF
  int32_t kind; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_int__o v70; // 0:x0.8
  System_Nullable_int__o v71; // 0:x0.8

  if ( (byte_4B4097B & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo, folderInfos);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Find__, v11);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__,
      v12);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__,
      v13);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__,
      v14);
    sub_1BDB878(&Method_System_Nullable_int__GetValueOrDefault__, v15);
    sub_1BDB878(&Method_System_Nullable_int___ctor__, v16);
    sub_1BDB878(&Method_System_Nullable_int__get_HasValue__, v17);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v18);
    sub_1BDB878(&System_Predicate_ListViewItem__TypeInfo, v19);
    sub_1BDB878(&RecommendSupportQuestBoardListViewItem_TypeInfo, v20);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__, v21);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__, v22);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo, v23);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v24);
    sub_1BDB878(&StringLiteral_1/*""*/, v25);
    sub_1BDB878(&StringLiteral_15165/*"UpdateScrollPosition"*/, v26);
    byte_4B4097B = 1;
  }
  kind = 0;
  v27 = sub_1BDBAC4(RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_56;
  *(_DWORD *)(v27 + 16) = focusWarId;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.warArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( folderInfos )
  {
    size = folderInfos->fields._size;
    if ( size >= 2 )
    {
      v31 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v31 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__22_0 = (System_Comparison_T__o *)v31->static_fields->__9__22_0;
      if ( !_9__22_0 )
      {
        if ( !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          v31 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v33 = (Il2CppObject *)v31->static_fields->__9;
        _9__22_0 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
        System_Comparison_object____ctor(
          _9__22_0,
          v33,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateChapterList_b__22_0__,
          0LL);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__22_0 = (struct System_Comparison_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)_9__22_0;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v35, v36);
      }
      System_Collections_Generic_List_object___Sort_57505928(
        (System_Collections_Generic_List_object__o *)folderInfos,
        _9__22_0,
        (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Sort__);
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
    v41 = 0LL;
LABEL_20:
    v67 = 0LL;
    goto LABEL_21;
  }
  warEntity = settingQuestInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_56;
  id = warEntity->fields.id;
  v70 = (System_Nullable_int__o)&v68;
  v68 = 0LL;
  System_Nullable_int____ctor(v70, id, (const MethodInfo_37F58C8 *)Method_System_Nullable_int___ctor__);
  v40 = this->fields.settingQuestInfo;
  v41 = v68;
  if ( !v40 )
    goto LABEL_20;
  Item = v40->fields.warEntity;
  if ( !Item )
    goto LABEL_56;
  PrioredParentId = WarEntity__GetPrioredParentId(Item, 0LL);
  v71 = (System_Nullable_int__o)&v68;
  v68 = 0LL;
  System_Nullable_int____ctor(v71, PrioredParentId, (const MethodInfo_37F58C8 *)Method_System_Nullable_int___ctor__);
  v67 = v68;
LABEL_21:
  if ( size >= 1 )
  {
    if ( folderInfos )
    {
      v43 = 0;
      while ( 1 )
      {
        Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)folderInfos,
                                v43,
                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        if ( !Item )
          break;
        v44 = *(_QWORD *)&Item->fields.id;
        if ( !v44 )
          break;
        if ( (_BYTE)v41 && *(_DWORD *)(v44 + 16) == HIDWORD(v41) )
        {
          v45 = 1;
        }
        else
        {
          Item = (WarEntity_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)folderInfos,
                                  v43,
                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( !Item )
            break;
          v46 = *(_QWORD *)&Item->fields.id;
          if ( !v46 )
            break;
          v45 = (unsigned __int8)v67 != 0 && *(_DWORD *)(v46 + 16) == HIDWORD(v67);
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        v48 = this;
        v49 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)folderInfos,
                v43,
                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        v50 = (RecommendSupportQuestBoardListViewItem_o *)sub_1BDBAC4(RecommendSupportQuestBoardListViewItem_TypeInfo);
        RecommendSupportQuestBoardListViewItem___ctor(
          v50,
          v43,
          (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)v49,
          0LL,
          v45,
          -1,
          (System_String_o *)StringLiteral_1/*""*/,
          v51);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v55 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v56 = itemList->fields._size;
        if ( (unsigned int)v56 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v50,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &items->obj.klass + v56;
          itemList->fields._size = v56 + 1;
          v57[4] = (Il2CppClass *)v50;
          sub_1BDB81C((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v50, v52, v53);
        }
        ++v43;
        this = v48;
        if ( size == v43 )
          goto LABEL_38;
      }
    }
LABEL_56:
    sub_1BDBAD4(Item, v29);
  }
LABEL_38:
  Item = (WarEntity_o *)this->fields.titleInfo;
  if ( !Item )
    goto LABEL_56;
  Item = (WarEntity_o *)TitleInfoControl__TryGetTerminalTitleKind((TitleInfoControl_o *)Item, warId, &kind, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_56;
  if ( ((unsigned __int8)Item & 1) != 0 )
    v58 = kind;
  else
    v58 = 94;
  TitleInfoControl__setTitleImg(this->fields.titleInfo, v58, 0, 0, 0LL);
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, warId, v59);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Item = (WarEntity_o *)this->fields.scrollBar;
    if ( !Item )
      goto LABEL_56;
    Item = (WarEntity_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0LL);
    if ( !Item )
      goto LABEL_56;
    Item = (WarEntity_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Item, 0LL);
    if ( ((unsigned __int8)Item & 1) != 0 )
    {
      v61 = this->fields.scrollBar;
      if ( !v61 )
        goto LABEL_56;
      if ( v61->fields.mSize <= 0.98 )
      {
        v62 = this->fields.itemList;
        v63 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v63,
          (Il2CppObject *)v27,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0__CreateChapterList_b__1__,
          0LL);
        if ( !v62 )
          goto LABEL_56;
        v64 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v62,
                (System_Predicate_T__o *)v63,
                (const MethodInfo_36D642C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v64 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v64[1].klass), 0LL);
      }
    }
  }
  Item = (WarEntity_o *)this->fields.selectMenuBackBtn;
  if ( !Item )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Item, warId != 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15165/*"UpdateScrollPosition"*/,
    0.0,
    0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__CreateQuestList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questInfos,
        int32_t parentFolderWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t size; // w21
  System_Collections_Generic_List_TSource__o *v27; // x0
  System_Collections_Generic_List_object__o *v28; // x23
  RecommendSupportQuestBoardListViewManager___c_c *v29; // x0
  System_Func_object__int__o *_9__23_0; // x23
  Il2CppObject *v31; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v36; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x22
  System_Func_object__int__o *_9__23_1; // x23
  Il2CppObject *v39; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v44; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x22
  System_Func_object__int__o *_9__23_2; // x23
  Il2CppObject *v47; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  int32_t v52; // w22
  void *Instance; // x0
  __int64 v54; // x1
  RecommendSupportData_o *v55; // x24
  __int64 v56; // x8
  int32_t v57; // w25
  const MethodInfo *v58; // x5
  bool IsQuestSetting; // w0
  System_Collections_Generic_List_object__o *itemList; // x24
  bool v61; // w26
  RecommendSupportQuestBoardListViewManager_o *v62; // x27
  Il2CppObject *Item; // x0
  int32_t v64; // w19
  System_String_o *v65; // x28
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v66; // x29
  RecommendSupportQuestBoardListViewItem_o *v67; // x25
  const MethodInfo *v68; // x7
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  System_Collections_ICollection_o *v75; // x22
  const MethodInfo *v76; // x2
  TitleInfoControl_o *titleInfo; // x22
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v79; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v80; // x21
  System_Predicate_object__o *v81; // x22
  Il2CppObject *v82; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  Il2CppObject *v86; // x0
  System_String_o *svtName; // [xsp+10h] [xbp-70h] BYREF
  __int64 settingIndex; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B4097C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_MapMaster___, questInfos);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___,
      v8);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___,
      v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v10);
    sub_1BDB878(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Find__, v13);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Count__,
      v14);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__,
      v15);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v16);
    sub_1BDB878(&System_Predicate_ListViewItem__TypeInfo, v17);
    sub_1BDB878(&RecommendSupportQuestBoardListViewItem_TypeInfo, v18);
    sub_1BDB878(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v19);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__, v20);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__, v21);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__, v22);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__, v23);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v24);
    sub_1BDB878(&StringLiteral_15165/*"UpdateScrollPosition"*/, v25);
    byte_4B4097C = 1;
  }
  svtName = 0LL;
  settingIndex = 0LL;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.questArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( questInfos )
  {
    size = questInfos->fields._size;
    v27 = System_Linq_Enumerable__ToList_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
            (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    if ( size >= 3 )
    {
      v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_0 = (System_Func_object__int__o *)v29->static_fields->__9__23_0;
      if ( !_9__23_0 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__23_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_0,
          v31,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_0__,
          0LL);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__23_0 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_0;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v33, v34);
      }
      v35 = System_Linq_Enumerable__OrderByDescending_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
              (System_Func_TSource__TKey__o *)_9__23_0,
              (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v36 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v37 = v35;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v36 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_1 = (System_Func_object__int__o *)v36->static_fields->__9__23_1;
      if ( !_9__23_1 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v36->static_fields->__9;
        _9__23_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_1,
          v39,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_1__,
          0LL);
        v40 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v40->__9__23_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_1;
        sub_1BDB81C((CGThumbnailListItem_o *)&v40->__9__23_1, (int32_t)_9__23_1, v41, v42);
      }
      v43 = System_Linq_Enumerable__ThenBy_object__int_(
              v37,
              (System_Func_TSource__TKey__o *)_9__23_1,
              (const MethodInfo_306FC3C *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v44 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v45 = v43;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v44 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__23_2 = (System_Func_object__int__o *)v44->static_fields->__9__23_2;
      if ( !_9__23_2 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v44 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v47 = (Il2CppObject *)v44->static_fields->__9;
        _9__23_2 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__23_2,
          v47,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_2__,
          0LL);
        v48 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v48->__9__23_2 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__23_2;
        sub_1BDB81C((CGThumbnailListItem_o *)&v48->__9__23_2, (int32_t)_9__23_2, v49, v50);
      }
      v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                   v45,
                                                                   (System_Func_TSource__TKey__o *)_9__23_2,
                                                                   (const MethodInfo_306FC3C *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v28 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v51,
                                                           (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    }
    else
    {
      v28 = (System_Collections_Generic_List_object__o *)v27;
      if ( size < 1 )
        goto LABEL_39;
    }
    v52 = 0;
    do
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v28 )
        goto LABEL_71;
      v55 = (RecommendSupportData_o *)*((_QWORD *)Instance + 14);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v28,
                   v52,
                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      v56 = *((_QWORD *)Instance + 2);
      if ( !v56 )
        goto LABEL_71;
      v57 = *(_DWORD *)(v56 + 16);
      Instance = System_Collections_Generic_List_object___get_Item(
                   v28,
                   v52,
                   (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      if ( !Instance )
        goto LABEL_71;
      if ( !v55 )
        goto LABEL_71;
      IsQuestSetting = RecommendSupportData__TryGetIsQuestSetting(
                         v55,
                         v57,
                         *((_DWORD *)Instance + 10),
                         (int32_t *)&settingIndex,
                         &svtName,
                         v58);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v61 = IsQuestSetting;
      v62 = this;
      Item = System_Collections_Generic_List_object___get_Item(
               v28,
               v52,
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
      v64 = settingIndex;
      v65 = svtName;
      v66 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)Item;
      v67 = (RecommendSupportQuestBoardListViewItem_o *)sub_1BDBAC4(RecommendSupportQuestBoardListViewItem_TypeInfo);
      RecommendSupportQuestBoardListViewItem___ctor(v67, v52, 0LL, v66, v61, v64, v65, v68);
      if ( !itemList )
        goto LABEL_71;
      items = itemList->fields._items;
      v72 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_71;
      v73 = itemList->fields._size;
      this = v62;
      if ( (unsigned int)v73 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v67,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v74 = &items->obj.klass + v73;
        itemList->fields._size = v73 + 1;
        v74[4] = (Il2CppClass *)v67;
        sub_1BDB81C((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v67, v69, v70);
      }
    }
    while ( size != ++v52 );
  }
LABEL_39:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Instance )
    goto LABEL_71;
  Instance = MapMaster__getList((MapMaster_o *)Instance, parentFolderWarId, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_71;
  v75 = (System_Collections_ICollection_o *)Instance;
  if ( TitleInfoControl__TryGetTerminalTitleKind(
         this->fields.titleInfo,
         parentFolderWarId,
         (int32_t *)&settingIndex + 1,
         0LL) )
  {
    Instance = this->fields.titleInfo;
    if ( !Instance )
      goto LABEL_71;
    TitleInfoControl__setTitleImg((TitleInfoControl_o *)Instance, SHIDWORD(settingIndex), 0, 0, 0LL);
  }
  else
  {
    Instance = (void *)BasicHelper__IsNullOrEmpty(v75, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v75 )
        goto LABEL_71;
      if ( !LODWORD(v75[1].monitor) )
        sub_1BDBADC(Instance, v54, v76);
      Instance = v75[2].klass;
      if ( !Instance )
        goto LABEL_71;
      titleInfo = this->fields.titleInfo;
      Instance = (void *)MapEntity__GetPrioredHeaderId((MapEntity_o *)Instance, 0, 0, 0LL);
      if ( !titleInfo )
        goto LABEL_71;
      TitleInfoControl__setTitleImgFromBanner(titleInfo, (int32_t)Instance, 0, 1, 0, 0LL);
    }
  }
  RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(this, parentFolderWarId, v76);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Instance = this->fields.scrollBar;
    if ( !Instance )
      goto LABEL_71;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_71;
    Instance = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v79 = this->fields.scrollBar;
      if ( !v79 )
        goto LABEL_71;
      if ( v79->fields.mSize <= 0.98 )
      {
        v80 = this->fields.itemList;
        Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
          Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v81 = *(System_Predicate_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
        if ( !v81 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          }
          v82 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v81 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_ListViewItem__TypeInfo);
          System_Predicate_object____ctor(
            v81,
            v82,
            Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__23_3__,
            0LL);
          v83 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
          v83->__9__23_3 = (struct System_Predicate_ListViewItem__o *)v81;
          sub_1BDB81C((CGThumbnailListItem_o *)&v83->__9__23_3, (int32_t)v81, v84, v85);
        }
        if ( v80 )
        {
          v86 = System_Collections_Generic_List_object___Find(
                  (System_Collections_Generic_List_object__o *)v80,
                  (System_Predicate_T__o *)v81,
                  (const MethodInfo_36D642C *)Method_System_Collections_Generic_List_ListViewItem__Find__);
          if ( v86 )
            ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v86[1].klass), 0LL);
          goto LABEL_69;
        }
LABEL_71:
        sub_1BDBAD4(Instance, v54);
      }
    }
  }
LABEL_69:
  Instance = this->fields.selectMenuBackBtn;
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15165/*"UpdateScrollPosition"*/,
    0.0,
    0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__DispFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo,
        int32_t warId,
        int32_t focusWarId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v19; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v22; // s9
  System_Action_o *v23; // x19

  if ( (byte_4B4097E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, folderInfo);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__, v9);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo, v10);
    byte_4B4097E = 1;
  }
  v11 = sub_1BDBAC4(RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_6;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = folderInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)folderInfo, v16, v17);
  *(_DWORD *)(v11 + 32) = warId;
  *(_DWORD *)(v11 + 36) = focusWarId;
  slideComponent = this->fields.slideComponent;
  this->fields.state = 1;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v19);
  extiTime = this->fields.extiTime;
  v22 = OUT_POS_OFS_X;
  v23 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v11,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__0__,
    0LL);
  if ( !slideComponent )
LABEL_6:
    sub_1BDBAD4(v12, v13);
  SlideFadeObject__SlideOut_35227484(slideComponent, v22, extiTime, 0.0, v23, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__Init(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BalanceConfig_c *v13; // x0
  int32_t RecommendSupportMemberMax; // w20
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  int32_t i; // w27
  BalanceConfig_c *v20; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *v22; // x22
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_4B40978 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Dictionary_int__int___Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Dictionary_int__int____ctor__, v7);
    sub_1BDB878(&System_Collections_Generic_List_Dictionary_int__int___TypeInfo, v8);
    byte_4B40978 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  this->fields.slideComponent = (struct SlideFadeObject_o *)Component_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.slideComponent, (int32_t)Component_object, v11, v12);
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  RecommendSupportMemberMax = v13->static_fields->RecommendSupportMemberMax;
  v15 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_Dictionary_int__int___TypeInfo);
  System_Collections_Generic_List_object____ctor_57497088(
    v15,
    RecommendSupportMemberMax,
    (const MethodInfo_36D5600 *)Method_System_Collections_Generic_List_Dictionary_int__int____ctor__);
  this->fields.selectWarId = (struct System_Collections_Generic_List_Dictionary_int__int___o *)v15;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectWarId, (int32_t)v15, v16, v17);
  for ( i = 0; ; ++i )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    if ( i >= v20->static_fields->RecommendSupportMemberMax )
      break;
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    v22 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v22,
      (const MethodInfo_3331EA4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    if ( !selectWarId )
      goto LABEL_17;
    items = selectWarId->fields._items;
    v27 = Method_System_Collections_Generic_List_Dictionary_int__int___Add__;
    ++selectWarId->fields._version;
    if ( !items )
      goto LABEL_17;
    size = selectWarId->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        selectWarId,
        (Il2CppObject *)v22,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v29 = &items->obj.klass + size;
      selectWarId->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v22;
      sub_1BDB81C((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v22, v24, v25);
    }
  }
  questSelectDialog = this->fields.questSelectDialog;
  if ( !questSelectDialog )
LABEL_17:
    sub_1BDBAD4(questSelectDialog, v18);
  RecommendSupportQuestSelectDialogComponent__Init(questSelectDialog, v18);
  RecommendSupportQuestBoardListViewManager__InitQuestFolderList(this, v30);
}


void __fastcall RecommendSupportQuestBoardListViewManager__InitOpen(
        RecommendSupportQuestBoardListViewManager_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  __int64 v19; // x1
  void *titleInfo; // x0
  RecommendSupportData_o *v21; // x21
  const MethodInfo *v22; // x4
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x21
  System_Func_object__bool__o *v24; // x22
  Il2CppObject *v25; // x0
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o **p_settingQuestInfo; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x20
  struct WarEntity_o *warEntity; // x8
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v31; // x21
  System_Func_object__bool__o *v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *v34; // x0
  const MethodInfo *v35; // x4
  System_Collections_Generic_List_object__o *selectWarId; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  RecommendSupportQuestBoardListViewManager___c_c *v38; // x0
  System_Func_object__bool__o *_9__21_1; // x21
  Il2CppObject *v40; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v45; // x0
  const MethodInfo *v46; // x5
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B4097A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___,
      v3);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v5);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v7);
    sub_1BDB878(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo, v8);
    sub_1BDB878(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v11);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__, v12);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__, v13);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo, v14);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__, v15);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo, v16);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v17);
    byte_4B4097A = 1;
  }
  value = 0;
  v18 = sub_1BDBAC4(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)titleInfo, 0LL, 1, 0LL, 94, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite_38890076((TitleInfoControl_o *)titleInfo, 1, 0, 0, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_26;
  TitleInfoControl__setBackBtnSprite((TitleInfoControl_o *)titleInfo, 3, 1, 0LL);
  this->fields.state = 0;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  v21 = (RecommendSupportData_o *)*((_QWORD *)titleInfo + 14);
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo || !v18 || !v21 )
    goto LABEL_26;
  RecommendSupportData__TryGetQuest(v21, *((_DWORD *)titleInfo + 30), (int32_t *)(v18 + 16), (int32_t *)(v18 + 20), v22);
  recommendQuestList = this->fields.recommendQuestList;
  v24 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v18,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__InitOpen_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
  p_settingQuestInfo = &this->fields.settingQuestInfo;
  this->fields.settingQuestInfo = (struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)v25;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.settingQuestInfo, (int32_t)v25, v27, v28);
  if ( this->fields.settingQuestInfo )
  {
    v29 = sub_1BDBAC4(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v29, 0LL);
    if ( *p_settingQuestInfo )
    {
      warEntity = (*p_settingQuestInfo)->fields.warEntity;
      if ( warEntity )
      {
        if ( v29 )
        {
          *(_DWORD *)(v29 + 16) = warEntity->fields.id;
          v31 = this->fields.recommendQuestList;
          v32 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v32,
            (Il2CppObject *)v29,
            Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__InitOpen_b__2__,
            0LL);
          v33 = System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                  (System_Func_TSource__bool__o *)v32,
                  (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          v34 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)System_Linq_Enumerable__ToList_object_(v33, (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
          RecommendSupportQuestBoardListViewManager__CreateQuestList(this, v34, *(_DWORD *)(v29 + 16), 0LL, v35);
          return;
        }
      }
    }
LABEL_26:
    sub_1BDBAD4(titleInfo, v19);
  }
  this->fields.currentFolderWarId = 0;
  selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
  titleInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo )
    goto LABEL_26;
  if ( !selectWarId )
    goto LABEL_26;
  titleInfo = System_Collections_Generic_List_object___get_Item(
                selectWarId,
                *((_DWORD *)titleInfo + 30),
                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
  if ( !titleInfo )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_int__int___TryGetValue(
    (System_Collections_Generic_Dictionary_int__int__o *)titleInfo,
    this->fields.currentFolderWarId,
    &value,
    (const MethodInfo_3333F00 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  v38 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    v38 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  _9__21_1 = (System_Func_object__bool__o *)v38->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__21_1 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__21_1,
      v40,
      Method_RecommendSupportQuestBoardListViewManager___c__InitOpen_b__21_1__,
      0LL);
    static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__21_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__o *)_9__21_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__21_1, (int32_t)_9__21_1, v42, v43);
  }
  v44 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
          (System_Func_TSource__bool__o *)_9__21_1,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  v45 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_(v44, (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(this, v45, 0, value, 0LL, v46);
}


void __fastcall RecommendSupportQuestBoardListViewManager__InitQuestFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  System_Collections_Generic_List_object__o *v32; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o **p_recommendQuestFolderList; // x19
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_object__o *v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *Master_object; // x25
  Il2CppObject *v40; // x28
  Il2CppObject *v41; // x20
  CommonReleaseMaster_o *IsOpen; // x0
  __int64 dispCommonReleaseId; // x1
  RecommendSupportQuestEntity_array *List; // x26
  __int64 v45; // x2
  int max_length; // w8
  unsigned int v47; // w21
  RecommendSupportQuestEntity_o *v48; // x22
  __int64 v49; // x27
  int32_t questId; // w28
  System_String_o *questMessage; // x8
  WarEntity_o *v52; // x24
  int32_t priority; // w22
  int32_t questPhase; // w28
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v55; // x29
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppClass *v58; // x8
  _QWORD *v59; // x9
  __int64 MasterName_k__BackingField_low; // x10
  void **v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x28
  System_Func_object__bool__o *v63; // x22
  int32_t PrioredParentId; // w29
  System_Collections_Generic_List_object__o *v65; // x27
  WarEntity_o *v66; // x22
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v67; // x28
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  _BOOL8 v74; // x0
  __int64 v75; // x1
  System_Collections_Generic_List_object__o *v76; // x21
  Il2CppObject *v77; // x23
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v78; // x22
  __int64 v79; // x0
  __int64 v80; // x1
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  Il2CppObject **v87; // [xsp+0h] [xbp-F0h]
  System_String_o *v88; // [xsp+8h] [xbp-E8h]
  Il2CppObject *v89; // [xsp+10h] [xbp-E0h]
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o **p_recommendQuestList; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_HashSet_int__o *v91; // [xsp+20h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v92; // [xsp+28h] [xbp-C8h]
  Il2CppObject *v93; // [xsp+30h] [xbp-C0h]
  CommonReleaseMaster_o *v94; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v95; // [xsp+40h] [xbp-B0h] BYREF
  Il2CppObject *v96; // [xsp+58h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v97; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *v98; // [xsp+80h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4B40979 & 1) == 0 )
  {
    sub_1BDB878(&CondType_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_CommonReleaseMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_RecommendSupportQuestMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_SpotMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_WarMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v9);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v10);
    sub_1BDB878(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v11);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v12);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v15);
    sub_1BDB878(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v16);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Add__, v17);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v18);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Remove__, v19);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor__, v20);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v21);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__,
      v22);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__,
      v23);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__,
      v24);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__,
      v25);
    sub_1BDB878(&System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo, v26);
    sub_1BDB878(
      &System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo,
      v27);
    sub_1BDB878(&RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo, v28);
    sub_1BDB878(&RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo, v29);
    sub_1BDB878(
      &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
      v30);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo, v31);
    byte_4B40979 = 1;
  }
  v98 = 0LL;
  entity = 0LL;
  memset(&v97, 0, sizeof(v97));
  v96 = 0LL;
  v32 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor__);
  p_recommendQuestFolderList = &this->fields.recommendQuestFolderList;
  this->fields.recommendQuestFolderList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v32;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.recommendQuestFolderList, (int32_t)v32, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor__);
  this->fields.recommendQuestList = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *)v36;
  p_recommendQuestList = &this->fields.recommendQuestList;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.recommendQuestList, (int32_t)v36, v37, v38);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_RecommendSupportQuestMaster___);
  v40 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
  v92 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SpotMaster___);
  v41 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_WarMaster___);
  IsOpen = (CommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_55;
  v94 = IsOpen;
  List = RecommendSupportQuestMaster__GetList((RecommendSupportQuestMaster_o *)Master_object, 0LL);
  v91 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v91,
    (const MethodInfo_358B9A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !List )
    goto LABEL_55;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v47 = 0;
    v93 = v40;
    do
    {
      if ( v47 >= max_length )
        sub_1BDBADC(IsOpen, dispCommonReleaseId, v45);
      v48 = List->m_Items[v47];
      v49 = sub_1BDBAC4(RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v49, 0LL);
      if ( !v48 )
        goto LABEL_55;
      if ( !v48->fields.baseQuestId )
      {
        dispCommonReleaseId = (unsigned int)v48->fields.dispCommonReleaseId;
        if ( (_DWORD)dispCommonReleaseId )
        {
          IsOpen = v94;
          if ( !v94 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)CommonReleaseMaster__IsOpen(v94, dispCommonReleaseId, 0LL, 0, 0LL);
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        else
        {
          questId = v48->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = (CommonReleaseMaster_o *)CondType__IsQuestClear_39349364(questId, -1, 0, 0LL);
          v40 = v93;
          if ( ((unsigned __int8)IsOpen & 1) == 0 )
            goto LABEL_12;
        }
        if ( !v40 )
          goto LABEL_55;
        IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)v40,
                                            &entity,
                                            v48->fields.questId,
                                            (const MethodInfo_32E1E88 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsOpen & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)v92;
          if ( !v92 )
            goto LABEL_55;
          IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v92,
                                              &v98,
                                              (int32_t)entity[3].klass,
                                              (const MethodInfo_32E1E88 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsOpen & 1) != 0 )
          {
            if ( !v49 || !v98 || !v41 )
              goto LABEL_55;
            IsOpen = (CommonReleaseMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)v41,
                                                (Il2CppObject **)(v49 + 16),
                                                HIDWORD(v98[1].klass),
                                                (const MethodInfo_32E1E88 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)IsOpen & 1) != 0 )
            {
              questMessage = v48->fields.questMessage;
              v87 = (Il2CppObject **)(v49 + 16);
              v52 = *(WarEntity_o **)(v49 + 16);
              questPhase = v48->fields.questPhase;
              priority = v48->fields.priority;
              v88 = questMessage;
              v89 = entity;
              v55 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)sub_1BDBAC4(RecommendSupportQuestSelectListMenu_RecommendQuestInfo_TypeInfo);
              RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
                v55,
                (QuestEntity_o *)v89,
                v52,
                v88,
                questPhase,
                priority,
                0LL);
              IsOpen = (CommonReleaseMaster_o *)*p_recommendQuestList;
              if ( !*p_recommendQuestList )
                goto LABEL_55;
              v58 = *(Il2CppClass **)&IsOpen->fields._MasterKind_k__BackingField;
              v59 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Add__;
              ++HIDWORD(IsOpen->fields._MasterName_k__BackingField);
              if ( !v58 )
                goto LABEL_55;
              MasterName_k__BackingField_low = SLODWORD(IsOpen->fields._MasterName_k__BackingField);
              if ( (unsigned int)MasterName_k__BackingField_low >= LODWORD(v58->_1.namespaze) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)IsOpen,
                  (Il2CppObject *)v55,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
              }
              else
              {
                v61 = &v58->_1.image + MasterName_k__BackingField_low;
                LODWORD(IsOpen->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
                v61[4] = v55;
                sub_1BDB81C((CGThumbnailListItem_o *)(v61 + 4), (int32_t)v55, v56, v57);
              }
              v62 = (System_Collections_Generic_IEnumerable_TSource__o *)*p_recommendQuestFolderList;
              v63 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v63,
                (Il2CppObject *)v49,
                Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0__InitQuestFolderList_b__0__,
                0LL);
              IsOpen = (CommonReleaseMaster_o *)System_Linq_Enumerable__FirstOrDefault_object__50698552(
                                                  v62,
                                                  (System_Func_TSource__bool__o *)v63,
                                                  (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
              v40 = v93;
              if ( !IsOpen )
              {
                IsOpen = (CommonReleaseMaster_o *)*v87;
                if ( !*v87 )
                  goto LABEL_55;
                PrioredParentId = WarEntity__GetPrioredParentId((WarEntity_o *)IsOpen, 0LL);
                IsOpen = (CommonReleaseMaster_o *)v91;
                if ( !v91 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___Add(
                  v91,
                  PrioredParentId,
                  (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                v65 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
                v66 = (WarEntity_o *)*v87;
                v67 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)sub_1BDBAC4(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
                RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(v67, v66, PrioredParentId, 0LL);
                if ( !v65 )
                  goto LABEL_55;
                items = v65->fields._items;
                v71 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
                ++v65->fields._version;
                if ( !items )
                  goto LABEL_55;
                size = v65->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v65,
                    (Il2CppObject *)v67,
                    *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
                }
                else
                {
                  v73 = &items->obj.klass + size;
                  v65->fields._size = size + 1;
                  v73[4] = (Il2CppClass *)v67;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v73 + 4), (int32_t)v67, v68, v69);
                }
                v40 = v93;
              }
            }
          }
        }
      }
LABEL_12:
      max_length = List->max_length;
    }
    while ( (int)++v47 < max_length );
  }
  if ( !v91 )
LABEL_55:
    sub_1BDBAD4(IsOpen, dispCommonReleaseId);
  System_Collections_Generic_HashSet_int___Remove(
    v91,
    0,
    (const MethodInfo_358C268 *)Method_System_Collections_Generic_HashSet_int__Remove__);
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v95,
    v91,
    (const MethodInfo_358C528 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v97 = v95;
  while ( 1 )
  {
    v74 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v97,
            (const MethodInfo_3465F70 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v74 )
      break;
    if ( !v41 )
      sub_1BDBAD4(v74, v75);
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)v41,
           &v96,
           (int32_t)v97.fields._current,
           (const MethodInfo_32E1E88 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v76 = (System_Collections_Generic_List_object__o *)*p_recommendQuestFolderList;
      v77 = v96;
      v78 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)sub_1BDBAC4(RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_TypeInfo);
      RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(v78, (WarEntity_o *)v77, 0, 0LL);
      if ( !v76 )
        sub_1BDBAD4(v79, v80);
      v83 = v76->fields._items;
      v84 = Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Add__;
      ++v76->fields._version;
      if ( !v83 )
        sub_1BDBAD4(v79, v80);
      v85 = v76->fields._size;
      if ( (unsigned int)v85 >= v83->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          (Il2CppObject *)v78,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
      }
      else
      {
        v86 = &v83->obj.klass + v85;
        v76->fields._size = v85 + 1;
        v86[4] = (Il2CppClass *)v78;
        sub_1BDB81C((CGThumbnailListItem_o *)(v86 + 4), (int32_t)v78, v81, v82);
      }
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v97,
    (const MethodInfo_3465F6C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnClickListView(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestBoardListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  RecommendSupportQuestBoardListViewItem_o *Item; // x0
  __int64 v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int v33; // w21
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  __int64 v39; // x21
  System_Collections_Generic_List_T__o *recommendQuestFolderList; // x23
  System_Func_object__bool__o *v41; // x24
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v42; // x22
  System_Func_object__bool__o *v43; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_List_TSource__o *v45; // x0
  System_Collections_Generic_List_object__o *selectWarId; // x22
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v47; // x20
  __int64 v48; // x8
  const MethodInfo *v49; // x4
  __int64 v50; // x8
  __int64 v51; // x21
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x8
  __int64 v57; // x8
  __int64 v58; // x1
  __int64 v59; // x8
  RecommendSupportQuestBoardListViewItem_o *v60; // x20
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x19
  int monitor; // w23
  int v63; // w24
  System_Action_o *v64; // x22
  const MethodInfo *v65; // x4
  __int64 v66; // x21
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x22
  System_Func_object__bool__o *v71; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_Collections_Generic_List_TSource__o *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v77; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v80; // s9
  System_Action_o *v81; // x19
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B4097D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, obj);
    sub_1BDB878(&Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v6);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v8);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v10);
    sub_1BDB878(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo, v11);
    sub_1BDB878(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__, v13);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager_OnClickListView__, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v15);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__, v16);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__, v17);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__, v18);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo, v19);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__, v20);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo, v21);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__, v22);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo, v23);
    byte_4B4097D = 1;
  }
  value = 0;
  v24 = sub_1BDBAC4(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_37;
  *(_QWORD *)(v24 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 32), (int32_t)this, v27, v28);
  if ( !obj )
    goto LABEL_37;
  Item = RecommendSupportQuestBoardListViewObject__GetItem(obj, v26);
  *(_QWORD *)(v24 + 24) = Item;
  v30 = v24 + 24;
  sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 24), (int32_t)Item, v31, v32);
  if ( !*(_QWORD *)(v24 + 24) )
    goto LABEL_37;
  v33 = *(unsigned __int8 *)(*(_QWORD *)(v24 + 24) + 128LL);
  v34 = Method_RecommendSupportQuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v34 = (_QWORD *)sub_1BDB890(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
  v35 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v34, v34[4]);
  if ( v33 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0, 0LL);
  if ( !*(_QWORD *)v30 )
    goto LABEL_37;
  v38 = *(_QWORD *)(*(_QWORD *)v30 + 112LL);
  *(_QWORD *)(v24 + 16) = v38;
  v39 = v24 + 16;
  sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 16), v38, v36, v37);
  if ( *(_QWORD *)(v24 + 16) )
  {
    recommendQuestFolderList = (System_Collections_Generic_List_T__o *)this->fields.recommendQuestFolderList;
    v41 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v41,
      (Il2CppObject *)v24,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__0__,
      0LL);
    Instance = (Il2CppObject *)BasicHelper__Any_object_(
                                 recommendQuestFolderList,
                                 (System_Func_T__bool__o *)v41,
                                 (const MethodInfo_301CDFC *)Method_BasicHelper_Any_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v42 = this->fields.recommendQuestFolderList;
      v43 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v43,
        (Il2CppObject *)v24,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__1__,
        0LL);
      v44 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v42,
              (System_Func_TSource__bool__o *)v43,
              (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      v45 = System_Linq_Enumerable__ToList_object_(
              v44,
              (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
      v47 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)v45;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance )
      {
        if ( selectWarId )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       selectWarId,
                       (int32_t)Instance[7].monitor,
                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__);
          if ( *(_QWORD *)v39 )
          {
            v48 = *(_QWORD *)(*(_QWORD *)v39 + 16LL);
            if ( v48 )
            {
              if ( Instance )
              {
                Instance = (Il2CppObject *)System_Collections_Generic_Dictionary_int__int___TryGetValue(
                                             (System_Collections_Generic_Dictionary_int__int__o *)Instance,
                                             *(_DWORD *)(v48 + 16),
                                             &value,
                                             (const MethodInfo_3333F00 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
                if ( *(_QWORD *)v39 )
                {
                  v50 = *(_QWORD *)(*(_QWORD *)v39 + 16LL);
                  if ( v50 )
                  {
                    RecommendSupportQuestBoardListViewManager__DispFolderList(
                      this,
                      v47,
                      *(_DWORD *)(v50 + 16),
                      value,
                      v49);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1BDBAD4(Instance, v26);
    }
  }
  if ( !*(_QWORD *)v30 )
    goto LABEL_37;
  if ( *(_QWORD *)(*(_QWORD *)v30 + 120LL) )
  {
    v51 = sub_1BDBAC4(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v51, 0LL);
    if ( !v51 )
      goto LABEL_37;
    *(_QWORD *)(v51 + 32) = v24;
    sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 32), v24, v52, v53);
    v56 = *(_QWORD *)(v51 + 32);
    if ( !v56 )
      goto LABEL_37;
    v57 = *(_QWORD *)(v56 + 24);
    if ( !v57 )
      goto LABEL_37;
    v58 = *(_QWORD *)(v57 + 120);
    *(_QWORD *)(v51 + 16) = v58;
    sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 16), v58, v54, v55);
    v59 = *(_QWORD *)(v51 + 32);
    if ( !v59 )
      goto LABEL_37;
    v60 = *(RecommendSupportQuestBoardListViewItem_o **)(v59 + 24);
    if ( !v60 )
      goto LABEL_37;
    *(_DWORD *)(v51 + 24) = v60->fields._SettingSelectIndex_k__BackingField;
    questSelectDialog = this->fields.questSelectDialog;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    monitor = (int)Instance[7].monitor;
    v63 = *(_DWORD *)(v51 + 24);
    v64 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v64,
      (Il2CppObject *)v51,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1__OnClickListView_b__2__,
      0LL);
    if ( !questSelectDialog )
      goto LABEL_37;
    RecommendSupportQuestSelectDialogComponent__Open(questSelectDialog, v60, monitor == v63, v64, v65);
  }
  else
  {
    v66 = sub_1BDBAC4(RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v66, 0LL);
    if ( !v66 )
      goto LABEL_37;
    *(_QWORD *)(v66 + 24) = v24;
    sub_1BDB81C((CGThumbnailListItem_o *)(v66 + 24), v24, v67, v68);
    v69 = *(Il2CppObject **)(v66 + 24);
    if ( !v69 )
      goto LABEL_37;
    if ( v69[1].klass )
    {
      recommendQuestList = this->fields.recommendQuestList;
      v71 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v71,
        v69,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__3__,
        0LL);
      v72 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestList,
              (System_Func_TSource__bool__o *)v71,
              (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v73 = System_Linq_Enumerable__ToList_object_(
              v72,
              (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      *(_QWORD *)(v66 + 16) = v73;
      sub_1BDB81C((CGThumbnailListItem_o *)(v66 + 16), (int32_t)v73, v74, v75);
      slideComponent = this->fields.slideComponent;
      this->fields.state = 1;
      OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v77);
      extiTime = this->fields.extiTime;
      v80 = OUT_POS_OFS_X;
      v81 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v81,
        (Il2CppObject *)v66,
        Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2__OnClickListView_b__4__,
        0LL);
      if ( !slideComponent )
        goto LABEL_37;
      SlideFadeObject__SlideOut_35227484(slideComponent, v80, extiTime, 0.0, v81, 0LL);
    }
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnDestroy(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_Dictionary_int__int___o *selectWarId; // x8
  int32_t size; // w2
  int v8; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x8
  int32_t v10; // w2
  int v11; // w9
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *recommendQuestList; // x8
  int32_t v13; // w2
  CGThumbnailListItem_o *p_recommendQuestList; // x19
  int v15; // w9

  if ( (byte_4B40982 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__Clear__,
      method);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__,
      v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Dictionary_int__int___Clear__, v5);
    byte_4B40982 = 1;
  }
  selectWarId = this->fields.selectWarId;
  if ( selectWarId )
  {
    size = selectWarId->fields._size;
    v8 = selectWarId->fields._version + 1;
    selectWarId->fields._size = 0;
    selectWarId->fields._version = v8;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)selectWarId->fields._items, 0, size, 0LL);
    this->fields.selectWarId = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.selectWarId, 0, size, v2);
  }
  recommendQuestFolderList = this->fields.recommendQuestFolderList;
  if ( recommendQuestFolderList )
  {
    v10 = recommendQuestFolderList->fields._size;
    v11 = recommendQuestFolderList->fields._version + 1;
    recommendQuestFolderList->fields._size = 0;
    recommendQuestFolderList->fields._version = v11;
    if ( v10 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestFolderList->fields._items, 0, v10, 0LL);
    this->fields.recommendQuestFolderList = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.recommendQuestFolderList, 0, v10, v2);
  }
  recommendQuestList = this->fields.recommendQuestList;
  if ( recommendQuestList )
  {
    v13 = recommendQuestList->fields._size;
    p_recommendQuestList = (CGThumbnailListItem_o *)&this->fields.recommendQuestList;
    v15 = recommendQuestList->fields._version + 1;
    recommendQuestList->fields._size = 0;
    recommendQuestList->fields._version = v15;
    if ( v13 >= 1 )
      System_Array__Clear((System_Array_o *)recommendQuestList->fields._items, 0, v13, 0LL);
    p_recommendQuestList->klass = 0LL;
    sub_1BDB81C(p_recommendQuestList, 0, v13, v2);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnclickBack(
        RecommendSupportQuestBoardListViewManager_o *this,
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
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x21
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *recommendQuestFolderList; // x20
  System_Func_object__bool__o *v16; // x22
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x20
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v22; // x22
  System_Func_object__bool__o *v23; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v25; // x21
  const MethodInfo *v26; // x4
  __int64 v27; // x8
  int32_t v28; // w3

  if ( (byte_4B40980 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      method);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v3);
    sub_1BDB878(
      &Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      v4);
    sub_1BDB878(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo, v5);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__,
      v6);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager_OnclickBack__, v7);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v9);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__, v10);
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo, v11);
    byte_4B40980 = 1;
  }
  if ( !this->fields.state )
  {
    v12 = Method_RecommendSupportQuestBoardListViewManager_OnclickBack__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickBack__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BDB890(Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0, 0LL);
    if ( this->fields.currentFolderWarId )
    {
      v14 = sub_1BDBAC4(RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0LL);
      recommendQuestFolderList = this->fields.recommendQuestFolderList;
      v16 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v16,
        (Il2CppObject *)this,
        Method_RecommendSupportQuestBoardListViewManager__OnclickBack_b__28_0__,
        0LL);
      Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__FirstOrDefault_object__50698552(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)recommendQuestFolderList,
                                                            (System_Func_TSource__bool__o *)v16,
                                                            (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
      if ( v14 )
      {
        *(_QWORD *)(v14 + 16) = Item;
        v21 = v14 + 16;
        sub_1BDB81C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)Item, v19, v20);
        v22 = this->fields.recommendQuestFolderList;
        v23 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v23,
          (Il2CppObject *)v14,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0__OnclickBack_b__1__,
          0LL);
        v24 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                (System_Func_TSource__bool__o *)v23,
                (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                              v24,
                                                              (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
        if ( Item )
        {
          v25 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)Item;
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                0,
                                                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
          if ( Item )
          {
            if ( !*(_QWORD *)v21 )
            {
              v28 = 0;
              goto LABEL_16;
            }
            v27 = *(_QWORD *)(*(_QWORD *)v21 + 16LL);
            if ( v27 )
            {
              v28 = *(_DWORD *)(v27 + 16);
LABEL_16:
              RecommendSupportQuestBoardListViewManager__DispFolderList(this, v25, Item->fields._size, v28, v26);
              return;
            }
          }
        }
      }
    }
    else
    {
      Item = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Item )
      {
        RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Item, 0, 0LL);
        return;
      }
    }
    sub_1BDBAD4(Item, v18);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnclickSelectMenuBackBtn(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B40981 & 1) == 0 )
  {
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4B40981 = 1;
  }
  if ( !this->fields.state )
  {
    v4 = Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BDB890(Method_RecommendSupportQuestBoardListViewManager_OnclickSelectMenuBackBtn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      sub_1BDBAD4(0LL, v7);
    RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, 0LL);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__SerializeFieldNotNullCheck(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportQuestBoardListViewManager__UpdateScrollPosition(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))scrollView->klass->vtable._8_UpdateScrollbars.method)(
          scrollView,
          1LL,
          scrollView->klass->vtable._9_SetDragAmount.methodPtr),
        (scrollView = this->fields.scrollView) == 0LL) )
  {
    sub_1BDBAD4(scrollView, method);
  }
  UIScrollView__UpdatePosition(scrollView, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestBoardListViewManager__UpdateSelectWarId(
        RecommendSupportQuestBoardListViewManager_o *this,
        int32_t parentFolderWarId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *selectWarId; // x21
  System_Collections_Generic_Dictionary_int__int__o *Instance; // x0
  __int64 v11; // x1
  bool v12; // w0
  System_Collections_Generic_List_object__o *v13; // x22
  bool v14; // w21
  int32_t currentFolderWarId; // w1
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B4097F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&parentFolderWarId);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v8);
    byte_4B4097F = 1;
  }
  value = 0;
  if ( parentFolderWarId )
  {
    selectWarId = (System_Collections_Generic_List_object__o *)this->fields.selectWarId;
    Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance
      || !selectWarId
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            selectWarId,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0LL
      || (v12 = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                  Instance,
                  this->fields.currentFolderWarId,
                  &value,
                  (const MethodInfo_3333F00 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__),
          v13 = (System_Collections_Generic_List_object__o *)this->fields.selectWarId,
          v14 = v12,
          (Instance = (System_Collections_Generic_Dictionary_int__int__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
      || !v13
      || (Instance = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v13,
                                                                            Instance[1].fields._freeCount,
                                                                            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_Dictionary_int__int___get_Item__)) == 0LL )
    {
      sub_1BDBAD4(Instance, v11);
    }
    currentFolderWarId = this->fields.currentFolderWarId;
    if ( v14 )
      System_Collections_Generic_Dictionary_int__int___set_Item(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_3332854 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    else
      System_Collections_Generic_Dictionary_int__int___Add(
        Instance,
        currentFolderWarId,
        parentFolderWarId,
        (const MethodInfo_3332868 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  }
  this->fields.currentFolderWarId = parentFolderWarId;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___OnclickBack_b__28_0(
        RecommendSupportQuestBoardListViewManager_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0LL )
    sub_1BDBAD4(this, x);
  return warEntity->fields.id == this->fields.currentFolderWarId;
}


float __fastcall RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t width; // w20
  float v4; // s0

  width = UnityEngine_Screen__get_width(0LL);
  v4 = (float)width / (float)UnityEngine_Screen__get_height(0LL);
  if ( v4 >= 1.7778 )
    return this->fields.slideOutPosX + (float)((float)(v4 * 576.0) + -1024.0);
  else
    return this->fields.slideOutPosX;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B40983 & 1) == 0 )
  {
    sub_1BDB878(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v1);
    byte_4B40983 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestBoardListViewManager___c_o *)v2;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c___ctor(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateChapterList_b__22_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *a,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *b,
        const MethodInfo *method)
{
  int v5; // w20

  if ( !b
    || (this = (RecommendSupportQuestBoardListViewManager___c_o *)b->fields.warEntity) == 0LL
    || (this = (RecommendSupportQuestBoardListViewManager___c_o *)WarEntity__GetPriority((WarEntity_o *)this, 0LL), !a)
    || (v5 = (int)this, (this = (RecommendSupportQuestBoardListViewManager___c_o *)a->fields.warEntity) == 0LL) )
  {
    sub_1BDBAD4(this, a);
  }
  return v5 - WarEntity__GetPriority((WarEntity_o *)this, 0LL);
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0LL )
    sub_1BDBAD4(this, x);
  return questEntity->fields.id;
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_2(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.phase;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__23_3(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 methodPtr_low; // x9
  int32_t index; // w19
  RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *v8; // x0
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B40984 & 1) == 0 )
  {
    sub_1BDB878(&RecommendSupportQuestBoardListViewItem_TypeInfo, item);
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_1BDB878(
                                                                &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                                v4);
    byte_4B40984 = 1;
  }
  if ( !item )
    goto LABEL_8;
  methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    index = item[1].fields.index;
    this = (RecommendSupportQuestBoardListViewManager___c_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
      return index == LODWORD(this[7].monitor);
LABEL_8:
    sub_1BDBAD4(this, item);
  }
  v8 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *)sub_1BDBD94(item);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___InitQuestFolderList_b__0(v8, v9, v10);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c___InitOpen_b__21_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.parentWarId == 0;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0___InitQuestFolderList_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass20_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct WarEntity_o *warEnt; // x9

  if ( !x || (warEntity = x->fields.warEntity) == 0LL || (warEnt = this->fields.warEnt) == 0LL )
    sub_1BDBAD4(this, x);
  return warEntity->fields.id == warEnt->fields.id;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___InitOpen_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0LL )
    sub_1BDBAD4(this, x);
  return questEntity->fields.id == this->fields.questId && x->fields.phase == this->fields.questPhase;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___InitOpen_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8

  if ( !x || (warEntity = x->fields.warEntity) == 0LL )
    sub_1BDBAD4(this, x);
  return warEntity->fields.id == this->fields.settingQuestWarId;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0___CreateChapterList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *v4; // x19
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  const char *name; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *v9; // x0
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v10; // x1
  const MethodInfo *v11; // x2

  v3 = item;
  v4 = this;
  if ( (byte_4B40985 & 1) == 0 )
  {
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass22_0_o *)sub_1BDB878(
                                                                                  &RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                                                  item);
    byte_4B40985 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  item = (ListViewItem_o *)RecommendSupportQuestBoardListViewItem_TypeInfo;
  methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (RecommendSupportQuestBoardListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    klass = v3[1].klass;
    if ( klass )
    {
      name = klass->_1.name;
      if ( name )
        return *((_DWORD *)name + 4) == v4->fields.focusWarId;
    }
LABEL_9:
    sub_1BDBAD4(this, item);
  }
  v9 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)sub_1BDBD94(v3);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__0(v9, v10, v11);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8

  if ( !x || (folderInfo = this->fields.folderInfo) == 0LL || (warEntity = folderInfo->fields.warEntity) == 0LL )
    sub_1BDBAD4(this, x);
  return x->fields.parentWarId == warEntity->fields.id;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8

  if ( !x || (folderInfo = this->fields.folderInfo) == 0LL || (warEntity = folderInfo->fields.warEntity) == 0LL )
    sub_1BDBAD4(this, x);
  return x->fields.parentWarId == warEntity->fields.id;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__3(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct WarEntity_o *warEntity; // x8
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x9
  struct WarEntity_o *v5; // x9

  if ( !x
    || (warEntity = x->fields.warEntity) == 0LL
    || (folderInfo = this->fields.folderInfo) == 0LL
    || (v5 = folderInfo->fields.warEntity) == 0LL )
  {
    sub_1BDBAD4(this, x);
  }
  return warEntity->fields.id == v5->fields.id;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__5(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v7; // x8
  float intoTime; // s9
  System_Action_o *_9__6; // x21
  float v10; // s8
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B40986 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__, v3);
    byte_4B40986 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_9;
  intoTime = v7->fields.intoTime;
  _9__6 = this->fields.__9__6;
  v10 = OUT_POS_OFS_X;
  if ( !_9__6 )
  {
    _9__6 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__6,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__6__,
      0LL);
    this->fields.__9__6 = _9__6;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__6, (int32_t)_9__6, v11, v12);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1BDBAD4(_4__this, method);
  SlideFadeObject__SlideIn_35226540(slideComponent, v10, intoTime, 0.0, _9__6, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0___OnClickListView_b__6(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewManager_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *)_4__this->fields.slideComponent) == 0LL)
    || (SlideFadeObject__ResetPosition((SlideFadeObject_o *)this, 0LL), (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1BDBAD4(this, method);
  }
  v4->fields.state = 0;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1___OnClickListView_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  RecommendSupportData_o *klass; // x20
  const MethodInfo *v7; // x3
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals1; // x8
  struct RecommendSupportQuestBoardListViewItem_o *item; // x8
  const MethodInfo *v10; // x3

  if ( (byte_4B40987 & 1) == 0 )
  {
    sub_1BDB878(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4B40987 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  klass = (RecommendSupportData_o *)Instance[7].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( !klass )
    goto LABEL_16;
  RecommendSupportData__SetQuest(klass, (int32_t)Instance[7].monitor, this->fields.info, v7);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_16;
  item = CS___8__locals1->fields.item;
  if ( !item )
    goto LABEL_16;
  if ( !item->fields._IsSetting_k__BackingField )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)Instance[7].klass) == 0LL
    || (RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, this->fields.index, 0LL, v10),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_30CAE40 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0LL )
  {
LABEL_16:
    sub_1BDBAD4(Instance, v5);
  }
  RecommendSupportSelectListViewMenu__RedisplaySub(
    (RecommendSupportSelectListViewMenu_o *)Instance,
    this->fields.index,
    0LL);
LABEL_14:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2___OnClickListView_b__4(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *v3; // x21
  __int64 v4; // x1
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0_o *CS___8__locals2; // x19
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x8
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questList; // x21
  int32_t id; // w22
  System_Action_o *_9__5; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  v3 = this;
  if ( (byte_4B40988 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass24_2_o *)sub_1BDB878(
                                                                                  &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__,
                                                                                  v4);
    byte_4B40988 = 1;
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
    _9__5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)CS___8__locals2,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass24_0__OnClickListView_b__5__,
      0LL);
    CS___8__locals2->fields.__9__5 = _9__5;
    sub_1BDB81C((CGThumbnailListItem_o *)&CS___8__locals2->fields.__9__5, (int32_t)_9__5, v12, v13);
  }
  if ( !_4__this )
LABEL_10:
    sub_1BDBAD4(this, method);
  RecommendSupportQuestBoardListViewManager__CreateQuestList(_4__this, questList, id, _9__5, v2);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__1; // x24
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo; // x21
  int32_t warId; // w22
  int32_t focusWarId; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  v3 = this;
  if ( (byte_4B40989 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)sub_1BDB878(
                                                                                  &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__,
                                                                                  v4);
    byte_4B40989 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  folderInfo = v3->fields.folderInfo;
  warId = v3->fields.warId;
  focusWarId = v3->fields.focusWarId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(_4__this, folderInfo, warId, focusWarId, _9__1, v2);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x0
  SlideFadeObject_o *slideComponent; // x20
  float OUT_POS_OFS_X; // s0
  struct RecommendSupportQuestBoardListViewManager_o *v7; // x8
  float intoTime; // s9
  System_Action_o *_9__2; // x21
  float v10; // s8
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B4098A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__, v3);
    byte_4B4098A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  slideComponent = _4__this->fields.slideComponent;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(_4__this, method);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_9;
  intoTime = v7->fields.intoTime;
  _9__2 = this->fields.__9__2;
  v10 = OUT_POS_OFS_X;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0__DispFolderList_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1BDBAD4(_4__this, method);
  SlideFadeObject__SlideIn_35226540(slideComponent, v10, intoTime, 0.0, _9__2, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0___DispFolderList_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewManager_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass26_0_o *)_4__this->fields.slideComponent) == 0LL)
    || (SlideFadeObject__ResetPosition((SlideFadeObject_o *)this, 0LL), (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1BDBAD4(this, method);
  }
  v4->fields.state = 0;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0___OnclickBack_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *x,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 parentWarFolder; // x8
  int32_t parentWarId; // w19
  int32_t v9; // w1
  __int64 v11; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v12; // 0:x0.8

  v4 = this;
  if ( (byte_4B4098B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Nullable_int__GetValueOrDefault__, x);
    sub_1BDB878(&Method_System_Nullable_int___ctor__, v5);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass28_0_o *)sub_1BDB878(
                                                                                  &Method_System_Nullable_int__get_HasValue__,
                                                                                  v6);
    byte_4B4098B = 1;
  }
  if ( !x )
    sub_1BDBAD4(this, x);
  parentWarFolder = (__int64)v4->fields.parentWarFolder;
  parentWarId = x->fields.parentWarId;
  if ( parentWarFolder )
  {
    v9 = *(_DWORD *)(parentWarFolder + 24);
    v12 = (System_Nullable_int__o)&v11;
    v11 = 0LL;
    System_Nullable_int____ctor(v12, v9, (const MethodInfo_37F58C8 *)Method_System_Nullable_int___ctor__);
    parentWarFolder = v11;
  }
  return (unsigned __int8)parentWarFolder != 0 && parentWarId == HIDWORD(parentWarFolder);
}
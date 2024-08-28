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
        int32_t selectWarId,
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
  __int64 v20; // x21
  int32_t size; // w28
  int32_t v22; // w24
  System_Collections_Generic_List_object__o *itemList; // x25
  Il2CppObject *Item; // x27
  RecommendSupportQuestBoardListViewItem_o *v25; // x26
  const MethodInfo *v26; // x4
  TitleInfoControl_o *titleInfo; // x0
  __int64 hierarchyIndex; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  struct System_Collections_Generic_List_int__array *selectWarIdData; // x19
  __int64 titleImg_low; // x8
  UnityEngine_Object_o *scrollBar; // x22
  struct UIScrollBar_o *v42; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v43; // x22
  System_Predicate_object__o *v44; // x23
  Il2CppObject *v45; // x0
  int32_t kind; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A1BD85 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___,
      folderInfos);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__Find__, v8);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Count__,
      v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__,
      v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v13);
    sub_1B715CC(&System_Predicate_ListViewItem__TypeInfo, v14);
    sub_1B715CC(&RecommendSupportQuestBoardListViewItem_TypeInfo, v15);
    sub_1B715CC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v16);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0__CreateChapterList_b__0__, v17);
    sub_1B715CC(&RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_TypeInfo, v18);
    sub_1B715CC(&StringLiteral_15140/*"UpdateScrollPosition"*/, v19);
    byte_4A1BD85 = 1;
  }
  kind = 0;
  v20 = sub_1B71818(RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.warArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( folderInfos )
  {
    size = folderInfos->fields._size;
    if ( size >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)folderInfos,
                 v22,
                 (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
        v25 = (RecommendSupportQuestBoardListViewItem_o *)sub_1B71818(RecommendSupportQuestBoardListViewItem_TypeInfo);
        RecommendSupportQuestBoardListViewItem___ctor(
          v25,
          v22,
          (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)Item,
          0LL,
          v26);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v33 = itemList->fields._size;
        if ( (unsigned int)v33 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v25,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + v33;
          itemList->fields._size = v33 + 1;
          v34[4] = (Il2CppClass *)v25;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v25, v29, v30);
        }
        if ( size == ++v22 )
          goto LABEL_12;
      }
LABEL_37:
      sub_1B71828(titleInfo, hierarchyIndex);
    }
  }
LABEL_12:
  v35 = (struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)System_Linq_Enumerable__ToList_object_((System_Collections_Generic_IEnumerable_TSource__o *)folderInfos, (const MethodInfo_2E97ADC *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___);
  this->fields.currentFolderInfoData = v35;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.currentFolderInfoData, (int32_t)v35, v36, v37);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_37;
  titleInfo = (TitleInfoControl_o *)TitleInfoControl__TryGetTerminalTitleKind(titleInfo, selectWarId, &kind, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_37;
  v38 = ((unsigned __int8)titleInfo & 1) != 0 ? kind : 91;
  TitleInfoControl__setTitleImg(this->fields.titleInfo, v38, 0, 0, 0LL);
  selectWarIdData = this->fields.selectWarIdData;
  titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !titleInfo || !selectWarIdData )
    goto LABEL_37;
  titleImg_low = SLODWORD(titleInfo->fields.titleImg);
  if ( (unsigned int)titleImg_low >= selectWarIdData->max_length )
    sub_1B71830(titleInfo, hierarchyIndex);
  titleInfo = (TitleInfoControl_o *)selectWarIdData->m_Items[titleImg_low];
  if ( !titleInfo )
    goto LABEL_37;
  hierarchyIndex = (unsigned int)this->fields.hierarchyIndex;
  titleInfo = SLODWORD(titleInfo->fields.m_CancellationTokenSource) <= (int)hierarchyIndex
            ? 0LL
            : (TitleInfoControl_o *)System_Collections_Generic_List_int___get_Item(
                                      (System_Collections_Generic_List_int__o *)titleInfo,
                                      hierarchyIndex,
                                      (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !v20 )
    goto LABEL_37;
  *(_DWORD *)(v20 + 16) = (_DWORD)titleInfo;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    titleInfo = (TitleInfoControl_o *)this->fields.scrollBar;
    if ( !titleInfo )
      goto LABEL_37;
    titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0LL);
    if ( !titleInfo )
      goto LABEL_37;
    titleInfo = (TitleInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)titleInfo, 0LL);
    if ( ((unsigned __int8)titleInfo & 1) != 0 )
    {
      v42 = this->fields.scrollBar;
      if ( !v42 )
        goto LABEL_37;
      if ( v42->fields.mSize <= 0.98 )
      {
        v43 = this->fields.itemList;
        v44 = (System_Predicate_object__o *)sub_1B71818(System_Predicate_ListViewItem__TypeInfo);
        System_Predicate_object____ctor(
          v44,
          (Il2CppObject *)v20,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0__CreateChapterList_b__0__,
          0LL);
        if ( !v43 )
          goto LABEL_37;
        v45 = System_Collections_Generic_List_object___Find(
                (System_Collections_Generic_List_object__o *)v43,
                (System_Predicate_T__o *)v44,
                (const MethodInfo_34D08C8 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
        if ( v45 )
          ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v45[1].klass), 0LL);
      }
    }
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15140/*"UpdateScrollPosition"*/,
    0.0,
    0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__CreateQuestList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questInfos,
        int32_t selectWarId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
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
  int32_t size; // w27
  void *Master_object; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_object__o *v28; // x23
  RecommendSupportQuestBoardListViewManager___c_c *v29; // x0
  System_Func_object__int__o *_9__20_0; // x23
  Il2CppObject *v31; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x0
  RecommendSupportQuestBoardListViewManager___c_c *v36; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x22
  System_Func_object__int__o *_9__20_1; // x23
  Il2CppObject *v39; // x24
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  int32_t v44; // w22
  System_Collections_Generic_List_object__o *itemList; // x24
  Il2CppObject *Item; // x26
  RecommendSupportQuestBoardListViewItem_o *v47; // x25
  const MethodInfo *v48; // x4
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  System_Collections_ICollection_o *v55; // x22
  TitleInfoControl_o *titleInfo; // x21
  UnityEngine_Object_o *scrollBar; // x21
  struct UIScrollBar_o *v58; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v59; // x21
  System_Predicate_object__o *v60; // x22
  Il2CppObject *v61; // x23
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x0
  int32_t kind; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A1BD86 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_MapMaster___, questInfos);
    sub_1B715CC(&DataManager_TypeInfo, v8);
    sub_1B715CC(
      &Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___,
      v9);
    sub_1B715CC(
      &Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___,
      v10);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___, v11);
    sub_1B715CC(&System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_ListViewItem__Find__, v14);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Count__,
      v15);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__,
      v16);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v17);
    sub_1B715CC(&System_Predicate_ListViewItem__TypeInfo, v18);
    sub_1B715CC(&RecommendSupportQuestBoardListViewItem_TypeInfo, v19);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__20_0__, v20);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__20_1__, v21);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__20_2__, v22);
    sub_1B715CC(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v23);
    sub_1B715CC(&StringLiteral_15140/*"UpdateScrollPosition"*/, v24);
    byte_4A1BD86 = 1;
  }
  kind = 0;
  ListViewManager__SetArrangementPitchY((ListViewManager_o *)this, (float)this->fields.questArrangementPitchY, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( questInfos )
  {
    size = questInfos->fields._size;
    Master_object = System_Linq_Enumerable__ToList_object_(
                      (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
                      (const MethodInfo_2E97ADC *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
    if ( size >= 3 )
    {
      v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__20_0 = (System_Func_object__int__o *)v29->static_fields->__9__20_0;
      if ( !_9__20_0 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__20_0 = (System_Func_object__int__o *)sub_1B71818(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__20_0,
          v31,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__20_0__,
          0LL);
        static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        static_fields->__9__20_0 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__20_0;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v33, v34);
      }
      v35 = System_Linq_Enumerable__OrderByDescending_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)questInfos,
              (System_Func_TSource__TKey__o *)_9__20_0,
              (const MethodInfo_2E85DD0 *)Method_System_Linq_Enumerable_OrderByDescending_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      v36 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      v37 = v35;
      if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
        v36 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
      }
      _9__20_1 = (System_Func_object__int__o *)v36->static_fields->__9__20_1;
      if ( !_9__20_1 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v36->static_fields->__9;
        _9__20_1 = (System_Func_object__int__o *)sub_1B71818(System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__20_1,
          v39,
          Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__20_1__,
          0LL);
        v40 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
        v40->__9__20_1 = (struct System_Func_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int__o *)_9__20_1;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v40->__9__20_1, (int32_t)_9__20_1, v41, v42);
      }
      v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                   v37,
                                                                   (System_Func_TSource__TKey__o *)_9__20_1,
                                                                   (const MethodInfo_2E93318 *)Method_System_Linq_Enumerable_ThenBy_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__int___);
      Master_object = System_Linq_Enumerable__ToList_object_(
                        v43,
                        (const MethodInfo_2E97ADC *)Method_System_Linq_Enumerable_ToList_RecommendSupportQuestSelectListMenu_RecommendQuestInfo___);
      v28 = (System_Collections_Generic_List_object__o *)Master_object;
    }
    else
    {
      v28 = (System_Collections_Generic_List_object__o *)Master_object;
      if ( size < 1 )
        goto LABEL_28;
    }
    if ( v28 )
    {
      v44 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Item = System_Collections_Generic_List_object___get_Item(
                 v28,
                 v44,
                 (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_Item__);
        v47 = (RecommendSupportQuestBoardListViewItem_o *)sub_1B71818(RecommendSupportQuestBoardListViewItem_TypeInfo);
        RecommendSupportQuestBoardListViewItem___ctor(
          v47,
          v44,
          0LL,
          (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)Item,
          v48);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v52 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v53 = itemList->fields._size;
        if ( (unsigned int)v53 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v47,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + v53;
          itemList->fields._size = v53 + 1;
          v54[4] = (Il2CppClass *)v47;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v54 + 4), (int32_t)v47, v49, v50);
        }
        if ( size == ++v44 )
          goto LABEL_28;
      }
    }
    goto LABEL_59;
  }
LABEL_28:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Master_object )
    goto LABEL_59;
  Master_object = MapMaster__getList((MapMaster_o *)Master_object, selectWarId, 0LL);
  if ( !this->fields.titleInfo )
    goto LABEL_59;
  v55 = (System_Collections_ICollection_o *)Master_object;
  if ( TitleInfoControl__TryGetTerminalTitleKind(this->fields.titleInfo, selectWarId, &kind, 0LL) )
  {
    Master_object = this->fields.titleInfo;
    if ( !Master_object )
      goto LABEL_59;
    TitleInfoControl__setTitleImg((TitleInfoControl_o *)Master_object, kind, 0, 0, 0LL);
  }
  else
  {
    Master_object = (void *)BasicHelper__IsNullOrEmpty(v55, 0LL);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( !v55 )
        goto LABEL_59;
      if ( !LODWORD(v55[1].monitor) )
        sub_1B71830(Master_object, v27);
      Master_object = v55[2].klass;
      if ( !Master_object )
        goto LABEL_59;
      titleInfo = this->fields.titleInfo;
      Master_object = (void *)MapEntity__GetPrioredHeaderId((MapEntity_o *)Master_object, 0, 0, 0LL);
      if ( !titleInfo )
        goto LABEL_59;
      TitleInfoControl__setTitleImgFromBanner(titleInfo, (int32_t)Master_object, 0, 1, 0, 0LL);
    }
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    Master_object = this->fields.scrollBar;
    if ( Master_object )
    {
      Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
      if ( Master_object )
      {
        Master_object = (void *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Master_object, 0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          goto LABEL_58;
        v58 = this->fields.scrollBar;
        if ( v58 )
        {
          if ( v58->fields.mSize > 0.98 )
            goto LABEL_58;
          v59 = this->fields.itemList;
          Master_object = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
            Master_object = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
          }
          v60 = *(System_Predicate_object__o **)(*((_QWORD *)Master_object + 23) + 32LL);
          if ( !v60 )
          {
            if ( !*((_DWORD *)Master_object + 56) )
            {
              j_il2cpp_runtime_class_init_0(Master_object);
              Master_object = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
            }
            v61 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
            v60 = (System_Predicate_object__o *)sub_1B71818(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_object____ctor(
              v60,
              v61,
              Method_RecommendSupportQuestBoardListViewManager___c__CreateQuestList_b__20_2__,
              0LL);
            v62 = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
            v62->__9__20_2 = (struct System_Predicate_ListViewItem__o *)v60;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&v62->__9__20_2, (int32_t)v60, v63, v64);
          }
          if ( v59 )
          {
            v65 = System_Collections_Generic_List_object___Find(
                    (System_Collections_Generic_List_object__o *)v59,
                    (System_Predicate_T__o *)v60,
                    (const MethodInfo_34D08C8 *)Method_System_Collections_Generic_List_ListViewItem__Find__);
            if ( v65 )
              ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v65[1].klass), 0LL);
            goto LABEL_58;
          }
        }
      }
    }
LABEL_59:
    sub_1B71828(Master_object, v27);
  }
LABEL_58:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15140/*"UpdateScrollPosition"*/,
    0.0,
    0LL);
  ActionExtensions__Call(callBack, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager__DispFolderList(
        RecommendSupportQuestBoardListViewManager_o *this,
        System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  SlideFadeObject_o *slideComponent; // x20
  const MethodInfo *v17; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v20; // s9
  System_Action_o *v21; // x19

  if ( (byte_4A1BD88 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, folderInfo);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__0__, v7);
    sub_1B715CC(&RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_TypeInfo, v8);
    byte_4A1BD88 = 1;
  }
  v9 = sub_1B71818(RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = folderInfo;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)folderInfo, v14, v15);
  *(_DWORD *)(v9 + 32) = warId;
  slideComponent = this->fields.slideComponent;
  this->fields.state = 1;
  OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v17);
  extiTime = this->fields.extiTime;
  v20 = OUT_POS_OFS_X;
  v21 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__0__,
    0LL);
  if ( !slideComponent )
LABEL_6:
    sub_1B71828(v10, v11);
  SlideFadeObject__SlideOut_33545668(slideComponent, v20, extiTime, 0.0, v21, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Stack_T__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  BalanceConfig_c *v20; // x0
  struct System_Collections_Generic_List_int__array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  unsigned __int64 v24; // x28
  __int64 i; // x29
  BalanceConfig_c *v26; // x0
  struct System_Collections_Generic_List_int__array *selectWarIdData; // x20
  System_Collections_Generic_List_int__o *v28; // x22
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x0
  const MethodInfo *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  RecommendSupportQuestBoardListViewManager___c_c *v33; // x0
  System_Action_object__o *_9__16_0; // x21
  Il2CppObject *v35; // x22
  struct RecommendSupportQuestBoardListViewManager___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x0

  if ( (byte_4A1BD83 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_List_int___TypeInfo, method);
    sub_1B715CC(&BalanceConfig_TypeInfo, v3);
    sub_1B715CC(&Method_BasicHelper_ForEach_List_int____, v4);
    sub_1B715CC(&Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___, v5);
    sub_1B715CC(&System_Collections_Generic_List_int____TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1B715CC(
      &Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo____ctor__,
      v9);
    sub_1B715CC(
      &System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___TypeInfo,
      v10);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager___c__Init_b__16_0__, v11);
    sub_1B715CC(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v12);
    byte_4A1BD83 = 1;
  }
  v13 = (System_Collections_Generic_Stack_T__o *)sub_1B71818(System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v13,
    (const MethodInfo_3723E00 *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo____ctor__);
  this->fields.folderTransitionData = (struct System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___o *)v13;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.folderTransitionData, (int32_t)v13, v14, v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2EAC480 *)Method_GameObjectExtensions_SafeGetComponent_SlideFadeObject___);
  this->fields.slideComponent = (struct SlideFadeObject_o *)Component_object;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.slideComponent, (int32_t)Component_object, v18, v19);
  v20 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  v21 = (struct System_Collections_Generic_List_int__array *)sub_1B71674(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               (unsigned int)v20->static_fields->RecommendSupportMemberMax);
  this->fields.selectWarIdData = v21;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.selectWarIdData, (int32_t)v21, v22, v23);
  v24 = 0LL;
  for ( i = 32LL; ; i += 8LL )
  {
    v26 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    selectWarIdData = this->fields.selectWarIdData;
    if ( (__int64)v24 >= v26->static_fields->RecommendSupportMemberMax )
      break;
    v28 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !selectWarIdData )
      goto LABEL_22;
    if ( v28 )
    {
      questSelectDialog = (RecommendSupportQuestSelectDialogComponent_o *)sub_1B71708(
                                                                            v28,
                                                                            selectWarIdData->obj.klass->_1.element_class);
      if ( !questSelectDialog )
      {
        v39 = sub_1B7184C();
        sub_1B716F4(v39, 0LL);
      }
    }
    if ( v24 >= selectWarIdData->max_length )
      sub_1B71830(questSelectDialog, v30);
    selectWarIdData->m_Items[v24] = v28;
    sub_1B71570((ServantStatusBattleListViewItem_o *)((char *)selectWarIdData + i), (int32_t)v28, v31, v32);
    ++v24;
  }
  v33 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  if ( !RecommendSupportQuestBoardListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
    v33 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
  }
  _9__16_0 = (System_Action_object__o *)v33->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = RecommendSupportQuestBoardListViewManager___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__16_0 = (System_Action_object__o *)sub_1B71818(System_Action_List_int___TypeInfo);
    System_Action_object____ctor(
      _9__16_0,
      v35,
      Method_RecommendSupportQuestBoardListViewManager___c__Init_b__16_0__,
      0LL);
    static_fields = RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Action_List_int___o *)_9__16_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v37, v38);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)selectWarIdData,
    (System_Action_T__o *)_9__16_0,
    (const MethodInfo_2E487A0 *)Method_BasicHelper_ForEach_List_int____);
  questSelectDialog = this->fields.questSelectDialog;
  if ( !questSelectDialog )
LABEL_22:
    sub_1B71828(questSelectDialog, v30);
  RecommendSupportQuestSelectDialogComponent__Init(questSelectDialog, v30);
}


void __fastcall RecommendSupportQuestBoardListViewManager__InitOpen(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *currentFolderInfoData; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_Stack_T__o *folderTransitionData; // x0

  if ( (byte_4A1BD84 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__,
      method);
    sub_1B715CC(
      &Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Clear__,
      v3);
    byte_4A1BD84 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 91, 0LL), (titleInfo = this->fields.titleInfo) == 0LL)
    || (TitleInfoControl__setBackBtnSprite_36984080(titleInfo, 1, 0, 0, 0LL), (titleInfo = this->fields.titleInfo) == 0LL) )
  {
    sub_1B71828(titleInfo, method);
  }
  TitleInfoControl__setBackBtnSprite(titleInfo, 3, 0LL);
  currentFolderInfoData = this->fields.currentFolderInfoData;
  if ( currentFolderInfoData )
  {
    size = currentFolderInfoData->fields._size;
    v7 = currentFolderInfoData->fields._version + 1;
    currentFolderInfoData->fields._size = 0;
    currentFolderInfoData->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentFolderInfoData->fields._items, 0, size, 0LL);
  }
  folderTransitionData = (System_Collections_Generic_Stack_T__o *)this->fields.folderTransitionData;
  if ( folderTransitionData )
    System_Collections_Generic_Stack_object___Clear(
      folderTransitionData,
      (const MethodInfo_3723FD4 *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Clear__);
  *(_QWORD *)&this->fields.hierarchyIndex = 0LL;
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
  __int64 v15; // x20
  System_Collections_Generic_Stack_T__o *Instance; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  RecommendSupportQuestBoardListViewItem_o *Item; // x0
  __int64 v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  int v24; // w21
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x1
  __int64 v30; // x21
  struct System_Collections_Generic_List_int__array *selectWarIdData; // x22
  __int64 klass_low; // x8
  System_Collections_Generic_List_int__o *v33; // x22
  int32_t size; // w25
  int32_t hierarchyIndex; // w26
  __int64 v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x8
  __int64 v42; // x8
  __int64 v43; // x1
  __int64 v44; // x8
  RecommendSupportQuestBoardListViewItem_o *v45; // x20
  RecommendSupportQuestSelectDialogComponent_o *questSelectDialog; // x19
  int klass; // w23
  int v48; // w24
  System_Action_o *v49; // x22
  const MethodInfo *v50; // x4
  __int64 v51; // x8
  __int64 v52; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8
  const MethodInfo *v57; // x3
  __int64 v58; // x8
  __int64 v59; // x9
  __int64 v60; // x8
  struct System_Int32_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  SlideFadeObject_o *slideComponent; // x21
  const MethodInfo *v65; // x1
  float OUT_POS_OFS_X; // s0
  float extiTime; // s8
  float v68; // s9
  System_Action_o *v69; // x19

  if ( (byte_4A1BD87 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, obj);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__set_Item__, v7);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager_OnClickListView__, v8);
    sub_1B715CC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v9);
    sub_1B715CC(
      &Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Push__,
      v10);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__0__, v11);
    sub_1B715CC(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo, v12);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__OnClickListView_b__3__, v13);
    sub_1B715CC(&RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo, v14);
    byte_4A1BD87 = 1;
  }
  v15 = sub_1B71818(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_57;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  if ( !obj )
    goto LABEL_57;
  Item = RecommendSupportQuestBoardListViewObject__GetItem(obj, v17);
  *(_QWORD *)(v15 + 32) = Item;
  v21 = v15 + 32;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)Item, v22, v23);
  if ( !*(_QWORD *)(v15 + 32) )
    goto LABEL_57;
  v24 = *(unsigned __int8 *)(*(_QWORD *)(v15 + 32) + 128LL);
  v25 = Method_RecommendSupportQuestBoardListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_1B715E4(Method_RecommendSupportQuestBoardListViewManager_OnClickListView__);
  v26 = (System_Reflection_MethodBase_o *)sub_1B715B0(v25, v25[4]);
  if ( v24 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
  if ( !*(_QWORD *)v21 )
    goto LABEL_57;
  v29 = *(_QWORD *)(*(_QWORD *)v21 + 112LL);
  *(_QWORD *)(v15 + 24) = v29;
  v30 = v15 + 24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v15 + 24), v29, v27, v28);
  selectWarIdData = this->fields.selectWarIdData;
  Instance = (System_Collections_Generic_Stack_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance || !selectWarIdData )
    goto LABEL_57;
  klass_low = SLODWORD(Instance[3].klass);
  if ( (unsigned int)klass_low >= selectWarIdData->max_length )
    sub_1B71830(Instance, v17);
  v33 = selectWarIdData->m_Items[klass_low];
  if ( !v33 )
    goto LABEL_57;
  if ( *(_QWORD *)v30 )
  {
    size = v33->fields._size;
    hierarchyIndex = this->fields.hierarchyIndex;
    Instance = (System_Collections_Generic_Stack_T__o *)BasicHelper__IsNullOrEmpty(
                                                          *(System_Collections_ICollection_o **)(*(_QWORD *)v30 + 40LL),
                                                          0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( size <= hierarchyIndex )
      {
        if ( !*(_QWORD *)v30 )
          goto LABEL_57;
        v52 = *(_QWORD *)(*(_QWORD *)v30 + 16LL);
        if ( !v52 )
          goto LABEL_57;
        v17 = (const MethodInfo *)*(unsigned int *)(v52 + 16);
        items = v33->fields._items;
        v54 = Method_System_Collections_Generic_List_int__Add__;
        ++v33->fields._version;
        if ( !items )
          goto LABEL_57;
        v55 = v33->fields._size;
        if ( (unsigned int)v55 >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v33,
            (int32_t)v17,
            *(const MethodInfo_34B323C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v33->fields._size = v55 + 1;
          items->m_Items[v55 + 1] = (int)v17;
        }
      }
      else
      {
        if ( !*(_QWORD *)v30 )
          goto LABEL_57;
        v51 = *(_QWORD *)(*(_QWORD *)v30 + 16LL);
        if ( !v51 )
          goto LABEL_57;
        System_Collections_Generic_List_int___set_Item(
          v33,
          this->fields.hierarchyIndex,
          *(_DWORD *)(v51 + 16),
          (const MethodInfo_34B2FA0 *)Method_System_Collections_Generic_List_int__set_Item__);
      }
      Instance = (System_Collections_Generic_Stack_T__o *)this->fields.folderTransitionData;
      ++this->fields.hierarchyIndex;
      if ( !Instance )
        goto LABEL_57;
      System_Collections_Generic_Stack_object___Push(
        Instance,
        (Il2CppObject *)this->fields.currentFolderInfoData,
        (const MethodInfo_3724428 *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Push__);
      v58 = *(_QWORD *)v30;
      if ( !*(_QWORD *)v30 )
        goto LABEL_57;
      v59 = *(_QWORD *)(v58 + 16);
      if ( !v59 )
        goto LABEL_57;
      RecommendSupportQuestBoardListViewManager__DispFolderList(
        this,
        *(System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o **)(v58 + 40),
        *(_DWORD *)(v59 + 16),
        v57);
      return;
    }
    if ( *(_QWORD *)v30 )
    {
      Instance = (System_Collections_Generic_Stack_T__o *)BasicHelper__IsNullOrEmpty(
                                                            *(System_Collections_ICollection_o **)(*(_QWORD *)v30 + 32LL),
                                                            0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( size <= hierarchyIndex )
        {
          if ( !*(_QWORD *)v30 )
            goto LABEL_57;
          v60 = *(_QWORD *)(*(_QWORD *)v30 + 16LL);
          if ( !v60 )
            goto LABEL_57;
          v17 = (const MethodInfo *)*(unsigned int *)(v60 + 16);
          v61 = v33->fields._items;
          v62 = Method_System_Collections_Generic_List_int__Add__;
          ++v33->fields._version;
          if ( !v61 )
            goto LABEL_57;
          v63 = v33->fields._size;
          if ( (unsigned int)v63 >= v61->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v33,
              (int32_t)v17,
              *(const MethodInfo_34B323C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v33->fields._size = v63 + 1;
            v61->m_Items[v63 + 1] = (int)v17;
          }
        }
        else
        {
          if ( !*(_QWORD *)v30 )
            goto LABEL_57;
          v56 = *(_QWORD *)(*(_QWORD *)v30 + 16LL);
          if ( !v56 )
            goto LABEL_57;
          System_Collections_Generic_List_int___set_Item(
            v33,
            this->fields.hierarchyIndex,
            *(_DWORD *)(v56 + 16),
            (const MethodInfo_34B2FA0 *)Method_System_Collections_Generic_List_int__set_Item__);
        }
        Instance = (System_Collections_Generic_Stack_T__o *)this->fields.folderTransitionData;
        ++this->fields.hierarchyIndex;
        if ( !Instance )
          goto LABEL_57;
        System_Collections_Generic_Stack_object___Push(
          Instance,
          (Il2CppObject *)this->fields.currentFolderInfoData,
          (const MethodInfo_3724428 *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Push__);
        slideComponent = this->fields.slideComponent;
        this->fields.state = 1;
        OUT_POS_OFS_X = RecommendSupportQuestBoardListViewManager__get_OUT_POS_OFS_X(this, v65);
        extiTime = this->fields.extiTime;
        v68 = OUT_POS_OFS_X;
        v69 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
        System_Action___ctor(
          v69,
          (Il2CppObject *)v15,
          Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__0__,
          0LL);
        if ( !slideComponent )
          goto LABEL_57;
        SlideFadeObject__SlideOut_33545668(slideComponent, v68, extiTime, 0.0, v69, 0LL);
        return;
      }
    }
  }
  if ( !*(_QWORD *)v21 )
    goto LABEL_57;
  if ( *(_QWORD *)(*(_QWORD *)v21 + 120LL) )
  {
    v36 = sub_1B71818(RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v36, 0LL);
    if ( v36 )
    {
      *(_QWORD *)(v36 + 32) = v15;
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v36 + 32), v15, v37, v38);
      v41 = *(_QWORD *)(v36 + 32);
      if ( v41 )
      {
        v42 = *(_QWORD *)(v41 + 32);
        if ( v42 )
        {
          v43 = *(_QWORD *)(v42 + 120);
          *(_QWORD *)(v36 + 16) = v43;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v36 + 16), v43, v39, v40);
          v44 = *(_QWORD *)(v36 + 32);
          if ( v44 )
          {
            v45 = *(RecommendSupportQuestBoardListViewItem_o **)(v44 + 32);
            if ( v45 )
            {
              *(_DWORD *)(v36 + 24) = v45->fields._SettingSelectIndex_k__BackingField;
              questSelectDialog = this->fields.questSelectDialog;
              Instance = (System_Collections_Generic_Stack_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( Instance )
              {
                klass = (int)Instance[3].klass;
                v48 = *(_DWORD *)(v36 + 24);
                v49 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
                System_Action___ctor(
                  v49,
                  (Il2CppObject *)v36,
                  Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1__OnClickListView_b__3__,
                  0LL);
                if ( questSelectDialog )
                {
                  RecommendSupportQuestSelectDialogComponent__Open(questSelectDialog, v45, klass == v48, v49, v50);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_1B71828(Instance, v17);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnDestroy(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w3
  __int64 v4; // x1
  struct System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *currentFolderInfoData; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_Stack_T__o *folderTransitionData; // x0
  ServantStatusBattleListViewItem_o *p_folderTransitionData; // x19
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A1BD8A & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__Clear__,
      method);
    sub_1B715CC(
      &Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Clear__,
      v4);
    byte_4A1BD8A = 1;
  }
  currentFolderInfoData = this->fields.currentFolderInfoData;
  if ( currentFolderInfoData )
  {
    size = currentFolderInfoData->fields._size;
    v7 = currentFolderInfoData->fields._version + 1;
    currentFolderInfoData->fields._size = 0;
    currentFolderInfoData->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)currentFolderInfoData->fields._items, 0, size, 0LL);
    this->fields.currentFolderInfoData = 0LL;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.currentFolderInfoData, 0, size, v2);
  }
  folderTransitionData = (System_Collections_Generic_Stack_T__o *)this->fields.folderTransitionData;
  if ( folderTransitionData )
  {
    p_folderTransitionData = (ServantStatusBattleListViewItem_o *)&this->fields.folderTransitionData;
    System_Collections_Generic_Stack_object___Clear(
      folderTransitionData,
      (const MethodInfo_3723FD4 *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Clear__);
    p_folderTransitionData->klass = 0LL;
    sub_1B71570(p_folderTransitionData, 0, v10, v11);
  }
}


void __fastcall RecommendSupportQuestBoardListViewManager__OnclickBack(
        RecommendSupportQuestBoardListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  void *Instance; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *v11; // x20
  const MethodInfo *v12; // x3

  if ( (byte_4A1BD89 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__,
      method);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager_OnclickBack__, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1B715CC(
      &Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Pop__,
      v5);
    byte_4A1BD89 = 1;
  }
  if ( !this->fields.state )
  {
    v6 = Method_RecommendSupportQuestBoardListViewManager_OnclickBack__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestBoardListViewManager_OnclickBack__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B715E4(Method_RecommendSupportQuestBoardListViewManager_OnclickBack__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B715B0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.folderTransitionData, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( Instance )
      {
        RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v10);
        return;
      }
LABEL_13:
      sub_1B71828(Instance, v8);
    }
    Instance = this->fields.folderTransitionData;
    --this->fields.hierarchyIndex;
    if ( !Instance )
      goto LABEL_13;
    Instance = System_Collections_Generic_Stack_object___Pop(
                 (System_Collections_Generic_Stack_T__o *)Instance,
                 (const MethodInfo_37243C8 *)Method_System_Collections_Generic_Stack_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___Pop__);
    if ( !Instance )
      goto LABEL_13;
    v11 = (System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *)Instance;
    Instance = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 0,
                 (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_Item__);
    if ( !Instance )
      goto LABEL_13;
    RecommendSupportQuestBoardListViewManager__DispFolderList(this, v11, *((_DWORD *)Instance + 6), v12);
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
    sub_1B71828(scrollView, method);
  }
  UIScrollView__UpdatePosition(scrollView, 0LL);
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
  int32_t v4; // w3

  if ( (byte_4A1BD8B & 1) == 0 )
  {
    sub_1B715CC(&RecommendSupportQuestBoardListViewManager___c_TypeInfo, v1);
    byte_4A1BD8B = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(RecommendSupportQuestBoardListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestBoardListViewManager___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)RecommendSupportQuestBoardListViewManager___c_TypeInfo->static_fields,
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


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__20_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  struct QuestEntity_o *questEntity; // x8

  if ( !x || (questEntity = x->fields.questEntity) == 0LL )
    sub_1B71828(this, x);
  return questEntity->fields.priority;
}


int32_t __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__20_1(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return x->fields.phase;
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c___CreateQuestList_b__20_2(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 methodPtr_low; // x9
  int32_t index; // w19
  RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_o *v8; // x0
  ListViewItem_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4A1BD8D & 1) == 0 )
  {
    sub_1B715CC(&RecommendSupportQuestBoardListViewItem_TypeInfo, item);
    this = (RecommendSupportQuestBoardListViewManager___c_o *)sub_1B715CC(
                                                                &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                                v4);
    byte_4A1BD8D = 1;
  }
  if ( !item )
    goto LABEL_8;
  methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
  {
    index = item[1].fields.index;
    this = (RecommendSupportQuestBoardListViewManager___c_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( this )
      return index == LODWORD(this[7].monitor);
LABEL_8:
    sub_1B71828(this, item);
  }
  v8 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_o *)sub_1B71AE8(item);
  return RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0___CreateChapterList_b__0(v8, v9, v10);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c___Init_b__16_0(
        RecommendSupportQuestBoardListViewManager___c_o *this,
        System_Collections_Generic_List_int__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x0

  if ( (byte_4A1BD8C & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, x);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4A1BD8C = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0___CreateChapterList_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewItem_o *v3; // x20
  RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_o *v4; // x19
  __int64 methodPtr_low; // x9
  ListViewItem_c *klass; // x8
  const char *name; // x8
  bool result; // w0
  RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *v9; // x0
  const MethodInfo *v10; // x1

  v3 = item;
  v4 = this;
  if ( (byte_4A1BD8E & 1) == 0 )
  {
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass19_0_o *)sub_1B715CC(
                                                                                  &RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                                                  item);
    byte_4A1BD8E = 1;
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
        return *((_DWORD *)name + 4) == v4->fields.moveWarId;
    }
LABEL_9:
    sub_1B71828(this, item);
  }
  v9 = (RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *)sub_1B71AE8(v3);
  RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___OnClickListView_b__0(v9, v10);
  return result;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___OnClickListView_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *v3; // x19
  __int64 v4; // x1
  struct RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *folderInfo; // x8
  struct WarEntity_o *warEntity; // x9
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestInfo__o *questList; // x21
  int32_t id; // w22
  System_Action_o *_9__1; // x23
  int32_t v11; // w2
  int32_t v12; // w3

  v3 = this;
  if ( (byte_4A1BD8F & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *)sub_1B715CC(
                                                                                  &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__1__,
                                                                                  v4);
    byte_4A1BD8F = 1;
  }
  folderInfo = v3->fields.folderInfo;
  if ( !folderInfo )
    goto LABEL_9;
  warEntity = folderInfo->fields.warEntity;
  if ( !warEntity )
    goto LABEL_9;
  _4__this = v3->fields.__4__this;
  questList = folderInfo->fields.questList;
  id = warEntity->fields.id;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v11, v12);
  }
  if ( !_4__this )
LABEL_9:
    sub_1B71828(this, method);
  RecommendSupportQuestBoardListViewManager__CreateQuestList(_4__this, questList, id, _9__1, v2);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___OnClickListView_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
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
  int32_t v12; // w3

  if ( (byte_4A1BD90 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__2__, v3);
    byte_4A1BD90 = 1;
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
    _9__2 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0__OnClickListView_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1B71828(_4__this, method);
  SlideFadeObject__SlideIn_33544724(slideComponent, v10, intoTime, 0.0, _9__2, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0___OnClickListView_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewManager_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *)_4__this->fields.slideComponent) == 0LL)
    || (SlideFadeObject__ResetPosition((SlideFadeObject_o *)this, 0LL), (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1B71828(this, method);
  }
  v4->fields.state = 0;
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1___OnClickListView_b__3(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  RecommendSupportData_o *klass; // x20
  struct RecommendSupportQuestBoardListViewManager___c__DisplayClass21_0_o *CS___8__locals1; // x8
  struct RecommendSupportQuestBoardListViewItem_o *item; // x8
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4A1BD91 & 1) == 0 )
  {
    sub_1B715CC(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, method);
    sub_1B715CC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3);
    byte_4A1BD91 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  klass = (RecommendSupportData_o *)Instance[7].klass;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( !klass )
    goto LABEL_17;
  RecommendSupportData__SetQuest(klass, (int32_t)Instance[7].monitor, this->fields.info, 0LL);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_17;
  item = CS___8__locals1->fields.item;
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsSetting_k__BackingField )
    goto LABEL_15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)Instance[7].klass) == 0LL
    || (RecommendSupportData__SetQuest((RecommendSupportData_o *)Instance, this->fields.index, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Instance = RecommendSupportSelectControl__GetMenu_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_2EEC2E8 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___)) == 0LL
    || (Instance = (Il2CppObject *)Instance[10].klass) == 0LL )
  {
LABEL_17:
    sub_1B71828(Instance, v5);
  }
  RecommendSupportListViewManager__SetItemSub((RecommendSupportListViewManager_o *)Instance, this->fields.index, v9);
LABEL_15:
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  RecommendSupportSelectControl__SetState((RecommendSupportSelectControl_o *)Instance, 0, v10);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0___ctor(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0___DispFolderList_b__0(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__1; // x23
  RecommendSupportQuestBoardListViewManager_o *_4__this; // x20
  System_Collections_Generic_List_RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__o *folderInfo; // x21
  int32_t warId; // w22
  int32_t v9; // w2
  int32_t v10; // w3

  v3 = this;
  if ( (byte_4A1BD92 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *)sub_1B715CC(
                                                                                  &Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__1__,
                                                                                  v4);
    byte_4A1BD92 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  folderInfo = v3->fields.folderInfo;
  warId = v3->fields.warId;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !_4__this )
    sub_1B71828(this, method);
  RecommendSupportQuestBoardListViewManager__CreateChapterList(_4__this, folderInfo, warId, _9__1, v2);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0___DispFolderList_b__1(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *this,
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
  int32_t v12; // w3

  if ( (byte_4A1BD93 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__2__, v3);
    byte_4A1BD93 = 1;
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
    _9__2 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0__DispFolderList_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !slideComponent )
LABEL_9:
    sub_1B71828(_4__this, method);
  SlideFadeObject__SlideIn_33544724(slideComponent, v10, intoTime, 0.0, _9__2, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0___DispFolderList_b__2(
        RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  struct RecommendSupportQuestBoardListViewManager_o *_4__this; // x8
  RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *v3; // x19
  struct RecommendSupportQuestBoardListViewManager_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (RecommendSupportQuestBoardListViewManager___c__DisplayClass23_0_o *)_4__this->fields.slideComponent) == 0LL)
    || (SlideFadeObject__ResetPosition((SlideFadeObject_o *)this, 0LL), (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1B71828(this, method);
  }
  v4->fields.state = 0;
}